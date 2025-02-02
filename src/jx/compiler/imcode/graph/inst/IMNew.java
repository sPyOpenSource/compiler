
package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;
import jx.compiler.nativecode.*;

// **** IMNew ****

final public class IMNew extends IMOperator {

    private final ClassCPEntry cpEntry;

    public IMNew (CodeContainer container,int bc,int bcpos,ClassCPEntry cpEntry) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = BCBasicDatatype.REFERENCE;
	this.cpEntry = cpEntry;
    }

    public ClassCPEntry getClassCPEntry() {
	return cpEntry;
    }

    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	stack.store(bcPosition);
	stack.push(this);
	saveVarStackMap(frame);
	return null;
    }
    
    public String toString() {
	return "new "+cpEntry.getClassName();
    }

    // IMNew
    public void translate(Reg result) throws CompileException {
	execEnv.codeNewObject(this,cpEntry,result);
    }
}
