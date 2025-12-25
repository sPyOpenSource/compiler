package norswap.lang.java.ast.expr;

import java.util.List;
import norswap.lang.java.ast.TType;

public record BoundMethodReference(Expression receiver, List<TType> type_args, Identifier name) implements Expression
{
}
