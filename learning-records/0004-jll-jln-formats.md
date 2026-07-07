# Learning Record 0004: jll and jln Formats

## Context
The user requested a refresher on the `jll` and `jln` file formats used in the jcore compiler.

## Key Insights
- **.jll (Java Library Linkable)** is the primary AOT artifact. It contains the native machine code and a rich set of metadata (headers, string tables, and class/method layouts) required for the runtime to load the code.
- **.jln (Java Linker Notification)** is a compact "linker map". It contains the resolved VTable layout, mapping virtual methods to their specific native implementations across the domain.
- **The Workflow:** The runtime uses the `.jln` file to establish the "where" (VTable mapping) and the `.jll` file to get the "what" (the actual native bytes).

## Zone of Proximal Development
The user is comfortable with the overall AOT/JIT distinction and is now focusing on the concrete binary representations used in the jcore implementation.

## References
- `lessons/0004-jll-and-jln-formats.html`
- `src/jx/compiler/persistent/CodeFile.java`
- `src/jx/compiler/vtable/Main.java`
