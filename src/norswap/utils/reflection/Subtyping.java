package norswap.utils.reflection;

import java.lang.reflect.GenericArrayType;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.TypeVariable;
import java.lang.reflect.WildcardType;
import java.util.Arrays;
import java.util.stream.IntStream;

import static norswap.utils.Util.cast;
import static norswap.utils.reflection.Reflection.*;

/**
 * This class enables testing whether an instance of {@link Type} is a subtype of another.
 *
 * <p>This logic does not support inner classes (aka non-static nested classes).
 *
 * <p>The only public methods in this class are overloads of the static {@code check(Type, Type)}
 * method, specializing on more specific types. These methods returns true if and only if the first
 * parameter is a subtype of the second. They should not be passed null values.
 *
 * <p>The more abstract methods dispatch to the more specific methods depending on the runtime types
 * of arguments.
 *
 * <p>In particular, this class consider the following subtypes of {@link Type}:
 * <ul>
 *     <li>{@link Class}</li>
 *     <li>{@link ParameterizedType}</li>
 *     <li>{@link TypeVariable}</li>
 *     <li>{@link WildcardType}</li>
 *     <li>{@link GenericArrayType}</li>
 * </ul>
 *
 * <p>An overview of the subtyping rules:
 * <ul>
 *     <li>Subtyping between two {@code Class} instances only considers the type erasure, as type
 *     parameters are not available.</li>
 *     <li>A {@code Class} can only be a subtype of a {@code ParameterizedType} only if it has no
 *     type parameters.</li>
 *     <li>A {@code ParameterizedType} is a subtype of a {@code Class} if its erasure is a subtype
 *     of the class (so type parameters are not considered).</li>
 *     <li>A {@code ParameterizedType} is a subtype of another if its erasure is a subtype of the
 *     other type's erasure, and their type parameters are compatible (this can be ascertained by
 *     propagating the type arguments of the first type through the type parameters of its
 *     ancestors. This "compatibility" is also a subtyping relationship.</li>
 *     <li>A {@code ParameterizedType} may also represent the erasure of a type. In this case, the
 *     rules are similar to that governing {@code Class} instances.</li>
 *     <li>Only a {@code WildcardType} or another {@code TypeVariable} can be a subtype of a {@code
 *     TypeVariable}. This happens only when the type variables are identical, or the type variable
 *     is bounded (directly or transitively) by the second.</li>
 *     <li>A {@code WildcardType} is a subtype of another type if one of its upper bounds ({@code
 *     extends}) is a subtype of the type. Conversely, a type is a subtype of a {@code WildcardType}
 *     if it is a subtype of one of its lower bounds ({@code super}).</li>
 *     <li>A {@code GenericArrayType} is a subtype of another array type when its component type is
 *     the subtype of that array type's component type. Note that array types can also be represent
 *     by a {@code Class} instance (and maybe even by a {@code ParameterizedType} instance.</li>
 *     <li>Every type representable as an instance of {@code Type} is a subtype of the {@code
 *     Object} class (represented as {@code Class} or {@code ParameterizedType} object.</li>
 * </ul>
 *
 * Note that interfaces are taken into account when determining subtyping. So are type bounds.
 * While we call this relationship "subtyping", it might be more intuitive to think of it as
 * the "is (a) assignable to (b)" relationship.
 */
public final class Subtyping
{
    // ---------------------------------------------------------------------------------------------

