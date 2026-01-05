package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.SymbolTableEntryBase;

public class Jne extends NasmInst {
    
    public Jne(Operand label, Operand address, String comment){
	this.label = label;
	this.address = address;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public String toString(){
	return super.formatInst(this.label, "jne", this.address, null, this.comment);
    }
    
    /**
     * Jump short/near if not equal
     */
    public void jne(int rel) {
	realloc();
	if (is8BitValue(rel)) {
	    insertByte(0x75);
	    insertByte(rel);
	} else {
	    insertByte(0x0F);
	    insertByte(0x85);
	    insertConst4(rel);
	}
    }

    public void jne(SymbolTableEntryBase entry) {
	realloc();
	insertByte(0x0f);
	insertByte(0x85);
	insertConst4(entry);
	makeRelative(entry);
    }
}
