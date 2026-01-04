package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;
import norswap.utils.Util;
import java.util.List;

public final class Block extends Statement
{
    public final List<Statement> statements;

    @SuppressWarnings("unchecked")
    public Block (Span span, Object statements) {
        super(span);
        this.statements = Util.cast(statements, List.class);
    }

    @Override public String contents ()
    {
        if (statements.isEmpty())
            return "{}";

        String first = statements.get(0).contents();

        return first.length() <= contentsBudget() - "{  ... }".length()
            ? String.format("{ %s ... }", first)
            : "{ ... }";
    }
}
