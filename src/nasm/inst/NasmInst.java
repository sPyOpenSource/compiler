package nasm.inst;

import nasm.Operand;
import nasm.NasmVisitor;
import nasm.Ref;
import nasm.Reg;
import nasm.SymbolTableEntryBase;
import nasm.UnresolvedJump;

public abstract class NasmInst{
    public Operand label = null;
    public Operand destination = null;
    public Operand source = null;
    public Operand address = null;
    
    public boolean destUse = false;
    public boolean destDef = false;
    public boolean srcUse = false;
    public boolean srcDef = false;
    public String comment;
    
    void addLabel(String formatInst, Operand label){
	formatInst += label;
    }
    
    public String formatInst(Operand label, String opcode, Operand arg1, Operand arg2, String comment){
	String s = "";
	if(label != null)
	    s = s + label + " :";
	s = s + "\t" + opcode;
	if(arg1 != null)
		s = s + "\t" + arg1;
	if(arg2 != null)
		s = s + ",\t" + arg2;
	if(comment != null & !"".equals(comment))
	    s = s + "\t;" + comment;
	return s;
    }

    public <T> T accept(NasmVisitor <T> visitor) {
        return visitor.visit(this);
    }

    void realloc(){}
    void realloc(int i ){}
    
    void insertByte(int i){}
    
    void insertModRM(Reg reg, Operand opr){}
    
    void insertModRM(Reg reg, Ref ref){}
    
    void insertConst4(int i){}
    
    void insertModRM(int i, Operand opr){}
    
    void insertModRM(int i, Ref opr){}
    
    void insertConst4(SymbolTableEntryBase e){}
    
    boolean is8BitValue(int i){ return true; }
    
    void makeRelative(SymbolTableEntryBase e){}
    
    void insertConst4(UnresolvedJump tableStart){}
    
    void addJumpTarget(UnresolvedJump table){}
}
