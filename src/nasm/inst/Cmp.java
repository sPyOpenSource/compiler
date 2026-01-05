package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;

public class Cmp extends NasmInst {
    
    public Cmp(Operand label, Operand destination, Operand source, String comment){
	destUse = true;
	srcUse= true;
	this.label = label;
	this.destination = destination;
	this.source = source;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }
    
    public String toString(){
	return super.formatInst(this.label, "cmp", this.destination, this.source, this.comment);
    }

    /**
     * Compare Two Operands
     */
    public void cmpb(int immd, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x3C);
	    insertByte(immd);
	} else {
	    insertByte(0x80);
	    insertModRM(7, des);
	    insertByte(immd);
	}
    } 

    public void cmpl(Operand src, Reg des) {
	realloc();
	insertByte(0x3B);
	insertModRM(des, src);
    }

    public void cmpl(Reg src, Ref des) {
	realloc();
	insertByte(0x39);
	insertModRM(src, des);
    }

    public void cmpl(int immd, Operand des) {
	realloc();
	if ((des.tag==Operand.REG) && (des.value==0)) {
	    insertByte(0x3D);
	    insertConst4(immd);
	} else if (is8BitValue(immd)) { /* FIXME */
	    insertByte(0x83);
	    insertModRM(7,des);
	    insertByte(immd);	    
	} else {
	    insertByte(0x81);
	    insertModRM(7,des);
	    insertConst4(immd);
	}
    }
    
    public void cmpl(SymbolTableEntryBase entry, Operand des) {
	realloc();
	if ((des.tag==Operand.REG) && (des.value==0)) {
	    insertByte(0x3D);
	    insertConst4(entry);
	} else {
	    insertByte(0x81);
	    insertModRM(7,des);
	    insertConst4(entry);
	}
    }
}
