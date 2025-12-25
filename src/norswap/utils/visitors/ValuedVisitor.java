package norswap.utils.visitors;

import java.util.HashMap;
import java.util.function.Consumer;
import java.util.function.Function;

import static norswap.utils.Util.cast;
import static norswap.utils.exceptions.Exceptions.exprThrow;

/**
 * Analogue to {@link Visitor}, but implementing {@link Function} instead of {@link Consumer}.
 * See the documentation of {@link Visitor} for usage notes.
 */
public final class ValuedVisitor<T, R> implements Function<T, R>
{
    // ---------------------------------------------------------------------------------------------

    /** Map from classes to specializations.*/
    private final HashMap<Class<? extends T>, Function<? super T, ? extends R>> dispatch
            = new HashMap<>();

    private Function<? super T, ? extends R> fallbackSpecialization = null;

    // ---------------------------------------------------------------------------------------------

    /**
     * Run the operation by calling the appropriate overload for {@code value}, or the fallback.
     */
    @Override public R apply (T value)
    {
        Function<? super T, ? extends R> action = dispatch.get(value.getClass());

        return action == null
            ? fallbackSpecialization == null
                ? exprThrow(new IllegalArgumentException(String.format(
                        "no fallback specified for %s (offending value: %s)",
                                value.getClass(), value)))
                : fallbackSpecialization.apply(value)
            : action.apply(value);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Register a specialization for the given class.
     */
    public <T1 extends T> ValuedVisitor<T, R> register
        (Class<T1> klass, Function<? super T1, ? extends R> specialization)
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
    public ValuedVisitor<T, R> registerFallback (Function<? super T, ? extends R> fallback)
    {
        this.fallbackSpecialization = fallback;
        return this;
    }

    // ---------------------------------------------------------------------------------------------
}
