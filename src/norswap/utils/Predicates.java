package norswap.utils;

import java.util.function.Predicate;

import static norswap.utils.exceptions.Exceptions.suppress;

/**
 * Utilities to work with predicates.
 */
public final class Predicates
{
    // ---------------------------------------------------------------------------------------------

    /**
     * A predicate that always evaluates to true.
     */
    public static final Predicate<Object> TRUE = it -> true;

    // ---------------------------------------------------------------------------------------------

    /**
     * A predicate that always evaluates to false.
     */
    public static final Predicate<Object> FALSE = it -> false;

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a string representation of a predicate, which is either the result of its
     * {@link #toString()} method if the predicate class overrides it, or "pred" otherwise.
     */
    public static String toString (Predicate<?> pred)
    {
        Class<?> predTostringSrc
            = suppress(() -> pred.getClass().getMethod("toString").getDeclaringClass());

        boolean overriden
            = pred != null && !predTostringSrc.equals(Object.class);

        return overriden
            ? pred.toString()
            : "pred";
    }

    // ---------------------------------------------------------------------------------------------
}
