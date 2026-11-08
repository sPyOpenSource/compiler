# Compiler Optimization Flags Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Make the compiler's optimization flags directly control their mid-level imcode passes, remove the confusing `experimentalCode` gate, and flip the native-build `doOptimize` default to `true` — so `-O`/`-O2`/native builds actually optimize.

**Architecture:** Two existing files only — `src/jx/compiler/imcode/CodeContainer.java` (holds the imcode optimization passes and their gates) and `src/jx/compiler/CompilerOptionsNative.java` (holds native-build defaults). No new classes, no new CLI options, no architecture-specific changes. All three backends (IA32/ARM/RISC-V) read the same `CompilerOptions`, so behavior stays consistent across targets.

**Tech Stack:** Java 17, NetBeans Ant build, JUnit 4 for tests.

## Global Constraints

- Java source/target level 17 (per `nbproject/project.properties`).
- Build with `ant`; tests with `ant test` (JUnit 4).
- Do not add new files, new CLI options, or new classes.
- Do not change any backend (IA32/ARM/RISC-V) code.
- Keep all existing `CompileException` propagation in `constant_forwarding`/`constant_folding` unchanged.
- Every task ends with `ant` compiling cleanly and existing tests passing.

---

## File Structure

| File | Responsibility | Change |
|------|---------------|--------|
| `src/jx/compiler/imcode/CodeContainer.java` | imcode pass container; runs optimization passes over the imcode graph | Remove `experimentalCode` field; wire its two guarded passes to `opts.doOptimize()`; wire `constant_forwarding()` to `opts.doOptimize()` instead of `opts.isOption("cfor")`; drop the `isOption("O5")` wrapper around the exec-path reorder block |
| `src/jx/compiler/CompilerOptionsNative.java` | native build defaults + CLI arg parsing | Flip `doOptimize` default from `false` to `true` |

---

### Task 1: CodeContainer — remove `experimentalCode` field

**Files:**
- Modify: `src/jx/compiler/imcode/CodeContainer.java:77-82`

**Interfaces:**
- Consumes: none (field removal only)
- Produces: field `experimentalCode` no longer exists; all references to it removed in later tasks

- [ ] **Step 1: Delete the `experimentalCode` field**

Edit `src/jx/compiler/imcode/CodeContainer.java`:

```java
    private boolean          smallMethod      = true;
    private boolean          leafMethod       = true;
-   private boolean          experimentalCode = true;

    private ExceptionHandlerData[] handlers;
```

- [ ] **Step 2: Compile to confirm the field removal alone doesn't break anything**

