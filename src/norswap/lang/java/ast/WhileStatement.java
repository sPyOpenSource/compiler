package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record WhileStatement(Expression cond,Statement body) implements Statement
{
}
