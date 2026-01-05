package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;

public class Empty extends NasmInst {
    
    public Empty(Operand label, String comment){
	this.label = label;
	this.comment = comment;
    }

    @Override
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    @Override
    public String toString(){
	return super.formatInst(this.label, "", null, null, this.comment);
    }

    /**
     * No Operation (1 clks)
     */
    public void nop() {
	realloc();
	insertByte(0x90);
    }
    
}
