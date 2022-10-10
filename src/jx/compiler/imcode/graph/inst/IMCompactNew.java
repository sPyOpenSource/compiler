
package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.nativecode.*;
import java.util.ArrayList;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.CodeVector;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.IMBasicBlock;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.imcode.graph.IMOperant;
import jx.compiler.imcode.graph.IMOperator;

// **** IMCompactNew ****

final public class IMCompactNew extends IMOperator {
    private final ClassCPEntry     cpEntry;
    private final MethodRefCPEntry cpEntryMethod;
    private final IMOperant[]      args;

    public IMCompactNew(CodeContainer container,int bc,IMNew newObj,IMInvoke initObj,IMOperant[] args) {
    super(container);
    bytecode     = -1;
    datatype     = BCBasicDatatype.REFERENCE;

    this.cpEntry       = newObj.getClassCPEntry();

    bcPosition         = initObj.getBCPosition();
    this.cpEntryMethod = initObj.getMethodRefCPEntry();
    this.args          = args;

    varStackMap = initObj.getVarStackMap();
    }

    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
    throw new Error("this method is not used!");
    }

    public IMNode constant_folding() throws CompileException{
    for (int i = 0; i < args.length; i++) {
        args[i] = (IMOperant)args[i].constant_folding();
    }
    
    return this;
    }

    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
    bcPosition = bcPos;
    init(newContainer);

    for (int i = 0; i < args.length; i++) {
        args[i] = (IMOperant)args[i].assignNewVars(newContainer,slots,opr,retval,bcPos);
    }
    
    return this;
    }

    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
    for (int i = 0; i < args.length; i++) {
        args[i] = (IMOperant)args[i].inlineCode(iCode, depth, forceInline);
    }
    return this;
    }

    public void getCollectVars(ArrayList vars) { 
        for (IMOperant arg : args) {
            arg.getCollectVars(vars);
        }
    }

    public String toString() {
    String retString = "new "+cpEntry.getClassName();

    retString += "(";
    int i=0;
    while (i<args.length)  {
        retString += args[i].toString();
        i++;
        if (i<args.length) retString+=",";
    }
    return retString+")";
    }

    // IMCompactNew
    public void translate(Reg result) throws CompileException {    
    execEnv.codeCompactNew(this,cpEntry,cpEntryMethod,args,result);    
    }
}
