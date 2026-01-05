package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.SymbolTableEntryBase;

public class Jle extends NasmInst {
    
    public Jle(Operand label, Operand address, String comment){
	this.label = label;
	this.address = address;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public String toString(){
	//	String formatInst
	//	addLabel(label);

	//return formatInst;

	
	return super.formatInst(this.label, "jle", this.address, null, this.comment);
    }

    /**
     * Jump short/near if less or equal
     */
    public void jle(SymbolTableEntryBase entry) {
	realloc();
	insertByte(0x0f);
	insertByte(0x8e);
	insertConst4(entry);
	makeRelative(entry);
    }
}
