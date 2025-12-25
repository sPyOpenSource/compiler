package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Expression;

public record TryResource 
(
    List<Modifier> modifiers,
    TType type,
    VarDeclaratorID id,
    Expression value) implements Statement {

    public static TryResource mk (
        List<Modifier> modifiers, TType type, VarDeclaratorID id, Expression value)
    {
        return new TryResource(modifiers, type, id, value);
    }
}
