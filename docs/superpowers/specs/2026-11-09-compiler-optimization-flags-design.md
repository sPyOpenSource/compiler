# Design: Make compiler optimization flags control their passes directly

## Overview

The `jc` compiler has a set of optimization flags (`doOptimize`, `doAlignCode`, `doOptExecPath`, `doInlining`, ...) in `CompilerOptions`, but several of them do not actually control the passes they are named after. Instead they are gated behind obscure conditions:

| Pass | Current gate | Intended flag |
|------|-------------|---------------|
| Goto-forwarding annotation + compact-new dead-store removal | `experimentalCode` (a hardcoded `private boolean experimentalCode = true` in `CodeContainer`) | `doOptimize()` |
| Constant forwarding / constant folding | `opts.isOption("cfor")` — a string option not exposed through the CLI | `doOptimize()` |
| Basic-block swap-jump reordering | `opts.isOption("O5")` **and** `doOptExecPath()` | `doOptExecPath()` alone |
| Native-build default for `doOptimize` | `false` | `true` |

As a result, enabling optimization (`-O`, `-O2`, or `doOptimize = true`) does not reliably turn optimizations on, and two of the gates (`cfor`, `O5`) are not reachable through the normal CLI at all.

This design fixes the gates so each optimization flag directly controls its pass, removes the confusing `experimentalCode` boolean, flips the native default so `doOptimize` is on by default for native builds, and keeps behavior consistent across the IA32, ARM, and RISC-V backends (all of which read the same `CompilerOptions`). No new classes, no new CLI options, no architecture-specific changes.

## Files touched

### `src/jx/compiler/imcode/CodeContainer.java`

The imcode pass container where all mid-level optimizations run.

1. Remove the `experimentalCode` field (hardcoded `true`, adds confusion, no off-switch). Its two gates become plain `doOptimize()` checks:
   - Goto-forwarding annotation pass (the `IMGoto` / forward-return debug-info block).
   - Compact-new dead-store removal pass (`b0 = new ...()` cleanup when `b0` is dead).

2. Constant forwarding / constant folding gate: change
   ```java
   if (opts.isOption("cfor")) constant_forwarding();
   ```
   to
   ```java
   if (opts.doOptimize()) constant_forwarding();
   ```
   (`constant_forwarding()` already runs `node.constant_folding()` per basic block.)

3. Exec-path reordering block: remove the outer `opts.isOption("O5")` requirement. The block now runs when `opts.doOptExecPath()` **or** the per-method `path_<class>.<method>` option is set. The inner `doOptExecPath()` check stays.

### `src/jx/compiler/CompilerOptionsNative.java`

In `parseArgs`'s "set defaults" section, change:
```java
doOptimize = false;
```
to
```java
doOptimize = true;
```
Native builds optimize by default, overridable by the user.

## Data flow

Java bytecode → imcode graph (`CodeContainer`) → optimization passes (each keyed directly to its flag) → native code generation via backend (IA32 / ARM / RISC-V). All three backends read the same `CompilerOptions`, so optimization behavior is consistent across architectures.

## Error handling

No new error handling introduced. The passes are source-to-source imcode graph transformations; existing `CompileException` propagation in `constant_forwarding()` / `constant_folding()` is unchanged.

## Testing / verification

- Build with `ant`; run a domain compile with default (native) flags, with `-O` / `-O2`, and with `-noAlignCode` / `-doOptimize=false` overrides, and verify each combination produces valid output that still runs.
- Verify `doOptimize=true` now triggers constant forwarding (previously required the non-CLI `cfor` option).
- Confirm existing tests still pass and that optimization output is identical across IA32, ARM, and RISC-V targets for the same source.

## Scope check

This is tightly focused: two files, flag-gate fixes only, no new concepts, no new CLI options, no architecture-specific changes. Fits a single implementation plan.
