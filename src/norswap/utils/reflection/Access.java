package norswap.utils.reflection;

import norswap.utils.exceptions.Exceptions;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodHandles.Lookup;
import java.lang.invoke.MethodType;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.Deque;

import static norswap.utils.Util.cast;
import static norswap.utils.exceptions.Exceptions.runtime;

/**
 * Utilities to access (possibly private) fields and class methods conveniently.
 * <p>
 * Below I focus on reflective method invocation, but the same principles hold true for field
 * acccess.
 *
 * <h2>Reflection Utilities</h2>
 * <p>
 * These utilities exist to deal with the traditional reflection API in the {@code
 * java.lang.reflect} package ({@link Method}, {@link Field}, etc). They alleviate multiple pain
 * points when dealing with the standard API, namely:
 * <ul>
 * <li>Need to specify full method signatures, even when the name is unambiguous.</li>
 * <li>Looking up a protected method requires filtering the list of all declared methods, for every
 * ancestor in the class. The same is true for private methods, although in that case looking up
 * the private method from a subclass is nonsensical.</li>
 * <li>When looking up protected or private methods, they need to be {@link Method#setAccessible
 * made accessible} before they can be called.</li>
 * <li>One-off reflective method invocation is very verbose.
 * </ul>
 *
 * <h2>Method Handle Utilities</h2>
 * <p>
 * These utilities deal with reflective utilities in the {@code java.lang.invoke} package, added in
 * Java 7. The API is quite complex, but the main innovation is the introduction of {@link
 * MethodHandle method handles} which can be used in some contexts to perform more performent and/or
 * convenient reflective invocations.
 * <p>
 * It is important to note that in <b>in general</b>, calling a method with a {@link MethodHandle}
 * is not faster than using a {@link Method}. However, there are two cases where they are very
 * powerful: (A) When the handle gets compiled as a constant (i.e. it is stored in  {@code static
 * final}) field); (B) When using a {@link LambdaMetafactory} to call the handle. Without entering
 * into the details, this creates a new "call site" dedicated to that handle (it's as though we
 * created a method where the handle was constant). Here are some performance numbers to back these
 * claims: <a href="https://gist.github.com/raphw/881e1745996f9d314ab0">benchmark 1</a>, <a
 * href="https://stackoverflow.com/a/22337726/298664">benchmark 2</a>.
 * <p>
 * Handle lookups are done through a {@link Lookup} object. The class that creates the lookup is
 * "the lookup class" and it does matter for reasons of access control (notably, the lookup class
 * serves as reference to see if a protected method is accessible, i.e. it has to be defined in one
 * of the parents of the lookup class). However, most of the time this doesn't matter and so these
 * utilities share a thread-local {@link Lookup} object, which lets the user not have to worry
 * about creating and storing such an object.
 * <p>
 * There are two main ways in which a method handle can be created: by using a {@code findXXX}
 * method, which looks up the method, or by "unreflecting" a {@link Method}. The first way is
 * typically slightly faster (though this consideration is dwarfed by the impact of situations (A)
 * and (B) above, and is mostly relevant when not in one of those situations). However, the second
 * way lets you use a handle to call a private or protected method that has been {@link
 * Method#setAccessible made accessible}.
 *
 * <h2>Status and Warning</h2>
 * <p>
 * Unlike the rest of this library (which is a bit more battle-tested), this code is very much
 * experimental, untested, and a work in progress.
 * <p>
 * In particular, it would be good to include utilities that help use a {@link LambdaMetafactory}
 * to create a call site dedicated to a handle.
 */
public final class Access
{
    // ---------------------------------------------------------------------------------------------

    private Access() {}

    // ---------------------------------------------------------------------------------------------

    private static final ThreadLocal<Lookup> lookup =
        ThreadLocal.withInitial(MethodHandles::lookup);

    // =============================================================================================
    // region Field Lookup
    // =============================================================================================

    // TODO field lookup + rewrite value access to use it

