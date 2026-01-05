package nasm.inst;

import nasm.NasmVisitor;
import nasm.expr.NasmLabel;

public class Resq extends PseudoInst {
    
    public Resq(NasmLabel label, int nb, String comment){
	this.label = label;
	this.nb = nb;
	this.sizeInBytes = 8;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }
    
    public String toString(){
	return super.formatInst(this.label, "resq", this.nb, this.comment);
    }


}
