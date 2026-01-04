package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;

public abstract class DeclarationNode extends Statement
{
    public DeclarationNode (Span span) {
        super(span);
    }

    /**
     * Returns the declared identifier name.
     * @return 
     */
    public abstract String name();

    /**
     * Return the name of the thing declared (e.g. "function").
     * @return 
     */
    public abstract String declaredThing();
}
