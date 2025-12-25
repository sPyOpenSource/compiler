package norswap.lang.java.ast;

import java.util.List;

public record VarDeclaration(
      List<Modifier> modifiers,
      TType type,
      List<VarDeclarator> declarators)
     implements Declaration
{
}
