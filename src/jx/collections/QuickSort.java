package jx.collections;

import java.util.ArrayList;
  

public class QuickSort implements SortedList { 
    Comparator comparator;
    ArrayList elements;

    public QuickSort(Comparator c, ArrayList elements) {
	comparator = c;
	this.elements = elements;
	sort();
    }
    public QuickSort(Comparator c) {
	this(c, new ArrayList());
    }
    
    public Iterator iterator() {
	return new Iterator() {
	    int counter;
	    public boolean hasNext() {
		return counter < elements.size();
	    }
	    public Object next() {
		return elements.get(counter++);
	    }
	};
    }

    public void sort() {
	if (elements.size()<2) return;
	sort3(elements, 0, elements.size()-1);
	//qsort(elements, 0, elements.size()-1);
    }
    
    public void add(Object o) {
	elements.add(o);
	sort();
    }

    public int size() {
	return elements.size();
    }

    private void qsort(ArrayList a, int p, int r) {
	int q;
	if(p<r) { 
	    q = quickPartition(a,p,r);
	    qsort(a,p,q); 
	    qsort(a,q+1,r); 
	} 
    } 

    void sort3(ArrayList a, int lo, int hi) {
	int i = lo;
	int j = hi;
	Object pivot; 

	pivot = a.get((lo+hi) >> 1); // Auswahl des mittleren Elements, Shift, Division durch 2 

       do { // wiederhole bis sich die Suche von unten und oben trifft 

	   // Suche greres Element von links 

	   while (comparator.compare(a.get(i), pivot) < 0) i++; // i zeigt danach auf Element >= Pivot 

	   // Suche kleineres Element von rechts 

	   while (comparator.compare(a.get(j), pivot) > 0) j--; // j zeigt danach auf Element <= Pivot 

	   if (i <= j) {/* Vertauschen */ swap(a,i,j); i++; j--;} 

       } while (i <= j); // until i>j 

       if (lo < j) /* Teile linke Teilfolge */ sort3 (a, lo, j); 

       if (i < hi) /* Teile rechte Teilfolge */ sort3 (a, i, hi); 

       } 
    
    private int quickPartition(ArrayList a, int p, int r) { 
	Object x = a.get(p);
	int i = p-1; 
	int j = r+1; 
	while(true) { 
	    do {
		j--; 
	    } while(comparator.compare(a.get(j), x) > 0);
	    do {
		i++;
	    } while(comparator.compare(a.get(i), x) < 0); 
	    if(i<j) {
		swap(a,i,j);
	    } else { 
		return j;
	    } 
	} 
    } 
  
  void sort2(ArrayList a, int lo0, int hi0) {
        int lo = lo0;
        int hi = hi0;
        if (lo >= hi) {
            return;
        }
        Object mid = a.get((lo + hi) / 2);
        while (lo < hi) {
            while (lo<hi && comparator.compare(a.get(lo), mid) > 0) {
                lo++;
            }
            while (lo<hi && comparator.compare(a.get(hi), mid) < 0) {
                hi--;
            }
            if (lo < hi) {
		swap(a,lo,hi);
            }
        }
        if (hi < lo) {
	    int t=lo;
	    lo=hi;
	    hi=lo;
        }
        sort2(a, lo0, lo);
        sort2(a, lo == lo0 ? lo+1 : lo, hi0);
    }

    void sort2(ArrayList a) {
        sort2(a, 0, a.size()-1);
    }



   private void swap(ArrayList a, int i, int j) { 
       Object t;
       t = a.get(i); 
       a.set(i, a.get(j));
       a.set(j, t);
   }
} 
