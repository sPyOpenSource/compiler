package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.utils.Util;

public final class Parenthesized extends Expression
{
    public final Expression expression;

    public Parenthesized (Span span, Object expression) {
        super(span);
        this.expression = Util.cast(expression, Expression.class);
    }

    @Override public String contents() {
        return String.format("(%s)", expression.contents());
    }
}
