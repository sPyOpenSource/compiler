package norswap.lang.java.ast.expr;

import java.util.List;
import norswap.lang.java.ast.Nullable;
import norswap.lang.java.ast.TType;

public record MethodCall(
    @Nullable Expression receiver,
    List<TType> type_args,
    Identifier name,
    List<Expression> args
) implements Expression {
    public static MethodCall mk
        (@Nullable Expression receiver, List<TType> type_args, Identifier name,
         List<Expression> args)
    {
        return new MethodCall(receiver, type_args, name, args);
    }
}
