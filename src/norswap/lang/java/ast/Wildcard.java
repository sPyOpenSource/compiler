package norswap.lang.java.ast;

import java.util.List;

public record Wildcard(List<TAnnotation> annotations, TypeBound bound) implements TType
{
}
