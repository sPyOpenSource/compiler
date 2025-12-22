
package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.backend.*;
import java.util.ArrayList;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;

// **** IMNewMultiArray ****

final public class IMNewMultiArray extends IMOperator {

    private final ClassCPEntry cpEntry;
    private IMOperant oprs[];
    private final int dim;

    public IMNewMultiArray(CodeContainer container,int bc,int bcpos,ClassCPEntry cpEntry,int dim) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = BCBasicDatatype.REFERENCE;
	this.cpEntry = cpEntry;
	this.dim     = dim;
    }

    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	oprs = new IMOperant[dim];
	for (int i=0;i<dim;i++) {
	    oprs[i]=stack.pop();
	    if (oprs[i].getDatatype()!=BCBasicDatatype.INT) {
		throw new CompileException("IMNewMultiArray bcpos:"+Integer.toString(bcPosition)+" wrong datatype on stack!");
	    }
	}
	stack.store(bcPosition);
	stack.push(this);
	return null;
    }

    public IMNode constant_folding() throws CompileException{
	for (int i=0;i<oprs.length;i++) {
	    oprs[i] = (IMOperant)oprs[i].constant_folding();
	}
	return this;
    }

    public void getCollectVars(ArrayList vars) { 
        for (IMOperant opr : oprs) {
            opr.getCollectVars(vars);
        }
    }

    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	for (int i=0;i<oprs.length;i++) {
	    oprs[i] = (IMOperant)oprs[i].assignNewVars(newContainer,slots,opr,retval,bcPos);
	}

	return this;
    }

    public String toString() {
	String retValue =  "new "+cpEntry.getClassName();
        for (IMOperant opr : oprs) {
            retValue += "[" + opr.toString() + "]";
        }
	return retValue;
    }

    // IMNewMultiArray
    public void translate(Reg result) throws CompileException {
	execEnv.codeNewMultiArray(this,cpEntry,oprs,result);
    }
}
