package norswap.utils.data.structures;

import norswap.utils.NArrays;
import norswap.utils.Strings;
import java.util.NoSuchElementException;

/**
 * A very basic resizable array that holds integers. It also supports a basic stack interface.
 *
 * <p>When the backing array is resized, it is expanded to the closest superior power of 2.
 *
 * <p>The array is never shrunk in capacity when items are removed.
 */
public final class ArrayListLong implements Cloneable
{
    // ---------------------------------------------------------------------------------------------

    private long[] array;

    private int size;

    // ---------------------------------------------------------------------------------------------

    /**
     * Creates a list with the given initial capacity.
     */
    public ArrayListLong (int capacity) {
        this.array = new long[capacity];
    }

    // ---------------------------------------------------------------------------------------------

    public ArrayListLong() {
        this(8);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the number of elements in this list.
     */
    public int size() {
        return size;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the current capacity of the backing array.
     */
    public int capacity() {
        return array.length;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the array currently backing this list. Beware it is likely bigger than the size
     * of the list.
     */
    public long[] array() {
        return array;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Replaces the element at the specified position in this list with the specified element.
     */
    public void set (int i, long v)
    {
        if (i < 0 || i >= size) throw new IndexOutOfBoundsException();
        array[i] = v;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the element at the specified position in this list.
     */
    public long get (int i)
    {
        if (i < 0 || i >= size) throw new IndexOutOfBoundsException();
        return array[i];
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Appends the specified element to the end of this list.
     */
    public void add (long v)
    {
        if (array.length < size + 1)
            array = NArrays.resizeBinaryPower(array, size + 1);
        array[size++] = v;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Pushes {@code item} at the top of the stack.
     */
    public void push (long item) {
        add(item);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Pushes {@code item} at the top of the stack.
     */
    public final void push (long... items) {
        for (long item: items)
            add(item);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes and returns the item at the top of the stack.
     * @throws NoSuchElementException if the stack is empty.
     */
    public long pop()
    {
        if (size == 0) throw new NoSuchElementException();
        return array[--size];
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes the {@code n} items at the top of the stack.
     * @throws NoSuchElementException if the stack does not have that many items, in which case
     * no items are removed.
     */
    public void pop (int n)
    {
        if (size < n) throw new NoSuchElementException();
        size -= n;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return the item at the top of the stack.
     * @throws NoSuchElementException if the stack is empty.
     */
    public long peek()
    {
        if (size == 0) throw new NoSuchElementException();
        return array[size-1];
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return the item that is {@code n} items below the top of the stack (0 = top).
     * @throws NoSuchElementException if the stack does not have that many items.
     */
    public long back (int n)
    {
        if (size() <= n) throw new NoSuchElementException();
        return array[size - 1 - n];
    }

    // ---------------------------------------------------------------------------------------------

    @Override public ArrayListLong clone()
    {
        try {
            ArrayListLong out = (ArrayListLong) super.clone();
            out.array = array.clone();
            out.size = size;
            return out;
        } catch (CloneNotSupportedException e) {
            // impossible
            throw new Error(e);
        }
    }

    // ---------------------------------------------------------------------------------------------

    @Override public String toString()
    {
        StringBuilder b = new StringBuilder("[");
        for (int i = 0; i < size; ++i)
            b.append(array[i]).append(", ");
        if (b.length() > 1)
            Strings.pop(b, 2);
        b.append("]");
        return b.toString();
    }

    // ---------------------------------------------------------------------------------------------

    @Override public int hashCode()
    {
        int hashCode = 1;
        for (int i = 0; i < size; ++i)
            hashCode = 31*hashCode + i;
        return hashCode;
    }

    // ---------------------------------------------------------------------------------------------

    @Override public boolean equals (Object o)
    {
        if (o == this)
            return true;
        if (!(o instanceof ArrayListLong))
            return false;

        ArrayListLong other = (ArrayListLong) o;

        for (int i = 0; i < size; ++i)
            if (array[i] != other.array[i])
                return false;

        return true;
    }

    // ---------------------------------------------------------------------------------------------
}
