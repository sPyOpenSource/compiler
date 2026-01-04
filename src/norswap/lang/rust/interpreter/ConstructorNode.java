package norswap.lang.rust.interpreter;

import norswap.lang.rust.ast.StructDeclaration;

/**
 * Class representing structure constructors in the interpreter, simply wrapping the declaration
 * node. Such a wrapper is necessary, because the node is already used to represent the structure
 * type.
 */
public final class ConstructorNode
{
    public final StructDeclaration declaration;

    public ConstructorNode (StructDeclaration declaration) {
        this.declaration = declaration;
    }

    @Override public int hashCode () {
        return 31 * declaration.hashCode() + 1;
    }

    @Override public boolean equals (Object other) {
        return other instanceof ConstructorNode && ((ConstructorNode) other).declaration == declaration;
    }
}
