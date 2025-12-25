package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;

public abstract class ExpressionNode extends SighNode
{
    public ExpressionNode (Span span) {
        super(span);
    }
}
