# Float proof-of-life on IA32 — Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Make `float test(float x, float y) { return x + y * 2.0f; }` compile through `CompileNative` to working IA32 native code and run correctly.

**Architecture:** Close the gaps between the already-present imcode float datatypes and the IA32 code generator: fix SSE scalar encodings, add `movss`/`movd`, add slot read/write and return paths for `RegFloat`, and enable the `FLOAT` case in `IMBasicBlock.translate`. Double and ARM float remain untouched.

**Tech Stack:** Java 17, NetBeans Ant build, x86 SSE.

## Global Constraints

- Java source/target level 17.
- Build with `ant`; tests with `ant test`.
- IA32 backend only; do not touch ARM/RISC-V.
- Do not change `IMBasicBlock`'s `DOUBLE` case (stays gated behind `isOption("long")`).
- Keep all existing `CompileException` propagation.
- Every task ends with `ant` compiling cleanly.

---

## File Structure

| File | Change |
|------|--------|
| `src/jx/compiler/backend/BinaryCodeIA32.java` | Fix SSE prefixes for `addss`/`mulss`/`cvtsi2ss`; add `movss` (load/store) and `movd` |
| `src/jx/compiler/backend/RegManager.java` | Add `readFloatRegisterFromSlot` / `writeFloatRegisterToSlot` |
| `src/jx/compiler/imcode/graph/inst/IMReadLocalVariable.java` | Add `translate(RegFloat)` / `translate(RegDouble)` |
| `src/jx/compiler/imcode/graph/inst/IMStoreLocalVariable.java` | Add `translate(RegFloat)` / `translate(RegDouble)` |
| `src/jx/compiler/imcode/graph/inst/IMConstant.java` | Add `translate(RegFloat)` / `translate(RegDouble)` |
| `src/jx/compiler/imcode/graph/inst/IMReturn.java` | Add `translate(RegFloat)` / `translate(RegDouble)` |
| `src/jx/compiler/imcode/graph/IMBasicBlock.java` | Enable `FLOAT` case (no longer nopped / gated on "long") |

---

### Task 1: BinaryCodeIA32 — fix SSE float prefixes and add movss/movd

**Files:**
- Modify: `src/jx/compiler/backend/BinaryCodeIA32.java`

**Interfaces:**
- Produces: `movss(Opr, RegFloat)`, `movss(RegFloat, Ref)`, `movd(Reg, RegFloat)`; corrected `addss`, `mulss`, `cvtsi2ss`

- [ ] **Step 1: Fix `addss` prefix** — edit method `addss`:
```java
    public void addss(RegFloat src, RegFloat des) {
	realloc();
	insertByte(0xF3);
	insertByte(0x0F);
	insertByte(0x58);
	insertModRM(des.value, src);
    }
```

- [ ] **Step 2: Fix `mulss` prefix**:
```java
    public void mulss(RegFloat src, RegFloat des) {
	realloc();
	insertByte(0xF3);
	insertByte(0x0F);
	insertByte(0x59);
	insertModRM(des.value, src);
    }
```

- [ ] **Step 3: Fix `cvtsi2ss`** (was `0x0F 0x28` = movaps; correct is `F3 0F 2A`):
```java
    public void cvtsi2ss(Reg src, RegFloat des) {
	realloc();
	insertByte(0xF3);
	insertByte(0x0F);
	insertByte(0x2A);
	insertModRM(des.value, src);
    }
```

- [ ] **Step 4: Add `movss` load/store** (after `cvtsi2ss`):
```java
    public void movss(Opr src, RegFloat des) {
	realloc();
	insertByte(0xF3);
	insertByte(0x0F);
	insertByte(0x10);
	insertModRM(des.value, src);
    }

    public void movss(RegFloat src, Ref des) {
	realloc();
	insertByte(0xF3);
	insertByte(0x0F);
	insertByte(0x11);
	insertModRM(src.value, des);
    }
```

- [ ] **Step 5: Add `movd` (reg → xmm)**:
```java
    public void movd(Reg src, RegFloat des) {
	realloc();
	insertByte(0x66);
	insertByte(0x0F);
	insertByte(0x6E);
	insertModRM(des.value, src);
    }
```

- [ ] **Step 6: Compile** — Run: `ant` → Expected: BUILD SUCCESSFUL

- [ ] **Step 7: Commit**
```bash
git add src/jx/compiler/backend/BinaryCodeIA32.java
git commit -m "feat(ia32): fix SSE float prefixes; add movss/movd"
```

---

### Task 2: RegManager — float slot read/write

**Files:**
- Modify: `src/jx/compiler/backend/RegManager.java`

**Interfaces:**
- Produces: `readFloatRegisterFromSlot(LocalVariable, RegFloat)`, `writeFloatRegisterToSlot(RegFloat, LocalVariable)`

- [ ] **Step 1: Add `readFloatRegisterFromSlot` after `readIntRegisterFromSlot`**:
```java
    public void readFloatRegisterFromSlot(LocalVariable slot, RegFloat reg) throws CompileException {
	int offset = frame.getOffset(slot);
	if (offset == 0) throw new Error("zero offset");
	code.movss(Ref.ebp.disp(offset), reg);
	reg.slot = slot;
	reg.valid = true;
    }
```

