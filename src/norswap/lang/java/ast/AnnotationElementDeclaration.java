package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record AnnotationElementDeclaration (
    List<Modifier> modifiers,
    TType type,
    Identifier name,
    List<Dimension> dimensions,
    AnnotationElement value
) implements Declaration {}
