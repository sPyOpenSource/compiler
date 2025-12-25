package norswap.lang.java.ast.expr;

import java.util.List;
import norswap.lang.java.ast.DimExpression;
import norswap.lang.java.ast.Dimension;
import norswap.lang.java.ast.TType;

public record ArrayConstructorCall(TType type, List<DimExpression> dim_exprs, List<Dimension> dims, Expression init) implements Expression
{
}
