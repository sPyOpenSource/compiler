package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record PackageDeclaration 
(List<TAnnotation> annotations,
    List<Identifier> name)implements Statement{
}
