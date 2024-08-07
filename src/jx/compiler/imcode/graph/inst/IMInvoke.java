package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 

import jx.compiler.*;
import jx.compiler.nativecode.*;
import jx.compiler.execenv.*;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;

// ***** IMInvoke *****

public class IMInvoke extends IMMultiOperant {

    protected MethodRefCPEntry     cpEntry;
    protected MethodTypeDescriptor typeDesc;
    protected BCMethod             method;

    protected boolean doStaticMethodCalls = false; // see constructor
    protected boolean stat_flag = true;
    protected boolean dbg_flag = true;

    protected static int extraStaticCalls;

    public IMInvoke (CodeContainer container,int bc,int bcpos,             
             MethodRefCPEntry cpEntry) {
    super(container);

    method = container.getBCMethod();

    bytecode     = bc;
    bcPosition   = bcpos;
    this.cpEntry = cpEntry;
    typeDesc     = new MethodTypeDescriptor(cpEntry.getMemberTypeDesc());
    datatype     = typeDesc.getBasicReturnType();

    doStaticMethodCalls = execEnv.doOptimize(1);

    if (stat_flag) extraStaticCalls = 0;
    }

    public MethodRefCPEntry getMethodRefCPEntry() {
    return cpEntry;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {

    int[] argTypes = typeDesc.getBasicArgumentTypes();

    args = new IMOperant[argTypes.length];
    for (int i = (argTypes.length - 1); i >= 0; i--) {
        args[i] = stack.pop();
    }
    
    obj = null;
    if (bytecode != Opcodes.INVOKESTATIC) {
        obj = stack.pop();
    }

    saveVarStackMap(frame);

    if (datatype == BCBasicDatatype.VOID) {
        return this;
    } else {    
        stack.push(this);
        return null;
    }
    } 

    @Override
    public IMNode inlineCode(CodeVector iCode, int depth, boolean forceInline) throws CompileException {

    /*
      if virtual call then try to inline reference code
    */

    if (obj != null) {
        obj = (IMOperant)obj.inlineCode(iCode, depth, forceInline);
    }

    /*
      try to inline arguments
    */

    for (int i = 0; i < args.length; i++) {
        args[i] = (IMOperant)args[i].inlineCode(iCode, depth, forceInline);
    }
    
    /* 
       try to inline this method 
    */

    // Don't inline InitialNaming !! 
    if (cpEntry.getClassName().equals("jx/zero/InitialNaming")) return this;
    // Don't inline class constructors !!
    if (cpEntry.getMemberName().equals("<clinit>")) return this;
    // Don't inline some classes in test/PerfTest
    if (cpEntry.getClassName().equals("test/compiler/PerfTest")) {
        if (cpEntry.getMemberName().startsWith("perf")) return this;
    }

    BCMethod bcMethod = execEnv.getBCMethod(cpEntry);
    if ((bcMethod instanceof BCMethodWithCode) &&
        !bcMethod.getName().equals("<clinit>") &&
        !bcMethod.isOverrideable()) {

        CodeContainer inlineCode = new CodeContainer(execEnv,(BCMethodWithCode)bcMethod);
        inlineCode.init();

        if (forceInline) {
        if (!inlineCode.isSmallMethod() && opts.isOption("X"+inlineCode.getMethodName())) {
            if (opts.doVerbose("inline")) 
            Debug.out.println("!! force to inline "+inlineCode.getClassName()+"."+inlineCode.getMethodName());
            return inline((BCMethodWithCode)bcMethod, inlineCode, iCode, depth-1);
        }
        }

        if (inlineCode.isSmallMethod()) {
        return inlineSmallMethod((BCMethodWithCode)bcMethod, inlineCode, iCode, depth-1);
        }
    }

    return this ;
    }

    public boolean isInlineable() {
    BCMethod bcMethod = execEnv.getBCMethod(cpEntry);
    if (datatype != BCBasicDatatype.VOID) return false;
    if (bytecode != Opcodes.INVOKESTATIC) return false;
    if (!(bcMethod instanceof BCMethodWithCode)) return false;
    return !bcMethod.isOverrideable();
    }

    public IMCompactNew getCompactNew(int ivar,IMNew newObj) {
    if (bytecode!=Opcodes.INVOKESPECIAL) return null;
    if (obj instanceof IMReadBlockVariable) {
        int varnr = ((IMReadBlockVariable)obj).getBlockVarIndex();
        if (varnr!=ivar) return null;
        return new IMCompactNew(container,
                    bytecode,
                    newObj,
                    this,
                    args);
    } else {
        return null;
    }
    }

    // IMInvoke 
    @Override
    public void translate(Reg result) throws CompileException {
    switch (bytecode) {
            case Opcodes.INVOKEVIRTUAL:
                if (doStaticMethodCalls) {
                    BCMethod bcMethod = execEnv.getBCMethod(cpEntry);
                    if ((bcMethod instanceof BCMethodWithCode)) {
                        if (!bcMethod.isOverrideable()) {
                            stat.invoke_static();
                            execEnv.codeSpecialCall(this,cpEntry,obj,args,datatype,result,bcPosition);
                            break;
                        }
                    }
                }
                stat.invoke_virtual();
                execEnv.codeVirtualCall(this, cpEntry, obj, args, datatype, result, bcPosition);
                break;
            case Opcodes.INVOKESPECIAL:
                stat.invoke_static();
                execEnv.codeSpecialCall(this, cpEntry, obj, args, datatype, result, bcPosition);
                break;
            case Opcodes.INVOKESTATIC:
                stat.invoke_static();
                execEnv.codeStaticCall(this, cpEntry, args, datatype, result, bcPosition);
                break;
            default:
                throw new CompileException("unknown invokation -- not implemented yet! ");
    }
    }

    private IMNode inlineSmallMethod(BCMethodWithCode bcMethod, CodeContainer inlineCode,CodeVector iCode,int depth) throws CompileException {

    stat.tryinline();

    if (depth > 0) {inlineCode.inlineMethods(depth);}

    MethodStackFrame inlineFrame = inlineCode.getMethodStackFrame();
    int varnr = inlineFrame.getNumLocalVars() + inlineFrame.getNumArgs();

    int retval = -1;
    int argn=0;
    int[] varMap = new int[varnr];
    IMOperant[] stores = new IMOperant[varnr];
    IMOperant[] oprs = new IMOperant[varnr];
    LocalVariable[] lVars = inlineFrame.getLocalVars();

    /*
      if virtual then store v0 to varMap[0]^
      the this-pointer must be constant in a "small" method
    */    
    if (obj!=null) {
        if (varnr==0) {
        if (opts.doVerbose("inline")) Debug.out.println("!! FAIL to inline - because wrong number of method arguments");
        return this;
        }
        varMap[0]=-1;
        oprs[0]=obj;
        argn=1;
    }
    
        /*
        store arguments vn to varMap[n]
        all arguments must also be constant
         */
        for (IMOperant arg : args) {
            if (argn>=varnr) {
                if (opts.doVerbose("inline")) Debug.out.println("!! FAIL to inline - because is not a small method !! (1)");
                return this;
            }
            oprs[argn] = arg;
            varMap[argn] = -1;
            argn++;
        }
    
    /*
      map local variabels vn+i to varMap[n+i]
      no local variables 
    */
    if (argn<varMap.length) {
        if (opts.doVerbose("inline") && System.err!=null) {
        System.err.println("!! FAIL to inline - because is not a small method !! (2)");
        System.err.println(" argn: "+argn+" varMap.length: "+varMap.length);
        }
        return this;
    }       
    
    IMNode newCode = inlineCode.transformSmallMethodForInline(container,varMap,oprs,-1,bcPosition);
    if (newCode!=null) {
        stat.inline();
        newCode.addDebugInfo("!INLINED!");
        return newCode;
    }

    if (opts.doVerbose("inline") && System.err!=null)  {
        System.err.println("!! FAIL to inline - because "+inlineCode.getClassName()+"."
                   +inlineCode.getMethodName()+" is not a small method !! (3)");
    }

    return this;
    }

    private IMNode inline(BCMethodWithCode bcMethod, CodeContainer inlineCode, CodeVector iCode, int depth) throws CompileException {

    if (depth>0) inlineCode.inlineMethods(depth);

    MethodStackFrame inlineFrame = inlineCode.getMethodStackFrame();
    int varnr = inlineFrame.getNumLocalVars() + inlineFrame.getNumArgs();

    int retval=-1;
    int argn=0;
    int[] varMap = new int[varnr];
    IMOperant[] stores = new IMOperant[varnr];
    IMOperant[] oprs = new IMOperant[varnr];
    LocalVariable[] lVars = inlineFrame.getLocalVars();

    /* 
       if virtual then store v0 to varMap[0]
    */    
    if (obj!=null) {
        varMap[0]=-1;
        oprs[0]=obj;
        argn=1;
    }
    
        /*
        store arguments vn -> varMap[n]
         */
        for (IMOperant arg : args) {
            // TODO check if v[i] is constant !!!
            {
                int argtype = arg.getDatatype();
                varMap[argn] = frame.getNewLocalVar(argtype);
                stores[argn] = new IMStoreLocalVariable(container, varMap[argn], arg, bcPosition);
                oprs[argn]=null;
            }
            argn++;
        }
    
    /*
      map local variabels vn+i -> varMap[n+i]
    */
    
    for (;argn<varMap.length;argn++) {        
        varMap[argn] = frame.getNewLocalVar(lVars[argn].getDatatype());
        oprs[argn] = null;
    }
    
    /* 
       map return value
    */
    
    IMReadLocalVariable vRet=null;
    if (datatype!=BCBasicDatatype.VOID) {
        retval=frame.getNewLocalVar(datatype);
        vRet = new IMReadLocalVariable(retval,bcPosition,container,datatype);
    }        
    
    inlineCode.transformForInline(container,varMap,oprs,retval,bcPosition);
    
        for (IMOperant store : stores) {
            if (store != null) {
                if (verbose) {
                    System.err.println(store.toString());
                }
                inlineCode.insertTop(store);
            }
        }
    
    iCode.add(inlineCode); // code to insert 
    
    if (datatype!=BCBasicDatatype.VOID) {
        return vRet;
    } else {
        return this;
    }
    }
}
