
package jx.compiler; 

import jx.zero.Memory;
import jx.classfile.ClassSource;
import jx.classfile.NoMagicNumberException;
import jx.zip.ZipFile;
import jx.zip.ZipEntry;

import java.util.ArrayList;
import java.util.HashMap;
import java.io.EOFException;
import java.util.Set;

/*
 * Represents all classes that are contained in a ZIP file
 */
public class ZipClasses {
    HashMap classes = new HashMap();
    
    public ZipClasses(Memory m, boolean allowNative) throws Exception {
	// tokenize zipfile into classfiles
	ArrayList libdata = new ArrayList();
	ZipFile zip = new ZipFile(m);
	ZipEntry entry;
	while ((entry = zip.getNextEntry()) != null) {
	    if (entry.isDirectory())
		continue;
	    libdata.add(entry.getData());
	}

	// parse classfiles into classes
	for(int i = 0; i < libdata.size(); i++) {
	    try {
		ClassSource classData = new MemoryClassSource((Memory)libdata.get(i), allowNative); 
		String className = classData.getClassName();
		classes.put(className, classData);
	    } catch(EOFException | NoMagicNumberException ex) {
	    }
	}
    }
    
    public ClassSource findclass(String className) {
	return (ClassSource)classes.get(className);
    }
    
    public Set elements() {
	return classes.keySet();
    }
}
