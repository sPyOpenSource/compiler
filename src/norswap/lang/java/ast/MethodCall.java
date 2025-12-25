package norswap.lang.java.ast;

import java.util.List;

public record MethodCall
(
     @Nullable Expression receiver,
     List<TType> type_args,
     Identifier name,
     List<Expression> args)
 implements Expression{
    public static MethodCall mk
        (@Nullable Expression receiver, List<TType> type_args, Identifier name,
         List<Expression> args)
    {
        return new MethodCall(receiver, type_args, name, args);
    }
}
