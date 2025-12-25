package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.expr.Expression;
import norswap.utils.Util;

public final class WhileNode extends StatementNode
{
    public final Expression condition;
    public final StatementNode body;

    public WhileNode (Span span, Object condition, Object body) {
        super(span);
        this.condition = Util.cast(condition, Expression.class);
        this.body = Util.cast(body, StatementNode.class);
    }

    @Override public String contents ()
    {
        String candidate = String.format("while %s ...", condition.contents());

        return candidate.length() <= contentsBudget()
            ? candidate
            : "while (?) ...";
    }
}
