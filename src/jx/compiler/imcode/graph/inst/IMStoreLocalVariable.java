
package jx.compiler.imcode.graph.inst; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.nativecode.*;
import java.util.ArrayList;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;

// ***** IMStoreLocalVariable *****

final public class IMStoreLocalVariable extends IMVarAccess  {

    //private int           ivar;
    //private LocalVariable lvar;
    private IMOperant     operant;
    private IMBasicBlock  ownBasicBlock;

    public IMStoreLocalVariable(CodeContainer container,int bc,int bcpos) {
    super(container);
    bytecode   = bc;
    bcPosition = bcpos;
    writeAccess= true;
    datatype   = BCBasicDatatype.INT + (bc-Opcodes.ISTORE_0) / 4;
    ivar   = (bc-Opcodes.ISTORE_0) & 0x03;
    }

    public IMStoreLocalVariable(CodeContainer container,int bc,int bcpos,int index) {
    super(container);
    bytecode   = bc;
    bcPosition = bcpos;
    writeAccess= true;
    datatype   = BCBasicDatatype.INT + (bc-Opcodes.ISTORE);
    ivar   = index;
    }

    public IMStoreLocalVariable(CodeContainer container,int index,IMOperant opr,int bcpos) {
    super(container);
    bytecode   = -1;
    bcPosition = bcpos;
    writeAccess= true;
    datatype   = opr.getDatatype();
    operant    = opr;
    ivar   = index;
    }

    @Override
    public IMNode constant_forwarding(IMNodeList varList) throws CompileException {

    if (operant.isConstant()) { 
        if (opts.doVerbose("cfor2")) Debug.out.println("## " + toString());
        varList.add(this);
    }

    return this;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) {
    ownBasicBlock = basicBlock;

    LocalVariable[] vars = frame.getLocalVars();
    /*
    if (ivar<vars.length) {
        if (vars[ivar].getDatatype()!=datatype) {
        addDebugInfo("!! v"+ivar+BCBasicDatatype.toSymbol(vars[ivar].getDatatype()));
        }
    }
    */
    lvar    = frame.getLocalVar(ivar,datatype);
    frame.setLocalSlotNotConstant(ivar);
    operant = stack.pop();
    stack.store2(bcPosition,ivar);
    return this;
    }

    @Override
    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
    operant = (IMOperant)operant.inlineCode(iCode, depth, forceInline);
    return this;
    }

    public void setOperant(IMOperant opr) {
    operant = opr;
    }

    public IMOperant getOperant() {
    return operant;
    }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
    bcPosition = bcPos;
    init(newContainer);

    if (opr[ivar]!=null || slots[ivar]==-1) {
        throw new CompileException("Can`t propagate left operant!");
    }
    ivar = slots[ivar];
    operant = (IMOperant)operant.assignNewVars(newContainer,slots,opr,retval,bcPos);
    
    return this;
    }

    @Override
    public String toString() {
    if (operant == null) return "v" + Integer.toString(ivar) + " = <top of stack>";
       return "v" + 
        BCBasicDatatype.toSymbol(datatype) +
        Integer.toString(ivar) + " = " +
        operant.toString();
    }

    @Override
    public String debugInfo() {
    return debugTxt + " " + operant.debugInfo();
    }

    @Override
    public int getNrRegs() { return operant.getNrRegs(); }

    @Override
    public void getCollectVars(ArrayList vars) { 
    operant.getCollectVars(vars);
    vars.add(this); 
    }

    // IMStoreLocalVariable
    @Override
    public void translate(Reg result) throws CompileException {
    int varOffset = frame.getOffset(lvar);

    if (operant.isConstant()) {
        int value = ((IMConstant)operant).getIntValue();
        
        code.startBC(bcPosition);

        if (value==0 && regs.hasFreeIntRegister()) {
        regs.allocIntRegister(result,datatype);
        code.xorl(result,result);
        regs.writeIntRegisterToSlot(result,lvar);
        } else {
        regs.writeIntToSlot(value,lvar);
        }
    } else {        
        operant.translate(result);

        code.startBC(bcPosition);

        if (datatype==BCBasicDatatype.REFERENCE)
        execEnv.codeCheckMagic(this,result,bcPosition);

        regs.writeIntRegisterToSlot(result,lvar);
    }    

    code.endBC();
    } 

    @Override
    public void translate(Reg64 result) throws CompileException {
        int varOffset = frame.getOffset(lvar);
        operant.translate(result);
        code.startBC(bcPosition);
        regs.writeLongRegisterToSlot(result, lvar);
        code.endBC();
    } 
}
