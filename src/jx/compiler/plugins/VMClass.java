package jx.compiler.plugins;

import jx.compiler.*;

import jx.classfile.datatypes.*;
import jx.classfile.constantpool.*;

import jx.compiler.imcode.*;
import jx.compiler.nativecode.*;
import jx.compiler.persistent.*;

public class VMClass implements CompilerPlugin {

    ExecEnvironmentIA32 e;

    public VMClass(ExecEnvironmentIA32 e) {
	this.e = e;
    }

    @Override
    public boolean code(IMNode node,
			RegManager regs,
			BinaryCodeIA32   code,
			ClassMemberCPEntry methodRefCPEntry,
			IMOperant        obj,
			IMOperant[]      args,
			int              datatype,
			Reg              result,
			int              bcPosition) throws CompileException {
	

	String methodName = methodRefCPEntry.getMemberName();

	regs.saveIntRegister();
	Reg objRef = regs.chooseIntRegister(result);
	obj.translate(objRef);
	regs.freeIntRegister(objRef);
	code.pushl(objRef);
        switch (methodName) {
            case "getName":
                code.call(new VMSupportSTEntry(VMSupportSTEntry.VM_GETCLASSNAME));
                break;
            case "getInstanceSize":
                code.call(new VMSupportSTEntry(VMSupportSTEntry.VM_GETINSTANCESIZE));
                break;
            case "isPrimitive":
                code.call(new VMSupportSTEntry(VMSupportSTEntry.VM_ISPRIMITIVE));
                break;
            default:
                throw new CompileException("VMClass: method not implemented");
        }
	code.addl(4,Reg.esp);

	if (methodName.equals("getName")) {
	    regs.allocIntRegister(result,BCBasicDatatype.REFERENCE);
	} else {
	    regs.allocIntRegister(result,BCBasicDatatype.INT);
	}
	if (result!=null && result.value!=0) {
	    code.movl(Reg.eax,result);
	}
	
	return true;
    }
}
