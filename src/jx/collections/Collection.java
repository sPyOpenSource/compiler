
package jx.collections;

public interface Collection<E> {
    Iterator<E> iterator();
    void add(E o);
    int size();
}
