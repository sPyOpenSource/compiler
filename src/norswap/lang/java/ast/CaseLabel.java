package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record CaseLabel (Expression expression)implements SwitchLabel
{
}
