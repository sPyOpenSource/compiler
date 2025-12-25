package norswap.lang.java.ast;

import java.util.List;

public record ThisCall(List<Expression> args) implements Expression
{
    public static ThisCall mk (List<Expression> args) {
        return new ThisCall(args);
    }
}
