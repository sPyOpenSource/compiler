package norswap.lang.java.ast;

import java.util.List;

public record IdenParameter 
(
     List<Modifier> modifiers,
     TType type,
     Identifier name,
     List<Dimension> dimensions)
implements FormalParameter{
    public static IdenParameter mk
        (List<Modifier> modifiers, TType type, Identifier name, List<Dimension> dimensions) {
        return new IdenParameter(modifiers, type, name, dimensions);
    }
}

