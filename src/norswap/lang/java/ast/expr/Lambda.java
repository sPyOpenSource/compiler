package norswap.lang.java.ast.expr;

import norswap.lang.java.ast.Parameters;
import norswap.lang.java.ast.Statement;

public record Lambda 
(
     Parameters parameters,
     Statement body)
    implements Expression{
}
