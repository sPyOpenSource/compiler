package norswap.lang.java.ast;

import java.util.List;

public record SuperCall(List<Expression> args) implements Expression
{
}