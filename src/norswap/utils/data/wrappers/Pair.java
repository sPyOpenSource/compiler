package norswap.utils.data.wrappers;

import java.util.Objects;

/**
 * A simple pair, holding two objects.
 */
public final class Pair<A, B> implements Cloneable
{
    public final A a;
    public final B b;

    public Pair (A a, B b)
    {
        this.a = a;
        this.b = b;
    }

    @Override public int hashCode()
    {
        return 31 * Objects.hashCode(a) + Objects.hashCode(b);
    }

    @Override public boolean equals (Object obj)
    {
        if (!(obj instanceof Pair)) return false;
        Pair<?, ?> o = (Pair<?, ?>) obj;
        return Objects.equals(a, o.a) && Objects.equals(b, o.b);
    }

    @SuppressWarnings("MethodDoesntCallSuperMethod")
    @Override public Object clone()
    {
        return new Pair<>(a, b);
    }

    @Override public String toString()
    {
        return "(" + a + ", " + b + ")";
    }
}
