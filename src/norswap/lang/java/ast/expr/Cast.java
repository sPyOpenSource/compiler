package norswap.lang.java.ast.expr;

import java.util.List;
import norswap.lang.java.ast.TType;

public record Cast (List<TType> types,Expression operand)implements Expression
{
}