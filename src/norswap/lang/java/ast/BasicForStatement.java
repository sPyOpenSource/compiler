package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Expression;

public record BasicForStatement(List<Statement> init, Expression cond, List<Statement> iter, Statement body) implements Statement
{
}
