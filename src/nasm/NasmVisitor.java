package nasm;

import nasm.expr.*;
import nasm.inst.*;
import nasm.inst.Div;

public interface NasmVisitor <T> {
    
    public T visit(Add inst);
    public T visit(Call inst);
    public T visit(Div inst);
    public T visit(Je inst);
    public T visit(Jle inst);
    public T visit(Jne inst);
    public T visit(Mul inst);
    public T visit(Or inst);
    public T visit(Cmp inst);
    public T visit(NasmInst inst);
    public T visit(Jge inst);
    public T visit(Jl inst);
    public T visit(Not inst);
    public T visit(Pop inst);
    public T visit(Ret inst);
    public T visit(Xor inst);
    public T visit(And inst);
    public T visit(Jg inst);
    public T visit(Jmp inst);
    public T visit(Mov inst);
    public T visit(Push inst);
    public T visit(Sub inst);
    public T visit(Empty inst);
    public T visit(Int inst);

    public T visit(NasmAddress operand);
    public T visit(NasmConstant operand);
    public T visit(NasmLabel operand);
    public T visit(NasmRegister operand);

    public T visit(Resb pseudoInst);
    public T visit(Resw pseudoInst);
    public T visit(Resd pseudoInst);
    public T visit(Resq pseudoInst);
    public T visit(Rest pseudoInst);

    public T visit(NasmExp exp);
    public T visit(ExpPlus exp);
    public T visit(ExpMinus exp);
    public T visit(ExpTimes exp);

}
	