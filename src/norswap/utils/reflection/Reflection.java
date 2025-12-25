package norswap.utils.reflection;

import norswap.utils.Vanilla;
import norswap.utils.exceptions.Exceptions;
import norswap.utils.NArrays;
import norswap.utils.exceptions.ThrowingRunnable;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.WrongMethodTypeException;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.TypeVariable;

import static norswap.utils.Util.cast;

public final class Reflection
{
    // ---------------------------------------------------------------------------------------------

    private Reflection () {}

    // ---------------------------------------------------------------------------------------------

    /**
     * {@code (Class<?>) type.getRawType()}
     */
    public static Class<?> raw (ParameterizedType type) {
        return (Class<?>) type.getRawType();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a {@link ParameterizedType} for the superclass of {@code type} with actual type
     * arguments.
     *
     * <p>You would normally get the parameterized type for the superclass by running {@code
     * ((Class<?>)type.getRawType().getGenericSuperclass()}. The issue is that this type has
     * references to type variables that appear in the declaration of the subclass. So you need
     * to substitute these type variables with their actual value from the passed to get a
     * proper supertype representation.
     *
     * <p>Example: {@code type} represents {@code ArrayDeque<String>}. Then the {@code
     * getGenericSuperClass} bit above would return a representation for {@code
     * AbstractCollection<E>} because {@code ArrayDeque} is declared as {@code class ArrayDeque<E>
     * extends AbstractCollection<E>}. This methods substitutes {@code String} for {@code E}
     * and returns a representation of {@code AbstractCollection<String>}.
     *
     * <p>Returns {@code null} if {@code type} represents {@code Object}.
     */
    public static ParameterizedType actualParameterizedSupertype (ParameterizedType type)
    {
        Type parameterizedSuperclass = raw(type).getGenericSuperclass();
        if (parameterizedSuperclass == null) return null;
        return parameterizedSuperclass instanceof Class<?>
            ? new GenericType(parameterizedSuperclass, cast(parameterizedSuperclass))
            : substituteTypeVars(cast(parameterizedSuperclass), type);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Same idea as {@link #actualParameterizedSupertype(ParameterizedType)} but for interfaces.
     */
    public static ParameterizedType[] actualParameterizedInterfaces (ParameterizedType type)
    {
        Type[] parameterizedInterface = raw(type).getGenericInterfaces();
        return Vanilla.map(parameterizedInterface, new GenericType[0], iface ->
            iface instanceof Class<?>
                ? new GenericType(null, cast(iface))
                : substituteTypeVars(cast(iface), type));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Same as {@link #actualParameterizedSupertype(ParameterizedType)} but also accepts
     * {@code Class<?>} arguments (in which case there is no parameter substitution to be done).
     */
    public static Type actualParameterizedSupertype (Type type)
    {
        if (type instanceof Class<?>)
            return ((Class<?>) type).getGenericSuperclass();
        if (type instanceof ParameterizedType)
            return actualParameterizedSupertype((ParameterizedType) type);
        else
            throw new IllegalArgumentException("not an class-based type: " + type);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Same idea as {@link #actualParameterizedInterfaces(ParameterizedType)} but also accepts
     * {@code Class<?>} arguments (in which case there is no parameter substitution to be done).
     */
    public static Type[] actualParameterizedInterfaces (Type type)
    {
        if (type instanceof Class<?>)
            return ((Class<?>) type).getGenericInterfaces();
        if (type instanceof ParameterizedType)
            return actualParameterizedInterfaces((ParameterizedType) type);
        else
            throw new IllegalArgumentException("not an class-based type: " + type);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a {@link GenericType} mimicking {@code superClass}, after performing substitution of
     * its type arguments based on {@code subClass}.
     *
     * <p>{@code superClass} is meant to be a type that appears in an {@code extends} or {@code
     * implements} clause in the class of {@code subClass}, and as such may contain references to
     * type variables introduce in the sub classclass. This method substitutes these type variables
     * for their actual value in {@code subClass}.
     *
     * <p>The method is offered for completeness, but {@link #actualParameterizedSupertype} and
     * {@link #actualParameterizedInterfaces} should subsumes most pratical uses.
     */
    public static GenericType substituteTypeVars
            (ParameterizedType superClass, ParameterizedType subClass)
    {
        TypeVariable<?>[] subParams = raw(subClass).getTypeParameters();
        Type[] subArgs = subClass.getActualTypeArguments();
        return substituteTypeVars(superClass, subParams, subArgs);
    }

    // ---------------------------------------------------------------------------------------------

    private static GenericType substituteTypeVars
            (ParameterizedType type, TypeVariable<?>[] substFrom, Type[] substTo)
    {
        Type[] typeArgs = type.getActualTypeArguments();
        Type[] newTypeArgs = new Type[typeArgs.length];

        for (int i = 0; i < typeArgs.length; ++i)
        {
            Type typeArg = typeArgs[i];

            if (typeArg instanceof Class<?>) {
                newTypeArgs[i] = typeArg;
            }

            else if (typeArg instanceof ParameterizedType) {
                ParameterizedType pTypeArg = cast(typeArg);
                if (pTypeArg.getActualTypeArguments().length == 0)
                    newTypeArgs[i] = pTypeArg;
                else
                    newTypeArgs[i] = substituteTypeVars(pTypeArg, substFrom, substTo);
            }

            else if (typeArg instanceof TypeVariable<?>) {
                int index = NArrays.indexOf(substFrom, typeArg);
                if (index < 0)
                    throw new RuntimeException("could not find type var to subtitute: " + typeArg);
                newTypeArgs[i] = substTo[index];
            }

            else throw new Error(
                        "unknown kind of Type: " + typeArg + "(" + typeArg.getClass() + ")");
        }

        return new GenericType(null, raw(type), newTypeArgs);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Provides a try statement to wrap around invocations of {@link MethodHandle#invoke}, {@link
     * MethodHandle#invokeExact}, etc. Suppresses any checked exceptions thrown by the method using
     * {@link Exceptions#rethrow}, and wraps any {@link WrongMethodTypeException} resulting from an
     * incorrect invocation in an {@link Error}.
     */
    public static void tryHandles (ThrowingRunnable runnable) {
        try {
            runnable.run();
        } catch (WrongMethodTypeException e) {
            throw new Error(e); // should not reach here
        } catch (Throwable t) {
            Exceptions.rethrow(t);
        }
    }

    // ---------------------------------------------------------------------------------------------
}
