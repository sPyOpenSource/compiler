package norswap.lang.java.ast;

import java.util.List;

public record SingleElementAnnotation(List<Identifier> name, AnnotationElement elem) implements TAnnotation
{
}
