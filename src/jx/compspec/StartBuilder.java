/*
 * JX Builder
 * Author: Michael Golm
 */
package jx.compspec;

import java.io.*;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;

import jx.compiler.CompilerOptions;
import jx.compiler.CompileNative;

public class StartBuilder {
    private static final boolean doDebug = true;
    private static final boolean silent  = true;

    private static final ArrayList metas = new ArrayList(); // MetaInfo

    static String buildDir;

    private static String components;

    private static final boolean opt_f = false; // force recompilation 
    private static final boolean opt_c = false; // make clean
    private static final boolean opt_n = false; // do nothing
    private static boolean opt_fast  = false;   // compile only the jll that has changed
    private static boolean opt_new   = false;   // compute transitive if-depends, impl-depends, and extends relations
    private static boolean opt_debug = false;   // verbose debug output

    private static boolean new_jcflags = false;

    private static File zipFileListFile;
    private static CompilerOptions compilerOpts;

    public static void main(String[] args) throws Exception {
	String componentsDir = null;
	int argc = 0;

	if (args.length < 2)
	    throw new Error("StartBuilder: wrong number of parameters");

	while(argc < args.length) {
            switch (args[argc]) {
                case "-fast":
                    opt_fast = true;
                    break;
                case "-new":
                    opt_new = true;
                    break;
                case "-debug":
                    opt_debug = true;
                    break;
                case "-components":
                    argc++;
                    components = args[argc];
                    break;
                case "-compdir":
                    argc++;
                    componentsDir = args[argc];
                    break;
                default:
                    throw new Error("Unknown option " + args[argc]);
            }
 	    argc++;
	}
	if (components == null || componentsDir == null) throw new Error("need COMPONENTS and components dir");

	String[] compdirs = MetaInfo.split(componentsDir, ':');

        MetaInfo zero = new MetaInfo("https://github.com/sPyOpenSource/zero/raw/jar/META");
        zero.setNeededLibs(new ArrayList());
        metas.add(zero);
        
        MetaInfo jdk0 = new MetaInfo("https://github.com/sPyOpenSource/os/raw/master/META");

        ArrayList allLibs2 = new ArrayList();
        allLibs2.add("zero");
        jdk0.setNeededLibs(allLibs2);
        metas.add(jdk0);

        MetaInfo ai = new MetaInfo("https://github.com/sPyOpenSource/AIZero/raw/master/META");

        ArrayList allLibs3 = new ArrayList();
        allLibs3.add("zero");
        allLibs3.add("jdk0");
        ai.setNeededLibs(allLibs3);
        metas.add(ai);

        MetaInfo meta = new MetaInfo("https://github.com/sPyOpenSource/testOS/META");

        ArrayList allLibs = new ArrayList();
        allLibs.add("zero");
        allLibs.add("jdk0");
        allLibs.add("ai");
        meta.setNeededLibs(allLibs);
        metas.add(meta);
        
	buildDir = compdirs[0];
	String jcFileName = "JC_CONFIG";
	String addFileName = "ADD_TO_ZIP";
	String codeFileName = "../Compiler/app/isodir/code/code.zip";
	File jcFile = new File(jcFileName);
	zipFileListFile = new File(addFileName);
	File codeFile = new File(codeFileName);
	if (jcFile.exists() && codeFile.exists())
	    if (jcFile.lastModified() > codeFile.lastModified()) new_jcflags = true;
        
	compilerOpts = getCompilerOptions(null, null, null, null, null, jcFileName);

	for(int i = 0; i < metas.size(); i++) {
	    MetaInfo s = (MetaInfo)metas.get(i); // process this component
	    if (!silent) System.out.println("COMPONENTS += " + s.getComponentName());	
	}

	System.out.println("*********** BUILDING COMPONENTS: ZIP -> JLL");
	build_jlls();

	System.out.println("*********** BUILDING BOOT ZIP FILE");
	//build_bootzip();

	System.out.println("*********** BUILD COMPLETED");
    }

    /**
     * @param absdir absolute directory necessary to open the file
     * @param subfile part of the path that should be included in the zip file
     */
    static void addZipEntry(java.util.zip.ZipOutputStream zip, String absdir, String subfile) throws Exception {
	String absfile = absdir + "/" + subfile;

        byte[] data;
        try (RandomAccessFile f = new RandomAccessFile(absfile, "r")) {
            data = new byte[(int)f.length()];
            f.readFully(data);
        }
	java.util.zip.ZipEntry entry = new java.util.zip.ZipEntry(subfile);
	entry.setSize(data.length);
	java.util.zip.CRC32 crc = new java.util.zip.CRC32();
	crc.update(data);
	entry.setCrc(crc.getValue());
	zip.putNextEntry(entry);
	zip.write(data, 0, data.length);
	zip.closeEntry();
    }
    
