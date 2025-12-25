package norswap.lang.java.ast;

public record DoWhileStatement 
(
     Statement body,
     Expression cond)
    implements Statement{
}
