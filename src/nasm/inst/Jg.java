package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.SymbolTableEntryBase;

public class Jg extends NasmInst {
    
    public Jg(Operand label, Operand address, String comment){
	this.label = label;
	this.address = address;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public String toString(){
	return super.formatInst(this.label, "jg", this.address, null, this.comment);
    }

    /**
     * Jump short/near if greater
     */
    public void jg(SymbolTableEntryBase entry) {
	realloc();
	insertByte(0x0f);
	insertByte(0x8f);
	insertConst4(entry);
	makeRelative(entry);
    }   
}
