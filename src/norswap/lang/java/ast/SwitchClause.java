package norswap.lang.java.ast;

import java.util.List;

public record SwitchClause 
    ( SwitchLabel label,
     List<Statement> statements)
    implements Statement
{
}
