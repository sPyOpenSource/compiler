package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.nativecode.*;

// ***** IMInvokeSpecial *****

final public class IMInvokeSpecial extends IMInvoke {
    public IMInvokeSpecial(CodeContainer container, int bc, int bcpos,
			   MethodRefCPEntry cpEntry) {
	super(container,bc,bcpos,cpEntry);
    }

    @Override
    public String toString() {
	String retString = obj.toString() + ".";
	retString += cpEntry.getMemberName();
	if (stat_flag) {retString += "@special";}
	return retString += super.toString();

    }

    // IMInvokeSpecial
    @Override
    public void translate(Reg result) throws CompileException {
	stat.invoke_static();
	execEnv.codeSpecialCall(this, cpEntry, obj, args, datatype, result, bcPosition);
    }

    @Override
    public void translate(Reg64 result) throws CompileException {
	stat.invoke_static();
	if (opts.isOption("long")) {
	    execEnv.codeSpecialCallLong(this, cpEntry, obj, args, datatype, result, bcPosition);
	} else {
	    execEnv.codeThrow(this, -11, bcPosition);
	}
    } 
}
