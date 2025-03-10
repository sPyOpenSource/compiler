package jx.compiler.nativecode; 

import java.util.ArrayList; 
import java.util.Enumeration; 
import java.util.Collections;

import jx.classfile.constantpool.ClassCPEntry;
import jx.classfile.constantpool.FieldRefCPEntry;
import jx.classfile.constantpool.InterfaceMethodRefCPEntry;
import jx.classfile.constantpool.MethodRefCPEntry;
import jx.classfile.constantpool.StringCPEntry;

import jx.compiler.CompileException;
import jx.compiler.execenv.BCClass;
import jx.compiler.execenv.BCMethod;
import jx.compiler.execenv.CompilerOptionsInterface;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.ExecEnvironmentInterface;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.imcode.graph.IMOperant;

import jx.compiler.symbols.*;
import jx.zero.Debug;
import sjc.backend.arm.ARM7;

public final class BinaryCodeDynamicARM extends ARM7 implements ExecEnvironmentInterface {
    private final boolean doAlignJumpTargets = false;

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
    private ArrayList<SymbolTableEntryBase> symbolTable;
  
    /** 
    contains the native exception handlers
    */ 
    private final ArrayList<NCExceptionHandler> exceptionHandlers;

    public BinaryCodeDynamicARM() {
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
     * Insert a single byte
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
        insertByte(0xc3);
    }

    /**
       clear interrupt flag (7 clks)
    */
    public void cli() {
        realloc();
        insertByte(0xfa);
    }

    /**
       decrement byte value by 1 (1/3 clks)
     * @param opr
     */
    public void decb(Opr opr) {
        realloc();
        insertByte(0xfe);
        insertModRM(1, opr);
    }
    
    /**
       decrement long value by 1 (1/3 clks)
     * @param ref
     */
    public void decl(Ref ref) {
    realloc();
    insertByte(0xff);
    insertModRM(1, ref);
    }

