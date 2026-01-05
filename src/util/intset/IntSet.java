package util.intset;

public class IntSet{
    private final int size;
    private final boolean array[];
    
    public IntSet(int size){
	this.size = size;
	array = new boolean[size];
	for (int i = 0; i < size; i++)
	    array[i] = false;
    }

    public int getSize(){
	return size;
    }

    public void empty(){
	for (int i = 0; i < size; i++)
	    array[i] = false;
    }
    
    public boolean isMember(int elt){
	if(elt >= size) return false;
	return array[elt];
    }

    public boolean isEmpty(){
	for (int i = 0; i < size; i++)
	    if(array[i] == true)
		return false;
	return true;
    }

    public void add(int elt){
	if(elt >= size){
	    System.err.println("ERROR : set is too small !!!!");
	}
	array[elt] = true;
    }

    public void remove(int elt){
	if(elt >= size){
	    System.err.println("ERROR : set is too small !!!!");
	}
	array[elt] = false;
    }

    public IntSet minus(IntSet s){
	for (int i = 0; i < s.size; i++)
	    if(s.array[i])
		array[i] = false;
	return this;
    }

    public IntSet copy(){
	IntSet c = new IntSet(size);
        System.arraycopy(array, 0, c.array, 0, size);
	return c;
    }

    public IntSet inter(IntSet s){
	for (int i = 0; i < s.size; i++)
	    array[i] = array[i] && s.array[i];
	return this;
    }

    public IntSet union(IntSet s){
	for (int i = 0; i < s.size; i++)
	    array[i] = array[i] || s.array[i];
	return this;
    }

    public boolean equal(IntSet s){
	for (int i = 0; i < s.size; i++)
	    if(array[i] != s.array[i])
		return false;
	return true;
    }

    @Override
    public String toString(){
	String s = "(";
	for (int i = 0; i < size; i++)
	    if(array[i] == true){
		s += i;
		s += " ";
	    }
	s+= ")";
	return s;
    }
    
}
