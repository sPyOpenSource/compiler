# Design: Bytecode to ARM Minimal Instruction Set

## Overview
This design implements a minimal subset of integer arithmetic and stack operations for a small VM, translating from a pattern established in the IA32 backend to the ARM architecture.

## Instruction Mapping

| IA32 Operation | ARM Instruction | Encoding Strategy |
| :--- | :--- | :--- |
| `addl` | `ADD` | `dpr`/`dpi` (Register/Immediate) |
| `subl` | `SUB` | `dpr`/`dpi` (Register/Immediate) |
| `andl` | `AND` | `dpr`/`dpi` (Register/Immediate) |
| `orl` | `ORR` | `dpr`/`dpi` (Register/Immediate) |
| `xorl` | `EOR` | `dpr`/`dpi` (Register/Immediate) |
| `notl` | `MVN` | `dpr` (Register) |
| `cmpl` | `CMP` | `dpr`/`dpi` |
| `test` | `TST` | `dpr`/`dpi` |
| `je`, `jne`, `jl`, `jg`, `jmp` | `B{cond}`, `B` | `emitBranch` (PC-relative) |
| `pushl` | `STMDB SP!` | `emitWord(0xE92D0000 \| (1 << reg))` |
| `popl` | `LDMIA SP!` | `emitWord(0xE8BD0000 \| (1 << reg))` |
| `movl` | `MOV` | `dpr`/`dpi` |

## Register Mapping
- EAX $\rightarrow$ R0
- ECX $\rightarrow$ R1
- EDX $\rightarrow$ R2
- EBX $\rightarrow$ R3
- ESP $\rightarrow$ R13 (SP)
- EBP $\rightarrow$ R11 (FP)

## Implementation Details
- **Immediates**: Use `rotImm8` to check for encodable ARM immediates. If not encodable, a simple `LDR` from a literal pool or `MOVW`/`MOVT` sequence will be used.
- **Stack**: ARM's `push` and `pop` are implemented via `STMDB` and `LDMIA` targeting the SP register.
- **Branches**: Conditional branches use the ARM condition codes (`EQ`, `NE`, `LT`, `GT`, `AL`).

## Success Criteria
- All identified `UnsupportedOperationException` for the minimal subset in `BinaryCodeDynamicARM.java` are replaced with functional ARM encodings.
- Translation of basic arithmetic bytecode results in valid ARM machine code.
