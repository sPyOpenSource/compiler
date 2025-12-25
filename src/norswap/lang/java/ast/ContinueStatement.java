package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Identifier;

public record ContinueStatement (@Nullable Identifier label)implements Statement
{
}
