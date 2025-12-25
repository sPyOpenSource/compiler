package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.utils.Util;

public final class ArrayAccess extends Expression
{
    public final Expression array;
    public final Expression index;

    public ArrayAccess (Span span, Object array, Object index) {
        super(span);
        this.array = Util.cast(array, Expression.class);
        this.index = Util.cast(index, Expression.class);
    }

    @Override public String contents() {
        return String.format("%s[%s]", array.contents(), index.contents());
    }
}
