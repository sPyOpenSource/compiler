
package jx.compiler.imcode; 

import jx.compiler.*;
import jx.compiler.nativecode.*;
import java.util.ArrayList;

// ***** IMReturnSubroutine *****

final public class IMReturnSubroutine extends IMBranch implements IMVarAccessInterface {

    private int vIndex;
    private LocalVariable retAddr;

    public IMReturnSubroutine(CodeContainer container,int bc,int bcpos,int vIndex) {
	super(container);
	tag = IMNode.RETURN_SUB | INSTRUCTION | BB_END ;

	bytecode    = bc;
	bcPosition  = bcpos;
	datatype    = -1;
	this.vIndex = vIndex;

	targets     = null;
    }

    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	//stack.flush();
	//basicBlock.leave(stack);
	retAddr = frame.getLocalVar(vIndex,-1);
	return this;
    }

    public String toSymbolname() {
	return "v"+Integer.toString(vIndex);
    }

    public String toReadableString() {
	return "ret v"+Integer.toString(vIndex);	    
    }

    public void getCollectVars(ArrayList vars) { vars.add(this); return; }

    public int getNrRegs() { return 1; }

    public boolean writeAccess() { return false; }

    // IMReturnSubroutine
    public void translate(Reg result) throws CompileException {
	code.startBC(bcPosition);
	
	regs.readIntRegisterFromSlot(retAddr,result,-1);
	code.jmp(result);
	regs.freeIntRegister(result);

	code.endBC();
	//throw new CompileException("ret -- not implemented yet!");
	//execEnv.codeThrow(this,-11,bcPosition);
    }
}
