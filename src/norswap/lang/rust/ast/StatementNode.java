package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;

public abstract class StatementNode extends Node {
    public StatementNode (Span span) {
        super(span);
    }
}
