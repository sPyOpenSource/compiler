package norswap.lang.java.ast;

import java.util.List;

public record PackageDeclaration 
(List<TAnnotation> annotations,
    List<Identifier> name)implements Statement{
}
