
package jx.compiler.imcode.graph.inst; 

import jx.compiler.*;
import jx.compiler.nativecode.*;
import java.util.ArrayList;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;

// **** IMThrow ****

final public class IMThrow extends IMBranch  {
    private IMOperant exception;

    public IMThrow(CodeContainer container,int bc,int bcpos) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = -1 ; // FIXME ObjectRef
	targets = null;
    }
    
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	//stack.store();
        exception = stack.pop();	
 	//stack.store();
	stack.clear();
	//stack.push(exception);
	return this;
    }

    public void setOperant(IMOperant opr) {
	exception = opr;
    }

    public IMOperant getOperant() {
	return exception;
    }

    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
	exception = (IMOperant)exception.inlineCode(iCode, depth, forceInline);
	return this;
    }

    public IMNode constant_folding() throws CompileException{
	exception = (IMOperant)exception.constant_folding();
	return this;
    }

    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	exception = (IMOperant)exception.assignNewVars(newContainer,slots,opr,retval,bcPos);

	return this;
    }

    @Override
    public String toReadableString() {
	if (exception==null) return "throw <error null>";
	return "throw "+exception.toReadableString();
    }

    public int getNrRegs() { return exception.getNrRegs(); }

    public void getCollectVars(ArrayList vars) { exception.getCollectVars(vars); }

    // IMThrow
    public void translate(Reg result) throws CompileException {
	execEnv.codeThrow(this,exception,bcPosition);
    }
}
