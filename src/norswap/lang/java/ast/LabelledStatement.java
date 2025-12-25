package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Identifier;

public record LabelledStatement (
     Identifier label,
     Statement statement)
implements Statement
{
    public static LabelledStatement mk (Identifier label, Statement statement) {
        return new LabelledStatement(label, statement);
    }

}