- [ ] **Step 2: Add `writeFloatRegisterToSlot` after `writeIntRegisterToSlot`**:
```java
    public void writeFloatRegisterToSlot(RegFloat reg, LocalVariable slot) throws CompileException {
	int offset = frame.getOffset(slot);
	if (offset == 0) throw new Error("zero offset");
	code.movss(reg, Ref.ebp.disp(offset));
    }
```

- [ ] **Step 3: Compile** — Run: `ant` → Expected: BUILD SUCCESSFUL

- [ ] **Step 4: Commit**
```bash
git add src/jx/compiler/backend/RegManager.java
git commit -m "feat(ia32): add float slot read/write to RegManager"
```

---

### Task 3: IMReadLocalVariable — add translate(RegFloat/RegDouble)

**Files:**
- Modify: `src/jx/compiler/imcode/graph/inst/IMReadLocalVariable.java`

**Interfaces:**
- Consumes: `regs.readFloatRegisterFromSlot`
- Produces: `translate(RegFloat)`, `translate(RegDouble)`

(`jx.compiler.backend.*` is already imported.)

- [ ] **Step 1: Add `translate(RegFloat)` after `translate(Reg)`**:
```java
    @Override
    public void translate(RegFloat result) throws CompileException {
	code.startBC(bcPosition);
	regs.readFloatRegisterFromSlot(lvar, result);
	code.endBC();
    }
```

- [ ] **Step 2: Add `translate(RegDouble)`** (double out of scope; throw to keep gated):
```java
    @Override
    public void translate(RegDouble result) throws CompileException {
	throw new CompileException(getLineInfo() + " double translation not implemented!");
    }
```

- [ ] **Step 3: Compile** — Run: `ant` → Expected: BUILD SUCCESSFUL

- [ ] **Step 4: Commit**
```bash
git add src/jx/compiler/imcode/graph/inst/IMReadLocalVariable.java
git commit -m "feat(ia32): add float/double translate to IMReadLocalVariable"
```

---

### Task 4: IMStoreLocalVariable — add translate(RegFloat/RegDouble)

**Files:**
- Modify: `src/jx/compiler/imcode/graph/inst/IMStoreLocalVariable.java`

**Interfaces:**
- Consumes: `regs.writeFloatRegisterToSlot`
- Produces: `translate(RegFloat)`, `translate(RegDouble)`

(`jx.compiler.backend.*` already imported.)

- [ ] **Step 1: Add `translate(RegFloat)` after `translate(Reg64)`**:
```java
    @Override
    public void translate(RegFloat result) throws CompileException {
	operant.translate(result);
	code.startBC(bcPosition);
	regs.writeFloatRegisterToSlot(result, lvar);
	code.endBC();
    }
```

- [ ] **Step 2: Add `translate(RegDouble)`**:
```java
    @Override
    public void translate(RegDouble result) throws CompileException {
	throw new CompileException(getLineInfo() + " double translation not implemented!");
    }
```

- [ ] **Step 3: Compile** — Run: `ant` → Expected: BUILD SUCCESSFUL

- [ ] **Step 4: Commit**
```bash
git add src/jx/compiler/imcode/graph/inst/IMStoreLocalVariable.java
git commit -m "feat(ia32): add float/double translate to IMStoreLocalVariable"
```

---

### Task 5: IMConstant — add translate(RegFloat/RegDouble)

**Files:**
- Modify: `src/jx/compiler/imcode/graph/inst/IMConstant.java`

**Interfaces:**
- Produces: `translate(RegFloat)`, `translate(RegDouble)`

- [ ] **Step 1: Add `translate(RegFloat)` after `translate(Reg64)`**:
```java
    @Override
    public void translate(RegFloat result) throws CompileException {
	code.startBC(bcPosition);
	if (cpEntry == null) {
	    // fconst_0/1/2: value is small int 0/1/2
	    Reg r = regs.getIntRegister(Reg.any);
	    code.movl(value, r);
	    code.cvtsi2ss(r, result);
	    regs.freeIntRegister(r);
	} else {
	    float fv = getFloatValue();
	    if (fv == (float)(int)fv) {
		Reg r = regs.getIntRegister(Reg.any);
		code.movl((int)fv, r);
		code.cvtsi2ss(r, result);
		regs.freeIntRegister(r);
	    } else {
		Reg r = regs.getIntRegister(Reg.any);
		code.movl(Float.floatToRawIntBits(fv), r);
		code.movd(r, result);
		regs.freeIntRegister(r);
	    }
	}
	code.endBC();
    }
```

- [ ] **Step 2: Add `translate(RegDouble)`** (double out of scope; throw):
```java
    @Override
    public void translate(RegDouble result) throws CompileException {
	throw new CompileException(getLineInfo() + " double translation not implemented!");
    }
```

- [ ] **Step 3: Compile** — Run: `ant` → Expected: BUILD SUCCESSFUL

