
package jx.compiler.imcode.graph.inst;

import jx.classfile.constantpool.*; 
import jx.classfile.datatypes.*; 
import jx.classfile.*;

import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.LocalVariable;
import jx.compiler.imcode.VirtualOperantenStack;
import jx.compiler.imcode.graph.IMBasicBlock;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.imcode.graph.IMOperant;
import jx.compiler.backend.*;

// ***** IMConstant *****

final public class IMConstant extends IMOperant {

    private int value;
    private ConstantPoolEntry cpEntry;
    private BCBasicDatatype   cpValue;

    public IMConstant(CodeContainer container,int bc,int bcpos) {
	super(container);
	tag        = tag | IMNode.CONSTANT;

	bytecode   = bc;
	bcPosition = bcpos;
	cpEntry    = null;
	cpValue    = null;
	
	if (bc==Opcodes.ACONST_NULL) {
	    datatype = BCBasicDatatype.REFERENCE;
	    value    = 0;
	} else if (bc<=Opcodes.ICONST_5) {
	    datatype = BCBasicDatatype.INT;
	    value    = bc - Opcodes.ICONST_0;
	} else if (bc<=Opcodes.LCONST_1) {
	    datatype = BCBasicDatatype.LONG;
	    value    = bc - Opcodes.LCONST_0;
	} else if (bc<=Opcodes.FCONST_2) {
	    datatype = BCBasicDatatype.FLOAT;
	    value    = bc - Opcodes.FCONST_0;
	} else if (bc<=Opcodes.DCONST_1) {
	    datatype = BCBasicDatatype.DOUBLE;
	    value    = bc - Opcodes.DCONST_0;
	} else {
	    if (verbose && System.err!=null) System.err.println("unknown constant value\n");
	    System.exit(-1);
	}
    }

    public IMConstant(CodeContainer container,int bc,int bcpos,int value) {
	super(container);	
	tag          = tag | IMNode.CONSTANT;

	bytecode     = bc;
	bcPosition   = bcpos;
	datatype     = BCBasicDatatype.INT;
	this.value   = value;
	this.cpEntry = null;
	this.cpValue = null;
    }

    public IMConstant(CodeContainer container, int bc, int bcpos, ConstantPoolEntry cpEntry) {
	super(container);

	bytecode     = bc;
	bcPosition   = bcpos;
	this.value   = 0;
	this.cpEntry = cpEntry;
	this.cpValue = null;

	if (cpEntry instanceof NumericCPEntry) {
	    try {
		cpValue  = ((NumericCPEntry)cpEntry).value();
		tag      = tag | IMNode.CONSTANT;
		datatype = cpValue.type();
	    } catch (Exception ex) {
		if (verbose && System.err != null) System.err.println("!! " + ex);
		System.exit(-1);
	    }
	} else if (cpEntry instanceof UTF8CPEntry) {
	    datatype = BCBasicDatatype.REFERENCE;
	} else if (cpEntry instanceof StringCPEntry) {
	    datatype = BCBasicDatatype.REFERENCE;
                     } else if (cpEntry instanceof ClassCPEntry){
                         datatype = BCBasicDatatype.REFERENCE;
	} else {
                         System.out.println(datatype);
	    throw new Error("unknown constant value\n");
	}
    }

    @Override
    public IMConstant nodeToConstant() {
	return this;
    }

    public int getIntValue() {
	if (cpEntry == null) return value;
	if (cpValue instanceof BCInteger)
	    if (cpValue!=null) return ((BCInteger)cpValue).value();
	if (verbose && System.err != null) System.err.println("fixme: constant long");
	return 0;
    }

    public void setIntValue(int value) {
	cpEntry = null;
	this.value = value;
    }

    public long getLongValue() {
	if (cpValue != null) return ((BCLong)cpValue).value();
	return (long)value;
    }

    public double getDoubleValue() {
	if (cpValue != null) return ((BCDouble)cpValue).value();
	return (double)value;
    }

    public float getFloatValue() {
	if (cpValue != null) return ((BCFloat)cpValue).value();
	return (float)value;
    }	

