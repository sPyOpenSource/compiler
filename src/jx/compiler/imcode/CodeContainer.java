package jx.compiler.imcode;

import java.util.ArrayList;
import java.util.HashMap;
import jx.zero.Debug;

import jx.classfile.datatypes.*;
import jx.classfile.constantpool.*;
import jx.classfile.*;
import jx.classfile.Opcodes;

import jx.compiler.CompileException;
import jx.compiler.StatisticInfo;
import jx.compiler.execenv.*;
import jx.compiler.imcode.graph.*;
import jx.compiler.imcode.graph.inst.*;
import jx.compiler.imcode.graph.inst.ALU.IMAdd;
import jx.compiler.imcode.graph.inst.ALU.IMDiv;
import jx.compiler.imcode.graph.inst.ALU.IMInc;
import jx.compiler.imcode.graph.inst.ALU.IMMul;
import jx.compiler.imcode.graph.inst.ALU.IMNeg;
import jx.compiler.imcode.graph.inst.ALU.IMRem;
import jx.compiler.imcode.graph.inst.ALU.IMSub;
import jx.compiler.nativecode.*;
import jx.compiler.symbols.*;

class JumpStack {
    private IMBasicBlock[] stack;
    private int pos;

    public JumpStack() {
        stack = new IMBasicBlock[60];
        pos = 0;
    }

    public void push(IMBasicBlock node) {
        stack[pos++] = node;
        if (pos == stack.length) {
            IMBasicBlock[] new_stack = new IMBasicBlock[stack.length + 10];
            System.arraycopy(stack, 0, new_stack, 0, stack.length);
            stack = new_stack;
        }
    }

    public IMBasicBlock pop() {
        if (pos <= 0) {
            return null;
        }
        return stack[--pos];
    }
}

public class CodeContainer implements NativeCodeContainer {
    private static int id = 0;
    private int myid;

    private IMNode imCodeStart;
    private IMNode imCodeEnd;
    private IMNode current;
    private int    numberOfInstr;

    private IMBasicBlock  label_list;
    private IMNode        bc_list_top;
    private IMNode        bc_list_end;

    private BCMethodWithCode method;
    private MethodStackFrame frame;
    private ConstantPool     cPool;
    private BinaryCodeIA32   code;
    private RegManager       regs;
    private ExecEnvironmentInterface execEnv;
    private CompilerOptionsInterface opts;

    private IMBasicBlock     epilog;
    private int              numberOfBasicBlocks;

    private boolean          smallMethod      = true;
    private boolean          leafMethod       = true;
    private boolean          experimentalCode = true;

    private ExceptionHandlerData[] handlers;
    private IMBasicBlock[]         expHandlerList;

    private StatisticInfo stat;

    public CodeContainer(ExecEnvironmentInterface execEnv,
             BCMethodWithCode method) {
        this(execEnv, method, new StatisticInfo());
    }

    public CodeContainer(ExecEnvironmentInterface execEnv,
             BCMethodWithCode method,
             StatisticInfo stat) {
    // CodeContainer
    imCodeStart = null;
    imCodeEnd = null;
    current = null;
    numberOfInstr = 0;
    this.method = method;
    this.stat = stat;
    myid = id++;
    numberOfBasicBlocks = 0;

    // Coder
    bc_list_top = null;
    bc_list_end = null;
    this.cPool = method.getConstantPool();
    this.handlers = method.getExceptionHandlers();

    // NativeCodeContainer
    code = new BinaryCodeIA32();
    this.execEnv = execEnv;    
    this.opts    = execEnv.getCompilerOptions();

    frame = new MethodStackFrame(code, method);
    }

    public void setNoTranslate() {
    method = null;
    regs   = null;
    code   = null;
    frame  = null;
    }

    public int getID() {
    return myid;
    }

    public void init() throws CompileException {
    regs = new RegManager();
    regs.init(this);
    epilog = new IMBasicBlock(this, true);
    readBCInstruction(method.getBytecodeStream());
    }

    public BCMethod getBCMethod() {
    return (BCMethod)method;
    }

    public String getClassName() {
    return method.getClassName();
    }

    public String getMethodName() {
    return method.getName();
    }

    public StatisticInfo getStatisticInfo() {
    return stat;
    }

    public ExecEnvironmentInterface getExecEnv() {
    return execEnv;
    }

    public CompilerOptionsInterface getOpts() {
    return opts;
    }

    public MethodStackFrame getMethodStackFrame() {
    return frame;
    }

    @Override
    public int getLocalVarSize() {
    return frame.getStackFrameSize()/4;
    }

    public ConstantPool getConstantPool() {
    return cPool;
    }

    public BinaryCodeIA32 getIA32Code() {
    return code;
    }

    public jx.compiler.nativecode.RegManager getRegManager() {
    return regs;
    }

    @Override
    public BinaryCode getMachineCode() {
    return code.getOldBinaryCode();
    }

