package norswap.lang.java.ast;

public record Identifier(String name) implements Expression
{
    public static Identifier mk (String name) {
        return new Identifier(name);
    }
}
