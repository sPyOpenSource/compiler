
package jx.compiler.imcode.graph.inst; 

import jx.classfile.datatypes.*; 
import jx.classfile.*;
import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.*;

// ***** IMStackOperation *****

final public class IMStackOperation extends IMNode {
    public IMStackOperation(CodeContainer container,int bc,int bcpos) {
	super(container);
	bytecode = bc;
	bcPosition = bcpos;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) throws CompileException {
	IMOperant opr1,opr2,opr3,opr4;

	switch (bytecode) {
	case Opcodes.POP:
	    opr1 = stack.pop();
	    if (opr1 instanceof IMInvoke) {
		return opr1;
	    }
	    if (opr1 instanceof IMInvokeInterface) {
		return opr1;
	    }
	    break;
	case Opcodes.POP2:
	    // TODO FIXME
	    opr1 = stack.pop();
	    if (opr1.isDouble()) break;
	    /*
	    int dt = opr1.getDatatype();
	    if (dt==-1) { // FIXME
		throw new CompileException("Unknown datatype on operanten stack !");
	    }
	    if ((dt==BCBasicDatatype.LONG)||(dt==BCBasicDatatype.DOUBLE)) break;
	    */
	    // We won't do typechecks here.
	    // no long or double on the stack ?
	    opr2 = stack.pop();
	    break;
	case Opcodes.DUP:
	    // We won't do typechecks here.
	    // no long or double on the stack ?
	    stack.store(bcPosition);
	    opr1 = stack.pop();
	    stack.push(opr1);
	    stack.push(opr1);
	    break;
	case Opcodes.DUP_X1:
	    // We won't do typechecks here.
	    // no long or double for src1,src2?
	    stack.store(bcPosition);
	    opr1 = stack.pop();
	    opr2 = stack.pop();
	    stack.push(opr1);
	    stack.push(opr2);
	    stack.push(opr1);
	    break;
	case Opcodes.DUP_X2:
	    // We won't do typechecks here.
	    // no long or double for opr1 
	    stack.store(bcPosition);
	    opr1 = stack.pop();
	    opr2 = stack.pop();
	    if (opr2.isDouble()) {
		stack.push(opr1);
		stack.push(opr2);
		stack.push(opr1);
		break;
	    }
	    // We won't do typechecks here.
	    // no long or double for opr3 	
	    opr3 = stack.pop();
	    stack.push(opr1);
	    stack.push(opr3);
	    stack.push(opr2);
	    stack.push(opr1);
	    break;
	case Opcodes.DUP2:
	    // We won't do typechecks here.
	    // no long or double on the stack ?
	    stack.store(bcPosition);
	    opr1 = stack.pop();
	    if (opr1.getDatatype()==-1) {
		throw new CompileException("wrong datatype on stack");
	    }
	    if ((opr1.getDatatype()==BCBasicDatatype.LONG)||(opr1.getDatatype()==BCBasicDatatype.DOUBLE)) {
		stack.push(opr1);
		stack.push(opr1);
		break;
	    } 
	    opr2 = stack.pop();
	    stack.push(opr2);
	    stack.push(opr1);
	    stack.push(opr2);
	    stack.push(opr1);
	    break;
	case Opcodes.DUP2_X1:
	    // Duplicate the top one or two operand stack values and insert two or three values down
	    // We won't do typechecks here.
	    // no long or double for src1,src2?
	    stack.store(bcPosition);
	    opr1 = stack.pop();
	    if (opr1.isDouble()) {
		opr2 = stack.pop();
		stack.push(opr1);
		stack.push(opr2);
		stack.push(opr1);
	    } else {
		opr2 = stack.pop();
		opr3 = stack.pop();
		stack.push(opr2);
		stack.push(opr1);
		stack.push(opr3);
		stack.push(opr2);
		stack.push(opr1);
	    }
	    break;
	case Opcodes.DUP2_X2:
	    // Duplicate the top one or two operand stack values and insert two, three, or four values down
	    // We won't do typechecks here.
	    // no long or double for opr1 
	    stack.store(bcPosition);
	    opr1 = stack.pop();
	    opr2 = stack.pop();
	    if (opr1.isDouble()) {
		if (opr2.isDouble()) {
		    // Form 4
		    stack.push(opr1);
		} else {
		    // Form 2
		    opr3 = stack.pop();
		    stack.push(opr1);
		    stack.push(opr3);
		}
		stack.push(opr2);
		stack.push(opr1);
	    } else {
		opr3 = stack.pop();
		if (opr3.isDouble()) {
		    // Form 3
		    stack.push(opr2);
		    stack.push(opr1);
		    stack.push(opr3);
		} else {
		    // Form 1
		    opr4 = stack.pop();
		    stack.push(opr2);
		    stack.push(opr1);
		    stack.push(opr4);
		    stack.push(opr3);
		}
		stack.push(opr2);
		stack.push(opr1);
	    }
	    break;
	case Opcodes.SWAP:
	    // We won't do typechecks here.
	    // no long or double for src1,src2
	    stack.store(bcPosition);
	    opr1 = stack.pop();
	    opr2 = stack.pop();
	    stack.push(opr1);
	    stack.push(opr2);
	default:
	    throw new CompileException("unknown instruction");
	}

	return null;
    }

    public String toReadableString() {
	return "<Stackoperation bytecode: " + 
	    Integer.toString(bytecode) + 
	    " pos: "+Integer.toString(bcPosition)+">";
    }
}