    @Override
    public IMNode processStack(VirtualOperantenStack stack, IMBasicBlock basicBlock) {
	stack.push(this);
	return null;
    }

    @Override
    public String toString() {
	if (cpEntry == null) return Integer.toString(value);
	if (cpEntry instanceof StringCPEntry)
	    return "\"" + cpEntry.getDescription() + "\"";
	else
	    return cpEntry.getDescription();
    }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer, int slots[], IMOperant opr[], int retval, int bcPos) throws CompileException {
	init(newContainer);
	return this;
    }

    @Override
    public int getNrRegs() { return 1; }

    // IMConstant
    @Override
    public void translate(Reg result) throws CompileException {
	code.startBC(bcPosition);
	if (cpEntry!=null && cpEntry instanceof StringCPEntry) {
	    regs.allocIntRegister(result,datatype);
	    execEnv.codeLoadStringRef((StringCPEntry)cpEntry,result,bcPosition);
	} else {
	    regs.allocIntRegister(result,datatype);
	    int value = getIntValue();
	    if (value == 0) {
		code.xorl(result, result);
            } else if (opts.isOption("small") && value == 1) {
		code.xorl(result, result);
		code.incl(result);
	    } else {
		code.movl(getIntValue(), result);
	    }
	}
	code.endBC();
    }

    @Override
    public void translate(Reg64 result) throws CompileException {
	if (datatype != BCBasicDatatype.LONG) throw new CompileException("wrong datatype");

	code.startBC(bcPosition);
        long value = getLongValue();
	regs.allocLongRegister(result);
	if (value == 0) {
            code.xorl(result.low, result.low);
            code.xorl(result.high, result.high);
	} else {
            code.movl((int)(value & 0xffffffff), result.low);
            code.movl((int)((value >>> 32) &0xffffffff), result.high);
	}
	code.endBC();
    }

    @Override
    public void translate(RegFloat result) throws CompileException {
	code.startBC(bcPosition);
	if (cpEntry == null) {
	    // fconst_0/1/2: value is small int 0/1/2
	    Reg r = regs.getIntRegister(Reg.any);
	    // Reg.any is only a placeholder (value == -1). It must be bound to a
	    // physical register before being encoded as an instruction operand.
	    regs.allocIntRegister(r, BCBasicDatatype.INT);
	    code.movl(value, r);
	    code.cvtsi2ss(r, result);
	    regs.freeIntRegister(r);
	} else {
	    float fv = getFloatValue();
	    if (fv == (float)(int)fv) {
		Reg r = regs.getIntRegister(Reg.any);
		regs.allocIntRegister(r, BCBasicDatatype.INT);
		code.movl((int)fv, r);
		code.cvtsi2ss(r, result);
		regs.freeIntRegister(r);
	    } else {
		Reg r = regs.getIntRegister(Reg.any);
		regs.allocIntRegister(r, BCBasicDatatype.INT);
		code.movl(Float.floatToRawIntBits(fv), r);
		code.movd(r, result);
		regs.freeIntRegister(r);
	    }
	}
	code.endBC();
    }

    @Override
    public void translate(RegDouble result) throws CompileException {
	code.startBC(bcPosition);
	long bits = cpEntry == null ? Double.doubleToLongBits((double)value)
	    : Double.doubleToLongBits(getDoubleValue());
	LocalVariable slot = frame.getFreeTempSlot(BCBasicDatatype.DOUBLE);
	int offset = frame.getOffset(slot);
	Reg tmp = regs.getIntRegister(Reg.any);
	regs.allocIntRegister(tmp, BCBasicDatatype.INT);
	code.movl((int)(bits & 0xffffffff), tmp);
	code.movl(tmp, Ref.ebp.disp(offset));
	code.movl((int)((bits >>> 32) & 0xffffffff), tmp);
	code.movl(tmp, Ref.ebp.disp(offset + 4));
	code.movsd(Ref.ebp.disp(offset), result);
	regs.freeIntRegister(tmp);
	code.endBC();
    }
}
