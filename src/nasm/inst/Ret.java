package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;

public class Ret extends NasmInst {
    
    public Ret(Operand label, String comment){
	this.label = label;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public String toString(){
	return super.formatInst(this.label, "ret", null, null, this.comment);
    }

    /**
     * Insert return
     */
    public void ret() {
	realloc();
        insertByte(0xc3);
    }
}
