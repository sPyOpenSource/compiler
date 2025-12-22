
package jx.compiler.imcode.graph.inst; 

import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.IMBasicBlock;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.backend.*;
import jx.compiler.symbols.*;

// ***** IMGoto *****

final  public class IMGoto extends IMBranch  {
    private UnresolvedJump jumpTarget;

    public IMGoto(CodeContainer container,int bc,int bcpos,IMBasicBlock label) {
	super(container);

	bytecode   = bc;
	bcPosition = bcpos;
	datatype   = -1;

	targets    = new IMBasicBlock[1];
	targets[0] = label;
    }

    public IMGoto(CodeContainer container,int bcpos,IMBasicBlock label, UnresolvedJump target) {
	super(container);

	bytecode   = 0;
	bcPosition = bcpos;
	datatype   = -1;

	targets    = new IMBasicBlock[1];
	targets[0] = label;

	jumpTarget  = target;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) {
	//stack.flush();
	//basicBlock.leave(stack);

	// get jumpTarget Object 
	jumpTarget = targets[0].getNewJumpTarget();
	saveVarStackMap(frame);
	return this;
    }
    
    @Override
    public String toString() {
	return "goto " + targets[0].toString();	    
    }

    // IMGoto
    @Override
    public void translate(Reg result) throws CompileException {
	int ip = code.getCurrentIP();
	code.jmp(jumpTarget);
	addDebugInfo(frame.stackMapToString(this));
	execEnv.codeStackMap(this, ip);
    }   
}
