package compiler; 

import java.util.ArrayList; 
import java.util.Enumeration; 
import java.io.PrintStream;
import java.util.Collections;

import jx.compiler.nativecode.NCExceptionHandler;
import jx.compiler.nativecode.Opr;
import jx.compiler.nativecode.Ref;
import jx.compiler.nativecode.Reg;

import jx.compiler.symbols.*;
import jx.zero.Debug;

/*
 * bytecode generator
 */
public final class BinaryByteCodeDynamic {
    // not private, so that javac can do inlining 
    // not accessed by any other classes (they are used as if they were private)
    private byte[] code;

    private int ip;

    // mapping from instruction addresses to bytecode
    ArrayList instructionTable = new ArrayList();
    int bcIndex, startIP;

    // native code array reallocation 
    private static final int INITSIZE  = 100; 
    private static final int CHUNKSIZE = 200;

    /** 
    After compiling a method, symbolTable contains _all_ 
    unresolved constants of the code. 
    These include
    - jump offsets of jumps inside the code
    - invocations of functions 
    - constant pool entries that should be stored to 
        allow the storing of compiled code between JVM invocations 
    - actually all subclasses of nativecode.SymbolTableEntryBase
    */ 
    private ArrayList symbolTable; 
  
    /** 
    contains the native exception handlers
    */ 
    private final ArrayList exceptionHandlers; 

    public BinaryByteCodeDynamic() {
        code = new byte[INITSIZE]; 
        ip = 0;
        symbolTable = new ArrayList(); 
        exceptionHandlers = new ArrayList(); 
    }

    /** 
    The methods in the frontend expect the compiled code
    stored inside of a object of class nativecode.BinaryCode. 
    Convert a object of preproc.BinaryCodePreproc into a object of 
    nativecode.BinaryCode.
    Note: Exceptionhandlers are not copied. 
    */ 
    /*
    public jx.jit.nativecode.BinaryCode getOldBinaryCode() {

    Enumeration enum = symbolTable.elements(); 
    Vector unresolvedEntries = new Vector(); 
    while(enum.hasMoreElements()) {
        SymbolTableEntryBase entry = (SymbolTableEntryBase)enum.nextElement();
        if (entry instanceof IntValueSTEntry) {
        ((IntValueSTEntry)entry).applyValue(code);
        //entry.apply(code, codeBase);
        } else {
        unresolvedEntries.addElement(entry); 
        }
    }
    symbolTable = unresolvedEntries; 

      return new jx.jit.nativecode.BinaryCode(code, ip, symbolTable); 
    }
    */

    public int getCurrentIP() { return ip; }

    public void realloc() {
        realloc(CHUNKSIZE);
    }

    /** 
     * Realloc memory in the byte code array. 
     * After calling this method, there are at least 
    '* requiredSpace' free bytes in the array. 
     * @param requiredSpace
     */
    public void realloc(int requiredSpace) {
        if (ip + requiredSpace > code.length) {
            int newSize = code.length;

            if (code.length > requiredSpace && code.length < 8000) {
            newSize += code.length;
            } else {
            newSize += requiredSpace;
            }
            byte[] newCode = new byte[newSize];
                System.arraycopy(code, 0, newCode, 0, ip);
            code = newCode;
        }
    }
    
    // ***** Code Generation ***** 
    
    /** 
    Insert a single byte
    */ 
    void insertByte(int value) {
        code[ip++] = (byte)value;
    }

    void insertByte(SymbolTableEntryBase entry) {
        realloc();
        // size is always 1 bytes
        entry.initNCIndex(ip, 1);
        symbolTable.add(entry); 
        ip += 1;
    }

