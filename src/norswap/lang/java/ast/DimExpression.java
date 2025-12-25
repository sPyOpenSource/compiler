package norswap.lang.java.ast;

import java.util.List;

public record DimExpression
(
     List<TAnnotation> annotations,
     Expression expression){
}
