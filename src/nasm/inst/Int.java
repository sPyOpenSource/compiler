package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;

public class Int extends NasmInst {
    
    public Int(Operand label, String comment){
	this.label = label;
	this.comment = comment;
    }

    @Override
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    @Override
    public String toString(){
	return super.formatInst(this.label, "int 0x80", null, null, this.comment);
    }

    public void intr(int nr) {
	realloc();
	insertByte(0xCD);
	insertByte(nr);
    }
}
