package norswap.utils;

import norswap.utils.data.functions.IndexedBiConsumer;
import norswap.utils.data.functions.IndexedBiFunction;
import norswap.utils.data.functions.IndexedConsumer;
import norswap.utils.data.functions.IndexedFunction;
import norswap.utils.data.wrappers.Indexed;
import norswap.utils.data.wrappers.Pair;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Deque;
import java.util.Enumeration;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.function.BiConsumer;
import java.util.function.BiFunction;
import java.util.function.Function;
import java.util.stream.Collectors;
import java.util.stream.Stream;

import static java.lang.String.format;
import static norswap.utils.NArrays.index;
import static norswap.utils.Util.cast;

/**
 * Utility functions for Vanilla Java collections.
 */
public final class Vanilla
{
    // =============================================================================================
    // region Collection Constructors
    // =============================================================================================

    /**
     * Returns a new {@link ArrayList} containing the items from {@code items}.
     *
     * <p>If the list doesn't need to grow, use {@link Arrays#asList} instead.
     */
    @SafeVarargs
    public static <T> ArrayList<T> list (T... items)
    {
        ArrayList<T> out = new ArrayList<>(items.length);
        Collections.addAll(out, items);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a new {@link HashSet} containing the items from {@code items}.
     */
    @SafeVarargs
    public static <T> HashSet<T> set (T... items)
    {
        HashSet<T> out = new HashSet<>(items.length);
        Collections.addAll(out, items);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Concatenates all the items into a single array list, flattening them <b>at most once</b> if
     * necessary.
     *
     * <p>Flattened items include arrays, {@link Iterable} (so collections as well), {@link
     * Enumeration} and {@link Stream}.
     */
    public static ArrayList<Object> concat (Object... items)
    {
        return concatInto(new ArrayList<>(), items);
    }

    // ---------------------------------------------------------------------------------------------


    /**
     * Concatenates all the items into a single array list, flattening them <b>at most once</b> if
     * necessary.
     *
     * <p>Flattened items include arrays, {@link Iterable} (so collections as well), {@link
     * Enumeration} and {@link Stream}.
     */
    public static <T extends Collection<Object>> T concatInto (T col, Object... items)
    {
        for (Object item: items)
        {
            /**/ if (item instanceof Object[])
                addArray(col, (Object[]) item);
            else if (item instanceof Iterable<?>)
                addAll(col, cast(item));
            else if (item instanceof Enumeration<?>)
                col.addAll(Collections.list((Enumeration<?>) item));
            else if (item instanceof Stream<?>)
                ((Stream<?>) item).forEachOrdered(col::add);
            else
                col.add(item);
        }

        return col;
    }

    // endregion
    // =============================================================================================
    // region Slicing Arrays
    // =============================================================================================

    /**
     * Return a fixed-size list that contains all items in the array from index {@code start} and
     * onwards. If you need a list that can grow use {@link #arrayListSlice}.
     *
     * <p>{@code start} may be negative (see {@link NArrays#index}).
     */
    public static <T> List<T> listSlice (T[] items, int start)
    {
        int index = index(items, start);
        return Arrays.asList(Arrays.copyOf(items, items.length - index));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Return an array list  that contains all items in the array from index {@code start} and
     * onwards. If you don't need the list to grow, use {@link #listSlice}.
     *
     * <p>{@code start} may be negative (see {@link NArrays#index}).
     */
    public static <T> ArrayList<T> arrayListSlice (T[] items, int start)
    {
        int index = index(items, start);
        ArrayList <T> out = new ArrayList<>(items.length - index);
        out.addAll(Arrays.asList(items).subList(index, items.length));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Return a fixed-size list that contains all items in the array in the {@code [start, end[}
     * range. If you need a list that can grow use {@link #arrayListSlice(Object[], int, int)}.
     *
     * <p>{@code start} and {@code end} may be negative (see {@link NArrays#index}).
     */
    public static <T> List<T> listSlice (T[] items, int start, int end) {
        return Arrays.asList(Arrays.copyOfRange(items, index(items, start), index(items, end)));
    }

    // ---------------------------------------------------------------------------------------------

    /**s
     * Return an array list  that contains all items in the array in the {@code [start, end[} range.
     * If you don't need the list to grow, use {@link #listSlice(Object[], int, int)}.
     *
     * <p>{@code start} and {@code end} may be negative (see {@link NArrays#index}).
     */
    public static <T> ArrayList<T> arrayListSlice (T[] items, int start, int end)
    {
        start = index(items, start);
        end = index(items, end);
        ArrayList <T> out = new ArrayList<>(end - start);
        out.addAll(Arrays.asList(items).subList(start, end));
        return out;
    }

    // endregion
    // =============================================================================================
    // region Extra Collection Methods
    // =============================================================================================

    /**
     * Adds all {@code items} to {@code col}.
     */
    @SafeVarargs
    public static <T> void addArray (Collection<T> col, T... items)
    {
        col.addAll(Arrays.asList(items));
    }


    // ---------------------------------------------------------------------------------------------

    /**
     * Adds all {@code items} to {@code col}.
     */
    public static <T> void addAll (Collection<T> col, Iterable<? extends T> items)
    {
        if (items instanceof Collection)
            col.addAll(cast(items));
        else
            items.forEach(col::add);
    }

    // endregion
    // =============================================================================================
    // region Extra List Methods
    // =============================================================================================

    /**
     * @return the last element of {@code list}.
     * @throws NoSuchElementException if the list is empty.
     */
    public static <T> T last (List<T> list)
    {
        if (list.isEmpty())
            throw new NoSuchElementException();
        return list.get(list.size() - 1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return the last element of {@code list} or {@code null} if the list is empty.
     */
    public static <T> T lastOrNull (List<T> list)
    {
        return list.isEmpty() ? null : list.get(list.size() - 1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes the last element of the list.
     * @throws NoSuchElementException if the list is empty.
     */
    public static <T> void removeLast (List<T> list)
    {
        if (list.isEmpty()) throw new NoSuchElementException();
        list.remove(list.size() - 1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes the last {@code n} elements of the list.
     * @throws NoSuchElementException if the list has less than {@code n} elements.
     */
    public static <T> void removeLast (List<T> list, int n)
    {
        if (list.size() < n) throw new NoSuchElementException();
        for (int i = 0; i < n; ++i) list.remove(list.size() - 1);
    }

    // endregion
    // =============================================================================================
    // region Extra Deque Methods
    // =============================================================================================

    private static void checkDequeSize (Deque<?> deque, int amount) {
        if (amount < 0 || deque.size() < amount)
            throw new IndexOutOfBoundsException(
                    "amount (" + amount + ") too large for eque of size (" + deque.size() + ")");
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the item at position {@code depth} from the front/top of the {@code deque} (use index
     * 0 to get the front of the deque).
     *
     * @throws IndexOutOfBoundsException if the index is invalid
     */
    public static <T> T peekIndex (Deque<T> deque, int depth) {
        checkDequeSize(deque, depth + 1);
        int i = 0;
        for (T it : deque) {
            if (i++ == depth)
                return it;
        }
        throw new Error(); // unreachable
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array containing the {@code amount} items at the front/top of the {@code deque},
     * in reverse order of distance to the front (the front of the deque will be the last element of
     * the array).
     */
    public static <T> T[] peek (Deque<T> deque, int amount) {
        checkDequeSize(deque, amount);
        @SuppressWarnings("unchecked")
        T[] args = (T[]) new Object[amount];
        int i = 1;
        for (T it : deque)
            if (i <= amount) args[amount - i++] = it;
            else break;
        return args;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array containing the items between {@code index} and the front/top of the {@code
     * deque}, where {@code index} is the distance from the end/bottom of the deque (specifying an
     * {@code index} of 0 returns all values in the deque).
     */
    public static <T> T[] peekFrom (Deque<T> deque, int index) {
        return peek(deque, deque.size() - index);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array containing the {@code amount} items at the front/top of the {@code deque},
     * in reverse order of distance to the front (the front of the deque will be the last element of
     * the array).
     *
     * <p>All values returned are popped from the stack.
     */
    public static <T> T[] pop (Deque<T> deque, int amount) {
        checkDequeSize(deque, amount);
        @SuppressWarnings("unchecked")
        T[] args = (T[]) new Object[amount];
        for (int i = 1; i <= amount; ++i)
            args[amount - i] = deque.pop();
        return args;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array containing the items between {@code index} and the front/top of the {@code
     * deque}, where {@code index} is the distance from the end/bottom of the deque (specifying an
     * {@code index} of 0 returns all values in the deque).
     *
     * <p>All values returned are popped from the stack.
     */
    public static <T> T[] popFrom (Deque<T> deque, int index) {
        return pop(deque, deque.size() - index);
    }

    // endregion
    // =============================================================================================
    // region Extra Stream Methods
    // =============================================================================================

    /**
     * Collects the items of {@code stream} into a list.
     *
     * <p>Equivalent to {@code stream.collect(Collectors.toList())}, which is a mouthful for such
     * a common operation.
     *
     * <p>Compared to {@link #concat(Object...)}, the returned list has the proper type parameter.
     */
    public static <T> List<T> asList (Stream<T> stream) {
        return stream.collect(Collectors.toList());
    }

    // endregion
    // =============================================================================================
    // region Map Methods
    // =============================================================================================

    /**
     * Returns a new array list containing the result of applying {@code f} to all items
     * in the supplied collection.
     */
    public static <T, R> ArrayList<R> map (Collection<T> collection, Function<? super T, R> f)
    {
        ArrayList<R> out = new ArrayList<>(collection.size());
        for (T it: collection)
            out.add(f.apply(it));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a new array list containing the result of applying {@code f} to all items
     * in the supplied iterable.
     */
    public static <T, R> ArrayList<R> map (Iterable<T> iterable, Function<? super T, R> f)
    {
        ArrayList<R> out = new ArrayList<>();
        for (T it: iterable)
            out.add(f.apply(it));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a new array containing the result of applying {@code f} to all items
     * in the supplied collection.
     *
     * <p>The {@code witness} is any array with the proper type (including a zero-sized one). This
     * is necessary to be able to generate a return value with the proper type, but this array will
     * not be mutated in any way.
     */
    public static <T, R> R[] map
            (Collection<T> collection, R[] witness, Function<? super T, ? extends R> f)
    {
        R[] out = Arrays.copyOf(witness, collection.size());
        int i = 0;
        for (T item: collection)
            out[i++] = f.apply(item);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a new array list containing the result of applying {@code f} to all items
     * in the supplied array.
     */
    public static <T, R> ArrayList<R> map (T[] array, Function<? super T, R> f)
    {
        ArrayList<R> out = new ArrayList<>(array.length);
        for (T it: array)
            out.add(f.apply(it));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array obtained by applying the function {@code f} to each item in {@code array}.
     *
     * <p>The {@code witness} is any array with the proper type (including a zero-sized one). This
     * is necessary to be able to generate a return value with the proper type, but this array will
     * not be mutated in any way.
     */
    public static <T, R> R[] map (T[] array, R[] witness, Function<? super T, ? extends R> f)
    {
        R[] out = Arrays.copyOf(witness, array.length);
        for (int i = 0; i < array.length; ++i)
            out[i] = f.apply(array[i]);
        return out;
    }

    // endregion
    // =============================================================================================
    // region Indexed Iteration & Map Methods
    // =============================================================================================

    /**
     * Runs {@code f} for each item in the array along with its index.
     */
    public static <T> void forEachIndexed (T[] array, IndexedConsumer<? super T> f) {
        for (int i = 0; i < array.length; ++i)
            f.accept(i, array[i]);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for each item in {@code iterable} along with its index.
     */
    public static <T> void forEachIndexed (Iterable<T> iterable, IndexedConsumer<? super T> f) {
        int i = 0;
        for (T item : iterable)
            f.accept(i++, item);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a new array list containing the result of applying {@code f} to all items
     * in the supplied collection.
     */
    public static <T, R> ArrayList<R> mapIndexed
            (Collection<T> collection, IndexedFunction<? super T, R> f)
    {
        ArrayList<R> out = new ArrayList<>(collection.size());
        int i = 0;
        for (T it: collection)
            out.add(f.apply(i++, it));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a new array list containing the result of applying {@code f} to all items
     * in the supplied iterable.
     */
    public static <T, R> ArrayList<R> mapIndexed
            (Iterable<T> iterable, IndexedFunction<? super T, R> f)
    {
        ArrayList<R> out = new ArrayList<>();
        int i = 0;
        for (T it: iterable)
            out.add(f.apply(i++, it));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a new array containing the result of applying {@code f} to all items
     * in the supplied collection.
     *
     * <p>The {@code witness} is any array with the proper type (including a zero-sized one). This
     * is necessary to be able to generate a return value with the proper type, but this array will
     * not be mutated in any way.
     */
    public static <T, R> R[] mapIndexed
            (Collection<T> collection, R[] witness, IndexedFunction<? super T, ? extends R> f)
    {
        R[] out = Arrays.copyOf(witness, collection.size());
        int i = 0;
        for (T item: collection)
            out[i] = f.apply(i++, item); // left-hand index evaluated before right-hand side
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a new array list containing the result of applying {@code f} to all items
     * in the supplied array.
     */
    public static <T, R> ArrayList<R> mapIndexed (T[] array, IndexedFunction<? super T, R> f)
    {
        ArrayList<R> out = new ArrayList<>(array.length);
        for (int i = 0; i < array.length; i++)
            out.add(f.apply(i, array[i++]));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array obtained by applying the function {@code f} to each item in {@code array}.
     *
     * <p>The {@code witness} is any array with the proper type (including a zero-sized one). This
     * is necessary to be able to generate a return value with the proper type, but this array will
     * not be mutated in any way.
     */
    public static <T, R> R[] mapIndexed
            (T[] array, R[] witness, IndexedFunction<? super T, ? extends R> f)
    {
        R[] out = Arrays.copyOf(witness, array.length);
        for (int i = 0; i < array.length; ++i)
            out[i] = f.apply(i, array[i++]); // left-hand index evaluated before right-hand side
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a list of (index, item) pairs from the supplied collection.
     */
    public static <T> ArrayList<Indexed<T>> indexed (Collection<T> coll) {
        return mapIndexed(coll, Indexed::new);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a list of (index, item) pairs from the supplied iterable.
     */
    public static <T> ArrayList<Indexed<T>> indexed (Iterable<T> iterable) {
        return mapIndexed(iterable, Indexed::new);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a list of (index, item) pairs from the supplied array.
     */
    public static <T> ArrayList<Indexed<T>> indexed (T[] array) {
        return mapIndexed(array, Indexed::new);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of (index, item) pairs from the supplied array..
     */
    public static <T> Indexed<T>[] indexedArray (T[] array) {
        return cast(mapIndexed(array, new Indexed[0], Indexed::new));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of (index, item) pairs from the supplied collection.
     */
    public static <T> Indexed<T>[] indexedArray (Collection<T> coll) {
        return cast(mapIndexed(coll, new Indexed[0], Indexed::new));
    }

    // endregion
    // =============================================================================================
    // region Co-Iteration
    // =============================================================================================

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index.
     * {@code f} will thus be called as many times as the length of the shortest sequence.
     */
    public static <T, U> void coIterate
            (Iterable<T> iterable1, Iterable<U> iterable2, BiConsumer<? super T, ? super U> f)
    {
        Iterator<T> iter1 = iterable1.iterator();
        Iterator<U> iter2 = iterable2.iterator();
        while (iter1.hasNext() && iter2.hasNext())
            f.accept(iter1.next(), iter2.next());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index.
     * {@code f} will thus be called as many times as the length of the shortest sequence.
     */
    public static <T, U> void coIterate
            (T[] array, Iterable<U> iterable, BiConsumer<? super T, ? super U> f)
    {
        int i = 0;
        Iterator<U> iter2 = iterable.iterator();
        while (i < array.length && iter2.hasNext())
            f.accept(array[i++], iter2.next());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index.
     * {@code f} will thus be called as many times as the length of the shortest sequence.
     */
    public static <T, U> void coIterateIndexed
            (Iterable<T> iterable1, Iterable<U> iterable2, IndexedBiConsumer<? super T, ? super U> f)
    {
        int i = 0;
        Iterator<T> iter1 = iterable1.iterator();
        Iterator<U> iter2 = iterable2.iterator();
        while (iter1.hasNext() && iter2.hasNext())
            f.accept(i++, iter1.next(), iter2.next());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index.
     * {@code f} will thus be called as many times as the length of the shortest sequence.
     */
    public static <T, U> void coIterateIndexed
            (T[] array, Iterable<U> iterable, IndexedBiConsumer<? super T, ? super U> f)
    {
        int i = 0;
        Iterator<U> iter2 = iterable.iterator();
        while (i < array.length && iter2.hasNext())
            f.accept(i, array[i++], iter2.next());
    }

    // endregion
    // =============================================================================================
    // region Co-Mapping
    // =============================================================================================

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index and
     * collects the result in a list, whose size will thus be length of the shortest sequence.
     */
    public static <T, U, R> ArrayList<R> map
            (Iterable<T> iterable1, Iterable<U> iterable2, BiFunction<? super T, ? super U, R> f)
    {
        ArrayList<R> out = new ArrayList<>();
        Iterator<T> iter1 = iterable1.iterator();
        Iterator<U> iter2 = iterable2.iterator();
        while (iter1.hasNext() && iter2.hasNext())
            out.add(f.apply(iter1.next(), iter2.next()));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index and
     * collects the result in a list, whose size will thus be length of the shortest sequence.
     */
    public static <T, U, R> ArrayList<R> map
         (T[] array, Iterable<U> iterable, BiFunction<? super T, ? super U, R> f)
    {
        ArrayList<R> out = new ArrayList<>();
        int i = 0;
        Iterator<U> iter = iterable.iterator();
        while (i < array.length && iter.hasNext())
            out.add(f.apply(array[i++], iter.next()));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from {@code coll1} and {@code coll2} that have
     * the same index and collects the result in a list, whose size will thus be length of the
     * shortest collection.
     */
    public static <T, U, R> ArrayList<R> map
            (Collection<T> coll1, Collection<U> coll2, BiFunction<? super T, ? super U, R> f)
    {
        int size = Math.min(coll1.size(), coll2.size());
        ArrayList<R> out = new ArrayList<>(size);
        Iterator<T> iter1 = coll1.iterator();
        Iterator<U> iter2 = coll2.iterator();
        int i = 0;
        while (i++ < size)
            out.add(f.apply(iter1.next(), iter2.next()));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index and
     * collects the result in a list, whose size will thus be length of the shortest sequence.
     */
    public static <T, U, R> ArrayList<R> map
            (T[] array, Collection<U> coll, BiFunction<? super T, ? super U, R> f)
    {
        int size = Math.min(array.length, coll.size());
        ArrayList<R> out = new ArrayList<>(size);
        int i = 0;
        Iterator<U> iter = coll.iterator();
        while (i < size)
            out.add(f.apply(array[i++], iter.next()));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index and
     * collects the result in a list, whose size will thus be length of the shortest sequence.
     */
    public static <T, U, R> ArrayList<R> mapIndexed
            (Iterable<T> iterable1, Iterable<U> iterable2, IndexedBiFunction<? super T, ? super U, R> f)
    {
        int i = 0;
        ArrayList<R> out = new ArrayList<>();
        Iterator<T> iter1 = iterable1.iterator();
        Iterator<U> iter2 = iterable2.iterator();
        while (iter1.hasNext() && iter2.hasNext())
            out.add(f.apply(i++, iter1.next(), iter2.next()));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index and
     * collects the result in a list, whose size will thus be length of the shortest sequence.
     */
    public static <T, U, R> ArrayList<R> mapIndexed
            (T[] array, Iterable<U> iterable, IndexedBiFunction<? super T, ? super U, R> f)
    {
        ArrayList<R> out = new ArrayList<>();
        int i = 0;
        Iterator<U> iter2 = iterable.iterator();
        while (i < array.length && iter2.hasNext())
            out.add(f.apply(i, array[i++], iter2.next()));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index and
     * collects the result in a list, whose size will thus be length of the shortest sequence.
     */
    public static <T, U, R> ArrayList<R> mapIndexed
            (Collection<T> coll1, Collection<U> coll2, IndexedBiFunction<? super T, ? super U, R> f)
    {
        int size = Math.min(coll1.size(), coll2.size());
        ArrayList<R> out = new ArrayList<>(size);
        int i = 0;
        Iterator<T> iter1 = coll1.iterator();
        Iterator<U> iter2 = coll2.iterator();
        while (i < size)
            out.add(f.apply(i++, iter1.next(), iter2.next()));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} for every pair of items from the given sequences that have the same index and
     * collects the result in a list, whose size will thus be length of the shortest sequence.
     */
    public static <T, U, R> ArrayList<R> mapIndexed
         (T[] array, Collection<U> coll, IndexedBiFunction<? super T, ? super U, R> f)
    {
        int size = Math.min(array.length, coll.size());
        ArrayList<R> out = new ArrayList<>(size);
        int i = 0;
        Iterator<U> iter2 = coll.iterator();
        while (i < array.length && iter2.hasNext())
            out.add(f.apply(i, array[i++], iter2.next()));
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of pairs of items with corresponding indexes in the two supplied sequences.
     * The returned list is thus as big as the smallest of the two supplied sequences.
     */
    public static <T, U> ArrayList<Pair<T, U>> zip (Iterable<T> iterable1, Iterable<U> iterable2) {
        return map(iterable1, iterable2, Pair::new);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of pairs of items with corresponding indexes in the two supplied sequences.
     * The returned list is thus as big as the smallest of the two supplied sequences.
     */
    public static <T, U> ArrayList<Pair<T, U>> zip (T[] array, Iterable<U> iterable) {
        return map(array, iterable, Pair::new);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of pairs of items with corresponding indexes in the two supplied sequences.
     * The returned list is thus as big as the smallest of the two supplied sequences.
     */
    public static <T, U> ArrayList<Pair<T, U>> zip (Collection<T> coll1, Collection<U> coll2) {
        return map(coll1, coll2, Pair::new);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of pairs of items with corresponding indexes in the two supplied sequences.
     * The returned list is thus as big as the smallest of the two supplied sequences.
     */
    public static <T, U> ArrayList<Pair<T, U>> zip (T[] array, Collection<U> coll) {
        return map(array, coll, Pair::new);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of pairs of items with corresponding indexes in the two supplied arrays.
     * The returned array is thus as big as the smallest of the two supplied arrays.
     *
     * <p>This function delegates to {@link NArrays#zip}, it is redefined here because it would be
     * hidden by the other {@code zip} functions otherwise.}
     */
    public static <T, U> Pair<T, U>[] zip (T[] array1, U[] array2)
    {
        int size = Math.min(array1.length, array2.length);
        Pair<T, U>[] out = cast(new Pair[size]);
        for (int i = 0; i < size; ++i)
            out[i] = new Pair<>(array1[i], array2[i]);
        return out;
    }

    // endregion
    // =============================================================================================
}