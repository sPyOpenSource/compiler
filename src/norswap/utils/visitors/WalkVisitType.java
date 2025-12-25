package norswap.utils.visitors;

/**
 * Types of visit operations that can be performed by a {@link Walker}.
 *
 * <p>Multiple types of visit can be performed by a sing {@link Walker}.
 */
public enum WalkVisitType {
    /**
     * Call the visitor operation before visiting the node's children.
     */
    PRE_VISIT,
    /**
     * Call the visitor operation after visiting the node's children.
     */
    POST_VISIT,
    /**
     * Call the visitor operation in between visiting every pair of successive children.
     */
    IN_VISIT
}
