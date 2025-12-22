
package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.IMBasicBlock;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.imcode.graph.IMUnaryOperator;
import jx.compiler.backend.*;

// **** IMCheckCast ****

final public class IMCheckCast extends IMUnaryOperator {

    private final ClassCPEntry cpEntry;

    public IMCheckCast(CodeContainer container, int bc, int bcpos, ClassCPEntry cpEntry) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = BCBasicDatatype.REFERENCE;
	this.cpEntry = cpEntry;
    }
    
    @Override
    public IMNode processStack(VirtualOperantenStack stack, IMBasicBlock basicBlock) throws CompileException {
        operant = stack.pop();
	if (operant.getDatatype() != BCBasicDatatype.REFERENCE) {
	    if (verbose && System.err != null) {
		System.err.println("IMCheckCast bcpos:" + Integer.toString(bcPosition));
		System.err.println("!!! wrong datatype on stack !!!");
	    }
	    System.exit(-1);
	}
	stack.push(this);
	return null;
    }

    @Override
    public String toString() {
	return "(" + cpEntry.getClassName() + ")(" + operant.toString() + ")";
    }

    // IMCheckCast
    @Override
    public void translate(Reg result) throws CompileException {	
	operant.translate(result);
	execEnv.codeCheckCast(this, cpEntry, result, bcPosition);
    }
    
}
