package norswap.lang.java.ast;

import java.lang.annotation.Annotation;
import java.util.List;

public record TypeParameter
(
     List<Annotation> annotations,
     Identifier name,
     List<TType> bounds){
}
