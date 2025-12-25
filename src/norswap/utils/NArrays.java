package norswap.utils;

import norswap.utils.data.wrappers.Pair;
import java.util.Arrays;
import java.util.Objects;
import java.util.function.Function;

import static norswap.utils.Util.cast;

/**
 * Utilities to deal with arrays.
 *
 * <p>Other function of interest on arrays can also be found in {@link Vanilla}, most notably {@link
 * Vanilla#map(Object[], Function)} (and variants) and {@link Vanilla#zip(Object[], Object[])} (and
 * variants).
 */
public final class NArrays
{
    // ---------------------------------------------------------------------------------------------

    /**
     * Indexes {@code array} with {@code index}, but also support negative indices, where -1
     * accesses the last element of the array.
     */
    public static <T> T access (T[] array, int index) {
        return array[index(array, index)];
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Set the {@code array} at {@code index}, but also support negative indices, where -1
     * accesses the last element of the array.
     * <p>The assigned value is returned.
     */
    public static <T> T set (T[] array, int index, T value) {
        return array[index(array, index)] = value;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Set the {@code array} at {@code index}, but also support negative indices, where -1
     * accesses the last element of the array.
     * <p>The old value at that position in the array is returned.
     */
    public static <T> T swap (T[] array, int index, T value) {
        index = index(array, index);
        T old = array[index];
        array[index] = value;
        return old;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Normalizes {@code index} relatively to {@code array}: if it is negative, it is
     * turned into a positive index, such that -1 designates the last item of the array.
     * @throws ArrayIndexOutOfBoundsException if the index is out of bounds
     */
    public static <T> int index (Object[] array, int index)
    {
        if (index < -array.length || index >= array.length)
            throw new ArrayIndexOutOfBoundsException(
                String.format("index(%d) with size %d", index, array.length));

        return index >= 0
            ? index
            : array.length + index;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array obtained by applying the function {@code f} to each item in {@code array}.
     *
     * <p>The {@code witness} is any array with the proper type (including a zero-sized one). This
     * is necessary to be able to generate a return value with the proper type, but this array not
     * be mutated in any way.
     */
    public static <T, R> R[] map (T[] array, R[] witness, Function<T, R> f)
    {
        R[] out = Arrays.copyOf(witness, array.length);
        for (int i = 0; i < array.length; ++i)
            out[i] = f.apply(array[i]);
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a copy of {@code array} whose size is the least power of two greater or equal
     * to {@code minSize}. Max admissible value for minSize is 2^30.
     */
    public static <T> T[] resizeBinaryPower (T[] array, int minSize)
    {
        int size = 1;
        while (size < minSize) size <<= 1;
        return Arrays.copyOf(array, size);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a copy of {@code array} whose size is the least power of two greater or equal
     * to {@code minSize}. Max admissible value for minSize is 2^30.
     */
    public static int[] resizeBinaryPower (int[] array, int minSize)
    {
        int size = 1;
        while (size < minSize) size <<= 1;
        return Arrays.copyOf(array, size);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a copy of {@code array} whose size is the least power of two greater or equal
     * to {@code minSize}. Max admissible value for minSize is 2^30.
     */
    public static long[] resizeBinaryPower (long[] array, int minSize)
    {
        int size = 1;
        while (size < minSize) size <<= 1;
        return Arrays.copyOf(array, size);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Easy way to create an array with type inference.
     * <p>
     * e.g. {@code strs = array("a", "b");} instead of {@code strs = new String[] { "a", "b" }}
     */
    @SafeVarargs
    public static <T> T[] array (T... items) {
        return items;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Packs the given array, by moving all null values to the end of the array.
     * @return The number of non-null items in the array.
     */
    public static <T> int pack (T[] array)
    {
        int j = 0;
        for (int i = 0; i < array.length ; ++i)
        {
            if (array[i++] == null) continue;
            array[j++] = array[i-1];
        }
        return j;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Packs the given array, by moving all null values to the end of the array.
     * @return {@code array}
     */
    public static <T> T[] packRet (T[] array) {
        pack(array);
        return array;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a packed copy of the given array, where all null values have been removed and
     * the array is exactly big enough to hold all the non-null values.
     */
    public static <T> T[] packed (T[] array)
    {
        T[] copy = array.clone();
        int len = pack(copy);
        return Arrays.copyOf(copy, len);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Return the index of {@code item} within {@code array}, or -1 if the array does not contain
     * the item. Null items are supported.
     */
    public static <T> int indexOf (T[] array, T item)
    {
        for (int i = 0; i < array.length; ++i)
            if (Objects.equals(array[i], item))
                return i;
        return -1;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns true if and only if the {@code array} contains {@code item}.
     * Null items are supported.
     */
    public static <T> boolean contains (T[] array, T item)
    {
        return indexOf(array, item) >= 0;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a copy of array with the items in {@code items} appended at the end.
     */
    @SafeVarargs
    public static <T> T[] append (T[] array, T... items)
    {
        T[] copy = Arrays.copyOf(array, array.length + items.length);
        System.arraycopy(items, 0, copy, array.length, items.length);
        return copy;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of pairs of items with corresponding indexes in the two supplied arrays.
     * The returned array is thus as big as the smallest of the two supplied ararys.
     */
    public static <T, U> Pair<T, U>[] zip (T[] array1, U[] array2) {

        int size = Math.min(array1.length, array2.length);
        Pair<T, U>[] out = cast(new Pair[size]);
        for (int i = 0; i < size; ++i)
            out[i] = new Pair<>(array1[i], array2[i]);
        return out;
    }

    // ---------------------------------------------------------------------------------------------
}
