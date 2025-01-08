
package jx.collections;

import java.util.ArrayList;
import java.util.Enumeration;

public class List<E> implements Collection<E> {
    ArrayList<E> elements = new ArrayList<>();

    public List() {
    }

    @Override
    public void add(E o) {
	elements.add(o);
    }

    @Override
    public int size() {
	return elements.size();
    }

    @Override
    public Iterator<E> iterator() {
	return new Iterator() {
	    int counter;
            @Override
	    public boolean hasNext() {
		return counter < elements.size();
	    }
            @Override
	    public E next() {
		return elements.get(counter++);
	    }
	};
    }

    public Enumeration elements() {
	return new Enumeration() {
	    int counter;
            @Override
	    public boolean hasMoreElements() {
		return counter < elements.size();
	    }
            @Override
	    public E nextElement() {
		return elements.get(counter++);
	    }
	};
    }
}
