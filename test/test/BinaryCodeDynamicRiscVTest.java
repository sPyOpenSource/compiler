package test;

import jx.compiler.backend.BinaryCodeDynamicRiscV;
import jx.compiler.backend.Reg;
import org.junit.Test;

import static org.junit.Assert.*;

public class BinaryCodeDynamicRiscVTest {

    @Test
    public void nopEmitsAddiX0X0_0() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.nop();
        assertEquals("13 00 00 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void retEmitsJalrX0X1_0() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.ret();
        assertEquals("67 80 00 00 ", rv.getBinaryCodeAsHex());
    }

    @Test(expected = UnsupportedOperationException.class)
    public void cliThrows() {
        new BinaryCodeDynamicRiscV().cli();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void pushflThrows() {
        new BinaryCodeDynamicRiscV().pushfl();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void popflThrows() {
        new BinaryCodeDynamicRiscV().popfl();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void pushalThrows() {
        new BinaryCodeDynamicRiscV().pushal();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void popalThrows() {
        new BinaryCodeDynamicRiscV().popal();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void wrmsrThrows() {
        new BinaryCodeDynamicRiscV().wrmsr();
    }

    @Test(expected = UnsupportedOperationException.class)
    public void rdmsrThrows() {
        new BinaryCodeDynamicRiscV().rdmsr();
    }

    @Test
    public void pushEax() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.push(Reg.eax);
        assertEquals("13 01 c1 ff 23 00 01 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void pushEbx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.push(Reg.ebx);
        assertEquals("13 01 c1 ff 23 00 31 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void popEax() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.pop(Reg.eax);
        assertEquals("03 20 01 00 13 01 41 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void popEbx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.pop(Reg.ebx);
        assertEquals("83 21 01 00 13 01 41 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void movEaxToEbx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.mov(Reg.eax, Reg.ebx);
        assertEquals("93 01 00 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void movEbxToEcx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.mov(Reg.ebx, Reg.ecx);
        assertEquals("93 80 01 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void movImmToEcx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.mov(42, Reg.ecx);
        assertEquals("93 00 a0 02 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void addOneToEax() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.add(1, Reg.eax);
        assertEquals("13 00 10 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void addOneToEbx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.add(1, Reg.ebx);
        assertEquals("93 81 11 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void addSmallImmToEax() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.add(5, Reg.eax);
        assertEquals("13 00 50 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void subSmallFromEbx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.sub(1, Reg.ebx);
        assertEquals("93 81 f1 ff ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void subSmallFromEcx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.sub(10, Reg.ecx);
        assertEquals("93 80 60 ff ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void addRegEaxToEbx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.add(Reg.eax, Reg.ebx);
        assertEquals("b3 81 01 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void subRegEbxFromEcx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.sub(Reg.ebx, Reg.ecx);
        assertEquals("b3 80 30 40 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void cmpImmSmall() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.cmp(1, Reg.eax);
        assertEquals("13 00 f0 ff ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void cmpRegToReg() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.cmp(Reg.eax, Reg.ebx);
        assertEquals("b3 81 01 40 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void testRegToReg() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.test(Reg.eax, Reg.ebx);
        assertEquals("b3 f1 01 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void jeShort() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.je(8);
        assertEquals("63 02 00 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void jneShort() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.jne(-16);
        assertEquals("e3 1c 00 fe ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void jsShort() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.js(127);
        assertEquals("63 4f 00 02 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void jeNear() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.je(0x100);
        assertEquals("63 00 00 08 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void bShort() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.b(16);
        assertEquals("6f 00 80 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void bNear() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.b(0x100);
        assertEquals("6f 00 00 08 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void intr() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.intr(0);
        assertEquals("73 00 00 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void movzwlEaxToEbx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.movzwl(Reg.eax, Reg.ebx);
        assertEquals("93 11 00 00 93 d1 01 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void seteOnEax() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.sete(Reg.eax);
        assertEquals("13 30 10 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void setneOnEbx() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.setne(Reg.ebx);
        assertEquals("b3 31 30 00 ", rv.getBinaryCodeAsHex());
    }

    @Test
    public void compositePushPopRet() {
        BinaryCodeDynamicRiscV rv = new BinaryCodeDynamicRiscV();
        rv.push(Reg.eax);
        rv.push(Reg.ebx);
        rv.pop(Reg.eax);
        rv.ret();
        assertEquals("13 01 c1 ff 23 00 01 00 13 01 c1 ff 23 00 31 00 03 20 01 00 13 01 41 00 67 80 00 00 ", rv.getBinaryCodeAsHex());
    }

    @Test(expected = UnsupportedOperationException.class)
    public void lockThrows() {
        new BinaryCodeDynamicRiscV().lock();
    }
}
