
package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.compiler.*;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;
import jx.compiler.nativecode.*;

// ***** IMInvokeInterface *****

final public class IMInvokeInterface extends IMMultiOperant {
    private final InterfaceMethodRefCPEntry cpEntry;
    private final MethodTypeDescriptor typeDesc;

    public IMInvokeInterface(CodeContainer container,int bc,int bcpos,
			     InterfaceMethodRefCPEntry cpEntry) {
	super(container);
	bytecode     = bc;
	bcPosition   = bcpos;
	this.cpEntry = cpEntry;
	typeDesc     = new MethodTypeDescriptor(cpEntry.getMemberTypeDesc());
	datatype     = typeDesc.getBasicReturnType();
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack, IMBasicBlock basicBlock) throws CompileException {

	int[] argTypes = typeDesc.getBasicArgumentTypes();

	args = new IMOperant[argTypes.length];
	for (int i=(argTypes.length-1);i>=0;i--) {
	    args[i] = stack.pop();
	}

	obj = stack.pop();

	saveVarStackMap(frame);

	if (datatype == BCBasicDatatype.VOID) {
	    return this;
	} else {
	    stack.push(this);
	    return null;
	}
    }

    @Override
    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
	if (obj!=null) {
	    obj = (IMOperant)obj.inlineCode(iCode, depth, forceInline);
	}

	for (int i=0;i<args.length;i++) {
	    args[i] = (IMOperant)args[i].inlineCode(iCode, depth, forceInline);
	}
	return this;
    }

    @Override
    public String toString() {
	String retString = "";
	if (obj!=null) retString = obj.toString()+".";
	retString += cpEntry.getMemberName();
	/*
	retString += "(";
	int i=0;
	while (i<args.length)  {
	    retString += args[i].toReadableString();
	    i++;
	   if (i<args.length) retString+=",";
	}
	return retString+")";
	*/
	retString += super.toString();
	return retString;
    }

    // IMInvokeInterface
    @Override
    public void translate(Reg result) throws CompileException {
	stat.invoke_interface();
	execEnv.codeInterfaceCall(this, cpEntry, obj, args, datatype, result, bcPosition);
    }

    @Override
    public void translate(Reg64 result) throws CompileException {
	stat.invoke_interface();
	execEnv.codeInterfaceCallLong(this, cpEntry, obj, args, datatype, result, bcPosition);
    }
}
