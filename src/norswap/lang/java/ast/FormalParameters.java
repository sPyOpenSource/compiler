package norswap.lang.java.ast;

import java.util.List;

public record FormalParameters(List<FormalParameter> parameters) implements Parameters
{
    public static FormalParameters mk(List<FormalParameter> parameters) {
        return new FormalParameters(parameters);
    }
}
