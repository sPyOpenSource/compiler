package norswap.utils.data.wrappers;

import norswap.utils.Util;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.Optional;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.function.Supplier;

/**
 * A better alternative to {@link Optional}, which is notably able to handle {@code null} values.
 *
 * <p>Can be converted to/from {@link Optional} and nullable values.
 */
public final class Maybe<T>
{
    // ---------------------------------------------------------------------------------------------

    private final T value;

    // ---------------------------------------------------------------------------------------------

    /**
     * Creates an non-empty {@link Maybe}. The value may be null (and the Maybe will still be
     * non-empty).
     */
    public Maybe (T value) {
        this.value = value;
    }

    // ---------------------------------------------------------------------------------------------

    private static final Object NOTHING = new Object();
    private static final Maybe<Object> EMPTY = new Maybe<>(NOTHING);

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an empty {@link Maybe}.
     */
    public static <T> Maybe<T> empty() {
        return Util.cast(EMPTY);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Converts the optional to the far superior {@link Maybe}.
     */
    @SuppressWarnings("OptionalUsedAsFieldOrParameterType")
    public static <T> Maybe<T> from (Optional<? extends T> optional) {
        return Util.cast(optional.map(Maybe::new).orElseGet(Maybe::empty));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an empty {@link Maybe} if the value is {@code null}, or a {@link Maybe} containing
     * the value otherwise.
     */
    public static <T> Maybe<T> fromNullable (T value) {
        return value == null ? Maybe.empty() : new Maybe<>(value);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an {@link Optional} matching this {@link Maybe}.
     * <p>Beware that {@link Optional} does not support null values.
     *
     * @throws IllegalStateException if the value is null
     */
    public Optional<T> toOptional() {
        if (value == null)
            throw new IllegalStateException("Optional does not support null values");
        return value == NOTHING
            ? Optional.empty()
            : Optional.of(value);
    }

    // ---------------------------------------------------------------------------------------------

    /** Returns the value, or null if the {@link Maybe} is empty. This means this cannot distinguish
     * between null values and emptyness (but you can still call {@link #isEmpty()} to do so).
     */
    public T toNullable () {
        return value == NOTHING ? null : value;
    }

    // ---------------------------------------------------------------------------------------------

    /** True if the {@link Maybe} is empty. */
    public boolean isEmpty() {
        return value == NOTHING;
    }

    // ---------------------------------------------------------------------------------------------

    /** True if the {@link Maybe} is non-empty. */
    public boolean isPresent() {
        return value != NOTHING;
    }

    // ---------------------------------------------------------------------------------------------

    /** Returns the value if non-empty, otherwise throw a {@link NoSuchElementException}. */
    public T get() {
        if (value == NOTHING) throw new NoSuchElementException("empty Maybe");
        return value;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs the consumer on the value, if there is one.
     */
    public void ifPresent (Consumer<? super T> consumer) {
        if (value != NOTHING) consumer.accept(value);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Run the runnable if this {@link Maybe} is empty.
     */
    public void ifAbsent (Runnable runnable) {
        if (value == NOTHING) runnable.run();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Calls {@code ifValue} on the value if present, otherwise calls {@code ifException}.
     */
    public void ifElse (Consumer<? super T> ifValue, Runnable ifException) {
        if (value != NOTHING)
            ifValue.accept(value);
        else
            ifException.run();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a {@link Maybe} containing the result of applying the function to the value, if
     * present. Otherwise, an empty {@link Maybe} will be returned.
     */
    public <R> Maybe<R> map (Function<? super T, ? extends R> f) {
        return value == NOTHING
            ? empty()
            : new Maybe<>(f.apply(value));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the result of calling {@code ifPresent} on the value if present, otherwise the
     * result of calling {@code ifAbsent}.
     */
    public <R> R map (Function<? super T, ? extends R> ifPresent, Supplier<? extends R> ifAbsent) {
        return value != NOTHING
            ? ifPresent.apply(value)
            : ifAbsent.get();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the result of applying the function to the value, if present. Otherwise, an empty
     * {@link Maybe} is returned.
     */
    public<R> Maybe<R> flatMap (Function<? super T, Maybe<R>> mapper) {
        return value == NOTHING
            ? empty()
            : mapper.apply(value);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns this {@link Maybe} if non-empty and the predicate matches, and an empty {@link Maybe}
     * otherwise.
     */
    public Maybe<T> filter (Predicate<? super T> predicate) {
        return value == NOTHING
            ? this
            : predicate.test(value) ? this : empty();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the value if present, otherwise return {@code other}.
     */
    public T or (T other) {
        return value != NOTHING ? value : other;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the value if present, otherwise returns the value returned by the supplier.
     */
    public T orGet (Supplier<? extends T> supplier) {
        return value != NOTHING ? value : supplier.get();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the value if present, otherwise throws the supplied exception.
     */
    public <X extends Throwable> T orThrow (Supplier<? extends X> exceptionSupplier) throws X {
        if (value != NOTHING) return value;
        throw exceptionSupplier.get();
    }

    // ---------------------------------------------------------------------------------------------

    @Override public boolean equals (Object obj) {
        return this == obj
            || obj instanceof Maybe
            && Objects.equals(value, ((Maybe<?>) obj).value);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the hash code value of the present value, if any, or 0 (zero) if
     * no value is present.
     */
    @Override public int hashCode() {
        return Objects.hashCode(value);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public String toString() {
        return value != NOTHING
            ? String.format("Maybe[%s]", value)
            : "Maybe.empty";
    }

    // ---------------------------------------------------------------------------------------------
}
