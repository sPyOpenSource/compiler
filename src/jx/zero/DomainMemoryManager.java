package jx.zero;

public interface DomainMemoryManager extends Portal {

    /**
     * Allocate memory for the fields of an object.
     * The first word in this memory is used for the
     * vtable pointer.
     * @param cl
     * @return 
     */
    int allocObject(VMClass cl);

    /**
     * Allocate memory for an array.
     * The size of one array element is one word (32 Bits)
     * @param elementClass
     * @param size
     * @return 
     */
    int allocArray(VMClass elementClass, int size);

    /**
     * Allocate memory for the thread control block.
     * @param sizeInBytes
     * @return 
     */
    int allocTCB(int sizeInBytes);

    /**
     * Allocate memory for a stack.
     * @param sizeInBytes
     * @return 
     */
    int allocStack(int sizeInBytes);

    /**
     * Allocate memory for the static fields of a class.
     * The size of a field is 32 Bits.
     * @param numberOfFields
     * @return 
     */
    int allocStaticFields(int numberOfFields);

    /**
     * Allocate memory for the code of a method.
     * @param numberOfCodeBytes
     * @return 
     */
    int allocCode(int numberOfCodeBytes);

    /**
     * Informs the memory manager that the current thread
     * is about to die.
     */
    void threadExiting();

}
