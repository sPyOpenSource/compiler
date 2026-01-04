package norswap.lang.rust.types;

import norswap.lang.rust.ast.StructDeclaration;

public final class StructType extends Type
{
    public final StructDeclaration node;

    public StructType (StructDeclaration node) {
        this.node = node;
    }

    @Override public String name() {
        return node.name();
    }

    @Override public boolean equals (Object o) {
        return this == o || o instanceof StructType && this.node == ((StructType) o).node;
    }

    @Override public int hashCode () {
        return node.hashCode();
    }
}
