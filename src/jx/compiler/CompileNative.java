package jx.compiler;

import jx.zero.Debug;
import jx.compiler.persistent.*;
import jx.compiler.execenv.IOSystem;

import java.io.*;
import java.util.ArrayList;
import java.util.jar.JarFile;

import jx.compspec.MetaInfo;
import jx.compspec.MetaReader;
import static jx.compspec.StartBuilder.getCompilerOptions;

public class CompileNative {
    public static void main(String[] args) throws Exception {
        String[] a = {"/Users/xuyi/Source/OS/x86OS/jx/libs"};
        MetaReader metaReader = new MetaReader(a);
        ArrayList metas = new ArrayList();
        metaReader.addMeta(metas, "init2");
        MetaInfo s = (MetaInfo)metas.get(0); // process this component
        String libdir = "./app/isodir/code";
        if (!libdir.endsWith("/")) libdir = libdir + "/";

        String zipname = libdir + s.getComponentName() + ".zip";
        String jllname = libdir + s.getComponentName() + ".jll";

        ArrayList libs = new ArrayList();
        ArrayList jlns = new ArrayList();
        String[] neededLibs = new String[]{
            "zero"
        };
        for (String neededLib : neededLibs) {
            libs.add(libdir + neededLib + ".zip");
            jlns.add(libdir + neededLib + ".jln");
        }
        
        String jlnname = libdir + s.getComponentName() + ".jln";
        CompilerOptions opts = getCompilerOptions(libs, jlns, zipname, jlnname, jllname, "JC_CONFIG");
        compile("os", opts);
    }

    final public static void compile(CompilerOptions opts) throws Exception {
        compile(null, opts);
    }

    public static void compile(String component, CompilerOptions opts) throws Exception {
        System.out.println("Native code compiler version " + StaticCompiler.version());

        ExtendedDataOutputStream codeFile;
        ExtendedDataOutputStream tableOut;
        if (opts.doDebug()) Debug.out.println("Compiling domain to " + opts.getOutputFile());       
        if (opts.doDebug()) Debug.out.println("Writing linker output to " + opts.getLinkerOutputFile());        
        codeFile = new ExtendedDataOutputStream(new BufferedOutputStream(new FileOutputStream(opts.getOutputFile())));
        tableOut = new ExtendedDataOutputStream(new BufferedOutputStream(new FileOutputStream(opts.getLinkerOutputFile())));

        if (opts.doDebug()) Debug.out.println("Reading domain classes from " + opts.getClassFile());

        JarFile domClasses = null;
        JarFile[] libClasses = null;
        switch(component){
            case "os":
                domClasses = new JarFile("../OS/dist/OS.jar");
                libClasses = new JarFile[]{
                    new JarFile("../Zero/dist/Zero.jar"),
                    new JarFile("../test/ifOS/dist/ifOS.jar")
                };
                break;
            case "zero":
                domClasses = new JarFile("../Zero/dist/Zero.jar");
                libClasses = new JarFile[0];
                break;
            case "if":
                domClasses = new JarFile("../test/ifOS/dist/ifOS.jar");
                libClasses = new JarFile[]{
                    new JarFile("../Zero/dist/Zero.jar")
                };
                break;
            case "ai":
                domClasses = new JarFile("../AIZero/dist/AIZero.jar");
                libClasses = new JarFile[]{
                    new JarFile("../Zero/dist/Zero.jar"),
                    new JarFile("../OS/dist/OS.jar")
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
