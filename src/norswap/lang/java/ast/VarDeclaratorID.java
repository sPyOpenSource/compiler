package norswap.lang.java.ast;

import java.util.List;
import norswap.lang.java.ast.expr.Identifier;

public record VarDeclaratorID
(
     Identifier name,
     List<Dimension> dimensions){
}
