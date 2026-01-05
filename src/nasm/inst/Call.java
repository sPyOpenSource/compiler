package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.SymbolTableEntryBase;

public class Call extends NasmInst {
    
    public Call(Operand label, Operand address, String comment){
	this.label = label;
	this.address = address;
	this.comment = comment;
    }

    @Override
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    @Override
    public String toString(){
	return super.formatInst(this.label, "call", this.address, null, this.comment);
    }

    /**
     * Insert call near indirect (reg/mem) (2 clks)
     * @param opr
     */
    public void call(Operand opr) {
	realloc();
	insertByte(0xff);
	insertModRM(2, opr);
    }
    
    /**
     * Insert call near (Symbol) (1 clks)
     * @param entry
     */
    public void call(SymbolTableEntryBase entry) {
	realloc();
	insertByte(0xe8); 
	//entry.initNCIndexRelative(ip, 4, ip + 4);  // size is always 4 bytes 
	//symbolTable.add(entry); 
	//ip += 4;
    }
}
