
package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import java.util.ArrayList;

import jx.compiler.*;
import jx.compiler.backend.*;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;

// **** IMNewObjArray *****

final public class IMNewObjArray extends IMOperator {

    private IMOperant size;
    private final ClassCPEntry cpEntry;
    
    public IMNewObjArray(CodeContainer container,int bc,int bcpos,ClassCPEntry cpEntry) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = BCBasicDatatype.REFERENCE; // FIXME Array
	this.cpEntry = cpEntry;
    }
    
    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	size = stack.pop();
	if (size.getDatatype()!=BCBasicDatatype.INT) {
	    if (verbose && System.err!=null) System.err.println("IMNewObjArray bcpos:"+Integer.toString(bcPosition));
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
    public void getCollectVars(ArrayList vars) { size.getCollectVars(vars); }

    @Override
    public IMNode constant_folding() throws CompileException{
	size = (IMOperant)size.constant_folding();
	return this;
    }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	size = (IMOperant)size.assignNewVars(newContainer,slots,opr,retval,bcPos);

	return this;
    }

    @Override
    public String toString() {
	return "new "+cpEntry.getClassName()+"()["+size.toString()+"]";
    }

    // IMNewObjArray
    @Override
    public void translate(Reg result) throws CompileException {
	execEnv.codeNewObjectArray(this,cpEntry,size,result);
    }
}
