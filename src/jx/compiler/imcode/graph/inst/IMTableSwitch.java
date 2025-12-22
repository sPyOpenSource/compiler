package jx.compiler.imcode.graph.inst; 

import java.util.ArrayList;
import jx.zero.Debug;

import jx.compiler.*;
import jx.compiler.backend.*;
import jx.compiler.symbols.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;

// ***** IMTableSwitch *****

final public class IMTableSwitch extends IMBranch  {
    private final IMBasicBlock doff;
    private final int low;
    private final int high;
    private final IMBasicBlock[] offsets;
    private IMOperant operant;

    public IMTableSwitch(CodeContainer container, int bc, int bcpos,
			 IMBasicBlock doff, int low, int high, IMBasicBlock[] offsets) {
	super(container);

	bytecode   = bc;
	bcPosition = bcpos;
	datatype   = -1;

	this.doff    = doff;
	this.low     = low;
	this.high    = high;
	this.offsets = offsets;

	targets      = new IMBasicBlock[1 + offsets.length];
	targets[0]   = doff;
	System.arraycopy(offsets, 0, targets, 1, offsets.length);
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	operant = stack.pop();
	//stack.flush();
	//basicBlock.leave(stack);
	return this;
    }

    @Override
    public IMNode constant_folding() throws CompileException {
        if (operant.isOperator()) {
            operant = (IMOperant)((IMOperator)operant).constant_folding();
        }

        if (operant.isConstant()) {
            if (opts.doVerbose("cf")) Debug.out.println("-- todo constant folding " + toString());
        }
	
	return this; 
    }

    @Override
    public String toString() {
	String output = "tswitch (" + operant.toString() + ")";
        for (IMBasicBlock offset : offsets) {
            output += " " + offset.toLabel();
        }
	return output + " : " + doff.toLabel();
    }

    @Override
    public void getCollectVars(ArrayList vars) { operant.getCollectVars(vars); }

    @Override
    public int getNrRegs() { return operant.getNrRegs(); }
    
    // IMTableSwitch
    @Override
    public void translate(Reg result) throws CompileException {
	operant.translate(result);

	if (low != 0) code.subl(low, result);
	code.cmpl(high - low, result);
	code.ja(targets[0].getNewJumpTarget());

	UnresolvedJump[] jumpTable = new UnresolvedJump[targets.length - 1];
	for (int i = 0; i < targets.length - 1; i++) jumpTable[i] = targets[i + 1].getNewJumpTarget();

	code.jmp(result, jumpTable);

	regs.freeIntRegister(result);
    }
}
