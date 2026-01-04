package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Expression;

public record StFor(List<Statement> init, Expression cond, List<Statement> iter, Statement body) implements Statement
{
}
