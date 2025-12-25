package norswap.lang.java.ast;

public record InitBlock (
     boolean is_static,
     Block block)
implements Declaration
{
    public static InitBlock mk (boolean is_static, Block block) {
        return new InitBlock(is_static, block);
    }
}
