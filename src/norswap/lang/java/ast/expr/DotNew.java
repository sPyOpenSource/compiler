package norswap.lang.java.ast.expr;

public record DotNew (
     Expression operand,
     Constructor constructor)
    implements Expression
{
}