    @Override
    public ArrayList getInstructionTable() {
    return code.getInstructionTable();
    }

    public int getNumberOfBasicBlocks() {
    return  numberOfBasicBlocks;
    }

    public IMBasicBlock getEpilog() {
    return epilog;
    }

    public boolean isSmallMethod() {
    return smallMethod;
    }

    public boolean isLeafMethod() {
    return leafMethod;
    }

    public void readBCInstruction(BytecodeInputStream bcStream) throws CompileException {
    // ==========================================
    // 1. PASS
    // ==========================================
    // in the first pass we will translate the 
    // bytecode into imcode-Objects, and create
    // the basicblocks and labels
    // ==========================================

    IMBasicBlock basicBlock = createBasicBlock(bcStream.getCurrentPosition(), 0);

    expHandlerList = null;
    if (opts.doExceptions()) {
        if (handlers != null && handlers.length > 0) {
            expHandlerList = new IMBasicBlock[handlers.length];
            HashMap<String, ExceptionHandlerData> map = new HashMap<>();
            for (ExceptionHandlerData handler : handlers) {
                map.put(Integer.toString(handler.getHandlerBCIndex()), handler);
            }
            expHandlerList = new IMBasicBlock[map.size()];
            int i = 0;
            for (ExceptionHandlerData index : map.values()) {
                createBasicBlock(index.getStartBCIndex(), 0);
                createBasicBlock(index.getEndBCIndex(), 0);
                expHandlerList[i] = createBasicBlock(index.getHandlerBCIndex(), 0);
                expHandlerList[i].setExceptionHandler(new ExceptionTableSTEntry(cPool, index));
                i++;
            }
        } 
    }

    while (bcStream.hasMore()) {
        IMNode node = BCParser(bcStream);
        if(node != null) insertBCList(node);
    }
        
    // ===============================================
    // 2. Pass
    // ===============================================
    // merge BasicBlockList and ByteCodeList
    // ===============================================

    IMNode node = bc_list_top;
    if (label_list != null && label_list.getBCPosition() <= node.getBCPosition()) {
        // remove from labellist
        basicBlock = label_list;
        label_list = (IMBasicBlock)label_list.bc_next;
        // insert basicblock befor bytcodelist
        basicBlock.bc_next = bc_list_top;
        bc_list_top = basicBlock;
    }

    while (node.bc_next != null) {
        int bcpos = node.bc_next.getBCPosition();
        while (label_list != null) {
        if (label_list.getBCPosition() <= bcpos) {
            // remove from labellist
            basicBlock = label_list;
            label_list = (IMBasicBlock)label_list.bc_next;
            // insert befor node.bc_next
            basicBlock.bc_next = node.bc_next;
            node.bc_next = basicBlock;
        } else if (label_list.getBCPosition() < bcpos) {
            // remove labels which not match
            System.err.println("delete label " + label_list);
            label_list = (IMBasicBlock)label_list.bc_next; 
        } else {
            break;
        }
        numberOfBasicBlocks++;
        }
        node = node.bc_next;
    }
        
    // ===============================================
    // 3. Pass
    // ===============================================
    // now we will process the virtual operanten stack 
    // ===============================================

    VirtualOperantenStack oprStack = new VirtualOperantenStack(this);
    JumpStack stack = new JumpStack();

    basicBlock = null;
    if (bc_list_top.isBasicBlock())
        basicBlock = (IMBasicBlock)bc_list_top;

    int expHandler = 0;
    if (opts.doExceptions())
        if (expHandlerList != null) expHandler = expHandlerList.length;

    while (basicBlock != null) {
        join(basicBlock);
        basicBlock.processBasicBlock(oprStack);
        IMBasicBlock[] nextBB = basicBlock.getSucc();
        IMOperant[]    leave  = basicBlock.getLeaveStack();
        if (basicBlock.isSubroutine()) {
            basicBlock = stack.pop();
        if (basicBlock != null) {
            basicBlock.setInitStack(leave);
            continue;
        }
        break;
        }
        if (nextBB != null) {
        for (int i = nextBB.length - 1; i >= 0; i--) {
            if (nextBB[i] != null) {
            nextBB[i].setInitStack(leave);
            stack.push(nextBB[i]);
            } else {
            System.err.println("nextBB[" + Integer.toString(i) + "]==null\n");
            }
        }
        }
        basicBlock = stack.pop();
        while (basicBlock != null && basicBlock.done) {
        basicBlock = stack.pop();
        }

        if (basicBlock == null && expHandler > 0) {
        IMOperant[] enterStack = new IMOperant[1];
        enterStack[0] = new IMCaughtException(this);
        basicBlock = expHandlerList[--expHandler];
        basicBlock.setInitStack(enterStack);
        }
    }
    
    // ===============================================
    // 4. Pass
    // ===============================================
    // found special code pattern
    // ===============================================
    IMNode inode = imCodeStart;
    int ic = 0;
    smallMethod = true;
    
    while (inode != null) {        
        if (inode.isBasicBlock()) {
            basicBlock = (IMBasicBlock)inode;
        } else if (inode.isInstruction()) {
        if (inode.isThrow()) basicBlock.setLowPriorityPath();

        if (inode.isBlockVariable() && inode.next != null) optPatternBlockVar((IMStoreBlockVariable)inode);

        if (experimentalCode && opts.doOptimize()) {
          if (inode instanceof IMGoto igoto) {
            IMBasicBlock targets[] = igoto.getTargets();
            
            /* nur 91 faelle
            if (targets[0].next instanceof IMGoto) {
              igoto.addDebugInfo("forward goto");
            }
            */

            if (targets[0].next.isReturn())
            igoto.addDebugInfo("forward return");            
          }
        }

        // test if it is a "small method"
        if (smallMethod) {
            // void-returns won't count
            if (inode.isReturn())
            if (((IMReturn)inode).isVoidReturn()) ic--;
            ic++;
            if (ic > 1) smallMethod = false;
        }
        } /* instuction */        
        inode = inode.next;
    } /* while */

    append(epilog);

    // ===============================================
    // 5. Pass
    // ===============================================
    // resort basic blocks
    // ===============================================

    if (opts.isOption("O5")) {
        inode = imCodeStart;
        while (inode != null) {
            if (inode.isBasicBlock()) {
                basicBlock = (IMBasicBlock)inode;
            } else if (inode.isInstruction() && inode.next != null) {
                if (opts.doOptExecPath() || opts.isOption("path_" + method.getClassName() + "." + method.getName())) {
                if (inode.isEndOfBasicBlock() &&
                    inode.isBranch() &&
                    inode.next.isLowPriorityPath()) {
                    if (inode instanceof IMConditionalBranch bnode) {
                    IMBasicBlock succ[] = bnode.getTargets();

                    if (opts.doVerbose("path"))
                        Debug.out.println("o:" + bnode.toString());

                    try {
                        bnode.addDebugInfo("swap jump " + succ[0].toLabel() + " " + succ[1].toLabel());
                    } catch (Exception ex) {
                        bnode.addDebugInfo("swap jump");
                    }

                    moveBasicBlockToEnd(succ[0]);

                    bnode.swapJumpTargets();

                    if (opts.doVerbose("path"))
                        Debug.out.println("n:" + bnode.toString());
                    }
                }
                }
            }
            inode = inode.next;
        } /* while */
    }
    }

