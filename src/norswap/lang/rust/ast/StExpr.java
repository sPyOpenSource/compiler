package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.expr.Expression;
import norswap.utils.Util;

public class StExpr extends Statement
{
    public final Expression expression;

    public StExpr (Span span, Object expression) {
        super(span);
        this.expression = Util.cast(expression, Expression.class);
    }

    @Override public String contents () {
        return expression.contents();
    }
}
