package norswap.utils.exceptions;

import java.util.function.Consumer;

/**
 * Similar to {@link Consumer}, but allowed to throw exceptions.
 */
@FunctionalInterface
public interface ThrowingConsumer<T> {
    void accept (T t) throws Throwable;
}