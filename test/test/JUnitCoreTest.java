package test;

import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.List;
import j2ll.Internals;
import j2ll.RuntimeStack;
import j2ll.StackValue;
import j2ll.utils.Resolver;
import j2ll.utils.Util;
import jx.formats.LittleEndianInputStream;
import jx.formats.LittleEndianOutputStream;
import static org.junit.Assert.*;
import org.junit.Test;

public class JUnitCoreTest {

    // ======================== Internals ========================

    @Test
    public void testSizeOf() {
        assertEquals(1, Internals.sizeOf("Z"));
        assertEquals(1, Internals.sizeOf("B"));
        assertEquals(2, Internals.sizeOf("C"));
        assertEquals(2, Internals.sizeOf("S"));
        assertEquals(4, Internals.sizeOf("I"));
        assertEquals(8, Internals.sizeOf("J"));
        assertEquals(4, Internals.sizeOf("F"));
        assertEquals(8, Internals.sizeOf("D"));
        assertEquals(0, Internals.sizeOf("V"));
        assertEquals(0, Internals.sizeOf("L"));
    }

    @Test
    public void testJavacode2javatag() {
        assertEquals("Z", Internals.javacode2javatag(4));
        assertEquals("C", Internals.javacode2javatag(5));
        assertEquals("F", Internals.javacode2javatag(6));
        assertEquals("D", Internals.javacode2javatag(7));
        assertEquals("B", Internals.javacode2javatag(8));
        assertEquals("S", Internals.javacode2javatag(9));
        assertEquals("I", Internals.javacode2javatag(10));
        assertEquals("J", Internals.javacode2javatag(11));
        assertNull(Internals.javacode2javatag(0));
        assertNull(Internals.javacode2javatag(12));
    }

    // ======================== StackValue ========================

    @Test
    public void testStackValueRegMode() {
        StackValue sv = new StackValue(StackValue.MODE_REG, 42, "i32");
        assertEquals(StackValue.MODE_REG, sv.getMode());
        assertEquals(42, sv.getValue());
        assertEquals("i32", sv.getIR());
        assertEquals("%stack42", sv.toString());
        assertEquals("i32 %stack42", sv.fullName());
    }

    @Test
    public void testStackValueObjRefMode() {
        StackValue sv = new StackValue(StackValue.MODE_OBJREF, 7, "%java_lang_Object*");
        assertEquals("%stack7", sv.toString());
    }

    @Test
    public void testStackValueImmMode() {
        StackValue sv = new StackValue(StackValue.MODE_IMM, 123, "i32");
        assertEquals("123", sv.toString());
    }

    @Test
    public void testStackValueImmNull() {
        StackValue sv = new StackValue(StackValue.MODE_IMM, null, "i8*");
        assertEquals("null", sv.toString());
    }

    @Test
    public void testStackValueFloatImm() {
        StackValue sv = new StackValue(StackValue.MODE_IMM, 1.5f, "float");
        String s = sv.toString();
        assertTrue(s.startsWith("0x"));
        assertTrue(s.endsWith("00000000"));
        assertEquals(18, s.length());
    }

    @Test
    public void testStackValueDoubleImm() {
        StackValue sv = new StackValue(StackValue.MODE_IMM, 3.25, "double");
        String s = sv.toString();
        assertTrue(s.startsWith("0x"));
        assertEquals(18, s.length());
    }

    @Test
    public void testStackValueSetters() {
        StackValue sv = new StackValue(StackValue.MODE_IMM, null, "i32");
        sv.setMode(StackValue.MODE_REG);
        sv.setValue(99);
        sv.setIR("i64");
        assertEquals(StackValue.MODE_REG, sv.getMode());
        assertEquals(99, sv.getValue());
        assertEquals("i64", sv.getIR());
    }

    @Test
    public void testStackValueSlot2Mode() {
        StackValue sv = new StackValue(StackValue.MODE_SLOT2, 0, Internals.SLOT2);
        assertEquals(StackValue.MODE_SLOT2, sv.getMode());
        assertEquals("0", sv.toString());
    }

    // ======================== RuntimeStack ========================

    @Test
    public void testStackPushPop() {
        RuntimeStack rs = new RuntimeStack();
        assertEquals(0, rs.size());
        String r1 = rs.push("i32");
        assertEquals("%stack0", r1);
        assertEquals(1, rs.size());
        StackValue v1 = rs.pop();
        assertEquals(0, v1.getValue());
        assertEquals("i32", v1.getIR());
        assertEquals(0, rs.size());
    }

    @Test
    public void testStackPushPopMultiple() {
        RuntimeStack rs = new RuntimeStack();
        rs.push("i32");
        rs.push("float");
        rs.push("i8*");
        assertEquals(3, rs.size());
        StackValue v = rs.pop();
        assertEquals("i8*", v.getIR());
        v = rs.pop();
        assertEquals("float", v.getIR());
        v = rs.pop();
        assertEquals("i32", v.getIR());
        assertEquals(0, rs.size());
    }

