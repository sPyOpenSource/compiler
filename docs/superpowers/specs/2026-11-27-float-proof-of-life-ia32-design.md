# Design: Minimal float proof-of-life on IA32

## Overview

Implement end-to-end `float` support on the IA32 (x86) backend for a minimal proof-of-life: a method such as `float test(float x, float y) { return x + y * 2.0f; }` compiles through `CompileNative` to working IA32 native code and runs, returning the correct value. Double, other float ops (fcmp, conversions), and ARM float are explicitly out of scope for this pass.

The bytecode parser (`CodeContainer.BCParser`) and the imcode ALU nodes (`IMAdd`, `IMMul`, …) already carry `FLOAT` datatypes and `translate(RegFloat)` methods, but the code-generation path skips float nodes (`code.nop()`) in `IMBasicBlock.translate`, the SSE encoder is missing prefixes/`movss`/`movd`, and the slot-access / return paths have no float variants. This design closes those gaps.

## Components touched

1. **`src/jx/compiler/backend/BinaryCodeIA32.java`** — SSE float encoder
   - Add the missing `0xF3` (ss) / `0xF2` (sd) prefixes to the existing float/double SSE ops so they are correct scalar instructions.
   - Add `movss(Opr src, RegFloat des)` (load) and `movss(RegFloat src, Ref des)` (store).
   - Add `movd(Reg src, RegFloat des)` to materialize arbitrary float constants from their int bits.

2. **`src/jx/compiler/backend/RegManager.java`** — float slot access
   - Add `readFloatRegisterFromSlot` / `writeFloatRegisterToSlot` (and double variants) using `movss`, mirroring the int/long accessors.

3. **`src/jx/compiler/imcode/graph/inst/IMReadLocalVariable.java`** — add `translate(RegFloat)` and `translate(RegDouble)`.

4. **`src/jx/compiler/imcode/graph/inst/IMStoreLocalVariable.java`** — add `translate(RegFloat)` and `translate(RegDouble)` (translate operant → reg, then store; no constant special-casing).

5. **`src/jx/compiler/imcode/graph/inst/IMConstant.java`** — add `translate(RegFloat)` (fconst small ints via `cvtsi2ss`; ldc float via `movd` of `Float.floatToRawIntBits`) and `translate(RegDouble)`.

6. **`src/jx/compiler/imcode/graph/inst/IMReturn.java`** — add `translate(RegFloat)` and `translate(RegDouble)` that compute the result into `xmm0` and jump to the epilog if not the last basic block.

7. **`src/jx/compiler/imcode/graph/IMBasicBlock.java`** — in `translate(Reg)`, change the `FLOAT` case from `code.nop()` to allocate a `RegFloat`, call `node.translate(rd)`, free it (no longer gated on `isOption("long")`). Keep `DOUBLE` gated behind `isOption("long")` for this pass.

## Data flow

Java bytecode → `CodeContainer.BCParser` (already builds float imcode nodes) → `IMBasicBlock.translate` now generates SSE float code via the new `RegFloat` path → native IA32. Float results live in `xmm0` on return (standard x86 calling convention).

## Error handling

`CompileException` propagation unchanged. Float nodes not yet implemented (fcmp, f2i, i2f, …) still throw "float translation not implemented" — acceptable for this proof-of-life.

## Testing / verification

Compile a small Java test class containing `float test(float x, float y) { return x + y * 2.0f; }` through `CompileNative`, run the resulting native binary under the available x86 emulator/host, and confirm the returned value equals `x + y*2`.

## Scope check

Bounded to IA32 float proof-of-life. Double, other float ops, and ARM float are explicitly out of scope and remain as-is.
