# Bytecode to ARM Minimal Instruction Set Implementation Plan

> **For Hermes:** Use subagent-driven-development skill to implement this plan task-by-task.

**Goal:** Implement a minimal subset of integer arithmetic and stack operations in `BinaryCodeDynamicARM.java` to support a small VM.

**Architecture:** Pattern-based expansion from `BinaryCodeIA32` to `BinaryCodeDynamicARM`. Uses existing `dpr` (Data Processing Register) and `dpi` (Data Processing Immediate) helpers for ARM encoding.

**Tech Stack:** Java, ARMv7 assembly encoding.

---

### Task 1: Implement `mov` (Data Movement)

**Objective:** Replace `UnsupportedOperationException` in `mov` methods with ARM `MOV` encodings.

**Files:**
- Modify: `/Users/xuyi/Source/OS/armOS/lib/jcore/Compiler/src/jx/compiler/backend/BinaryCodeDynamicARM.java`

**Step 1: Implement `mov(Opr src, Reg des)`**
Replace the current implementation with:
```java
    public void mov(Opr src, Reg des) {
        if (src.tag == Opr.REG) {
            dpr(C_AL, DP_MOV, false, des.value, 0, src.value);
        } else {
            throw new UnsupportedOperationException("ARM mov non-reg not supported");
        }
    }
```

**Step 2: Implement `mov(int immd, Opr des)`**
Replace the current implementation with:
```java
    public void mov(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            int sh = rotImm8(immd);
            if (sh >= 0) {
                dpi(C_AL, DP_MOV, false, des.value, 0, sh);
            } else {
                // For non-encodable immediates in a minimal VM, we'll throw 
                // but in a full impl we would use a literal pool.
                throw new UnsupportedOperationException("ARM mov imm not encodable: 0x" + Integer.toHexString(immd));
            }
        } else {
            throw new UnsupportedOperationException("ARM mov mem not supported");
        }
    }
```

**Step 3: Commit**
```bash
git add src/jx/compiler/backend/BinaryCodeDynamicARM.java
git commit -m "feat(arm): implement minimal mov instructions"
```

---

### Task 2: Implement Basic Arithmetic (`add`, `sub`)

**Objective:** Implement register and immediate addition and subtraction.

**Files:**
- Modify: `/Users/xuyi/Source/OS/armOS/lib/jcore/Compiler/src/jx/compiler/backend/BinaryCodeDynamicARM.java`

**Step 1: Implement `add(Opr src, Reg des)` and `add(int immd, Opr des)`**
Replace with:
```java
    public void add(Opr src, Reg des) { 
        if (src.tag == Opr.REG) {
            dpr(C_AL, DP_ADD, false, des.value, des.value, src.value);
        } else {
            throw new UnsupportedOperationException("ARM add non-reg not supported");
        }
    }

    public void add(int immd, Opr des) { 
        if (des.tag == Opr.REG) {
            int sh = rotImm8(immd);
            if (sh >= 0) {
                dpi(C_AL, DP_ADD, false, des.value, des.value, sh);
            } else {
                throw new UnsupportedOperationException("ARM add imm not encodable: " + immd);
            }
        } else {
            throw new UnsupportedOperationException("ARM add mem not supported");
        }
    }
```

**Step 2: Implement `sub(Opr src, Reg des)` and `sub(int immd, Opr des)`**
Replace with:
```java
    public void sub(Opr src, Reg des) { 
        if (src.tag == Opr.REG) {
            dpr(C_AL, DP_SUB, false, des.value, des.value, src.value);
        } else {
            throw new UnsupportedOperationException("ARM sub non-reg not supported");
        }
    }

    public void sub(int immd, Opr des) { 
        if (des.tag == Opr.REG) {
            int sh = rotImm8(immd);
            if (sh >= 0) {
                dpi(C_AL, DP_SUB, false, des.value, des.value, sh);
            } else {
                throw new UnsupportedOperationException("ARM sub imm not encodable: " + immd);
            }
        } else {
            throw new UnsupportedOperationException("ARM sub mem not supported");
        }
    }
```

**Step 3: Commit**
```bash
git add src/jx/compiler/backend/BinaryCodeDynamicARM.java
git commit -m "feat(arm): implement minimal add and sub instructions"
```

---

### Task 3: Implement Logical Operations (`and`, `orr`, `xorl`, `notl`)

**Objective:** Implement bitwise logical operations.

**Files:**
- Modify: `/Users/xuyi/Source/OS/armOS/lib/jcore/Compiler/src/jx/compiler/backend/BinaryCodeDynamicARM.java`

**Step 1: Implement `and`, `orr`, `xorl`** (both Reg and Imm variants)
Using the same pattern as `add`/`sub` but with `DP_AND`, `DP_ORR`, and `DP_EOR`.
Example for `and`:
```java
    public void and(Opr src, Reg des) { 
        if (src.tag == Opr.REG) {
            dpr(C_AL, DP_AND, false, des.value, des.value, src.value);
        } else {
            throw new UnsupportedOperationException("ARM and non-reg not supported");
        }
    }

    public void and(int immd, Opr des) { 
        if (des.tag == Opr.REG) {
            int sh = rotImm8(immd);
            if (sh >= 0) {
                dpi(C_AL, DP_AND, false, des.value, des.value, sh);
            } else {
                throw new UnsupportedOperationException("ARM and imm not encodable: " + immd);
            }
        } else {
            throw new UnsupportedOperationException("ARM and mem not supported");
        }
    }
```
(Repeat similar logic for `orr` with `DP_ORR` and `xorl` with `DP_EOR`).

