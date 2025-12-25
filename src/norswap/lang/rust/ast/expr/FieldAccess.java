package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.utils.Util;

public final class FieldAccess extends Expression
{
    public final Expression stem;
    public final String fieldName;

    public FieldAccess (Span span, Object stem, Object fieldName) {
        super(span);
        this.stem = Util.cast(stem, Expression.class);
        this.fieldName = Util.cast(fieldName, String.class);
    }

    @Override public String contents ()
    {
        String candidate = String.format("%s.%s", stem.contents(), fieldName);
        return candidate.length() <= contentsBudget()
            ? candidate
            : "(?)." + fieldName;
    }
}
