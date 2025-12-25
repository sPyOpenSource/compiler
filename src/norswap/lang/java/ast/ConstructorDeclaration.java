package norswap.lang.java.ast;

import java.util.List;

public record ConstructorDeclaration (
      List<Modifier> modifiers,
      List<TypeParameter> type_params,
      Identifier name,
      FormalParameters parameters,
      List<TType> thrown,
      Block body)
    implements Declaration
{
}
