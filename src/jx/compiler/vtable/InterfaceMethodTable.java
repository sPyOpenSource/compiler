package jx.compiler.vtable;

import java.util.HashMap;
import java.util.ArrayList;
import jx.zero.Debug;

public class InterfaceMethodTable extends MethodTable {
    private static final boolean dumpAll = false;
    InterfaceMethodsTable itable;
    ArrayList mt = new ArrayList();
    InterfaceMethodTable(String className){
	super(className);
	Debug.out.println("Creating empty InterfaceMethodTable");
    }
    InterfaceMethodTable(ClassInfo info, InterfaceMethodsTable itable, HashMap classPool) {	
	super(info.className);
	if (dumpAll) System.out.println("Procesing "+info.className);
	this.itable = itable;
	// first include object methods
	ClassInfo objInfo = (ClassInfo)classPool.get("java/lang/Object");
	for(int j = 0; j < objInfo.mtable.length(); j++) {
	    Method m = objInfo.mtable.getAt(j);
	    if (m == null) continue;
	    if (dumpAll) Debug.out.println("object-method impl:" + m.nameAndType);
	    addMethodAt(m,j);
	}
	

	// implements interface methods
	String ifs[] = info.data.getInterfaceNames();
        for (String if1 : ifs) {
            ClassInfo in = (ClassInfo) classPool.get(if1);
            for(int j = 0; j < in.mtable.length(); j++) {
                Method m = in.mtable.getAt(j);
                if (m == null) continue;
                if (dumpAll) Debug.out.println("impl:" + m.nameAndType);
                addMethodAt(m,j);
            }
        }
        // own methods
        for (Method method : info.methods) {
            if (method.data.isStatic() || method.name.equals("<clinit>"))
                continue;
            if (dumpAll) 
                Debug.out.println("own:" + method.nameAndType);
            addMethod(method);
        }
	addAll(mt);
    }

    @Override
    public int getIndex(String nameAndType) {
	Method m = (Method)mfinder.get(nameAndType);
	if (m.ifMethodIndex == 0) {
	    /*System.out.println("  WARNING: Method index=0: "+m.nameAndType);*/
	}
	return m.ifMethodIndex;
    }

    private void addMethod(Method m) {
	int index = itable.contains(m);
	itable.dump();
	if (index == -1)
	    System.out.println("NF: " + m.nameAndType);
	if (mt.size() <= index) {
            //mt.setSize(index+1);
            if(index == mt.size())
                mt.add(m);
            else {
                for(int i = mt.size(); i <= index; i++)
                    mt.add(null);
            }
        }
        mt.set(index, m);
	m.ifMethodIndex = index;
    }

    private void addMethodAt(Method m, int index) {
	itable.dump();
	if (index == -1)
	    System.out.println("NF: " + m.nameAndType);
	if (mt.size() <= index) {
            //mt.setSize(index+1);
            if(index == mt.size())
                mt.add(m);
            else{
                for(int i = mt.size(); i <= index; i++)
                    mt.add(null);
            }
        }
        mt.set(index, m);
	m.ifMethodIndex = index;
    }
}
