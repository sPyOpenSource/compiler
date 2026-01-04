package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record StReturn (@Nullable Expression expression)implements Statement
{
}
