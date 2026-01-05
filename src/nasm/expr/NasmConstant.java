package nasm.expr;

import java.util.ArrayList;
import nasm.Operand;
import nasm.NasmVisitor;

public class NasmConstant extends Operand implements NasmExp{
    public int val;
    public NasmConstant(int val){
	this.val = val;
    }

    @Override
    public String toString(){
	return Integer.toString(this.val);
    }

    @Override
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

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
