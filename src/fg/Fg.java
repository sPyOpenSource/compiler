package fg;

import util.graph.*;
import java.util.*;
import java.io.*;

import nasm.expr.*;
import nasm.inst.*;
import nasm.*;

public class Fg implements NasmVisitor <Void> {
    public Nasm nasm;
    public Graph graph;
    Map< NasmInst, Node> inst2Node;
    Map< Node, NasmInst> node2Inst;
    Map< String, NasmInst> label2Inst;

    public Fg(Nasm nasm){
	this.nasm = nasm;
	this.inst2Node = new HashMap< >();
	this.node2Inst = new HashMap< >();
	this.label2Inst = new HashMap< >();
	this.graph = new Graph();
    }

    public void affiche(String baseFileName){
	String fileName;
	PrintStream out = System.out;
	
	if (baseFileName != null){
	    try {
		fileName = baseFileName + ".fg";
		out = new PrintStream(fileName);
            }
	    catch (IOException e) {
		System.err.println("Error: " + e.getMessage());
	    }
	}
	
	for(NasmInst nasmInst : nasm.sectionText){
	    Node n = this.inst2Node.get(nasmInst);
	    out.print(n + " : ( ");
	    for(NodeList q=n.succ(); q!=null; q=q.tail) {
		out.print(q.head.toString());
		out.print(" ");
	    }
	    out.println(")\t" + nasmInst);
	}
	
    }

    public Void visit(Add inst){return null;}
    public Void visit(Call inst){return null;}
    public Void visit(Div inst){return null;}
    public Void visit(Je inst){return null;}
    public Void visit(Jle inst){return null;}
    public Void visit(Jne inst){return null;}
    public Void visit(Mul inst){return null;}
    public Void visit(Or inst){return null;}
    public Void visit(Cmp inst){return null;}
    public Void visit(NasmInst inst){return null;}
    public Void visit(Jge inst){return null;}
    public Void visit(Jl inst){return null;}
    public Void visit(Not inst){return null;}
    public Void visit(Pop inst){return null;}
    public Void visit(Ret inst){return null;}
    public Void visit(Xor inst){return null;}
    public Void visit(And inst){return null;}
    public Void visit(Jg inst){return null;}
    public Void visit(Jmp inst){return null;}
    public Void visit(Mov inst){return null;}
    public Void visit(Push inst){return null;}
    public Void visit(Sub inst){return null;}
    public Void visit(Empty inst){return null;}
    public Void visit(Int inst){return null;}
    public Void visit(NasmAddress operand){return null;}
    public Void visit(NasmConstant operand){return null;}
    public Void visit(NasmLabel operand){return null;}
    public Void visit(NasmRegister operand){return null;}
    public Void visit(Resb pseudoInst){return null;}
    public Void visit(Resw pseudoInst){return null;}
    public Void visit(Resd pseudoInst){return null;}
    public Void visit(Resq pseudoInst){return null;}
    public Void visit(Rest pseudoInst){return null;}
    public Void visit(ExpPlus exp){return null;}
    public Void visit(ExpMinus exp){return null;}
    public Void visit(ExpTimes exp){return null;}
    public Void visit(NasmExp exp){return null;}
}
