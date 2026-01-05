package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;

public class Push extends NasmInst {
    
    public Push(Operand label, Operand source, String comment){
	//	srcUse = true;
	this.label = label;
	this.source = source;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public String toString(){
	return super.formatInst(this.label, "push", this.source, null, this.comment);
    }
    
    /**
     * Insert a pushl(reg)
     * @param reg
     */
    public void pushl(Reg reg) {
	realloc();
	insertByte(0x50 + reg.value);
    }

    public void pushl(Ref ref) {
	realloc();
        insertByte(0xff);
        insertModRM(6, ref);
    }

    public void pushl(int immd) {
	realloc();
        insertByte(0x68);
        insertConst4(immd);
    }

    public void pushl(SymbolTableEntryBase entry) {
	realloc();
	insertByte(0x68);
	insertConst4(entry);
    }
	
    public void pushfl() { 
	realloc();
        insertByte(0x9c);
    }
}
