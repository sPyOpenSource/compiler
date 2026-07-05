# 0003: GUI Audit Patterns — Finding Improvement Opportunities

The user learned a systematic framework for auditing a Swing-based compiler GUI. Five categories of issues were identified in `src/gui/Compiler.java`:

1. **Naming lies** — buttons/actions whose labels don't match behavior
2. **Broken data flow** — values computed but ignored, wrong dialog types
3. **Competing mechanisms** — two ways to do the same thing, one fragile
4. **Dead UI** — components with no listeners, unreachable code paths
5. **Hardcoded assumptions** — platform-specific paths, one-machine configs

## Implications

- The user can now approach any unfamiliar GUI codebase with a structured audit checklist
- The priority framework (P0–P3) gives a vocabulary for discussing which fixes matter most
- The distinction between auto-generated `initComponents` and hand-written listener methods clarifies where edits are safe vs risky
