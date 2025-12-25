package norswap.lang.java.ast;

import java.util.List;

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
