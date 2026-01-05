package nasm.inst;

import nasm.NasmVisitor;
import nasm.expr.NasmLabel;

public class Resd extends PseudoInst {
    
    public Resd(NasmLabel label, int nb, String comment){
	this.label = label;
	this.nb = nb;
	this.sizeInBytes = 4;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }
    
    public String toString(){
	return super.formatInst(this.label, "resd", this.nb, this.comment);
    }

}
