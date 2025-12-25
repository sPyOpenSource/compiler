package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.expr.Expression;
import norswap.utils.Util;

public final class IfNode extends Statement
{
    public final Expression condition;
    public final Statement trueStatement;
    public final Statement falseStatement;

    public IfNode (Span span, Object condition, Object trueStatement, Object falseStatement) {
        super(span);
        this.condition = Util.cast(condition, Expression.class);
        this.trueStatement = Util.cast(trueStatement, Statement.class);
        this.falseStatement = falseStatement == null
            ? null
            : Util.cast(falseStatement, Statement.class);
    }

    @Override public String contents ()
    {
        String condition = this.condition.contents();
        String candidate = falseStatement == null
            ? String.format("if %s ...", condition)
            : String.format("if %s ... else ...", condition);

        return candidate.length() <= contentsBudget()
            ? candidate
            : falseStatement == null
                ? "if (?) ..."
                : "if (?) ... else ...";
    }
}
