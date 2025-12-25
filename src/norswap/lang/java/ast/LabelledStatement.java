package norswap.lang.java.ast;

public record LabelledStatement (
     Identifier label,
     Statement statement)
implements Statement
{
    public static LabelledStatement mk (Identifier label, Statement statement) {
        return new LabelledStatement(label, statement);
    }

}
