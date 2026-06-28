package test;

import j2ll.graph.IrBlock;
import j2ll.graph.IrFunction;
import j2ll.graph.IrSentence;
import j2ll.graph.IrVariable;
import j2ll.graph.inst.*;
import org.junit.Test;

import static org.junit.Assert.*;

public class IrGraphTest {

    @Test public void testIrVariableConstruction() {
        IrVariable v = new IrVariable("i32", "%stack0");
        assertEquals("i32", v.type);
        assertEquals("%stack0", v.name);
    }

    @Test public void testIrVariableToString() {
        IrVariable v = new IrVariable("i32", "%stack0");
        assertEquals("i32 %stack0", v.toString());
    }

    @Test public void testIrVariableEqualsSameName() {
        IrVariable a = new IrVariable("i32", "%stack0");
        IrVariable b = new IrVariable("float", "%stack0");
        assertEquals(a, b);
    }

    @Test public void testIrVariableEqualsNull() {
        IrVariable a = new IrVariable("i32", "%stack0");
        assertNotEquals(a, null);
    }

    @Test public void testIrVariableEqualsDifferentName() {
        IrVariable a = new IrVariable("i32", "%stack0");
        IrVariable b = new IrVariable("i32", "%stack1");
        assertNotEquals(a, b);
    }

    @Test public void testIrVariableHashCode() {
        IrVariable a = new IrVariable("i32", "%stack0");
        IrVariable b = new IrVariable("float", "%stack0");
        assertEquals(a.hashCode(), b.hashCode());
    }

    @Test public void testIrVariableHashCodeDifferent() {
        IrVariable a = new IrVariable("i32", "%stack0");
        IrVariable b = new IrVariable("i32", "%stack1");
        assertNotEquals(a.hashCode(), b.hashCode());
    }

    @Test public void testParseLoad() {
        IrSentence s = IrSentence.parseInst("%__tmpv16 = load i32, i32* %c_3_18");
        assertEquals(IrSentence.LOAD, s.getInstType());
        assertTrue(s instanceof IrLoad);
    }

    @Test public void testParseStore() {
        IrSentence s = IrSentence.parseInst("store i32 %stack0, i32* %ptr");
        assertEquals(IrSentence.STORE, s.getInstType());
        assertTrue(s instanceof IrStore);
    }

    @Test public void testParseAlloca() {
        IrSentence s = IrSentence.parseInst("%ptr = alloca i32");
        assertEquals(IrSentence.ALLOCA, s.getInstType());
        assertTrue(s instanceof IrAlloca);
    }

    @Test public void testParseIcmp() {
        IrSentence s = IrSentence.parseInst("%__tmpc6 = icmp sle i32 %stack11, %stack12");
        assertEquals(IrSentence.ICMP, s.getInstType());
        assertTrue(s instanceof IrIcmp);
    }

    @Test public void testParseBranch2() {
        IrSentence s = IrSentence.parseInst("br i1 %__tmpc4, label %L1638435724, label %_if.else4");
        assertEquals(IrSentence.BR2, s.getInstType());
        assertTrue(s instanceof IrBranch2);
    }

    @Test public void testParseBranch1() {
        IrSentence s = IrSentence.parseInst("br label %L1");
        assertEquals(IrSentence.BR1, s.getInstType());
        assertTrue(s instanceof IrBranch1);
    }

    @Test public void testParseLabel() {
        IrSentence s = IrSentence.parseInst("L123:");
        assertEquals(IrSentence.LABEL, s.getInstType());
        assertTrue(s instanceof IrLabel);
    }

    @Test public void testParseRet() {
        IrSentence s = IrSentence.parseInst("ret void");
        assertEquals(IrSentence.RET, s.getInstType());
        assertTrue(s instanceof IrRet);
    }

    @Test public void testParseCall() {
        IrSentence s = IrSentence.parseInst("%result = call i32 @func(i32 %arg)");
        assertEquals(IrSentence.CALL, s.getInstType());
        assertTrue(s instanceof IrCall);
    }

    @Test public void testParseBitcast() {
        IrSentence s = IrSentence.parseInst("%tmp = bitcast i32* %ptr to i8*");
        assertEquals(IrSentence.BITCAST, s.getInstType());
        assertTrue(s instanceof IrBitcast);
    }

    @Test public void testParseArithAdd() {
        IrSentence s = IrSentence.parseInst("%stack8 = add i32 %stack4, %stack7");
        assertEquals(IrSentence.ARITH, s.getInstType());
        assertTrue(s instanceof IrArith);
    }

