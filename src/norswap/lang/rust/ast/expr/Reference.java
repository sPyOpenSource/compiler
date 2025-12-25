package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.utils.Util;

public final class Reference extends Expression
{
    public final String name;

    public Reference (Span span, Object name) {
        super(span);
        this.name = Util.cast(name, String.class);
    }

    @Override public String contents() {
        return name;
    }
}
