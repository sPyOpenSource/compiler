package norswap.utils;

import norswap.utils.exceptions.Exceptions;
import java.util.List;

import static java.lang.String.format;
import static norswap.utils.Strings.append;
import static norswap.utils.Strings.pop;

/**
 * Miscellaneous utility functions.
 */
public final class Util
{
    // ---------------------------------------------------------------------------------------------

    /**
     * Casts the object to type T, which may be inferred.
     */
    @SuppressWarnings("unchecked")
    public static <T> T cast (Object obj)
    {
        return (T) obj;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Casts {@code value} to type {@code T} if possible, otherwise throws an {@link Error}.
     */
    @SuppressWarnings("unchecked")
    public static <T>  T cast (Object value, Class<T> klass)
    {
        if (klass.isInstance(value)) return (T) value;

        throw new Error(format("expected a value of type %s, but received value <%s> (of type %s)",
            klass, value, value == null ? "null" : value.getClass()));

    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Prints the message on the standard error and exits with error code 1.
     */
    public static void abort (String message)
    {
        System.err.println(message);
        System.exit(1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns to string representation of {@code list} that has the string representation of
     * each item on its own line.
     */
    public static String lines (Object[] array)
    {
        StringBuilder b = new StringBuilder(array.length * 8);
        for (Object it: array) append(b, it.toString(), "\n");
        if (array.length > 0) pop(b, 1); // final newline
        return b.toString();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns to string representation of {@code list} that has the string representation of
     * each item on its own line.
     */
    public static String lines (List<?> list)
    {
        StringBuilder b = new StringBuilder(list.size() * 8);
        for (Object it: list) append(b, it.toString(), "\n");
        if (list.size() > 0) pop(b, 1); // final newline
        return b.toString();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * A way to check assertions even when the -ea flag is not passed.
     *
     * <p>If the assertion fails, {@code format} and {@code args} will be passed to {@link
     * String#format(String, Object...)} to generate the thrown {@link AssertionError}.
     *
     * <p>This method itself will not appear in the stack trace.
     */
    public static void assertion(boolean condition, String format, Object... args)
            throws AssertionError
    {
        if (!condition)
            throw Exceptions.trimStackTrace(1, new AssertionError(format(format, args)));
    }

    // ---------------------------------------------------------------------------------------------
}

