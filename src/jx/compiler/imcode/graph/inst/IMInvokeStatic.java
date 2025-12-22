package jx.compiler.imcode.graph.inst; 

import jx.classfile.constantpool.*; 
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.backend.*;

// ***** IMInvokeStatic *****

final public class IMInvokeStatic extends IMInvoke {
    public IMInvokeStatic(CodeContainer container,int bc,int bcpos,
			   MethodRefCPEntry cpEntry) {
	super(container,bc,bcpos,cpEntry);
    }

    public String toString() {
	String retString = cpEntry.getMemberName();
	if (stat_flag) {retString += "@special";}
	return retString += super.toString();
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
