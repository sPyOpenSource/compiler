package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.utils.Util;

public class Assignment extends Expression
{
    public final Expression left;
    public final Expression right;

    public Assignment (Span span, Object left, Object right) {
        super(span);
        this.left = Util.cast(left, Expression.class);
        this.right = Util.cast(right, Expression.class);
    }

    @Override public String contents ()
    {
        String leftEqual = left.contents() + " = ";

        String candidate = leftEqual + right.contents();
        if (candidate.length() <= contentsBudget())
            return candidate;

        candidate = leftEqual + "(?)";
        return candidate.length() <= contentsBudget()
            ? candidate
            : "(?) = (?)";
    }
}
