package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.BinaryOperator;
import norswap.utils.Util;

public final class BinaryExpression extends Expression
{
    public final Expression left, right;
    public final BinaryOperator operator;

    public BinaryExpression (Span span, Object left, Object operator, Object right) {
        super(span);
        this.left = Util.cast(left, Expression.class);
        this.right = Util.cast(right, Expression.class);
        this.operator = Util.cast(operator, BinaryOperator.class);
    }

    @Override public String contents ()
    {
        String candidate = String.format("%s %s %s",
            left.contents(), operator.string, right.contents());

        return candidate.length() <= contentsBudget()
            ? candidate
            : String.format("(?) %s (?)", operator.string);
    }
}