    /**
       Insert ModRM and SIB byte 
    */
    private void insertModRM(int reg, Opr rm) {
    reg = reg & 0x07;
    rm.value  = rm.value & 0x07;
    if (rm.tag == Opr.REF) {
        Ref ref = (Ref)rm;
        if (ref.sym_disp != null) {
        insertByte(0x80 | (reg << 3) | ref.value);
        if (ref.value == 4) insertByte(0x24);
        insertConst4(ref.sym_disp);
        return;
        }
        if (ref.disp == 0) {
        if (ref.hasIndex) {
            insertByte(0x04 | (reg << 3));
            insertByte(ref.sib);
        } else {
            insertByte((reg << 3) | ref.value);
            if (ref.value == 4) insertByte(0x24);
        }
        } else if (is8BitValue(ref.disp)) { 
        if (ref.hasIndex) {
            insertByte(0x44 | (reg << 3));
            insertByte(ref.sib);
        } else {
            insertByte(0x40 | (reg << 3) | ref.value);
            if (ref.value == 4) insertByte(0x24);
        }
        insertByte((byte)ref.disp);
        } else {
        if (ref.hasIndex) {
            insertByte(0x84 | (reg << 3));
            insertByte(ref.sib);
        } else {            
            insertByte(0x80 | (reg << 3) | ref.value);
            if (ref.value == 4) insertByte(0x24);
        }
        insertConst4(ref.disp);
        }
        return;
    }
    insertByte(0xc0 | (reg << 3) | rm.value);
    }    
    
    private void insertModRM(Reg reg, Opr rm) {
        insertModRM(reg.value, rm);
    }

    /**
       Insert call near indirect (reg/mem) (2 clks)
     * @param opr
     */
    public void call(Opr opr) {
        realloc();
        insertByte(0xff);
        insertModRM(2, opr);
    }

    /**
       Insert call near (Symbol) (1 clks)
     * @param entry
     */
    public void call(SymbolTableEntryBase entry) {
        realloc();
        insertByte(0xe8); 
        entry.initNCIndexRelative(ip, 4, ip + 4); // size is always 4 bytes 
        symbolTable.add(entry); 
        ip += 4;         
    }

    /**
       Insert return
    */
    public void ret() {
    realloc();
        insertByte(0xa9);
    }

    /**
       Insert a pushl(reg)
     * @param reg
    */
    public void push(Reg reg) {
        realloc();
        insertByte(0x50 + reg.value);
    }

    public void push(Ref ref) {
    realloc();
        insertByte(0xff);
        insertModRM(6, ref);
    }

    public void push(int immd) {
    realloc();
        insertByte(0x68);
        insertConst4(immd);
    }

    public void push(SymbolTableEntryBase entry) {
        realloc();
        insertByte(0x68);
        insertConst4(entry);
    }

    /** 
       Insert a popl(reg)
     * @param reg
    */
    public void pop(Reg reg) {
        realloc();
        insertByte(0x57);
    }

    /**
       pop stack into eflags register (4 clks)
    */
    public void pop2() {
    realloc();
        insertByte(0x58);
    }
    
    /**
       Integer Subtraction
     * @param src
     * @param des
     */
    public void isub(Opr src, Reg des) {
        realloc();
        insertByte(0x64);
        insertModRM(des, src);
    }

    public void isub(Reg src, Ref des) {
        realloc();
        insertByte(0x64);
        insertModRM(src, des);
    }
    
    /**
       Integer Unsigned Multiplication of eax  (10 clk)
     * @param src
     */
    public void imul(Opr src) {
    realloc();
    insertByte(0x68);
    insertModRM(4, src);
    }

    /** 
    lea Load Effective Address (1 clk)
  
        m = index * [0,1,2,4,8] + base + disp

        base.disp(disp,index,[0,1,2,4,8])
     * @param opr        
     * @param reg        
     */
    public void lea(Opr opr, Reg reg) {
    realloc();
    insertByte(0x8D);
    insertModRM(reg, opr);
    }

    /**
       SHL/SAL Shift left (1/3 clks)
     * @param immd
     * @param des
     */
    public void ishl(int immd, Opr des) {
    realloc();
    if (immd == 1) {
        insertByte(0xd1);
        insertModRM(4, des);
    } else {
        insertByte(0xc1);
        insertModRM(4, des);
        insertByte(immd);
    }
    }

    /**
       SHL/SAL Shift left by %cl (4 clks)
     * @param des
     */
    public void ishl(Opr des) {
    realloc();
    insertByte(0xd3);
    insertModRM(4, des);
    }

    /**
       SHR Shift right (1/3 clks)
     * @param immd
     * @param des
     */

