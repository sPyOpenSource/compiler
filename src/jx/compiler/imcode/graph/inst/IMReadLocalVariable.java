package jx.compiler.imcode.graph.inst; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;
import jx.compiler.nativecode.*;

// ***** IMReadLocalVariable *****

final public class IMReadLocalVariable extends IMVarAccess {

    private boolean       lazyForwarding = true;
    private IMConstant    constValue     = null;
    private IMBasicBlock  ownBasicBlock;
    private boolean       isThisPointer;

    public IMReadLocalVariable(CodeContainer container,int bc,int bcpos) {
	super(container);
	tag |= IMNode.VARIABLE; 
	bytecode   = bc;
	bcPosition = bcpos;
	datatype   = BCBasicDatatype.INT + (bc-Opcodes.ILOAD_0) / 4;
	ivar   = (bc-Opcodes.ILOAD_0) & 0x03;
        isThisPointer = ivar == 0;
    }
        
    public IMReadLocalVariable(CodeContainer container,int bc,int bcpos,int index) {
	super(container);
	tag |= IMNode.VARIABLE; 
	bytecode   = bc;
	bcPosition = bcpos;
	datatype   = BCBasicDatatype.INT + (bc-Opcodes.ILOAD);
	ivar   = index;
        isThisPointer = ivar == 0;
    }

    public IMReadLocalVariable(int index,int bcpos, CodeContainer container, int datatype) {
	super(container);
	tag |= IMNode.VARIABLE; 
	bytecode   = -1;
	bcPosition = bcpos;
	ivar   = index;
	this.datatype = datatype;
        isThisPointer = ivar == 0;
    }

    @Override
    public boolean isThisPointer() {
	return isThisPointer;
    }

    @Override
    public boolean isConstant() {
	return lazyForwarding && constValue!=null;
    }

    @Override
    public IMConstant nodeToConstant() {
	if (constValue==null) throw new ClassCastException("node is not constant!");
	if (opts.doVerbose("cfor")) Debug.out.println(":# "+toString()+"->"
						      +constValue.toString());
	return constValue;
    }

    @Override
    public IMNode constant_forwarding(IMNodeList varList) throws CompileException {	
	for (int i = 0; i < varList.size(); i++) {
	    IMStoreLocalVariable svar = (IMStoreLocalVariable)varList.at(i);	    
	    if (svar.getVarIndex() == ivar) {
		if (lazyForwarding) {
		    if (opts.doVerbose("cfor")) Debug.out.println("#: " + svar.toString());
		    constValue = svar.getOperant().nodeToConstant();
		    return this;
		} else {
		    if (opts.doVerbose("cfor")) Debug.out.println("## " + svar.toString());
		    return svar.getOperant();
		}
	    }
	}
	return this;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) {
	ownBasicBlock = basicBlock;
	
	/*
	LocalVariable[] vars = frame.getLocalVars();
	if (ivar<vars.length) {
	    if (vars[ivar].getDatatype()!=datatype) {
		addDebugInfo("!! v"+ivar+BCBasicDatatype.toSymbol(vars[ivar].getDatatype()));
	    }
	}
	*/

	lvar = frame.getLocalVar(ivar,datatype);
	stack.push(this);
	return null;
    }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	if (opr[ivar]!=null) {
	    return opr[ivar];
	} 

	ivar = slots[ivar];
	
	return this;
    }

    @Override
    public String toString() {
	if (opts.doFastThisPtr() && isThisPointer) {
	    return "this";
	} else {
	    return "v" + BCBasicDatatype.toSymbol(datatype) + Integer.toString(ivar);
	}
    }

    public void codePush() throws CompileException {
	int offset = frame.getOffset(lvar);
	frame.push(datatype,Reg.ebp.rdisp(offset));
    }

    @Override
    public boolean checkReference() {
	if (lvar.isChecked(ownBasicBlock)==true) return false;
	lvar.check(ownBasicBlock);
	return true;
    }

    @Override
    public boolean checkArrayRange(int range) {
	return lvar.isRangeChecked(ownBasicBlock,range) != true;
    }

    @Override
    public boolean checkArrayRange(IMOperant index) {
	if (index.isVariable()) {
	    IMReadLocalVariable var = (IMReadLocalVariable)index;
	    if (lvar.isIndexChecked(ownBasicBlock,var.getLocalVariable())==true) return false; 
	}
	return true;
    }

    // IMReadLocalVariable
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
