package norswap.lang.java.ast;

public record InstanceOf (
     Expression operand,
    TType type)
implements Expression
{
    public static InstanceOf mk (Expression operand, TType type) {
        return new InstanceOf(operand, type);
    }
}