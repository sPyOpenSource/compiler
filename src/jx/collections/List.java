
package jx.collections;

import java.util.ArrayList;
import java.util.Enumeration;

public class List implements Collection {
    ArrayList elements=new ArrayList();

    public List() {
    }

    @Override
    public void add(Object o) {
	elements.add(o);
    }

    @Override
    public int size() {
	return elements.size();
    }

    @Override
    public Iterator iterator() {
	return new Iterator() {
	    int counter;
            @Override
	    public boolean hasNext() {
		return counter < elements.size();
	    }
            @Override
	    public Object next() {
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
	    public Object nextElement() {
		return elements.get(counter++);
	    }
	};
    }
}
