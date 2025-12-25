package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record TypeDeclaration(Kind kind, List<Modifier> modifiers, Identifier name, 
        List<TypeParameter> type_params, List<TType> extended, List<TType> implemented, List<Declaration> declarations) implements Declaration
{
    public enum Kind {
        ANNOTATION,
        CLASS,
        ENUM,
        INTERFACE
    }
}