    static public CompilerOptions getCompilerOptions(ArrayList libs,
						     ArrayList jlns,
						     String zipname, String jlnname, String jllname,
						     String optionFile) {
	File config = new File(optionFile);
	BuilderOptions opts = new BuilderOptions(libs, jlns, zipname, jlnname, jllname, "int");

	if (config.exists()) {
	    try {
		BufferedReader file = new BufferedReader(new FileReader(config));
		String line;
		while ((line = file.readLine()) != null) {
		    if (line.startsWith("#")) continue;
		    int ndx = line.indexOf("JCFLAGS");
		    if (ndx > 0) {
			ndx = line.indexOf("=",ndx);
			String jcflags = line.substring(ndx + 1);
			opts.parseOptionLine(jcflags);
			return opts;
		    }
		}
	    } catch (IOException ex) {
		System.err.println(ex.getClass().getName());
		System.err.println("WARNING: Can`t read " + optionFile + " !!!");
	    }

	    System.err.println("WARNING: JCFLAGS not found in " + optionFile + " !!!");
	    return opts;
	}

	System.err.println("WARNING: " + optionFile + " not found !!!");
	return opts;
    }

    static public ArrayList findlibsNew(String[] componentsDir, String components) throws Exception {
	String[][] com = new NewParser(components).getComponents();
	return null;
    }

    /** compute all needed components
     * @param compdir
     * @param components
     * @return 
     * @throws java.lang.Exception */
    static public ArrayList findlibs(String[] compdir, String components) throws Exception {
	String[] com = new Parser(components).getComponents();
	//	String[] allcom = new Parser(componentsAll).getComponents();
	MetaReader metaReader = new MetaReader(compdir);

        for (String com1 : com) {
            metaReader.addMeta(metas, com1);
        }

	// compute transitive needlibs/ifdependson for all components
	transloop:
	for(int i = 0; i < metas.size(); i++) {
	    MetaInfo s = (MetaInfo)metas.get(i); // process this component
	    //Debug.out.println("COMPUTE: "+s.getComponentName());
	    String v;
	    if (opt_new) {
		v = s.getVar("IFDEPENDSON");
		if (v == null)
		    v = s.getVar("NEEDLIBS");
	    } else {
		v = s.getVar("NEEDLIBS");
	    }
	    if (v == null) continue; // example: zero lib
	    String[] c = MetaInfo.split(v);
	    if (c == null) continue; // example: zero lib

	    //int doneIndex=0;
	    ArrayList allLibs = new ArrayList(); // will contain transitive closure
	    if (opt_debug) System.out.println("PROCESS: " + s.getComponentName());

	    // sort COMPONENTS in lexical order and add metas
	    Sort.quicksort(c);

            for (String c1 : c) {
                if (opt_debug)
                    System.out.println("ADDNEEDED: " + c1);
                String lib0 = c1;
                // first try to find in components then in allcomponents
                boolean found = false;
                for(int k = 0; k < metas.size(); k++) {
                    if (((MetaInfo)metas.get(k)).getComponentName().equals(lib0)) {
                        found = true;
                        break;
                    }
                }
                if (! found)
                    metaReader.addMeta(metas, lib0);
                found = false;
                for(int k = 0; k < metas.size(); k++) {
                    if (((MetaInfo)metas.get(k)).getComponentName().equals(lib0)) {
                        //Debug.out.println("FOUND: "+lib0);
                        if (k > i) {
                            // backoff from processing this lib and do the other lib first
                            // swap the two libs
                            MetaInfo needed = (MetaInfo)metas.get(k);
                            metas.set(i, needed);
                            metas.set(k, s);
                            //throw new Error(s.getComponentName()+"DEPEND ON UNPROCESSED "+lib0);
                            i--;
                            //Debug.out.println("BACKOFF: "+s.getComponentName());
                            continue transloop;
                        }
                        
                        
                        // add needed libs if not there
                        String [] nl = ((MetaInfo)metas.get(k)).getNeededLibs();
                        if (nl == null)
                            throw new Error("No NEEDEDLIBS computed for component "+lib0);
                        for (String nl1 : nl) {
                            //Debug.out.println("NEED: "+nl[j]);
                            add(allLibs, nl1);
                        }
                        found = true;
                        break;
                    }
                }
                if (! found)
                    throw new Error("needed lib " + lib0 + " not found");
                add(allLibs, lib0);
            }
	    
	    /*
	    Debug.out.print("DONE "+s.getComponentName()+": ");
	    for(int j=0;j <allLibs.size();j++) {
		Debug.out.print(allLibs.elementAt(j));
	    }
	    Debug.out.println("");
	    */
	    s.setNeededLibs(allLibs);
	}
	return metas;
    }
    
