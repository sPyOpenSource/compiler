package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Reg;
import nasm.SymbolTableEntryBase;
import nasm.UnresolvedJump;

public class Jmp extends NasmInst {
    
    public Jmp(Operand label, Operand address, String comment){
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
	return super.formatInst(this.label, "jmp", this.address, null, this.comment);
    }

    /**
       Jump short/near 
    */
    public void jmp(int rel) {
	realloc();
	if (is8BitValue(rel)) {
	    /* short */
	    insertByte(0xEB);
	    insertByte(rel);
	} else {
	    /* near */
	    insertByte(0xE9);
	    insertConst4(rel);
	}
    }

    public void jmp(Operand des) {
	realloc();
	insertByte(0xff);
	insertModRM(4,des);
    }

    public void jmp(SymbolTableEntryBase entry) {
	realloc();
	insertByte(0xE9);
	insertConst4(entry);
	makeRelative(entry);
    }

    public void jmp(Reg index, SymbolTableEntryBase[] tables) {
	UnresolvedJump tableStart = new UnresolvedJump();
	realloc(50 + tables.length * 4);

	insertByte(0xff);
	insertByte(0x24);
	insertByte(0x85 | (index.value<<3));
	insertConst4(tableStart);

	addJumpTarget(tableStart);
        for (SymbolTableEntryBase table : tables) {
            insertConst4(table);
        }
    }
}
