package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.SymbolTableEntryBase;

public class Jl extends NasmInst {
    
    public Jl(Operand label, Operand address, String comment){
	this.label = label;
	this.address = address;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public String toString(){
	return super.formatInst(this.label, "jl", this.address, null, this.comment);
    }

    /**
     * Jump short/near if less
     */
    public void jl(SymbolTableEntryBase entry) {
	realloc();
	insertByte(0x0f);
	insertByte(0x8c);
	insertConst4(entry);
	makeRelative(entry);
    }  
}
