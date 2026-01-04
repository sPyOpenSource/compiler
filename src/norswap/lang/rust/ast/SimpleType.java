package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;
import norswap.utils.Util;

public final class SimpleType extends TypeNode
{
    public final String name;

    public SimpleType (Span span, Object name) {
        super(span);
        this.name = Util.cast(name, String.class);
    }

    @Override public String contents () {
        return name;
    }
}
