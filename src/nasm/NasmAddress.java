package nasm;

import nasm.expr.NasmExp;

public class NasmAddress extends Operand {

    public NasmExp val;
    public NasmSize size;

    public NasmAddress(NasmExp val, NasmSize size){
        this.val = val;
        this.size = size;
    }

    @Override
    public String toString(){
        return this.size.toString() + " [" + this.val.toString() + "]";
    }

    @Override
    public boolean isGeneralRegister(){
	return false;
    }

    @Override
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

}
