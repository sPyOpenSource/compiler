package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Expression;

public record EnhancedForStatement 
(
    List<Modifier> modifiers,
    TType type,
    VarDeclaratorID id,
    Expression iterable,
    Statement body
) implements Statement {
    public static EnhancedForStatement mk (
        List<Modifier> modifiers, TType type, VarDeclaratorID id, Expression iterable,
        Statement body)
    {
        return new EnhancedForStatement(modifiers, type, id, iterable, body);
    }
}
