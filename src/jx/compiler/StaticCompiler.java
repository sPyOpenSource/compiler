/*
 * Bytecode to nativecode driver.
 *
 * Copyright 2000 Michael Golm
 */

package jx.compiler;

import jx.classfile.constantpool.*;
import jx.classfile.*;

import jx.zero.Debug;
import jx.collections.Iterator;
import jx.collections.List;
import jx.compspec.MetaInfo;

import jx.compiler.persistent.*;
import jx.compiler.vtable.MethodTableFactory;
import jx.compiler.vtable.ClassInfo;
import jx.compiler.vtable.Method;
import jx.compiler.vtable.MethodTable;
import jx.compiler.imcode.ExecEnvironmentInterface;

import jx.compiler.execenv.BCClass;
import jx.compiler.execenv.BCMethod;
import jx.compiler.execenv.BCMethodWithCode;
import jx.compiler.execenv.IOSystem;
import jx.compiler.execenv.NativeCodeContainer;
import jx.compiler.execenv.BinaryCode;

import java.io.PrintStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.net.JarURLConnection;
import java.net.URL;

import java.util.ArrayList;
import java.util.Enumeration;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.jar.*;

public class StaticCompiler implements ClassFinder {
    static final boolean dumpAll = false;
    static final boolean verboseFieldLayout = false;
    static final boolean opt_v = true;

    static final boolean addPredefinedObject = true;

    ExecEnvironmentInterface execEnvNew;

    CodeFile codeFile;
    ExtendedDataOutputStream out;
    ClassStore libClassStore;
    ClassStore domClassStore;
    ClassInfo[] predefinedClasses;
    ExtendedDataInputStream tableIn[];
    ExtendedDataOutputStream tableOut;
    CompilerOptions options;
    IOSystem ioSystem;
    jx.compiler.StatisticInfo stat;
    MetaInfo meta;

