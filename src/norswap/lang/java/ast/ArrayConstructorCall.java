package norswap.lang.java.ast;

import java.util.List;

public record ArrayConstructorCall(TType type, List<DimExpression> dim_exprs, List<Dimension> dims, Expression init) implements Expression
{
}
