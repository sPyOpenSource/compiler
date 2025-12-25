package norswap.lang.java.ast;

import java.util.List;

public record ConstructorCall
    ( List<TType> type_args,
     TType type,
     List<Expression> args,
     @Nullable List<Declaration> body)
     implements Expression
{
}
