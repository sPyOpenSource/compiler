package nasm.expr;

import java.util.ArrayList;
import nasm.Nasm;
import nasm.Operand;
import nasm.NasmVisitor;

public class NasmRegister extends Operand implements NasmExp{
    public int val;
    public int color = Nasm.REG_UNK;

    public NasmRegister(int val){
	this.val = val;
    }

    public void colorRegister(int color){
	this.color = color;
    }

    public String toString(){
	if(this.color == Nasm.REG_ESP) return "esp";
	if(this.color == Nasm.REG_EBP) return "ebp";
	if(this.color == Nasm.REG_EAX) return "eax";
	if(this.color == Nasm.REG_EBX) return "ebx";
	if(this.color == Nasm.REG_ECX) return "ecx";
	if(this.color == Nasm.REG_EDX) return "edx";
	else
	    return "@" + this.val;
    }

    public boolean isEbp(){
	if(this.color == Nasm.REG_EBP) return true;
	return false;
    }
    
    public boolean isGeneralRegister(){
	if(this.color == Nasm.REG_EAX) return true;
	if(this.color == Nasm.REG_EBX) return true;
	if(this.color == Nasm.REG_ECX) return true;
	if(this.color == Nasm.REG_EDX) return true;
	if(this.color == Nasm.REG_UNK) return true;
	return false;
    }
    
    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    public ArrayList<NasmRegister> getRegisters()
    {
	ArrayList<NasmRegister> registerList = new ArrayList<>();
	this.getRegisters(registerList);
	return registerList;
    }
    
    public ArrayList<NasmRegister> getRegisters(ArrayList<NasmRegister> registerList)
    {
	registerList.add(this);
	return registerList;
    }

}
