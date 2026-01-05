package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;

public class Xor extends NasmInst {
    
    public Xor(Operand label, Operand destination, Operand source, String comment){
	destUse = true;
	destDef = true;
	srcUse = true;
	this.label = label;
	this.destination = destination;
	this.source = source;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }
    
    public String toString(){
	return super.formatInst(this.label, "xor", this.destination, this.source, this.comment);
    }

    /**
     * Xor (1/3 clks)
     */
    public void xorl(Operand src, Reg des) {
	realloc();
	insertByte(0x33); 
	insertModRM(des, src);
    }

    public void xorl(Reg src, Ref des) {
	realloc();
	insertByte(0x31);
	insertModRM(src, des);
    }
    
    public void xorl(int immd, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x35);
	    insertConst4(immd);
	} else {
	    insertByte(0x81);
	    insertModRM(6, des);
	    insertConst4(immd);
	}
    }

    public void xorl(SymbolTableEntryBase entry, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x35);
	    insertConst4(entry);
	} else {
	    insertByte(0x81);
	    insertModRM(6, des);
	    insertConst4(entry);
	}
    }
}
