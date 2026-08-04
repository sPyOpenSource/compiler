package jx.compiler;

import java.io.PrintStream;
import java.util.List;
import java.util.Locale;

/**
 * Central console messaging facade for the compiler.
 *
 * Levels (higher = more verbose): ERROR, WARN, INFO, VERBOSE, DEBUG.
 * error/warn go to stderr; info/verbose/debug go to stdout.
 * Threshold and category lists are set once from CLI flags via Msg.init.
 */
public final class Msg {

    public static final int ERROR   = 0;
    public static final int WARN    = 1;
    public static final int INFO    = 2;
    public static final int VERBOSE = 3;
    public static final int DEBUG   = 4;

    private static volatile int threshold = INFO;
    private static List<String> verboseCats;
    private static List<String> debugCats;
    private static volatile long phaseStart = -1L;

    private Msg() {}

    public static synchronized void init(int level, List<String> verboseCategories, List<String> debugCategories) {
        threshold = level;
        verboseCats = verboseCategories;
        debugCats = debugCategories;
    }

    public static void error(String msg) {
        if (threshold >= ERROR) System.err.println("[ERROR] " + msg);
    }

    public static void warn(String msg) {
        if (threshold >= WARN) System.err.println("[WARN] " + msg);
    }

    public static void info(String msg) {
        if (threshold >= INFO) System.out.println(msg);
    }

    public static void verbose(String msg) {
        verbose(null, msg);
    }

    public static void verbose(String cat, String msg) {
        if (threshold >= VERBOSE && (verboseCats == null || (cat != null && verboseCats.contains(cat)))) {
            System.out.println(msg);
        }
    }

    public static void debug(String cat, String msg) {
        if (threshold >= DEBUG && (debugCats == null || (cat != null && debugCats.contains(cat)))) {
            System.out.println("[debug] " + msg);
        }
    }

    /**
     * True when the threshold is at least VERBOSE. Note: this ignores the
     * verbose category list, so uncategorized detail gated behind it may print
     * under -v:&lt;cats&gt;. Prefer {@link #verbose(String, String)} when a category is known.
     */
    public static boolean verboseEnabled() {
        return threshold >= VERBOSE;
    }

    public static boolean debugEnabled() {
        return threshold >= DEBUG;
    }

    public static void phase(String msg) {
        phase(msg, "");
    }

    public static void phase(String msg, String detail) {
        if (threshold >= INFO) {
            System.out.println(detail.length() == 0 ? "==> " + msg : "==> " + msg + "  " + detail);
            phaseStart = System.nanoTime();
        }
    }

    public static void phaseDone() {
        if (threshold >= INFO) {
            if (phaseStart >= 0) {
                double secs = (System.nanoTime() - phaseStart) / 1e9;
                System.out.println("-- done (" + String.format(Locale.ROOT, "%.1f", secs) + "s)");
                phaseStart = -1L;
            } else {
                System.out.println("-- done");
            }
        }
    }
}
