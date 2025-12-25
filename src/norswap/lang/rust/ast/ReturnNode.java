package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.expr.Expression;
import norswap.utils.Util;

public class ReturnNode extends StatementNode
{
    public final Expression expression;

    public ReturnNode (Span span, Object expression) {
        super(span);
        this.expression = expression == null
            ? null
            : Util.cast(expression, Expression.class);
    }

    @Override public String contents () {
        return "return " + (expression == null ? "" : expression.contents());
    }
}
