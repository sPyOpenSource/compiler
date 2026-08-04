# Compiler Console Messaging Overhaul Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Replace the `jc` compiler's inconsistent/leaky console output with a single `Msg` facade (levels, uniform prefixes, phase timing, host-safe error reporting) across the core compile flow.

**Architecture:** A static `jx.compiler.Msg` class owns level/channel/format decisions (error/warn → stderr, info/verbose/debug → stdout). `CompilerOptions` maps CLI flags to a `Msg` threshold. The core-flow files (`CompileNative`, `StaticCompiler`, `CompilerOptionsNative`, `CodeFile`, `StartBuilder`) route every message through `Msg`, which also fixes the latent host-side `jx.zero.Debug.out` NPE.

**Tech Stack:** Java 17 (`-source/-target 17`), JUnit 4, Ant (NetBeans `build.xml`). Tests run via direct `javac` + `org.junit.runner.JUnitCore` (the NetBeans `ant test` target is not wired to JUnit in this checkout).

**Spec:** `docs/superpowers/specs/2026-08-04-console-messaging-design.md`

## Global Constraints

- Java source/target level 17. Toolchain: JDK 26 at `/opt/homebrew/opt/openjdk/bin/{javac,java}` (the only JDK that compiles this tree; system `java` is 11).
- JUnit 4.13.2 at `/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/junit-4.13.2.jar`; hamcrest-core-1.3 at `/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/hamcrest-core-1.3.jar`.
- Out of scope (do NOT touch): `src/jx/compiler/backend/*`, `src/jx/compiler/plugins/*`, `src/jx/zero/Debug.java`, `src/jx/compiler/plugins/Debug.java`, `RegManager`, `MethodStackFrame`, symbols package.
- Message format is a plain `String` (concat style) — never `String.format` at call sites.
- Keep the existing CLI flags working: `-v`, `-v:<cats>`, `-debug`, `-debug:<cats>`, `-nodebug`. Add `-q`.
- Exit codes unchanged: `0` success, `1` fatal.
- Do not `git add .` — stage only the files named in each task (the working tree has unrelated uncommitted changes like `ISOTest6.iso` and `app/ir/*.imcode`).

---

### Task 1: `Msg` facade with tests

**Files:**
- Create: `src/jx/compiler/Msg.java`
- Create: `test/test/MsgTest.java`

**Interfaces:**
- Produces (used by every later task):
  - `Msg.ERROR`/`Msg.WARN`/`Msg.INFO`/`Msg.VERBOSE`/`Msg.DEBUG` (int constants)
  - `Msg.init(int level, List<String> verboseCategories, List<String> debugCategories)` — null list means "all categories"
  - `Msg.error(String)`, `Msg.warn(String)` → stderr, always on
  - `Msg.info(String)` → stdout, `level >= INFO`
  - `Msg.verbose(String)`, `Msg.verbose(String cat, String)` → stdout, `level >= VERBOSE` and (`verboseCategories == null` or `cat` in list); uncategorized `verbose(msg)` prints only when `verboseCategories == null`
  - `Msg.debug(String cat, String)` → stdout `[debug] ...`, `level >= DEBUG` and (`debugCategories == null` or `cat` in list)
  - `Msg.verboseEnabled()`, `Msg.debugEnabled()` → predicates
  - `Msg.phase(String msg)`, `Msg.phase(String msg, String detail)` → `==> msg  detail`, stamps start time
  - `Msg.phaseDone()` → `-- done (X.Xs)`; both are no-ops below `INFO`
- `Msg` must depend only on `java.lang`/`java.util`/`java.io`.

- [ ] **Step 1: Write the failing test**

Create `test/test/MsgTest.java`:

```java
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
```

- [ ] **Step 2: Run test to verify it fails**

