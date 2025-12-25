package norswap.lang.rust.ast.expr;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.Node;

public abstract class ExpressionNode extends Node
{
    public ExpressionNode (Span span) {
        super(span);
    }
}
