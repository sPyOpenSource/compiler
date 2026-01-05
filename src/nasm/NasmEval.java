package nasm;

import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.HashMap;
import nasm.expr.*;
import nasm.inst.*;
import util.Memory;

/*
This class emulates pre-nasm and nasm code for x86-64 architecture.
It handles only integers on 4 bytes and have unlimited register.
 */

public class NasmEval implements NasmVisitor<Integer>{
    private final Nasm code;
    private int dataSize = 0;

    private final int regNb;
    private final HashMap<String, Integer> labelToAddress;
    private final Memory memory;
    private boolean stop;
    private final ArrayList<Integer> output;

    // registers
    private final int[] registers;
    
    private int ebp;
    private int eip = 0;
    private int eax = 0; 
    private int ebx = 0; 
    private int ecx = 0; 
    private int edx = 0; 
    
    //flags
    // Carry Flag -> not used
    private final boolean CF = false;
    // Parity Flag -> not used
    private final boolean PF = false;
    // Zero Flag
    private boolean ZF = false;
    // Sign Flag
    private boolean SF = false;
    // Overflow Flag -> not used
    private final boolean OF = false;
	
    private final int verboseLevel;

    public NasmEval(Nasm code, int stackSize, int verboseLevel){
        this.code = code;
	this.verboseLevel = verboseLevel;
	regNb = this.code.getTempCounter();
        registers = new int[regNb+1];
        eip = 0;
        stop = false;

        output = new ArrayList<>();
	labelToAddress = new HashMap<>();

	associateLabelToAddress();
       	memory = new Memory(dataSize, stackSize);
	
        while(!stop && eip < code.sectionText.size()){
	    NasmInst inst = this.code.sectionText.get(eip);
	    if(verboseLevel > 0){
		System.out.println("--------------------------------------");

		PrintGlobalVariables();
		//		System.out.println("eip = " + eip + "\tesp = " + memory.getTopInt() + "\t ebp = " + ebp);
		System.out.println("eip = " + eip + "\tesp = " + memory.esp + "\t ebp = " + ebp);
		System.out.println("eax = " + eax + "\tebx = " + ebx + "\tecx = " + ecx + "\tedx = " + edx);
		System.out.println("CF = " + CF + "\tPF = " + PF + "\tZF = " + ZF + "\tSF = " + SF + "\tOF = " + OF);
		printRegisters();
		System.out.print("PILE : \t");
		memory.printStack();
		System.out.println(inst);
	    }
            eip = inst.accept(this);
        }
	//	displayOutput();
    }

    public void PrintGlobalVariables(){
    for (HashMap.Entry<String, Integer> e : labelToAddress.entrySet())

	    //   	System.out.println("[" + e.getValue() + "]\t" + e.getKey() + " = " + memory.readInt(e.getValue()));
	System.out.println(e.getKey() + " = " + memory.readInt(e.getValue()) + " adr: " + e.getValue());

    }
	
    public void printRegisters(){
	for(int i = 0; i < regNb; i++){
	    System.out.print("r" + i + ":" + registers[i] + "\t");
	}
	//	System.out.println();
    }

    public void displayOutput(){
        for(var val : output)
            System.out.println(val);
    }

    public void displayOutput(String outputFile) throws FileNotFoundException {
        var out = new PrintStream(outputFile);
        for(var val : output)
            out.println(val);
    }

    private void associateLabelToAddress(){
        var instructions = code.sectionText;
	// associate labels to line numbers
        for(int lineNb = 0; lineNb <instructions.size(); lineNb++){
            if(instructions.get(lineNb).label != null) {
                var label = (NasmLabel)instructions.get(lineNb).label;
                labelToAddress.put(label.val, lineNb);
            }
        }
	// compute addresses of global variables and associate them to labels
	for(int i = 0; i < code.sectionBss.size(); i++){
	    PseudoInst pseudoInst = this.code.sectionBss.get(i);
	    labelToAddress.put(pseudoInst.label.val, dataSize);
	    //	    System.out.println("var :" + pseudoInst.label.val + " address = " + dataSize);
	    dataSize += pseudoInst.nb * pseudoInst.sizeInBytes;
	}
    }

