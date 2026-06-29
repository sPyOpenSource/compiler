package test;

import jx.compiler.backend.BinaryCodeDynamicARM;
import jx.compiler.backend.Reg;
import org.junit.Test;

import static org.junit.Assert.*;

public class BinaryCodeDynamicARMTest {

    // ----- zero-operand instructions (4 bytes each) -----

    @Test
    public void nopEmitsArmMovR0R0() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.nop();
        assertEquals("00 00 a0 e1 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void retEmitsMovPCLR() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.ret();
        assertEquals("0e f0 a0 e1 ", arm.getBinaryCodeAsHex());
    }

    @Test(expected = UnsupportedOperationException.class)
    public void cliThrows() {
        new BinaryCodeDynamicARM().cli();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void pushflThrows() {
        new BinaryCodeDynamicARM().pushfl();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void popflThrows() {
        new BinaryCodeDynamicARM().popfl();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void pushalThrows() {
        new BinaryCodeDynamicARM().pushal();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void popalThrows() {
        new BinaryCodeDynamicARM().popal();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void wrmsrThrows() {
        new BinaryCodeDynamicARM().wrmsr();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void rdmsrThrows() {
        new BinaryCodeDynamicARM().rdmsr();
    }

    // ----- single-register push/pop (STMDB/LDMIA for ARM) -----

    @Test
    public void pushEaxEmitsStmdbSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.eax);
        assertEquals("01 00 2d e9 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEcxEmitsStmdbSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.ecx);
        assertEquals("02 00 2d e9 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEdxEmitsStmdbSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.edx);
        assertEquals("04 00 2d e9 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEbxEmitsStmdbSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.ebx);
        assertEquals("08 00 2d e9 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEspEmitsStmdbSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.esp);
        assertEquals("10 00 2d e9 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEbpEmitsStmdbSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.ebp);
        assertEquals("20 00 2d e9 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEsiEmitsStmdbSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.esi);
        assertEquals("40 00 2d e9 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEdiEmitsStmdbSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.edi);
        assertEquals("80 00 2d e9 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popEaxEmitsLdmiaSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pop(Reg.eax);
        assertEquals("01 00 bd e8 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popEcxEmitsLdmiaSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pop(Reg.ecx);
        assertEquals("02 00 bd e8 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popEdxEmitsLdmiaSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pop(Reg.edx);
        assertEquals("04 00 bd e8 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popEbxEmitsLdmiaSP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pop(Reg.ebx);
        assertEquals("08 00 bd e8 ", arm.getBinaryCodeAsHex());
    }

    // ----- call via register (BLX Rm) -----

    @Test
    public void callEaxEmitsBlx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.call(Reg.eax);
        assertEquals("30 ff 2f e1 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void callEbxEmitsBlx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.call(Reg.ebx);
        assertEquals("33 ff 2f e1 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void callEcxEmitsBlx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.call(Reg.ecx);
        assertEquals("31 ff 2f e1 ", arm.getBinaryCodeAsHex());
    }

    // ----- MOV register to register -----

    @Test
    public void movEaxToEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(Reg.eax, Reg.ebx);
        assertEquals("00 30 a0 e1 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void movEbxToEcx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(Reg.ebx, Reg.ecx);
        assertEquals("03 10 a0 e1 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void movImmToEcx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(42, Reg.ecx);
        assertEquals("2a 10 a0 e3 ", arm.getBinaryCodeAsHex());
    }

    @Test(expected = UnsupportedOperationException.class)
    public void movLargeImmThrows() {
        new BinaryCodeDynamicARM().mov(0x12345678, Reg.eax);
    }

    // ----- arithmetic -----

    @Test
    public void addOneToEax() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(1, Reg.eax);
        assertEquals("01 00 80 e2 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void addOneToEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(1, Reg.ebx);
        assertEquals("01 30 83 e2 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void addSmallImmToEax() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(5, Reg.eax);
        assertEquals("05 00 80 e2 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void addSmallImmToEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(0x7f, Reg.ebx);
        assertEquals("7f 30 83 e2 ", arm.getBinaryCodeAsHex());
    }

    @Test(expected = UnsupportedOperationException.class)
    public void addLargeImmThrows() {
        new BinaryCodeDynamicARM().add(0x1234, Reg.ebx);
    }

    @Test
    public void subSmallFromEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.sub(1, Reg.ebx);
        assertEquals("01 30 43 e2 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void subSmallFromEcx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.sub(10, Reg.ecx);
        assertEquals("0a 10 41 e2 ", arm.getBinaryCodeAsHex());
    }

    @Test(expected = UnsupportedOperationException.class)
    public void subLargeFromEcxThrows() {
        new BinaryCodeDynamicARM().sub(0x1234, Reg.ecx);
    }

    // ----- comparison -----

    @Test
    public void cmpImmSmallEax() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.cmp(1, Reg.eax);
        assertEquals("01 00 50 e3 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void cmpImmSmallEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.cmp(0x7f, Reg.ebx);
        assertEquals("7f 00 53 e3 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void cmpRegToReg() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.cmp(Reg.eax, Reg.ebx);
        assertEquals("00 00 53 e1 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void testRegToReg() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.test(Reg.eax, Reg.ebx);
        assertEquals("00 00 13 e0 ", arm.getBinaryCodeAsHex());
    }

    // ----- conditional branches (ARM B{cond} offset) -----

    @Test
    public void jeShort() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.je(8);
        assertEquals("00 00 00 0a ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jneShort() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.jne(-16);
        assertEquals("fa ff ff 1a ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jsShort() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.js(127);
        assertEquals("1d 00 00 4a ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jeNear() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.je(0x1234);
        assertEquals("8b 04 00 0a ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jneNear() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.jne(0x10000);
        assertEquals("fe 3f 00 1a ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jsNear() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.js(0x1000);
        assertEquals("fe 03 00 4a ", arm.getBinaryCodeAsHex());
    }

    // ----- unconditional branch -----

    @Test
    public void bShort() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.b(16);
        assertEquals("02 00 00 ea ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void bNear() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.b(0x1234);
        assertEquals("8b 04 00 ea ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void bViaOprReg() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.b(Reg.eax);
        assertEquals("10 ff 2f e1 ", arm.getBinaryCodeAsHex());
    }

    // ----- interrupt (SWI) -----

    @Test
    public void intr80() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.intr(0x80);
        assertEquals("80 00 00 ef ", arm.getBinaryCodeAsHex());
    }

    // ----- movzwl (UXTH) -----

    @Test
    public void movzwlEaxToEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.movzwl(Reg.eax, Reg.ebx);
        assertEquals("70 30 ff e6 ", arm.getBinaryCodeAsHex());
    }

    // ----- setcc (conditional MOV) -----

    @Test
    public void seteOnEax() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.sete(Reg.eax);
        assertEquals("01 00 a0 03 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void setneOnEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.setne(Reg.ebx);
        assertEquals("01 30 a0 13 ", arm.getBinaryCodeAsHex());
    }

    // ----- composite: multiple instructions emit correct cumulative bytes -----

    @Test
    public void compositePushPopRet() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.eax);
        arm.push(Reg.ebx);
        arm.pop(Reg.eax);
        arm.ret();
        assertEquals("01 00 2d e9 08 00 2d e9 01 00 bd e8 0e f0 a0 e1 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void compositeCallWithMov() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(42, Reg.eax);
        arm.mov(Reg.eax, Reg.ebx);
        arm.call(Reg.ebx);
        assertEquals("2a 00 a0 e3 00 30 a0 e1 33 ff 2f e1 ", arm.getBinaryCodeAsHex());
    }

    @Test(expected = UnsupportedOperationException.class)
    public void lockThrows() {
        new BinaryCodeDynamicARM().lock();
    }
}
