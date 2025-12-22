
package jx.compiler.imcode.graph.inst.ALU; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 

import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.*;
import jx.compiler.imcode.graph.inst.IMConstant;
import jx.compiler.backend.*;

// ***** IMBitXor *****
public class IMBitXor extends IMBitOperator {

    public IMBitXor(CodeContainer container,int bc,int bcpos) {
    super(container);
    bytecode   = bc;
    bcPosition = bcpos;
    int i = bc - Opcodes.ISHL;
    datatype = i & 0x01;
    }

    public String toString() {
    return "(" + lOpr.toString() + " ^ " + rOpr.toString() + ")";
    }

    public IMNode constant_folding() throws CompileException {
    super.constant_folding();

    if (datatype==BCBasicDatatype.INT) {
        if (rOpr.isConstant() && lOpr.isConstant()) {
        IMConstant lcOpr = lOpr.nodeToConstant();
        IMConstant rcOpr = rOpr.nodeToConstant();
        int value = (lcOpr.getIntValue() ^ rcOpr.getIntValue());
        if (opts.doVerbose("cf")) Debug.out.println("++ folding c^c " + toString());        
        lcOpr.setIntValue(value);
        return lcOpr;
        }

        if (lOpr.isConstant()) {
        IMOperant swap = lOpr;
        lOpr = rOpr;
        rOpr = swap;
        }
        
        if (rOpr.isConstant()) {
            int value = rOpr.nodeToConstant().getIntValue();         
                if (value==0) {
          if (opts.doVerbose("cf")) Debug.out.println("++ folding c^0 " + toString());    
                  return lOpr;
                }  
        //if (opts.doVerbose("cf")) Debug.out.println("++ no folding c^c "+toReadableString());
        }
    }

    return this;
    } 
  
    // IMBitXor
    public void translate(Reg result) throws CompileException {    
    Reg reg;

    lOpr.translate(result);
    reg = regs.chooseIntRegister(result);
    rOpr.translate(reg);
    regs.writeIntRegister(result);
    code.xorl(reg, result);
    regs.freeIntRegister(reg);
    }

    // IMBitXor Long
    public void translate(Reg64 result) throws CompileException {    
    Reg64 reg;

    lOpr.translate(result);
    reg = regs.chooseLongRegister(result);
    rOpr.translate(reg);

    code.startBC(bcPosition);

    regs.writeLongRegister(result);
    code.xorl(reg.low, result.low);
    code.xorl(reg.high, reg.high);

    code.endBC();
    
    regs.freeLongRegister(reg);
    } 
}
