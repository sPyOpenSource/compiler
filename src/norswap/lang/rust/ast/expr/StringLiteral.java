package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.utils.Util;

public final class StringLiteral extends Expression
{
    public final String value;

    public StringLiteral (Span span, Object value) {
        super(span);
        this.value = Util.cast(value, String.class);
    }

    @Override public String contents () {
        return String.format("\"%s\"", value);
    }
}
