package norswap.lang.java.ast.expr;

public class Super implements Expression
{
    
    private static Super INSTANCE;
    
    public static Super mk(){
        if(INSTANCE == null) {
            INSTANCE = new Super();
        }
        
        return INSTANCE;
    }

}
