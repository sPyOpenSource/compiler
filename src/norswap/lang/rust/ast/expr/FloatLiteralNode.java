package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;

public final class FloatLiteralNode extends ExpressionNode {
    public final double value;
    public FloatLiteralNode (Span span, double value) {
        super(span);
        this.value = value;
    }

    @Override public String contents() {
        return String.valueOf(value);
    }
}
