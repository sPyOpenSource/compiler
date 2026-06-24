# 0001: Initial state — general compiler knowledge, AOT is new

The user works on a Java bytecode→x86 JIT compiler. They know the general compiler pipeline (parsing, IR, codegen) but have not studied AOT vs JIT specifically. The JIT compiler they work on uses LLVM IR as an intermediate step and targets x86.

## Implications

- Lessons can assume comfort with IR, basic blocks, register allocation, instruction selection
- Lessons should NOT assume familiarity with profiling, deoptimization, closed-world assumption, or PGO
- The mission is conceptual mastery, not implementation — lessons should avoid too much tool-specific detail
