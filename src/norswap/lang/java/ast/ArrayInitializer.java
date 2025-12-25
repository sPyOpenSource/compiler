package norswap.lang.java.ast;

import java.util.List;

public record ArrayInitializer(List<Expression> expressions) implements Expression
{
}
