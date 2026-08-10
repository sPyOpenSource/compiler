# Learning Record 0001: Performance Optimization Mission Established

## Date
2026-08-11

## Summary
Established the teaching workspace for Code Performance Optimization. Created MISSION.md, RESOURCES.md, and the first lesson on profiling fundamentals.

## Mission
**Goal:** Learn practical code/performance optimization techniques to write faster, more efficient code — both for compiler work (Java bytecode→x86 JIT for armOS) and general software engineering.

**Success criteria:**
- Profile code and identify actual bottlenecks (not guess)
- Understand CPU architecture: cache, branch prediction, SIMD, memory hierarchy
- Know when to optimize vs. when to stop (diminishing returns)
- Apply algorithmic optimization, micro-optimizations, compiler-friendly patterns
- Understand what the compiler does automatically vs. what must be done manually
- Read assembly and reason about performance at instruction level

## Resources Curated
- **Fundamentals:** CSAPP (Bryant & O'Hallaron), Agner Fog's optimization manuals
- **Advanced:** Denis Bakhvalov's perf book, Brendan Gregg's systems performance
- **CPU architecture:** Intel optimization manual, Agner Fog microarchitecture guides
- **Profiling:** Brendan Gregg's perf tutorial, Google Benchmark
- **Memory/layout:** Data-Oriented Design (Mike Acton), Ulrich Drepper's memory paper
- **Concurrency:** Herlihy & Shavit, JCIP

## First Lesson Created
**Lesson 1: Measure Before You Optimize** (`lessons/0001-measure-before-you-optimize.html`)
- Covers: profiling types (sampling, instrumentation, hardware counters, microbenchmarking)
- Hands-on: `perf record`, `perf report`, `perf stat`, flame graphs, Google Benchmark
- Key concepts: Self% vs Children%, IPC, cache miss rates, branch miss rates
- Includes 2 quiz questions with instant feedback
- Links to profiling quick reference document

## Reference Document Created
**Profiling Quick Reference** (`reference/profiling-quickref.html`)
- perf command cheat sheet
- Google Benchmark template and options
- Hardware counter events table
- Compilation flags for profiling
- CPU frequency control for stable benchmarks

## Zone of Proximal Development Assessment
User is a software engineer working on a JIT compiler. They have:
- ✅ Strong systems programming background (C/C++, compiler internals)
- ✅ Understanding of assembly, CPU basics
- ❓ Need practical profiling workflow (Lesson 1 addresses this)
- ❓ Need CPU microarchitecture depth (next lessons)
- ❓ Need optimization patterns: memory layout, vectorization, compiler-friendly code

## Next Steps
1. **Lesson 2:** CPU Architecture Fundamentals — cache hierarchy, pipeline, superscalar execution, SIMD
2. **Lesson 3:** Memory Optimization — data layout, SoA vs AoS, cache-friendly patterns, prefetching
3. **Lesson 4:** Compiler Optimization — what -O2/-O3 actually does, PGO, LTO, helping the compiler
4. **Lesson 5:** Assembly Reading for Performance — identifying hot loops, instruction selection, dependency chains
5. **Lesson 6:** Micro-optimization Case Study — optimize a real function from the compiler codebase

## Notes
- Reused existing `assets/shared.css` and `assets/quiz.js` for consistency
- Mission is specific to compiler work — keeps lessons grounded in real application
- Resources emphasize primary sources (Intel manuals, Agner Fog, Brendan Gregg) over secondary summaries