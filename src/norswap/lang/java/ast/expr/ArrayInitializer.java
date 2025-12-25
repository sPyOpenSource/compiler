package norswap.lang.java.ast.expr;

import java.util.List;

public record ArrayInitializer(List<Expression> expressions) implements Expression
{
}