```bash
JUNIT="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/junit-4.13.2.jar"
HAMCREST="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/hamcrest-core-1.3.jar"
JAVAC=/opt/homebrew/opt/openjdk/bin/javac
JAVA=/opt/homebrew/opt/openjdk/bin/java
$JAVAC -cp "build/classes:$JUNIT:$HAMCREST" -d build/test/classes test/test/MsgTest.java
$JAVA -cp "build/classes:build/test/classes:$JUNIT:$HAMCREST" org.junit.runner.JUnitCore test.MsgTest
```

Expected: `FAIL ... could not find or load main class` / `ClassNotFoundException: jx.compiler.Msg` (Msg does not exist yet).

- [ ] **Step 3: Implement `Msg`**

Create `src/jx/compiler/Msg.java`:

```java
package jx.compiler;

import java.io.PrintStream;
import java.util.List;

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

    private static int threshold = INFO;
    private static List<String> verboseCats;
    private static List<String> debugCats;
    private static long phaseStart = -1L;

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
                System.out.println("-- done (" + String.format("%.1f", secs) + "s)");
                phaseStart = -1L;
            } else {
                System.out.println("-- done");
            }
        }
    }
}
```

- [ ] **Step 4: Compile Msg into build/classes and run tests**

```bash
JUNIT="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/junit-4.13.2.jar"
HAMCREST="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/hamcrest-core-1.3.jar"
JAVAC=/opt/homebrew/opt/openjdk/bin/javac
JAVA=/opt/homebrew/opt/openjdk/bin/java
$JAVAC -cp "build/classes" -d build/classes src/jx/compiler/Msg.java
$JAVAC -cp "build/classes:$JUNIT:$HAMCREST" -d build/test/classes test/test/MsgTest.java
$JAVA -cp "build/classes:build/test/classes:$JUNIT:$HAMCREST" org.junit.runner.JUnitCore test.MsgTest
```

Expected: `OK (11 tests)`

- [ ] **Step 5: Confirm existing suite still green**

```bash
$JAVA -cp "build/classes:build/test/classes:$JUNIT:$HAMCREST" org.junit.runner.JUnitCore test.JUnitCoreTest
```

Expected: `OK (60 tests)` (uses `build/test/classes/test/JUnitCoreTest.class`; if missing, compile `test/test/JUnitCoreTest.java` first with the same `javac -cp` command as Step 4).

- [ ] **Step 6: Commit**

```bash
git add src/jx/compiler/Msg.java test/test/MsgTest.java
git commit -m "feat(compiler): add Msg console messaging facade"
```

---

### Task 2: Wire CLI flags to `Msg` (`-q`, `-v`, `-debug`, `-nodebug`)

**Files:**
- Modify: `src/jx/compiler/CompilerOptions.java:58` (default), `:296-298` (printVerbose), add `doQuiet` field + `applyToMsg()` method
- Modify: `src/jx/compiler/CompilerOptionsNative.java:36`, `:157-158`, `:345` (add `-q`, call `applyToMsg()`)
- Create: `test/test/MsgOptionsTest.java`

**Interfaces:**
- Consumes: `Msg.init`, `Msg.INFO/WARN/VERBOSE/DEBUG` (Task 1)
- Produces: `protected void CompilerOptions.applyToMsg()` — computes threshold from `doQuiet`/`debug`/`doVerbose`/`verboseList`/`debugFlags` and calls `Msg.init`. Called at the end of `CompilerOptionsNative.parseArgs` and `parseOptionLine`.
- Behavior change (intended): `doVerbose` defaults to `false` so default output is `info` level (quieter than today).

- [ ] **Step 1: Write the failing test**

Create `test/test/MsgOptionsTest.java`:

```java
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
        assertTrue(stdout(() -> Msg.warn("w")).contains("[WARN] w"));
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
```

- [ ] **Step 2: Run test to verify it fails**

```bash
JUNIT="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/junit-4.13.2.jar"
HAMCREST="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/hamcrest-core-1.3.jar"
JAVAC=/opt/homebrew/opt/openjdk/bin/javac
JAVA=/opt/homebrew/opt/openjdk/bin/java
$JAVAC -cp "build/classes:$JUNIT:$HAMCREST" -d build/test/classes test/test/MsgOptionsTest.java
$JAVA -cp "build/classes:build/test/classes:$JUNIT:$HAMCREST" org.junit.runner.JUnitCore test.MsgOptionsTest
```

