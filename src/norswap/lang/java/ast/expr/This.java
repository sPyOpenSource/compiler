package norswap.lang.java.ast.expr;

public class This implements Expression
{
    private static This INSTANCE;

    public static This mk() {
        if(INSTANCE == null) {
            INSTANCE = new This();
        }
        
        return INSTANCE;
    }
}
