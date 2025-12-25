package norswap.lang.java.ast;

import java.util.List;

public record ThisParameter 
(
     List<Modifier> modifiers,
     TType type,
     List<Identifier> qualifier)implements FormalParameter{

    public static ThisParameter mk
            (List<Modifier> modifiers, TType type, List<Identifier> qualifier) {
        return new ThisParameter(modifiers, type, qualifier);
    }
}