    public IMNode BCParser(BytecodeInputStream bcStream) throws CompileException {
        int current = bcStream.readUnsignedByte();
        if (current == Opcodes.UNUSED) {
            return null;
        }
        boolean hasWidePrefix = false;
        int ip = bcStream.getCurrentPosition() - 1;
        if (current == Opcodes.WIDE) {
            hasWidePrefix = true;
            current = bcStream.readUnsignedByte();
            ip = bcStream.getCurrentPosition();
        }
        
        // should we implement the nop operation ?!?
        // public static const int BC.NOP 0x00;
        if (current == Opcodes.NOP) {
            return(new IMNop(this, ip));
        }
        // immediate constants
        if (current >= Opcodes.ACONST_NULL && current <= Opcodes.SIPUSH) {
            IMConstant opr = null;
            if (current <= Opcodes.DCONST_1) {
                opr = new IMConstant(this, current, ip);
            } else if (current == Opcodes.BIPUSH) {
                int bi = (int) bcStream.readByte();
                opr = new IMConstant(this, current, ip, bi);
            } else if (current == Opcodes.SIPUSH) {
                int si = bcStream.readShort();
                opr = new IMConstant(this, current, ip, si);
            }   
            return(opr);
        }
        // constants form constantpool
        // read constants from pool [index 1-2]
        if (current >= Opcodes.LDC && current <= Opcodes.LDC2_W) {
            int cpIndex;
            if (current == Opcodes.LDC) cpIndex = bcStream.readUnsignedByte();
            else cpIndex = bcStream.readUnsignedShort();
            ConstantPoolEntry cpEntry = cPool.constantEntryAt(cpIndex);
            return new IMConstant(this, current, ip, cpEntry);
        }
        // read local variables
        if (current >= Opcodes.ILOAD && current <= Opcodes.ALOAD_3) {
            IMReadLocalVariable opr;
            if (current <= Opcodes.ALOAD) {
                int vi;
                
                if (hasWidePrefix) vi = bcStream.readUnsignedShort();
                else vi = bcStream.readUnsignedByte();
                
                opr = new IMReadLocalVariable(this, current, ip, vi);
            } else {
                opr = new IMReadLocalVariable(this, current, ip);
            }   
            return(opr);
        }
        if (current == Opcodes.IINC) {
            int vIndex, value;
            if (hasWidePrefix) {
                vIndex = bcStream.readUnsignedShort();
                value  = bcStream.readUnsignedShort();
            } else {
                vIndex = bcStream.readUnsignedByte();
                value  = bcStream.readByte();
            }   
            return(new IMInc(this, current, ip, vIndex, value));
        }
        // read array values
        if (current >= Opcodes.IALOAD && current <= Opcodes.SALOAD) {
            return new IMReadArray(this, current, ip);
        }
        if (current >= Opcodes.ISTORE && current <= Opcodes.ASTORE_3) {
            IMStoreLocalVariable opr;
            if (current <= Opcodes.ASTORE) {
                int vi;
                if (hasWidePrefix)
                    vi = bcStream.readUnsignedShort();
                else
                    vi = bcStream.readUnsignedByte();
                opr = new IMStoreLocalVariable(this, current, ip, vi);
            } else {
                opr = new IMStoreLocalVariable(this, current, ip);
            }   
            return(opr);
        }
        if (current >= Opcodes.IASTORE && current <= Opcodes.SASTORE) {
            return new IMStoreArray(this, current, ip);
        }
        if (current >= Opcodes.POP && current <= Opcodes.SWAP) {
            return new IMStackOperation(this, current, ip);
        }
        // arithmetic types
        // IMArithmetic
        if (current <= Opcodes.DREM) {
            IMOperator opr;
            if (current <= Opcodes.DADD) {
                opr = new IMAdd(this, current, ip);
            } else if (current <= Opcodes.DSUB) {
                opr = new IMSub(this, current, ip);
            } else if (current <= Opcodes.DMUL) {
                opr = new IMMul(this, current, ip);
            } else if (current <= Opcodes.DDIV) {
                opr = new IMDiv(this, current, ip);
            } else {
                opr = new IMRem(this, current, ip);
            }   
            return(opr);
        }
        if (current <= Opcodes.DNEG) {
            return new IMNeg(this, current, ip);
        }
        if (current <= Opcodes.LXOR) {
            return IMBitOperator.getIMOperator(this, current, ip);
        }
        // type casting
        if (current <= Opcodes.I2S) {
            return new IMCast(this, current, ip);
        }
        // compare long,float and double read spec carefuly !!!
        if (current <= Opcodes.DCMPG) {
            return new IMCompare(this, current, ip);
        }
        // conditinal branch
        IMBasicBlock des;
        if (current <= Opcodes.IF_ACMPNE ||
                current == Opcodes.IFNULL ||
                current == Opcodes.IFNONNULL) {
            int offset = bcStream.readShort();
            des = createBasicBlock(ip, offset);
            if (offset < 0) des.setLoopEntry(true);
            return new IMConditionalBranch(this, current, ip, des);
        }
        if (current == Opcodes.GOTO || current == Opcodes.GOTO_W) {
            int offset;
            if (current == Opcodes.GOTO) offset = bcStream.readShort();
            else offset = bcStream.readInt();
            des = createBasicBlock(ip, offset);
            return new IMGoto(this, current, ip, des);
        }
        if (current == Opcodes.JSR || current == Opcodes.JSR_W) {
            int offset;
            if (current == Opcodes.JSR) offset = bcStream.readShort();
            else offset = bcStream.readInt();
            des = createBasicBlock(ip, offset);
            return new IMCall(this, current, ip, des);
        }
        if (current == Opcodes.RET) {
            int vindex;
            if (hasWidePrefix)
                vindex = bcStream.readUnsignedShort();
            else
                vindex = bcStream.readUnsignedByte();
            return new IMReturnSubroutine(this, current, ip, vindex);
        }
        if (current == Opcodes.TABLESWITCH) {
            // skip padding zeroes
            while (bcStream.getCurrentPosition() % 4 != 0) bcStream.readByte();
            IMBasicBlock doff = createBasicBlock(ip, bcStream.readInt());
            int low  = bcStream.readInt();
            int high = bcStream.readInt();
            int size = high - low + 1;
            IMBasicBlock[] offsets = new IMBasicBlock[size];
            for (int i = 0; i < size; i++)
                offsets[i] = createBasicBlock(ip, bcStream.readInt());
            return new IMTableSwitch(this, current, ip, doff, low, high, offsets);
        }
        if (current == Opcodes.LOOKUPSWITCH) {
            // skip padding zeroes
            while (bcStream.getCurrentPosition() % 4 != 0) bcStream.readByte();
            IMBasicBlock doff   = createBasicBlock(ip,bcStream.readInt());
            int npairs = bcStream.readInt();
            int[] mpairs = new int[npairs];
            IMBasicBlock[] opairs = new IMBasicBlock[npairs];
            for (int i = 0; i < npairs; i++) {
                mpairs[i] = bcStream.readInt();
                opairs[i] = createBasicBlock(ip, bcStream.readInt());
            }   
            return new IMLookupSwitch(this, current, ip, doff, npairs, mpairs, opairs);
        }
        if (current <= Opcodes.RETURN) {
            return new IMReturn(this, current, ip);
        }
        if (current <= Opcodes.PUTFIELD) {
            int cpIndex = bcStream.readUnsignedShort();
            FieldRefCPEntry cpEntry = cPool.fieldRefEntryAt(cpIndex);
            IMNode opr;
            switch (current) {
                case Opcodes.GETFIELD:
                    opr = new IMGetField(this, current, ip, cpEntry);
                    break;
                case Opcodes.GETSTATIC:
                    opr = new IMGetStatic(this, current, ip, cpEntry);
                    break;
                case Opcodes.PUTFIELD:
                    opr = new IMPutField(this, current, ip, cpEntry);
                    break;
                default:
                    opr = new IMPutStatic(this, current, ip, cpEntry);
                    break;
            }
            return(opr);
        }
        if (current < Opcodes.INVOKEINTERFACE) {
            int cpIndex = bcStream.readUnsignedShort();
            MethodRefCPEntry cpEntry = cPool.methodRefEntryAt(cpIndex);
            IMInvoke opr = null;
            switch (current) {
                case Opcodes.INVOKEVIRTUAL:
                    opr = new IMInvokeVirtual(this, current, ip, cpEntry);
                    break;
                case Opcodes.INVOKESPECIAL:
                    opr = new IMInvokeSpecial(this, current, ip, cpEntry);
                    break;
                case Opcodes.INVOKESTATIC:
                    opr = new IMInvokeStatic(this, current, ip, cpEntry);
                    break;
                default:
                    throw new CompileException("unknown invokation -- not implemented yet! ");
            }   
            leafMethod = false;
            return(opr);
        }
        if (current == Opcodes.INVOKEINTERFACE) {
            int cpIndex = bcStream.readUnsignedShort();
            int args_size = bcStream.readByte(); // read usless arg length
            bcStream.readByte(); // read usless padding zero
            InterfaceMethodRefCPEntry cpEntry = cPool.InterfaceMethodRefEntryAt(cpIndex);
            leafMethod = false;
            return new IMInvokeInterface(this, current, ip, cpEntry); // pop 1-x
        }
        if (current == Opcodes.NEW) {
            int cpIndex = bcStream.readUnsignedShort();
            ClassCPEntry cpEntry = cPool.classEntryAt(cpIndex);
            return new IMNew(this, current, ip, cpEntry);
        }
        if (current == Opcodes.NEWARRAY) {
            int aType = bcStream.readByte();
            switch (aType) {
                case 4:
                    aType = BCBasicDatatype.BOOLEAN;
                    break;
                case 5:
                    aType = BCBasicDatatype.CHAR;
                    break;
                case 6:
                    aType = BCBasicDatatype.FLOAT;
                    break;
                case 7:
                    aType = BCBasicDatatype.DOUBLE;
                    break;
                case 8:
                    aType = BCBasicDatatype.BYTE;
                    break;
                case 9:
                    aType = BCBasicDatatype.SHORT;
                    break;
                case 10:
                    aType = BCBasicDatatype.INT;
                    break;
                case 11:
                    aType = BCBasicDatatype.LONG;
                    break;
            }   
            return new IMNewArray(this, current, ip, aType);
        }
        if (current == Opcodes.ANEWARRAY) {
            int cpIndex = bcStream.readUnsignedShort();
            ClassCPEntry cpEntry = cPool.classEntryAt(cpIndex);
            return new IMNewObjArray(this, current, ip, cpEntry);
        }
        if (current == Opcodes.ARRAYLENGTH) {
            return new IMArrayLength(this, current, ip);
        }
        if (current == Opcodes.ATHROW) {
            return new IMThrow(this, current, ip);
        }
        if (current == Opcodes.CHECKCAST) {
            int cpIndex = bcStream.readUnsignedShort();
            ClassCPEntry cpEntry = cPool.classEntryAt(cpIndex);
            return new IMCheckCast(this, current, ip, cpEntry);
        }
        if (current == Opcodes.INSTANCEOF) {
            int cpIndex = bcStream.readUnsignedShort();
            ClassCPEntry cpEntry = cPool.classEntryAt(cpIndex);
            return new IMInstanceOf(this, current, ip, cpEntry);
        }
        if (current == Opcodes.MONITORENTER || 
                current == Opcodes.MONITOREXIT) {
            return new IMMonitor(this, current, ip);
        }
        if (current == Opcodes.MULTIANEWARRAY) {
            int cpIndex = bcStream.readUnsignedShort();
            int dim     = bcStream.readUnsignedByte();
            ClassCPEntry cpEntry = cPool.classEntryAt(cpIndex);
            return new IMNewMultiArray(this, current, ip, cpEntry, dim);
        }
        throw new CompileException("unknown bytecode (" + Integer.toString(current) + ")");
        // Reserved opcodes:
        //    public static const int BC.BREAKPOINT 0xca;
        //    public static const int BC.IMPDEP1 0xfe;
        //    public static const int BC.IMPDEP2 0xff;
    }

