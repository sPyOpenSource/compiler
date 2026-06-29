package jx.compiler.backend;

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

public final class BinaryCodeDynamicRiscV implements ExecEnvironmentInterface {
    private final boolean doAlignJumpTargets = false;

    private byte[] code;
    private int ip;

    ArrayList instructionTable = new ArrayList();
    int bcIndex, startIP;

    private static final int INITSIZE  = 100;
    private static final int CHUNKSIZE = 200;

    private ArrayList<SymbolTableEntryBase> symbolTable;

    private final ArrayList<NCExceptionHandler> exceptionHandlers;

    // ----- RV32I opcodes -----
    private static final int OP_IMM   = 0x13;
    private static final int OP       = 0x33;
    private static final int JALR_OP  = 0x67;
    private static final int JAL_OP   = 0x6F;
    private static final int BRANCH   = 0x63;
    private static final int LOAD     = 0x03;
    private static final int STORE    = 0x23;
    private static final int LUI_OP   = 0x37;
    private static final int AUIPC_OP = 0x17;
    private static final int SYSTEM   = 0x73;
    private static final int MUL_OP   = 0x33;
    private static final int FENCE_OP = 0x0F;

    // funct3 values
    private static final int F3_0 = 0x0; // ADD/SUB/ADDI/BEQ/JALR/LW/SW
    private static final int F3_1 = 0x1; // SLL/BEQ/BNE
    private static final int F3_2 = 0x2; // SLT/LW
    private static final int F3_3 = 0x3;
    private static final int F3_4 = 0x4; // XOR/BLT
    private static final int F3_5 = 0x5; // SRL/SRA/BGE
    private static final int F3_6 = 0x6; // OR
    private static final int F3_7 = 0x7; // AND

    // funct7
    private static final int F7_0  = 0x00;
    private static final int F7_20 = 0x20;
    private static final int F7_M  = 0x01; // M extension

    // ----- RISC-V instruction encoding helpers -----

    private void emitWord(int instr) {
        realloc(4);
        code[ip++] = (byte)(instr);
        code[ip++] = (byte)(instr >> 8);
        code[ip++] = (byte)(instr >> 16);
        code[ip++] = (byte)(instr >> 24);
    }

