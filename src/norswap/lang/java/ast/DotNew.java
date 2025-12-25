package norswap.lang.java.ast;

public record DotNew (
     Expression operand,
     ConstructorCall constructor)
    implements Expression
{
}
