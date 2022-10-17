
package jx.compspec;

import java.util.ArrayList;
import java.util.Arrays;

/**
 *
 * @author xuyi
 */
public class Sort {
    public static void swap(Object data[], int x, int y) {
	Object t = data[x];
	data[x] = data[y];
	data[y] = t;
    }

    static boolean less(String a, String b) {
	return a.compareTo(b)>0;
    }

    public static void quicksort(ArrayList a) {
	String[] v = new String[a.size()];
	a.toArray(v);
	quicksort(v, 0, v.length-1);
	a.clear();
        a.addAll(Arrays.asList(v)); //System.out.println("S: "+v[i]);
    }

    public static void quicksort(String[] v) {
	quicksort(v, 0, v.length-1);
    }

    static void quicksort(String[] a, int left, int right) {
	int i = left;
	int j = right;
	if (left >= right) return;
	String pivot = a[right];       
	do {
	    while(less(a[i], pivot))
		i++;
	    
	    while(less(pivot, a[j]))
		j--;
	    
	    if(i <= j) {
		swap(a, i, j);
		i++;
		j--;
	    }
	} while (i < j);
	
	quicksort(a, left, j);
	quicksort(a, i, right);
    }
}

