package norswap.lang.java.ast;

import java.util.List;

public record NewReference 
(
     TType type,
     List<TType> type_args)
implements Expression{
    public static NewReference mk (TType type, List<TType> type_args) {
        return new NewReference(type, type_args);
    }
}
