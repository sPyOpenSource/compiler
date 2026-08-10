# Mission: Code Performance Optimization

## Why

You are a software engineer working on a Java bytecode→x86 JIT compiler for armOS. You want to learn code/performance optimization techniques to write faster, more efficient code — both in your compiler work and in general software engineering. The goal is to build a practical mental model of how to identify bottlenecks, measure performance, and apply optimization techniques effectively.

## Success looks like

- You can profile code and identify the actual bottlenecks (not guess)
- You understand CPU architecture fundamentals: cache, branch prediction, SIMD, memory hierarchy
- You know when to optimize vs. when to stop (diminishing returns)
- You can apply algorithmic optimization, micro-optimizations, and compiler-friendly patterns
- You understand what the compiler does for you and what you must do manually
- You can read assembly and reason about performance at the instruction level

## Constraints

- Self-directed, self-paced learning alongside compiler development
- Focus on practical techniques applicable to systems programming (C/C++/Java/Rust)
- Measurements over intuition — always profile first

## Out of scope

- Premature optimization without profiling
- Microbenchmarks that don't reflect real workloads
- Specific framework/library optimization (e.g., Spring, React) — focus on fundamentals
- GPU/CUDA optimization (separate domain)

## Primary Language Focus

C/C++ (compiler work), Java (JVM optimization), with principles applicable broadly