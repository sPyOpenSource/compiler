package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record ThrowStatement (Expression expression)implements Statement
{
    public static ThrowStatement mk (Expression expression) {
        return new ThrowStatement(expression);
    }
}
