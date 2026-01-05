package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;

public class Add extends NasmInst {
    
    public Add(Operand label, Operand destination, Operand source, String comment){
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
	return super.formatInst(this.label, "add", this.destination, this.source, this.comment);
    }
    
    /**
     * Add
     */
    public void addl(Operand src, Reg des) {
	realloc();
	insertByte(0x03); 
	insertModRM(des, src);
    }

    public void addl(Reg src, Ref des) {
	realloc();
	insertByte(0x01);
	insertModRM(src, des);
    }
    
    public void addl(int immd, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (immd == 1)) {
	    insertByte(0x40 + des.value);
	} else if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x05);
	    insertConst4(immd);
	} else if (is8BitValue(immd)) { 
	    insertByte(0x83);
	    insertModRM(0, des);
	    insertByte(immd);	    
	} else {
	    insertByte(0x81);
	    insertModRM(0, des);
	    insertConst4(immd);
	}
    }

    public void addl(SymbolTableEntryBase entry, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x05);
	    insertConst4(entry);
	} else {
	    insertByte(0x81);
	    insertModRM(0, des);
	    insertConst4(entry);
	}
    }
    
    public void addsd(Operand src, Reg des){     
    }
  
    public void addsd(){
    }
   
    public void addsd(SymbolTableEntryBase entry, Operand des){
    }
}
