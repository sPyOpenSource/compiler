package norswap.utils.multimap;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;

/**
 * A straightfoward multimap implementation based on {@link HashMap}.
 * <p>
 * The implementation uses array lists as collections, so duplicate values are permitted.
 * It is safe to cast the (collection) values to {@link java.util.List}.
 */
public final class MultiHashMap<K, V> extends AbstractMultiHashMap<K, V>
{
    // ---------------------------------------------------------------------------------------------

    @Override ArrayList<V> newCollection ()
    {
        return new ArrayList<>();
    }

    // ---------------------------------------------------------------------------------------------

    @Override Collection<V> emptyCollection ()
    {
        return Collections.emptyList();
    }

    // ---------------------------------------------------------------------------------------------
}
