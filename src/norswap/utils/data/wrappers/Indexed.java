package norswap.utils.data.wrappers;

import java.util.Objects;

/**
 * A simple pair made out of an integer and a value of type {@code T}.
 */
public final class Indexed<T> implements Cloneable
{
    public final int index;
    public final T value;

    public Indexed (int index, T value)
    {
        this.index = index;
        this.value = value;
    }

    @Override public int hashCode()
    {
        return 31 * index + Objects.hashCode(value);
    }

    @Override public boolean equals (Object obj)
    {
        if (!(obj instanceof Indexed)) return false;
        Indexed<?> o = (Indexed<?>) obj;
        return index == o.index && Objects.equals(value, o.value);
    }

    @SuppressWarnings("MethodDoesntCallSuperMethod")
    @Override public Object clone()
    {
        return new Indexed<>(index, value);
    }

    @Override public String toString ()
    {
        return "(" + index + ": " + value + ")";
    }
}
