package norswap.lang.java.ast;

import java.util.List;

public record ClassTypePart
(
     List<TAnnotation> annotations,
     Identifier name,
     List<TType> type_args){
}
