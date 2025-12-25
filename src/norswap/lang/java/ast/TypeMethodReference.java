package norswap.lang.java.ast;

import java.util.List;

public record TypeMethodReference 
(
     TType type,
     List<TType> type_args,
     Identifier name)
    implements Expression{
}
