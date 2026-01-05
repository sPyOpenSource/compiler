package nasm.expr;

import java.util.ArrayList;
import nasm.NasmVisitor;

public class ExpPlus implements NasmExp{
    public NasmExp op1;
    public NasmExp op2;

    public ExpPlus(NasmExp op1, NasmExp op2){
        this.op1 = op1;
        this.op2 = op2;
    }

    @Override
    public String toString() {
        return op1.toString() + "+" + op2.toString();
    }

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
	this.op1.getRegisters(registerList);
	this.op2.getRegisters(registerList);
	return registerList;
    }
}
