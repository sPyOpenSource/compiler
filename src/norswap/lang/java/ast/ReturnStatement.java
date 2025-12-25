package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record ReturnStatement (@Nullable Expression expression)implements Statement
{
}