    private void moveBasicBlockToEnd(IMNode basicblock) {
    IMNode prev_node= basicblock.prev;
    IMNode end_node = basicblock;

    while (!end_node.next.isBasicBlock()) end_node=end_node.next;

    basicblock.prev = imCodeEnd;
    imCodeEnd.next  = basicblock;

    end_node.next.prev = prev_node;
    prev_node.next     = end_node.next;

    imCodeEnd          = end_node;
    end_node.next      = null;    
    }

    /*
      b0 = ... ;
    */
    private void optPatternBlockVar(IMStoreBlockVariable bvar) {    
    //IMStoreBlockVariable bvar = (IMStoreBlockVariable)inode;
    IMOperant opr = bvar.getOperant();
    if ((opr instanceof IMNew) && (bvar.next instanceof IMInvoke)) {        
        /* 
           b0 = new ... ;
           b0.<init>() ;   ==> b0 = new ...() ;
           ...
        */
        //System.err.println(" bn.<init>() ");
        IMInvoke initInstr = (IMInvoke)bvar.next;
        IMCompactNew inew = initInstr.getCompactNew(bvar.getBlockVarIndex(),(IMNew)opr);
        if (inew!=null) {
        bvar.setOperant(inew);
        bvar.next = bvar.next.next;
        bvar.next.prev = bvar;
        
        if (experimentalCode && opts.doOptimize()) {
            
            /*
              b0 = new ..()
              vn = b0; | throw b0; | return b0;
              remove b0 if b0 is dead
            */
            
            if (bvar.next instanceof IMStoreLocalVariable lstore) {
            if (lstore.getOperant().isBlockVariable()) {
                
                lstore.prev = bvar.prev;
                lstore.prev.next = lstore;
                
                lstore.setOperant(inew);
            }
            }                
            if (bvar.next instanceof IMThrow lthrow) {
            lthrow.prev = bvar.prev;
            lthrow.prev.next = lthrow;
            
            lthrow.setOperant(inew);
            }
            if (bvar.next instanceof IMReturn ret) {
            IMOperant ropr = ret.getOperant();
            
            if (ropr!=null && ropr.isBlockVariable()) {
                ret.prev = bvar.prev;
                ret.prev.next = ret;
                
                ret.setOperant(inew);
            }
            }
            
        }
        }
    }
    }


