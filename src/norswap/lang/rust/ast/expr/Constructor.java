package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.utils.Util;

public class Constructor extends Expression
{
    public final Reference ref;

    public Constructor (Span span, Object ref) {
        super(span);
        this.ref = Util.cast(ref, Reference.class);
    }

    @Override public String contents () {
        return "$" + ref.name;
    }
}
