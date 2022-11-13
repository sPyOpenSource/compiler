package jx.compiler.imcode.graph.inst; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.*;
import jx.compiler.nativecode.*;

// ***** IMBitOr *****
public class IMBitOr extends IMBitOperator {

    public IMBitOr(CodeContainer container,int bc,int bcpos) {
	super(container);
	bytecode   = bc;
	bcPosition = bcpos;
	int i = bc - Opcodes.ISHL;
	datatype = i & 0x01;
    }

    public String toString() {
	return "(" + lOpr.toString() + " | " + rOpr.toString() + ")";
    }

    public IMNode constant_folding() throws CompileException {
	super.constant_folding();

	if (datatype==BCBasicDatatype.INT) {
	    if (rOpr.isConstant() && lOpr.isConstant()) {
		IMConstant lcOpr = lOpr.nodeToConstant();
		IMConstant rcOpr = rOpr.nodeToConstant();
		if (opts.doVerbose("cf")) Debug.out.println("++ folding c|c " + toString());
		int value = lcOpr.getIntValue() | rcOpr.getIntValue();
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
                if (value == 0) {
		  if (opts.doVerbose("cf")) Debug.out.println("++ folding c|0 "+toString());	
                  return lOpr;
                }  
                if (value == 0xffffffff) {
		  if (opts.doVerbose("cf")) Debug.out.println("++ folding c|0xffffffff "+toString());
                  return rOpr;
                }
	    }
	}

	return this;
    } 
  
    // IMBitOr
    public void translate(Reg result) throws CompileException {	
	Reg reg;

	lOpr.translate(result);
	reg = regs.chooseIntRegister(result);
	rOpr.translate(reg);
	regs.writeIntRegister(result);
	code.orl(reg,result);
	regs.freeIntRegister(reg);
    }

    // IMBitOr Long

    public void translate(Reg64 result) throws CompileException {	
	Reg64 reg;

	lOpr.translate(result);
	reg = regs.chooseLongRegister(result);
	rOpr.translateLong(reg);
	
	code.startBC(bcPosition);
	
	regs.writeLongRegister(result);
	code.orl(reg.low,result.low);
	code.orl(reg.high,reg.high);

	code.endBC();

	regs.freeLongRegister(reg);
    } 
}