    /*------------------------------------------*/
    private void copy(Operand dest, int value){
	if(dest instanceof NasmAddress nasmAddress)
	    copy(nasmAddress, value);
	else if(dest instanceof NasmRegister nasmRegister)
	    copy(nasmRegister, value);
    }
    
    private void copy(NasmAddress dest, int value){
	int address = dest.val.accept(this);
	memory.writeInt(address, value);
    }
    

    private void copy(NasmRegister dest, int value){
	writeToRegister(dest, value);
    }

    /*------------------------------------------*/

    // return value stored in regiter
    private int readFromRegister(NasmRegister reg){
	if(reg.color == Nasm.REG_EAX)
	    return eax;
	if (reg.color == Nasm.REG_EBX)
	    return ebx;
	if (reg.color == Nasm.REG_ECX)
	    return ecx;
	if (reg.color == Nasm.REG_EDX)
	    return edx;
	if (reg.color == Nasm.REG_ESP)
	    return memory.esp;
	if (reg.color == Nasm.REG_EBP)
	    return ebp;
	else
	    return registers[reg.val];

    }
    // write in a register
    
    private void writeToRegister(NasmRegister reg, int value){
	if(reg.color == Nasm.REG_EAX)
	    eax = value;
	else if (reg.color == Nasm.REG_EBX)
	    ebx = value;
	else if (reg.color == Nasm.REG_ECX)
	    ecx = value;
	else if (reg.color == Nasm.REG_EDX)
	    edx = value;
	else if (reg.color == Nasm.REG_ESP)
	    memory.esp = value;
	else if (reg.color == Nasm.REG_EBP)
	    ebp = value;
	else
	    registers[reg.val] = value;
    }

    /* visit address -> return the value stored at this address */
    @Override
    public Integer visit(NasmAddress adr) {
	return memory.readInt(adr.val.accept(this));
    }

    /* visit register -> return the value stored in the register */
    @Override
    public Integer visit(NasmRegister operand) {
	if(operand.color == Nasm.REG_EAX)
	    return eax;
	if (operand.color == Nasm.REG_EBX)
	    return ebx;
	if (operand.color == Nasm.REG_ECX)
	    return ecx;
	if (operand.color == Nasm.REG_EDX)
	    return edx;
	if (operand.color == Nasm.REG_ESP)
	    return memory.esp;
	if (operand.color == Nasm.REG_EBP)
	    return ebp;
	else
	    return registers[operand.val];
    }

    /* visit constant -> return value of the constant */
    @Override
    public Integer visit(NasmConstant operand) {
        return operand.val;
    }

    /* visit label -> return address corresponding to the label */
    @Override
    public Integer visit(NasmLabel operand) {
        if(labelToAddress.containsKey(operand.val))
	    return labelToAddress.get(operand.val);
	else
	    throw new RuntimeException("label " + operand.val + "does not correspond to address");
    }


    /* visiting an instruction returns new value of eip */
    /* arithmetic operations */
    
    @Override
    public Integer visit(Add inst) {
	copy(inst.destination, inst.source.accept(this) + inst.destination.accept(this));
        return eip + 1;
    }

    @Override
    public Integer visit(Sub inst) {
        copy(inst.destination, inst.destination.accept(this) - inst.source.accept(this));
	return eip + 1;
    }

    @Override
    public Integer visit(Mul inst) {
        copy(inst.destination, inst.source.accept(this) * inst.destination.accept(this));
	return eip + 1;
    }

    @Override
    public Integer visit(Div inst) {
        var divisor  = inst.source.accept(this);
        var temp = eax;
        eax = temp / divisor;
        edx = temp % divisor;
	return eip + 1;
    }

    /* logical operations */
    @Override
    public Integer visit(Or inst) {
        copy(inst.destination, inst.source.accept(this) | inst.destination.accept(this));
        return eip + 1;
    }

    @Override
    public Integer visit(Not inst) {
        copy(inst.destination, ~ inst.destination.accept(this));
        return eip + 1;
    }

