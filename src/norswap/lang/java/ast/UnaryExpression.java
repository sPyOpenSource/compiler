package norswap.lang.java.ast;

public record UnaryExpression 
    ( UnaryOperator operator,
     Expression operand)
    implements Expression
{
}
