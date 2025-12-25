package norswap.utils.exceptions;

import java.io.PrintWriter;
import java.io.StringWriter;
import java.util.Arrays;
import java.util.function.Consumer;
import java.util.function.Supplier;

import static norswap.utils.Util.cast;

/**
 * Utility methods related to exceptions.
 */
public final class Exceptions
{
    // ------------------------------------------------------------------------------------------

    /**
     * Returns a string representation of the stack trace of the given throwable, as per {@link
     * Throwable#printStackTrace()}.
     */
    public static String stringStackTrace (Throwable t)
    {
        StringWriter trace = new StringWriter();
        PrintWriter w = new PrintWriter(trace);
        t.printStackTrace(w);
        w.close();
        return trace.toString();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Trims the given stack trace, removing {@code peel} stack trace elements at the top of the
     * stack trace (the most recently called methods).
     */
    public static StackTraceElement[] trimStackTrace (int peel, StackTraceElement[] trace) {
        return Arrays.copyOfRange(trace, peel, trace.length);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Trims the stack trace of the given throwable, removing {@code peel} stack trace elements at
     * the top of the stack trace (the most recently called methods). Mutates the throwable and
     * returns it.
     */
    public static <T extends Throwable> T trimStackTrace (int peel, T throwable) {
        throwable.setStackTrace(trimStackTrace(peel, throwable.getStackTrace()));
        return throwable;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a version of the runnable that wraps its thrown checked exception in a {@link
     * NoStackException}.
     */
    public static Runnable unchecked (ThrowingRunnable runnable) {
        return () -> suppress(runnable);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a version of the runnable that wraps its thrown checked exception in a {@link
     * NoStackException}.
     */
    public static <T> Supplier<T> unchecked (ThrowingSupplier<T> supplier) {
        return () -> suppress(supplier);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a version of the runnable that wraps its thrown checked exception in a {@link
     * NoStackException}.
     */
    public static <T> Consumer<T> unchecked (ThrowingConsumer<T> consumer) {
        return it -> {
            try {
                consumer.accept(it);
            } catch (Error | RuntimeException e) {
                throw e;
            } catch (Throwable t) {
                throw new NoStackException(t);
            }
        };
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Return the value returned by the given supplier, rethrowing any checked {@link Exception} it
     * might throw by wrapping it in a {@link NoStackException}. The point is to suppress the
     * Java's checked expression check.
     */
    public static void suppress (ThrowingRunnable runnable) {
        try {
            runnable.run();
        } catch (RuntimeException | Error e) {
            throw e;
        } catch (Throwable t) {
            throw new NoStackException(t);
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Return the value returned by the given supplier, rethrowing any checked {@link Exception} it
     * might throw after wrapping it in a {@link NoStackException}. The point is to suppress the
     * Java's checked expression check.
     */
    public static <T> T suppress (ThrowingSupplier<T> supplier) {
        try {
            return supplier.get();
        } catch (RuntimeException | Error e) {
            throw e;
        } catch (Throwable t) {
            throw new NoStackException(t);
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Rethrows {@code t} as-is if it isn't a checked exception, otherwise wraps it in
     * a {@link NoStackException} before rethrowing it.
     *
     * <p>Sometimes, one would like to write {@code throw rethrow(t)}, to give Java a hint
     * that the method always throws. To that effect, the {@link #runtime(Throwable)} method
     * was introduced.
     */
    public static void rethrow (Throwable t) {
        if (t instanceof RuntimeException)
            throw (RuntimeException) t;
        if (t instanceof Error)
            throw (Error) t;
        else
            throw new NoStackException(t);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Rethrows {@code t} as-is if it isn't a checked exception, otherwise wraps it in
     * a {@link NoStackException} before rethrowing it.
     *
     * <p>This method always throws, but you should always use this method as {@code throw
     * runtime(t)}, which gives Java - and the reader - a hint that the method always throws.
     * Alternatively, use {@link #rethrow(Throwable)}}, whose name is clearer but does not help
     * Java's dataflow analysis.
     */
    public static RuntimeException runtime (Throwable t) {
        if (t instanceof RuntimeException)
            throw (RuntimeException) t;
        if (t instanceof Error)
            throw (Error) t;
        else
            throw new NoStackException(t);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Equivalent to a throw statement (actually to {@link #rethrow(Throwable)} - in that checked
     * exceptions are wrapped), but can be called in an expression position. Reports a bogus
     * inferred return type (bogus because this always throws and never returns).
     */
    public static <T> T exprThrow (Throwable t) {
        rethrow(t);
        return cast(null);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Run the given supplier, returning its value if it completes successfully, and returning
     * the default value if it fails with an exception or error.
     */
    public static <T> T runOr (ThrowingSupplier<T> supplier, T defaultValue) {
        try {
            return supplier.get();
        } catch (Throwable t) {
            return defaultValue;
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Run the given supplier, returning its value if it completes successfully, and returning
     * the default value if it fails with an exception or error.
     */
    public static <T> T runOr (ThrowingSupplier<T> supplier, Supplier<T> defaultValue) {
        try {
            return supplier.get();
        } catch (Throwable t) {
            return defaultValue.get();
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Run the given supplier, returning its value if it completes successfully, and returning
     * {@code null} if it fails with an exception or error.
     */
    public static <T> T runOrNull (ThrowingSupplier<T> supplier) {
        try {
            return supplier.get();
        } catch (Throwable t) {
            return null;
        }
    }

    // ---------------------------------------------------------------------------------------------
}
