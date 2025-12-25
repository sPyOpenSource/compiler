package norswap.utils.visitors;

import norswap.utils.reflection.GenericType;
import norswap.utils.reflection.Subtyping;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

/**
 * Implementation of {@link Walker} where the children of a node of type {@code T} are take to be
 * all accessible (public) zero-argument methods of the node whose return value is assignable to
 * {@code T}, or are instances of {@link Collection} parameterized with with type {@code T}. Static
 * methods are ignored.
 *
 * @see ReflectiveAccessorWalker ReflectiveAccessorWalker for something similar that uses
 * fields instead of accessor methods.
 */
public final class ReflectiveAccessorWalker<T> extends ReflectiveWalker<T>
{
    // ---------------------------------------------------------------------------------------------

    /**
     * @param nodeType The class for the node type being walked.
     */
    public ReflectiveAccessorWalker (Class<? extends T> nodeType, WalkVisitType... visitTypes) {
        super(nodeType, visitTypes);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public List<HandleWrapper> handlesFor (Class<? extends T> klass)
    {
        ArrayList<HandleWrapper> list = new ArrayList<>();
        try {
            for (Method method: klass.getMethods())
            {
                if (method.getParameterCount() > 0) continue;
                if (Modifier.isStatic(method.getModifiers())) continue;
                Type accessorType = method.getGenericReturnType();
                if (Subtyping.check(accessorType, nodeType))
                    list.add(new HandleWrapper(lookup.unreflect(method), false));
                else if (Subtyping.check(accessorType, new GenericType(null, Collection.class, nodeType)))
                    list.add(new HandleWrapper(lookup.unreflect(method), true));
            }
        } catch (IllegalAccessException e) {
            throw new Error(e); // should not reach here
        }
        return list;
    }

    // ---------------------------------------------------------------------------------------------
}
