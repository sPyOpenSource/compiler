
package jx.compiler.imcode.graph.inst; 

import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.nativecode.*;
import java.util.ArrayList;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;

// **** IMArrayLength ****

final public class IMArrayLength extends IMOperator {

    private IMOperant array;

    public IMArrayLength(CodeContainer container, int bc, int bcpos) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = BCBasicDatatype.INT;
    }
    
    @Override
    public IMNode processStack(VirtualOperantenStack stack, IMBasicBlock basicBlock) throws CompileException {
        array = stack.pop();
	if (array.getDatatype()!=BCBasicDatatype.REFERENCE) 
	    throw new CompileException("wrong datatype " + Integer.toString(array.getDatatype()));
	//stack.store();
	stack.push(this);
	return null;
    }

    @Override
    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
	array = (IMOperant)array.inlineCode(iCode, depth, forceInline);
	return this;
    }

    @Override
    public IMNode constant_folding() throws CompileException{
	array = (IMOperant)array.constant_folding();
	return this;
    }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer, int slots[], IMOperant opr[], int retval, int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	array = (IMOperant)array.assignNewVars(newContainer, slots, opr, retval, bcPos);

	return this;
    }
    
    @Override
    public String toString() {
	return array.toString() + ".length";
    }

    @Override
    public int getNrRegs() { return array.getNrRegs() + 1; }

    @Override
    public void getCollectVars(ArrayList vars) { array.getCollectVars(vars); }

    // IMArrayLength
    @Override
    public void translate(Reg result) throws CompileException {
	Reg arrayRef = regs.chooseIntRegister(result);	
	array.translate(arrayRef);

	if (array.checkReference())
	    execEnv.codeCheckReference(this, arrayRef, bcPosition);

	execEnv.codeGetArrayLength(this, arrayRef, result);

	regs.freeIntRegister(arrayRef);
    }
    
}
