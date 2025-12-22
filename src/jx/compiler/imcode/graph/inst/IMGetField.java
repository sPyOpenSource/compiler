package jx.compiler.imcode.graph.inst;

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;
import jx.compiler.backend.*;

// ***** IMGetField *****

final public class IMGetField extends IMUnaryOperator {

    private final FieldRefCPEntry cpEntry;
    private final String fieldType;

    public IMGetField(CodeContainer container, int bc, int bcpos,
		      FieldRefCPEntry cpEntry) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	this.cpEntry = cpEntry;
	fieldType    = cpEntry.getMemberTypeDesc();
	datatype     = BasicTypeDescriptor.getBasicDatatypeOf(fieldType);
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	operant = stack.pop();
	stack.push(this);
	return null;
    }

    @Override
    public String toString() {
	return operant.toString()+"."+cpEntry.getMemberName();
    } 

    // IMGetField
    @Override
    public void translate(Reg result) throws CompileException {	
	Reg objRef = regs.chooseIntRegister(result);	
	operant.translate(objRef);
	code.startBC(bcPosition);

	{
	    if (operant.checkReference()) 
		execEnv.codeCheckReference(this,objRef,bcPosition);
	}

	execEnv.codeGetField(this,cpEntry,objRef,result,bcPosition);
	code.endBC();
	regs.freeIntRegister(objRef);			     
    }

    @Override
    public void translate(Reg64 result) throws CompileException {	
	if (datatype != BCBasicDatatype.LONG) throw new CompileException("wrong datatype");

	Reg objRef = regs.chooseIntRegister(result.low,result.high);	
	operant.translate(objRef);
	code.startBC(bcPosition);

	if (operant.checkReference()) {
		execEnv.codeCheckReference(this,objRef,bcPosition);
        }

	execEnv.codeGetFieldLong(this,cpEntry,objRef,result,bcPosition);
	code.endBC();

	regs.freeIntRegister(objRef);			     
    }
}
