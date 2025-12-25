package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Expression;

public record SwitchStatement (
     Expression expression,
     List<SwitchClause> clauses)
    implements Statement
{
}
