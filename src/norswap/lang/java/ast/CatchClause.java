package norswap.lang.java.ast;

import java.util.List;

public record CatchClause (
      List<Modifier> modifiers,
     List<TType> types,
      VarDeclaratorID id,
      Block body)
    implements Statement
{
}