**Step 2: Implement `notl(Opr opr)`**
Replace with:
```java
    public void notl(Opr opr) {
        if (opr.tag == Opr.REG) {
            // MVN Rd, Rm
            dpr(C_AL, DP_MVN, false, opr.value, 0, opr.value);
        } else {
            throw new UnsupportedOperationException("ARM not non-reg not supported");
        }
    }
```

**Step 3: Commit**
```bash
git add src/jx/compiler/backend/BinaryCodeDynamicARM.java
git commit -m "feat(arm): implement minimal logical instructions"
```

---

### Task 4: Implement Comparison and Testing (`cmp`, `test`)

**Objective:** Implement instructions that set the condition flags.

**Files:**
- Modify: `/Users/xuyi/Source/OS/armOS/lib/jcore/Compiler/src/jx/compiler/backend/BinaryCodeDynamicARM.java`

**Step 1: Implement `cmp(Opr src, Reg des)` and `cmp(int immd, Opr des)`**
Replace with:
```java
    public void cmp(Opr src, Reg des) {
        if (src.tag == Opr.REG) {
            // CMP sets flags, Rd is ignored (passed as 0)
            dpr(C_AL, DP_CMP, true, 0, des.value, src.value);
        } else {
            throw new UnsupportedOperationException("ARM cmp non-reg not supported");
        }
    }

    public void cmp(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            int sh = rotImm8(immd);
            if (sh >= 0) {
                dpi(C_AL, DP_CMP, true, 0, des.value, sh);
            } else {
                throw new UnsupportedOperationException("ARM cmp imm not encodable: " + immd);
            }
        } else {
            throw new UnsupportedOperationException("ARM cmp mem not supported");
        }
    }
```

**Step 2: Implement `test(Opr src, Reg des)` and `test(int immd, Opr des)`**
Replace with:
```java
    public void test(Opr src, Reg des) {
        if (src.tag == Opr.REG) {
            // TST is AND with S=1, Rd=0
            dpr(C_AL, DP_AND, true, 0, des.value, src.value);
        } else {
            throw new UnsupportedOperationException("ARM test non-reg not supported");
        }
    }

    public void test(int immd, Opr des) {
        if (des.tag == Opr.REG) {
            int sh = rotImm8(immd);
            if (sh >= 0) {
                dpi(C_AL, DP_AND, true, 0, des.value, sh);
            } else {
                throw new UnsupportedOperationException("ARM test imm not encodable: " + immd);
            }
        } else {
            throw new UnsupportedOperationException("ARM test mem not supported");
        }
    }
```

**Step 3: Commit**
```bash
git add src/jx/compiler/backend/BinaryCodeDynamicARM.java
git commit -m "feat(arm): implement minimal cmp and test instructions"
```

---

### Task 5: Implement Control Flow (`je`, `jne`, `jl`, `jg`, `jmp`)

**Objective:** Implement branching based on the condition flags set by `cmp` or `test`.

**Files:**
- Modify: `/Users/xuyi/Source/OS/armOS/lib/jcore/Compiler/src/jx/compiler/backend/BinaryCodeDynamicARM.java`

**Step 1: Implement conditional branches**
Replace the `UnsupportedOperationException` in `je`, `jne`, `jl`, `jg` with calls to `emitBranch(cond, rel)`.
- `je(int rel)` $\rightarrow$ `emitBranch(C_EQ, rel)`
- `jne(int rel)` $\rightarrow$ `emitBranch(C_NE, rel)`
- `jl(int rel)` $\rightarrow$ `emitBranch(C_MI, rel)` (Assuming signed comparison)
- `jg(int rel)` $\rightarrow$ `emitBranch(C_MI, rel)` (Will need to refine condition for GT)

**Step 2: Implement `b(int rel)` (Unconditional Branch)**
```java
    public void b(int rel) { 
        emitBranch(C_AL, rel); 
    }
```

**Step 3: Commit**
```bash
git add src/jx/compiler/backend/BinaryCodeDynamicARM.java
git commit -m "feat(arm): implement minimal branching"
```

---

### Task 6: Implement Stack Operations (`push`, `pop`)

**Objective:** Implement basic stack push and pop.

**Files:**
- Modify: `/Users/xuyi/Source/OS/armOS/lib/jcore/Compiler/src/jx/compiler/backend/BinaryCodeDynamicARM.java`

**Step 1: Implement `push(Reg reg)`**
```java
    public void push(Reg reg) {
        // STMDB SP!, {reg}
        emitWord(0xE92D0000 | (1 << reg.value));
    }
```

**Step 2: Implement `pop(Reg reg)`**
```java
    public void pop(Reg reg) {
        // LDMIA SP!, {reg}
        emitWord(0xE8BD0000 | (1 << reg.value));
    }
```

**Step 3: Commit**
```bash
git add src/jx/compiler/backend/BinaryCodeDynamicARM.java
git commit -m "feat(arm): implement minimal push and pop"
```