Run: `ant`
Expected: BUILD SUCCESSFUL (note: `experimentalCode` is still referenced at lines 350/794, so this compile will FAIL until Task 2 — that's expected; confirm the only errors are the two `cannot find symbol experimentalCode` errors)

- [ ] **Step 3: Commit**

```bash
git add src/jx/compiler/imcode/CodeContainer.java
git commit -m "refactor(compiler): remove experimentalCode field from CodeContainer"
```

---

### Task 2: CodeContainer — wire `experimentalCode`-guarded passes to `doOptimize()`

**Files:**
- Modify: `src/jx/compiler/imcode/CodeContainer.java:350` (goto-forwarding pass)
- Modify: `src/jx/compiler/imcode/CodeContainer.java:794` (compact-new dead-store pass)

**Interfaces:**
- Consumes: `opts.doOptimize()` (already exists on `CompilerOptions`)
- Produces: both passes now run whenever `doOptimize()` is true, independent of the removed `experimentalCode` field

- [ ] **Step 1: Fix goto-forwarding gate (line 350)**

Edit `src/jx/compiler/imcode/CodeContainer.java`:

```java
-       if (experimentalCode && opts.doOptimize()) {
+       if (opts.doOptimize()) {
         if (inode instanceof IMGoto igoto) {
           IMBasicBlock targets[] = igoto.getTargets();
```

- [ ] **Step 2: Fix compact-new dead-store gate (line 794)**

Edit `src/jx/compiler/imcode/CodeContainer.java`:

```java
-       if (experimentalCode && opts.doOptimize()) {
+       if (opts.doOptimize()) {
          /*
            b0 = new ..()
            vn = b0; | throw b0; | return b0;
            remove b0 if b0 is dead
          */
```

- [ ] **Step 3: Compile to confirm no remaining `experimentalCode` references**

Run: `ant`
Expected: BUILD SUCCESSFUL, no `cannot find symbol experimentalCode` errors

- [ ] **Step 4: Commit**

```bash
git add src/jx/compiler/imcode/CodeContainer.java
git commit -m "refactor(compiler): gate CodeContainer passes on doOptimize() instead of experimentalCode"
```

---

### Task 3: CodeContainer — wire `constant_forwarding()` to `doOptimize()`

**Files:**
- Modify: `src/jx/compiler/imcode/CodeContainer.java:976`

**Interfaces:**
- Consumes: `opts.doOptimize()` (already exists)
- Produces: constant forwarding + constant folding now run under `doOptimize()` instead of the non-CLI `isOption("cfor")` string option

- [ ] **Step 1: Change the `constant_forwarding` gate**

Edit `src/jx/compiler/imcode/CodeContainer.java`:

```java
-   if (opts.isOption("cfor")) constant_forwarding();
+   if (opts.doOptimize()) constant_forwarding();
```

- [ ] **Step 2: Compile**

Run: `ant`
Expected: BUILD SUCCESSFUL

- [ ] **Step 3: Commit**

```bash
git add src/jx/compiler/imcode/CodeContainer.java
git commit -m "refactor(compiler): gate constant_forwarding on doOptimize() instead of isOption(cfor)"
```

---

### Task 4: CodeContainer — drop `isOption("O5")` wrapper around exec-path reorder

**Files:**
- Modify: `src/jx/compiler/imcode/CodeContainer.java:385` (outer `O5` guard)

**Interfaces:**
- Consumes: `opts.doOptExecPath()` and per-method `path_<class>.<method>` option (both already exist)
- Produces: the swap-jump exec-path reorder block runs under `doOptExecPath()` alone (plus the existing per-method override), no longer requiring the obscure `O5` string option

- [ ] **Step 1: Remove the outer `isOption("O5")` requirement**

Edit `src/jx/compiler/imcode/CodeContainer.java`:

```java
-   if (opts.isOption("O5")) {
-       inode = imCodeStart;
-       while (inode != null) {
-           if (inode.isBasicBlock()) {
-               basicBlock = (IMBasicBlock)inode;
-           } else if (inode.isInstruction() && inode.next != null) {
-               if (opts.doOptExecPath() || opts.isOption("path_" + method.getClassName() + "." + method.getName())) {
-                   if (inode.isEndOfBasicBlock() &&
-                       inode.isBranch() &&
-                       inode.next.isLowPriorityPath()) {
-                       if (inode instanceof IMConditionalBranch bnode) {
-                           IMBasicBlock succ[] = bnode.getTargets();
-                           if (opts.doVerbose("path"))
-                               Debug.out.println("o:" + bnode.toString());
-                           try {
-                               bnode.addDebugInfo("swap jump " + succ[0].toLabel() + " " + succ[1].toLabel());
-                           } catch (Exception ex) {
-                               bnode.addDebugInfo("swap jump");
-                           }
-                           moveBasicBlockToEnd(succ[0]);
-                           bnode.swapJumpTargets();
-                           if (opts.doVerbose("path"))
-                               Debug.out.println("n:" + bnode.toString());
-                       }
-                   }
-               }
-           }
-           inode = inode.next;
-       } /* while */
-   }
```

Replace with the same body indented one level less, guarded only by the existing inner condition:

```java
    inode = imCodeStart;
    while (inode != null) {
        if (inode.isBasicBlock()) {
            basicBlock = (IMBasicBlock)inode;
        } else if (inode.isInstruction() && inode.next != null) {
            if (opts.doOptExecPath() || opts.isOption("path_" + method.getClassName() + "." + method.getName())) {
                if (inode.isEndOfBasicBlock() &&
                    inode.isBranch() &&
                    inode.next.isLowPriorityPath()) {
                    if (inode instanceof IMConditionalBranch bnode) {
                        IMBasicBlock succ[] = bnode.getTargets();
                        if (opts.doVerbose("path"))
                            Debug.out.println("o:" + bnode.toString());
                        try {
                            bnode.addDebugInfo("swap jump " + succ[0].toLabel() + " " + succ[1].toLabel());
                        } catch (Exception ex) {
                            bnode.addDebugInfo("swap jump");
                        }
                        moveBasicBlockToEnd(succ[0]);
                        bnode.swapJumpTargets();
                        if (opts.doVerbose("path"))
                            Debug.out.println("n:" + bnode.toString());
                    }
                }
            }
        }
        inode = inode.next;
    } /* while */
```

- [ ] **Step 2: Compile**

Run: `ant`
Expected: BUILD SUCCESSFUL

- [ ] **Step 3: Commit**

```bash
git add src/jx/compiler/imcode/CodeContainer.java
git commit -m "refactor(compiler): drop isOption(O5) wrapper from exec-path reorder block"
```

---

### Task 5: CompilerOptionsNative — flip `doOptimize` default to `true`

**Files:**
- Modify: `src/jx/compiler/CompilerOptionsNative.java:256`

**Interfaces:**
- Consumes: none
- Produces: native builds now have `doOptimize = true` by default (overridable by the user via CLI)

- [ ] **Step 1: Change the default**

Edit `src/jx/compiler/CompilerOptionsNative.java` in `parseArgs`'s "set defaults" section:

```java
-	doOptimize           = false;
+	doOptimize           = true;
```

- [ ] **Step 2: Compile**

Run: `ant`
Expected: BUILD SUCCESSFUL

- [ ] **Step 3: Commit**

```bash
git add src/jx/compiler/CompilerOptionsNative.java
git commit -m "refactor(compiler): native builds optimize by default (doOptimize=true)"
```

---

### Task 6: Verify — build + existing test suite, then final commit

**Files:**
- Test: `test/test/` (existing JUnit 4 tests)

**Interfaces:**
- Consumes: compiled classes from Tasks 1–5
- Produces: confirmed green build and green test suite

- [ ] **Step 1: Clean build from scratch**

Run: `ant clean && ant`
Expected: BUILD SUCCESSFUL

- [ ] **Step 2: Run existing JUnit tests**

Run: `ant test`
Expected: BUILD SUCCESSFUL; all existing tests pass (no regressions from the flag-gate changes)

- [ ] **Step 3: Final commit**

```bash
git add -A
git commit -m "refactor(compiler): optimization flags control their passes directly; native doOptimize defaults to true"
```

---

## Self-Review

**Spec coverage:** Every requirement in the spec maps to a task:
- Remove `experimentalCode` gate → Task 1 & 2
- `constant_forwarding` gated by `doOptimize` instead of `isOption("cfor")` → Task 3
- Exec-path reorder no longer requires `isOption("O5")` → Task 4
- Native `doOptimize` default `false` → `true` → Task 5
- Consistent across IA32/ARM/RISC-V (no backend changes) → satisfied by design
- No new classes/CLI options → satisfied

**Placeholder scan:** No TBD/TODO/incomplete sections. All code blocks show exact before/after. All commands are concrete. No "write tests for the above" without test code (the verification task uses the existing test suite).

**Type consistency:** All referenced symbols (`opts.doOptimize()`, `opts.doOptExecPath()`, `opts.isOption(...)`, `constant_forwarding()`, `moveBasicBlockToEnd`, `bnode.swapJumpTargets()`, `doOptimize` field) already exist in the codebase per my exploration. No new types introduced.

The plan is complete and ready for execution.

---

**Plan complete and saved to `docs/superpowers/plans/2026-11-09-compiler-optimization-flags.md`.**

Two execution options:

**1. Subagent-Driven (recommended)** - I dispatch a fresh subagent per task, review between tasks, fast iteration

**2. Inline Execution** - I execute tasks in this session using executing-plans, batch execution with checkpoints for review

**Which approach?**
