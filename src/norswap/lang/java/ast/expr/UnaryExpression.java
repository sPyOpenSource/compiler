package norswap.lang.java.ast.expr;

import norswap.lang.java.ast.UnaryOperator;

public record UnaryExpression 
    ( UnaryOperator operator,
     Expression operand)
    implements Expression
{
}