    static void add(ArrayList allLibs, String lib) {
	// is this lib already there?
	for(int k = 0; k < allLibs.size(); k++)
	    if (lib.equals(allLibs.get(k))) return;
	allLibs.add(lib);
    }

    static void dumpMetas(String filename) {
	try {
	    PrintStream out = new PrintStream(new FileOutputStream(filename));
	    out.println("# **** LIST OF COMPONENTS INCLUDED IN BOOT IMAGE *********");
	    out.println("# AUTOMATICALLY GENERATED FILE.");
	    out.println("# DO NOT MODIFY!");
	    for(int i = 0; i < metas.size(); i++) {
		MetaInfo s = (MetaInfo)metas.get(i); // process this component
		out.println(s.getComponentName());
	    }
	} catch(IOException e) {throw new Error();}
    }

    static public void build_jlls() {
	for(int i = 0; i < metas.size(); i++) {
	    MetaInfo s = (MetaInfo)metas.get(i); // process this component
	    if (!silent) System.out.print("* " + s.getComponentName() + "... ");

	    String libdir = buildDir;
	    if (!libdir.endsWith("/")) libdir = libdir + "/";

	    String zipname = libdir + s.getComponentName() + ".zip";
	    String jllname = libdir + s.getComponentName() + ".jll";

	    /*File zipfile = new File(zipname);
	    File jllfile = new File(jllname);

	    if ((!compiledAJll || opt_fast) && (jllfile.exists() && !new_jcflags) && (jllfile.lastModified() > zipfile.lastModified())) {
		if (!silent) System.out.println(" nothing to do.");
		continue;
	    }*/
	    if (silent) System.out.print("* " + s.getComponentName() + "... ");

	    ArrayList libs = new ArrayList();
	    ArrayList jlns = new ArrayList();

	    String[] neededLibs = s.getNeededLibs();
            for (String neededLib : neededLibs) {
                libs.add(libdir + neededLib + ".zip");
                jlns.add(libdir + neededLib + ".jln");
            }

	    String jlnname = libdir + s.getComponentName() + ".jln";

	    /* public BuilderOptions(Vector libs, Vector jlns, String src, String target, String env) */
	    //BuilderOptions opts = new BuilderOptions(libs,jlns,zipname,jlnname,jllname,"int");
	    CompilerOptions opts = getCompilerOptions(libs, jlns, zipname, jlnname, jllname, "JC_CONFIG");

	    try {
		CompileNative.compile(libdir + s.getComponentName(), opts);
	    } catch (Exception ex) {
                Logger.getLogger(StartBuilder.class.getName()).log(Level.SEVERE, null, ex);
		new File(jllname).delete();
		throw new Error("Translator returned error");
	    }
	}
    }

