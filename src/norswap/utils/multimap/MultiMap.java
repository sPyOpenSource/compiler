package norswap.utils.multimap;

import norswap.utils.data.wrappers.Pair;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Map;
import java.util.function.Function;
import java.util.stream.Collector;
import java.util.stream.Stream;

/**
 * An extension of a regular {@code K -> Collection<V>} map to enable/improve its use as a multimap:
 * a map from {@code K} to a collection of invididual {@code V} values.
 */
public interface MultiMap<K, V> extends Map<K, Collection<V>>
{
    // ---------------------------------------------------------------------------------------------

    /**
     * Return an unmodifiable view of the collection of values to which {@code key} is mapped, or an
     * empty collection if there is no mapping for the key.
     *
     * <p>Also see {@link Map#get} for more details. Notably, when this method returns an
     * empty collection, there may be no mapping for the key, or there may be a mapping from the key
     * to an empty collection.
     */
    @Override Collection<V> get (Object key);

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes the mapping for {@code key} from the map, if present.
     *
     * @return An unmodifiable view of the collection of values previously associated with the key,
     * or an empty map if not values were associated with the key.
     */
    @Override Collection<V> remove(Object key);

    // ---------------------------------------------------------------------------------------------

    /**
     * Associates {@code value} with {@code key}, while preserving all other associated values.
     *
     * @return The collection of values associated with the key after the operation has taken place.
     */
    Collection<V> add (K key, V value);

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes the given key-value pair from the multimap. If the pair is the last for the given
     * key, remove the underlying collection.
     *
     * @return The collection of values associated with the key after the operation has taken place.
     */
    Collection<V> delete (K key, V value);

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes the given key-value pair from the multimap.  If the pair is the last for the given
     * key, <b>does not</b> remove the underlying collection.
     *
     * @return The collection of values associated with the key after the operation has taken place.
     */
    Collection<V> deletePollute (K key, V value);

    // ---------------------------------------------------------------------------------------------

    /**
     * Associates all values in {@code values}, while preserving all other associated values.
     *
     * @return The collection of values associated with the key after the operation has taken place.
     */
    Collection<V> addAll (K key, V[] values);

    // ---------------------------------------------------------------------------------------------

    /**
     * Associates all values in {@code values}, while preserving all other associated values.
     *
     * @return The collection of values associated with the key after the operation has taken place.
     */
    Collection<V> addAll (K key, Iterable<V> values);

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a stream enumerating all the (key, value) pairs in the multimap (i.e, keys are
     * repeated for each associated value).
     */
    Stream<Pair<K, V>> pairs();

    // ---------------------------------------------------------------------------------------------

    /**
     * Associates all values in {@code values}, while preserving all other associated values.
     *
     * @return The collection of values associated with the key after the operation has taken place.
     */
    default Collection<V> addAll (K key, Collection<V> values)
    {
        return addAll(key, (Iterable<V>) values);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a flattened collection containing all the values associated with all keys in the
     * multimap.
     */
    default Collection<V> allValues()
    {
        ArrayList<V> out = new ArrayList<>();
        for (Collection<V> col: values()) out.addAll(col);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Adds all key-value pairs from {@code singleMap} into this multimap (as per {@link
     * #add(Object, Object)}).
     */
    default void add (Map<K, V> singleMap)
    {
        for (Entry<K, V> e: singleMap.entrySet())
            add(e.getKey(), e.getValue());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Adds all key-value associations from {@code multiMap} into this multimap (as per {@link
     * #addAll(Object, Collection)}. This basically merges {@code multiMap} inside the receiver.
     */
    default void add (MultiMap<K, V> multiMap)
    {
        for (Entry<K, Collection<V>> e: multiMap.entrySet())
            addAll(e.getKey(), e.getValue());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * For each item in {@code items}, apply the function {@code f} and insert the resulting
     * binding into the multi map, before returning it.
     */
    default <X> MultiMap<K, V> assoc (Iterable<X> items, Function<X, Pair<K, V>> f)
    {
        for (X item: items) {
            Pair<K, V> pair = f.apply(item);
            if (pair == null) continue;
            add(pair.a, pair.b);
        }
        return this;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * For each item in {@code items}, apply the function {@code f} and insert the resulting
     * binding into the multi map, before returning it.
     */
    default <X> MultiMap<K, V> assoc (X[] items, Function<X, Pair<K, V>> f)
    {
        for (X item: items) {
            Pair<K, V> pair = f.apply(item);
            if (pair == null) continue;
            add(pair.a, pair.b);
        }
        return this;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a {@link Collector} that extracts keys and values from each item and this entry
     * to the multimap.
     */
    static <T, K, V> MultiMapCollector<T, K, V>
    collector (Function<T, K> keyExtractor, Function<T, V> valueExtractor) {
        return new MultiMapCollector<>(false, keyExtractor, valueExtractor);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a {@link Collector} that extracts keys and values from each item and this entry
     * to the multimap.
     *
     * <p>The returned multimap will be a {@link MultiHashSetMap}, so values will be automatically
     * de-duplicated.
     */
    static <T, K, V> MultiMapCollector<T, K, V>
    setCollector (Function<T, K> keyExtractor, Function<T, V> valueExtractor) {
        return new MultiMapCollector<>(true, keyExtractor, valueExtractor);
    }

    // ---------------------------------------------------------------------------------------------
}
