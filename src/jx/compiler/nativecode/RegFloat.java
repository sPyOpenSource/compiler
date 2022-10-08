/**
 * X86-Register for floating-point 
 */

package jx.compiler.nativecode;

import jx.classfile.datatypes.BCBasicDatatype;
import jx.compiler.imcode.MethodStackFrame;

final public class RegFloat extends Opr implements RegObj, Cloneable {
public static RegFloat any = new RegFloat(-1);

    public static RegFloat xmm0 = new RegFloat(0);
    public static RegFloat xmm1 = new RegFloat(1);
    public static RegFloat xmm2 = new RegFloat(2);
    public static RegFloat xmm3 = new RegFloat(3);
    public static RegFloat xmm4 = new RegFloat(4);
    public static RegFloat xmm5 = new RegFloat(5);
    public static RegFloat xmm6 = new RegFloat(6);
    public static RegFloat xmm7 = new RegFloat(7);
    
    public RegFloat() {
	throw new Error("wrong RegFloat constuctor");
    }
    
public RegFloat(int reg) {
	if (reg == -1) value = -1;
	else this.value = reg & 0x07;
	this.tag   = Opr.REG;
    }

    public RegFloat getClone() {
	RegFloat nreg;
	try {
	    nreg = (RegFloat)this.clone();
	} catch (CloneNotSupportedException ex) {
	    System.err.println("!!!! CloneNotSupportedException !!!!");
	    nreg = new RegFloat(value);
	}
	if (nreg == null) {
	    System.err.println("can`t clone myself :-(");
	    nreg = new RegFloat(value);
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
	return BCBasicDatatype.FLOAT;
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