    public static boolean check (Class<?> a, Class<?> b) {
        return b.isAssignableFrom(a);
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Class<?> a, ParameterizedType b) {
        return b.getActualTypeArguments().length == 0 && check(a, raw(b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Class<?> a, TypeVariable<?> b) {
        return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Class<?> a, WildcardType b) {
        return Arrays.stream(b.getLowerBounds()).anyMatch(it -> check(a, it));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Class<?> a, GenericArrayType b) {
        return a.isArray() && check(a.getComponentType(), b.getGenericComponentType());
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (ParameterizedType a, Class<?> b) {
        return check(raw(a), b);
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (TypeVariable<?> a, Class<?> b) {
        return a.getBounds().length == 0
                ? Object.class.equals(b)
                : Arrays.stream(a.getBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (WildcardType a, Class<?> b) {
        return a.getUpperBounds().length == 0
                ? Object.class.equals(b)
                : Arrays.stream(a.getUpperBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (GenericArrayType a, Class<?> b) {
        return b.isArray() && check(a.getGenericComponentType(), b.getComponentType());
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (ParameterizedType a, ParameterizedType b) {
        Type[] argsA = a.getActualTypeArguments();
        Type[] argsB = b.getActualTypeArguments();

        Class<?> rawA = raw(a);
        Class<?> rawB = raw(b);

        if (rawA.equals(rawB)) {
            if (argsA.length < argsB.length) // a is erased
                return false;
            if (argsA.length > argsB.length) // b is erased
                return true;
            else
                return IntStream.range(0, argsA.length).allMatch(i -> check(argsA[i], argsB[i]));
        }

        if (!check(rawA, rawB))
            return false;

        Type parent = Reflection.actualParameterizedSupertype(a);
        Type[] interfaces = Reflection.actualParameterizedInterfaces(a);

        return parent != null && check(parent, b)
                || Arrays.stream(interfaces).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (ParameterizedType a, TypeVariable<?> b) {
        return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (ParameterizedType a, WildcardType b) {
        return Arrays.stream(b.getLowerBounds()).anyMatch(it -> check(a, it));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (ParameterizedType a, GenericArrayType b) {
        return check(raw(a), b);
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (TypeVariable<?> a, ParameterizedType b) {
        return a.getBounds().length == 0
                ? Object.class.equals(raw(b))
                : Arrays.stream(a.getBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (WildcardType a, ParameterizedType b) {
        return a.getUpperBounds().length == 0
                ? Object.class.equals(raw(b))
                : Arrays.stream(a.getUpperBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (GenericArrayType a, ParameterizedType b) {
        return check(a, raw(b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (TypeVariable<?> a, TypeVariable<?> b) {
        return a.equals(b) || Arrays.stream(a.getBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (TypeVariable<?> a, WildcardType b) {
        return Arrays.stream(a.getBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (TypeVariable<?> a, GenericArrayType b) {
        return Arrays.stream(a.getBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (WildcardType a, TypeVariable<?> b) {
        return Arrays.stream(a.getUpperBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (GenericArrayType a, TypeVariable<?> b) {
        return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (WildcardType a, WildcardType b) {
        return a == b || Arrays.stream(a.getUpperBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (WildcardType a, GenericArrayType b) {
        return Arrays.stream(a.getUpperBounds()).anyMatch(it -> check(it, b));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (GenericArrayType a, WildcardType b) {
        return Arrays.stream(b.getLowerBounds()).anyMatch(it -> check(a, it));
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (GenericArrayType a, GenericArrayType b) {
        return check(a.getGenericComponentType(), b.getGenericComponentType());
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Class<?> a, Type b) {
        if (b instanceof Class)
            return check(a, (Class<?>) b);
        if (b instanceof ParameterizedType)
            return check(a, (ParameterizedType) b);
        if (b instanceof TypeVariable)
            return check(a, (TypeVariable<?>) b);
        if (b instanceof WildcardType)
            return check(a, (WildcardType) b);
        if (b instanceof GenericArrayType)
            return check(a, (GenericArrayType) b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Type a, Class<?> b) {
        if (a instanceof Class)
            return check((Class<?>) a, b);
        if (a instanceof ParameterizedType)
            return check((ParameterizedType) a, b);
        if (a instanceof TypeVariable)
            return check((TypeVariable<?>) a, b);
        if (a instanceof WildcardType)
            return check((WildcardType) a, b);
        if (a instanceof GenericArrayType)
            return check((GenericArrayType) a, b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (ParameterizedType a, Type b) {
        if (b instanceof Class)
            return check(a, (Class<?>) b);
        if (b instanceof ParameterizedType)
            return check(a, (ParameterizedType) b);
        if (b instanceof TypeVariable)
            return check(a, (TypeVariable<?>) b);
        if (b instanceof WildcardType)
            return check(a, (WildcardType) b);
        if (b instanceof GenericArrayType)
            return check(a, (GenericArrayType) b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Type a, ParameterizedType b) {
        if (a instanceof Class)
            return check((Class<?>) a, b);
        if (a instanceof ParameterizedType)
            return check((ParameterizedType) a, b);
        if (a instanceof TypeVariable)
            return check((TypeVariable<?>) a, b);
        if (a instanceof WildcardType)
            return check((WildcardType) a, b);
        if (a instanceof GenericArrayType)
            return check((GenericArrayType) a, b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (TypeVariable<?> a, Type b) {
        if (b instanceof Class)
            return check(a, (Class<?>) b);
        if (b instanceof ParameterizedType)
            return check(a, (ParameterizedType) b);
        if (b instanceof TypeVariable)
            return check(a, (TypeVariable<?>) b);
        if (b instanceof WildcardType)
            return check(a, (WildcardType) b);
        if (b instanceof GenericArrayType)
            return check(a, (GenericArrayType) b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Type a, TypeVariable<?> b) {
        if (a instanceof Class)
            return check((Class<?>) a, b);
        if (a instanceof ParameterizedType)
            return check((ParameterizedType) a, b);
        if (a instanceof TypeVariable)
            return check((TypeVariable<?>) a, b);
        if (a instanceof WildcardType)
            return check((WildcardType) a, b);
        if (a instanceof GenericArrayType)
            return check((GenericArrayType) a, b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Type a, WildcardType b) {
        if (a instanceof Class)
            return check((Class<?>) a, b);
        if (a instanceof ParameterizedType)
            return check((ParameterizedType) a, b);
        if (a instanceof TypeVariable)
            return check((TypeVariable<?>) a, b);
        if (a instanceof WildcardType)
            return check((WildcardType) a, b);
        if (a instanceof GenericArrayType)
            return check((GenericArrayType) a, b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (WildcardType a, Type b) {
        if (b instanceof Class)
            return check(a, (Class<?>) b);
        if (b instanceof ParameterizedType)
            return check(a, (ParameterizedType) b);
        if (b instanceof TypeVariable)
            return check(a, (TypeVariable<?>) b);
        if (b instanceof WildcardType)
            return check(a, (WildcardType) b);
        if (b instanceof GenericArrayType)
            return check(a, (GenericArrayType) b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Type a, GenericArrayType b) {
        if (a instanceof Class)
            return check((Class<?>) a, b);
        if (a instanceof ParameterizedType)
            return check((ParameterizedType) a, b);
        if (a instanceof TypeVariable)
            return check((TypeVariable<?>) a, b);
        if (a instanceof WildcardType)
            return check((WildcardType) a, b);
        if (a instanceof GenericArrayType)
            return check((GenericArrayType) a, b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (GenericArrayType a, Type b) {
        if (b instanceof Class)
            return check(a, (Class<?>) b);
        if (b instanceof ParameterizedType)
            return check(a, (ParameterizedType) b);
        if (b instanceof TypeVariable)
            return check(a, (TypeVariable<?>) b);
        if (b instanceof WildcardType)
            return check(a, (WildcardType) b);
        if (b instanceof GenericArrayType)
            return check(a, (GenericArrayType) b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------

    public static boolean check (Type a, Type b) {
        if (a instanceof Class)
            return check((Class<?>) a, b);
        if (a instanceof ParameterizedType)
            return check((ParameterizedType) a, b);
        if (a instanceof TypeVariable)
            return check((TypeVariable<?>) a, b);
        if (a instanceof WildcardType)
            return check((WildcardType) a, b);
        if (a instanceof GenericArrayType)
            return check((GenericArrayType) a, b);
        else
            return false;
    }

    // ---------------------------------------------------------------------------------------------
}