    // compile all classes that are in the zipfile
    public StaticCompiler(ExtendedDataOutputStream out,
			  ExtendedDataOutputStream tableOut,			  
			  String[] domainZip, 
			  String[] libZip,
			  ExtendedDataInputStream tableIn[],
			  CompilerOptions opts,
			  IOSystem ioSystem
			  ) throws Exception {
	if (opts == null)
	    this.options = new CompilerOptions();
	else
	    this.options = opts;

	this.stat = new jx.compiler.StatisticInfo(opts.getTargetName() + " ");

	this.execEnvNew = new ExecEnvironmentIA32(this, options);

	this.out = out;
	this.tableOut = tableOut;
	this.tableIn = tableIn;
	this.ioSystem = ioSystem;

	ArrayList<ClassSource> libdata = new ArrayList();
	ArrayList<ClassSource> domdata = new ArrayList();
	libClassStore = new ClassStore();
	domClassStore = new ClassStore();

	if (addPredefinedObject) {
            // play a trick: java.lang.Object is automatically part of libclasstore
            // this removes domainzero dependencies from a certain lib
            ClassSource objectClassSource = new NativeClassSource("java/lang/Object", null);
            BCClass objectClass = new BCClass(objectClassSource, "java/lang/Object");
            libClassStore.addClass("java/lang/Object", objectClass);
            predefinedClasses = new ClassInfo[1];
            ArrayList objectMtable = new ArrayList();
            predefinedClasses[0] = new ClassInfo("java/lang/Object", "", false);

            String[][] omethods = {{"getClass", "()Ljava/lang/Class;"},
                                   {"hashCode", "()I"},
                                   {"clone", "()Ljava/lang/Object;"},
                                   {"wait", "()V"},
                                   {"wait", "(J)V"},
                                   {"wait", "(JI)V"},
                                   {"notify", "()V"},
                                   {"notifyAll", "()V"},
                                   {"toString", "()Ljava/lang/String;"},
                                   {"equals", "(Ljava/lang/Object;)Z"},
                                   {"finalize", "()V"}};

            for (String[] omethod : omethods)
                addMethod(predefinedClasses[0], objectMtable, omethod[0], omethod[1]);
            
            predefinedClasses[0].addAll(objectMtable);

            createClassInfoForClass(objectClass);
            BCClassInfo oinfo = objectClass.getInfo();
            oinfo.objectLayout = new FieldLayout();
            oinfo.classLayout = new FieldLayout();
            oinfo.methodTable = new MethodTable(objectMtable, "java/lang/Object");
            //Debug.out.println("ObjectCLASS -> "+objectClass.hashCode());
	} // end addPredefinedObject


	// split zipfiles into classfiles
	for(int i = - domainZip.length; i < libZip.length; i++) {
	    String in;
            
	    if (i < 0) {
                in = domainZip[-1 * i - 1];
            } else {
                in = libZip[i];
            }
            //System.out.println(in.getFile());
            if(domainZip.length == 1){
                if( i < 0)
                    meta = new MetaInfo(in.split("dist")[0].replace("jar:", "") + "META");
            } else {
                if(in.endsWith("META")){
                    meta = new MetaInfo(in);
                    continue;
                }
            }
            
            try {
                JarFile jar = null;
                if(in.startsWith("jar")){
                JarURLConnection con = (JarURLConnection)(new URL(in)).openConnection();
                 jar = con.getJarFile();
                } else {
                    jar = new JarFile(in);
                }
                Enumeration<JarEntry> entries = jar.entries();
                main:
                while (entries.hasMoreElements()) {
                    JarEntry entry = entries.nextElement();
                    String name = entry.getName();
                    if (name.endsWith(".class")) {
                        String path = name.split("\\.")[0] + ".java";
                        sjc.frontend.sjava.J2JSON.J2J(path);
                        if (name.startsWith("test/memobj")) continue;
                        if (name.startsWith("jx/classfile")) continue;
                        if (name.startsWith("jx/classstore")) continue;
                        if (name.startsWith("jx/verifier")) continue;
                        if (name.startsWith("jx/emulation")) continue;
                        if (name.startsWith("jx/secmgr")) continue;
                        if (name.startsWith("jx/JFrameWM")) continue;
                        if (name.startsWith("AI/Models/BytecodeParser")) continue;
                        if (name.startsWith("AI/Models/ByteCode")) continue;
                        if (name.startsWith("java/nio")) continue;
                        if (name.startsWith("java/math")) continue;
                        if (name.startsWith("java/applet")) continue;
                        if (name.startsWith("test/portal/perf")) continue;
                        System.out.println(name); 
                        try (InputStream is = jar.getInputStream(entry)) {
                            ClassData data = new ClassData(new DataInputStream(is));
                            if(i < 0){
                                domdata.add(data);
                            } else {
                                libdata.add(data);
                            }
                        }
                    }
                }
            } catch (NullPointerException e){
                Logger.getLogger(StaticCompiler.class.getName()).log(Level.SEVERE, null, e);
            }
	}

	this.codeFile = new CodeFile(options, meta);

	// parse classfiles into classes
	try {
	    if (opt_v) System.out.println("Adding classes from existing lib");
	    for(int i = 0; i < libdata.size(); i++) {
		ClassSource classData = (ClassSource)libdata.get(i); 
		String className = classData.getClassName();

		if (addPredefinedObject && className.equals("java/lang/Object")) continue;

		if (opt_v) System.out.println("Add class " + className);

		BCClass oldClass = findClass(className);
		if (oldClass != null)
		    Debug.throwError("Duplicate class " + className);
		BCClass clazz = new BCClass(classData, className);
		libClassStore.addClass(className, clazz);
	    }
	    if (opt_v) System.out.println("Adding classes from lib");

	    for(int i = 0; i < domdata.size(); i++) {
		ClassSource classData = (ClassSource)domdata.get(i); 
		String className = classData.getClassName();

		if (addPredefinedObject && className.equals("java/lang/Object")) continue;

		if (opt_v) System.out.println("Add class " + className);

		BCClass oldClass = findClass(className);
		if (oldClass != null) {
		    System.out.println("Duplicate class " + className);
		    Debug.throwError("Duplicate class " + className);
		}
		BCClass clazz = new BCClass(classData, className);
		domClassStore.addClass(className, clazz);
	    }
	} catch(Exception e) {
            Logger.getLogger(StaticCompiler.class.getName()).log(Level.SEVERE, null, e);
	    Debug.throwError("Exception while reading classes.");
	}

	compileStatic();
    }

    public static byte[] getBytesFromInputStream(InputStream is) throws IOException {
        ByteArrayOutputStream os = new ByteArrayOutputStream(); 
        byte[] buffer = new byte[0xFFFF];
        for (int len = is.read(buffer); len != -1; len = is.read(buffer)) { 
            os.write(buffer, 0, len);
        }
        return os.toByteArray();
    }

    private void addMethod(ClassInfo aClass, ArrayList mtable, String methodName, String signature) {
	Method method;
	method = new Method(aClass, methodName, signature);
	mtable.add(method);
	method.indices.add(mtable.size() - 1);
    }

