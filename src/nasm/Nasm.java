package nasm;

import java.util.*;
import java.io.*;
import nasm.expr.*;
import nasm.inst.*;
import nasm.inst.PseudoInst;
import ts.*;
    
public class Nasm{
    public List<NasmInst> sectionText;
    public List<PseudoInst> sectionBss;
    protected int tempCounter = 0;
    Ts tableGlobale;
    public static int REG_EAX = 0;
    public static int REG_EBX = 1;
    public static int REG_ECX = 2;
    public static int REG_EDX = 3;
    public static int REG_ESP = 4;
    public static int REG_EBP = 5;
    public static int REG_UNK = 6;
    //    public static int NB_PREDEFINED_REG = 7;


    public Nasm(Ts tableGlobale){
	this.tableGlobale = tableGlobale;
	this.sectionBss = new ArrayList<>();
	this.sectionText = new ArrayList<>();
	populateSectionBss(tableGlobale);
    }

    public Nasm(){
	this.sectionBss = new ArrayList<>();
	this.sectionText = new ArrayList<>();
    }

    public int getTempCounter(){return this.tempCounter;}
    public int setTempCounter(int c){return this.tempCounter = c;}
    
    public void ajoutePseudoInst(PseudoInst pseudoInst){
	this.sectionBss.add(pseudoInst);
    }
    
    public void ajouteInst(NasmInst inst){
	if(inst instanceof Mov && inst.destination instanceof NasmAddress && inst.source instanceof NasmAddress){
	    NasmRegister newReg = newRegister();
	    this.sectionText.add(new Mov(inst.label, newReg, inst.source, inst.comment)); 
	    this.sectionText.add(new Mov(null, inst.destination, newReg, "on passe par un registre temporaire"));
	    return;
	}
	if(inst instanceof Add && inst.destination instanceof NasmAddress && inst.source instanceof NasmAddress){
	    NasmRegister newReg = newRegister();
	    this.sectionText.add(new Mov(inst.label, newReg, inst.source, inst.comment)); 
	    this.sectionText.add(new Add(null, inst.destination, newReg, "on passe par un registre temporaire"));
	    return;
	}
	if(inst instanceof Sub && inst.destination instanceof NasmAddress && inst.source instanceof NasmAddress){
	    NasmRegister newReg = newRegister();
	    this.sectionText.add(new Mov(inst.label, newReg, inst.source, inst.comment)); 
	    this.sectionText.add(new Sub(null, inst.destination, newReg, "on passe par un registre temporaire"));
	    return;
	}
	if(inst instanceof Mul && inst.destination instanceof NasmAddress && inst.source instanceof NasmAddress){
	    NasmRegister newReg = newRegister();
	    this.sectionText.add(new Mov(inst.label, newReg, inst.source, inst.comment)); 
	    this.sectionText.add(new Mul(null, inst.destination, newReg, "on passe par un registre temporaire"));
	    return;
	}

	
	//	if(inst instanceof NasmCmp && inst.destination instanceof NasmConstant && inst.source instanceof NasmConstant){
	if(inst instanceof Cmp
	   && (inst.destination instanceof NasmConstant
	       || (inst.destination instanceof NasmAddress && inst.source instanceof NasmAddress))){
		NasmRegister newReg = newRegister();
		this.sectionText.add(new Mov(inst.label, newReg, inst.destination, inst.comment)); 
		this.sectionText.add(new Cmp(null, newReg, inst.source, "on passe par un registre temporaire"));
		return;
	    }
	
	this.sectionText.add(inst);
    }

    public NasmRegister newRegister(){
	return new NasmRegister(tempCounter++);
    }

    public void populateSectionBss(Ts tableGlobale){
	ajoutePseudoInst(new Resb(new NasmLabel("sinput"), 255, "reserve a 255 byte space in memory for the users input string"));
	Set< Map.Entry< String, TsItemVar> > st = tableGlobale.variables.entrySet();    
	for (Map.Entry< String, TsItemVar> me:st){
	    TsItemVar tsItem = me.getValue(); 
	    String identif = me.getKey();
	    if(tsItem instanceof TsItemVarSimple)
		ajoutePseudoInst(new Resd(new NasmLabel(identif), tsItem.type.taille(), "variable globale"));
	    if(tsItem instanceof TsItemVarTab)
		ajoutePseudoInst(new Resd(new NasmLabel(identif), tsItem.type.taille() * ((TsItemVarTab)tsItem).taille, "variable globale"));
	    //	    ajoutePseudoInst(new NasmResd(new NasmLabel(identif), tsItem.taille*4, "variable globale"));
	}
    }


    public void affichePreNasm(String baseFileName){
	String fileName;
	PrintStream out = System.out;

	if (baseFileName != null){
	    try {
		fileName = baseFileName + ".pre-nasm";
		out = new PrintStream(fileName);
	    }
	    
	    catch (IOException e) {
		System.err.println("Error: " + e.getMessage());
	    }
	}
	affiche(out);
    }

    public void afficheNasm(String baseFileName){
	String fileName;
	PrintStream out = System.out;

	if (baseFileName != null){
	    try {
		fileName = baseFileName + ".nasm";
		out = new PrintStream(fileName);
	    }
	    
	    catch (IOException e) {
		System.err.println("Error: " + e.getMessage());
	    }
	}
	affiche(out);
    }

    public void affiche(PrintStream out){
	out.println("%include\t'io.asm'\n");
	out.println("section\t.bss");
    	Iterator<PseudoInst> iter = this.sectionBss.iterator();
    	while(iter.hasNext()){
    	    out.println(iter.next());
    	}
	
	out.println("\nsection\t.text");
	out.println("global _start");
	out.println("_start:");
    	Iterator<NasmInst> iter2 = this.sectionText.iterator();
    	while(iter2.hasNext()){
    	    out.println(iter2.next());
    	}
    }
}
/*
    public void affichePreambule(PrintStream out)
    {
	out.println("%include\t'io.asm'\n");
	out.println("section\t.bss");
	out.println("sinput:\tresb\t255\t;reserve a 255 byte space in memory for the users input string");


	Set< Map.Entry< String, TsItemVar> > st = tableGlobale.variables.entrySet();    
	for (Map.Entry< String, TsItemVar> me:st){
	    TsItemVar tsItem = me.getValue(); 
	    String identif = me.getKey();
	    out.println(identif + " :\tresd\t" + tsItem.taille * 4);
	}
	out.println("\nsection\t.text");
	out.println("global _start");
	out.println("_start:");
    }


    */