    @Override
    public Integer visit(Xor inst) {
        copy(inst.destination, inst.source.accept(this) ^ inst.destination.accept(this));
	return eip + 1;
    }

    @Override
    public Integer visit(And inst) {
        copy(inst.destination, inst.source.accept(this) & inst.destination.accept(this));
	return eip + 1;
    }

    /* function call */
    @Override
    public Integer visit(Call inst) {
        if(inst.address instanceof NasmLabel && ((NasmLabel)inst.address).val.equals("iprintLF")){
            output.add(eax);
	    return eip + 1;
	}
	memory.pushInt(eip);
	return inst.address.accept(this);
    }

    /* comparison */
    @Override
    public Integer visit(Cmp inst) {
        int valSrc = inst.source.accept(this);
        int valDest = inst.destination.accept(this);
        ZF = (valDest == valSrc)? true : false;
	SF = (valDest < valSrc)? true : false;
        return eip + 1;
    }
    
    /* jumps */
    @Override
    public Integer visit(Je inst) {
        return (ZF)? inst.address.accept(this) : eip + 1;
    }

    @Override
    public Integer visit(Jle inst) {
        return (ZF || SF)? inst.address.accept(this) : eip + 1;
    }

    @Override
    public Integer visit(Jne inst) {
        return (!ZF)? inst.address.accept(this) : eip + 1;
    }

    @Override
    public Integer visit(Jge inst) {
        return (ZF || !SF)? inst.address.accept(this) : eip + 1;
    }

    @Override
    public Integer visit(Jl inst) {
	return (!ZF && SF)? inst.address.accept(this) : eip + 1;
    }

    @Override
    public Integer visit(Jg inst) {
        return (!ZF || SF)? inst.address.accept(this) : eip + 1;
    }

    @Override
    public Integer visit(Jmp inst) {
        return inst.address.accept(this);
    }

    @Override
    public Integer visit(Pop inst) {
        copy(inst.destination, memory.popInt());
	return eip + 1;
    }

    @Override
    public Integer visit(Push inst) {
        memory.pushInt(inst.source.accept(this));
        return eip + 1;
    }

    @Override
    public Integer visit(Ret inst) {
        return memory.popInt() + 1;
    }

    @Override
    public Integer visit(Mov inst) {
        copy(inst.destination, inst.source.accept(this));
	return eip + 1;
    }

    @Override
    public Integer visit(Int inst) {
        if(eax == 1)
            stop = true;
        return eip + 1;
    }

    @Override
    public Integer visit(NasmInst inst) {
        return 0;
    }

    @Override
    public Integer visit(Empty inst) {
        return eip + 1;
    }

    public Integer visit(Resb pseudoInst){return 0;}
    public Integer visit(Resw pseudoInst){return 0;}
    public Integer visit(Resd pseudoInst){return 0;}
    public Integer visit(Resq pseudoInst){return 0;}
    public Integer visit(Rest pseudoInst){return 0;}

    /* visit expression -> returns an address */
    
    public Integer visit(NasmExp exp) { /* c'est moche, il faudrait modifier ça !! */
	if(exp instanceof NasmLabel)
	    return ((NasmLabel)exp).accept(this);

	if(exp instanceof NasmRegister)
	    return ((NasmRegister)exp).accept(this);

	if(exp instanceof NasmLabel)
	    return ((NasmLabel)exp).accept(this);

	if(exp instanceof NasmConstant)
	    return ((NasmConstant)exp).accept(this);

	if(exp instanceof ExpPlus)
	    return ((ExpPlus)exp).accept(this);

	if(exp instanceof ExpMinus)
	    return ((ExpMinus)exp).accept(this);

	//	if(exp instanceof NasmExpTimes)
	    return ((ExpTimes)exp).accept(this);
    }
    public Integer visit(ExpPlus exp) {return exp.op1.accept(this) + exp.op2.accept(this);}
    public Integer visit(ExpMinus exp){return exp.op1.accept(this) - exp.op2.accept(this);}
    public Integer visit(ExpTimes exp){return exp.op1.accept(this) * exp.op2.accept(this);}

}
