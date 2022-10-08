
package jx.compiler.imcode; 

import jx.classfile.*;
import jx.zero.Debug; 
import jx.compiler.*;
import jx.compiler.nativecode.*;
import jx.compiler.symbols.*;
import java.util.ArrayList;

// ***** IMConditionalBranch *****

final  public class IMConditionalBranch extends IMBranch  {

    private IMOperant rOpr;
    private IMOperant lOpr;
    private UnresolvedJump jumpTarget;

    public IMConditionalBranch(CodeContainer container,int bc,int bcpos,IMBasicBlock label) {
	super(container);

	bytecode   = bc;
	bcPosition = bcpos;
	datatype   = -1;

	targets    = new IMBasicBlock[2];
	targets[1] = label;
    }

    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) {
	if (bytecode < Opcodes.IF_ICMPEQ ||
	    bytecode == Opcodes.IFNULL   ||
	    bytecode == Opcodes.IFNONNULL ) {
	    rOpr = null;
	    lOpr = stack.pop();
	} else {
	    rOpr = stack.pop();
	    lOpr = stack.pop();
	}
	jumpTarget = targets[1].getNewJumpTarget();
	//stack.flush();
	//basicBlock.leave(stack);
	saveVarStackMap(frame);
	return this;
    }

    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
	if (rOpr!=null) rOpr = (IMOperant)rOpr.inlineCode(iCode, depth, forceInline);
	lOpr = (IMOperant)lOpr.inlineCode(iCode, depth, forceInline);
	return this;
    }

    public IMNode constant_folding() throws CompileException{
	if (rOpr!=null) rOpr = (IMOperant)rOpr.constant_folding();
	lOpr = (IMOperant)lOpr.constant_folding();

	solveTargets();

	if (lOpr.isConstant()) {
	    IMConstant clOpr = lOpr.nodeToConstant();
	    if (rOpr==null) {
		switch (bytecode) {
		case Opcodes.IFEQ: 
		    {
			if (opts.doVerbose("cf")) Debug.out.println("++ folding "+toReadableString());
			if (clOpr.getIntValue()==0) {
			    IMGoto ngoto = new IMGoto(container,bcPosition,targets[1],jumpTarget);
			    if (opts.doVerbose("cf")) Debug.out.println("++ true => "+ngoto.toReadableString());
			    return ngoto;
			} else {
			    targets[1].removeJumpTarget(jumpTarget);
			    IMGoto ngoto = new IMGoto(container,bcPosition,targets[0],targets[0].getNewJumpTarget());
			    if (opts.doVerbose("cf")) Debug.out.println("++ false => "+ngoto.toReadableString());
			    return ngoto;
			}
		    }
		case Opcodes.IFNE:
		    {
			if (opts.doVerbose("cf")) Debug.out.println("++ folding "+toReadableString());
			if (clOpr.getIntValue()!=0) {
			    IMGoto ngoto = new IMGoto(container,bcPosition,targets[1],jumpTarget);
			    if (opts.doVerbose("cf")) Debug.out.println("++ true => "+ngoto.toReadableString());
			    return ngoto;
			} else {
			    targets[1].removeJumpTarget(jumpTarget);
			    IMGoto ngoto = new IMGoto(container,bcPosition,targets[0],targets[0].getNewJumpTarget());
			    if (opts.doVerbose("cf")) Debug.out.println("++ false => "+ngoto.toReadableString());
			    return ngoto;
			}
		    }
		case Opcodes.IFNULL:
		    {
			    if (opts.doVerbose("cf")) Debug.out.println("++ folding "+toReadableString());
			    if (clOpr.getIntValue()==0) {
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[1],jumpTarget);
				    if (opts.doVerbose("cf")) Debug.out.println("++ true => "+ngoto.toReadableString());
				    return ngoto;
			    } else {
				    targets[1].removeJumpTarget(jumpTarget);
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[0],targets[0].getNewJumpTarget());
				    if (opts.doVerbose("cf")) Debug.out.println("++ false => "+ngoto.toReadableString());
				    return ngoto;
			    }
		    }
		case Opcodes.IFNONNULL:
		    {
			    if (opts.doVerbose("cf")) Debug.out.println("++ folding "+toReadableString());
			    if (clOpr.getIntValue()!=0) {
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[1],jumpTarget);
				    if (opts.doVerbose("cf")) Debug.out.println("++ true => "+ngoto.toReadableString());
				    return ngoto;
			    } else {
				    targets[1].removeJumpTarget(jumpTarget);
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[0],targets[0].getNewJumpTarget());
				    if (opts.doVerbose("cf")) Debug.out.println("++ false => "+ngoto.toReadableString());
				    return ngoto;
			    }
		    }
		case Opcodes.IFLT:
		    {
			    if (opts.doVerbose("cf")) Debug.out.println("++ folding "+toReadableString());
			    if (clOpr.getIntValue()<0) {
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[1],jumpTarget);
				    if (opts.doVerbose("cf")) Debug.out.println("++ true => "+ngoto.toReadableString());
				    return ngoto;
			    } else {
				    targets[1].removeJumpTarget(jumpTarget);
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[0],targets[0].getNewJumpTarget());
				    if (opts.doVerbose("cf")) Debug.out.println("++ false => "+ngoto.toReadableString());
				    return ngoto;
			    }
		    }
		case Opcodes.IFGE:
		    {
			    if (opts.doVerbose("cf")) Debug.out.println("++ folding "+toReadableString());
			    if (clOpr.getIntValue()>=0) {
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[1],jumpTarget);
				    if (opts.doVerbose("cf")) Debug.out.println("++ true => "+ngoto.toReadableString());
				    return ngoto;
			    } else {
				    targets[1].removeJumpTarget(jumpTarget);
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[0],targets[0].getNewJumpTarget());
				    if (opts.doVerbose("cf")) Debug.out.println("++ false => "+ngoto.toReadableString());
				    return ngoto;
			    }
		    }
		case Opcodes.IFGT:
		    {
			    if (opts.doVerbose("cf")) Debug.out.println("++ folding "+toReadableString());
			    if (clOpr.getIntValue()>0) {
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[1],jumpTarget);
				    if (opts.doVerbose("cf")) Debug.out.println("++ true => "+ngoto.toReadableString());
				    return ngoto;
			    } else {
				    targets[1].removeJumpTarget(jumpTarget);
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[0],targets[0].getNewJumpTarget());
				    if (opts.doVerbose("cf")) Debug.out.println("++ false => "+ngoto.toReadableString());
				    return ngoto;
			    }
		    }
		case Opcodes.IFLE:
		    {
			    if (opts.doVerbose("cf")) Debug.out.println("++ folding "+toReadableString());
			    if (clOpr.getIntValue()<=0) {
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[1],jumpTarget);
				    if (opts.doVerbose("cf")) Debug.out.println("++ true => "+ngoto.toReadableString());
				    return ngoto;
			    } else {
				    targets[1].removeJumpTarget(jumpTarget);
				    IMGoto ngoto = new IMGoto(container,bcPosition,targets[0],targets[0].getNewJumpTarget());
				    if (opts.doVerbose("cf")) Debug.out.println("++ false => "+ngoto.toReadableString());
				    return ngoto;
			    }
		    }
		}
	    } else { 
		if (rOpr.isConstant()) {
		    if (opts.doVerbose("cf")) Debug.out.println("++ no folding "+toReadableString());
		}
	    }
	}

	return this;
    }

    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);
	
	if (rOpr!=null) rOpr = (IMOperant)rOpr.assignNewVars(newContainer,slots,opr,retval,bcPos);
	lOpr = (IMOperant)lOpr.assignNewVars(newContainer,slots,opr,retval,bcPos);
	
	return this;
    }

    private void solveTargets() {
	if (targets[0]==null) {
	    if (bc_next.isBasicBlock()) {
		targets[0] = (IMBasicBlock)bc_next;
	    } else {
		targets[0] = new IMBasicBlock(container,bc_next.getBCPosition());
		targets[0].bc_next = bc_next;
		bc_next = targets[0];
	    } 
	}
    }
    
    public IMBasicBlock[] getTargets() {
	solveTargets();
	return targets;
    }

    public void swapJumpTargets() {
	IMBasicBlock swap;

	swap       = targets[0];
	targets[0] = targets[1];;
	targets[1] = swap;

	jumpTarget = targets[1].getNewJumpTarget();

	switch (bytecode) {
	case Opcodes.IFEQ:
	    bytecode = Opcodes.IFNE;
	    break;
	case Opcodes.IFNE:
	    bytecode = Opcodes.IFEQ;
	    break;
	case Opcodes.IFLT:
	    bytecode = Opcodes.IFGE;
	    break;
	case Opcodes.IFGE:
	    bytecode = Opcodes.IFLT;
	    break;
	case Opcodes.IFGT:
	    bytecode = Opcodes.IFLE;
	    break;
	case Opcodes.IFLE:
	    bytecode = Opcodes.IFGT;
	    break;
	case Opcodes.IF_ICMPEQ:
	    bytecode = Opcodes.IF_ICMPNE;
	    break;
	case Opcodes.IF_ICMPNE:
	    bytecode = Opcodes.IF_ICMPEQ;
	    break;
	case Opcodes.IF_ICMPLT:
	    bytecode = Opcodes.IF_ICMPGE;
	    break;
	case Opcodes.IF_ICMPGE:
	    bytecode = Opcodes.IF_ICMPLT;
	    break;
	case Opcodes.IF_ICMPGT:
	    bytecode = Opcodes.IF_ICMPLE;
	    break;
	case Opcodes.IF_ICMPLE:
	    bytecode = Opcodes.IF_ICMPGT;
	    break;
	case Opcodes.IF_ACMPEQ:
	    bytecode = Opcodes.IF_ACMPNE;
	    break;
	case Opcodes.IF_ACMPNE:
	    bytecode = Opcodes.IF_ACMPEQ;
	    break;
	case Opcodes.IFNULL:
	    bytecode = Opcodes.IFNONNULL;
	    break;
	case Opcodes.IFNONNULL:
	    bytecode = Opcodes.IFNULL;
	    break;
	}
    }

    public String toReadableString() {
	switch (bytecode) {
	case Opcodes.IFEQ:
	    return "if "+lOpr.toReadableString()+"==0 goto "+targets[1].toLabel();
	case Opcodes.IFNE:
	    return "if "+lOpr.toReadableString()+"!=0 goto "+targets[1].toLabel();	    
	case Opcodes.IFLT:
	    return "if "+lOpr.toReadableString()+"< 0 goto "+targets[1].toLabel();
	case Opcodes.IFGE:
	    return "if "+lOpr.toReadableString()+">=0 goto "+targets[1].toLabel();
	case Opcodes.IFGT:
	    return "if "+lOpr.toReadableString()+"> 0 goto "+targets[1].toLabel();
	case Opcodes.IFLE:
	    return "if "+lOpr.toReadableString()+"<=0 goto "+targets[1].toLabel();
	case Opcodes.IF_ICMPEQ:
	    return "if "+lOpr.toReadableString()+"=="+rOpr.toReadableString()+" goto "+targets[1].toLabel();
	case Opcodes.IF_ICMPNE:
	    return "if "+lOpr.toReadableString()+"!="+rOpr.toReadableString()+" goto "+targets[1].toLabel();
	case Opcodes.IF_ICMPLT:
	    return "if "+lOpr.toReadableString()+"<"+rOpr.toReadableString()+" goto "+targets[1].toLabel();
	case Opcodes.IF_ICMPGE:
	    return "if "+lOpr.toReadableString()+">="+rOpr.toReadableString()+" goto "+targets[1].toLabel();
	case Opcodes.IF_ICMPGT:
	    return "if "+lOpr.toReadableString()+">"+rOpr.toReadableString()+" goto "+targets[1].toLabel();
	case Opcodes.IF_ICMPLE:
	    return "if "+lOpr.toReadableString()+"<="+rOpr.toReadableString()+" goto "+targets[1].toLabel();
	case Opcodes.IF_ACMPEQ:
	    return "if "+lOpr.toReadableString()+"=="+rOpr.toReadableString()+" goto "+targets[1].toLabel();
	case Opcodes.IF_ACMPNE:
	    return "if "+lOpr.toReadableString()+"!="+rOpr.toReadableString()+" goto "+targets[1].toLabel();
	case Opcodes.IFNULL:
	    return "if "+lOpr.toReadableString()+"==null goto "+targets[1].toLabel();
	case Opcodes.IFNONNULL:
	    return "if "+lOpr.toReadableString()+"!=null goto "+targets[1].toLabel();
	}
	return "<unknown branch>";
    }

    public void getCollectVars(ArrayList vars) { 
	if (rOpr!=null) {
	    rOpr.getCollectVars(vars);
	}
	lOpr.getCollectVars(vars);
    }

    public int getNrRegs() { 
	if (rOpr!=null) {
	    return lOpr.getNrRegs() + rOpr.getNrRegs();
	} else {
	    return lOpr.getNrRegs();
	}
    }

    // IMConditionalBranch
    public void translate(Reg result) throws CompileException {
	int ip;

	lOpr.translate(result);
	
	if (bytecode < Opcodes.IF_ICMPEQ) {
	    if (!lOpr.isComperator()) {
		/* no compare after add, sub needed */
		code.test(result,result);
	    }
	    ip=code.getCurrentIP();
	    code_condjump(bytecode-Opcodes.IFEQ);
	} else if (bytecode < Opcodes.IF_ACMPEQ) {
	    if (rOpr.isRealConstant()) {
		int value = ((IMConstant)rOpr).getIntValue();
		if (value==0) {
		    code.test(result,result);
		} else {
		    code.cmpl(value,result);
		}
	    } else {
		Reg rtmp = regs.chooseIntRegister(result);
		rOpr.translate(rtmp);
		regs.readIntRegister(result);
		code.cmpl(rtmp,result);
	    }
	    ip=code.getCurrentIP();
	    code_condjump(bytecode-Opcodes.IF_ICMPEQ);
	} else if (bytecode < Opcodes.IFNULL) {
	    if (rOpr.isRealConstant()) {
		int value = ((IMConstant)rOpr).getIntValue();
		if (value==0) {
		    code.test(result,result);
		} else {
		    code.cmpl(value,result);
		}
	    } else {
		Reg rtmp = regs.chooseIntRegister(result);
		rOpr.translate(rtmp);
		regs.readIntRegister(result);
		code.cmpl(rtmp,result);
	    }
	    ip=code.getCurrentIP();
	    code_condjump(bytecode-Opcodes.IF_ACMPEQ);
	} else {
	    code.test(result,result);
	    ip=code.getCurrentIP();
	    code_condjump(bytecode-Opcodes.IFNULL);
	}

	// all Branches get a stackMap
	execEnv.codeStackMap(this,ip);
	//addDebugInfo(frame.stackMapToString(this));
    }   
    
    private void code_condjump(int opr) throws CompileException {
	switch (opr) {
	case 0:
	    // equal
	    code.je(jumpTarget);
	    break;
	case 1:
	    // not equal
	    code.jne(jumpTarget);
	    break;
	case 2:
	    // less
	    code.jl(jumpTarget);
	    break;
	case 3:
	    // greater or equal
	    code.jge(jumpTarget);
	    break;
	case 4:
	    // greater
	    code.jg(jumpTarget);
	    break;
	case 5:
	    // less or equal
	    code.jle(jumpTarget);
	    break;
	default:
	    throw new CompileException("unknown branch "+Integer.toString(opr));
	}	
    }
}
