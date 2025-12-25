package norswap.lang.java.ast;

import java.lang.annotation.Annotation;
import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record TypeParameter
(
     List<Annotation> annotations,
     Identifier name,
     List<TType> bounds){
}
