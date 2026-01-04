package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record StWhile(Expression cond, Statement body) implements Statement
{
}
