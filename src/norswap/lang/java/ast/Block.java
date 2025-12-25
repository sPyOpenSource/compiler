package norswap.lang.java.ast;

import java.util.List;

public record Block(List<Statement> statements) implements Statement
{
}
