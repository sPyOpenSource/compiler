# AOT Compilation Resources

## Knowledge

- [JVM Specification: The Java Virtual Machine](https://docs.oracle.com/en/java/javase/17/docs/specs/jvms/)
  The ultimate authority on bytecode, the operand stack, and type representation. Use for: understanding the "two-slot" rule for longs/doubles.
- [IEEE 754 Standard for Floating-Point Arithmetic](https://ieeexplore.ieee.org/document/8766229)
  The standard for how `float` and `double` are actually stored in bits. Use for: understanding sign/exponent/mantissa.
- [Wikipedia: Ahead-of-time compilation](https://en.wikipedia.org/wiki/Ahead-of-time_compilation)
  Canonical reference. Covers definitions, trade-offs, storage/performance analysis. Use for: grounding every AOT concept.
- [Article: "Understanding GraalVM, AOT & JIT" — Marco Behler](https://www.marcobehler.com/guides/graalvm-aot-jit)
  Clear walkthrough from javac bytecode through JIT profiling to GraalVM native-image. Use for: the Java-specific pipeline, understanding how AOT/JIT coexist.
- [Dissertation: "Ahead-of-Time compilation in a language-independent environment" — Georgiy Krylov (UNB, 2024)](https://unbscholar.lib.unb.ca/items/86fc3a4c-d16f-4267-960d-3a95d377b7d0)
  Academic treatment of AOT vs JIT tradeoffs using Eclipse OMR. Use for: deeper dive into AOT architecture patterns.
- [Article: "Revolutionizing Java with GraalVM Native Image" — Alina Yurenko (InfoQ)](https://www.infoq.com/articles/native-java-graalvm)
  Industry perspective on AOT for cloud-native Java. Use for: real-world tradeoffs (startup, memory, peak throughput).
- [Research Square: "AOT vs JIT Compilation Trade-offs: Empirical performance studies" (2025)](https://www.researchsquare.com/article/rs-7915532/v1.pdf?c=1761138941000)
  Benchmark data: AOT startup 40-70% faster, JIT steady-state 10-25% faster. Use for: quantitative comparison.
- [GraalVM Native Image Reference Manual](https://www.graalvm.org/latest/reference-manual/native-image/)
  Primary source for closed-world assumption, points-to analysis, Substrate VM. Use for: authoritative technical detail on AOT for JVM languages.
- [Article: "AOT vs JIT: Understanding the Java Compiling Processes" — CodeStringers](https://www.codestringers.com/insights/aot-vs-jit/)
  Practical Java-focused comparison with jaotc and GraalVM examples. Use for: concrete flow diagrams.
- [Blog: "Java GraalVM Native Image: The Complete Guide to AOT Compilation in 2026" — Angel Oprea](https://www.angeloprea.com/blog/java-in-2026-the-complete-guide-to-enterprises-most-enduring-programming-language/java-graalvm-native-image-the-complete-guide-to-aot-compilation-in-2026)
  Modern summary with comparative table. Use for: quick reference on tradeoff dimensions.

## Wisdom (Communities)

- [GraalVM Slack](https://graalvm.slack.com/)
  Active community of GraalVM contributors and users. Use for: troubleshooting AOT compilation issues, closed-world assumption edge cases.
- [r/java](https://reddit.com/r/java)
  General Java community with occasional AOT/GraalVM discussions. Use for: staying current on ecosystem trends.

