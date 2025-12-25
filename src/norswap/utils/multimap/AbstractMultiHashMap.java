package norswap.utils.multimap;

import norswap.utils.data.wrappers.Pair;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.stream.Stream;

abstract class AbstractMultiHashMap<K, V>
        extends HashMap<K, Collection<V>>
        implements MultiMap <K, V>
{
    // ---------------------------------------------------------------------------------------------

    abstract Collection<V> newCollection();

    // ---------------------------------------------------------------------------------------------

    abstract Collection<V> emptyCollection();

    // ---------------------------------------------------------------------------------------------

    @Override public Collection<V> get (Object key)
    {
        Collection<V> out = super.get(key);
        return out == null ? emptyCollection() : Collections.unmodifiableCollection(out);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Collection<V> remove (Object key)
    {
        Collection<V> out = super.remove(key);
        return out == null ? emptyCollection() : Collections.unmodifiableCollection(out);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Collection<V> add (K key, V value)
    {
        Collection<V> out = computeIfAbsent(key, k -> newCollection());
        out.add(value);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Collection<V> delete (K key, V value)
    {
        Collection<V> out = super.get(key);
        if (out == null) return emptyCollection();
        out.remove(value);
        return out.isEmpty()
                ? remove(key)
                : Collections.unmodifiableCollection(out);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Collection<V> deletePollute (K key, V value)
    {
        Collection<V> out = super.get(key);
        if (out == null) return emptyCollection();
        out.remove(value);
        return Collections.unmodifiableCollection(out);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Collection<V> addAll (K key, V[] values)
    {
        Collection<V> out = computeIfAbsent(key, k -> newCollection());
        Collections.addAll(out, values);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Collection<V> addAll (K key, Iterable<V> values)
    {
        Collection<V> out = computeIfAbsent(key, k -> newCollection());
        for (V v: values) out.add(v);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Collection<V> addAll (K key, Collection<V> values)
    {
        Collection<V> out = computeIfAbsent(key, k -> newCollection());
        out.addAll(values);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public Stream<Pair<K, V>> pairs()
    {
        return entrySet().stream().flatMap(e ->
                e.getValue().stream().map(v -> new Pair<>(e.getKey(), v)));
    }

    // ---------------------------------------------------------------------------------------------
}
