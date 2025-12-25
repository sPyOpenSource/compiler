package norswap.lang.java.ast;

import java.util.List;

public record SwitchStatement (
     Expression expression,
     List<SwitchClause> clauses)
    implements Statement
{
}