    private void dependencyCheck() {
	Enumeration classIterator = domClassStore.elements();
	while(classIterator.hasMoreElements()) {
	    BCClass aClass = (BCClass)classIterator.nextElement();
	    ConstantPool cp = aClass.getConstantPool();
	    int numEntries = cp.getNumberOfEntries();
	    for(int i = 0; i < numEntries; i++) {
		ConstantPoolEntry e = cp.entryAt(i);
		if (e instanceof ClassCPEntry ec) {
		    String className = ec.getClassName();
		    if (className.charAt(0) == '[') {
			//Debug.out.println("Skipping array class " + className);
			continue;
		    }
		    if (findClass(className) == null) {
			// not seen until now
			Debug.throwError("Class " + ec.getClassName() + " not found. Needed by " + aClass.getClassName());
		    }
		}
	    }
	}
    }


    private ClassStore sortClasses(ClassStore classStore) {
	ArrayList all = new ArrayList();
	Enumeration classIterator = classStore.elements();
	while(classIterator.hasMoreElements())
	    all.add(classIterator.nextElement());
	List sorted = new List();
	for(int i = 0; i < all.size(); i++) {
	    BCClass c = (BCClass) all.get(i);
	    BCClassInfo info = c.getInfo();
	    BCClass s = info.superClass;
	    if (s == null) { // Object class
		sorted.add(c);
		all.set(i, null);
		break;
	    }
	}
    outerloop:
	for(int i = 0; i < all.size(); i++) {
	    BCClass c = (BCClass) all.get(i);
	    if (c == null) continue;
	    BCClassInfo info = c.getInfo();
	    BCClass s = info.superClass;
	    for(int j = 0; j < sorted.size(); j++) {
		if ((BCClass) all.get(i) == s) {
		    sorted.add(c);
		    all.set(i, null);
		    continue outerloop; // OK
		}
	    }
	    // superclass not in sorted list
	    // add all superclasses (starting with Object) to
	    // the sorted list, provided they are not already
	    // on the list
	    ArrayList classesToAdd = new ArrayList();
	    classesToAdd.add(c);
	    all.set(i, null);
	    c = c.getInfo().superClass;
	searchloop:
	    while(true) {
		for(int j = i; j < all.size(); j++) {
		    if (c == (BCClass) all.get(j)) {
			classesToAdd.add(c);
			all.set(j, null);
			c = c.getInfo().superClass;
			continue searchloop;
		    }
		}
		break;
	    }
	    // add to sorted in reverse order
	    for(int j = classesToAdd.size() - 1; j >= 0; j--) {
		sorted.add(classesToAdd.get(j));
	    }
	}
			
	return new ClassStore(sorted);
    }

    private void compileToDomain(ClassStore classStore) {
	Iterator iter = classStore.iterator();
	while(iter.hasNext()) {
	    BCClass c = (BCClass) iter.next();
	    compileToDomain(c);
	}
    }

    private void compileToDomain(BCClass aClass) {
	try {
	    options.printVerbose("***** Compiling class: " + aClass.getClassName());	    

	    execEnvNew.setCurrentlyCompiling(aClass);

	    ConstantPool cPool = aClass.getConstantPool(); 
	    BCClassInfo info = aClass.getInfo();		

	    PrintStream imOut = null;
	    if (options.doPrintIMCode()) {
		try {
		    imOut = new PrintStream(ioSystem.getOutputStream(aClass.getClassName().replace("/", ".") + ".imcode"));	
		} catch (IOException ex) {
		    Logger.getLogger(StaticCompiler.class.getName()).log(Level.SEVERE, null, ex); 
		    Debug.throwError(); 
		}
		imOut.println("class " + aClass.getClassName() + " {");
	    }
	    
	    for(int i = 0; i < info.methods.length; i++) {
		BCMethod m = info.methods[i];

		if (m.isNative()) {
		    // compile native method to throw exception
		    /*
		    jx.compiler.imcode.CodeContainer imCode = new jx.compiler.imcode.CodeContainer(execEnvNew,method);
		    imCode.init();
		    imCode.translate();
		    if (options.doPrintIMCode()) imCode.writeCode(imOut);
		    info.nativeCode[i] = imCode;
		    */
		    info.nativeCode[i] = new NativeCodeContainer() {
                        @Override
                        public BinaryCode getMachineCode() {
                            throw new Error("NATIVE");
                        }
                        @Override
                        public ArrayList  getInstructionTable() {throw new Error("NATIVE");}
                        @Override
                        public int        getLocalVarSize() {throw new Error("NATIVE");}
                    };
		    continue;
		}

		if (!(m instanceof BCMethodWithCode)) continue;
		BCMethodWithCode method = (BCMethodWithCode)m;
		options.printVerbose("**  Compiling method " + method.getName());
		
		jx.compiler.imcode.CodeContainer imCode = new jx.compiler.imcode.CodeContainer(execEnvNew, method, stat);
		imCode.init();
		if (options.doInlining(aClass, method)) {
		    if (options.doPrintIMCode())
			imOut.println("// try to inline methods ");
		    imCode.inlineMethods(4);
		}
		try {
		    imCode.translate();
		    if (options.doPrintIMCode()) imCode.writeCode(imOut);
		    info.nativeCode[i] = imCode;
		} catch (CompileException ex) {
                    Logger.getLogger(StaticCompiler.class.getName()).log(Level.SEVERE, null, ex); 
		    if (options.doInlining(aClass, method)) {
			System.err.println("!! FAIL to inline !!!!!!!!!!!!!!!");
			if (!options.doVerbose("inline"))
			    System.err.println("!! " + ex.getClass().getName());
			System.err.println("!! try without inlining !!!!!!!!!");
			imCode = new jx.compiler.imcode.CodeContainer(execEnvNew, method);
			imCode.init();
			imCode.translate();
			if (options.doPrintIMCode()) imCode.writeCode(imOut);
			info.nativeCode[i] = imCode;
		    } else { 
			System.exit(1);
		    }
		}
		
		if (options.doPrintIMCode()) imCode.writeStatistics(imOut);
	    }
	    if (options.doPrintIMCode()) {
		imOut.println("}");
		imOut.close();
	    }
	} catch (CompileException ex) {
	    Debug.out.println("Compilation Failed :" + ex.getMessage()); 
	    Debug.throwError(); 
	}
    }
    
