
package jx.compiler.imcode.graph.inst;

import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.LocalVariable;
import jx.compiler.imcode.graph.*;
import jx.compiler.nativecode.*;

// ***** IMReadBlockVariable *****

final public class IMReadBlockVariable extends IMVarAccess {

    private final int number;
    private final LocalVariable lvar;
    private final Object refCheckMarke;

    public IMReadBlockVariable(CodeContainer container, Object marke, int number, int datatype, int bcPosition) {
	super(container);
	tag |= IMNode.BLOCKVAR;
	this.number     = number;
	this.datatype   = datatype;
	this.bcPosition = bcPosition;
	this.lvar  = frame.getBlockSlot(datatype,number);	
	this.refCheckMarke = marke;
    }

    public int getBlockVarIndex() {
	return number;
    }

    @Override
    public String toString() {
	return "b" + Integer.toString(number);
    }

    @Override
    public boolean checkReference() {

	if (!execEnv.doOptimize(1)) return true;
	if (lvar.isChecked(refCheckMarke)==true) return false;
	lvar.check(refCheckMarke);

	return true;
    }

    @Override
    public int getNrRegs() { return 1; }

    // IMReadBlockVariable
    @Override
    public void translate(Reg result) throws CompileException {
	code.startBC(bcPosition);
	regs.readIntRegisterFromSlot(lvar,result,datatype);
	if (datatype==BCBasicDatatype.REFERENCE)
	    execEnv.codeCheckMagic(this,result,bcPosition);
	code.endBC();
    }

    @Override
    public void translate(Reg64 result) throws CompileException {
	code.startBC(bcPosition);
	regs.readLongRegisterFromSlot(lvar,result);
	code.endBC();
    }
}