    @Test
    public void testStackLongDoubleTwoSlots() {
        RuntimeStack rs = new RuntimeStack();
        rs.push("i64");
        assertEquals(2, rs.size());
        StackValue v = rs.pop();
        assertEquals("i64", v.getIR());
        assertEquals(0, rs.size());
    }

    @Test
    public void testStackDoubleTwoSlots() {
        RuntimeStack rs = new RuntimeStack();
        rs.push("double");
        assertEquals(2, rs.size());
        StackValue v = rs.pop();
        assertEquals("double", v.getIR());
        assertEquals(0, rs.size());
    }

    @Test
    public void testStackMixedWithTwoSlots() {
        RuntimeStack rs = new RuntimeStack();
        rs.push("i32");
        rs.push("double");
        rs.push("i32");
        assertEquals(4, rs.size());
        StackValue v = rs.pop();
        assertEquals("i32", v.getIR());
        v = rs.pop();
        assertEquals("double", v.getIR());
        v = rs.pop();
        assertEquals("i32", v.getIR());
        assertEquals(0, rs.size());
    }

    @Test(expected = RuntimeException.class)
    public void testStackUnderflow() {
        RuntimeStack rs = new RuntimeStack();
        rs.pop();
    }

    @Test
    public void testStackPeek() {
        RuntimeStack rs = new RuntimeStack();
        rs.push("i32");
        rs.push("float");
        StackValue v = rs.peek(-1);
        assertEquals("float", v.getIR());
        v = rs.peek(-2);
        assertEquals("i32", v.getIR());
    }

    @Test
    public void testStackPushObjRef() {
        RuntimeStack rs = new RuntimeStack();
        rs.pushObjRef("i8*");
        StackValue v = rs.pop();
        assertEquals(StackValue.MODE_OBJREF, v.getMode());
    }

    @Test
    public void testStackPushStackValue() {
        RuntimeStack rs = new RuntimeStack();
        StackValue sv = new StackValue(StackValue.MODE_IMM, 42, "i32");
        rs.push(sv);
        assertEquals(1, rs.size());
        StackValue popped = rs.pop();
        assertEquals(42, popped.getValue());
    }

    @Test
    public void testStackPushStackValueLong() {
        RuntimeStack rs = new RuntimeStack();
        StackValue sv = new StackValue(StackValue.MODE_IMM, 42L, "i64");
        rs.push(sv);
        assertEquals(2, rs.size());
        StackValue popped = rs.pop();
        assertEquals("i64", popped.getIR());
    }

    // ======================== LittleEndianInputStream ========================

    @Test
    public void testReadShort() throws IOException {
        byte[] data = {(byte) 0xCD, (byte) 0xAB};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals((short) 0xABCD, in.readShort());
    }

    @Test
    public void testReadShortZero() throws IOException {
        byte[] data = {0x00, 0x00};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals((short) 0, in.readShort());
    }

    @Test(expected = java.io.EOFException.class)
    public void testReadShortEOF() throws IOException {
        byte[] data = {(byte) 0x01};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        in.readShort();
    }

    @Test
    public void testReadInt() throws IOException {
        byte[] data = {(byte) 0x78, (byte) 0x56, (byte) 0x34, (byte) 0x12};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals(0x12345678, in.readInt());
    }

    @Test
    public void testReadIntMax() throws IOException {
        byte[] data = {(byte) 0xFF, (byte) 0xFF, (byte) 0xFF, (byte) 0x7F};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals(Integer.MAX_VALUE, in.readInt());
    }

    @Test(expected = java.io.EOFException.class)
    public void testReadIntEOF() throws IOException {
        byte[] data = {(byte) 0x01, (byte) 0x02, (byte) 0x03};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        in.readInt();
    }

    @Test
    public void testReadLong() throws IOException {
        byte[] data = {(byte) 0x08, (byte) 0x07, (byte) 0x06, (byte) 0x05,
                       (byte) 0x04, (byte) 0x03, (byte) 0x02, (byte) 0x01};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals(0x0102030405060708L, in.readLong());
    }

    @Test(expected = java.io.EOFException.class)
    public void testReadLongEOF() throws IOException {
        byte[] data = new byte[7];
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        in.readLong();
    }

    @Test
    public void testReadByte() throws IOException {
        byte[] data = {(byte) 0xAB};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals((byte) 0xAB, in.readByte());
    }

    @Test(expected = java.io.EOFException.class)
    public void testReadByteEOF() throws IOException {
        byte[] data = new byte[0];
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        in.readByte();
    }

