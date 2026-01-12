package norswap.lang.java.ast.expr;

import java.util.List;
import norswap.lang.java.ast.Declaration;
import norswap.lang.java.ast.Nullable;
import norswap.lang.java.ast.TType;

public record Constructor(
        List<TType> type_args, 
        TType type, 
        List<Expression> args, 
        @Nullable List<Declaration> body)
     implements Expression
{
}
