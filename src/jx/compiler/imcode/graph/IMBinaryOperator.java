package jx.compiler.imcode.graph; 

import jx.compiler.*;
import java.util.ArrayList;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.CodeVector;
import jx.compiler.imcode.VirtualOperantenStack;

// ***** IMBinaryOperator *****
public class IMBinaryOperator extends IMOperator {
    protected IMOperant rOpr;
    protected IMOperant lOpr;    

    public IMBinaryOperator(CodeContainer container) {
	super(container);
    }

    @Override
    public boolean isBinaryOperator() {return true;}

    @Override
    public boolean hasConstant() { return rOpr.isConstant() || rOpr.isConstant(); }

    @Override
    public IMOperant getLeftOperant() {
	return lOpr;
    }

    @Override
    public IMOperant getRightOperant() {
	return rOpr;
    }

    public void swapOperants() {
	IMOperant swap = rOpr;
	rOpr = lOpr;
	lOpr = swap;
    }

    public void setLeftOperant(IMOperant opr) {
	lOpr = opr;
    }

    public void setRightOperant(IMOperant opr) {
	rOpr = opr;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) {
	rOpr = stack.pop();
	lOpr = stack.pop();
	stack.push(this);
	return null;
    }

    @Override
    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {
	rOpr = (IMOperant)rOpr.inlineCode(iCode, depth, forceInline);
	lOpr = (IMOperant)lOpr.inlineCode(iCode, depth, forceInline);
	return this;
    }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	rOpr = (IMOperant)rOpr.assignNewVars(newContainer,slots,opr,retval,bcPos);
	lOpr = (IMOperant)lOpr.assignNewVars(newContainer,slots,opr,retval,bcPos);	
	return this;
    }

    @Override
    public IMNode constant_folding() throws CompileException {
	if (rOpr.isOperator()) {
	    rOpr = (IMOperant)((IMOperator)rOpr).constant_folding();
	}
	if (lOpr.isOperator()) {
	    lOpr = (IMOperant)((IMOperator)lOpr).constant_folding();
	}
	return this;
    }

    @Override
    public IMNode constant_forwarding(IMNodeList varList) throws CompileException {
	if (rOpr.isOperator()) {
	    rOpr = (IMOperant)((IMOperator)rOpr).constant_forwarding(varList);
	}
	if (lOpr.isOperator()) {
	    lOpr = (IMOperant)((IMOperator)lOpr).constant_forwarding(varList);
	}
	return this;
    }

    @Override
    public int getNrRegs() { return lOpr.getNrRegs() + rOpr.getNrRegs(); }

    @Override
    public void getCollectVars(ArrayList vars) {  
	rOpr.getCollectVars(vars);
	lOpr.getCollectVars(vars);
    }
}
