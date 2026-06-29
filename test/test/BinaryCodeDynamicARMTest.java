package test;

import jx.compiler.backend.BinaryCodeDynamicARM;
import jx.compiler.backend.Reg;
import org.junit.Test;

import static org.junit.Assert.*;

public class BinaryCodeDynamicARMTest {

    // ----- zero-operand instructions (single byte) -----

    @Test
    public void nopEmits90() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.nop();
        assertEquals("90 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void retEmitsC3() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.ret();
        assertEquals("c3 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void cliEmitsFA() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.cli();
        assertEquals("fa ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushflEmits9C() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pushfl();
        assertEquals("9c ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popflEmits9D() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.popfl();
        assertEquals("9d ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushalEmits60() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pushal();
        assertEquals("60 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popalEmits61() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.popal();
        assertEquals("61 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void wrmsrEmits0F30() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.wrmsr();
        assertEquals("0f 30 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void rdmsrEmits0F32() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.rdmsr();
        assertEquals("0f 32 ", arm.getBinaryCodeAsHex());
    }

    // ----- single-register push/pop (each encodes as 0x50+reg) -----

    @Test
    public void pushEaxEmits50() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.eax);
        assertEquals("50 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEcxEmits51() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.ecx);
        assertEquals("51 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEdxEmits52() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.edx);
        assertEquals("52 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEbxEmits53() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.ebx);
        assertEquals("53 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEspEmits54() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.esp);
        assertEquals("54 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEbpEmits55() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.ebp);
        assertEquals("55 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEsiEmits56() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.esi);
        assertEquals("56 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void pushEdiEmits57() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.edi);
        assertEquals("57 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popEaxEmits58() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pop(Reg.eax);
        assertEquals("58 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popEcxEmits59() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pop(Reg.ecx);
        assertEquals("59 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popEdxEmits5A() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pop(Reg.edx);
        assertEquals("5a ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void popEbxEmits5B() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.pop(Reg.ebx);
        assertEquals("5b ", arm.getBinaryCodeAsHex());
    }

    // ----- call via register (ff /2 r/m) -----

    @Test
    public void callEaxEmitsFFD0() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.call(Reg.eax);
        assertEquals("ff d0 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void callEbxEmitsFFD3() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.call(Reg.ebx);
        assertEquals("ff d3 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void callEcxEmitsFFD1() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.call(Reg.ecx);
        assertEquals("ff d1 ", arm.getBinaryCodeAsHex());
    }

    // ----- mov register to register (8b /r = mov r32, r/m32) -----

    @Test
    public void movEaxToEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(Reg.eax, Reg.ebx);
        assertEquals("8b d8 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void movEbxToEcx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(Reg.ebx, Reg.ecx);
        assertEquals("8b cb ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void movImmToEax() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(0x12345678, Reg.eax);
        assertEquals("b8 78 56 34 12 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void movImmToEcx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(42, Reg.ecx);
        assertEquals("b9 2a 00 00 00 ", arm.getBinaryCodeAsHex());
    }

    // ----- arithmetic -----

    @Test
    public void addOneToEaxAsInc() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(1, Reg.eax);
        assertEquals("40 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void addOneToEbxAsInc() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(1, Reg.ebx);
        assertEquals("43 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void addSmallImmToEax() {
        // eax uses short-form ADD EAX, imm32 (opcode 05)
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(5, Reg.eax);
        assertEquals("05 05 00 00 00 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void addSmallImmToEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(0x7f, Reg.ebx);
        assertEquals("83 c3 7f ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void addLargeImmToEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.add(0x1234, Reg.ebx);
        assertEquals("81 c3 34 12 00 00 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void subSmallFromEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.sub(1, Reg.ebx);
        assertEquals("83 eb 01 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void subSmallFromEcx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.sub(10, Reg.ecx);
        assertEquals("83 e9 0a ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void subLargeFromEcx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.sub(0x1234, Reg.ecx);
        assertEquals("81 e9 34 12 00 00 ", arm.getBinaryCodeAsHex());
    }

    // ----- comparison -----

    @Test
    public void cmpImmSmallEax() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.cmp(1, Reg.eax);
        assertEquals("3d 01 00 00 00 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void cmpImmSmallEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.cmp(0x7f, Reg.ebx);
        assertEquals("83 fb 7f ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void cmpImmLargeEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.cmp(0x1000, Reg.ebx);
        assertEquals("81 fb 00 10 00 00 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void cmpRegToReg() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.cmp(Reg.eax, Reg.ebx);
        assertEquals("3b d8 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void testRegToReg() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.test(Reg.eax, Reg.ebx);
        assertEquals("85 d8 ", arm.getBinaryCodeAsHex());
    }

    // ----- conditional jumps (short-form for 8-bit offsets) -----

    @Test
    public void jeShort() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.je(8);
        assertEquals("74 08 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jneShort() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.jne(-16);
        assertEquals("75 f0 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jsShort() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.js(127);
        assertEquals("78 7f ", arm.getBinaryCodeAsHex());
    }

    // ----- conditional jumps (near-form for 32-bit offsets) -----

    @Test
    public void jeNear() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.je(0x1234);
        assertEquals("0f 84 34 12 00 00 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jneNear() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.jne(0x10000);
        assertEquals("0f 85 00 00 01 00 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void jsNear() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.js(0x1000);
        assertEquals("0f 88 00 10 00 00 ", arm.getBinaryCodeAsHex());
    }

    // ----- unconditional branch -----

    @Test
    public void bShort() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.b(16);
        assertEquals("eb 10 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void bNear() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.b(0x1234);
        assertEquals("e9 34 12 00 00 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void bViaOprReg() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.b(Reg.eax);
        assertEquals("ff e0 ", arm.getBinaryCodeAsHex());
    }

    // ----- interrupt -----

    @Test
    public void intr80() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.intr(0x80);
        assertEquals("cd 80 ", arm.getBinaryCodeAsHex());
    }

    // ----- movzwl (movzx word to long) -----

    @Test
    public void movzwlEaxToEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.movzwl(Reg.eax, Reg.ebx);
        assertEquals("0f b7 d8 ", arm.getBinaryCodeAsHex());
    }

    // ----- setcc -----

    @Test
    public void seteOnEax() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.sete(Reg.eax);
        assertEquals("0f 94 c0 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void setneOnEbx() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.setne(Reg.ebx);
        assertEquals("0f 95 c3 ", arm.getBinaryCodeAsHex());
    }

    // ----- composite: multiple instructions emit correct cumulative bytes -----

    @Test
    public void compositePushPopRet() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.push(Reg.eax);
        arm.push(Reg.ebx);
        arm.pop(Reg.eax);
        arm.ret();
        assertEquals("50 53 58 c3 ", arm.getBinaryCodeAsHex());
    }

    @Test
    public void compositeCallWithMov() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.mov(42, Reg.eax);
        arm.mov(Reg.eax, Reg.ebx);
        arm.call(Reg.ebx);
        assertEquals("b8 2a 00 00 00 8b d8 ff d3 ", arm.getBinaryCodeAsHex());
    }

    // ----- lock prefix -----

    @Test
    public void lockEmitsF0() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.lock();
        assertEquals("f0 ", arm.getBinaryCodeAsHex());
    }
}
