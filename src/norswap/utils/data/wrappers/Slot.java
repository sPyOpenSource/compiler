package norswap.utils.data.wrappers;

import java.util.Objects;

/**
 * A simple wrapper for a single value of type {@code T}.
 *
 * <p>This is particularly handy when dealing with lambda functions: they cannot assign to
 * local variables (which might go out of scope before the function, but they can assign to
 * a slot instead. The slot can be read from within the function, passed to other lambdas, etc.
 */
public final class Slot<T>
{
    // ---------------------------------------------------------------------------------------------

    /** The wrapped value. */
    public T x;

    // ---------------------------------------------------------------------------------------------

    public Slot() {}

    // ---------------------------------------------------------------------------------------------

    public Slot (T x) {
        this.x = x;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public String toString() {
        return "Slot(" + x + ")";
    }

    // ---------------------------------------------------------------------------------------------

    @Override public int hashCode() {
        return x != null ? x.hashCode() : 0;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public boolean equals (Object o)
    {
        if (this == o) return true;
        if (!(o instanceof Slot)) return false;
        return Objects.equals(x, ((Slot<?>) o).x);
    }

    // ---------------------------------------------------------------------------------------------
}
