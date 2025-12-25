package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Expression;

public record DimExpression
(
     List<TAnnotation> annotations,
     Expression expression){
}
