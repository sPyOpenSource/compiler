package norswap.lang.java.ast;

public record ThrowStatement (Expression expression)implements Statement
{
    public static ThrowStatement mk (Expression expression) {
        return new ThrowStatement(expression);
    }
}
