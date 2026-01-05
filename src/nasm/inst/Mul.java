package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;

public class Mul extends NasmInst {
    public Mul(Operand label, Operand destination, Operand source, String comment){
	destUse = true;
	destDef = true;
	srcUse = true;
	this.label = label;
	this.destination = destination;
	this.source = source;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    /*    public String toString(){
	return super.formatInst(this.label, "imul", this.source, null, this.comment);
	}*/

    public String toString(){
	return super.formatInst(this.label, "imul", this.destination, this.source, this.comment);
    }

    /**
     * Integer Unsigned Multiplication of eax  (10 clk)
     */
    public void mull(Operand src) {
	realloc();
	insertByte(0xF7);
	insertModRM(4, src);
    }
}
