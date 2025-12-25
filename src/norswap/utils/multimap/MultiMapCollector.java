package norswap.utils.multimap;

import norswap.utils.Vanilla;
import java.util.Set;
import java.util.function.BiConsumer;
import java.util.function.BinaryOperator;
import java.util.function.Function;
import java.util.function.Supplier;
import java.util.stream.Collector;

/**
 * See {@link MultiMap#collector(Function, Function)} and {@link MultiMap#setCollector(Function,
 * Function)}.
 */
public final class MultiMapCollector<T, K, V> implements Collector<T, MultiMap<K, V>, MultiMap<K, V>>
{
    private final boolean set;
    private final Function<T, K> keyExtractor;
    private final Function<T, V> valueExtractor;

    MultiMapCollector (boolean set, Function<T, K> keyExtractor, Function<T, V> valueExtractor) {
        this.set = set;
        this.keyExtractor = keyExtractor;
        this.valueExtractor = valueExtractor;
    }

    @Override public Supplier<MultiMap<K, V>> supplier () {
        return set ? MultiHashSetMap::new : MultiHashMap::new;
    }

    @Override
    public BiConsumer<MultiMap<K, V>, T> accumulator () {
        return (map, item) -> map.add(keyExtractor.apply(item), valueExtractor.apply(item));
    }

    @Override
    public BinaryOperator<MultiMap<K, V>> combiner () {
        return (a, b) -> { a.add(b); return a; };
    }

    @Override
    public Function<MultiMap<K, V>, MultiMap<K, V>> finisher () {
        return Function.identity();
    }

    @Override
    public Set<Characteristics> characteristics () {
        return Vanilla.set(Characteristics.IDENTITY_FINISH, Characteristics.UNORDERED);
    }
}