    private int rType(int funct7, int rs2, int rs1, int funct3, int rd, int opcode) {
        return (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode;
    }

    private int iType(int imm12, int rs1, int funct3, int rd, int opcode) {
        return ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode;
    }

    private int sType(int imm12, int rs2, int rs1, int funct3, int opcode) {
        int imm11_5 = (imm12 >> 5) & 0x7F;
        int imm4_0 = imm12 & 0x1F;
        return (imm11_5 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (imm4_0 << 7) | opcode;
    }

    private int bType(int imm13, int rs2, int rs1, int funct3) {
        int b12 = (imm13 >> 12) & 1;
        int b10_5 = (imm13 >> 5) & 0x3F;
        int b4_1 = (imm13 >> 1) & 0xF;
        int b11 = (imm13 >> 11) & 1;
        return (b12 << 31) | (b10_5 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (b4_1 << 8) | (b11 << 7) | BRANCH;
    }

    private int uType(int imm20, int rd, int opcode) {
        return ((imm20 & 0xFFFFF) << 12) | (rd << 7) | opcode;
    }

    private int jType(int imm21, int rd) {
        int j20 = (imm21 >> 20) & 1;
        int j10_1 = (imm21 >> 1) & 0x3FF;
        int j11 = (imm21 >> 11) & 1;
        int j19_12 = (imm21 >> 12) & 0xFF;
        return (j20 << 31) | (j10_1 << 21) | (j11 << 20) | (j19_12 << 12) | (rd << 7) | JAL_OP;
    }

    // ----- check if 12-bit signed immediate -----
    private boolean isImm12(int value) {
        return (value >= -2048 && value <= 2047);
    }

    public BinaryCodeDynamicRiscV() {
        code = new byte[INITSIZE];
        ip = 0;
        symbolTable = new ArrayList();
        exceptionHandlers = new ArrayList();
    }

    public int getCurrentIP() { return ip; }

    public void realloc() {
        realloc(CHUNKSIZE);
    }

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

    public void insertByte(int value) {
        code[ip++] = (byte)value;
    }

    void insertByte(SymbolTableEntryBase entry) {
        realloc();
        entry.initNCIndex(ip, 1);
        symbolTable.add(entry);
        ip += 1;
    }

    // ----- RV32I instruction methods -----

    public void nop() {
        // ADDI x0, x0, 0
        emitWord(iType(0, 0, F3_0, 0, OP_IMM));
    }

    public void ret() {
        // JALR x0, x1, 0
        emitWord(iType(0, 1, F3_0, 0, JALR_OP));
    }

    public void cli() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- push/pop -----
    // RISC-V: push = ADDI sp, sp, -4; SW rs, 0(sp)
    // RISC-V: pop  = LW rd, 0(sp); ADDI sp, sp, 4
    // Using x2 (which maps to Reg.edx) as stack pointer

    public void push(Reg reg) {
        // ADDI x2, x2, -4
        emitWord(iType(-4 & 0xFFF, 2, F3_0, 2, OP_IMM));
        // SW reg, 0(x2)
        emitWord(sType(0, reg.value, 2, F3_0, STORE));
    }

    public void push(Ref ref) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void push(int immd) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void push(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void pushfl() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void pushal() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void pop(Reg reg) {
        // LW reg, 0(x2)
        emitWord(iType(0, 2, F3_2, reg.value, LOAD));
        // ADDI x2, x2, 4
        emitWord(iType(4, 2, F3_0, 2, OP_IMM));
    }

    public void popfl() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void popal() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void lock() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- RV32I register-immediate operation -----

    private void doImm(int opcode3, int immd, Opr des) {
        if (des.tag == Opr.REG) {
            int imm12 = immd;
            emitWord(iType(imm12 & 0xFFF, des.value, opcode3, des.value, OP_IMM));
        }
    }

    // ----- RV32I register-register operation -----

    private void doReg(int funct7, int opcode3, Opr src, Reg des) {
        if (src.tag == Opr.REG) {
            emitWord(rType(funct7, src.value, des.value, opcode3, des.value, OP));
        }
    }

    // ----- SUB (funct7=0x20) -----

    public void sub(Opr src, Reg des) { doReg(F7_20, F3_0, src, des); }

    public void sub(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void sub(int immd, Opr des) {
        // SUB with immediate = ADDI rd, rd, -immd (if encodable)
        if (des.tag == Opr.REG) {
            int neg = -immd;
            if (neg < -2048 || neg > 2047)
                throw new UnsupportedOperationException("Immediate out of range: " + immd);
            emitWord(iType(neg & 0xFFF, des.value, F3_0, des.value, OP_IMM));
        }
    }

    public void sub(SymbolTableEntryBase entry, Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- sbbl (not available on RISC-V) -----

    public void sbbl(Opr src, Reg des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void sbbl(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- mul (RV32M) -----

    public void mul(Opr src) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void smull(Opr src, Reg des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void smull(int immd, Reg des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void smull(int immd, Opr src, Reg des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void smull(SymbolTableEntryBase entry, Reg des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- LEA (not needed on RISC-V) -----

    public void lea(Opr opr, Reg reg) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- shifts -----

    public void lsl(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            // SLLI rd, rd, immd (shamt = lower 5 bits)
            emitWord(iType((immd & 0x1F) << 20 | (0 << 15), des.value, F3_1, des.value, OP_IMM));
        }
    }

    // Note: iType uses lower 20 bits as imm12. For shifts, we need:
    // imm[31:20] = {0, shamt[4:0]} for SLLI
    // The iType function assembles as: (imm12 & 0xFFF) << 20 | rs1 << 15 | ...
    // For SLLI, imm12 should encode: funct7=00, shamt=immd
    // Actually SLLI: imm[31:26] = 0, shamt[5:0] = immd, so imm12 = immd (6-bit shamt in lower bits)
    
    public void lsl(Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void lsr(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            // SRLI rd, rd, immd
            emitWord(iType((immd & 0x1F) << 20 | (0 << 15), des.value, F3_5, des.value, OP_IMM));
        }
    }

    public void lsr(SymbolTableEntryBase entry, Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void shrl(Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void sarl(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            // SRAI rd, rd, immd (funct7 = 0x20 for SRA vs SRL)
            emitWord(iType(0x20 << 20 | (immd & 0x1F) << 20 | (0 << 15), des.value, F3_5, des.value, OP_IMM));
        }
    }

    public void sarl(Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- divide -----

    public void dvf(Opr src) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- ADD -----

    public void add(Opr src, Reg des) { doReg(F7_0, F3_0, src, des); }

    public void add(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void add(int immd, Opr des) { doImm(F3_0, immd, des); }

    public void add(SymbolTableEntryBase entry, Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- AND -----

    public void and(Opr src, Reg des) { doReg(F7_0, F3_7, src, des); }

    public void and(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void and(int immd, Opr des) { doImm(F3_7, immd, des); }

    public void and(SymbolTableEntryBase entry, Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- OR -----

    public void orr(Opr src, Reg des) { doReg(F7_0, F3_6, src, des); }

    public void orr(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void orr(int immd, Opr des) { doImm(F3_6, immd, des); }

    public void orr(SymbolTableEntryBase entry, Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- XOR -----

    public void xorl(Opr src, Reg des) { doReg(F7_0, F3_4, src, des); }

    public void xorl(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void xorl(int immd, Opr des) { doImm(F3_4, immd, des); }

    public void xorl(SymbolTableEntryBase entry, Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- NOT (XOR with -1, i.e., NOT Rd = XORI Rd, Rd, -1) -----

    public void notl(Opr opr) {
        if (opr.tag == Opr.REG) {
            emitWord(iType(0xFFF, opr.value, F3_4, opr.value, OP_IMM));
        }
    }

    // ----- NEG (SUB from 0) -----

    public void neg(Opr opr) {
        if (opr.tag == Opr.REG) {
            // SUB rd, x0, rd
            emitWord(rType(F7_20, opr.value, 0, F3_0, opr.value, OP));
        }
    }

    // ----- ADC (not available on RISC-V) -----

    public void adc(Opr src, Reg des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void adc(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- CMP -----
    // RISC-V has no flags. cmp(src, des) computes des = des - src.
    // Conditional branches (je/jne/js) encode BEQ/BNE/BLT comparing x0 to itself.

    public void cmp(Opr src, Reg des) {
        if (src.tag == Opr.REG) {
            // SUB des, des, src  (compute difference)
            emitWord(rType(F7_20, src.value, des.value, F3_0, des.value, OP));
        }
    }

    public void cmp(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void cmp(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            // ADDI des, des, -immd
            int neg = -immd;
            if (neg < -2048 || neg > 2047)
                throw new UnsupportedOperationException("Immediate out of range: " + immd);
            emitWord(iType(neg & 0xFFF, des.value, F3_0, des.value, OP_IMM));
        }
    }

    public void cmp(SymbolTableEntryBase entry, Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- SETcc (slti/conditional moves) -----
    // sete = SLTI rd, rd, 1 (sets rd=1 if rd<1, i.e., rd was 0 before)
    // But RISC-V has no direct set-on-equal-zero. Approximate with SLTIU.

    public void sete(Opr des) {
        if (des.tag == Opr.REG) {
            // SLTIU rd, rd, 1  → rd = (rd < 1) ? 1 : 0
            // This captures rd == 0 → result 1; rd != 0 → result 0
            emitWord(iType(1, des.value, F3_3, des.value, OP_IMM));
        }
    }

    public void setne(Opr des) {
        if (des.tag == Opr.REG) {
            // SLTU rd, x0, rd  → rd = (0 < rd) ? 1 : 0
            // This captures rd != 0 → result 1; rd == 0 → result 0
            emitWord(rType(F7_0, des.value, 0, F3_3, des.value, OP));
        }
    }

    public void intr(int nr) {
        // ECALL (environment call) for system calls
        // nr is ignored — on real RISC-V, the syscall number is in a register
        emitWord(0x00000073); // ECALL
    }

    // ----- conditional branches -----
    // RISC-V branches compare rs1 and rs2 directly (no flags).
    // Since je/jne/js take only an offset, we compare x0 to x0.

    private void emitBranch(int funct3, int rel) {
        // rel is byte offset from current instruction
        // RISC-V branch offset is PC + sign_extend(imm13 << 1)
        // We encode rel/2 in the immediate field
        // But rel might not be even... truncate
        int enc = rel >> 1;
        emitWord(bType(enc, 0, 0, funct3));
    }

    public void je(int rel) { emitBranch(F3_0, rel); }     // BEQ x0, x0, offset

    public void je(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void jne(int rel) { emitBranch(F3_1, rel); }    // BNE x0, x0, offset

    public void jne(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void jnae(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void jl(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void jge(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void jg(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void jle(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void ja(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void jae(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void js(int rel) { emitBranch(F3_4, rel); }     // BLT x0, x0, offset

    // ----- unconditional branch -----

    public void b(int rel) {
        // JAL x0, offset (pc-relative jump, like ARM B)
        int enc = rel >> 1;
        emitWord(jType(enc, 0));
    }

    public void b(Opr des) {
        if (des.tag == Opr.REG) {
            // JALR x0, reg, 0
            emitWord(iType(0, des.value, F3_0, 0, JALR_OP));
        }
    }

    public void b(SymbolTableEntryBase entry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void b(Reg index, SymbolTableEntryBase[] tables) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- MOV -----

    public void mov(Opr src, Reg des) {
        if (src.tag == Opr.REG) {
            // ADDI rd, rs, 0  (register copy)
            emitWord(iType(0, src.value, F3_0, des.value, OP_IMM));
        }
    }

    public void mov(Reg src, Ref des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void mov(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            if (immd >= -2048 && immd <= 2047) {
                // ADDI rd, x0, imm12
                emitWord(iType(immd & 0xFFF, 0, F3_0, des.value, OP_IMM));
            } else {
                // LUI + ADDI for larger immediates
                int upper = (immd >> 12) + ((immd >> 11) & 1); // round
                // Actually, proper lui+addi for any 32-bit immediate:
                int hi = (immd + 0x800) >> 12;
                int lo = immd - (hi << 12);
                if (lo < -2048 || lo > 2047) {
                    // If the lower 12 bits overflow into sign bit, adjust
                    hi = immd >> 12;
                    lo = immd - (hi << 12);
                }
                emitWord(uType(hi & 0xFFFFF, des.value, LUI_OP));
                if (lo != 0) {
                    emitWord(iType(lo & 0xFFF, des.value, F3_0, des.value, OP_IMM));
                }
            }
        }
    }

    public void mov(SymbolTableEntryBase entry, Opr des) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- MOVZWL (zero-extend halfword) -----

    public void movzwl(Opr src, Reg des) {
        if (src.tag == Opr.REG) {
            // SLLI rd, rs, 16; SRLI rd, rd, 16  (zero-extend via shift)
            emitWord(iType((16 & 0x1F) << 20 | (0 << 15), src.value, F3_1, des.value, OP_IMM));
            emitWord(iType((16 & 0x1F) << 20 | (0 << 15), des.value, F3_5, des.value, OP_IMM));
        }
    }

    // ----- wrmsr / rdmsr (not available) -----

    public void wrmsr() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    public void rdmsr() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    // ----- TEST (AND, set flags) -----
    // RISC-V: AND x0, rs1, rs2 — computes AND but discards result (x0 is hardwired 0)
    // Better: AND x_des, des, src — computes AND and stores in des

    public void test(Opr src, Reg des) {
        if (src.tag == Opr.REG) {
            // AND des, des, src
            emitWord(rType(F7_0, src.value, des.value, F3_7, des.value, OP));
        }
    }

    public void test(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            // ANDI des, des, imm12
            emitWord(iType(immd & 0xFFF, des.value, F3_7, des.value, OP_IMM));
        }
    }

    // ----- data constants -----

    public void insertConst1(int value) {
        realloc();
        code[ip++] = (byte)value;
    }

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

    public void insertConst4(SymbolTableEntryBase entry) {
        realloc();
        entry.initNCIndex(ip, 4);
        symbolTable.add(entry);
        ip += 4;
    }

    public boolean is8BitValue(int value) {
        if (value < 0) value = -value;
        return ((value >> 7) == 0);
    }

    public void insertConst0(SymbolTableEntryBase entry) {
        entry.initNCIndex(ip, 0);
        symbolTable.add(entry);
    }

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
        symbolTable.add(handler);
        handler.setTargetNCIndex(ip);
    }

    public void makeRelative(SymbolTableEntryBase entry) {
        entry.makeRelative(ip);
    }

    public void resolve(int codeBase) {
        Enumeration<SymbolTableEntryBase> enume = Collections.enumeration(symbolTable);
        ArrayList<SymbolTableEntryBase> unresolvedEntries = new ArrayList();
        while (enume.hasMoreElements()) {
            SymbolTableEntryBase entry = enume.nextElement();
            if (entry.isReadyForApply())
                entry.apply(code, codeBase);
            else
                unresolvedEntries.add(entry);
        }
        symbolTable = unresolvedEntries;
    }

    // ----- Exceptions -----

    public void addExceptionRangeStart(NCExceptionHandler handler) {
        handler.setRangeStart(ip);
    }

    public void addExceptionRangeEnd(NCExceptionHandler handler) {
        handler.setRangeEnd(ip);
    }

    public void addExceptionHandler(NCExceptionHandler handler) {
        handler.setHandlerStart(ip);
        exceptionHandlers.add(handler);
    }

    public NCExceptionHandler[] getExceptionHandlers() {
        NCExceptionHandler[] handlerArray =
            new NCExceptionHandler[exceptionHandlers.size()];
        for (int i = 0; i < exceptionHandlers.size(); i++) {
            handlerArray[i] = exceptionHandlers.get(i);
        }
        return handlerArray;
    }

    // ----- Printing -----

    public String getBinaryCodeAsHex(int firstByte, int stopByte) {
        String s = "";
        for (int i = firstByte; i < stopByte; i++) {
            String hex = Integer.toHexString(code[i] & 0xff);
            if (hex.length() == 1) hex = "0" + hex;
            s = s + hex + " ";
        }
        return s;
    }

    public String getBinaryCodeAsHex() {
        return getBinaryCodeAsHex(0, ip);
    }

    private String getBinaryCodeAsAssembler(int firstByte, int stopByte) {
        String s = "";
        for (int i = firstByte; i < stopByte; i++) {
            String hex = Integer.toHexString(code[i] & 0xff);
            if (hex.length() == 1) hex = "0" + hex;
            s = s + hex + " ";
        }
        return s;
    }

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
        Debug.out.print("00000000".substring(Math.min(hex.length(), 8)) + hex + " ");
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
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void setCurrentlyCompiling(BCClass aClass) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public BCMethod getBCMethod(MethodRefCPEntry methodRefCPEntry) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public boolean doOptimize(int level) {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public CompilerOptionsInterface getCompilerOptions() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public int getExtraStackSpace() {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeProlog() throws CompileException {
    }

    @Override
    public void codeEpilog() throws CompileException {
    }

    @Override
    public void codeCheckReference(IMNode node, Reg reg, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeCheckMagic(IMNode node, Reg reg, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeCheckDivZero(IMNode node, Reg reg, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeCheckArrayRange(IMNode node, Reg array, int index, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeCheckArrayRange(IMNode node, Reg array, Reg index, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeNewObject(IMNode node, ClassCPEntry classCPEntry, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeCompactNew(IMNode node, ClassCPEntry classCPEntry, MethodRefCPEntry methodRefCPEntry, IMOperant[] args, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeNewArray(IMNode node, int type, IMOperant size, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeNewObjectArray(IMNode node, ClassCPEntry classCPEntry, IMOperant size, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeGetArrayField(IMNode node, Reg array, int datatype, int index, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeGetArrayField(IMNode node, Reg array, int datatype, Reg index, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeGetArrayFieldLong(IMNode node, Reg array, int datatype, Reg index, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codePutArrayField(IMNode node, Reg array, int datatype, int index, Reg value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codePutArrayField(IMNode node, Reg array, int datatype, Reg index, Reg value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeNewMultiArray(IMNode node, ClassCPEntry type, IMOperant[] oprs, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeGetArrayLength(IMNode node, Reg array, Reg result) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeThrow(IMNode node, int exception, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeThrow(IMNode node, IMOperant exception, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeCheckCast(IMNode node, ClassCPEntry classCPEntry, Reg objRef, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeInstanceOf(IMNode node, ClassCPEntry classCPEntry, Reg objRef, Reg regEAX, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeMonitorEnter(IMNode node, IMOperant obj, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeMonitorLeave(IMNode node, IMOperant obj, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public SymbolTableEntryBase getStringRef(StringCPEntry cpEntry) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeLoadStringRef(StringCPEntry cpEntry, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeGetField(IMNode node, FieldRefCPEntry fieldRefCPEntry, Reg objRef, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeGetStaticField(IMNode node, FieldRefCPEntry fieldRefCpEntry, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codePutField(IMNode node, FieldRefCPEntry fieldRefCPEntry, Reg objRef, Reg value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codePutStaticField(IMNode node, FieldRefCPEntry fieldRefCpEntry, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeGetFieldLong(IMNode node, FieldRefCPEntry fieldRefCPEntry, Reg objRef, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeGetStaticFieldLong(IMNode node, FieldRefCPEntry fieldRefCpEntry, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codePutFieldLong(IMNode node, FieldRefCPEntry fieldRefCPEntry, Reg objRef, Reg64 value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codePutStaticFieldLong(IMNode node, FieldRefCPEntry fieldRefCpEntry, Reg64 value, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeLongMul(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
    }

    @Override
    public void codeLongDiv(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeLongRem(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeLongShr(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeLongShl(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeLongUShr(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeLongCompare(IMNode node, IMOperant lOpr, IMOperant rOpr, Reg result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeVirtualCall(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg result, int bcPosition) throws CompileException {
    }

    @Override
    public void codeSpecialCall(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg result, int bcPosition) throws CompileException {
    }

    @Override
    public void codeInterfaceCall(IMNode node, InterfaceMethodRefCPEntry interfaceRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg result, int bcPosition) throws CompileException {
    }

    @Override
    public void codeStaticCall(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant[] args, int datatype, Reg result, int bcPosition) throws CompileException {
    }

    @Override
    public void codeVirtualCallLong(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeSpecialCallLong(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeInterfaceCallLong(IMNode node, InterfaceMethodRefCPEntry interfaceRefCPEntry, IMOperant obj, IMOperant[] args, int datatype, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeStaticCallLong(IMNode node, MethodRefCPEntry methodRefCPEntry, IMOperant[] args, int datatype, Reg64 result, int bcPosition) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public void codeStackMap(IMNode node, int InstructionPointer) throws CompileException {
        throw new UnsupportedOperationException("Not supported yet.");
    }

    @Override
    public UnresolvedJump createExceptionCall(int exception, int bcPosition) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
}
