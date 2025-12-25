package norswap.lang.java.ast.expr;

import norswap.lang.java.ast.TType;

public record InstanceOf (
     Expression operand,
    TType type)
implements Expression
{
    public static InstanceOf mk (Expression operand, TType type) {
        return new InstanceOf(operand, type);
    }
}