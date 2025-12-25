package norswap.utils.reflection;

import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;

/**
 * A minimal implementation of {@link ParameterizedType}.
 *
 * <p>Notably useful to perfor {@link Subtyping} checks.
 */
public final class GenericType implements ParameterizedType
{
    // ---------------------------------------------------------------------------------------------

    private final Class<?> raw;
    private final Type[] arguments;

    // ---------------------------------------------------------------------------------------------

    /**
     * Creates a new type with the given owner (enclosing class), raw type and type arguments.
     */
    public GenericType (Type owner, Class<?> raw, Type... arguments) {
        this.raw = raw;
        this.arguments = arguments;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Wraps the class in a generic type with no type arguments. Its owner will be {@link
     * Class#getEnclosingClass()}.
     */
    public static GenericType wrap (Class<?> type) {
        return new GenericType(type.getEnclosingClass(), type);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Type[] getActualTypeArguments () {
        return arguments;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Class<?> getRawType () {
        return raw;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Type getOwnerType () {
        return null;
    }

    // ---------------------------------------------------------------------------------------------
}