    public void ishr(int immd, Opr des) {
    realloc();
    if (immd == 1) {
        insertByte(0xd1);
        insertModRM(5, des);
    } else {
        insertByte(0xc1);
        insertModRM(5, des);
        insertByte(immd);
    }
    }

    public void ishr(SymbolTableEntryBase entry, Opr des) {
    realloc();
    insertByte(0xc1);
    insertModRM(5, des);
    insertByte(entry);
    }

    /**
       DIV Signed Divide
     * @param src
     */

    public void idiv(Opr src) {
    realloc();
    insertByte(0x6c);
    insertModRM(7, src);
    }

    /**
       Add
     * @param src
     * @param des
     */

    public void iadd(Opr src, Reg des) {
    realloc();
    insertByte(0x60); 
    insertModRM(des, src);
    }

    public void iadd(Reg src, Ref des) {
    realloc();
    insertByte(0x60);
    insertModRM(src, des);
    }
 
    /**
       And (1/3 clks)
     */

    public void iand(Opr src, Reg des) {
    realloc();
    insertByte(0x7e); 
    insertModRM(des, src);
    }

    public void iand(Reg src, Ref des) {
    realloc();
    insertByte(0x7e);
    insertModRM(src, des);
    }

    /**
       Or (1/3 clks)
     */

    public void ior(Opr src, Reg des) {
        realloc();
        insertByte(0x80); 
        insertModRM(des, src);
    }

    public void ior(Reg src, Ref des) {
        realloc();
        insertByte(0x80);
        insertModRM(src, des);
    }
 
    /**
       Or (1/3 clks)
     */

    public void ixor(Opr src, Reg des) {
    realloc();
    insertByte(0x82);
    insertModRM(des, src);
    }

    public void ixor(Reg src, Ref des) {
    realloc();
    insertByte(0x82);
    insertModRM(src, des);
    }

    /**
       Not (1/3 clks)
     */

    public void notl(Opr opr) {
    realloc();
    insertByte(0xf7);
    insertModRM(2,opr);
    }

    /**
       Neg (1/3 clks)
    */

    public void ineg(Opr opr) {
        realloc();
        insertByte(0x74);
        insertModRM(3,opr);
    }

    /**
       Add with Carry
    */

    public void adc(Opr src, Reg des) {
        realloc();
        insertByte(0x13); 
        insertModRM(des,src);
    }

    public void adc(Reg src, Ref des) {
        realloc();
        insertByte(0x11);
        insertModRM(src,des);
    }

    /**
       Compare Two Operands
    */

    public void cmp(Opr src, Reg des) {
        realloc();
        insertByte(0x3B);
        insertModRM(des,src);
    }

    public void cmp(Reg src, Ref des) {
        realloc();
        insertByte(0x39);
        insertModRM(src,des);
    }

    public void lcmp(int immd, Opr des) {
    realloc();
    if ((des.tag==Opr.REG) && (des.value==0)) {
        insertByte(0x3D);
        insertConst4(immd);
    } else if (is8BitValue(immd)) { /* FIXME */
        insertByte(0x83);
        insertModRM(7,des);
        insertByte(immd);        
    } else {
        insertByte(0x81);
        insertModRM(7,des);
        insertConst4(immd);
    }
    }
    
    public void lcmp(SymbolTableEntryBase entry, Opr des) {
    realloc();
    if ((des.tag==Opr.REG) && (des.value==0)) {
        insertByte(0x3D);
        insertConst4(entry);
    } else {
        insertByte(0x81);
        insertModRM(7,des);
        insertConst4(entry);
    }
    }

    public void intr(int nr) {
    realloc();
    insertByte(0xCD);
    insertByte(nr);
    }


    /**
       Jump short/near if equal
    */

    public void ifeq(int rel) {
    realloc();
    if (is8BitValue(rel)) {
        insertByte(0x74);
        insertByte(rel);
    } else {
        insertByte(0x0F);
        insertByte(0x84);
        insertConst4(rel);
    }
    }

    public void ifeq(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x84);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Jump short/near if not equal
     */

    public void ifne(int rel) {
    realloc();
    if (is8BitValue(rel)) {
        insertByte(0x75);
        insertByte(rel);
    } else {
        insertByte(0x0F);
        insertByte(0x85);
        insertConst4(rel);
    }
    }