    private void createClassInfoForClass(BCClass aClass) throws CompileException {
	if (aClass.getInfo() != null) return; // predefined classinfo
	/* if (options.doDebug()) Debug.out.println("Creating classinfo for "+aClass.getClassName()); */

	BCClassInfo info = new BCClassInfo(); 
	aClass.setInfo(info);
	info.methods = aClass.getAllMethodsWithCode(options.replaceInterfaceWithClass); 
	info.nativeCode = new jx.compiler.execenv.NativeCodeContainer[info.methods.length];

	ClassSource cs = aClass.getClassSource();
	String superName = cs.getSuperClassName();
	if (superName == null) {
	    info.superClass = null;
	} else {
	    BCClass cc =  findClass(superName);
	    if (cc == null) Debug.throwError("Class \"" + superName + "\" not found.  Needed for class " + aClass.getClassName());
	    info.superClass = cc;
	}
	String[] ifs = cs.getInterfaceNames();
	info.interfaces = new BCClass[ifs.length];
	for(int j = 0; j < ifs.length; j++) {
	    BCClass cc =  findClass(ifs[j]);
	    if (cc == null)
		Debug.throwError("Class " + ifs[j] + " not found. Needed for class " + aClass.getClassName());
	    info.interfaces[j] = cc;
	}
    }

    private void createClassInfo(ClassStore classStore) throws CompileException {
	Enumeration classIterator = classStore.elements();
	while(classIterator.hasMoreElements()) {
	    BCClass c = (BCClass)classIterator.nextElement();
	    createClassInfoForClass(c);
	}
    }
    
    private void compileStatic() throws Exception {
	dependencyCheck();
	//Debug.out.println("**Finished class checking!");

	createClassInfo(libClassStore);
	createClassInfo(domClassStore);

	domClassStore = sortClasses(domClassStore); // we don't need to sort the classes anymore
	libClassStore = sortClasses(libClassStore);

	ConstraintChecker.check(domClassStore.classSourceIterator());
	MethodTableFactory mtableFactory = new MethodTableFactory(domClassStore.classSourceIterator(), predefinedClasses, tableIn);
	mtableFactory.process();

	Iterator iter = libClassStore.iterator();
	while(iter.hasNext()) {
	    BCClass c = (BCClass) iter.next();
	    BCClassInfo info = c.getInfo();
	    info.methodTable = mtableFactory.getMethodTable(c.getClassName());
	    //Debug.out.println(" setting mtable for " + c.getClassName());
	    if (info.methodTable == null) {
                Debug.throwError("No Methodtable for " + c.getClassName());
            }
	}

	iter = domClassStore.iterator();
	while(iter.hasNext()) {
	    BCClass c = (BCClass) iter.next();
	    BCClassInfo info = c.getInfo();
	    info.methodTable = mtableFactory.getMethodTable(c.getClassName());
	    if (dumpAll) { 
		Debug.out.println(" setting mtable for " + c.getClassName());
		info.methodTable.print();
	    }
	    if (info.methodTable == null) Debug.throwError("No Methodtable for " + c.getClassName());
	}


	// compute object layout and class layout
	computeObjectAndClassLayout(libClassStore);
	computeObjectAndClassLayout(domClassStore);

	options.printVerbose("**********Finished resolving!");
	
	compileToDomain(domClassStore);
        
	options.printVerbose("**********Finished compiling!");

	if (options.doVerbose("stat"))
	    System.out.println(stat.toString());

	codeFile.write(out, domClassStore);
	options.printVerbose("written");

	out.close();
	options.printVerbose("closed");

	mtableFactory.serialize(tableOut);
	options.printVerbose("table");

	tableOut.close();
	options.printVerbose("table closed");

    }