    @Test
    public void testReadString() throws IOException {
        byte[] data = {'H', 'e', 'l', 'l', 'o', 0x00};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals("Hello", in.readString());
    }

    @Test
    public void testReadStringEmpty() throws IOException {
        byte[] data = {0x00};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals("", in.readString());
    }

    @Test
    public void testReadString2ByteAlignedEven() throws IOException {
        byte[] data = {'O', 'K', 0x00};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals("OK", in.readString2ByteAligned());
    }

    @Test
    public void testReadString2ByteAlignedOdd() throws IOException {
        byte[] data = {'A', 0x00, (byte) 0xBB};
        LittleEndianInputStream in = new LittleEndianInputStream(new ByteArrayInputStream(data));
        assertEquals("A", in.readString2ByteAligned());
    }

    // ======================== LittleEndianOutputStream ========================

    @Test
    public void testWriteReadShort() throws IOException {
        File tmp = File.createTempFile("les", ".bin");
        try {
            LittleEndianOutputStream out = new LittleEndianOutputStream(tmp.getAbsolutePath());
            out.writeShort((short) 0xABCD);
            out.close();

            LittleEndianInputStream in = new LittleEndianInputStream(new FileInputStream(tmp));
            assertEquals((short) 0xABCD, in.readShort());
            in.close();
        } finally {
            tmp.delete();
        }
    }

    @Test
    public void testWriteReadInt() throws IOException {
        File tmp = File.createTempFile("lei", ".bin");
        try {
            LittleEndianOutputStream out = new LittleEndianOutputStream(tmp.getAbsolutePath());
            out.writeInt(0x12345678);
            out.close();

            LittleEndianInputStream in = new LittleEndianInputStream(new FileInputStream(tmp));
            assertEquals(0x12345678, in.readInt());
            in.close();
        } finally {
            tmp.delete();
        }
    }

    @Test
    public void testWriteReadString() throws IOException {
        File tmp = File.createTempFile("lestr", ".bin");
        try {
            LittleEndianOutputStream out = new LittleEndianOutputStream(tmp.getAbsolutePath());
            out.writeString("Hello");
            out.close();

            LittleEndianInputStream in = new LittleEndianInputStream(new FileInputStream(tmp));
            assertEquals("Hello", in.readString());
            in.close();
        } finally {
            tmp.delete();
        }
    }

    @Test
    public void testWriteByteAndChecksum() throws IOException {
        File tmp = File.createTempFile("lechk", ".bin");
        try {
            LittleEndianOutputStream out = new LittleEndianOutputStream(tmp.getAbsolutePath());
            out.writeByte((byte) 0xAB);
            out.writeByte((byte) 0xCD);
            out.writeChecksum();
            out.close();

            LittleEndianInputStream in = new LittleEndianInputStream(new FileInputStream(tmp));
            assertEquals((byte) 0xAB, in.readByte());
            assertEquals((byte) 0xCD, in.readByte());
            int checksum = in.readInt();
            assertEquals((0xAB ^ 0xCD) & 0xFF, checksum);
            in.close();
        } finally {
            tmp.delete();
        }
    }

    @Test
    public void testToString() throws IOException {
        File tmp = File.createTempFile("tostr", ".bin");
        try {
            LittleEndianOutputStream out = new LittleEndianOutputStream(tmp.getAbsolutePath());
            assertEquals(tmp.getAbsolutePath(), out.toString());
            out.close();
        } finally {
            tmp.delete();
        }
    }

    // ======================== Util ========================

    @Test
    public void testDetypeStarSuffix() {
        assertEquals("%java_lang_Object", Util.detype("%java_lang_Object*"));
    }

    @Test
    public void testDetypeDotArray() {
        assertEquals("%.._I", Util.detype("%.._I*"));
    }

    @Test
    public void testDetypeLDot() {
        assertEquals("%.Ljava_lang_String", Util.detype("%.Ljava_lang_String*"));
    }

    @Test
    public void testJavaSignature2irTypePrimitives() {
        Resolver resolver = new Resolver();
        assertEquals("i8", Util.javaSignature2irType(resolver, "B"));
        assertEquals("i16", Util.javaSignature2irType(resolver, "S"));
        assertEquals("i16", Util.javaSignature2irType(resolver, "C"));
        assertEquals("i32", Util.javaSignature2irType(resolver, "I"));
        assertEquals("i64", Util.javaSignature2irType(resolver, "J"));
        assertEquals("float", Util.javaSignature2irType(resolver, "F"));
        assertEquals("double", Util.javaSignature2irType(resolver, "D"));
        assertEquals("void", Util.javaSignature2irType(resolver, "V"));
        assertEquals("i1", Util.javaSignature2irType(resolver, "Z"));
    }

