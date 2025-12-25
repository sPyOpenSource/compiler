package norswap.lang.java.ast;

public record BinaryExpression(BinaryOperator operator, Expression left, Expression right) implements Expression
{
}
