package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record StIf 
    ( Expression cond,
     Statement if_true,
     @Nullable Statement if_false)
implements Statement
{
    public static StIf mk (Expression cond, Statement if_true, @Nullable Statement if_false) {
        return new StIf(cond, if_true, if_false);
    }
}
