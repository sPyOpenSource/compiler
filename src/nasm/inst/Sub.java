package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;

public class Sub extends NasmInst {
    
    public Sub(Operand label, Operand destination, Operand source, String comment){
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
	return super.formatInst(this.label, "sub", this.destination, this.source, this.comment);
    }
    
    /**
     * Integer Subtraction
     * @param src
     * @param des
     */
    public void subl(Operand src, Reg des) {
	realloc();
	insertByte(0x2b);
	insertModRM(des, src);
    }

    public void subl(Reg src, Ref des) {
	realloc();
	insertByte(0x29);
	insertModRM(src, des);
    }

    public void subl(int immd, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x2D);
	    insertConst4(immd);
	} else if (is8BitValue(immd)) { /* FIXME */
	    insertByte(0x83);
	    insertModRM(5, des);
	    insertByte(immd);	    
	} else {
	    insertByte(0x81);
	    insertModRM(5, des);
	    insertConst4(immd);
	}
    }

    public void subl(SymbolTableEntryBase entry, Operand des) {
	realloc();
	if ((des.tag == Operand.REG) && (des.value == 0)) {
	    insertByte(0x2D);
	    insertConst4(entry);
	    /* FIXME: no 8 bit support yet 
	       } else if (is8BitValue(immd)) {
	       insertByte(0x83);
	       insertModRM(5,des);
	       insertByte(immd);
	    */
	} else {
	    insertByte(0x81);
	    insertModRM(5, des);
	    insertConst4(entry);
	}
    }
}
