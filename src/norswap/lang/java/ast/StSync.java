package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record StSync (
     Expression expression,
     Block body)
implements Statement
{
    public static StSync mk (Expression expression, Block body)
    {
        return new StSync(expression, body);
    }
}
