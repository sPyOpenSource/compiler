
package jx.compiler.imcode.graph.inst; 

import jx.compiler.*;
import java.util.ArrayList;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.graph.*;

// ***** IMMultiOperant *****

public class IMMultiOperant extends IMOperant {

    protected IMOperant            obj;
    protected IMOperant[]          args;

    public IMMultiOperant(CodeContainer container) {
	super(container);
	obj=null;
    }

    public String debugInfo() {
	if (obj!=null) return debugTxt+" "+obj.debugInfo();
	else return debugTxt;
    }

    public IMNode constant_forwarding(IMNodeList varList) throws CompileException {
	if (obj!=null) {
	    obj = (IMOperant)obj.constant_forwarding(varList);
	}

	for (int i=0;i<args.length;i++) {
	    args[i] = (IMOperant)args[i].constant_forwarding(varList);;
	}
       
	return this;
    }

    public IMNode constant_folding() throws CompileException{
	if (obj!=null) {
	    obj = (IMOperant)obj.constant_folding();
	}

	for (int i=0;i<args.length;i++) {
	    args[i] = (IMOperant)args[i].constant_folding();
	}
	
	return this;
    }

    public IMNode assignNewVars(CodeContainer newContainer,int slots[],IMOperant opr[],int retval,int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	if (obj!=null) {
	    obj = (IMOperant)obj.assignNewVars(newContainer,slots,opr,retval,bcPos);
	}

	for (int i=0;i<args.length;i++) {
	    args[i] = (IMOperant)args[i].assignNewVars(newContainer,slots,opr,retval,bcPos);
	}
	
	return this;
    }

    public void getCollectVars(ArrayList vars) {	
	if (obj!=null) obj.getCollectVars(vars);
        for (IMOperant arg : args) {
            arg.getCollectVars(vars);
        }
    }

    public int getNrRegs() { 
	int sum=0;
	if (obj!=null) sum=obj.getNrRegs();
        for (IMOperant arg : args) {
            sum += arg.getNrRegs();
        }
	return sum;
    }

    public String toString() {
	String retString = "(";
	int i=0;
	while (i<args.length)  {
	    retString += args[i].toString();
	    i++;
	    if (i<args.length) retString+=",";
	}
	return retString+")";
    }
}