    // endregion
    // =============================================================================================
    // region Field Value Read/Write
    // =============================================================================================

    /**
     * Returns the value of the (potentially private) named field of the object, looking through all
     * of its superclass in order.
     *
     * <p>The field is set accessible in the process.
     *
     * <p> Use {@link #get(Object, Class, String)} if you know the superclass storing the field
     * and want better performance.
     */
    public static <T> T get (Object object, String name)
    {
        Class<?> klass = object.getClass();
        while (true) {
            try {
                assert klass != null;
                Field field = klass.getDeclaredField(name);
                field.setAccessible(true);
                return cast(field.get(object));
            } catch (NoSuchFieldException e) {
                klass = klass.getSuperclass();
                if (klass == null)
                    try {
                        // do this to get a clearer exception that mentions the bottom type
                        object.getClass().getDeclaredField(name); // always throws
                    } catch (NoSuchFieldException e2) {
                        throw runtime(e2);
                    }
                // keep looping
            } catch (IllegalAccessException e) {
                throw runtime(e);
            }
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the value of the (potentially private) named field of the given class (which has to
     * be the class declaring the field) on the given object.
     *
     * <p>The field is set accessible in the process.
     */
    public static <T> T get (Object object, Class<?> klass, String name) {
        try {
            Field field = klass.getDeclaredField(name);
            field.setAccessible(true);
            return cast(field.get(object));
        } catch (ReflectiveOperationException e) {
            throw runtime(e);
        }
    }

    // ---------------------------------------------------------------------------------------------

    // TODO field setting functions

    // endregion
    // =============================================================================================
    // region Method Lookup
    // =============================================================================================

    /**
     * Get the given (potentially private) method <b>declared in the given class</b>, specified by
     * its name. Since this is ambiguous (because of overloading), the returned method is
     * unspecified.
     *
     * <p>If no method with the given name is found, {@code null} is returned.
     */
    public static Method declaredMethodOrNull (Class<?> klass, String name)
    {
        return Arrays.stream(klass.getDeclaredMethods())
            .filter(m -> m.getName().equals(name))
            .findFirst().orElse(null);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Get the given (potentially private) method <b>declared in the given class</b>, specified by
     * its name. Since this is ambiguous (because of overloading), the returned method is
     * unspecified.
     *
     * @throws NoSuchMethodError if no method with the given name is found.
     */
    public static Method getDeclaredMethod (Class<?> klass, String name)
    {
        Method m = declaredMethodOrNull(klass, name);
        if (m == null) throw new NoSuchMethodError(
            String.format("method %s in class %s", name, klass.getCanonicalName()));
        return m;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Get the given (potentially private) method, specified by its name and the full list of the
     * type of its parameters.
     * <p>
     * This method always returns the most "specific" version of the method: the one declared in the
     * lowest superclass, or the unique interface method with a default implementation (Java doesn't
     * allow two conflicting default methods if a class method of the same name is not present). Not
     * that this matters much: all {@link Method} invocations are virtual in nature.
     * <p>
     * This result of this method can be ambiguous in the rare case where the class was not defined
     * in Java but in a language that allows overloaded methods with the same parameters but
     * different return types (forbidden in Java, but allowed in the JVM). No mainstream language
     * does this, but it could also come up using bytecode generation.
     * <p>
     * If no method with the given signature is found, {@code null} is returned.
     */
    public static Method methodWithSignatureOrNull (Class<?> klass, String name, Class<?>... params)
    {
        try { // easy case: the method is public
            return klass.getMethod(name, params);
        } catch (NoSuchMethodException e) { /* skip */ }

        Deque<Class<?>> queue = new ArrayDeque<>();
        queue.addLast(klass);
        while (!queue.isEmpty()) {
            Class<?> current = queue.removeFirst();
            Method m = Exceptions.runOrNull(() -> current.getDeclaredMethod(name, params));
            if (m != null) return m;

            Class<?> superClass = current.getSuperclass();
            // Adding the superclass to the start ensures all superclasses are visited before
            // the interfaces. This is sufficient to get the most "specific" version of the method.
            if (superClass != null) queue.addFirst(superClass);
            // Add interfaces to the end.
            queue.addAll(Arrays.asList(current.getInterfaces()));
        }
        return null;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Get the given (potentially private) method, specified by its name and the full list of the
     * type of its parameters.
     * <p>
     * See the comment in {@link #methodWithSignature(Class, String, Class[])} if you're worried
     * about which method will be returned.
     *
     * @throws NoSuchMethodError if no method with the given signature is found.
     */
    public static Method methodWithSignature (Class<?> klass, String name, Class<?>... params)
    {
        Method m = methodWithSignatureOrNull(klass, name, params);
        if (m == null) throw new NoSuchMethodError(
            String.format("method %s in class %s", name, klass.getCanonicalName()));
        return m;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Get the given method of the given class, specified by its name. Since this is ambiguous in
     * case multiple methods share the same name, the returned method is unspecified. Nevertheless,
     * it is guaranteed that the returned method will be one of most specific with respect to
     * overriding (see {@link #methodWithSignatureOrNull(Class, String, Class[])} (Class, String,
     * Class[])} for details on specificity).
     *
     * <p>If no method with the given name is found, {@code null} is returned.
     */
    public static Method methodOrNull (Class<?> klass, String name)
    {
        Deque<Class<?>> queue = new ArrayDeque<>();
        queue.addLast(klass);
        while (!queue.isEmpty()) {
            Class<?> current = queue.removeFirst();
            Method m = declaredMethodOrNull(current, name);
            if (m != null) return m;

            Class<?> superClass = current.getSuperclass();
            // Adding the superclass to the start ensures all superclasses are visited before
            // the interfaces. This is sufficient to get the most "specific" version of the method.
            if (superClass != null) queue.addFirst(superClass);
            // Add interfaces to the end.
            queue.addAll(Arrays.asList(current.getInterfaces()));
        }
        return null;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Get the given (potentially private) method of the given class, specified by its name. Since
     * this is ambiguous in case multiple methods share the same name, the returned method is
     * unspecified.  Nevertheless, it is guaranteed that the returned method will be one of most
     * specific with respect to overriding (see {@link #methodWithSignatureOrNull(Class, String,
     * Class[])} for details on specificity).
     *
     * @throws NoSuchMethodError if no method with the given name is found.
     */
    public static Method method (Class<?> klass, String name) {
        Method m = methodOrNull(klass, name);
        if (m == null) throw new NoSuchMethodError(
            String.format("method %s in class %s", name, klass.getCanonicalName()));
        return m;
    }

    // endregion
    // =============================================================================================
    // region Method Handle Lookup

    /**
     * Get a method handle the given method. Use one of the {@code getMethod} or {@code
     * getDeclaredMethod} methods in this class to retrieve the method easily.
     *
     * <p>Method handles generalities: If the method is non-static, the receiver will be added as
     * the first parameter for the handle. The returned handle performs virtual dispatch.
     *
     * <p>This will return null if passed a null method.
     */
    public static MethodHandle handle (Method method) {
        try {
            if (method == null) return null;
            return lookup.get().unreflect(method);
        } catch (IllegalAccessException e) {
            throw runtime(e);
        }
    }

    // ---------------------------------------------------------------------------------------------

    // Note: there is no getDeclaredHandleClass() method, because the findVirtual() (etc) methods
    // do a virtual lookup anyway, and do not allow calling private methods. (If you need to call
    // a private method, get a Method object and use (setAccessible), then you can get a handle
    // via getHandle(Method).

    // ---------------------------------------------------------------------------------------------

    /**
     * Get a handle for the given method of the given class, specified by its name. Since this is
     * ambiguous in case multiple methods share the same name, the returned handle is unspecified.
     * Nevertheless, it is guaranteed that the returned method will be one of most specific with
     * respect to overriding (see {@link #methodWithSignature(Class, String, Class[])} for
     * details on specificity).
     *
     * <p>Note that unlike {@link #method}, this does not work on private and protected methods.
     * (It can theoretically work in a restricted way for protected methods, restricting the
     * receiver type in the returned method to the "lookup class" — which is the class that created
     * the {@link Lookup} object (so it won't work here as this object is shared))
     *
     * @throws NoSuchMethodError if no method with the given name is found.
     * @throws IllegalAccessError if the method is private or protected.
     */
    public static MethodHandle handle (Class<?> klass, String method) {
        try {
            Method m = method(klass, method);
            return Modifier.isStatic(m.getModifiers())
                ? lookup.get().findVirtual(klass, method,
                    MethodType.methodType(m.getReturnType(), m.getParameterTypes()))
                : lookup.get().findStatic(klass, method,
                    MethodType.methodType(m.getReturnType(), m.getParameterTypes()));
        } catch (IllegalAccessException e) {
            throw new IllegalAccessError(e.getMessage());
        } catch (NoSuchMethodException e) {
            throw new Error("should not happen: getMethod should have thrown a NoSuchMethodError", e);
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Get a handle for the given method of the given class, specified by its name. Since this is
     * ambiguous in case multiple methods share the same name, the returned handle is unspecified.
     * Nevertheless, it is guaranteed that the returned method will be one of most specific with
     * respect to overriding (see {@link #methodWithSignature(Class, String, Class[])} for
     * details on specificity).
     *
     * <p>Cannot handle private or protected method, see {@link #handle(Class, String)} for
     * details.
     *
     * <p>If no method with the given name is found, {@code null} is returned.
     *
     * @throws IllegalAccessError if the method is private or protected.
     */
    public static MethodHandle handleOrNull (Class<?> klass, String method) {
        try {
            return handle(klass, method);
        } catch (NoSuchMethodError e) {
            return null;
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Get the handle for the given method, specified by its name, return type and the full list of
     * the type of its parameters. UThis is ambiguous because of overriding, but this method always
     * returns the most "specific" version of the method: the one declared in the lowest superclass,
     * or the unique interface method with a default implementation (Java doesn't allow two
     * conflicting default methods if a class method of the same name is not present).
     *
     * <p>Cannot handle private or protected method, see {@link #handle(Class, String)} for
     * details.
     *
     * @throws NoSuchMethodError if no method with the given signature is found.
     * @throws IllegalAccessError if the method is private or protected.
     */
    public static MethodHandle handleWithSignature
            (Class<?> klass, String method, Class<?> returnType, Class<?>... paramTypes) {
        try {
            try {
                return lookup.get().findVirtual(klass, method,
                    MethodType.methodType(returnType, paramTypes));
            } catch (NoSuchMethodException e) {
                return lookup.get().findStatic(klass, method,
                    MethodType.methodType(returnType, paramTypes));
            }
        } catch (IllegalAccessException e) {
            throw runtime(e);
        } catch (NoSuchMethodException e) {
            return null;
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Get the handle for the given method, specified by its name, return type and the full list of
     * the type of its parameters. UThis is ambiguous because of overriding, but this method always
     * returns the most "specific" version of the method: the one declared in the lowest superclass,
     * or the unique interface method with a default implementation (Java doesn't allow two
     * conflicting default methods if a class method of the same name is not present).
     *
     * <p>Cannot handle private or protected method, see {@link #handle(Class, String)} for
     * details.
     *
     * <p>If no method with the given signature is found, {@code null} is returned.
     *
     * @throws IllegalAccessError if the method is private or protected.
     */
    public static MethodHandle handleWithSignatureOrNull
            (Class<?> klass, String method, Class<?> returnType, Class<?>... parmTypes) {
        try {
            return handleWithSignature(klass, method, returnType, parmTypes);
        } catch (NoSuchMethodError e) {
            return null;
        }
    }

    // endregion
    // =============================================================================================
    // region Getter/Setter Handle Lookup
    // =============================================================================================

    // TODO get method handles for setters and getters

    // endregion
    // =============================================================================================
}
