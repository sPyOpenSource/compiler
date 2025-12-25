package norswap.utils.data.structures;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.function.IntFunction;

import static norswap.utils.Util.cast;

/**
 * A stack implementation that extends {@link ArrayList}. Elements are pushed and popped at the end
 * of the list.
 *
 * <p>Compared to {@link java.util.ArrayDeque}, this enables indexing, but doesn't allow queue
 * operations.
 */
public final class ArrayStack<T> extends ArrayList<T>
{
    // ---------------------------------------------------------------------------------------------

    public ArrayStack() {}

    // ---------------------------------------------------------------------------------------------

    /**
     * Creates a new array stack with the given elements.
     */
    @SafeVarargs
    public ArrayStack (T... elements) {
        super(elements.length);
        add(elements);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Creates a new array stack with the given capacity.
     */
    public ArrayStack (int n) {
        super(n);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Adds all the elements at the end of the list.
     *
     * <p>Identical to {@link #push(Object[])}.
     */
    @SafeVarargs
    public final void add (T... elements) {
        addAll(Arrays.asList(elements));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Pushes {@code item} at the top of the stack.
     *
     * <p>Identical to {@link #add(Object)}
     */
    public void push (T item) {
        add(item);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Pushes the elements at the top of the stack.
     *
     * <p>Identical to {@link #add(Object[])}.
     */
    @SafeVarargs
    public final void push (T... elements) {
        addAll(Arrays.asList(elements));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Pushes the elements of {@code collection} at the top of the stack.
     *
     *  <p>Identical to {@link #addAll(Collection)}.
     */
    public void push (Collection<? extends T> collection) {
        addAll(collection);
    }

    // ---------------------------------------------------------------------------------------------

    private String amountOutOfBoundsMessage (int n) {
        return "Amount [" + n + "invalid for stack size [" + size() + "]";
    }

    // ---------------------------------------------------------------------------------------------

    private String indexOutOfBoundsMessage (int i) {
        return "Index [" + i + "] invalid for stack size [" + size() + "]";
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a sublist (as per {@link #subList(int, int)}) holding the {@code n} elements at the
     * top of the stack (end of the array).
     *
     * @throws IndexOutOfBoundsException if {@code n} is outside {@code [0, size()]}.
     */
    public List<T> top (int n)
    {
        if (n < 0 || size() < n)
            throw new IndexOutOfBoundsException(amountOutOfBoundsMessage(n));
        return subList(size() - n, size());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a sublist (as per {@link #subList(int, int)}) holding the elements between {@code
     * index} and the top of the stack (end of the array).
     *
     * @throws IndexOutOfBoundsException if {@code index} is outside {@code [0, size()]}.
     */
    public List<T> from (int index)
    {
        if (index < 0 || size() < index)
            throw new IndexOutOfBoundsException(indexOutOfBoundsMessage(index));
        return subList(index, size());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes the top {@code n} elements of the stack.
     *
     * @throws IndexOutOfBoundsException @throws IndexOutOfBoundsException if {@code n} is outside
     * {@code [0, size()]}, in which case no elements are removed.
     */
    public void removeTop (int n)
    {
        if (n < 0 || size() < n)
            throw new IndexOutOfBoundsException(amountOutOfBoundsMessage(n));
        top(n).clear();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes the elements between {@code index} and the top of the stack.
     *
     * @throws IndexOutOfBoundsException if {@code index} is outside {@code [0, size()]}, in which
     * case no elements are removed.
     */
    public void truncate (int index)
    {
        if (index < 0 || size() < index)
            throw new IndexOutOfBoundsException(indexOutOfBoundsMessage(index));
        from(index).clear();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes and returns the item at the top of the stack.
     *
     * @throws NoSuchElementException if the stack is empty.
     */
    public T pop()
    {
        if (isEmpty())
            throw new NoSuchElementException();
        return remove(size() - 1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes and returns the {@code n} elements at the top of the stack, in an array created by
     * {@code makeArray}.
     *
     * @throws IndexOutOfBoundsException if {@code n} is outside {@code [0, size()]}, in which case
     * no elements are removed.
     */
    public T[] pop (int n, IntFunction<T[]> makeArray)
    {
        if (n < 0 || size() < n)
            throw new IndexOutOfBoundsException(amountOutOfBoundsMessage(n));
        List<T> sub = top(n);
        T[] out = sub.toArray(makeArray.apply(n));
        sub.clear();
        return out;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes and returns the the elements between {@code index} and the top of the stack,
     * in an array created by {@code makeArray}.
     *
     * @throws IndexOutOfBoundsException if {@code index} is outside {@code [0, size()]}.
     */
    public T[] popFrom (int index, IntFunction<T[]> makeArray)
    {
        if (index < 0 || size() < index)
            throw new IndexOutOfBoundsException(indexOutOfBoundsMessage(index));
        return pop(size() - index, makeArray);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Removes and returns the item at the top of the stack, or null if the stack is empty.
     */
    public T poll() {
        return isEmpty() ? null : remove(size() - 1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return the item at the top of the stack.
     *
     * @throws NoSuchElementException if the stack is empty.
     */
    public T peek()
    {
        if (isEmpty())
            throw new NoSuchElementException();
        return get(size() - 1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return the {@code n} elements at the top of the stack, in an array created by {@code
     * makeArray}.
     *
     * @throws IndexOutOfBoundsException if {@code n} is outside {@code [0, size()]}.
     */
    public T[] peek (int n, IntFunction<T[]> makeArray)
    {
        if (n < 0 || size() < n)
            throw new IndexOutOfBoundsException(amountOutOfBoundsMessage(n));
        return top(n).toArray(makeArray.apply(n));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return an array containing the elements between {@code index} and the top of the stack, in
     * an array created by {@code makeArray}.
     *
     * @throws IndexOutOfBoundsException if {@code index} is outside {@code [0, size()]}.
     */
    public T[] peekFrom (int index, IntFunction<T[]> makeArray)
    {
        if (index < 0 || size() < index)
            throw new IndexOutOfBoundsException(indexOutOfBoundsMessage(index));
        return peek(size() - index, makeArray);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return the item at the top of the stack, or null if the stack is empty.
     */
    public T snoop() {
        return isEmpty() ? null : get(size() - 1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return the item that is {@code n} elements below the top of the stack (0 = top).
     *
     * @throws IndexOutOfBoundsException if {@code n} is outside {@code [0, size()-1]}.
     */
    public T peekBack (int n)
    {
        if (n < 0 || size() <= n)
            throw new IndexOutOfBoundsException(indexOutOfBoundsMessage(n));
        return get(size() - 1 - n);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * @return the item that is {@code n} elements below the top of the stack (0 = top), or null
     * if the stack does not have that many elements or {@code n} is negative.
     */
    public T snoopBack (int n) {
        return n < 0 || size() <= n ? null : get(size() - 1 - n);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public ArrayStack<T> clone() {
        return cast(super.clone());
    }

    // ---------------------------------------------------------------------------------------------
}
