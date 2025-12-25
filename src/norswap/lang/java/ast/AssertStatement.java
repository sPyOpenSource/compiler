package norswap.lang.java.ast;

public record AssertStatement(Expression expression, Expression message) implements Statement
{
}
