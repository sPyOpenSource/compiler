package nasm.inst;

import nasm.NasmVisitor;
import nasm.expr.NasmLabel;

public class Resb extends PseudoInst {
    
    public Resb(NasmLabel label, int nb, String comment){
	this.label = label;
	this.nb = nb;
	this.sizeInBytes = 1;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }
    
    public String toString(){
	return super.formatInst(this.label, "resb", this.nb, this.comment);
    }


}