    @Test public void testParseComment() {
        IrSentence s = IrSentence.parseInst("; this is a comment");
        assertEquals(IrSentence.COMMENT, s.getInstType());
        assertTrue(s instanceof IrComment);
    }

    @Test public void testParseGetptr() {
        IrSentence s = IrSentence.parseInst("%ptr = getelementptr inbounds i32, i32* %arr, i32 0");
        assertEquals(IrSentence.GETPTR, s.getInstType());
        assertTrue(s instanceof IrGetptr);
    }

    @Test public void testParseWithComment() {
        IrSentence s = IrSentence.parseInst("%__tmpv16 = load i32, i32* %c_3_18 ; some comment");
        assertEquals(IrSentence.LOAD, s.getInstType());
    }

    @Test public void testIrLoadParse() {
        IrLoad load = (IrLoad) IrSentence.parseInst("%__tmpv16 = load i32, i32* %c_3_18");
        assertNotNull(load.getLeft());
        assertEquals("%__tmpv16", load.getLeft().name);
    }

    @Test public void testIrLoadToString() {
        IrLoad load = (IrLoad) IrSentence.parseInst("%__tmpv16 = load i32, i32* %c_3_18");
        assertEquals("%__tmpv16 = load i32, i32* %c_3_18", load.toString());
    }

    @Test public void testIrLoadReplaceVarName() {
        IrLoad load = (IrLoad) IrSentence.parseInst("%__tmpv16 = load i32, i32* %c_3_18");
        IrVariable oldVar = new IrVariable("i32*", "%c_3_18");
        IrVariable newVar = new IrVariable("i32*", "%new_ptr");
        load.replaceVarName(oldVar, newVar);
        assertTrue(load.toString().contains("%new_ptr"));
    }

    @Test public void testIrArithParseAdd() {
        IrArith arith = (IrArith) IrSentence.parseInst("%stack8 = add i32 %stack4, %stack7");
        assertNotNull(arith.getLeft());
        assertEquals("%stack8", arith.getLeft().name);
    }

    @Test public void testIrArithToString() {
        IrArith arith = (IrArith) IrSentence.parseInst("%stack8 = add i32 %stack4, %stack7");
        assertEquals("%stack8 = add i32 %stack4, %stack7", arith.toString().trim());
    }

    @Test public void testIrArithSub() {
        IrArith arith = (IrArith) IrSentence.parseInst("%res = sub i64 %a, %b");
        assertTrue(arith.toString().contains("sub"));
    }

    @Test public void testIrArithReplaceVarName() {
        IrArith arith = (IrArith) IrSentence.parseInst("%stack8 = add i32 %stack4, %stack7");
        IrVariable oldVar = new IrVariable("i32", "%stack4");
        IrVariable newVar = new IrVariable("i32", "%replaced");
        arith.replaceVarName(oldVar, newVar);
        assertTrue(arith.toString().contains("%replaced"));
    }

    @Test public void testIrIcmpParse() {
        IrIcmp icmp = (IrIcmp) IrSentence.parseInst("%__tmpc6 = icmp sle i32 %stack11, %stack12");
        assertNotNull(icmp.getLeft());
        assertEquals("%__tmpc6", icmp.getLeft().name);
    }

    @Test public void testIrIcmpToString() {
        IrIcmp icmp = (IrIcmp) IrSentence.parseInst("%__tmpc6 = icmp sle i32 %stack11, %stack12");
        assertEquals("%__tmpc6 = icmp sle i32 %stack11, %stack12", icmp.toString());
    }

    @Test public void testIrIcmpEq() {
        IrIcmp icmp = (IrIcmp) IrSentence.parseInst("%tmp = icmp eq i32 %a, %b");
        assertTrue(icmp.toString().contains("icmp eq"));
    }

    @Test public void testIrIcmpReplaceVarName() {
        IrIcmp icmp = (IrIcmp) IrSentence.parseInst("%__tmpc6 = icmp sle i32 %stack11, %stack12");
        IrVariable oldVar = new IrVariable("i32", "%stack11");
        IrVariable newVar = new IrVariable("i32", "%replaced");
        icmp.replaceVarName(oldVar, newVar);
        assertTrue(icmp.toString().contains("%replaced"));
    }

    @Test public void testIrBranch2Parse() {
        IrBranch2 br = (IrBranch2) IrSentence.parseInst("br i1 %__tmpc4, label %L1638435724, label %_if.else4");
        assertEquals("br i1 %__tmpc4, label %L1638435724, label %_if.else4", br.toString());
    }

