package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record SingleElementAnnotation(List<Identifier> name, AnnotationElement elem) implements TAnnotation
{
}
