package norswap.lang.java.ast;

public record TernaryExpression (
     Expression cond,
     Expression if_true,
     Expression if_false)
implements Expression
{
    public static TernaryExpression mk (Expression cond, Expression if_true, Expression if_false) {
        return new TernaryExpression(cond, if_true, if_false);
    }
}
