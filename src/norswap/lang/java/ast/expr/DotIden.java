package norswap.lang.java.ast.expr;

public record DotIden (Expression operand, Identifier id) implements Expression
{
}
