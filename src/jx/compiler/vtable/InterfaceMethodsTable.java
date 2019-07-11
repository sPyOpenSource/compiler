package jx.compiler.vtable;

import java.util.ArrayList;
import java.util.Hashtable;

// implements a table with holes
public class InterfaceMethodsTable {
    private final ArrayList methods = new ArrayList();
    private final Hashtable methodFinder = new Hashtable();
    
    InterfaceMethodsTable(ClassInfo objectClass) {
	addObjectMethods(objectClass);
    }

    public int nextFreeIndex() {
	return methods.size();
    }

    public void add(ClassInfo info) {
        for (Method method : info.methods) {
            if (method.name.equals("<clinit>"))
                continue; // interfaces could contain class constructors
            if (contains(method) == -1)
                append(method);	
        }
    }
    /**
     * add class or interface from lib 
     * @param info
     */
    public void addOld(ClassInfo info) {
	for(int i = 0; i < info.mtable.length(); i++) {
	    if (info.mtable.getAt(i) == null) continue;
	    if (info.isInterface()) { 
		if (contains(info.mtable.getAt(i)) == -1)
		    setAt(i, info.mtable.getAt(i));
	    } else {
		markOccupied(i);
	    }
	}	
    }

    /**
     * add methods from class Object 
     * @param info
     */
    public void addObjectMethods(ClassInfo info) {
	for(int i = 0; i < info.mtable.length(); i++) {
	    if (info.mtable.getAt(i) == null) continue;
	    if (contains(info.mtable.getAt(i)) == -1)
		setAt(i, info.mtable.getAt(i));
	}	
    }

    public void append(Method m) {
	m.ifMethodIndex = nextFreeIndex();
	methods.add(m);
	methodFinder.put(m.nameAndType, m);
    }

    public void setAt(int index, Method m) {
	m.ifMethodIndex = index;
	/*if (methods.size() <= index)
	    methods.setSize(index+1);*/
        if(index == methods.size())
            methods.add(m);
        else
            methods.set(index, m);
	methodFinder.put(m.nameAndType, m);
    }

    public boolean isFree(int index) {
        // DO NOT (because markOccupied just increases size!): return methods.elementAt(index)==null;
        
	return index >= methods.size(); 
    }

    public void markOccupied(int index) {
	if (methods.size() <= index){
            if(index == methods.size())
                methods.add(null);
	    //methods.setSize(index+1);
        }
    }

    /**
     * @param m
     * @return -1 when method not in table, otherwise index of method
     */
    public int contains(Method m) {
	if (m == null) return -1;
	Method mf = (Method)  methodFinder.get(m.nameAndType);
	if (mf == null) return -1;
	return mf.ifMethodIndex;
    }

    public void dump() {
	for(int i = 0; i < methods.size(); i++) {
	    Method m = (Method) methods.get(i);
	    // Debug.out.println("IMT "+i+": "+(m==null?"null":m.nameAndType));
	}
    }
}
