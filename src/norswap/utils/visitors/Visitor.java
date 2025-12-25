package norswap.utils.visitors;

import java.util.HashMap;
import java.util.function.Consumer;

import static norswap.utils.Util.cast;

/**
 * An instance of this class can be used to specify an operation that has different behaviours
 * (<i>specializations</i>) for different subclasses of {@code T}.
 *
 * <p>Each specialization is represented by an instance of {@link Consumer}. They are registered by
 * calling {@link #register(Class, Consumer)}. Specializations for a class are only operational for
 * values that have that specific class — inheritance does not enter into account when dispatching
 * the operation.
 *
 * <p>The operation is invoked by calling {@link #accept}.
 *
 * <p>If a specialization for the class of the value does not exist, a fallback specialization can
 * be called. The fallback specialization is registered by calling {@link
 * #registerFallback(Consumer)}. If not supplied, an {@link IllegalArgumentException} is thrown.
 *
 * <p>If you need to return a value from the visitor, use {@link ValuedVisitor} instead.
 *
 * <p>In practice it's easy to let the specializations access a context object and to wrap the
 * visitor in a function that sets arguments and retrieves the result from that object. Typically
 * that context object might be the {@code Consumer} instance itself, or an instance of the class
 * where all consumers are defined as lambda or methods.
 *
 * <p>This is implemented on top of a class-to-specialization hashmap.
 */
public final class Visitor<T> implements Consumer<T>
{
    // ---------------------------------------------------------------------------------------------

    /** Map from classes to specializations.*/
    private final HashMap<Class<? extends T>, Consumer<? super T>> dispatch = new HashMap<>();

    private Consumer<? super T> fallbackSpecialization = null;

    // ---------------------------------------------------------------------------------------------

    /**
     * Run the operation by calling the appropriate overload for {@code value}, or the fallback.
     */
    @Override public void accept (T value)
    {
        Consumer<? super T> action = dispatch.get(value.getClass());
        if (action == null) {
            if (fallbackSpecialization == null)
                throw new IllegalArgumentException("no fallback specified for " + this);
            fallbackSpecialization.accept(value);
        }
        else action.accept(value);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Register a specialization for the given class.
     */
    public <S extends T> Visitor<T> register (Class<S> klass, Consumer<? super S> specialization)
    {
        // The cast is a lie, but its statically safe because of erasure, and safe at runtime,
        // by construction.
        dispatch.put(klass, cast(specialization));
        return this;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Register the fallback specialization.
     */
    public Visitor<T> registerFallback (Consumer<? super T> fallback)
    {
        this.fallbackSpecialization = fallback;
        return this;
    }

    // ---------------------------------------------------------------------------------------------
}
