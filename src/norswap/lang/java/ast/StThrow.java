package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record StThrow (Expression expression)implements Statement
{
    public static StThrow mk (Expression expression) {
        return new StThrow(expression);
    }
}
