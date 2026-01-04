package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Expression;

public record StForEnh 
(
    List<Modifier> modifiers,
    TType type,
    VarDeclaratorID id,
    Expression iterable,
    Statement body
) implements Statement {
    public static StForEnh mk (
        List<Modifier> modifiers, TType type, VarDeclaratorID id, Expression iterable,
        Statement body)
    {
        return new StForEnh(modifiers, type, id, iterable, body);
    }
}
