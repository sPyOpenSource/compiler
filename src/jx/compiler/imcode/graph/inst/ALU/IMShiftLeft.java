
package jx.compiler.imcode.graph.inst.ALU; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.*;
import jx.compiler.imcode.graph.inst.IMConstant;
import jx.compiler.nativecode.*;

// ***** IMShiftLeft *****
final public class IMShiftLeft extends IMBitOperator {
    public IMShiftLeft(CodeContainer container,int bc,int bcpos) {
    super(container);
    bytecode   = bc;
    bcPosition = bcpos;
    int i = bc - Opcodes.ISHL;
    datatype = i & 0x01;
    }

    public String toString() {
    return "("+lOpr.toString()+" << "+rOpr.toString()+")";
    }

    public IMNode constant_folding() throws CompileException {
    super.constant_folding();

    if (datatype==BCBasicDatatype.INT) {
        if (rOpr.isConstant() && lOpr.isConstant()) {
        IMConstant lcOpr = lOpr.nodeToConstant();
        IMConstant rcOpr = rOpr.nodeToConstant();
        if (opts.doVerbose("cf")) Debug.out.println("++ folding c<<c " + toString());
        lcOpr.setIntValue(lcOpr.getIntValue() << rcOpr.getIntValue());
        return lcOpr;
        }
    }

    return this;
    } 
  
    // IMShiftLeft
    public void translate(Reg result) throws CompileException {    
    Reg reg,regECX;

    if (rOpr.isRealConstant()) {
            int value = rOpr.nodeToConstant().getIntValue();
        lOpr.translate(result);
        regs.writeIntRegister(result);
            if (value==1) {
        code.addl(result, result);
        } else {    
            code.shll(value, result);
            }
    } else {
        regECX = regs.getIntRegister(Reg.ecx);
        
        if (result.any()) 
        regs.setAnyIntRegister(result, regs.chooseIntRegister(regECX));
        
        if (result.equals(Reg.ecx)) {
        reg = regs.chooseIntRegister(regECX);

        lOpr.translate(reg);
        rOpr.translate(regECX);
        
        regs.writeIntRegister(reg);
        regs.readIntRegister(regECX);
        code.shll(reg);
        
        regs.freeIntRegister(regECX);
        regs.allocIntRegister(result, BCBasicDatatype.INT);
        code.movl(reg, result);
        } else {
        lOpr.translate(result);
        rOpr.translate(regECX);
        
        regs.writeIntRegister(result);
        regs.readIntRegister(regECX);
        
        code.shll(result);
        }
        regs.freeIntRegister(regECX);
    }
    }

    public void translate(Reg64 result) throws CompileException {
    if (datatype!=BCBasicDatatype.LONG) throw new Error();
    if (rOpr.isConstant()) {
        IMConstant rcOpr = (IMConstant)rOpr;
        lOpr.translate(result);
        regs.writeLongRegister(result);
        code.shld(rcOpr.getIntValue(), result.low, result.high);
        code.shll(rcOpr.getIntValue(), result.low);
    } else {
        execEnv.codeLongShl(this, lOpr, rOpr, result, bcPosition);
    }
    }
}
