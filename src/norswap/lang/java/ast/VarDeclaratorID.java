package norswap.lang.java.ast;

import java.util.List;

public record VarDeclaratorID
(
     Identifier name,
     List<Dimension> dimensions){
}
