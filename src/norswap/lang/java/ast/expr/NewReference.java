package norswap.lang.java.ast.expr;

import java.util.List;
import norswap.lang.java.ast.TType;

public record NewReference (
     TType type,
     List<TType> type_args)
implements Expression {
    public static NewReference mk (TType type, List<TType> type_args) {
        return new NewReference(type, type_args);
    }
}
