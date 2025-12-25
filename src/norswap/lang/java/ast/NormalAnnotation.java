package norswap.lang.java.ast;

import norswap.utils.data.wrappers.Pair;
import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record NormalAnnotation(List<Identifier> name, List<Pair<Identifier, AnnotationElement>> elements) implements TAnnotation
{
    public static NormalAnnotation mk
        (List<Identifier> name, List<Pair<Identifier, AnnotationElement>> elements) {
        return new NormalAnnotation(name, elements);
    }
}
