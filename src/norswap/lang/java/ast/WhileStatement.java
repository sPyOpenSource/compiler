package norswap.lang.java.ast;

public record WhileStatement(Expression cond,Statement body) implements Statement
{
}
