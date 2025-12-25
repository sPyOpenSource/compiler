package norswap.lang.java.ast;

import java.util.List;

public record AnnotationElementDeclaration (
    List<Modifier> modifiers,
    TType type,
    Identifier name,
    List<Dimension> dimensions,
    AnnotationElement value
) implements Declaration {}
