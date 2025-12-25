package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.Node;

public abstract class Expression extends Node
{
    public Expression (Span span) {
        super(span);
    }
}
