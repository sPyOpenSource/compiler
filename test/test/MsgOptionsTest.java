package test;

import jx.compiler.CompilerOptionsNative;
import jx.compiler.Msg;
import org.junit.Test;

import java.io.ByteArrayOutputStream;
import java.io.PrintStream;

import static org.junit.Assert.*;

public class MsgOptionsTest {

    static class O extends CompilerOptionsNative {}

    private String stdout(Runnable r) {
        ByteArrayOutputStream buf = new ByteArrayOutputStream();
        PrintStream old = System.out;
        System.setOut(new PrintStream(buf));
        try {
            r.run();
        } finally {
            System.setOut(old);
        }
        return buf.toString();
    }

    private String stderr(Runnable r) {
        ByteArrayOutputStream buf = new ByteArrayOutputStream();
        PrintStream old = System.err;
        System.setErr(new PrintStream(buf));
        try {
            r.run();
        } finally {
            System.setErr(old);
        }
        return buf.toString();
    }

    @Test
    public void defaultIsInfo() {
        new O().parseOptionLine("");
        assertTrue(stdout(() -> Msg.info("hi")).contains("hi"));
        assertFalse(stdout(() -> Msg.verbose("hi")).contains("hi"));
    }

    @Test
    public void quietSilencesInfo() {
        new O().parseOptionLine("-q");
        assertEquals("", stdout(() -> Msg.info("progress")));
        assertTrue(stderr(() -> Msg.warn("w")).contains("[WARN] w"));
    }

    @Test
    public void verboseEnablesVerbose() {
        new O().parseOptionLine("-v");
        assertTrue(stdout(() -> Msg.verbose("detail")).contains("detail"));
    }

    @Test
    public void verboseCategoryOnly() {
        new O().parseOptionLine("-v:classes");
        assertTrue(stdout(() -> Msg.verbose("classes", "add")).contains("add"));
        assertFalse(stdout(() -> Msg.verbose("native", "add")).contains("add"));
    }

    @Test
    public void debugEnablesDebug() {
        new O().parseOptionLine("-debug");
        assertTrue(stdout(() -> Msg.debug("native", "read")).contains("[debug] read"));
    }

    @Test
    public void debugCategoryOnly() {
        new O().parseOptionLine("-debug:native");
        assertTrue(stdout(() -> Msg.debug("native", "read")).contains("[debug] read"));
        assertFalse(stdout(() -> Msg.debug("classes", "read")).contains("read"));
    }

    @Test
    public void nodebugReturnsToInfo() {
        O o = new O();
        o.parseOptionLine("-debug");
        o.parseOptionLine("-nodebug");
        assertFalse(stdout(() -> Msg.debug("native", "read")).contains("read"));
    }
}
