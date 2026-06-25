# 0002: JVM Type Representation and Stack Slots

The user has learned the fundamental difference between 1-slot and 2-slot types in the JVM. They now understand how `long` and `double` occupy two slots on the operand stack and how these map to either 64-bit GPRs or XMM registers on x86-64.

## Implications

- The user can now identify why a `RuntimeStack` needs a `MODE_SLOT2` marker.
- The user understands why `LADD` or `DADD` pops two slots and pushes two slots.
- This provides the conceptual foundation for implementing a correct bytecode-to-IR translation for all numeric types.
