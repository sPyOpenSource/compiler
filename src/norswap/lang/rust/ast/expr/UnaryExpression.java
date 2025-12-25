package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.UnaryOperator;
import norswap.utils.Util;

public final class UnaryExpression extends Expression
{
    public final Expression operand;
    public final UnaryOperator operator;

    public UnaryExpression (Span span, Object operator, Object operand) {
        super(span);
        this.operand = Util.cast(operand, Expression.class);
        this.operator = Util.cast(operator, UnaryOperator.class);
    }

    @Override public String contents ()
    {
        String candidate = operator.string + operand.contents();
        return candidate.length() <= contentsBudget()
            ? candidate
            : operator.string + "(?)";
    }
}
