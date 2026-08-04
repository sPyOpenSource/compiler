# Design: Compiler Console Messaging Overhaul

## Overview

The `jc` compiler's console output is inconsistent (mixed `System.out` / `System.err` / `Debug.out` / `java.util.logging.Logger` channels, ad-hoc prefixes like `"!! "`, `"warn: "`, `"WARNING: "`), noisy (an ungated per-class `println`, a hardcoded `static final opt_v = true`), missing phase/timing context, and broken on failure (host-side `jx.zero.Debug.out` is never initialized, so `Debug.out.println(...)` throws NPE and masks the real error).

This design introduces a single messaging facade, `jx.compiler.Msg`, with a five-level verbosity model, uniform formatting, phase banners with timing, and host-safe error reporting. It touches only the core compile flow; the backend, register allocator, and compiler plugins are out of scope and keep using `CompilerOptions.doVerbose()`.

## The `Msg` facade

A single static class `jx.compiler.Msg` in package `jx.compiler`. All level, channel, and format decisions live in one place; callers only state what happened.

### Levels

| Level | Channel | Format | Trigger |
|---|---|---|---|
| `error` | stderr | `[ERROR] <msg>` | always (also under `-q`) |
| `warn` | stderr | `[WARN] <msg>` | always |
| `info` | stdout | `<msg>` (no prefix) | default |
| `verbose` | stdout | `<msg>` | `-v` or `-v:<cats>` |
| `debug` | stdout | `[debug] <msg>` | `-debug` or `-debug:<cats>` |

### API

Messages are plain `String`s (codebase concat style); no `String.format`, so literal `%` never breaks a call site.

```java
Msg.error("Compilation failed: " + msg);
Msg.warn("Unknown option " + arg + " ignored");
Msg.info("Create ISO");
Msg.verbose("Compiling method " + name);
Msg.verbose("classes", "Add class " + name);   // category-gated
Msg.debug("native", "Reading lib linkerinfo from " + f);
Msg.verboseEnabled();   // predicate for gating multi-line detail
Msg.debugEnabled();
Msg.phase("Compiling domain", opts.getOutputFile());
Msg.phaseDone();
```

### State and initialization

- `threshold` (int, default `INFO`), `verboseCats` (`List<String>`, nullable), `debugCats` (`List<String>`, nullable).
- Uncategorized `Msg.verbose(...)` prints when `threshold >= VERBOSE && verboseCats == null`.
- Category `Msg.verbose(cat, ...)` prints when `threshold >= VERBOSE && (verboseCats == null || verboseCats.contains(cat))`. Same rule for `debug`/`debugCats`.
- `Msg.phase(...)` prints `==> <msg> <detail>` and stamps the start time; `Msg.phaseDone()` prints `-- done (<elapsed>s)`. Both are no-ops below the `info` threshold.

### CLI wiring

| Flag | Effect |
|---|---|
| *(default)* | threshold `info` |
| `-q` (new) | threshold `warn` |
| `-v` | threshold `verbose` |
| `-v:<cats>` | threshold `verbose`, gate by cat |
| `-debug` | threshold `debug` |
| `-debug:<cats>` | threshold `debug`, gate by cat |
| `-nodebug` | threshold `info` |

Existing `doVerbose()`, `doVerbose(kind)`, and `doDebug()` semantics on `CompilerOptions` are preserved for out-of-scope code (plugins, backend).

Initialization: `Msg.init(...)` is called at the end of `CompilerOptionsNative.parseArgs` and `parseOptionLine`, covering both the `jc` CLI and the `JC_CONFIG`-driven `CompileNative.main` (which the Swing GUI also runs). Uninitialized `Msg` defaults to `info` — safe fallback.

## Call-site migration

Out of scope: `src/jx/compiler/backend/*`, `src/jx/compiler/plugins/*`, `RegManager`, `MethodStackFrame`, `jx.zero.Debug`, `plugins/Debug.java`.

| File | Current | New |
|---|---|---|
| `CompileNative` | version banner via `System.out` | `Msg.info` |
| `CompileNative` | 4× `if (doDebug()) Debug.out.println(...)` | `Msg.debug("native", ...)` |
| `CompileNative` | "Create ISO" / "Done. File is" | `Msg.info`, wrapped in `Msg.phase`/`phaseDone` |
| `StaticCompiler` | `static final boolean opt_v = true`; ungated `println(name)` per class; "Add class ..." | removed; `Msg.verbose("classes", ...)` |
| `StaticCompiler` | "!! FAIL to inline" via `System.err` | `Msg.warn`; detail via `Msg.verbose("inline", ...)` |
| `StaticCompiler` | `Debug.out.println("Compilation Failed...")` + `Debug.throwError()` | `Msg.error(msg)` (fixes host NPE) |
| `CompilerOptions` | `printVerbose` → `System.out` | delegates to `Msg.verbose` |
| `CompilerOptionsNative` | `Debug.out` warn/exception prints | `Msg.warn` / `Msg.error` |
| `CodeFile` | `codesize:`, `**********Finished saving!`, unresolved-jump `Debug.out.println("ERROR: ...")` | `Msg.verbose("persist", ...)` / `Msg.error` |
| `StartBuilder` | 3× `System.err.println("WARNING: ...")` for JC_CONFIG | `Msg.warn` |

`CodeFile.toString()`/JSON-style `object.toString(4)` dump: migrated only where it is a debug dump; the verbose-gated `codesize:` print becomes `Msg.verbose("persist", ...)`.

## Error handling

- All host-side `Debug.out` calls are removed from the core flow, fixing the latent NPE where `jx.zero.Debug.out` is null on the host (its only setter is behind `if (debug)` with `debug` hardcoded `false`).
- Fatal `Logger.log(SEVERE, null, ex)` stack dumps in core-flow catch blocks become `Msg.error(realMessage)`; the full stack trace is printed only under `-debug` via `Msg.debugEnabled()`.
- `Debug.throwError` is left untouched (runtime `jx.zero` class, many import sites, out of scope).
- Exit codes unchanged: `0` success, `1` fatal.

## Example output

```
BEFORE (default run):
Native code compiler version 0.7.10-1.0
java/lang/Object
java/lang/String
...
Adding classes from existing lib
Add class java/lang/Object
...
[on failure: Debug.out NPE masks real error]

AFTER (default):
Native code compiler version 0.7.10-1.0
==> Compiling domain  app/isodir/code/zero.jll
-- done (2.1s)
==> Compiling domain  app/isodir/code/os.jll
-- done (31.4s)
...
Create ISO
Done. File is: build/ISOTest6.iso

AFTER (with -v):
Add class java/lang/String

AFTER (on failure):
[ERROR] Compilation failed: <actual message>
```

## Testing / verification

- Build with `ant`; run a domain compile with default flags, `-q`, `-v`, `-v:classes`, `-debug`, and `-nodebug`, and verify the output level/format for each.
- Force a compile failure and verify a single `[ERROR] ...` line appears (no NPE, no `SEVERE` stack dump at default level).
- Confirm exit codes: `0` on success, `1` on fatal failure.