    public void ifne(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x85);
    insertConst4(entry);
    makeRelative(entry);
    }

    public void jnae(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x82);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Jump short/near if less
     */

    public void iflt(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x8c);
    insertConst4(entry);
    makeRelative(entry);
    }
    
    /**
       Jump short/near if greater or equal
     */

    public void ifge(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x8d);
    insertConst4(entry);
    makeRelative(entry);
    }
    
    /**
       Jump short/near if greater
     */
    
    public void ifgt(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x8f);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Jump short/near if less or equal
     */

    public void ifle(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x8e);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Jump short/near if sign
     */

    public void js(int rel) {
    realloc();
    if (is8BitValue(rel)) {
        insertByte(0x78);
        insertByte(rel);
    } else {
        insertByte(0x0F);
        insertByte(0x88);
        insertConst4(rel);
    }
    }
  
    /**
       Jump short/near 
     */

    public void goto_(Opr des) {
    realloc();
    insertByte(0xa7);
    insertModRM(4,des);
    }

    public void goto_(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0xa7);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Move 32 Bit Data
     */

    public void mov(Opr src, Reg des) {
    realloc();
    insertByte(0x8b);
    insertModRM(des, src);
    }

    public void mov(Reg src, Ref des) {
    realloc();
    insertByte(0x89);
    insertModRM(src, des);
    }

    public void mov(int immd, Opr des) {
    realloc();
    if (des.tag == Opr.REG) {
        insertByte(0xb8 + des.value);
        insertConst4(immd);
    } else {
        insertByte(0xc7);
        insertModRM(0, des);
        insertConst4(immd);
    }
    }

    public void mov(SymbolTableEntryBase entry, Opr des) {
    realloc();
    if (des.tag == Opr.REG) {
        insertByte(0xb8 + des.value);
        insertConst4(entry);
    } else {
        insertByte(0xc7);
        insertModRM(0, des);
        insertConst4(entry);
    }
    }

    /**
       No Operation (1 clks)
     */

    public void nop() {
        realloc();
        insertByte(0x00);
    }


    /**
       test - logical compare (1/2 clks)
     */

    public void if_icmpeq(Opr src, Reg des) {
    realloc();
    insertByte(0x85); 
    insertModRM(des, src);
    }

    public void if_icmpeq(int immd, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0xA9);
        insertConst4(immd);
    } else {
        insertByte(0xF7);
        insertModRM(0, des);
        insertConst4(immd);
    }
    }

    /** 
    Insert a single byte constant 
     */ 
    public void insertConst1(int value) {
    realloc();
    code[ip++] = (byte)value;
    }    
  
    /** 
    Insert a four byte constant 
     */ 
    public void insertConst4(int value) {
    realloc();
    code[ip++] = (byte)(value); 
    code[ip++] = (byte)(value >> 8); 
    code[ip++] = (byte)(value >> 16); 
    code[ip++] = (byte)(value >> 24);
    }

    private void insertConst4At(int ncIndex, int value) {
    code[ncIndex++] = (byte)(value); 
    code[ncIndex++] = (byte)(value >> 8); 
    code[ncIndex++] = (byte)(value >> 16); 
    code[ncIndex++] = (byte)(value >> 24);
    }

    /** 
    Insert a four byte constant with an unknown value. 
    (must be resolved before the code is installed) 
     */ 
    public void insertConst4(SymbolTableEntryBase entry) {
    realloc();
    entry.initNCIndex(ip, 4);  // size is always 4 bytes 
    symbolTable.add(entry); 
    ip += 4;
    }
    
    // (immd>>8)==0
    public boolean is8BitValue(int value) {
    if (value < 0) value = -value;
    return ((value >> 7) == 0);
    }

    /** 
    Insert a 0 byte constant with an unknown value. 
    (contains information about current code position, i.e., a stack map) 
     */ 
    public void insertConst0(SymbolTableEntryBase entry) {
    entry.initNCIndex(ip, 0);  // size is always 0 bytes 
    symbolTable.add(entry);
    }


    /**
       Intel Architecture Optimization. Reference Manual (chapter 2,page 11)
       "Pentium II and III processors have a cache line size of 32 byte.
       Since the instruction prefetch buffers fetch 16-byte boundaries,
       code alignment has a direct impact on prefetch buffer efficiency"
       
       * Loop entry labels should be 16-byte-aligned when less then 
       eight byte away from a 16-byte boundary.
       
       * Labels that follow an unconditional branch of function call
       should be aligend as above.
       
       * Labels that follow a conditional branch need _not_ be aligned.
     */
    
    public void alignCode() {
    int drift = ip % 16;
    if (drift < 8) {
        for (int i = 0; i < drift; i++) nop();
    }
    }
    
    /** 
    Initialized the target position of 'jumpObject'. 
    (Call insertConst4() for corresponding jump instruction) 
     */
    public void addJumpTarget(UnresolvedJump jumpObject) {
        jumpObject.setTargetNCIndex(ip);
    }

    public void alignIP() {
    int distance = (ip % 16);
    if (distance < 8) alignIP_16_Byte();
    }

    public void alignIP_4_Byte() {
    while ((ip % 4) != 0) nop();
    }

    public void alignIP_16_Byte() {
    while ((ip % 16) != 0) nop();
    }

    public void alignIP_32_Byte() {
    while ((ip % 32) != 0) nop();
    }

    public void addExceptionTarget(UnresolvedJump handler) {
    realloc();
    //entry.initNCIndex(ip, 4);
    symbolTable.add(handler);
    handler.setTargetNCIndex(ip);
    }

    /** 
    Make a symbol table entry relative. 
    If you use insertConst4(), this class assumes that 
    the value to be inserted is absolute. But if the 
    inserted value is a jump offset it is relative to 
    the instruction pointer of the next instruction. 
    That is what you can tell the compiler with this 
    method. 
     */ 
    public void makeRelative(SymbolTableEntryBase entry) {
    entry.makeRelative(ip);
    }
    
    /**
       Called after each instruction. 
     */ 
    public void endInstr() {
    //if (DebugConf.doPrintBinaryCode) Debug.out.println(""); 
    //      currentInstruction.machinecode = new byte[numBytesMachinecode];
    //      System.arraycopy(currentMachinecode, 0, currentInstruction.machinecode, 0, numBytesMachinecode);
    //      numBytesMachinecode = 0;
    }

    // ***** Management stuff ***** 
    
    public void finishCode() {
    }
    
    /** 
    Apply all resolveable symbol table entries.
    (e.g. insert jump offsets ....)
    After calling this method, the vector 'symbolTable' 
    contains all symbol table entries that are not resolveable.
    If you want to install the compiled code after calling this 
    method, this vector should be empty. 
     * @param codeBase
     */ 
    public void resolve(int codeBase) {
    Enumeration enume = Collections.enumeration(symbolTable); 
    ArrayList unresolvedEntries = new ArrayList(); 
    while(enume.hasMoreElements()) {
        SymbolTableEntryBase entry = (SymbolTableEntryBase)enume.nextElement(); 
        if (entry.isReadyForApply())
        entry.apply(code, codeBase);
        else
        unresolvedEntries.add(entry);
    }
    symbolTable = unresolvedEntries;
    }

    // ***** Building of Debug messages ****** 
    
    private static final String[] REGNAME = {
    "ax", "cx", "dx", "bx", "sp", "bp", "si", "di"
    };
    
    public static String regToString(int reg) {
    return "%e" + REGNAME[reg];
    }
    
    public static final int EAX = 0;
    public static final int ECX = 1;
    public static final int EDX = 2;
    public static final int EBX = 3;
    public static final int ESP = 4;
    public static final int EBP = 5;
    public static final int ESI = 6;
    public static final int EDI = 7;
    
    // ***** Exceptions *****
    
    public void addExceptionRangeStart(NCExceptionHandler handler) {
    handler.setRangeStart(ip); 
    }

    public void addExceptionRangeEnd(NCExceptionHandler handler) {
    handler.setRangeEnd(ip); 
    }
    
    /**
     * add a start of an exception handler.
     * @param handler
     */
    public void addExceptionHandler(NCExceptionHandler handler) {
    handler.setHandlerStart(ip); 
    exceptionHandlers.add(handler); 
    }
    
    /**
    return an array of all exception handlers of this 
    method. (these handlers contain the native code indices 
    of the range start, range end and of the handler start 
     * @return
     */
    public NCExceptionHandler[] getExceptionHandlers() {
    NCExceptionHandler[] handlerArray = 
    new NCExceptionHandler[exceptionHandlers.size()]; 
    for(int i = 0; i < exceptionHandlers.size(); i++) {
        handlerArray[i] = (NCExceptionHandler)exceptionHandlers.get(i); 
        //Debug.assert(handlerArray[i].isFinished()); 
    }
    return handlerArray;
    }

    // ***** Printing ***** 
    
    public String getBinaryCodeAsHex(int firstByte, int stopByte) {
    String s = ""; 
    for(int i = firstByte; i < stopByte; i++) {
        String hex = Integer.toHexString(code[i] & 0xff); 
        if (hex.length() == 1) hex = "0" + hex; 
        s = s + hex  + " "; 
    }
    return s; 
    }
    
    // returns a hexdump of the compiled function 
    public String getBinaryCodeAsHex() {
    return getBinaryCodeAsHex(0, ip); 
    }
    
    private String getBinaryCodeAsAssembler(int firstByte, int stopByte) {
    String s = ""; 
    for(int i = firstByte; i < stopByte; i++) {
      String hex = Integer.toHexString(code[i] & 0xff); 
      if (hex.length() == 1) hex = "0" + hex; 
      s = s + hex  + " "; 
    }
    return s; 
    }
    
    // returns a hexdump of the compiled function 
    public String getBinaryCodeAsAssembler() {
    return getBinaryCodeAsAssembler(0, ip); 
    }
    
    public void printInstr(String instr, String arg1, SymbolTableEntryBase arg2) {
    //      currentInstruction = new DisassInstr(ip, instr, arg1, arg2);
        //      instructions.addElement(currentInstruction);
    }

    public void printInstr(String instr, SymbolTableEntryBase arg1, String arg2) {
    //      currentInstruction = new DisassInstr(ip, instr, arg1, arg2);
    //      instructions.addElement(currentInstruction);
    }
    
    public void printInstr(String instr, String arg1, SymbolTableEntryBase arg2, String arg3) {
    //      currentInstruction = new DisassInstr(ip, instr, arg1, arg2, arg3);
    //      instructions.addElement(currentInstruction);
    }

    public void printInstr(String instr) {
    //      currentInstruction = new DisassInstr(ip, instr);
    //      instructions.addElement(currentInstruction);
    }
    
    public void printInstr(String instr, String arg1, String arg2) {
    //      currentInstruction = new DisassInstr(ip, instr, arg1, arg2);
    //      instructions.addElement(currentInstruction);
    }
    
    public void printInstr(String instr, SymbolTableEntryBase arg1) {
        //      currentInstruction = new DisassInstr(ip, instr, arg1);
    //      instructions.addElement(currentInstruction);
    }
    
    public void printJumpTarget(UnresolvedJump entry) {
    //      currentInstruction = new DisassInstr(ip, entry);
    //      instructions.addElement(currentInstruction);
        endInstr();
    }
    
    public void printHexByte(int value) {
    String hex = Integer.toHexString(value & 0xff); 
    if (hex.length() == 1) hex = "0" + hex; 
    Debug.out.print(hex + " "); 
    }    
    
    public void printHexInt(int value) {
    String hex = Long.toHexString(value & 0xffffffffL);         
    Debug.out.print( "00000000".substring(Math.min(hex.length(), 8)) + hex + " "); 
    }
    

    public void printInstructions() {
    //    for(int i=0; i<instructions.size(); i++) {
    //        Debug.out.println(instructions.elementAt(i));
    //    }
    }
    
    public void printGASInstructions(PrintStream out) {
    //    for(int i=0; i<instructions.size(); i++) {
    //        out.println(((DisassInstr)instructions.elementAt(i)).toGASFormat());
    //    }
    }
    
    public void startBC(int bcPosition) {
    bcIndex = bcPosition;
    startIP = ip;
    }
    
    public void endBC() {
    instructionTable.add(new int[] { bcIndex, startIP, ip });    
    }
    
    public ArrayList getInstructionTable() {
    return instructionTable;
    }

}
