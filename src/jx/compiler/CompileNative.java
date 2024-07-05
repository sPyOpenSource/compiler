
package jx.compiler;

import jx.emulation.MemoryManagerImpl;
import jx.zero.MemoryManager;

import jx.compiler.persistent.*;
import jx.compiler.execenv.IOSystem;

import java.io.*;
import java.net.URL;
import java.util.ArrayList;

import static jx.compspec.StartBuilder.getCompilerOptions;
import jx.zero.Debug;

public class CompileNative {
    static MemoryManager memMgr = new MemoryManagerImpl();

    public static void main(String[] args) throws Exception {
	String libdir = "./app/isodir/code";
	if (!libdir.endsWith("/")) libdir = libdir + "/";

	String jllname = libdir + "zero.jll";

	ArrayList jlns = new ArrayList();
        
	String jlnname = libdir + "zero.jln";
        
        CompilerOptions opts = getCompilerOptions(null, jlns, null, jlnname, jllname, "JC_CONFIG");
        compile("zero", opts);
        
	jllname = libdir + "jdk.jll";
        jlnname = libdir + "jdk.jln";
        String[] neededLibs = new String[]{
            "zero"
        };
        for (String neededLib : neededLibs) {
            jlns.add(libdir + neededLib + ".jln");
        }
        opts = getCompilerOptions(null, jlns, null, jlnname, jllname, "JC_CONFIG");
	compile("os", opts);
        
	jllname = libdir + "ai.jll";
        jlnname = libdir + "ai.jln";
        neededLibs = new String[]{
            "zero", "jdk"
        };
        for (String neededLib : neededLibs) {
            jlns.add(libdir + neededLib + ".jln");
        }
        opts = getCompilerOptions(null, jlns, null, jlnname, jllname, "JC_CONFIG");
	//compile("ai", opts);
        
	jllname = libdir + "init.jll";
        jlnname = libdir + "init.jln";
        neededLibs = new String[]{
            "zero", "jdk"
        };
        for (String neededLib : neededLibs) {
            jlns.add(libdir + neededLib + ".jln");
        }
        opts = getCompilerOptions(null, jlns, null, jlnname, jllname, "JC_CONFIG");
	compile("init2", opts);
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


	URL[] domClasses = new URL[]{
            new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/")
        };
        URL[] libClasses = new URL[0];
        if(path.endsWith("init2")){
            domClasses = new URL[]{
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/dev/APP/dist/testOS.jar!/")
            };
            libClasses = new URL[]{
                new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/"), 
                new URL("jar:https://github.com/sPyOpenSource/os/raw/dev/dist/OS.jar!/"), 
                new URL("jar:https://github.com/sPyOpenSource/AIZero/raw/master/dist/AIZero.jar!/"),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/dev/ifOS/dist/ifOS.jar!/")
            };
        } else if(path.endsWith("ai")){
            domClasses = new URL[]{
                new URL("jar:https://github.com/sPyOpenSource/AIZero/raw/master/dist/AIZero.jar!/")
            };
            libClasses = new URL[]{
                new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/"),
                new URL("jar:https://github.com/sPyOpenSource/os/raw/dev/dist/OS.jar!/"),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/dev/ifOS/dist/ifOS.jar!/")
            };
        } else if(path.endsWith("os")){
            domClasses = new URL[]{
                new URL("jar:https://github.com/sPyOpenSource/os/raw/dev/dist/OS.jar!/"),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/dev/ifOS/dist/ifOS.jar!/"),
                new URL("jar:https://github.com/sPyOpenSource/AIZero/raw/master/dist/AIZero.jar!/")
            };
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

        io.set("./app/ir");
        StaticCompiler compiler = new StaticCompiler(codeFile, tableOut,
                                 domClasses,
                                 libClasses, tableIn,
                                 opts, io);

        // release resources

        for (ExtendedDataInputStream table : tableIn)
            table.close();
        codeFile.close();
        tableOut.close();
    }
}