Expected: FAIL (flags do not yet call `Msg.init`; e.g. `defaultIsInfo` fails because `-q` is not recognized and `verbose` level never gets set).

- [ ] **Step 3: Add `doQuiet` and `applyToMsg` to `CompilerOptions`**

In `src/jx/compiler/CompilerOptions.java`:

Change line 58 from `protected boolean doVerbose            = true;` to:

```java
    protected boolean doVerbose            = false;
```

Add a new field next to it:

```java
    protected boolean doQuiet              = false;
```

Replace the `printVerbose` method (lines 296-298):

```java
    public void printVerbose(String txt) {
	Msg.verbose(txt);
    }
```

Add a new method after `printVerbose`:

```java
    protected void applyToMsg() {
	int level = Msg.INFO;
	if (doQuiet) level = Msg.WARN;
	if (debug) level = Msg.DEBUG;
	else if (doVerbose || verboseList != null) level = Msg.VERBOSE;
	Msg.init(level, verboseList, debugFlags);
    }
```

(`Msg`, `doVerbose`, `verboseList`, `debugFlags`, `debug` are all in the same package / class — no import needed.)

- [ ] **Step 4: Add `-q` flag and `applyToMsg()` calls to `CompilerOptionsNative`**

In `src/jx/compiler/CompilerOptionsNative.java`:

After the `-nodebug` branch (lines 157-158):

```java
	} else if (args[i].equals("-nodebug")) {
	    debug = false;
	}
```

add:

```java
	} else if (args[i].equals("-q")) {
	    doQuiet = true;
	}
```

At the end of `parseOptionLine` (after the `for` loop on line 36, before the closing brace):

```java
	applyToMsg();
    }
```

