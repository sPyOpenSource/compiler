package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record ImportDeclaration 
    ( boolean is_static,
     List<Identifier> name,
     boolean wildcard)
implements Statement
{
    public static ImportDeclaration mk (boolean is_static, List<Identifier> name, boolean wildcard) {
        return new ImportDeclaration(is_static, name, wildcard);
    }
}
