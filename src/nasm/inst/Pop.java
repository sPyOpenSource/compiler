package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Reg;

public class Pop extends NasmInst {
    
    public Pop(Operand label, Operand destination, String comment){
	destDef = true;
	this.label = label;
	this.destination = destination;
	this.comment = comment;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public String toString(){
	return super.formatInst(this.label, "pop", this.destination, null, this.comment);
    }

    /** 
     * Insert a popl(reg)
     * @param reg
     */
    public void popl(Reg reg) {
	realloc();
	insertByte(0x58+reg.value);
    }

    /**
       pop stack into eflags register (4 clks)
    */
    public void popfl() { 
	realloc();
        insertByte(0x9d);
    }

    /**
       pop all general register
    */
    public void popal() {
	realloc();
        insertByte(0x61);
    }
}
