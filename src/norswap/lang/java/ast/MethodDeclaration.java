package norswap.lang.java.ast;

import java.util.List;

public record MethodDeclaration
    ( List<Modifier> modifiers,
     List<TypeParameter> type_params,
     TType return_type,
     Identifier name,
     FormalParameters parameters,
     List<Dimension> dimensions,
     List<TType> thrown,
     @Nullable Block body)
 implements Declaration
{
    public static MethodDeclaration mk (
        List<Modifier> modifiers, List<TypeParameter> type_params, TType return_type, Identifier name,
        FormalParameters parameters, List<Dimension> dimensions, List<TType> thrown,
        @Nullable Block body)
    {
        return new MethodDeclaration(
            modifiers, type_params, return_type, name, parameters, dimensions, thrown, body);
    }
}
