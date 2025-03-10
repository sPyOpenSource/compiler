
package jx.compiler.imcode.graph; 

import jx.classfile.*;
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.inst.ALU.IMBitAnd;
import jx.compiler.imcode.graph.inst.ALU.IMBitOr;
import jx.compiler.imcode.graph.inst.ALU.IMBitXor;
import jx.compiler.imcode.graph.inst.ALU.IMShiftLeft;
import jx.compiler.imcode.graph.inst.ALU.IMShiftRight;
import jx.compiler.imcode.graph.inst.ALU.IMShiftRight2;

// ***** IMBitOperator *****

public class IMBitOperator extends IMBinaryOperator {

    /*
    public IMBitOperator(CodeContainer container,int bc,int bcpos) {
	super(container);
	bytecode   = bc;
	bcPosition = bcpos;
	int i = bc - BC.ISHL;
	datatype = i & 0x01;
    }
    */

    public IMBitOperator(CodeContainer container) {
	super(container);
    }

    public static IMBitOperator getIMOperator(CodeContainer container,int bc,int bcpos) {
	int shortOpr = (bc - Opcodes.ISHL) / 2;
	switch (shortOpr) {
	case 0:
	    return new IMShiftLeft(container,bc,bcpos);
	case 1:
	    return new IMShiftRight(container,bc,bcpos);
	case 2:
	    return new IMShiftRight2(container,bc,bcpos);
	case 3:
	    return new IMBitAnd(container,bc,bcpos);
	case 4:
	    return new IMBitOr(container,bc,bcpos);
	case 5:
	    return new IMBitXor(container,bc,bcpos);
	default:
	    return null;
	}
    }

    @Override
    public IMNode constant_folding() throws CompileException {
	if (rOpr.isOperator()) {
	    rOpr = (IMOperant)((IMOperator)rOpr).constant_folding();
	}

	if (lOpr.isOperator()) {
	    lOpr = (IMOperant)((IMOperator)lOpr).constant_folding();
	}

	return this;
    }
}