    public void join(IMNode node) {
    if (node.isInstruction()) numberOfInstr++;

    if (imCodeStart == null) {
        insertBefore(null, node);
    } else {
        int node_bcpos = node.getBCPosition();        
        for (IMNode curr = top(); curr != null; curr = next(curr)) {
        int curr_bcpos = curr.getBCPosition();

        if (curr_bcpos < node_bcpos) continue;

        if (curr_bcpos > node_bcpos) {
            insertBefore(curr, node);
            return;
        }

        if (curr.isBasicBlock() || curr.isBlockVariable()) {
            continue;
        } else {
            insertBefore(curr, node);
        }

        return;
        }

        insertBehind(null, node);
    }
    }
        
    public IMNode top() {
    return imCodeStart;
    }

    public IMNode next(IMNode curr) {
    if (curr != null) return curr.next;
    return null;
    }

    public IMNode prev(IMNode curr) {
    if (curr != null) return curr.prev;
    return null;
    }

    public IMNode end() {
    return imCodeEnd;
    }

    public void insertBefore(IMNode curr, IMNode entry) {
    if (imCodeStart == null && imCodeEnd == null) {
        imCodeStart = entry;
        imCodeEnd   = entry;
        entry.prev = null;
        entry.next = null;
        return;
    }        
    if (curr == null) curr = imCodeStart;
    if (curr.prev == null) {
        if (imCodeStart != curr) throw new Error("mixup");
        entry.prev = null;
        imCodeStart = entry;
    } else {
        entry.prev = curr.prev;
        entry.prev.next = entry;
    }
    curr.prev = entry;
    entry.next = curr;    
    }

