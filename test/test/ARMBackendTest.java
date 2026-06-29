package test;

import jx.compiler.backend.BinaryCodeDynamicARM;
import org.junit.Test;

import static org.junit.Assert.*;

public class ARMBackendTest {

    @Test
    public void testConstructorInitializesIP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        assertEquals(0, arm.getCurrentIP());
    }

    @Test
    public void testInsertConst1IncrementsIP() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.insertConst1(0xE0);
        assertEquals(1, arm.getCurrentIP());
    }

    @Test
    public void testInsertConst1ByteOrder() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.insertConst1(0xAB);
        String hex = arm.getBinaryCodeAsHex();
        assertTrue(hex.startsWith("ab") || hex.startsWith("AB"));
    }

    @Test
    public void testInsertConst4IncrementsIPBy4() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.insertConst4(0xDEADBEEF);
        assertEquals(4, arm.getCurrentIP());
    }

    @Test
    public void testInsertConst4LittleEndian() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.insertConst4(0x12345678);
        String hex = arm.getBinaryCodeAsHex();
        assertTrue(hex.contains("78"));
        assertTrue(hex.contains("56"));
        assertTrue(hex.contains("34"));
        assertTrue(hex.contains("12"));
    }

    @Test
    public void testMultipleInserts() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.insertConst1(0x01);
        arm.insertConst1(0x02);
        arm.insertConst1(0x03);
        assertEquals(3, arm.getCurrentIP());
    }

    @Test
    public void testGetBinaryCodeAsHexEmpty() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        assertEquals("", arm.getBinaryCodeAsHex().trim());
    }

    @Test
    public void testGetBinaryCodeAsHexWithRange() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.insertConst1(0xAA);
        arm.insertConst1(0xBB);
        arm.insertConst1(0xCC);
        arm.insertConst1(0xDD);
        String hex = arm.getBinaryCodeAsHex(1, 3);
        assertTrue(hex.contains("bb") || hex.contains("BB"));
        assertTrue(hex.contains("cc") || hex.contains("CC"));
    }

    @Test
    public void testIs8BitValuePositive() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        assertTrue(arm.is8BitValue(0));
        assertTrue(arm.is8BitValue(1));
        assertTrue(arm.is8BitValue(127));
    }

    @Test
    public void testInstructionTableSize() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.startBC(1);
        arm.insertConst1(0x00);
        arm.endBC();
        arm.startBC(2);
        arm.insertConst1(0x01);
        arm.endBC();
        assertEquals(2, arm.getInstructionTable().size());
    }

    @Test
    public void testNopInsertsOneByte() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.nop();
        assertEquals(1, arm.getCurrentIP());
    }

    @Test
    public void testGetBinaryCodeAsAssembler() {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        arm.insertConst1(0xE1);
        arm.insertConst1(0xA2);
        String asm = arm.getBinaryCodeAsAssembler();
        assertFalse(asm.isEmpty());
    }

}
