package jx.compiler;

import jx.zero.MemoryManager;
import jx.zero.Memory;
import jx.zero.ReadOnlyMemory;
import jx.zero.Debug;

import jx.compiler.persistent.*;
import jx.compiler.execenv.IOSystem;


import java.io.*;
import java.util.ArrayList;
import java.util.StringTokenizer;
import jx.zero.debug.*;
import jx.zero.memory.*;
import jx.zero.BootFS;
import jx.zero.Naming;

public class Main {

    MemoryManager memMgr;
    Naming naming;
    jx.zero.debug.DebugPrintStream out;
    BootFS bootFS;

    public static void init(Naming naming) {
	new Main(naming);
    }

    Main(Naming naming) {
	this.naming = naming;
	DebugChannel d = (DebugChannel) naming.lookup("DebugChannel0");
	out = new jx.zero.debug.DebugPrintStream(new jx.zero.debug.DebugOutputStream(d));
	Debug.out = out;
	out.println("Compiler domain started.");
	memMgr = (MemoryManager) naming.lookup("MemoryManager");

	bootFS = (BootFS)naming.lookup("BootFS");
	if (bootFS == null) {
	    out.println("Cannot use boot file system.");
	    return;
	}

	compile("test1.jxd",
		"test1.jln",
		"test1.zip",
		"jdk0.zip:zero.zip:test.zip",
		"jdk0.jln:zero.jln:test.jln",
		"int");		
    }

    static ArrayList parsePath(String path) {
	ArrayList paths = new ArrayList();
	StringTokenizer tk = new StringTokenizer(path, ":");
	while (tk.hasMoreTokens()) {
	    paths.add(tk.nextToken());
	}
	return paths;
    }

    void compile(String targetName,
		  String linkOut,
		  String domainClasses,
		  String zipList,
		  String jlnList,
		  String env) {

	PrintStream gasFile=null;
	ExtendedDataOutputStream codeFile;
	ExtendedDataOutputStream tableOut;


	Debug.out.println("Compiling domain to " + targetName);
	Debug.out.println("Writing linker output to " + linkOut);
	Debug.out.println("Reading domain classes from " + domainClasses);

	ReadOnlyMemory domClasses =  bootFS.getFile(domainClasses);

	ReadOnlyMemory[] libClasses;
	if (! zipList.equals("-")) {
	    ArrayList libs = parsePath(zipList);
	     libClasses = new ReadOnlyMemory[libs.size()];
	     for(int i=0; i<libs.size(); i++) {
		 Debug.out.println("Reading lib classes from "+(String)libs.get(i));
		 libClasses[i] = bootFS.getFile((String)libs.get(i));
		 if (libClasses[i] == null) {
		     Debug.out.println("Cannot find file "+(String)libs.get(i));
		     return;
		 }
	     }
	} else {
	     libClasses = new ReadOnlyMemory[0];
	}

	ExtendedDataInputStream[] tableIn;
	if (! jlnList.equals("-")) {
	    ArrayList links = parsePath(jlnList);
	    tableIn = new ExtendedDataInputStream[links.size()];
	    for(int i = 0; i < links.size(); i++) {
		Debug.out.println("Reading lib linkerinfo from "+(String)links.get(i));
		ReadOnlyMemory memIn = bootFS.getFile((String)links.get(i));
		if (memIn == null) {
		     Debug.out.println("Cannot find file "+(String)links.get(i));
		     return;
		}
		tableIn[i] = new ExtendedDataInputStream(new MemoryInputStream(memIn));
	    }
	} else {
	    tableIn = new ExtendedDataInputStream[0];
	}

	CompilerOptions opts = new CompilerOptions(env);

	Memory codeFileMemory = memMgr.alloc(1024 * 1024);
	Memory tableOutMemory = memMgr.alloc(1024 * 1024);

	codeFile = new ExtendedDataOutputStream(new MemoryOutputStream(codeFileMemory));
	tableOut = new ExtendedDataOutputStream(new MemoryOutputStream(tableOutMemory));

       IOSystem io = new IOSystem() {
               @Override
	       public OutputStream getOutputStream(String filename) throws IOException {
		   return new OutputStream() {
                           @Override
			   public void write(int b) throws IOException {}
		       };
	       }
               @Override
	       public void set(String path) {}
	   };

	try {
	StaticCompiler compiler = new StaticCompiler(gasFile, codeFile,
						     tableOut,
						     domClasses,
						     libClasses, tableIn,
						     opts,io);
	} catch(Exception ex) {
	    Debug.out.println("EXCEPTION");
	}
    }
}
