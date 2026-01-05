package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;

public class Div extends NasmInst {
    
    public Div(Operand label, Operand source, String comment){
	srcUse = true;
	this.label = label;
	this.source = source;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public String toString(){
	    return super.formatInst(this.label, "idiv", this.source, null, this.comment);
    }
    
    /**
     * DIV Unsigned Divide
     */
    public void divl(Operand src) {
	realloc();
	insertByte(0xf7);
	insertModRM(6, src);
    }
}
