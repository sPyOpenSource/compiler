package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record DoWhileStatement (
     Statement body,
     Expression cond)
    implements Statement{
}