    public void insertBehind(IMNode curr, IMNode entry) {
    if (imCodeStart == null && imCodeEnd == null) {
        imCodeStart = entry;
        imCodeEnd   = entry;
        entry.prev = null;
        entry.next = null;
        return;
    }
    if (curr == null) curr = imCodeEnd;
    if (curr.next == null) {
        if (imCodeEnd != curr) throw new Error("mixup");
        entry.next = null;
        imCodeEnd = entry;
    } else {
        entry.next = curr.next;
        entry.next.prev = entry;
    }
    curr.next = entry;
    entry.prev = curr;
    }    

    /**
     * @param depth
     * @throws jx.compiler.CompileException
     */

    public void inlineMethods(int depth) throws CompileException {
    inlineMethods(depth,opts.forceInline(method));
    }

    public void inlineMethods(int depth, boolean forceInline) throws CompileException {
    IMNode node = imCodeStart;

    if (depth<=0) return;

    while (node!=null) {
        if (node.isInstruction()) {
        
        IMNode inode = (IMNode)node;
        CodeVector inlineCode = new CodeVector();

        IMNode newinode = inode.inlineCode(inlineCode, depth, forceInline);

        if (newinode!=null && opts.doExtraFalting()) {
            IMNode newnode = newinode.constant_folding();
            if (newnode instanceof IMNode) {
            newinode = (IMNode)newnode;
            } else {
            Debug.out.println("!!! bad instr node in CodeContainer");
            }
        }

        for (int i=0;i<inlineCode.size();i++) {
            CodeContainer inCode = inlineCode.element(i);
            IMNode top = inCode.getTop();
            IMNode end = inCode.getEnd();
            node.prev.next = top;
            top.prev       = node.prev;            
            end.next       = node;
            node.prev      = end;        
        }

        if (newinode!=null && newinode!=inode) {
            if (node.prev!=null) node.prev.next = newinode;
            newinode.prev  = node.prev;
            if (node.next!=null) node.next.prev = newinode;
            newinode.next  = node.next;
            node = newinode;
        }
        }
        node = node.next;
    }

    if (opts.isOption("cfor")) constant_forwarding();
    }

