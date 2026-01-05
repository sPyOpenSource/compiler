package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;

public class And extends NasmInst {
    
    public And(Operand label, Operand destination, Operand source, String comment){
	destUse = true;
	destDef = true;
	srcUse = true;
	this.label = label;
	this.destination = destination;
	this.source = source;
	this.comment = comment;
    }

    @Override
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }
    
    @Override
    public String toString(){
	return super.formatInst(this.label, "and", this.destination, this.source, this.comment);
    }
    
    /**
     * And (1/3 clks)
     */
    public void andl(Operand src, Reg des) {
	realloc();
	insertByte(0x23); 
	insertModRM(des, src);
    }

    public void andl(Reg src, Ref des) {
	realloc();
	insertByte(0x21);
	insertModRM(src, des);
    }
    
    public void andl(int immd, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x25);
	    insertConst4(immd);
	} else {
	    insertByte(0x81);
	    insertModRM(4, des);
	    insertConst4(immd);
	}
    }

    public void andl(SymbolTableEntryBase entry, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x25);
	    insertConst4(entry);
	} else {
	    insertByte(0x81);
	    insertModRM(4, des);
	    insertConst4(entry);
	}
    }
}