At the end of `parseArgs` (after the libs `if (zipLibFiles != null)` block, before the method's closing brace, ~line 345):

```java
	applyToMsg();
    }
```

- [ ] **Step 5: Run tests to verify they pass**

```bash
JUNIT="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/junit-4.13.2.jar"
HAMCREST="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/hamcrest-core-1.3.jar"
JAVAC=/opt/homebrew/opt/openjdk/bin/javac
JAVA=/opt/homebrew/opt/openjdk/bin/java
ant compile -q 2>&1 | tail -3
$JAVAC -cp "build/classes:$JUNIT:$HAMCREST" -d build/test/classes test/test/MsgOptionsTest.java
$JAVA -cp "build/classes:build/test/classes:$JUNIT:$HAMCREST" org.junit.runner.JUnitCore test.MsgOptionsTest
```

Expected: `ant compile` → BUILD SUCCESSFUL; then `OK (7 tests)`.

- [ ] **Step 6: Commit**

```bash
git add src/jx/compiler/CompilerOptions.java src/jx/compiler/CompilerOptionsNative.java test/test/MsgOptionsTest.java
git commit -m "feat(compiler): map CLI verbosity flags to Msg threshold"
```

---

### Task 3: Migrate `CompileNative` to `Msg` (fixes host `Debug.out` NPE)

**Files:**
- Modify: `src/jx/compiler/CompileNative.java:18` (import), `:27-28` (imports), `:31-42` (main), `:84-94`, `:188`, `:262`, `:277`, `:283`, `:287`, `:288-290`

**Interfaces:**
- Consumes: `Msg.info`, `Msg.debug(cat, ...)`, `Msg.error`, `Msg.phase`, `Msg.phaseDone`, `Msg.debugEnabled` (Task 1)

- [ ] **Step 1: Migrate `main()` and `compile()`**

In `src/jx/compiler/CompileNative.java`:

Add the version banner once at the top of `main()` (after line 31's method signature, before `String libdir`):

```java
	Msg.info("Native code compiler version 0.7.10-" + StaticCompiler.version());
```

In `compile(String path, CompilerOptions opts)`:

Replace line 85:

```java
	System.out.println("Native code compiler version 0.7.10-" + StaticCompiler.version());
```

with:

```java
	Msg.phase("Compiling domain", opts.getOutputFile());
```

Replace lines 89-90:

```java
	if (opts.doDebug()) Debug.out.println("Compiling domain to " + opts.getOutputFile());
	if (opts.doDebug()) Debug.out.println("Writing linker output to " + opts.getLinkerOutputFile());
```

with:

```java
	Msg.debug("native", "Compiling domain to " + opts.getOutputFile());
	Msg.debug("native", "Writing linker output to " + opts.getLinkerOutputFile());
```

Replace line 94:

```java
	if (opts.doDebug()) Debug.out.println("Reading domain classes from " + opts.getClassFile());
```

with:

```java
	Msg.debug("native", "Reading domain classes from " + opts.getClassFile());
```

Replace line 188:

```java
	       if (opts.doDebug()) Debug.out.println("Reading lib linkerinfo from " + (String)links.get(i));
```

with:

```java
	       Msg.debug("native", "Reading lib linkerinfo from " + links.get(i));
```

At the end of `compile()` (before the method's closing brace at line 216, after `tableOut.close();`):

```java
	Msg.phaseDone();
    }
```

- [ ] **Step 2: Migrate `createISO()`**

In `createISO()`, inside the `try` block: after `final List<String> srcFiles = ...;` (line 227) add:

```java
	Msg.phase("Create ISO");
```

Replace line 262 `System.out.println("ISO9660 support");` with `Msg.info("ISO9660 support");`
Replace line 277 `System.out.println("Joliet support");` with `Msg.info("Joliet support");`
Replace line 283 `System.out.println("Create ISO");` with `Msg.info("Create ISO");`
Replace line 287 `System.out.println("Done. File is: " + outfile);` with:

```java
	Msg.info("Done. File is: " + outfile);
	Msg.phaseDone();
```

Replace the catch block (lines 288-290):

```java
	} catch (IOException | ConfigException | HandlerException ex){
	    Logger.getLogger(CompileNative.class.getName()).log(Level.SEVERE, null, ex);
	}
```

with:

```java
	} catch (IOException | ConfigException | HandlerException ex){
	    Msg.error("ISO creation failed: " + ex.getMessage());
	    if (Msg.debugEnabled()) ex.printStackTrace();
	}
```

- [ ] **Step 3: Clean up unused imports**

Remove from `src/jx/compiler/CompileNative.java`:

```java
import jx.zero.Debug;
```

and

```java
import java.util.logging.Level;
import java.util.logging.Logger;
```

(`Debug` and `Logger` are no longer referenced anywhere in the file after Steps 1-2.)

- [ ] **Step 4: Verify compilation**

```bash
ant compile -q 2>&1 | tail -3
```

Expected: BUILD SUCCESSFUL with no errors (a "Note: ... uses unchecked or unsafe operations" or deprecation note is fine).

- [ ] **Step 5: Commit**

```bash
git add src/jx/compiler/CompileNative.java
git commit -m "feat(compiler): route CompileNative output through Msg"
```

---

### Task 4: Migrate `StaticCompiler` to `Msg` (quiet-by-default, fixes error NPE)

**Files:**
- Modify: `src/jx/compiler/StaticCompiler.java:50`, `:190`, `:201-203`, `:210`, `:217`, `:225`, `:233`, `:237`, `:243-246`, `:370-373`, `:417-431`, `:440-443`, `:530-531`, and imports `:43-44`

**Interfaces:**
- Consumes: `Msg.error`, `Msg.warn`, `Msg.verbose(cat, ...)`, `Msg.verbose(String)`, `Msg.debugEnabled` (Task 1)

- [ ] **Step 1: Remove the always-on `opt_v` and migrate per-class prints**

Delete line 50:

```java
    static final boolean opt_v = true;
```

Replace line 190:

```java
                        System.out.println(name);
```

with:

```java
                        Msg.verbose("classes", name);
```

Replace lines 210/217/225/233 (`if (opt_v) System.out.println(...)`):
- `210`: `if (opt_v) System.out.println("Adding classes from existing lib");` → `Msg.verbose("classes", "Adding classes from existing lib");`
- `217`: `if (opt_v) System.out.println("Add class " + className);` → `Msg.verbose("classes", "Add class " + className);`
- `225`: `if (opt_v) System.out.println("Adding classes from lib");` → `Msg.verbose("classes", "Adding classes from lib");`
- `233`: `if (opt_v) System.out.println("Add class " + className);` → `Msg.verbose("classes", "Add class " + className);`

Replace line 237:

```java
		System.out.println("Duplicate class " + className);
```

with:

```java
		Msg.error("Duplicate class " + className);
```

- [ ] **Step 2: Replace zip-reading catch blocks**

Replace lines 201-203:

```java
	    } catch (NullPointerException e){
	        Logger.getLogger(StaticCompiler.class.getName()).log(Level.SEVERE, null, e);
	    }
```

with:

```java
	    } catch (NullPointerException e){
	        Msg.error("Exception while reading domain zip: " + e.getMessage());
	        if (Msg.debugEnabled()) e.printStackTrace();
	    }
```

Replace lines 243-246:

```java
	} catch(Exception e) {
            Logger.getLogger(StaticCompiler.class.getName()).log(Level.SEVERE, null, e);
	    Debug.throwError("Exception while reading classes.");
	}
```

with:

```java
	} catch(Exception e) {
	    Msg.error("Exception while reading classes: " + e.getMessage());
	    if (Msg.debugEnabled()) e.printStackTrace();
	    Debug.throwError("Exception while reading classes.");
	}
```

Replace the imcode-file catch block (lines 370-373):

```java
		} catch (IOException ex) {
		    Logger.getLogger(StaticCompiler.class.getName()).log(Level.SEVERE, null, ex);
		    Debug.throwError();
		}
```

with:

```java
		} catch (IOException ex) {
		    Msg.error("Could not write imcode file: " + ex.getMessage());
		    if (Msg.debugEnabled()) ex.printStackTrace();
		    Debug.throwError();
		}
```

- [ ] **Step 3: Migrate the per-method CompileException catch**

Replace the catch block at lines 417-431:

```java
		} catch (CompileException ex) {
                    Logger.getLogger(StaticCompiler.class.getName()).log(Level.SEVERE, null, ex);
		    if (options.doInlining(aClass, method)) {
			System.err.println("!! FAIL to inline !!!!!!!!!!!!!!!");
			if (!options.doVerbose("inline"))
			    System.err.println("!! " + ex.getClass().getName());
			System.err.println("!! try without inlining !!!!!!!!!");
			imCode = new jx.compiler.imcode.CodeContainer(execEnvNew, method);
			imCode.init();
			imCode.translate();
			if (options.doPrintIMCode()) imCode.writeCode(imOut);
			info.nativeCode[i] = imCode;
		    } else {
			System.exit(1);
		    }
		}
```

with:

```java
		} catch (CompileException ex) {
		    if (options.doInlining(aClass, method)) {
			Msg.warn("Compiling " + aClass.getClassName() + "." + method.getName() + " failed with inlining: " + ex.getClass().getName());
			Msg.warn("Retrying without inlining");
			if (Msg.debugEnabled()) ex.printStackTrace();
			imCode = new jx.compiler.imcode.CodeContainer(execEnvNew, method);
			imCode.init();
			imCode.translate();
			if (options.doPrintIMCode()) imCode.writeCode(imOut);
			info.nativeCode[i] = imCode;
		    } else {
			Msg.error("Compiling " + aClass.getClassName() + "." + method.getName() + " failed: " + ex.getMessage());
			if (Msg.debugEnabled()) ex.printStackTrace();
			System.exit(1);
		    }
		}
```

- [ ] **Step 4: Fix the outer catch NPE and migrate stat print**

Replace lines 440-443:

```java
	} catch (CompileException ex) {
	    Debug.out.println("Compilation Failed :" + ex.getMessage());
	    Debug.throwError();
	}
```

with:

```java
	} catch (CompileException ex) {
	    Msg.error("Compilation failed: " + ex.getMessage());
	    if (Msg.debugEnabled()) ex.printStackTrace();
	    Debug.throwError(ex.getMessage());
	}
```

Replace lines 530-531:

```java
	if (options.doVerbose("stat"))
	    System.out.println(stat.toString());
```

with:

```java
	Msg.verbose("stat", stat.toString());
```

- [ ] **Step 5: Remove now-unused logging imports**

Remove from `src/jx/compiler/StaticCompiler.java` lines 43-44:

```java
import java.util.logging.Level;
import java.util.logging.Logger;
```

(All `Logger`/`Level` uses were replaced in Steps 2-3. Keep `import jx.zero.Debug;` — `Debug.throwError` is still used.)

- [ ] **Step 6: Verify compilation**

```bash
ant compile -q 2>&1 | tail -3
```

Expected: BUILD SUCCESSFUL. If an unused-import warning appears for `java.util.logging`, confirm no `Logger.` references remain (`rg -n "Logger" src/jx/compiler/StaticCompiler.java` should return nothing).

- [ ] **Step 7: Commit**

```bash
git add src/jx/compiler/StaticCompiler.java
git commit -m "feat(compiler): route StaticCompiler output through Msg"
```

---

### Task 5: Migrate `CompilerOptionsNative`, `CodeFile`, `StartBuilder`

**Files:**
- Modify: `src/jx/compiler/CompilerOptionsNative.java:9`, `:234`, `:242-247`, `:285`
- Modify: `src/jx/compiler/persistent/CodeFile.java:151`, `:193`, `:199`, `:201`, `:427`, `:605`
- Modify: `src/jx/compspec/StartBuilder.java:170-178`

**Interfaces:**
- Consumes: `Msg.warn`, `Msg.error`, `Msg.verbose(cat, ...)`, `Msg.debug("cli", ...)`, `Msg.debugEnabled` (Task 1)

- [ ] **Step 1: Migrate `CompilerOptionsNative`**

In `src/jx/compiler/CompilerOptionsNative.java`:

Replace line 234:

```java
	    Debug.out.print("WARNING: Unknown option " + args[i] + " ignored.");
```

with:

```java
	    Msg.warn("Unknown option " + args[i] + " ignored");
```

Replace the `parseArgs` debug echo (lines 242-247):

```java
	if (debug) {
	    Debug.out.print("jc ");
            for (String arg : args)
                Debug.out.print(arg + " ");
	    Debug.out.println("\n");
	}
```

with:

```java
	if (debug) {
	    StringBuilder sb = new StringBuilder("jc");
            for (String arg : args) sb.append(" ").append(arg);
	    Msg.debug("cli", sb.toString());
	}
```

Replace line 285:

```java
	    Debug.out.println("\n\ncompiler exception: " + ex.getClass().getName());
```

with:

```java
	    Msg.error("compiler exception: " + ex.getClass().getName());
```

Remove line 9:

```java
import jx.zero.Debug;
```

(All `Debug` references in this file are now migrated. Verify with `rg -n "Debug" src/jx/compiler/CompilerOptionsNative.java` → nothing.)

- [ ] **Step 2: Migrate `CodeFile`**

In `src/jx/compiler/persistent/CodeFile.java`:

Replace line 151:

```java
            System.out.println("  " + var + "   = " + meta.getVar(var));
```

with:

```java
            Msg.verbose("persist", "  " + var + "   = " + meta.getVar(var));
```

Replace line 193:

```java
        if (verbose) System.out.println("**********Finished saving!");
```

with:

```java
        if (verbose) Msg.verbose("persist", "**********Finished saving!");
```

Replace lines 198-201 (JSON dump write + print):

```java
        } catch (IOException ex) {
            Logger.getLogger(SC.class.getName()).log(Level.SEVERE, null, ex);
        }
        System.out.println(object.toString(4));
```

with:

```java
        } catch (IOException ex) {
            Msg.warn("Could not write JSON: " + ex.getMessage());
            if (Msg.debugEnabled()) ex.printStackTrace();
        }
        Msg.verbose("persist", object.toString(4));
```

Replace lines 427-429:

```java
                            Debug.out.println("ERROR: relative Jump Entry not resolved: Class: " + className + ", Method: " + method);
                            entry.dump();
                            Debug.throwError("unresolved jump: " + entry);
```

with:

```java
                            Msg.error("Unresolved relative jump entry: Class: " + className + ", Method: " + method);
                            entry.dump();
                            Debug.throwError("unresolved jump: " + entry);
```

Replace line 605:

```java
        System.out.println("codesize:" + codesize);
```

with:

```java
        Msg.verbose("persist", "codesize:" + codesize);
```

Remove the now-unused import line 15:

```java
import java.util.logging.Logger;
```

(Keep `import jx.zero.Debug;` — `Debug.throwError` at lines 219/429/472/508 is still used. Verify with `rg -n "Logger" src/jx/compiler/persistent/CodeFile.java` → nothing.)

- [ ] **Step 3: Migrate `StartBuilder`**

In `src/jx/compspec/StartBuilder.java`:

Replace lines 169-175:

```java
	    } catch (IOException ex) {
		System.err.println(ex.getClass().getName());
		System.err.println("WARNING: Can`t read " + optionFile + " !!!");
	    }

	    System.err.println("WARNING: JCFLAGS not found in " + optionFile + " !!!");
```

with:

```java
	    } catch (IOException ex) {
		Msg.warn("Can't read " + optionFile + ": " + ex.getClass().getName());
	    }

	    Msg.warn("JCFLAGS not found in " + optionFile);
```

Replace line 178:

```java
	System.err.println("WARNING: " + optionFile + " not found !!!");
```

with:

```java
	Msg.warn(optionFile + " not found");
```

Add an import after `import jx.compiler.CompilerOptions;` (line 11):

```java
import jx.compiler.Msg;
```

- [ ] **Step 4: Verify compilation**

```bash
ant compile -q 2>&1 | tail -3
```

Expected: BUILD SUCCESSFUL.

- [ ] **Step 5: Run the full test suite (Msg + existing)**

```bash
JUNIT="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/junit-4.13.2.jar"
HAMCREST="/Applications/Apache NetBeans.app/Contents/Resources/netbeans/platform/modules/ext/hamcrest-core-1.3.jar"
JAVA=/opt/homebrew/opt/openjdk/bin/java
$JAVA -cp "build/classes:build/test/classes:$JUNIT:$HAMCREST" org.junit.runner.JUnitCore test.MsgTest test.MsgOptionsTest test.JUnitCoreTest
```

Expected: all three `OK` — `OK (11 tests)`, `OK (7 tests)`, `OK (60 tests)`.

- [ ] **Step 6: Commit**

```bash
git add src/jx/compiler/CompilerOptionsNative.java src/jx/compiler/persistent/CodeFile.java src/jx/compspec/StartBuilder.java
git commit -m "feat(compiler): route remaining core-flow output through Msg"
```

---

## Manual smoke check (after all tasks)

Full end-to-end verification is a manual run because `CompileNative.main` fetches domain jars from GitHub and builds an ISO (network + heavy). With the compiler run via the NetBeans GUI (or the normal `CompileNative.main` invocation):

- Default run: expect version banner once, then `==> Compiling domain <file>.jll` / `-- done (X.Xs)` pairs, then `Create ISO` / `Done. File is: ...`. No per-class noise, no `Adding classes from ...` lines.
- `-q`: only `[WARN]`/`[ERROR]` lines (no progress).
- `-v`: per-class `Add class ...` and `Compiling method ...` lines appear.
- `-v:classes`: only the `classes` category verbose lines appear.
- `-debug`: `[debug]` lines appear; compile-failure stack traces print.
- Force a failure (e.g. bad input zip): a single `[ERROR] Compilation failed: <message>` line, exit code `1`, no NPE.
