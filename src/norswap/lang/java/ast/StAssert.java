package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record StAssert(Expression expression, Expression message) implements Statement
{
}
