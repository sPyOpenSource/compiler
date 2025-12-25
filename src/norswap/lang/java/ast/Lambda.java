package norswap.lang.java.ast;

public record Lambda 
(
     Parameters parameters,
     Statement body)
    implements Expression{
}
