package norswap.lang.java.ast.expr;

import java.util.List;
import norswap.lang.java.ast.TType;

public record TypeMethodReference 
(
     TType type,
     List<TType> type_args,
     Identifier name)
    implements Expression{
}
