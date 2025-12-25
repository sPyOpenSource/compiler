package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Identifier;

public record BreakStatement (@Nullable Identifier label)implements Statement
{
}
