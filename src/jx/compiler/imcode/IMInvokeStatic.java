package jx.compiler.imcode; 

import jx.classfile.constantpool.*; 
import jx.compiler.*;
import jx.compiler.nativecode.*;

// ***** IMInvokeStatic *****

final public class IMInvokeStatic extends IMInvoke {

    public IMInvokeStatic(CodeContainer container,int bc,int bcpos,
			   MethodRefCPEntry cpEntry) {
	super(container,bc,bcpos,cpEntry);
    }

    public String toReadableString() {
	String retString = cpEntry.getMemberName();
	if (stat_flag) {retString += "@special";}
	return retString += super.toReadableString();
    }

    // IMInvokeStatic
    public void translate(Reg result) throws CompileException {
	stat.invoke_static();
	execEnv.codeStaticCall((IMNode)this,cpEntry,args,datatype,result,bcPosition);
    }

    public void translate(Reg64 result) throws CompileException {
	stat.invoke_static();
	if (opts.isOption("long")) {
	    execEnv.codeStaticCallLong(this,cpEntry,args,datatype,result,bcPosition);
	} else {
	    execEnv.codeThrow(this,-11,bcPosition);
	}
    } 
}
