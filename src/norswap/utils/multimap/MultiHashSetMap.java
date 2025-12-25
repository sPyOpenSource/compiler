package norswap.utils.multimap;

import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;

/**
 * A straightfoward multimap implementation based on {@link HashMap}.
 * <p>
 * The implementation uses hash sets as collections, so duplicate values are
 * automatically eliminated. Casts of collections to {@link java.util.Set} are safe.
 */
public final class MultiHashSetMap<K, V> extends AbstractMultiHashMap<K, V>
{
    // ---------------------------------------------------------------------------------------------

    @Override HashSet<V> newCollection ()
    {
        return new HashSet<>();
    }

    // ---------------------------------------------------------------------------------------------

    @Override Collection<V> emptyCollection ()
    {
        return Collections.emptySet();
    }

    // ---------------------------------------------------------------------------------------------
}
