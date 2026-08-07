# 0005: The Bytecode → Native Pipeline (four acts)

## Context
The user asked to learn how bytecode is converted to native code — the core of their jcore work. The lesson traced `iadd` through the actual source.

## Key Insights
- **The pipeline has four acts:** (1) parse bytecode into an IM graph, (2) optimize, (3) instruction selection + register allocation, (4) encode into bytes. Persistence (.jll/.jln) is the fifth stage.
- **The whole trick of Act 1:** `VirtualOperantenStack.processStack()` simulates the JVM operand stack and flattens stack discipline into expression trees. `iadd` → `IMAdd` (CodeContainer.java:527).
- **IM nodes never emit machine code.** Their `translate(Reg)` methods call encoder methods (`code.addl(...)`, `code.incl(...)`) — a method interface, not x86. This makes Acts 1–3 target-neutral.
- **`BinaryCode` is the seam.** `BinaryCodeIA32` and `BinaryCodeDynamicARM` are two implementations of that same contract; the ARM work lives in Act 4 (instruction encoding).

## Surprise / Gap Found
- **The ARM encoder isn't wired in.** `CodeContainer` hard-codes `code = new BinaryCodeIA32()` (CodeContainer.java:111); the `codeType()` switch (StaticCompiler.java:84) only selects the exec environment.
- **Naming mismatch:** IM nodes call `addl`/`movl`/`incl`/`cmpl`; `BinaryCodeDynamicARM` implements `add`/`mov`/`cmp`. Plugging ARM in means matching the interface (or extracting an interface from `BinaryCodeIA32`) and swapping the constructor.

## Zone of Proximal Development
The user is comfortable with the AOT/JIT model and formats; the next step is closing the seam — aligning the ARM encoder's method interface with what the IM nodes call, or extracting a `BinaryCode` interface.

## References
- `lessons/0005-bytecode-to-native-pipeline.html`
- `reference/pipeline-map.html`
- `src/jx/compiler/imcode/CodeContainer.java` (readBCInstruction :207, translate :1079, code ctor :111)
- `src/jx/compiler/imcode/graph/inst/ALU/IMAdd.java` (constant_folding :45, translate :107)
- `src/jx/compiler/backend/BinaryCodeIA32.java` / `BinaryCodeDynamicARM.java`
- `src/jx/compiler/StaticCompiler.java` (:84 codeType switch, :406 compile loop)
