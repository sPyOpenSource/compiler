package norswap.lang.java.ast;

import java.util.List;

public record UntypedParameters(List<Identifier> parameters) implements Parameters
{
}
