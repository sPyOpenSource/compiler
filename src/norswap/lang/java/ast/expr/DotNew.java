package norswap.lang.java.ast.expr;

public record DotNew (
     Expression operand,
     ConstructorCall constructor)
    implements Expression
{
}
