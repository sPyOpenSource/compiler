package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;

public abstract class Statement extends Node {
    public Statement (Span span) {
        super(span);
    }
}
