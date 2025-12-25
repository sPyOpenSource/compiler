package norswap.lang.java.ast;

import java.util.List;

public record AnnotationElementList(List<AnnotationElement> elements) implements AnnotationElement
{}