    /** 
    Small methods are real small. They have only one
    instruction node, no local variable and all arguments
    must be constant.

    see IMInvoke.inline() for details
    */
    /*
    public IMNode inlineSmallMethod() {
    IMNode node = imCodeStart;
    if (node==null || node.next==null) {
        throw new Error("this is not a small method");
    }
    return (IMNode)node.next;
    }
    */

    public IMNode transformSmallMethodForInline(CodeContainer newContainer, int slots[], IMOperant opr[], int retval, int bcPos) throws CompileException {    
    IMNode node = imCodeStart;

    this.cPool     = newContainer.getConstantPool();
    this.code      = null;
    this.regs      = newContainer.getRegManager();
    this.frame     = newContainer.getMethodStackFrame();
    this.execEnv   = newContainer.getExecEnv();

    if (!smallMethod) throw new Error("this is not a small Method");
    if (node == null || node.next == null)
        throw new Error("this is not a small method");
    node = node.next;

    IMNode newnode =  (IMNode)node.assignNewVars(newContainer, slots, opr, retval, bcPos);
    if (newnode!=null) {
        newnode.constant_folding();
        return newnode;
    } else {
        return null;
    }
    }

    public void transformForInline(CodeContainer newContainer, int slots[], IMOperant opr[], int retval, int bcPos) throws CompileException {    
    IMNode node = imCodeStart;

    this.cPool     = newContainer.getConstantPool();
    this.code      = null;
    this.regs      = newContainer.getRegManager();
    this.frame     = newContainer.getMethodStackFrame();
    this.execEnv   = newContainer.getExecEnv();

    while (node != null) {
        if (node.isReturn()) {
        IMCodeVector inCode = new IMCodeVector();
        ((IMReturn)node).assignNewVars(newContainer, slots, opr, retval, inCode, bcPos);
        for (int i = 0; i < inCode.size(); i++) {
            IMNode newnode = inCode.element(i);
            newnode.prev = node.prev;
            newnode.next = node.next;
            if (node.prev == null)
            imCodeStart = newnode;
            else
            node.prev.next = newnode;
            if (node.next == null)
            imCodeEnd = newnode;
            else
            node.next.prev = newnode;
        }
        } else {
        IMNode newnode = node.assignNewVars(newContainer, slots, opr, retval, bcPos);
        newnode.prev = node.prev;
        newnode.next = node.next;
        if (node.prev == null)
            imCodeStart = newnode;
        else
            node.prev.next = newnode;
        if (node.next == null)
            imCodeEnd = newnode;
        else
            node.next.prev = newnode;
        }
        node = node.next;
    }        
    }

    public void constant_forwarding() throws CompileException {
    IMNode node = imCodeStart;

    //======================================
    // forward constants all basic blocks
    //======================================

    while (node != null) {
        if (node.isBasicBlock()) {
        ((IMBasicBlock)node).constant_forwarding();
        node.constant_folding();
        }
        node = node.next;
    }

    }

    public void translate() throws CompileException {
        IMNode node = imCodeStart;

        //======================================
        // translate all basic blocks
        //======================================

        execEnv.setCodeContainer(this);

        if (opts.isOption("fast_thisptr") &&
            method.getName().equals("read")) {
            Debug.out.println(method.getClassName());
        }

        while (node != null) {
            if (node.isBasicBlock()) {
                IMBasicBlock label = (IMBasicBlock)node;        
                if (opts.doAlignCode() && label.isLoopEntry()) code.alignIP();
                node.translate((Reg)null);
            }
            node = node.next;
        }

        if (opts.doAlignCode()) code.alignIP_16_Byte();
    }

