package norswap.lang.rust.ast;

import norswap.autumn.positions.Span;
import norswap.lang.rust.ast.expr.Expression;
import norswap.utils.Util;

public final class VarDeclaration extends DeclarationNode
{
    public final String name;
    public final TypeNode type;
    public final Expression initializer;

    public VarDeclaration (Span span, Object name, Object type, Object initializer) {
        super(span);
        this.name = Util.cast(name, String.class);
        this.type = Util.cast(type, TypeNode.class);
        this.initializer = Util.cast(initializer, Expression.class);
    }

    @Override public String name () {
        return name;
    }

    @Override public String contents () {
        return "var " + name;
    }

    @Override public String declaredThing () {
        return "variable";
    }
}
