package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;

public class Or extends NasmInst {
    
    public Or(Operand label, Operand destination, Operand source, String comment){
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
	return super.formatInst(this.label, "or", this.destination, this.source, this.comment);
    }

    /**
     * Or (1/3 clks)
     */
    public void orl(Operand src, Reg des) {
	realloc();
	insertByte(0x0b); 
	insertModRM(des, src);
    }

    public void orl(Reg src, Ref des) {
	realloc();
	insertByte(0x09);
	insertModRM(src, des);
    }
    
    public void orl(int immd, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x0d);
	    insertConst4(immd);
	} else {
	    insertByte(0x81);
	    insertModRM(1, des);
	    insertConst4(immd);
	}
    }

    public void orl(SymbolTableEntryBase entry, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x0d);
	    insertConst4(entry);
	} else {
	    insertByte(0x81);
	    insertModRM(1, des);
	    insertConst4(entry);
	}
    }
}
