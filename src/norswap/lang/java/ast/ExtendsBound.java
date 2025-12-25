package norswap.lang.java.ast;

public record ExtendsBound (TType type)implements TypeBound
{
    public static ExtendsBound mk (TType type) {
        return new ExtendsBound(type);
    }
}
