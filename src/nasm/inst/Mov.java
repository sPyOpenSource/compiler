package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;

public class Mov extends NasmInst {
    public Mov(Operand label, Operand destination, Operand source, String comment){
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
	return super.formatInst(this.label, "mov", this.destination, this.source, this.comment);
    }
    
    /**
     * Move 8 Bit Data
     */
    public void movb(Operand src, Reg des) {
	realloc();
	insertByte(0x8A);
	insertModRM(des,src);
    }

    public void movb(Reg src, Ref des) {
	realloc();
	insertByte(0x88);
	insertModRM(src,des);	
    }

    public void movb(int immd, Operand des) {
	realloc();
	if (des.tag==Operand.REG) {
	    insertByte(0xb0 + des.value);
	    insertByte(immd);
	} else {
	    insertByte(0xc6);
	    insertModRM(0,des);
	    insertByte(immd);
	}
    }
	    
    /** 
     * Move 16 Bit Data
     */
    public void movw(Operand src, Reg des) {
	realloc();
	insertByte(0x66);
	insertByte(0x8b);
	insertModRM(des,src);	
    }

    public void movw(Reg src, Ref des) {
	realloc();
	insertByte(0x66);
	insertByte(0x89);
	insertModRM(src, des);	
    }

    /**
     * Move 32 Bit Data
     */
    public void movl(Operand src, Reg des) {
	realloc();
	insertByte(0x8b);
	insertModRM(des,src);
    }

    public void movl(Reg src, Ref des) {
	realloc();
	insertByte(0x89);
	insertModRM(src,des);
    }

    public void movl(int immd, Operand des) {
	realloc();
	if (des.tag==Operand.REG) {
	    insertByte(0xb8 + des.value);
	    insertConst4(immd);
	} else {
	    insertByte(0xc7);
	    insertModRM(0,des);
	    insertConst4(immd);
	}
    }

    public void movl(SymbolTableEntryBase entry, Operand des) {
	realloc();
	if (des.tag==Operand.REG) {
	    insertByte(0xb8 + des.value);
	    insertConst4(entry);
	} else {
	    insertByte(0xc7);
	    insertModRM(0,des);
	    insertConst4(entry);
	}
    }
}
