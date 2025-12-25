package norswap.lang.java.ast;

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
