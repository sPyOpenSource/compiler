
package jx.compiler.imcode.graph.inst; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.*;
import jx.compiler.backend.*;

// ***** IMCompare *****

final  public class IMCompare extends IMBinaryOperator {

    public IMCompare(CodeContainer container,int bc,int bcpos) {    
    super(container);
    bytecode   = bc;
    bcPosition = bcpos;
    datatype = BCBasicDatatype.INT;
    }

    @Override
    public IMNode constant_folding() throws CompileException{
    if (rOpr.isOperator()) {
        rOpr = (IMOperant)((IMOperator)rOpr).constant_folding();
    }
    if (lOpr.isOperator()) {
        lOpr = (IMOperant)((IMOperator)lOpr).constant_folding();
    }
    if (rOpr.isConstant() && lOpr.isConstant()) {
        if (opts.doVerbose("cf")) Debug.out.println("-- no folding "+toString());
    }
    return this;
    }

    @Override
    public String toString() {
    return "compare("+lOpr.toString()+","+rOpr.toString()+")";
    }

    // IMCompare for long, float and double read spec
    @Override
    public void translate(Reg result) throws CompileException {    
    if (opts.isOption("long") && bytecode == Opcodes.LCMP) {
        execEnv.codeLongCompare(this, lOpr, rOpr, result, bcPosition);
        return ;
    }
    execEnv.codeThrow(this,-11,bcPosition);
    }

    @Override
    public void translate(RegFloat result) throws CompileException {
        RegFloat reg;
        lOpr.translate(result);
        reg = regs.chooseFloatRegister();
        rOpr.translate(reg);
        code.startBC(bcPosition);
        regs.writeFloatRegister(result);
        code.fcmps(reg, result);
        regs.freeFloatRegister(reg);
        code.endBC();
    }

    @Override
    public void translate(RegDouble result) throws CompileException {
        RegDouble reg;
        lOpr.translate(result);
        reg = regs.chooseDoubleRegister();
        rOpr.translate(reg);
        code.startBC(bcPosition);
        regs.writeDoubleRegister(result);
        code.fcmpsd(reg, result);
        regs.freeDoubleRegister(reg);
        code.endBC();
    }
    
}
