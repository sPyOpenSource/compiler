
package jx.compiler.imcode.graph.inst.ALU; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug;

import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.*;
import jx.compiler.imcode.graph.inst.IMConstant;
import jx.compiler.backend.*;

// ***** IMSub *****
final  public class IMSub extends IMBinaryOperator {
    public IMSub(CodeContainer container, int bc, int bcpos) {
    super(container);
    tag = tag | OPERATOR | COMPERATOR;    
    bytecode   = bc;
    bcPosition = bcpos;
    datatype   = BCBasicDatatype.INT + (bc-Opcodes.ISUB);
    }

    public IMSub(CodeContainer container, IMOperant lOpr, IMOperant rOpr, int datatype, int bcpos) {    
    super(container);
    tag = tag | OPERATOR | COMPERATOR;
    this.rOpr = rOpr;
    this.lOpr = lOpr;
    this.bcPosition = bcpos;
    this.datatype = datatype;
    }

    @Override
    public boolean isSub() {return true;}

    @Override
    public boolean isSubOrAdd() {return true;}

    @Override
    public String toString() {
    return "(" + lOpr.toString() + "-" + rOpr.toString() + ")";
    } 

    @Override
    public IMNode constant_folding() throws CompileException {
    IMOperant newNode = this;
    int value = 0;

    if (rOpr.isOperator()) {
        rOpr = (IMOperant)((IMOperator)rOpr).constant_folding();
    }

    if (lOpr.isOperator()) {
        lOpr = (IMOperant)((IMOperator)lOpr).constant_folding();
    }

    if (datatype == BCBasicDatatype.INT) {
        // simpel case (c-c)
        if (lOpr.isConstant() && rOpr.isConstant()) {
        if (opts.doVerbose("cf")) Debug.out.println("++ folding c-c " + toString());
        value = lOpr.nodeToConstant().getIntValue() - rOpr.nodeToConstant().getIntValue();
        newNode = new IMConstant(container, -1, bcPosition, value);
        return newNode;
        }
        // case ((...)-c) => ((...)+(-c)) -> IMAdd
        if (rOpr.isConstant()) {
        IMConstant rcOpr = rOpr.nodeToConstant();
        rcOpr.setIntValue(-rcOpr.getIntValue());
        IMAdd newAdd = new IMAdd(container, lOpr, rOpr, datatype, bcPosition);
        if (lOpr.isOperator()) return newAdd.constant_folding();
        return newAdd;
        }
    }

    if (rOpr.isSubOrAdd() && rOpr.hasConstant()) {
        if (lOpr.isConstant()) {
        // todo cases (c-(.+/-.))
        //if (opts.doVerbose("cf")) 
            Debug.out.println("++ no folding  (c-(.+/-.)) " + toString());
        } else if (lOpr.isSubOrAdd() && lOpr.hasConstant()) {
        // case ((.+/-.)-(.-.)) => ((.+/-.)+(.-.)) -> IMAdd        
        if (rOpr.isSub()) {
            ((IMSub)rOpr).swapOperants();
            IMAdd newAdd = new IMAdd(container, lOpr, rOpr, datatype, bcPosition);
            return newAdd.constant_folding();
        }

        if (lOpr.isSub()) {
            // case ((.-.)-(x2+c2)) => ((x1-x2)+c)
            //if (opts.doVerbose("cf")) 
            Debug.out.println("++ no folding  ((.-.)-(x+c)) " + toString());
            return this;
        } else {    
            // case ((x1+c1)-(x2+c2)) => ((x1-x2)+c)
            if (opts.doVerbose("cf")) 
            Debug.out.println("++ folding  ((x+c)-(x+c)) " + toString());

            IMOperant  x1 = lOpr.getLeftOperant();
            IMConstant c1 = lOpr.getRightOperant().nodeToConstant();
            IMOperant  x2 = rOpr.getLeftOperant();
            IMConstant c2 = rOpr.getRightOperant().nodeToConstant();

            value = c1.getIntValue() - c2.getIntValue();
            c1.setIntValue(-value);

            IMSub newSub = new IMSub(container, x1, x2, datatype, bcPosition);
            
            lOpr = (IMOperant)newSub.constant_folding();
            rOpr = c1;

            if (opts.doVerbose("cf")) 
            Debug.out.println("++ folding  => " + toString());

            return this;
        }
        }
    }

    return this;
    }

    public IMOperant constant_folding2la(IMAdd Opr, int c2) {
    if (lOpr.isConstant()) {
        // ((c1-x)+c2) => (c3-x)
        if (opts.doVerbose("cf")) Debug.out.println("++ folding (c-x)+c " + Opr.toString());
        IMConstant lcOpr = lOpr.nodeToConstant();
        int c3 = lcOpr.getIntValue() + c2;        
        if (c3 == 0) return rOpr;
        lcOpr.setIntValue(c3);
        return this;
    }
    return Opr;
    }

    // IMSub
    @Override
    public void translate(Reg result) throws CompileException {
    if (rOpr.isRealConstant()) {
        int value = ((IMConstant)rOpr).getIntValue();
        lOpr.translate(result);

        code.startBC(bcPosition);
        regs.writeIntRegister(result);

        switch (value) {
        case 0:
        return;
        case 1:
        code.decl(result);
        break;
        default:
        code.subl(value,result);
        }
    } else {
        
        Reg reg;
        lOpr.translate(result);

        code.startBC(bcPosition);

        reg = regs.chooseIntRegister(result);
        rOpr.translate(reg);
        regs.writeIntRegister(result);
        code.subl(reg,result);
        regs.freeIntRegister(reg);
        }

    code.endBC();
    }

    @Override
    public void translate(Reg64 result) throws CompileException {
    Reg64 reg;
    lOpr.translate(result);

    reg = regs.chooseLongRegister(result);
    rOpr.translate(reg);

    code.startBC(bcPosition);
    
    regs.writeLongRegister(result);
    code.subl(reg.low,result.low);
    code.sbbl(reg.high,result.high);

    regs.freeLongRegister(reg);

    code.endBC();
    }
}