    @Test public void testIrLabelParse() {
        IrLabel lbl = (IrLabel) IrSentence.parseInst("L123:");
        assertEquals("L123", lbl.label);
    }

    @Test public void testIrLabelGetLeftReturnsNull() {
        IrLabel lbl = new IrLabel();
        assertNull(lbl.getLeft());
    }

    @Test public void testIrFunctionConstruction() {
        IrFunction func = new IrFunction("java/lang/String", "length", "()I");
        assertEquals("java/lang/String", func.className);
        assertEquals("length", func.methodName);
        assertEquals("()I", func.javaSignature);
    }

    @Test public void testIrFunctionParseEmpty() {
        IrFunction func = new IrFunction("test", "main", "()V");
        func.parse("");
        assertNotNull(func);
    }

    @Test public void testIrFunctionParseSimpleFunction() {
        String ir = """
                    define i32 @main() {
                    entry:
                      ret i32 0
                    }
                    """;
        IrFunction func = new IrFunction("test", "main", "()I");
        func.parse(ir);
        assertNotNull(func.toString());
    }

    @Test public void testIrBlockConstruction() {
        IrFunction func = new IrFunction("test", "main", "()V");
        IrBlock block = new IrBlock(func);
        assertNotNull(block);
    }

    @Test public void testIrBlockToString() {
        IrFunction func = new IrFunction("test", "main", "()V");
        IrBlock block = new IrBlock(func);
        String s = block.toString();
        assertTrue(s.contains(";"));
    }

    @Test public void testIrRetVoid() {
        IrRet ret = (IrRet) IrSentence.parseInst("ret void");
        assertNotNull(ret);
        assertEquals(IrSentence.RET, ret.getInstType());
    }

    @Test public void testIrRetValue() {
        IrRet ret = (IrRet) IrSentence.parseInst("ret i32 %result");
        assertNotNull(ret);
        assertEquals(IrSentence.RET, ret.getInstType());
    }

    @Test public void testIrAllocaParse() {
        IrAlloca alloca = (IrAlloca) IrSentence.parseInst("%ptr = alloca i32");
        assertNotNull(alloca);
        assertEquals(IrSentence.ALLOCA, alloca.getInstType());
    }

    @Test public void testIrBitcastParse() {
        IrBitcast bc = (IrBitcast) IrSentence.parseInst("%tmp = bitcast i32* %ptr to i8*");
        assertNotNull(bc);
        assertEquals(IrSentence.BITCAST, bc.getInstType());
    }

    @Test public void testIrBitcastTrunc() {
        IrBitcast bc = (IrBitcast) IrSentence.parseInst("%tmp = trunc i32 %val to i16");
        assertNotNull(bc);
        assertEquals(IrSentence.BITCAST, bc.getInstType());
    }

    @Test public void testIrBitcastSext() {
        IrBitcast bc = (IrBitcast) IrSentence.parseInst("%tmp = sext i16 %val to i32");
        assertNotNull(bc);
        assertEquals(IrSentence.BITCAST, bc.getInstType());
    }

    @Test public void testIrStoreParse() {
        IrStore store = (IrStore) IrSentence.parseInst("store i32 %stack0, i32* %ptr");
        assertNotNull(store);
        assertEquals(IrSentence.STORE, store.getInstType());
    }

    @Test public void testIrGetptrParse() {
        IrGetptr gp = (IrGetptr) IrSentence.parseInst("%ptr = getelementptr inbounds i32, i32* %arr, i32 0");
        assertNotNull(gp);
        assertEquals(IrSentence.GETPTR, gp.getInstType());
    }

    @Test public void testParseMulArith() {
        IrSentence s = IrSentence.parseInst("%tmp = mul i32 %a, %b");
        assertNotNull(s);
        assertTrue(s instanceof IrArith);
    }

    @Test public void testIrCommentParse() {
        IrComment c = (IrComment) IrSentence.parseInst("; comment line");
        assertNotNull(c);
        assertEquals(IrSentence.COMMENT, c.getInstType());
    }

    @Test public void testIrBranch1Parse() {
        IrBranch1 br = (IrBranch1) IrSentence.parseInst("br label %L1");
        assertNotNull(br);
        assertEquals(IrSentence.BR1, br.getInstType());
    }

    @Test public void testIrCallParse() {
        IrCall call = (IrCall) IrSentence.parseInst("%result = call i32 @func(i32 %arg)");
        assertNotNull(call);
        assertEquals(IrSentence.CALL, call.getInstType());
    }
}
