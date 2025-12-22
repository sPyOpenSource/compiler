
package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;
import jx.compiler.backend.*;

// ***** IMGetStatic *****

final public class IMGetStatic extends IMOperant {
    private final FieldRefCPEntry cpEntry;
    private final String fieldType;

    public IMGetStatic(CodeContainer container,int bc,int bcpos,FieldRefCPEntry cpEntry) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	this.cpEntry = cpEntry;
	fieldType    = cpEntry.getMemberTypeDesc();
	datatype     = BasicTypeDescriptor.getBasicDatatypeOf(fieldType);
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
        //stack.store();
	stack.push(this);
	return null;
    }

    @Override
    public String toString() {
	return cpEntry.getMemberName();
    }

    @Override
    public int getNrRegs() { return 1; }
    
    // IMGetStatic
    @Override
    public void translate(Reg result) throws CompileException {
	code.startBC(bcPosition);
	execEnv.codeGetStaticField(this, cpEntry, result, bcPosition);
	code.endBC();
    }
    
    @Override
    public void translate(Reg64 result) throws CompileException {
        if (datatype!=BCBasicDatatype.LONG) throw new CompileException("wrong datatype");
        code.startBC(bcPosition);
        execEnv.codeGetStaticFieldLong(this, cpEntry, result, bcPosition);
        code.endBC();
    }
}
