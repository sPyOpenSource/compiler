package norswap.lang.java.ast;

public record IfStatement 
    ( Expression cond,
     Statement if_true,
     @Nullable Statement if_false)
implements Statement
{
    public static IfStatement mk (Expression cond, Statement if_true, @Nullable Statement if_false) {
        return new IfStatement(cond, if_true, if_false);
    }
}
