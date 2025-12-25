package norswap.utils.visitors;

import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;

import static norswap.utils.Util.cast;
import static norswap.utils.reflection.Reflection.tryHandles;

/**
 * Abstract class for the implementation of a {@link Walker} that determines the children
 * of a node via (fast) reflection.
 *
 * <p>Subclasses must override the {@link #handlesFor(Class)} to return a list of {@link
 * HandleWrapper}. Each wrapper contains a {@link MethodHandle} which either returns an object of
 * type {@code T}, or a collection of items of type {@code T} ({@link HandleWrapper#collection}
 * {@code == true}). The class passed to {@link #handlesFor} is a subclass of {@code T}. The walker
 * will walk over the elements in the iteration order of the list (similarly, for handles returning
 * collections, the iteration order is used).
 *
 * <p>The {@link MethodHandle} contained in the returned list can be octained by using the {@link
 * #lookup} static field of this class.
 */
public abstract class ReflectiveWalker<T> extends Walker<T>
{
    // ---------------------------------------------------------------------------------------------

    /**
     * Use this to obtain {@link MethodHandle} instances in the implementation of {@link
     * #handlesFor(Class)}.
     */
    protected static final Lookup lookup = MethodHandles.lookup();

    // ---------------------------------------------------------------------------------------------

    /**
     * The class for the common supertype of nodes to be visited by this walker.
     */

    public final Class<? extends T> nodeType;

    // ---------------------------------------------------------------------------------------------

    private final HashMap<Class<? extends T>, List<HandleWrapper>> classData = new HashMap<>();

    // ---------------------------------------------------------------------------------------------

    /**
     * @param nodeType The class for the node type being walked.
     */
    public ReflectiveWalker (Class<? extends T> nodeType, WalkVisitType... visitTypes) {
        super(visitTypes);
        this.nodeType = nodeType;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * See {@link ReflectiveWalker}.
     */
    abstract List<HandleWrapper> handlesFor (Class<? extends T> klass);

    // ---------------------------------------------------------------------------------------------

    @Override public Iterable<T> children (T node)
    {
        List<HandleWrapper> handles = classData
                .computeIfAbsent(cast(node.getClass()), this::handlesFor);

        ArrayList<T> children = new ArrayList<>(handles.size());

        tryHandles(() -> {
            for (HandleWrapper wrap: handles)
                if (wrap.collection) {
                    Collection<T> items = cast(wrap.handle.invoke(node));
                    if (items != null) children.addAll(items);
                } else {
                    T item = cast(wrap.handle.invoke(node));
                    if (item != null) children.add(item);
                }
        });

        return children;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Wraps a {@link MethodHandle} that either returns a node of type {@code T}, or
     * a collection of such nodes if {@link #collection} {@code == true}.
     */
    protected static class HandleWrapper
    {
        final MethodHandle handle;

        /**
         * True iff the method handle returns a collection.
         */
        final boolean collection;

        HandleWrapper (MethodHandle handle, boolean collection) {
            this.handle = handle;
            this.collection = collection;
        }
    }

    // ---------------------------------------------------------------------------------------------
}
