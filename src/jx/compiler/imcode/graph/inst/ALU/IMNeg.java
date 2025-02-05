
package jx.compiler.imcode.graph.inst.ALU; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;
import jx.compiler.imcode.graph.inst.IMConstant;
import jx.compiler.nativecode.*;

final  public class IMNeg extends IMUnaryOperator {

    public IMNeg(CodeContainer container, int bc, int bcpos) {
    super(container);
    bytecode   = bc;
    bcPosition = bcpos;
    datatype   = BCBasicDatatype.INT + (bc-Opcodes.INEG);
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack, IMBasicBlock basicBlock) {
    operant = stack.pop();
    stack.push(this);
    return null;
    }

    public IMNode constant_folding() throws CompileException {
    int value = 0;

    super.constant_folding();
    
    if (datatype == BCBasicDatatype.INT) {
        // simpel case -(c) => -c
        if (operant.isConstant()) {
        if (opts.doVerbose("cf")) Debug.out.println("++ folding -(c) " + toString());
        IMConstant rcOpr = operant.nodeToConstant();
        rcOpr.setIntValue(-rcOpr.getIntValue());
        return rcOpr;
        }
    }
    
    return this;
    }

    public String toString() {
    return "-" + operant.toString();
    }

    // IMNeg
    public void translate(Reg result) throws CompileException {    
    operant.translate(result);
    code.startBC(bcPosition);
    regs.writeIntRegister(result);
    code.negl(result);
    code.endBC();
    }

    public void translate(Reg64 result) throws CompileException {    
    operant.translate(result);
    code.startBC(bcPosition);

    regs.writeLongRegister(result);

    code.negl(result.low);
    code.adcl(0, result.high);
    code.negl(result.high);

    code.endBC();
    }
    
}
