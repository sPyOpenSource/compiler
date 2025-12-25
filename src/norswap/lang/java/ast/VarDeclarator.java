package norswap.lang.java.ast;

public record VarDeclarator
(
     VarDeclaratorID id,
    @Nullable Expression initializer){
}
