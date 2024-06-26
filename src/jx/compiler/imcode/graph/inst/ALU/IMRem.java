
package jx.compiler.imcode.graph.inst.ALU; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.*;
import jx.compiler.imcode.graph.inst.IMConstant;
import jx.compiler.nativecode.*;

// ***** IMRem *****

final  public class IMRem extends IMBinaryOperator {
    public IMRem(CodeContainer container,int bc,int bcpos) {
    super(container);
    bytecode   = bc;
    bcPosition = bcpos;
    datatype = BCBasicDatatype.INT + (bc-Opcodes.IREM);
    }

    @Override
    public IMNode constant_folding() throws CompileException {
    IMOperant newNode = this;
    int       value = 0;
    
    if (rOpr.isOperator()) {
        rOpr = (IMOperant)((IMOperator)rOpr).constant_folding();
    }

    if (lOpr.isOperator()) {
        lOpr = (IMOperant)((IMOperator)lOpr).constant_folding();
    }

    if (datatype==BCBasicDatatype.INT) {

        // simpel case (c/c) => c
        if (lOpr.isConstant() && rOpr.isConstant()) {
        value = lOpr.nodeToConstant().getIntValue() % rOpr.nodeToConstant().getIntValue();
        newNode = new IMConstant(container,-1,bcPosition,value);
        if (opts.doVerbose("cf")) Debug.out.println("++ folding c%c "+toString());
        return newNode;
        }
        
        // simpel case (x/1) => c
        if (rOpr.isConstant() && (value = rOpr.nodeToConstant().getIntValue()) == 1) {
        if (opts.doVerbose("cf")) Debug.out.println("++ no folding x%1 " + toString());
        }

        // simpel case (0/...) => 0
        if (lOpr.isConstant() && (value = lOpr.nodeToConstant().getIntValue()) == 0) {
        if (opts.doVerbose("cf")) Debug.out.println("++ no folding 0/x " + toString());
        }

    }

    // todo ...

    return this;
    }


    @Override
    public String toString() {
    return "(" + lOpr.toString() + "%" + rOpr.toString() + ")";
    }

    // IMRem
    @Override
    public void translate(Reg result) throws CompileException {

    Reg rEAX = regs.getIntRegister(Reg.eax);
    Reg rEDX = regs.getIntRegister(Reg.edx);
    Reg divisor = regs.chooseIntRegister(rEAX, rEDX);
    
    if (rOpr.isRealConstant() && rOpr.nodeToConstant().getIntValue()==0) {
        execEnv.codeThrow(this, -6, bcPosition);
    } else {
        rOpr.translate(divisor);
        lOpr.translate(rEAX);
    
        code.startBC(bcPosition);
    
        regs.readIntRegister(divisor);
        regs.writeIntRegister(rEAX);
    
        if (!rOpr.isConstant()) 
        execEnv.codeCheckDivZero(this, divisor, bcPosition);
        
        regs.allocIntRegister(rEDX, BCBasicDatatype.INT);

        code.cdq();
        code.idivl(divisor);
    
        regs.freeIntRegister(divisor);
        regs.freeIntRegister(rEDX);
        regs.freeIntRegister(rEAX);
    
        regs.allocIntRegister(result, Reg.edx, BCBasicDatatype.INT);
    
        if (!result.equals(Reg.edx)) {
        code.movl(rEDX, result);
        }

        code.endBC();
    }
    }

    @Override
    public void translate(Reg64 result) throws CompileException {
        if (datatype != BCBasicDatatype.LONG) throw new Error();
        execEnv.codeLongRem(this, lOpr, rOpr, result, bcPosition);
    }
}
