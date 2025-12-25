package norswap.lang.java.ast;

import norswap.lang.java.ast.expr.Expression;

public record VarDeclarator
(
     VarDeclaratorID id,
    @Nullable Expression initializer){
}
