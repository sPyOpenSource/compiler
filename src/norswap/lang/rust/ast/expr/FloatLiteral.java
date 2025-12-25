package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;

public final class FloatLiteral extends Expression {
    public final double value;
    
    public FloatLiteral (Span span, double value) {
        super(span);
        this.value = value;
    }

    @Override public String contents() {
        return String.valueOf(value);
    }
}
