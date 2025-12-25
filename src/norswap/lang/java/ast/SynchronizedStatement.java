package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record SynchronizedStatement (
     Expression expression,
     Block body)
implements Statement
{
    public static SynchronizedStatement mk (Expression expression, Block body)
    {
        return new SynchronizedStatement(expression, body);
    }
}
