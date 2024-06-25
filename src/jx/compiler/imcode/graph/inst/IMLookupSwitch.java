
package jx.compiler.imcode.graph.inst; 

import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.nativecode.*;
import jx.compiler.symbols.*;
import java.util.ArrayList;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;

// ***** IMLookupSwitch *****

final public class IMLookupSwitch extends IMBranch  {
    private final IMBasicBlock doff;
    private final int npairs;
    private final int[] keys;
    private final IMBasicBlock[] offsets;
    private IMOperant operant;
    private final UnresolvedJump[] jumpTargets;

    public IMLookupSwitch(CodeContainer container, int bc, int bcpos,
			 IMBasicBlock doff, int npairs, int[] keys, IMBasicBlock[] offsets) {
	super(container);
	
	bytecode   = bc;
	bcPosition = bcpos;
	datatype   = -1;

	this.doff    = doff;
	this.npairs  = npairs;
	this.keys    = keys;
	this.offsets = offsets;

	targets      = new IMBasicBlock[1 + offsets.length];
	targets[0]   = doff;
	System.arraycopy(offsets, 0, targets, 1, offsets.length);
	jumpTargets = new UnresolvedJump[targets.length];
	for (int i = 0; i < targets.length; i++) {
	    jumpTargets[i] = targets[i].getNewJumpTarget();
	}
	    
    }

    public IMNode constant_folding() throws CompileException {
	if (operant.isOperator()) {
            operant = (IMOperant)((IMOperator)operant).constant_folding();
        }
	if (operant.isConstant()) {
            if (opts.doVerbose("cf")) Debug.out.println("-- todo constant folding " + toString());
        }

        return this;
    }

    public IMNode processStack(VirtualOperantenStack stack, IMBasicBlock basicBlock) throws CompileException {
	operant = stack.pop();
	//basicBlock.leave(stack);
	return this;
    }

    public String toString() {
       String output = "lswitch (" + operant.toString() + ") { \n";

       for (int i = 0; i < offsets.length; i++) {
	   output +=  "           " + Integer.toString(keys[i]) + ":" + offsets[i].toLabel() + "\n";
       }       
       output += "           ::" + doff.toLabel() + "\n";
       return output + "        }";	    
   }

    public void getCollectVars(ArrayList vars) { operant.getCollectVars(vars); }

    public int getNrRegs() { return operant.getNrRegs(); }

    // IMLookupSwitch
    public void translate(Reg result) throws CompileException {

	operant.translate(result);
        
	for (int i = 1; i < targets.length; i++) {
	    code.cmpl(keys[i - 1],result);
	    code.je(jumpTargets[i]);
	    /*execEnv.codeStackMap(this);*/
	}	
	code.jmp(jumpTargets[0]);
	/*execEnv.codeStackMap(this);*/
    }
}
