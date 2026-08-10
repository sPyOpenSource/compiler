# Performance Optimization Resources

## Knowledge

### Books — Fundamentals

- [Computer Systems: A Programmer's Perspective, 3rd Ed. — Bryant & O'Hallaron](https://csapp.cs.cmu.edu/)
  The definitive textbook on how programs run on hardware. Covers memory hierarchy, linking, exceptions, virtual memory, network programming. Use for: understanding what actually happens when your code runs (Lesson 1+).
- [Optimizing Software in C++ — Agner Fog](https://www.agner.org/optimize/optimizing_cpp.pdf)
  Free, comprehensive guide to C++ optimization. Covers pipeline, cache, branch prediction, vectorization, specific CPU microarchitectures. Use for: practical C++ optimization techniques, microarchitecture details.
- [The Art of Computer Programming, Vol 4A: Combinatorial Algorithms — Knuth](https://www-cs-faculty.stanford.edu/~knuth/taocp.html)
  Deep treatment of algorithms. Use for: algorithmic optimization, understanding complexity tradeoffs at a fundamental level.

### Books — Advanced / Specialized

- [Performance Analysis and Tuning on Modern CPUs — Denis Bakhvalov](https://dendibakh.github.io/perf-book/)
  Modern CPU microarchitecture, perf tools, profiling methodologies. Use for: advanced profiling, understanding CPU pipelines, PMU counters.
- [Systems Performance: Enterprise and the Cloud — Brendan Gregg](https://www.brendangregg.com/systems-performance-book.html)
  Performance analysis methodology, tools, case studies. Use for: systematic performance investigation, Linux perf tooling.
- [High Performance Browser Networking — Ilya Grigorik](https://hpbn.co/)
  Network performance, TCP, TLS, HTTP/2, HTTP/3. Use for: network-aware optimization (if relevant).

### Articles & References — CPU Architecture

- [Agner Fog's Optimization Manuals](https://www.agner.org/optimize/)
  Microarchitecture guides for Intel/AMD CPUs, instruction tables, calling conventions. Use for: instruction latency/throughput, pipeline details, vectorization.
- [Intel 64 and IA-32 Architectures Optimization Reference Manual](https://www.intel.com/content/www/us/en/developer/articles/technical/intel-sdm.html)
  Official Intel optimization guide. Use for: authoritative instruction reference, micro-op fusion, loop stream detector.
- [CPU Cache — Wikipedia](https://en.wikipedia.org/wiki/CPU_cache)
  Good overview of cache hierarchy, associativity, prefetching, false sharing. Use for: cache optimization fundamentals.

### Articles & References — Profiling & Measurement

- [Linux Perf Tutorial — Brendan Gregg](https://www.brendangregg.com/perf.html)
  Comprehensive perf tool guide: flame graphs, PMU events, profiling modes. Use for: learning to profile effectively (Lesson 2).
- [perf Examples — Brendan Gregg](https://www.brendangregg.com/perf.html#Examples)
  Real-world perf command examples. Use for: practical profiling commands.
- [Google Benchmark Library](https://github.com/google/benchmark)
  Microbenchmarking framework. Use for: writing reliable microbenchmarks (Lesson 3).
- [How to Write a Good Benchmark — Andrei Alexandrescu](https://www.youtube.com/watch?v=zZC4nZ2NfVM)
  Talk on benchmarking pitfalls. Use for: avoiding measurement errors.

### Articles & References — Compiler Optimization

- [LLVM Optimization Passes](https://llvm.org/docs/Passes.html)
  Catalog of LLVM optimization passes. Use for: understanding what the compiler does automatically.
- [GCC Optimization Options](https://gcc.gnu.org/onlinedocs/gcc/Optimize-Options.html)
  GCC -O levels and specific flags. Use for: controlling compiler optimization.
- [Profile-Guided Optimization (PGO) — LLVM](https://llvm.org/docs/ProfileGuidedOptimization.html)
  Using runtime profiles to guide optimization. Use for: understanding PGO workflow.

### Articles & References — Memory & Data Layout

- [Data-Oriented Design — Mike Acton](https://www.dataorienteddesign.com/)
  Philosophy and techniques for cache-friendly data layout. Use for: struct layout, SoA vs AoS, cache line optimization.
- [What Every Programmer Should Know About Memory — Ulrich Drepper](https://people.freebsd.org/~lstewart/articles/cpumemory.pdf)
  Deep dive into memory subsystem, NUMA, cache coherency. Use for: advanced memory optimization.

### Articles & References — Concurrency & Parallelism

- [The Art of Multiprocessor Programming — Herlihy & Shavit](https://www.elsevier.com/books/the-art-of-multiprocessor-programming/herlihy/978-0-12-370591-4)
  Lock-free algorithms, concurrent data structures. Use for: lock-free optimization, contention reduction.
- [Concurrency in Practice — Goetz et al.](https://jcip.net/)
  Java concurrency, but principles apply broadly. Use for: thread-safe optimization patterns.

## Wisdom (Communities)

- [Performance Matters — Discord/Slack](https://performancematters.dev/)
  Community of performance engineers. Use for: discussing real optimization challenges, tool recommendations.
- [r/PerformanceOptimization](https://reddit.com/r/PerformanceOptimization)
  Reddit community for optimization discussions. Use for: case studies, tool discussions.
- [LLVM Discourse](https://discourse.llvm.org/)
  Compiler optimization discussions. Use for: understanding compiler internals, proposing optimizations.
- [CppCon / CppNow YouTube channels](https://www.youtube.com/c/CppCon)
  Talks on C++ performance, modern C++, compiler optimization. Use for: staying current, deep dives.

## Video Courses

- [MIT 6.172 Performance Engineering of Software Systems](https://ocw.mit.edu/courses/6-172-performance-engineering-of-software-systems-fall-2018/)
  Full course on performance engineering. Use for: structured academic approach to the topic.
- [CPPCon: "Optimizing C++" — various speakers](https://www.youtube.com/results?search_query=cppcon+optimization)
  Annual conference talks. Use for: modern C++ optimization techniques.