# 0006: Implementing long — 64-bit on 32-bit hardware

## Context
The user asked how to implement `long` support. The ARM encoder (`BinaryCodeDynamicARM`) has `codeLong*` stubs that all throw, and the IM nodes call x86-named primitives the ARM encoder doesn't implement. The lesson teaches the decomposition model that turns the stubs into real code.

## Key Insights
- **A 64-bit `long` on a 32-bit target is a register pair** — `Reg64.low`/`Reg64.high` (Reg64.java:17). This is the codegen consequence of the JVM two-slot rule (learning record 0002).
- **Every long op is one of three patterns**:
  1. **Word-at-a-time** (no carry): bitwise AND/OR/XOR — run the 32-bit op per word independently (`IMBitAnd.translate(Reg64)`, IMBitAnd.java:86).
  2. **Carry-chained**: add/sub/negate — low word sets the carry flag, high word consumes it (`IMAdd.translate(Reg64)`, IMAdd.java:212: `addl` + `adcl`; `IMSub` :196: `subl` + `sbbl`).
  3. **Runtime helper call**: mul/div/rem/shl/shr/ushr/lcmp — IA32 pushes args and calls `LongArithmeticSTEntry` (`ExecEnvironmentIA32.codeLongMul`, :1306).
- **The ARM trap**: x86 sets flags on every ALU op; ARM only when the S bit is set. The encoder's `add`/`sub` pass `s=false`, so the low-word add needs `ADDS`/`SUBS`, and the high word needs separate `ADC` (0x5) / `SBC` (0x6) opcodes. `DP_ADC` exists but `adc` is a stub; `sbc`/`DP_SBC` are missing entirely.
- **The helper-call ops need no new arithmetic opcodes** — `call(SymbolTableEntryBase)` already emits a relocatable `BL` (BinaryCodeDynamicARM.java:247).

## Surprise / Gap Found
- **Bug in the reference x86 long paths**: `IMAdd.java:225` calls `code.adcl(reg.high, reg.high)` — computes `reg.high = reg.high + reg.high + CF`, never touching `result.high`; should be `adcl(reg.high, result.high)`. `IMBitAnd.java:97` calls `code.andl(reg.high, reg.high)` — a no-op that drops `result.high` (IMBitOr/IMBitXor likely same). The x86 64-bit path is not a trustworthy source of truth; verify semantics when porting.

## Zone of Proximal Development
The user now understands the decomposition strategy. The concrete next step is closing the seams on the ARM encoder: (1) add the x86-named shims (`addl`/`adcl`/`subl`/`sbbl`), (2) add flag-setting low-word add/sub, (3) implement `adc` and `sbc`, (4) wire the `codeLong*` helper stubs to `call` + write the ARM long-arithmetic routines.

## References
- `lessons/0006-implementing-long-64bit-on-32bit.html`
- `src/jx/compiler/backend/Reg64.java` (:17 low/high, :13 pairs)
- `src/jx/compiler/imcode/graph/inst/ALU/IMAdd.java` (:212 translate(Reg64)), `IMSub.java` (:196), `IMBitAnd.java` (:86), `IMNeg.java` (:85)
- `src/jx/compiler/ExecEnvironmentIA32.java` (:1306 codeLongMul, :1332 Div, :1385 Shr, :1411 Shl, :1472 Compare)
- `src/jx/compiler/persistent/LongArithmeticSTEntry.java`
- `src/jx/compiler/backend/BinaryCodeDynamicARM.java` (:135 DP_ADC, :464 add s=false, :615 adc stub, :247 call/BL)
- `src/jx/compiler/imcode/graph/IMNode.java` (:297 translate dispatch)
