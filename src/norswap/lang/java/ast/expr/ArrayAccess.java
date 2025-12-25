package norswap.lang.java.ast.expr;

public record ArrayAccess(Expression operand, Expression index) implements Expression
{
}
