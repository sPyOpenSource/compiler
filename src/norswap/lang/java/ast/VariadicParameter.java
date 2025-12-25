package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record VariadicParameter 
(
     List<Modifier> modifiers,
     TType type,
     List<TAnnotation> array_annotations,
     Identifier name)implements FormalParameter{
}
