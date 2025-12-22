
package jx.compiler.imcode.graph.inst; 

import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;
import jx.compiler.backend.*;

// ***** IMPopReturnAddr *****

final public class IMPopReturnAddr extends IMOperant {

    public IMPopReturnAddr(CodeContainer container) {
	super(container);
	datatype = -2;
    }

    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) {
	stack.push(this);
	return null;
    }

    public String toString() {
	return "return_addr";
    }

    public int getNrRegs() { return 1; }

    // IMPopReturnAddr
    public void translate(Reg result) throws CompileException {
	regs.allocIntRegister(result,datatype);
	code.popl(result);
    }
}
