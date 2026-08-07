# Teaching Notes

## Progress snapshot (from learning records)
- 0001: general compiler knowledge; AOT is new; targets x86 via LLVM IR
- 0002: JVM 1-slot vs 2-slot types (long/double), stack slots
- 0003: GUI audit framework (Swing compiler GUI)
- 0004: jll / jln persistent formats (CodeFile.java, vtable/Main.java)
- 0005: bytecode → native pipeline in jcore; ARM encoder (BinaryCodeDynamicARM) is Act 4
- 0006: long = register pair on 32-bit; three patterns (word-at-a-time, carry chain, helper call); ARM S-bit trap

## User preferences & style
- Mission is conceptual mastery of AOT, but lessons should be grounded in their own codebase where possible — file/line anchors land well.
- Lessons should be short, one tangible win each, one running example traced end-to-end.
- Quiz answers must be equal word length (no formatting clues).

## Open threads / things to revisit
- **Implementing long (Lesson 6):** the concrete next task. On the ARM encoder: (1) add x86-named shims (`addl`/`adcl`/`subl`/`sbbl`), (2) flag-setting low words (`ADDS`/`SUBS`, S bit), (3) implement `adc` (stub) and `sbc`/`DP_SBC` (missing), (4) wire `codeLong*` stubs to the existing `call`/BL + write ARM long-arithmetic helpers.
- **Bug found in reference x86 long paths:** `IMAdd.java:225` (`adcl(reg.high, reg.high)` should be `adcl(reg.high, result.high)`) and `IMBitAnd.java:97` (no-op `andl(reg.high, reg.high)`). IMBitOr/IMBitXor likely same. Worth confirming and fixing before using as a port reference.
- **The ARM seam:** `BinaryCodeDynamicARM` method names (`add`, `mov`, `cmp`) don't match the IM nodes' calls (`addl`, `movl`, `cmpl`), and `CodeContainer` still constructs `new BinaryCodeIA32()` (CodeContainer.java:111). Natural next lessons: the `code.*()` contract, or how to extract a backend interface.
- Still unsupported in ARM backend: `incl`, `lea` (partially), `adcl`, `imul`, memory operands, calls.
- The `.imcode` debug output (`StaticCompiler` option) is a great hook for a future "read a real method's IM output" exercise.
