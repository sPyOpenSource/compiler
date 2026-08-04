package test;

import jx.compiler.Msg;
import org.junit.Test;

import java.io.ByteArrayOutputStream;
import java.io.PrintStream;
import java.util.Arrays;

import static org.junit.Assert.*;

public class MsgTest {

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
    public void defaultInfoPrints() {
        Msg.init(Msg.INFO, null, null);
        assertTrue(stdout(() -> Msg.info("hello")).contains("hello"));
    }

    @Test
    public void defaultVerboseHidden() {
        Msg.init(Msg.INFO, null, null);
        assertEquals("", stdout(() -> Msg.verbose("hidden")));
    }

    @Test
    public void defaultDebugHidden() {
        Msg.init(Msg.INFO, null, null);
        assertEquals("", stdout(() -> Msg.debug("native", "hidden")));
    }

    @Test
    public void errorAndWarnAlwaysPrint() {
        Msg.init(Msg.INFO, null, null);
        assertTrue(stderr(() -> Msg.error("boom")).contains("[ERROR] boom"));
        assertTrue(stderr(() -> Msg.warn("careful")).contains("[WARN] careful"));
    }

    @Test
    public void quietLevelSuppressesInfo() {
        Msg.init(Msg.WARN, null, null);
        assertEquals("", stdout(() -> Msg.info("progress")));
        assertTrue(stderr(() -> Msg.warn("w")).contains("[WARN] w"));
    }

    @Test
    public void verboseLevelEnablesVerbose() {
        Msg.init(Msg.VERBOSE, null, null);
        assertTrue(stdout(() -> Msg.verbose("detail")).contains("detail"));
    }

    @Test
    public void verboseCategoryGating() {
        Msg.init(Msg.VERBOSE, Arrays.asList("classes"), null);
        assertTrue(stdout(() -> Msg.verbose("classes", "add")).contains("add"));
        assertFalse(stdout(() -> Msg.verbose("native", "add")).contains("add"));
        assertFalse(stdout(() -> Msg.verbose("uncategorized")).contains("uncategorized"));
    }

    @Test
    public void debugCategoryGating() {
        Msg.init(Msg.DEBUG, null, Arrays.asList("native"));
        assertTrue(stdout(() -> Msg.debug("native", "reading")).contains("[debug] reading"));
        assertFalse(stdout(() -> Msg.debug("classes", "reading")).contains("reading"));
    }

    @Test
    public void predicatesTrackLevel() {
        Msg.init(Msg.DEBUG, null, null);
        assertTrue(Msg.verboseEnabled());
        assertTrue(Msg.debugEnabled());
        Msg.init(Msg.INFO, null, null);
        assertFalse(Msg.verboseEnabled());
        assertFalse(Msg.debugEnabled());
    }

    @Test
    public void phasePrintsBannerAndDone() {
        Msg.init(Msg.INFO, null, null);
        String banner = stdout(() -> Msg.phase("Compiling domain", "app/foo.jll"));
        assertTrue(banner.startsWith("==> Compiling domain  app/foo.jll"));
        String done = stdout(Msg::phaseDone);
        assertTrue(done.startsWith("-- done ("));
        assertTrue(done.endsWith("s)\n"));
    }

    @Test
    public void phaseHiddenBelowInfo() {
        Msg.init(Msg.WARN, null, null);
        assertEquals("", stdout(() -> Msg.phase("Compiling", "app/foo")));
        assertEquals("", stdout(Msg::phaseDone));
    }
}