    private void computeObjectAndClassLayout(ClassStore classStore) {
	Iterator iter = classStore.iterator();
	while(iter.hasNext()) {
	    BCClass c = (BCClass) iter.next();
	    computeObjectAndClassLayout(c);
	    computeMappedLayout(c);
	}
    }

    private void computeObjectAndClassLayout(BCClass aClass) {
	BCClassInfo info = aClass.getInfo();
	if (info.objectLayout != null && info.classLayout != null) return;
	info.objectLayout = new FieldLayout();
	info.classLayout = new FieldLayout();
	BCClass s = info.superClass;

	if (s != null) {
	    FieldLayout superLayout = s.getInfo().objectLayout;
	    if (superLayout == null) {
		Debug.throwError("FieldLayout of class " + s.getClassName() + " not initialized.");
	    }
	    info.objectLayout.addFields(superLayout);
            superLayout = s.getInfo().classLayout;
	    if (superLayout == null) {
		Debug.throwError("FieldLayout of class " + s.getClassName() + " not initialized.");
	    }
	    info.classLayout.addFields(superLayout);
	}
	ClassSource source = aClass.getClassSource();
	FieldData[] fields = source.getFields();
        //Debug.out.println("FieldLayout::getObjectLayout: "+aClass.getClassName()+","+fields.length);
        for (FieldData field : fields) {
            if (field.isStatic()) {
                //Debug.out.println("compute static FieldLayout "+aClass.getClassName()+","+fields[i].getName());
                info.classLayout.addField(field.getName(), field.getType());
            } else {
                //Debug.out.println("FieldLayout::getObjectLayout: "+aClass.getClassName()+","+fields[i].getName());
                info.objectLayout.addField(field.getName(), field.getType());
            }
        }
	if(verboseFieldLayout) {
	    Debug.out.println("FieldLayout of class " + aClass.getClassName());
	    info.objectLayout.dump();
	    Debug.out.println("StaticLayout of class " + aClass.getClassName());
	    info.classLayout.dump();
	}
    }

    private void computeMappedLayout(BCClass aClass) {
	BCClass mapClass = findClass("jx/zero/MappedLittleEndianObject");
	if (!(mapClass != null && isAssignableTo(aClass, mapClass))) return;
	BCClassInfo info = aClass.getInfo();
	if (info.mappedLayout != null) return;
	info.mappedLayout = new CompactFieldLayout();
	BCClass s = info.superClass;
	if (s != null)
	    info.mappedLayout.addFields(aClass.getInfo().mappedLayout);
	ClassSource source = aClass.getClassSource();
	FieldData[] fields = source.getFields();
        for (FieldData field : fields) {
            if (!field.isStatic())
                info.mappedLayout.addField(fields, field.getName(), field.getType());
        }
    }

    /**
     * Implementation of the ClassFinder interface
     * @param className
     * @return 
     */
    @Override
    public BCClass findClass(String className) {
	BCClass cc = domClassStore.findClass(className);
	if (cc == null) cc = libClassStore.findClass(className);
	return cc;
    }

    @Override
    public boolean isAssignableTo(String className, String superName) {
	BCClass c1 = findClass(className);
	if (c1 == null) Debug.throwError("class " + className + " not found");
	BCClass c2 = findClass(superName);
	if (c2 == null) Debug.throwError("class " + superName + " not found");
	return domClassStore.isAssignableTo(c1, c2);
    }

    public boolean isAssignableTo(BCClass c1, BCClass c2) {
	return domClassStore.isAssignableTo(c1, c2);
    }

    @Override
    public boolean implementsInterface(BCClass ifClass, BCClass clClass) {
	return domClassStore.implementsInterface(ifClass, clClass);
    }

    public static String version() {
	return "2.5";
    }
}
