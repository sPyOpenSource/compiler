package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.SymbolTableEntryBase;

public class Je extends NasmInst {
    
    public Je(Operand label, Operand address, String comment){
	this.label = label;
	this.address = address;
	this.comment = comment;
    }

    @Override
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    @Override
    public String toString(){
	return super.formatInst(this.label, "je", this.address, null, this.comment);
    }

    /**
     * Jump short/near if equal
     */
    public void je(int rel) {
	realloc();
	if (is8BitValue(rel)) {
	    insertByte(0x74);
	    insertByte(rel);
	} else {
	    insertByte(0x0F);
	    insertByte(0x84);
	    insertConst4(rel);
	}
    }

    public void je(SymbolTableEntryBase entry) {
	realloc();
	insertByte(0x0f);
	insertByte(0x84);
	insertConst4(entry);
	makeRelative(entry);
    }
    
}
