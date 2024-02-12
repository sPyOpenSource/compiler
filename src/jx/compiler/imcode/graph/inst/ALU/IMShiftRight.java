package jx.compiler.imcode.graph.inst.ALU; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.*;
import jx.compiler.imcode.graph.inst.IMConstant;
import jx.compiler.nativecode.*;

// ***** IMShiftRight *****
final public class IMShiftRight extends IMBitOperator {

    public IMShiftRight(CodeContainer container,int bc,int bcpos) {
    super(container);
    bytecode   = bc;
    bcPosition = bcpos;
    int i = bc - Opcodes.ISHL;
    datatype = i & 0x01;
    }

    @Override
    public String toString() {
    return "("+lOpr.toString()+" >> "+rOpr.toString()+")";
    }

    @Override
    public IMNode constant_folding() throws CompileException {
    super.constant_folding();

    if (datatype==BCBasicDatatype.INT) {
        if (rOpr.isConstant() && lOpr.isConstant()) {
        IMConstant lcOpr = lOpr.nodeToConstant();
        IMConstant rcOpr = rOpr.nodeToConstant();
        if (opts.doVerbose("cf")) Debug.out.println("++ folding c>>c " + toString());
        int value = lcOpr.getIntValue() >> rcOpr.getIntValue();
        lcOpr.setIntValue(value);
        return lcOpr;
        }        
    }

    return this;
    } 
  
    // IMShiftRight
    @Override
    public void translate(Reg result) throws CompileException {    
    Reg reg,regECX;

    if (rOpr.isRealConstant()) {
        lOpr.translate(result);
        regs.writeIntRegister(result);
        if (opts.isOption("shift_bug")) {    
            Debug.out.println("warn: use buggy shift");
            code.shrl(rOpr.nodeToConstant().getIntValue(), result);
        } else {
            code.sarl(rOpr.nodeToConstant().getIntValue(), result);
        }
    } else {
        regECX = regs.getIntRegister(Reg.ecx);
        
        if (result.any()) 
        regs.setAnyIntRegister(result,regs.chooseIntRegister(regECX));
        
        if (result.equals(Reg.ecx)) {
        reg = regs.chooseIntRegister(regECX);
        
        lOpr.translate(reg);
        rOpr.translate(regECX);
        
        regs.writeIntRegister(reg);
        regs.readIntRegister(regECX);
        code.sarl(reg);
        
        regs.freeIntRegister(regECX);
        regs.allocIntRegister(result,BCBasicDatatype.INT);
        code.movl(reg,result);
        } else {
        lOpr.translate(result);
        rOpr.translate(regECX);
        
        regs.writeIntRegister(result);
        regs.readIntRegister(regECX);
        
        code.sarl(result);
        }
        regs.freeIntRegister(regECX);
    }
    }

    @Override
    public void translate(Reg64 result) throws CompileException {
    if (datatype!=BCBasicDatatype.LONG) throw new Error();
    execEnv.codeLongShr(this,lOpr, rOpr, result, bcPosition);
    }
}
