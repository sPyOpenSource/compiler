package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.expr.Expression;
import norswap.utils.Util;

public final class StWhile extends Statement
{
    public final Expression condition;
    public final Statement body;

    public StWhile (Span span, Object condition, Object body) {
        super(span);
        this.condition = Util.cast(condition, Expression.class);
        this.body = Util.cast(body, Statement.class);
    }

    @Override public String contents ()
    {
        String candidate = String.format("while %s ...", condition.contents());

        return candidate.length() <= contentsBudget()
            ? candidate
            : "while (?) ...";
    }
}
