
package jx.compiler.backend;

import jx.classfile.datatypes.BCBasicDatatype;
import jx.compiler.imcode.MethodStackFrame;

/**
 * X86-Register for floating-point 
 */
final public class RegDouble extends Opr implements RegObj, Cloneable {
    public static RegDouble any = new RegDouble(-1);

    public static RegDouble xmm0 = new RegDouble(0);
    public static RegDouble xmm1 = new RegDouble(1);
    public static RegDouble xmm2 = new RegDouble(2);
    public static RegDouble xmm3 = new RegDouble(3);
    public static RegDouble xmm4 = new RegDouble(4);
    public static RegDouble xmm5 = new RegDouble(5);
    public static RegDouble xmm6 = new RegDouble(6);
    public static RegDouble xmm7 = new RegDouble(7);

    public RegDouble() {
	throw new Error("wrong RegDouble constuctor");
    }

    public RegDouble(int reg) {
	if (reg == -1) value = -1;
	else this.value = reg & 0x07;
	this.tag   = Opr.REG;
    }

    public RegDouble getClone() {
	RegDouble nreg;
	try {
	    nreg = (RegDouble)this.clone();
	} catch (CloneNotSupportedException ex) {
	    System.err.println("!!!! CloneNotSupportedException !!!!");
	    nreg = new RegDouble(value);
	}
	if (nreg == null) {
	    System.err.println("can`t clone myself :-(");
	    nreg = new RegDouble(value);
	}
	return nreg;
    }

    public boolean any() {
	return value == -1;
    }

    @Override
    public void push(MethodStackFrame frame) {
	frame.push(getDatatype(), this);
    }

    @Override
    public int getDatatype() {
	return BCBasicDatatype.DOUBLE;
    }

    @Override
    public void free() {
	if (this == any ) throw new Error("any");
	if (this == xmm0 ) throw new Error("eax");
	if (this == xmm1 ) throw new Error("ecx");
	if (this == xmm2 ) throw new Error("edx");
	if (this == xmm3 ) throw new Error("ebx");
	if (this == xmm4 ) throw new Error("esp");
	if (this == xmm5 ) throw new Error("ebp");
	if (this == xmm6 ) throw new Error("esi");
	if (this == xmm7 ) throw new Error("edi"); 
	free = true;
    }
}