    /** 
       decrement register by 1 (1 clks)
     * @param reg
     */
    public void decl(Reg reg) {
    realloc();
    insertByte(0x48 + reg.value);
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
    
    public void pushfl() { 
        realloc();
        insertByte(0x9c);
    }

    /**
       push all general registers
       (eax,ecx,edx,ebx,esp,ebp,esi,edi) 
       (5 clks)
    */
    public void pushal() { /* 5 clks */
        realloc();
        insertByte(0x60);
    }

    /** 
       Insert a popl(reg)
     * @param reg
    */
    public void pop(Reg reg) {
        realloc();
        insertByte(0x58 + reg.value);
    }

    /**
       pop stack into eflags register (4 clks)
    */
    public void popfl() {
        realloc();
        insertByte(0x9d);
    }

    /**
       pop all general register
    */
    public void popal() {
        realloc();
        insertByte(0x61);
    }

    /** 
      lock prefix
     */
    public void lock() {
        insertByte(0xf0);
    }

    /**
       Integer Subtraction
     * @param src
     * @param des
     */
    public void sub(Opr src, Reg des) {
        realloc();
        insertByte(0x2b);
        insertModRM(des, src);
    }

    public void sub(Reg src, Ref des) {
        realloc();
        insertByte(0x29);
        insertModRM(src, des);
    }

    public void sub(int immd, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0x2D);
        insertConst4(immd);
    } else if (is8BitValue(immd)) { /* FIXME */
        insertByte(0x83);
        insertModRM(5, des);
        insertByte(immd);   
    } else {
        insertByte(0x81);
        insertModRM(5, des);
        insertConst4(immd);
    }
    }

    public void sub(SymbolTableEntryBase entry, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0x2D);
        insertConst4(entry);
        /* FIXME: no 8 bit support yet 
           } else if (is8BitValue(immd)) {
           insertByte(0x83);
           insertModRM(5,des);
           insertByte(immd);
        */
    } else {
        insertByte(0x81);
        insertModRM(5, des);
        insertConst4(entry);
    }
    }

    /**
       Integer Subtraction with Borrow
     * @param src
     * @param des
     */
    public void sbbl(Opr src, Reg des) {
    realloc();
    insertByte(0x1B);
    insertModRM(des, src);
    }

    public void sbbl(Reg src, Ref des) {
    realloc();
    insertByte(0x19);
    insertModRM(src, des);
    }
    
    /**
     * Integer Unsigned Multiplication of eax (10 clk)
     * @param src
     */
    public void mul(Opr src) {
    realloc();
    insertByte(0xF7);
    insertModRM(4, src);
    }

    /**
     * Integer Signed Multiplication (10 clk)
     * @param src
     * @param des
     */
    public void smull(Opr src, Reg des) {
    realloc();
    insertByte(0x0f);
    insertByte(0xaf);
    insertModRM(des, src);
    }

    /* imull(Reg src, Ref des) no x86-code */

    public void smull(int immd, Reg des) {
    realloc();
    if (is8BitValue(immd)) {
        insertByte(0x6b);
        insertModRM(des, des);
        insertByte(immd);
    } else {
        insertByte(0x69);
        insertModRM(des, des);
        insertConst4(immd);
    }
    }

    public void smull(int immd, Opr src, Reg des) {
    realloc();
    if (is8BitValue(immd)) {
        insertByte(0x6b);
        insertModRM(des, src);
        insertByte(immd);
    } else {
        insertByte(0x69);
        insertModRM(des, src);
        insertConst4(immd);
    }
    }

    public void smull(SymbolTableEntryBase entry, Reg des) {
        realloc();
        insertByte(0x69);
        insertModRM(des, des);
        insertConst4(entry);
    }

    /** 
     * lea Load Effective Address (1 clk)
     * m = index * [0,1,2,4,8] + base + disp
     * base.disp(disp,index,[0,1,2,4,8])
     * @param opr        
     * @param reg        
     */
    public void lea(Opr opr, Reg reg) {
    realloc();
    insertByte(0x8D);
    insertModRM(reg, opr);
    }

    /**
     * SHL/SAL Shift left (1/3 clks)
     * @param immd
     * @param des
     */
    public void lsl(int immd, Opr des) {
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
    public void lsl(Opr des) {
    realloc();
    insertByte(0xd3);
    insertModRM(4, des);
    }

    /**
       SHR Shift right (1/3 clks)
     * @param immd
     * @param des
     */

    public void lsr(int immd, Opr des) {
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

    public void lsr(SymbolTableEntryBase entry, Opr des) {
    realloc();
    insertByte(0xc1);
    insertModRM(5, des);
    insertByte(entry);
    }

    /**
       SHL/SAL Shift left by %cl (4 clks)
     * @param des
     */

    public void shrl(Opr des) {
    realloc();
    insertByte(0xd3);
    insertModRM(5, des);
    }

    /**
       SAR Shift right (signed) (1/3 clks)
     * @param immd
     * @param des
     */

    public void sarl(int immd, Opr des) {
    realloc();
    if (immd == 1) {
        insertByte(0xd1);
        insertModRM(7, des);
    } else {
        insertByte(0xc1);
        insertModRM(7, des);
        insertByte(immd);
    }
    }

    /**
       SAR Shift right by %cl (signed) (4 clks)
     * @param des
     */

    public void sarl(Opr des) {
    realloc();
    insertByte(0xd3);
    insertModRM(7, des);
    }

    /**
       DIV Signed Divide
     * @param src
     */

    public void dvf(Opr src) {
    realloc();
    insertByte(0xf7);
    insertModRM(7, src);
    }

    /**
       Add
     * @param src
     * @param des
     */

    public void add(Opr src, Reg des) {
    realloc();
    insertByte(0x03); 
    insertModRM(des, src);
    }

    public void add(Reg src, Ref des) {
    realloc();
    insertByte(0x01);
    insertModRM(src, des);
    }
    
    public void add(int immd, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (immd == 1)) {
        insertByte(0x40 + des.value);
    } else if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0x05);
        insertConst4(immd);
    } else if (is8BitValue(immd)) { 
        insertByte(0x83);
        insertModRM(0, des);
        insertByte(immd);        
    } else {
        insertByte(0x81);
        insertModRM(0, des);
        insertConst4(immd);
    }
    }

    public void add(SymbolTableEntryBase entry, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0x05);
        insertConst4(entry);
    } else {
        insertByte(0x81);
        insertModRM(0, des);
        insertConst4(entry);
    }
    }
 
    /**
       And (1/3 clks)
     */

    public void and(Opr src, Reg des) {
    realloc();
    insertByte(0x23); 
    insertModRM(des, src);
    }

    public void and(Reg src, Ref des) {
    realloc();
    insertByte(0x21);
    insertModRM(src, des);
    }
    
    public void and(int immd, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0x25);
        insertConst4(immd);
    } else {
        insertByte(0x81);
        insertModRM(4, des);
        insertConst4(immd);
    }
    }

    public void and(SymbolTableEntryBase entry, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0x25);
        insertConst4(entry);
    } else {
        insertByte(0x81);
        insertModRM(4, des);
        insertConst4(entry);
    }
    }

    /**
       Or (1/3 clks)
     */

    public void orr(Opr src, Reg des) {
        realloc();
        insertByte(0x0b); 
        insertModRM(des, src);
    }

    public void orr(Reg src, Ref des) {
        realloc();
        insertByte(0x09);
        insertModRM(src, des);
    }
    
    public void orr(int immd, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0x0d);
        insertConst4(immd);
    } else {
        insertByte(0x81);
        insertModRM(1, des);
        insertConst4(immd);
    }
    }

    public void orr(SymbolTableEntryBase entry, Opr des) {
    realloc();
    if ((des.tag == Opr.REG) && (des.value == 0)) {
        insertByte(0x0d);
        insertConst4(entry);
    } else {
        insertByte(0x81);
        insertModRM(1, des);
        insertConst4(entry);
    }
    }
    /**
       Or (1/3 clks)
     */

    public void xorl(Opr src, Reg des) {
    realloc();
    insertByte(0x33);
    insertModRM(des, src);
    }

    public void xorl(Reg src, Ref des) {
    realloc();
    insertByte(0x31);
    insertModRM(src, des);
    }
    
    public void xorl(int immd, Opr des) {
    realloc();
    if ((des.tag==Opr.REG)&&(des.value==0)) {
        insertByte(0x35);
        insertConst4(immd);
    } else {
        insertByte(0x81);
        insertModRM(6,des);
        insertConst4(immd);
    }
    }

    public void xorl(SymbolTableEntryBase entry, Opr des) {
    realloc();
    if ((des.tag==Opr.REG)&&(des.value==0)) {
        insertByte(0x35);
        insertConst4(entry);
    } else {
        insertByte(0x81);
        insertModRM(6,des);
        insertConst4(entry);
    }
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

    public void neg(Opr opr) {
        realloc();
        insertByte(0xf7);
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

    public void cmp(int immd, Opr des) {
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
    
    public void cmp(SymbolTableEntryBase entry, Opr des) {
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

    /**
     * @param des
     */
    public void sete(Opr des) {
    realloc();
    insertByte(0x0f);
    insertByte(0x94);
    insertModRM(0,des);
    }

    public void setne(Opr des) {
    realloc();
    insertByte(0x0f);
    insertByte(0x95);
    insertModRM(0,des);
    }

    public void intr(int nr) {
    realloc();
    insertByte(0xCD);
    insertByte(nr);
    }


    /**
       Jump short/near if equal
    */

    public void je(int rel) {
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

    public void je(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x84);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Jump short/near if not equal
     */

    public void jne(int rel) {
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

    public void jne(SymbolTableEntryBase entry) {
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

    public void jl(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x8c);
    insertConst4(entry);
    makeRelative(entry);
    }
    
    /**
       Jump short/near if greater or equal
     */

    public void jge(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x8d);
    insertConst4(entry);
    makeRelative(entry);
    }
    
    /**
       Jump short/near if greater
     */
    
    public void jg(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x8f);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Jump short/near if less or equal
     */

    public void jle(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x8e);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Jump short/near if unsigned greater
     */

    public void ja(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x87);
    insertConst4(entry);
    makeRelative(entry);
    }

    /**
       Jump short/near if unsigned greater or equal
     */

    public void jae(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0x0f);
    insertByte(0x83);
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

    public void b(int rel) {
    realloc();
    if (is8BitValue(rel)) {
        /* short */
        insertByte(0xEB);
        insertByte(rel);
    } else {
        /* near */
        insertByte(0xE9);
        insertConst4(rel);
    }
    }

    public void b(Opr des) {
    realloc();
    insertByte(0xff);
    insertModRM(4,des);
    }

    public void b(SymbolTableEntryBase entry) {
    realloc();
    insertByte(0xE9);
    insertConst4(entry);
    makeRelative(entry);
    }

    public void b(Reg index,SymbolTableEntryBase[] tables) {
    UnresolvedJump tableStart = new UnresolvedJump();
    realloc(50 + tables.length * 4);

    insertByte(0xff);
    insertByte(0x24);
    insertByte(0x85 | (index.value << 3));
    insertConst4(tableStart);

    addJumpTarget(tableStart);
        for (SymbolTableEntryBase table : tables) {
            insertConst4(table);
        }
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
       Move with Zero-Extend (short) (3 clks)
     */
    public void movzwl(Opr src, Reg des) {
    realloc();
    insertByte(0x0f);
    insertByte(0xb7);
    insertModRM(des, src);
    }

    /**
       No Operation (1 clks)
     */

    public void nop() {
        realloc();
        insertByte(0x90);
    }

    /**
       write to model specific register (30-45 clks)

       ecx  | register
       =============================
       0x00 | machine check address
       0x01 | machine check type
       =============================
       0x10 | time stamp counter
       0x11 | control and event select
       0x12 | counter 0
       0x13 | counter 1

     */
    
    public void wrmsr() {
    realloc();
    insertByte(0x0f);
    insertByte(0x30);
    }

    /**
       read from model specific register (20-24 clks)

       see wrmsr() for register selection
     */

    public void rdmsr() {
    realloc();
    insertByte(0x0f);
    insertByte(0x32);
    }



    /**
       test - logical compare (1/2 clks)
     */

    public void test(Opr src, Reg des) {
    realloc();
    insertByte(0x85); 
    insertModRM(des, src);
    }

    public void test(int immd, Opr des) {
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
     * Insert a single byte constant 
     */ 
    public void insertConst1(int value) {
    realloc();
    code[ip++] = (byte)value;
    }    
  
    /** 
     * Insert a four byte constant 
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
     * Insert a 0 byte constant with an unknown value. 
     * (contains information about current code position, i.e., a stack map) 
     */ 
    public void insertConst0(SymbolTableEntryBase entry) {
    entry.initNCIndex(ip, 0);  // size is always 0 bytes 
    symbolTable.add(entry);
    }
    
    /** 
     * Initialized the target position of 'jumpObject'. 
     * (Call insertConst4() for corresponding jump instruction) 
     */
    public void addJumpTarget(UnresolvedJump jumpObject) {
    if (doAlignJumpTargets) while ((ip % 4) != 0) nop();
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
     * Make a symbol table entry relative. 
     * If you use insertConst4(), this class assumes that 
     * the value to be inserted is absolute. But if the 
     * inserted value is a jump offset it is relative to 
     * the instruction pointer of the next instruction. 
     * That is what you can tell the compiler with this 
     * method. 
     */ 
    public void makeRelative(SymbolTableEntryBase entry) {
    entry.makeRelative(ip);
    }
    
    /** 
     * Apply all resolveable symbol table entries.
     * (e.g. insert jump offsets ....)
     * After calling this method, the vector 'symbolTable' 
     * contains all symbol table entries that are not resolveable.
     * If you want to install the compiled code after calling this 
     * method, this vector should be empty. 
     * @param codeBase
     */ 
    public void resolve(int codeBase) {
        Enumeration<SymbolTableEntryBase> enume = Collections.enumeration(symbolTable); 
        ArrayList<SymbolTableEntryBase> unresolvedEntries = new ArrayList(); 
        while(enume.hasMoreElements()) {
            SymbolTableEntryBase entry = enume.nextElement(); 
            if (entry.isReadyForApply())
                entry.apply(code, codeBase);
            else
                unresolvedEntries.add(entry);
        }
        symbolTable = unresolvedEntries;
    }
    
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
     * @return an array of all exception handlers of this 
     * method. (these handlers contain the native code indices 
     * of the range start, range end and of the handler start 
     */
    public NCExceptionHandler[] getExceptionHandlers() {
        NCExceptionHandler[] handlerArray = 
        new NCExceptionHandler[exceptionHandlers.size()]; 
        for(int i = 0; i < exceptionHandlers.size(); i++) {
            handlerArray[i] = exceptionHandlers.get(i); 
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
    
    public void printHexByte(int value) {
        String hex = Integer.toHexString(value & 0xff); 
        if (hex.length() == 1) hex = "0" + hex; 
        Debug.out.print(hex + " "); 
    }    
    
    public void printHexInt(int value) {
        String hex = Long.toHexString(value & 0xffffffffL);         
        Debug.out.print( "00000000".substring(Math.min(hex.length(), 8)) + hex + " "); 
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

    @Override
    public void setCodeContainer(CodeContainer container) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void setCurrentlyCompiling(BCClass aClass) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public BCMethod getBCMethod(MethodRefCPEntry methodRefCPEntry) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public boolean doOptimize(int level) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public CompilerOptionsInterface getCompilerOptions() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public int getExtraStackSpace() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeEpilog() throws CompileException {
        super.codeEpilog(null);
    }

    @Override
    public void codeCheckReference(IMNode node, Reg reg, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeCheckMagic(IMNode node, Reg reg, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeCheckDivZero(IMNode node, Reg reg, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeCheckArrayRange(IMNode node, Reg array, int index, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeCheckArrayRange(IMNode node, Reg array, Reg index, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeNewObject(IMNode node, ClassCPEntry classCPEntry, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeCompactNew(IMNode node, ClassCPEntry classCPEntry, MethodRefCPEntry methodRefCPEntry, IMOperant[] args, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeNewArray(IMNode node, int type, IMOperant size, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeNewObjectArray(IMNode node, ClassCPEntry classCPEntry, IMOperant size, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeGetArrayField(IMNode node, Reg array, int datatype, int index, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeGetArrayField(IMNode node, Reg array, int datatype, Reg index, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeGetArrayFieldLong(IMNode node, Reg array, int datatype, Reg index, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codePutArrayField(IMNode node, Reg array, int datatype, int index, Reg value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codePutArrayField(IMNode node, Reg array, int datatype, Reg index, Reg value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeNewMultiArray(IMNode node, ClassCPEntry type, IMOperant[] oprs, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeGetArrayLength(IMNode node, Reg array, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeThrow(IMNode node, int exception, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeThrow(IMNode node, IMOperant exception, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeCheckCast(IMNode node, ClassCPEntry classCPEntry, Reg objRef, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeInstanceOf(IMNode node, ClassCPEntry classCPEntry, Reg objRef, Reg regEAX, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeMonitorEnter(IMNode node, IMOperant obj, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeMonitorLeave(IMNode node, IMOperant obj, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public SymbolTableEntryBase getStringRef(StringCPEntry cpEntry) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeLoadStringRef(StringCPEntry cpEntry, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeGetField(IMNode node, FieldRefCPEntry fieldRefCPEntry, Reg objRef, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeGetStaticField(IMNode node, FieldRefCPEntry fieldRefCpEntry, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codePutField(IMNode node, FieldRefCPEntry fieldRefCPEntry, Reg objRef, Reg value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codePutStaticField(IMNode node, FieldRefCPEntry fieldRefCpEntry, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeGetFieldLong(IMNode node, FieldRefCPEntry fieldRefCPEntry, Reg objRef, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeGetStaticFieldLong(IMNode node, FieldRefCPEntry fieldRefCpEntry, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codePutFieldLong(IMNode node, FieldRefCPEntry fieldRefCPEntry, Reg objRef, Reg64 value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codePutStaticFieldLong(IMNode node, FieldRefCPEntry fieldRefCpEntry, Reg64 value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeLongMul(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
       // insMulLong(IC_AL, IOML_UMULL, result.high.value, result.low.value, lOpr., rOpr.);
    }

    @Override
    public void codeLongDiv(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeLongRem(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeLongShr(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeLongShl(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeLongUShr(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeLongCompare(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeVirtualCall(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg result, int bcPosition) throws CompileException {
        genCallConst(null, 0);
    }

    @Override
    public void codeSpecialCall(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg result, int bcPosition) throws CompileException {
        genCallConst(null, 0);
    }

    @Override
    public void codeInterfaceCall(IMNode node, InterfaceMethodRefCPEntry interfaceRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg result, int bcPosition) throws CompileException {
        genCallConst(null, 0);
    }

    @Override
    public void codeStaticCall(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant[] args, int datatype, Reg result, int bcPosition) throws CompileException {
        genCallConst(null, 0);
    }

    @Override
    public void codeVirtualCallLong(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeSpecialCallLong(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeInterfaceCallLong(IMNode node, InterfaceMethodRefCPEntry interfaceRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeStaticCallLong(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant[] args, int datatype, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void codeStackMap(IMNode node, int InstructionPointer) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public UnresolvedJump createExceptionCall(int exception, int bcPosition) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
}
