package nasm;

import ts.*;
import c3a.*;
import nasm.expr.NasmRegister;

public class C3a2nasm implements C3aVisitor <Operand> {
    private final C3a c3a;
    private final Nasm nasm;
    private final Ts tableGlobale;
    private final TsItemFct currentFct;
    private final NasmRegister esp;
    private final NasmRegister ebp;

    public C3a2nasm(C3a c3a, Ts tableGlobale){
		this.c3a = c3a;
		nasm = new Nasm(tableGlobale);
		nasm.setTempCounter(c3a.getTempCounter());

		this.tableGlobale = tableGlobale;
		this.currentFct = null;
		esp = new NasmRegister(-1);
		esp.colorRegister(Nasm.REG_ESP);

		ebp = new NasmRegister(-1);
		ebp.colorRegister(Nasm.REG_EBP);
    }

    public Nasm getNasm(){return nasm;}


    public Operand visit(C3a c3a){return null;}
    public Operand visit(C3aInstAdd inst){return null;}
    public Operand visit(C3aInstCall inst){return null;}
    public Operand visit(C3aInstFBegin inst){return null;}
    public Operand visit(C3aInst inst){return null;}
    public Operand visit(C3aInstJumpIfLess inst){return null;}
    public Operand visit(C3aInstMult inst){return null;}
    public Operand visit(C3aInstRead inst){return null;}
    public Operand visit(C3aInstSub inst){return null;}
    public Operand visit(C3aInstAffect inst){return null;}
    public Operand visit(C3aInstDiv inst){return null;}
    public Operand visit(C3aInstFEnd inst){return null;}
    public Operand visit(C3aInstJumpIfEqual inst){return null;}
    public Operand visit(C3aInstJumpIfNotEqual inst){return null;}
    public Operand visit(C3aInstJump inst){return null;}
    public Operand visit(C3aInstParam inst){return null;}
    public Operand visit(C3aInstReturn inst){return null;}
    public Operand visit(C3aInstWrite inst){return null;}
    public Operand visit(C3aInstStop inst){return null;}

    public Operand visit(C3aConstant oper){return null;}
    public Operand visit(C3aBooleanConstant oper){return null;}
    public Operand visit(C3aLabel oper){return null;}
    public Operand visit(C3aTemp oper){return null;}
    public Operand visit(C3aVar oper){return null;}
    public Operand visit(C3aFunction oper){return null;}
    
}
