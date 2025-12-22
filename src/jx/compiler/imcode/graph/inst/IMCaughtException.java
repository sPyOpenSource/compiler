
package jx.compiler.imcode.graph.inst; 

import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.IMBasicBlock;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.imcode.graph.IMOperant;
import jx.compiler.backend.*;

final public class IMCaughtException extends IMOperant {

    public IMCaughtException(CodeContainer container) {
	super(container);
	datatype = BCBasicDatatype.REFERENCE;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack, IMBasicBlock basicBlock) {
	stack.push(this);
	return null;
    }

    @Override
    public String toString() {
	return "<caught exception>";
    }

    @Override
    public int getNrRegs() { return 1; }

    // IMCaughtException
    @Override
    public void translate(Reg result) throws CompileException {
	regs.allocIntRegister(result, datatype);
	code.popl(result);
    }
    
}