    public IMNode getTop() {
    return imCodeStart;
    }

    public IMNode getEnd() {
    return imCodeEnd;
    }
    
    public IMNode first() {
    current = imCodeStart;
    return current;
    }

    public IMNode last() {
    current = imCodeEnd;
    return current;
    }

    public IMNode next() {
    if (current!=null) current=current.next;
    return current;
    }
    
    public IMNode prev() {
    if (current!=null) current=current.prev;
    return current;
    }
    
    public IMNode current() {
    return current;
    }
    
    public void remove() {
    if (current == imCodeStart) {
        imCodeStart = current.next;
        if (imCodeStart != null)
            imCodeStart.prev = null;
        else
            imCodeEnd = null;
        current = imCodeStart;
    } else if (current==imCodeEnd) {
        imCodeEnd = current.prev;
        if (imCodeEnd!=null) {
        imCodeEnd.next = null;
        } else {
        System.err.println("mix up in codecontainer !!! ");
        imCodeStart=null;
        }
        current = imCodeEnd;
    } else {
        current.prev.next = current.next;
        current.next.prev = current.prev;
        current = current.next;
    }    
    }

    public void insertBefor(IMNode node) {
    if (imCodeStart == null) {
        node.next = null;        
        imCodeStart = node;
        imCodeEnd = node;
        node.prev = null;
        return;
    }

    if (current == null) current = imCodeStart;

    if (current == imCodeStart) {
        node.prev     = null;
        node.next     = imCodeStart;
        imCodeStart.prev = node;
        imCodeStart      = node;
    } else if (current == imCodeEnd) {
        node.next        = imCodeEnd;
        node.prev        = imCodeEnd.prev;
        imCodeEnd.prev.next = node;
        imCodeEnd.prev      = node;
    } else {
        node.next         = current;
        node.prev         = current.prev;
        current.prev.next = node;
        current.prev      = node;
    }
    }

    public void insertTop(IMNode node) {
    if (node != null) {
        node.prev = null;
        node.next = imCodeStart;
        if (imCodeStart == null)
            imCodeEnd = node;
        else
            imCodeStart.prev = node;
        imCodeStart = node;
    }
    }

    public void append(IMNode node) {
    node.next = null;
    if (imCodeStart == null) {
        // first and only element
        imCodeStart = node;
        imCodeEnd = node;
        node.prev = null;
    } else {
        // last element
        node.prev      = imCodeEnd;
        imCodeEnd.next = node;
        imCodeEnd      = node;
    }
    if (node.isInstruction()) numberOfInstr++;
    }
    
    public boolean hasMore() {
        return current.next != null;
    }
    
    public void writeCode(java.io.PrintStream outStream) {
    IMNode node = imCodeStart;

    outStream.println(" ");
    outStream.println(" method " + method.getName() + method.getSignature() + " {");    

    while (node != null) {
        if (node.isBasicBlock()) {
            IMBasicBlock label = (IMBasicBlock)node;        
            outStream.println("  " + label.toString() + ":  " + label.getDebugString());
        } else {
            outStream.println("        " + node.toString() + ";   " + node.debugInfo());
        }
        node = node.next;
    }

    if (handlers != null && handlers.length > 0) {
        outStream.println("EXCEPTIONHANDLER-TABLE:");
            for (ExceptionHandlerData handler : handlers)
                outStream.println(handler.toString());
    }

    outStream.println(" }");
    }

    public void writeStatistics(java.io.PrintStream outStream) {
    if (regs.getStatistics() != null)
        outStream.println("// Register: " + regs.getStatistics() + " " + method.getName());
    }

    private void insertBCList(IMNode node) {
        node.bc_next = null;
        if (bc_list_top == null)
            bc_list_top = node;
        else
            bc_list_end.bc_next = node;
        bc_list_end = node;
    }

    private IMBasicBlock createBasicBlock(int ip, int offset) {
    int bcpos = ip + offset;
    IMBasicBlock label;
    IMBasicBlock curr;

    if (label_list == null) {
        label = new IMBasicBlock(this, bcpos);
        label_list = label;
        return label;
    } 

    if (label_list.getBCPosition() > bcpos) {
        label = new IMBasicBlock(this, bcpos);
        label.bc_next = label_list;    
        label_list = label;
        return label;
    }

    if (label_list.getBCPosition() == bcpos) {
        label_list.incCounter();
        return label_list;
    }

    curr = label_list;    
    while (curr.bc_next != null && curr.bc_next.getBCPosition() < bcpos) curr = (IMBasicBlock)curr.bc_next;

    if (curr.bc_next != null && curr.bc_next.getBCPosition() == bcpos) {
        label = (IMBasicBlock)curr.bc_next;
        label.incCounter();
    } else {
        label = new IMBasicBlock(this, bcpos);
        label.bc_next = curr.bc_next;            
        curr.bc_next = label;
    }
        
        return label;
    }
}
