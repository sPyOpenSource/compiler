package norswap.lang.java.ast;

import java.util.function.Function;

public record Literal(Object value)
 implements Expression
{
        public static Function<Object, Object> testConvertHook = null;

    public static Literal mk (Object value) {
        if (testConvertHook != null) value = testConvertHook.apply(value);
        return new Literal(value);
    }
}
