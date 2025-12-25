package norswap.lang.java.ast;

public record ArrayAccess(Expression operand, Expression index) implements Expression
{
}
