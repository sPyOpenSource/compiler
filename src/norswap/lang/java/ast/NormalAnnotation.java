package norswap.lang.java.ast;

import norswap.utils.data.wrappers.Pair;
import java.util.List;

public record NormalAnnotation(List<Identifier> name, List<Pair<Identifier, AnnotationElement>> elements) implements TAnnotation
{
    public static NormalAnnotation mk
        (List<Identifier> name, List<Pair<Identifier, AnnotationElement>> elements) {
        return new NormalAnnotation(name, elements);
    }
}
