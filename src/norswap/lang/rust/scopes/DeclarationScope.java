package norswap.lang.rust.scopes;

import norswap.lang.rust.ast.DeclarationNode;

/**
 * A pair of a {@link Scope} and a {@link DeclarationNode} declaring an entry in that scope.
 */
public final class DeclarationScope
{
    public final Scope scope;
    public final DeclarationNode declaration;

    public DeclarationScope(Scope scope, DeclarationNode declaration) {
        this.scope = scope;
        this.declaration = declaration;
    }
}
