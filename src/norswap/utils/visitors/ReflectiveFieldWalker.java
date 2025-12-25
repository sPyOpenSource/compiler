package norswap.utils.visitors;

import norswap.utils.reflection.GenericType;
import norswap.utils.reflection.Subtyping;
import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

/**
 * Implementation of {@link Walker} where the children of a node of type {@code T} are take to be
 * all accessible (public) fields of the node whose value is assignable to {@code T}, or are
 * instances of {@link Collection} parameterized with with type {@code T}. Static fields are
 * ignored.
 *
 * @see ReflectiveAccessorWalker ReflectiveAccessorWalker for something similar that uses
 * accessor methods instead of fields.
 */
public final class ReflectiveFieldWalker<T> extends ReflectiveWalker<T>
{
    // ---------------------------------------------------------------------------------------------

    /**
     * @param nodeType The class for the node type being walked.
     */
    public ReflectiveFieldWalker (Class<? extends T> nodeType, WalkVisitType... visitTypes) {
        super(nodeType, visitTypes);
    }

    // ---------------------------------------------------------------------------------------------

    @Override public List<HandleWrapper> handlesFor (Class<? extends T> klass)
    {
        ArrayList<HandleWrapper> list = new ArrayList<>();
        try {
            for (Field field: klass.getFields())
            {
                if (Modifier.isStatic(field.getModifiers())) continue;
                Type fieldType = field.getGenericType();
                if (Subtyping.check(fieldType, nodeType))
                    list.add(new HandleWrapper(lookup.unreflectGetter(field), false));
                else if (Subtyping.check(fieldType, new GenericType(null, Collection.class, nodeType)))
                    list.add(new HandleWrapper(lookup.unreflectGetter(field), true));
            }
        } catch (IllegalAccessException e) {
            throw new Error(e); // should not reach here
        }
        return list;
    }

    // ---------------------------------------------------------------------------------------------
}
