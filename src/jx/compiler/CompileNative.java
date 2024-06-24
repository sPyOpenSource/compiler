
package jx.compiler;

import jx.emulation.MemoryManagerImpl;
import jx.zero.MemoryManager;
import jx.zero.Debug;

import jx.compiler.persistent.*;
import jx.compiler.execenv.IOSystem;

import java.io.*;
import java.net.URL;
import java.util.ArrayList;

import static jx.compspec.StartBuilder.getCompilerOptions;

public class CompileNative {
    static MemoryManager memMgr = new MemoryManagerImpl();

    public static void main(String[] args) throws Exception {
        /*String[] a = {"/home/spy/Source/jcore/libs"};
        MetaReader metaReader = new MetaReader(a);
        ArrayList metas = new ArrayList();
        metaReader.addMeta(metas, "init2");
        MetaInfo s = (MetaInfo)metas.get(0); // process this component*/
	String libdir = "./";
	if (!libdir.endsWith("/")) libdir = libdir + "/";

	String zipname = libdir + /*s.getComponentName()*/"zero" + ".zip";
	String jllname = libdir + /*s.getComponentName()*/"zero" + ".jll";

	ArrayList libs = new ArrayList();
	ArrayList jlns = new ArrayList();
        String[] neededLibs = new String[]{
            //"zero", "jdk0"
        };
        for (String neededLib : neededLibs) {
            libs.add(libdir + neededLib + ".zip");
            jlns.add(libdir + neededLib + ".jln");
        }
        
	String jlnname = libdir + /*s.getComponentName()*/"zero" + ".jln";
        
        CompilerOptions opts = getCompilerOptions(libs, jlns, zipname, jlnname, jllname, "JC_CONFIG");
        compile("zero", opts);
	//compile("init2", opts);
    }

    final public static void compile(CompilerOptions opts) throws Exception {
	compile(null, opts);
    }

    public static void compile(String path, CompilerOptions opts) throws Exception {
	System.out.println("Native code compiler version 0.7.10-" + StaticCompiler.version());

	ExtendedDataOutputStream codeFile;
	ExtendedDataOutputStream tableOut;
	if (opts.doDebug()) Debug.out.println("Compiling domain to " + opts.getOutputFile());       
	if (opts.doDebug()) Debug.out.println("Writing linker output to " + opts.getLinkerOutputFile());	    
	codeFile = new ExtendedDataOutputStream(new BufferedOutputStream(new FileOutputStream(opts.getOutputFile())));
	tableOut = new ExtendedDataOutputStream(new BufferedOutputStream(new FileOutputStream(opts.getLinkerOutputFile())));
	
	if (opts.doDebug()) Debug.out.println("Reading domain classes from " + opts.getClassFile());


	URL domClasses = new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/");
        URL[] libClasses = new URL[0];
        if(path.endsWith("zero")){
            domClasses = new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/");
        } else if(path.endsWith("init2")){
            domClasses = new URL("jar:https://github.com/sPyOpenSource/testOS/dist/testOS.jar");
            libClasses = new URL[]{
                new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/"), 
                new URL("jar:https://github.com/sPyOpenSource/os/raw/binary/dist/OS.jar!/"), 
                new URL("jar:https://github.com/sPyOpenSource/AIZero/dist/AIZero.jar")
            };
        } else if(path.endsWith("ai")){
            domClasses = new URL("jar:https://github.com/sPyOpenSource/AIZero/dist/AIZero.jar");
            libClasses = new URL[]{
                new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/"),
                new URL("jar:https://github.com/sPyOpenSource/os/raw/binary/dist/OS.jar!/")
            };
        } else if(path.endsWith("os")){
            domClasses = new URL("jar:https://github.com/sPyOpenSource/os/raw/binary/dist/OS.jar!/");
            libClasses = new URL[]{
                new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/")
            };
        }

	ExtendedDataInputStream[] tableIn;
	ArrayList links = opts.getLibsLinkerInfo();
	if (links != null) {
	   tableIn = new ExtendedDataInputStream[links.size()];
	   for(int i = 0; i < links.size(); i++) {
	       if (opts.doDebug()) Debug.out.println("Reading lib linkerinfo from " + (String)links.get(i));
	       tableIn[i] = new ExtendedDataInputStream(new BufferedInputStream(new FileInputStream((String)links.get(i))));
	   }
	} else {
	    tableIn = new ExtendedDataInputStream[0];
	}
	
	IOSystem io = new IOSystem() {
		private String path;
                @Override
		public OutputStream getOutputStream(String filename) throws IOException {
		    return new FileOutputStream(path + "/" + filename);
		}
                @Override
		public void set(String path) {this.path = path;}
	    };

	io.set(path);
	StaticCompiler compiler = new StaticCompiler(null, codeFile, tableOut,
						     domClasses,
						     libClasses, tableIn,
						     opts, io);

        // release resources
        for (ExtendedDataInputStream tableIn1 : tableIn)
            tableIn1.close();
	codeFile.close();
	tableOut.close();
    }
}
