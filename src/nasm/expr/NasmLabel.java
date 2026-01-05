package nasm.expr;

import java.util.ArrayList;
import nasm.Operand;
import nasm.NasmVisitor;

public class NasmLabel extends Operand implements NasmExp {
    public String val;

    public NasmLabel(String val){
	this.val = val;
    }
    @Override
    public String toString(){
	return this.val;
    }
    @Override
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }
    public boolean isStackAddress(){return false;}

    @Override
        public ArrayList<NasmRegister> getRegisters()
    {
	ArrayList<NasmRegister> registerList = new ArrayList<>();
	this.getRegisters(registerList);
	return registerList;
    }
    @Override
    public ArrayList<NasmRegister> getRegisters(ArrayList<NasmRegister> registerList)
    {
	return registerList;
    }
}
