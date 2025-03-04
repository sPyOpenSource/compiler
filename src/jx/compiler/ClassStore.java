package jx.compiler;

import jx.zero.*;
import jx.compiler.execenv.BCClass;

import java.util.*;

import jx.collections.Iterator;
import jx.collections.List;

public class ClassStore implements ClassFinder {
    HashMap<String, BCClass> classes = new HashMap<>();
    List<BCClass> classList = new List<>();
    //Hashtable registered = new Hashtable();

    public ClassStore() {
    }

    public ClassStore(List classList) {
	Iterator<BCClass> iter = classList.iterator();
	while(iter.hasNext()) {
	    BCClass c = iter.next();
	    addClass(c.getClassName(), c);
	}
    }

    public int size() {
	return classes.size();
    }

    void initPrimitiveClasses() {
	addPrimitiveClass("C");
    }

    void addPrimitiveClass(String className) {
	addClass(className, null);
    }

    void addArrayClass(String elementClassName, Memory elemPtr) {
	addClass('[' + elementClassName, null);
    }

    //void registerClass(String className, BCClass aClass) {
    //	registered.put(className, aClass);
    //}

    void addClass(String className, BCClass aClass) {
	//Debug.out.println("addClass: "+className);
	classes.put(className, aClass);
	classList.add(aClass);
    }
    
    public Enumeration elements() {
	return classList.elements();
    }

    public Iterator iterator() {
	return classList.iterator();
    }

    public Iterator classSourceIterator() {
	return new Iterator() {
	    Iterator<BCClass> iter = classList.iterator();
            @Override
	    public boolean hasNext() {
		return iter.hasNext();
	    }
            @Override
	    public Object next() {
		return iter.next().getClassSource();
	    }
	};
    }

    @Override
    public BCClass findClass(String className) {
	//Debug.out.println("findClass");
	BCClass ret = classes.get(className);
	if (ret == null) {
	    //Debug.out.println("Cannot find class "+className);
	}
	return ret;
    }

    @Override
    public boolean isAssignableTo(String className, String superName) {
	//Debug.out.println("isInstanceOf: "+className+", "+superName);
	BCClass bc = findClass(className);
	BCClass sc = findClass(superName);
	return isAssignableTo(bc, sc);
    }

    public boolean isAssignableTo(BCClass bc, BCClass sc) {
	//Debug.assert(sc != null);
	//Debug.assert(bc != null);
	if (sc == bc) return true;
	if (isSubclassOf(sc, bc)) return true;
	return implementsInterface(sc, bc);
    }

    /**
     * @param ifClass
     * @param clClass
     * @return true if clClass implements ifClass
     */
    @Override
    public boolean implementsInterface(BCClass ifClass, BCClass clClass) {
	//Debug.out.println("IMPLI: "+ifClass+"  "+clClass);
	if (! ifClass.isInterface()) return false;
	if (ifClass == clClass) return true;	
	BCClassInfo info = clClass.getInfo();
        for (BCClass intf : info.interfaces) {
            //Debug.out.println("   IMPLICHECK: "+ifClass+"  "+info.interfaces[i]);
            if (isAssignableTo(intf, ifClass)) {
                //Debug.out.println(" TRUE");
                return true;
            }
        }
	//Debug.out.println(" FALSE");
	return false;
    }

    /**
     * @param bc the base class
     * @param sc the subclass
     * @return true if sc is a subclass of bc
     */
    boolean isSubclassOf(BCClass bc, BCClass sc) {
	//Debug.assert(bc != sc);
	//Debug.assert(sc != null);
	//Debug.assert(bc != null);
	//Debug.out.println("ISSUB: "+bc+"  "+sc);
	for(BCClass testClass = sc; testClass != null; ) {
	    //System.out.println("TESTSUB: "+bc.getClassName()+", "+testClass.getClassName());
	    if (bc == testClass) {
		//System.out.println("SUBCLASS: "+bc.getClassName()+", "+sc.getClassName());
		return true;	
	    }
	    BCClassInfo info = testClass.getInfo();
	    testClass = info.superClass;
	}
	//System.out.println("NOT A SUBCLASS: "+bc.getClassName()+", "+sc.getClassName());
	return false;
    }
}
