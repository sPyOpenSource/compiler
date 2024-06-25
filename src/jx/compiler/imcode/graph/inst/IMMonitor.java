
package jx.compiler.imcode.graph.inst; 

import jx.classfile.*;
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;
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

    public String toString() {
    if (bytecode == Opcodes.MONITORENTER) {
        return operant.toString() + ".enter()";
    }
    return operant.toString() + ".leave()";
    }

    // IMMonitor
    public void translate(Reg result) throws CompileException {
    if (bytecode == Opcodes.MONITORENTER) {
        execEnv.codeMonitorEnter(this, operant, bcPosition);
    } else {
        execEnv.codeMonitorLeave(this, operant, bcPosition);
    }
    }
}