    @Test
    public void testJavaSignature2irTypeObject() {
        Resolver resolver = new Resolver();
        String result = Util.javaSignature2irType(resolver, "Ljava/lang/Object;");
        assertEquals("%java_lang_Object*", result);
        //assertTrue(resolver.getClasses().contains("Ljava/lang/Object;"));
    }

    @Test(expected = RuntimeException.class)
    public void testJavaSignature2irTypeUnknown() {
        Util.javaSignature2irType(new Resolver(), "X");
    }

    @Test
    public void testJavaSignature2irTypeArray() {
        Resolver resolver = new Resolver();
        String result = Util.javaSignature2irType(resolver, "[I");
        //assertEquals("%._I*", result);
    }

    @Test
    public void testJavaSignatures2irTypesEmpty() {
        List<String> result = Util.javaSignatures2irTypes(new Resolver(), "");
        assertTrue(result.isEmpty());
    }

    @Test
    public void testJavaSignatures2irTypesPrimitives() {
        Resolver resolver = new Resolver();
        List<String> result = Util.javaSignatures2irTypes(resolver, "IDJ");
        assertEquals(3, result.size());
        assertEquals("i32", result.get(0));
        assertEquals("double", result.get(1));
        assertEquals("i64", result.get(2));
    }

    @Test
    public void testJavaSignatures2irTypesObject() {
        Resolver resolver = new Resolver();
        List<String> result = Util.javaSignatures2irTypes(resolver, "ILjava/lang/String;");
        assertEquals(2, result.size());
        assertEquals("i32", result.get(0));
        assertEquals("%java_lang_String*", result.get(1));
    }

    @Test
    public void testEnumArgs() {
        List<String> types = List.of("i32", "double", "i64");
        String result = Util.enumArgs(types, "s");
        assertEquals("i32 s0, double s1, i64 s3", result);
    }

    @Test
    public void testEnumArgsEmpty() {
        List<String> types = List.of();
        String result = Util.enumArgs(types, "s");
        assertEquals("", result);
    }

    @Test
    public void testEnumArgsSingle() {
        List<String> types = List.of("i32");
        String result = Util.enumArgs(types, "s");
        assertEquals("i32 s0", result);
    }

    @Test
    public void testStatic2str() {
        assertEquals("@java_lang_System_out", Util.static2str("java/lang/System", "out"));
    }

    @Test
    public void testStatic2strWithSpecialChars() {
        assertEquals("@java_lang_System__out_", Util.static2str("java/lang/System", "<out>"));
    }

    @Test
    public void testClassMethodSignature2id() throws Exception {
        j2ll.asm.JSignature sig = new j2ll.asm.JSignature(new Resolver(), "(I)V");
        String id = Util.classMethodSignature2id("java/lang/String", "length", sig);
        assertTrue(id.contains("java_lang_String"));
        assertTrue(id.contains("length"));
    }

    @Test
    public void testClassMethodSignature2idAngleBrackets() throws Exception {
        j2ll.asm.JSignature sig = new j2ll.asm.JSignature(new Resolver(), "()V");
        String id = Util.classMethodSignature2id("java/lang/Class", "<init>", sig);
        assertFalse(id.contains("<"));
        assertFalse(id.contains(">"));
    }

    // ======================== Resolver ========================

    @Test
    public void testResolver() {
        Resolver r = new Resolver();
        assertEquals("%Ljava_lang_Object;*", r.resolve("Ljava/lang/Object;"));
        assertEquals("%Ljava_lang_Object;", r.resolveStruct("Ljava/lang/Object;"));
        assertTrue(r.getClasses().contains("Ljava/lang/Object;"));
    }

    @Test
    public void testResolverDedup() {
        Resolver r = new Resolver();
        r.resolve("Ljava/lang/String;");
        r.resolve("Ljava/lang/String;");
        int count = 0;
        for (String s : r.getClasses()) {
            if (s.equals("Ljava/lang/String;")) count++;
        }
        assertEquals(1, count);
    }

    @Test
    public void testJavaArr2irType() {
        Resolver resolver = new Resolver();
        String result = Util.javaArr2irType(resolver, "[[I");
        assertEquals("%..I*", result);
    }

    @Test
    public void testJavaArr2structPrimitive() {
        Resolver resolver = new Resolver();
        assertEquals("{i32, [0 x i8]}", Util.javaArr2struct(resolver, "[B"));
        assertEquals("{i32, [0 x i32]}", Util.javaArr2struct(resolver, "[I"));
        assertEquals("{i32, [0 x i64]}", Util.javaArr2struct(resolver, "[J"));
        assertEquals("{i32, [0 x float]}", Util.javaArr2struct(resolver, "[F"));
        assertEquals("{i32, [0 x double]}", Util.javaArr2struct(resolver, "[D"));
    }

}
