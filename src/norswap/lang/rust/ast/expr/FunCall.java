package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.utils.Util;
import java.util.List;

public final class FunCall extends Expression
{
    public final Expression function;
    public final List<Expression> arguments;

    @SuppressWarnings("unchecked")
    public FunCall (Span span, Object function, Object arguments) {
        super(span);
        this.function = Util.cast(function, Expression.class);
        this.arguments = Util.cast(arguments, List.class);
    }

    @Override public String contents ()
    {
        String args = arguments.size() == 0 ? "()" : "(...)";
        return function.contents() + args;
    }
}
