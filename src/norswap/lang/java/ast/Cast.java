package norswap.lang.java.ast;

import java.util.List;

public record Cast (List<TType> types,Expression operand)implements Expression
{
}