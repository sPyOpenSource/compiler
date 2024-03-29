
package jx.compiler.imcode; 

import jx.classfile.*;
import jx.compiler.*;
import jx.compiler.nativecode.*;

// **** IMMonitor ****

final public class IMMonitor extends IMUnaryOperator  {
    public IMMonitor(CodeContainer container, int bc, int bcpos) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = -1; // Array
    }
    
    public IMNode processStack(VirtualOperantenStack stack, IMBasicBlock basicBlock) throws CompileException {
        operant = stack.pop();
	stack.store(bcPosition);
	return this;
    }

    public String toReadableString() {
	if (bytecode == BC.MONITORENTER) {
	    return operant.toReadableString() + ".enter()";
	}
	return operant.toReadableString() + ".leave()";
    }

    // IMMonitor
    public void translate(Reg result) throws CompileException {
	if (bytecode == BC.MONITORENTER) {
	    execEnv.codeMonitorEnter(this, operant, bcPosition);
	} else {
	    execEnv.codeMonitorLeave(this, operant, bcPosition);
	}
    }
}
