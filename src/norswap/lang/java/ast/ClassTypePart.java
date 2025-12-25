package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record ClassTypePart
(
     List<TAnnotation> annotations,
     Identifier name,
     List<TType> type_args){
}