- [ ] **Step 4: Commit**
```bash
git add src/jx/compiler/imcode/graph/inst/IMConstant.java
git commit -m "feat(ia32): add float/double translate to IMConstant"
```

---

### Task 6: IMReturn — add translate(RegFloat/RegDouble)

**Files:**
- Modify: `src/jx/compiler/imcode/graph/inst/IMReturn.java`

**Interfaces:**
- Produces: `translate(RegFloat)`, `translate(RegDouble)`

- [ ] **Step 1: Add `translate(RegFloat)` after `translate(Reg64)`**:
```java
    @Override
    public void translate(RegFloat result) throws CompileException {
	if (retValue != null) {
	    retValue.translate(RegFloat.xmm0);
	}
	if (!ownBasicBlock.isLastBasicBlock()) {
	    IMBasicBlock epilog = container.getEpilog();
	    code.jmp(epilog.getNewJumpTarget());
	}
    }
```

- [ ] **Step 2: Add `translate(RegDouble)`** (double out of scope; throw):
```java
    @Override
    public void translate(RegDouble result) throws CompileException {
	throw new CompileException(getLineInfo() + " double translation not implemented!");
    }
```

- [ ] **Step 3: Compile** — Run: `ant` → Expected: BUILD SUCCESSFUL

- [ ] **Step 4: Commit**
```bash
git add src/jx/compiler/imcode/graph/inst/IMReturn.java
git commit -m "feat(ia32): add float/double translate to IMReturn"
```

---

### Task 7: IMBasicBlock — enable FLOAT case

**Files:**
- Modify: `src/jx/compiler/imcode/graph/IMBasicBlock.java`

**Interfaces:**
- Consumes: `node.translate(RegFloat)`

- [ ] **Step 1: Change the FLOAT/DOUBLE case** in `translate(Reg result)`. Current:
```java
                case BCBasicDatatype.FLOAT:
                case BCBasicDatatype.DOUBLE:
                    if(opts.isOption("long")){
                    RegDouble rd = regs.chooseDoubleRegister();
                    node.translate(rd);
                    regs.freeDoubleRegister(rd);
                    } else code.nop();
                    //execEnv.codeThrow(this,-11,bcPosition);
                    break;
```
Replace with:
```java
                case BCBasicDatatype.FLOAT:
                    {
                    RegFloat rf = regs.chooseFloatRegister();
                    node.translate(rf);
                    regs.freeFloatRegister(rf);
                    }
                    break;
                case BCBasicDatatype.DOUBLE:
                    if (opts.isOption("long")) {
                        RegDouble rd = regs.chooseDoubleRegister();
                        node.translate(rd);
                        regs.freeDoubleRegister(rd);
                    } else {
                        code.nop();
                    }
                    break;
```

- [ ] **Step 2: Compile** — Run: `ant` → Expected: BUILD SUCCESSFUL

- [ ] **Step 3: Commit**
```bash
git add src/jx/compiler/imcode/graph/IMBasicBlock.java
git commit -m "feat(ia32): enable float codegen in IMBasicBlock.translate"
```

---

### Task 8: Verify — build, run a float test method

**Files:**
- Test: hand-written Java test class

- [ ] **Step 1: Clean build**
```bash
ant clean && ant
```
Expected: BUILD SUCCESSFUL

- [ ] **Step 2: Compile a test class with a float method**

Create `FloatTest.java`:
```java
public class FloatTest {
    public float test(float x, float y) {
        return x + y * 2.0f;
    }
}
```
Compile with javac, then run through CompileNative (consult README / existing build scripts for the native compile invocation). Confirm no "float translation not implemented" error and a native binary is produced.

- [ ] **Step 3: Run the native binary** under the x86 emulator/host and confirm `test(3.0f, 4.0f)` returns `11.0f`.

- [ ] **Step 4: Run existing tests**
```bash
ant test
```
Expected: all suites pass (no regressions).

- [ ] **Step 5: Final commit**
```bash
git add -A
git commit -m "feat(ia32): minimal float proof-of-life end-to-end"
```

---

## Self-Review

**Spec coverage:** All 7 components from the spec map to Tasks 1-7; verification is Task 8. ✓

**Placeholder scan:** No TBD/TODO. All code blocks show exact code. Commands are concrete. ✓

**Type consistency:** `regs.readFloatRegisterFromSlot` / `writeFloatRegisterToSlot` defined in Task 2 and consumed in Tasks 3-4. `translate(RegFloat)` defined in Tasks 3-6 and consumed in Task 7. `RegFloat.xmm0`, `RegDouble.xmm0` exist (verified). `regs.chooseFloatRegister()` / `freeFloatRegister()` exist. `code.movss`, `code.movd`, `code.cvtsi2ss` defined in Task 1. ✓
<|end|><|start|>start_of_turn<|channel|>assistant to=shell<|channel|>analysis <|constrain|>xml<|message|><rfl:parameter name="command">
cd /Users/xuyi/Source/OS/armOS/lib/jcore/Compiler && grep -n "allocFloatRegister\|allocDoubleRegister\|allocIntRegister" src/jx/compiler/backend/RegManager.java | head