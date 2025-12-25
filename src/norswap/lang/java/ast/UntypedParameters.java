package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record UntypedParameters(List<Identifier> parameters) implements Parameters
{
}
