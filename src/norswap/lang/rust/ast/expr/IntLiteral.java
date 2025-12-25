package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;

public final class IntLiteral extends Expression
{
    public final long value;

    public IntLiteral (Span span, long value) {
        super(span);
        this.value = value;
    }

    @Override public String contents() {
        return String.valueOf(value);
    }
}
