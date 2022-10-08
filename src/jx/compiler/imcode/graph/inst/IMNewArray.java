
package jx.compiler.imcode.graph.inst; 

import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.nativecode.*;
import java.util.ArrayList;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;

// **** IMNewArray ****

final public class IMNewArray extends IMOperator {

    private final int atype;
    private IMOperant size;
    private final String stackMap = "[]";

    public IMNewArray (CodeContainer container,int bc,int bcpos,int atype) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = BCBasicDatatype.REFERENCE; // FIXME Array !?!
	this.atype   = atype;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	// TODO new local variable allocation ??
	size = stack.pop();
	if (size.getDatatype() != BCBasicDatatype.INT && size.getDatatype() != BCBasicDatatype.SHORT) {
	    if (verbose) System.err.println("IMNewArray bcpos:" + Integer.toString(bcPosition));
	    throw new CompileException("!!! wrong datatype on stack !!!");	    
	}
	stack.store(bcPosition);
	stack.push(this);
	saveVarStackMap(frame);
	return null;
    }

    @Override
    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
	size = (IMOperant)size.inlineCode(iCode, depth, forceInline);
	return this;
    }

    @Override
    public IMNode constant_folding() throws CompileException{
	size = (IMOperant)size.constant_folding();
	return this;
    }

    @Override
    public void getCollectVars(ArrayList vars) { size.getCollectVars(vars); }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer, int slots[], IMOperant opr[], int retval, int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	size = (IMOperant)size.assignNewVars(newContainer, slots, opr, retval, bcPos);

	return this;
    }

    @Override
    public String toReadableString() {
	return "new " + BCBasicDatatype.toString(atype) + "[" + size.toReadableString() + "]";
    }

    // IMNewArray
    @Override
    public void translate(Reg result) throws CompileException {
	execEnv.codeNewArray(this, atype, size, result);
    }
}
