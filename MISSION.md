# Mission: Ahead-of-Time Compilation

## Why

You work on a Java bytecode→x86 JIT compiler for armOS. You want to understand the AOT compilation model — how the pipeline differs from JIT, what tradeoffs exist, and where AOT techniques could apply to your own compiler work. The goal is a clear mental model, not a production implementation.

## Success looks like

- You can explain to someone else how AOT and JIT pipelines differ at every stage
- You can look at a feature in your JIT compiler and say "here AOT would do this differently"
- You know what closed-world assumption means and why it matters
- You know what PGO is and how it bridges the AOT/JIT gap

## Constraints

- Self-directed, self-paced learning alongside compiler development
- No requirement to produce a working AOT compiler — conceptual understanding is the goal

## Out of scope

- Parsing and lexing (you already have compiler front-end knowledge)
- Specific GraalVM / native-image workflow details (too tool-specific for now)
- Garbage collection internals for AOT runtimes
