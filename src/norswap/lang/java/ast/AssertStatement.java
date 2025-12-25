package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record AssertStatement(Expression expression, Expression message) implements Statement
{
}
