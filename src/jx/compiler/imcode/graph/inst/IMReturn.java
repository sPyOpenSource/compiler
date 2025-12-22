
package jx.compiler.imcode.graph.inst; 

import jx.classfile.*;
import jx.compiler.*;
import jx.compiler.backend.*;
import java.util.ArrayList;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;

// ***** IMReturn *****

final public class IMReturn extends IMBranch  {
    private IMOperant    retValue;
    private IMBasicBlock ownBasicBlock;

    public IMReturn(CodeContainer container,int bc,int bcpos) {
	super(container);
	tag = INSTRUCTION | BRANCH | BB_END | RETURN;

	bytecode   = bc;
	bcPosition = bcpos;
	// see processStack for datatype
	datatype   = -1;

	targets = null;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException { 
	ownBasicBlock = basicBlock;
	if (bytecode==Opcodes.RETURN) return this;
	retValue = stack.pop();
	datatype = retValue.getDatatype();
	return this;
    }

    public void setOperant(IMOperant opr) {
	retValue = opr;
    }

    public IMOperant getOperant() {
	return retValue;
    }

    public boolean isVoidReturn() {
	return (retValue==null);
    }

    @Override
    public IMNode constant_folding() throws CompileException{
	if (retValue!=null) retValue = (IMOperant)retValue.constant_folding();
	return this;
    }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
	init(newContainer);
	if (retValue!=null) {
	  return (IMOperant)retValue.assignNewVars(newContainer,slots,opr,retval,bcPos);
	} else {
	  return null;
	}
    }

    public void assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,IMCodeVector retCode,int bcPos) throws CompileException {
	IMBasicBlock epilog = container.getEpilog();
	init(newContainer);
	if (retValue!=null) {
	    retValue = (IMOperant)retValue.assignNewVars(newContainer,slots,opr,retval,bcPos);
	    retCode.add(new IMStoreLocalVariable(container,retval,retValue,bcPos));
	}
	if (!ownBasicBlock.isLastBasicBlock()) {
	   retCode.add(new IMGoto(container,-1,bcPos,epilog));
	}
    }

    @Override
    public String toString() {
	if (retValue==null) return "return";
	return "return "+retValue.toString();	    
    }    

    @Override
    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
	if (retValue==null) return this;
	retValue = (IMOperant)retValue.inlineCode(iCode, depth, forceInline);
	return this;
    }

    @Override
    public void getCollectVars(ArrayList vars) { if (retValue!=null) retValue.getCollectVars(vars); }

    @Override
    public int getNrRegs() { 
	if (retValue!=null) return 1+retValue.getNrRegs(); 
	return 0;
    }

    // IMReturn
    @Override
    public void translate(Reg result) throws CompileException {
		
	if (retValue!=null) {
	    Reg retval = regs.getIntRegister(Reg.eax);
	    if (retValue.isConstant()) {
		int value = ((IMConstant)retValue).getIntValue();
		if (value==0) {
		    code.xorl(retval,retval);
		} else {
		    code.movl(value,retval);
		}
	    } else {
	      retValue.translate(retval);
	    }
	    regs.freeIntRegister(retval);
	}

	if (!ownBasicBlock.isLastBasicBlock()) {
	  IMBasicBlock epilog = container.getEpilog();
	  code.jmp(epilog.getNewJumpTarget());
	}
    }

    @Override
    public void translate(Reg64 result) throws CompileException {		
	if (retValue==null) throw new CompileException("unsupported return without value!");

	Reg64 retval = regs.getLongRegister(Reg64.eax);
	if (opts.isOption("long")) {
	    retValue.translate(retval);
	} else {
	    code.xorl(retval.low,retval.low);
	    code.xorl(retval.high,retval.high);
	}
	regs.freeLongRegister(retval);
	if (!ownBasicBlock.isLastBasicBlock()) {
	  IMBasicBlock epilog = container.getEpilog();
	  code.jmp(epilog.getNewJumpTarget());
	}
    }
}
