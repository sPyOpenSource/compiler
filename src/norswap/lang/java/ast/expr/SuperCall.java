package norswap.lang.java.ast.expr;

import java.util.List;

public record SuperCall(List<Expression> args) implements Expression
{
}