    static public void build_bootzip() throws Exception {
	String bootzipname = buildDir + "/" + "../code.zip";
	File bootzipfile = new File(bootzipname);
	long bootzipmod = bootzipfile.lastModified();
	FileOutputStream out = new FileOutputStream(bootzipname);
        try (java.util.zip.ZipOutputStream zip = new java.util.zip.ZipOutputStream(out)) {
            zip.setMethod(java.util.zip.ZipOutputStream.STORED);
            
            for(int i = 0; i < metas.size(); i++) {
                MetaInfo s = (MetaInfo)metas.get(i); // process this component
                if (!silent) System.out.print("* " + s.getComponentName() + "... ");
                
                String zipname = buildDir + "/" + s.getComponentName() + ".jll";
                
                File zipfile = new File(zipname);
                if (zipfile.lastModified() > bootzipmod) {
                    if (!silent) System.out.println(" update.");
                    else System.out.println("* " + s.getComponentName() + " update.");
                } else {
                    if (!silent) System.out.println(" nothing to do.");
                }
                addZipEntry(zip, buildDir, s.getComponentName() + ".jll");
            }
            
            // additional files
            if (zipFileListFile.exists())  {
                DataInputStream listin = new DataInputStream(new FileInputStream(zipFileListFile));
                for(;;) {
                    String name = listin.readLine();
                    if (name == null) break;
                    name = name.trim();
                    if (name.length() == 0) continue;
                    int s = name.lastIndexOf('/');
                    String filename = name;
                    String pathname = "";
                    if (s != -1) {
                        filename = name.substring(s + 1);
                        pathname = name.substring(0, s);
                    }
                    //System.out.println("NAME: "+filename);
                    //System.out.println("PATH: "+pathname);
                    addZipEntry(zip, buildDir + "/../" + pathname, filename);
                }
                
                //addZipEntry(zip, componentsDir+"/../", "boot.rc");
                //addZipEntry(zip, componentsDir+"/wm_impl/jx/wm/", "std.keymap");
                //addZipEntry(zip, componentsDir+"/wm_impl/jx/wm/", "default.fon");
                //File rmfile = new File(componentsDir+"../jcore/realmode");
                //if (rmfile.exists()) {
                //	addZipEntry(zip, componentsDir+"../jcore/", "realmode");
                //} else {
                //System.out.println("WARNING: no realmode file found");
                //}
                
                // ONLINECOMPILER REQUIRES ALL JLN AND ZIP FILES!!
                // ...
            }
        }
    }


    public static int exec(String cwd, String classPath, String mainClass, String args[]) {
        int ret = 0;
        String cp = System.getProperty("env.class.path");
	// System.out.println("CP: " + cp);
	try {
	    try {
                /*System.out.println("************");
                System.out.println("CWD: " + cwd);
                System.out.println("CP: " + classPath);
                System.out.println("Class: " + mainClass);
                System.out.print("args: ");
                for (String arg : args) {
                    System.out.print(arg + " ");
                }
                System.out.println("");*/

		//setProperty("user.dir", cwd);
		
                //setProperty("env.class.path", classPath + ":" + cp);
		java.lang.Class c = java.lang.Class.forName(mainClass);
		Class parameterTypes[] = new Class[1];
		parameterTypes[0] = args.getClass();
		java.lang.reflect.Method method = c.getMethod("main", parameterTypes);
		Object pars[] = new Object[1];
		pars[0] = args;
                //System.out.println("CP2: " + classPath );
                setProperty("env.class.path", classPath + ":" + cp);
		try {
		    method.invoke(null, pars);
		} catch (java.lang.reflect.InvocationTargetException e) {
		    throw e.getTargetException();
		}
		
	    } catch (NoExitException e) {
		ret = e.status;
	    } 
	} catch (Throwable t) {
	    System.out.println("Exception: " + t.getMessage());
	    ret = 1;
	}
        if (cp == null) setProperty("env.class.path", "");
        else setProperty("env.class.path", cp);
	return ret;
    }

    public static int execJavaDoc(String libname, String componentsDir, String[] files, String classPath) {
        int ret = 0;
	try {
	    String cmd = "javadoc -author -version -d " + componentsDir + "../docs/" + libname + " -classpath " + classPath + " ";
            for (String file : files) {
                cmd += " " + file;
            }
	    System.out.println(cmd);

	    String cmd0 = "rm -rf " + componentsDir + "../docs/" + libname;
	    String cmd1 = "mkdir " + componentsDir + "../docs/" + libname;
	    
	    exec0(cmd0);
	    exec0(cmd1);
	    exec0(cmd);
	} catch (Exception t) {
	    System.out.println("Exception: " + t.getMessage());
	    ret = 1;
	}
	return ret;
    }

    static void exec0(String cmd) throws Exception {
	Process p = Runtime.getRuntime().exec(cmd);
	BufferedInputStream in = new BufferedInputStream(p.getInputStream());
	int c;
	while((c=in.read()) != -1) { System.out.write(c); }
    }


    public static boolean hasExtension(String[] exts, String name) {
        for (String ext : exts) {
            if (name.endsWith(ext)) {
                return true;
            }
        }
	return false;
    }

    static void setProperty(String k, String v) {
	 java.util.Properties properties = System.getProperties();
	 properties.remove(k);
	 properties.put(k, v);
	 System.setProperties(properties);
    }

    static class NoExitException extends SecurityException {
	int status;
	public NoExitException(int status) {
	    super("NoExit");
	    this.status = status;
	}
    }
}
