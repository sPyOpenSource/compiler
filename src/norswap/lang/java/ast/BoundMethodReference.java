package norswap.lang.java.ast;

import java.util.List;

public record BoundMethodReference(Expression receiver, List<TType> type_args, Identifier name) implements Expression
{
}
