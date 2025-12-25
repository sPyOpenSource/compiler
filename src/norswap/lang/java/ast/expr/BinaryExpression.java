package norswap.lang.java.ast.expr;

import norswap.lang.java.ast.BinaryOperator;

public record BinaryExpression(BinaryOperator operator, Expression left, Expression right) implements Expression
{
}
