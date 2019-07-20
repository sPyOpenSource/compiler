/**
 * parser and container class for compiler options
 *
 * Autor: Chr. Wawersich
 */

package jx.compiler;

import jx.zero.Debug;

import java.util.ArrayList;

import jx.compiler.execenv.CompilerOptionsInterface;
import jx.compiler.execenv.BCClass;
import jx.compiler.execenv.BCMethod;

public class CompilerOptions implements CompilerOptionsInterface {

    protected String  codeType;
 
    protected boolean debug;
    protected ArrayList  debugFlags;
    protected boolean makeLib;
    protected String  enviroment;

    private boolean useLibsDependence = false;

    protected boolean doNewCode            = false;
    protected ArrayList  newCompiler;

    protected boolean doInlining           = false;
    protected ArrayList  inlineMethods;
    protected ArrayList  forceInline = null;

    protected boolean doOptimize           = false;
    protected boolean doAlignCode          = false;
    protected boolean doOptExecPath        = false;
    protected boolean doOptSizeChecks      = false;
    protected boolean doFastStatics        = false;
    protected boolean doFastCheckCast      = false;
    protected boolean doUsePackedArrays    = false;
    protected boolean doExperimentalCode   = false;
    protected boolean doFastThisPtr        = false;
    protected boolean doCF                 = false;

    protected boolean doZeroDivChecks      = true; 
    protected boolean doNullChecks         = true;
    protected boolean doStackSizeCheck     = true;
    protected boolean doBoundsChecks       = true;
    protected boolean doMemoryRangeChecks  = true;
    protected boolean doExceptions         = false;
    protected boolean doClearStack         = true;

    protected boolean doProfiling          = true;
    protected boolean doEventLoging        = false;
    protected ArrayList logMethods            = null;
    protected boolean doProfileNoIRQ       = false;
    protected ArrayList  profileMethods;
    protected boolean doFastMemoryAccess   = false;
    protected boolean doPrintIMCode;
    protected boolean doVerbose            = true;
    protected ArrayList  verboseList          = null;
    protected ArrayList  optionList           = null;
    protected boolean doRemoveDebug        = false;
    protected boolean doStackTrace;
    protected boolean doParanoid           = false;
    protected boolean doMagicTests         = false;
    protected boolean doTrace              = false;
    /* must be true (see portal.c:sendportal) */
    protected boolean doDirectSend         = true;

    protected boolean doJavaDoc            = false;

    protected String targetName   = null;
    protected String srcName      = null;

    protected String jxdFileName  = null;
    protected String jlnFileName  = null;
    protected String zipClassFile = null;
    protected String libPath      = null;
    protected ArrayList zipLibFiles  = null;
    protected ArrayList jlnLibFiles  = null;

    protected ArrayList replaceInterfaceWithClass = null;

    protected String monitorClass = null;

    protected boolean revocationCheckUsingCLI         = false;
    protected boolean revocationCheckUsingSpinLock    = false;

    /**
     * default constructor
     */
    public CompilerOptions() {
	codeType   = "x86";
	enviroment = "int";
    }

    public CompilerOptions(String env) {
	this();
	enviroment = env;
    }

    public CompilerOptions(String[] libs,String env) {
	this();
	setNeededLibs(libs);
	enviroment = env;
    }

    public CompilerOptions(ArrayList libs,String env) {
	this();
	setNeededLibs(libs);
	enviroment  = env;
    }

    public String getTargetName() {
	return targetName;
    }

    /**
     * The filename of the compiled code.
     * @return 
     */
    public String getOutputFile() {
	return jxdFileName;
    }

    /**
     * The filename of the linker information.
     * @return 
     */
    public String getLinkerOutputFile() {
	return jlnFileName;
    }

    /**
     * The zipfilename of the domain classes.
     * @return 
     */
    public String getClassFile() {
	return zipClassFile;
    }

    /**
     *  The zipfilenames of the lib classes or null.
     * @return 
     */
   public ArrayList getLibs() {
	return zipLibFiles;
    }

    public void setUseLibsDependence(boolean flag) {
	useLibsDependence = flag;
    }

    public void setNeededLibs(String[] libs) {
	if (libs!=null) {
	    zipLibFiles = new ArrayList();
            for (String lib : libs) {
                if (lib.lastIndexOf('.') > 0) {
                    zipLibFiles.add(lib);
                } else {
                    zipLibFiles.add(lib + ".zip");
                }
            }
	}
    }

    public void setNeededLibs(ArrayList libs) {
	zipLibFiles = libs;
    }

    public boolean isUseLibDependence() {
	return useLibsDependence;
    }

    /**
     * 
     * @return 
     */

    public String[] getNeededLibs() {
      
	if (zipLibFiles==null) return null;

	String[] neededLibs = new String[zipLibFiles.size()];
	for (int i = 0; i < zipLibFiles.size(); i++) {
	    String lib = (String)zipLibFiles.get(i);
	    int b = lib.lastIndexOf('/');
	    int e = lib.lastIndexOf('.');
	    neededLibs[i] = lib.substring(b + 1, e) + ".jll";
	}

	return neededLibs;
      }

    /**
     * The linker information files for the libraries or null.
     * @return 
     */
    public ArrayList getLibsLinkerInfo() {
	return jlnLibFiles;
    }

    @Override
    public boolean doExtraFalting() {
	return doCF;
    }

    @Override
    public boolean doFastMemoryAccess() {
	return doFastMemoryAccess;
    }

    @Override
    public boolean doMemoryRangeChecks() {
	return doMemoryRangeChecks;
    }

    @Override
    public boolean doExceptions() {
	return doExceptions;
    }

    @Override
    public boolean doClearStack() {
	return doClearStack;
    }


    @Override
    public boolean doZeroDivChecks() {
	return doZeroDivChecks;
    }

    @Override
    public boolean doNullChecks() {
	return doNullChecks;
    }

    @Override
    public boolean doBoundsChecks() {
	return doBoundsChecks;
    }

    @Override
    public boolean doStackSizeCheck(boolean isLeafMethod) {
	if (isLeafMethod && doOptSizeChecks) {
	    return false;
	} else {
	    return doStackSizeCheck;
	}
    }

    @Override
    public boolean doVerbose() {
	return doVerbose;
    }

    @Override
    public boolean doVerbose(String kind) {
	if (doVerbose) return true;
	if (verboseList!=null) {
	    for (int i=0;i<verboseList.size();i++) {
		if (verboseList.get(i).equals(kind)) return true;
	    }
	}
	return false;
    }

    @Override
    public boolean isOption(String kind) {
	if (optionList!=null) {
	    for (int i=0;i<optionList.size();i++) {
		if (optionList.get(i).equals(kind)) return true;
	    }
	}
	return false;
    }

    @Override
    public boolean doPrintStackTrace() {
	return doStackTrace;
    }

    @Override
    public boolean doParanoidChecks() {
	return doParanoid;
    }

    @Override
    public boolean doMagicChecks() {
	return doMagicTests;
    }

    @Override
    public boolean doTrace() {
	return doTrace;
    }

    public void printVerbose(String txt) {
	if (doVerbose) System.out.println(txt);
    }

    @Override
    public boolean doAlignCode() {
	return doAlignCode;
    }

    @Override
    public boolean doOptimize() {
	return doOptimize;
    }

    @Override
    public boolean doFastThisPtr() {
	return doFastThisPtr;
    }

    @Override
    public boolean doOptExecPath() {
	return doOptExecPath;
    }

    @Override
    public boolean doFastStatics() {
	return doFastStatics;
    }

    @Override
    public boolean doFastCheckCast() {
	return doFastCheckCast;
    }

    public boolean doDirectSend() {
	return doDirectSend;
    }

    public boolean doJavaDoc() {
	return doJavaDoc;
    }


    @Override
    public boolean doUsePackedArrays() {
	return doUsePackedArrays;
    }

    @Override
    public boolean forceInline(BCMethod bcMethod)
    {
	if (forceInline != null) {
	    String currentMethod;
	    for (int i = 0; i < forceInline.size(); i++) {
		String entry = (String)forceInline.get(i);

		if (entry.startsWith("*.")) currentMethod = "*." + bcMethod.getName();
		else {currentMethod = bcMethod.getClassName() + "." + bcMethod.getName();}

		if (entry.substring(entry.length() - 1).equals("*")) {
		    entry = entry.substring(0, entry.length() - 1);
		    if (currentMethod.startsWith(entry)) return true;
		}

		if (currentMethod.equals(entry)) return true;
	    }
	}
	return false;
    }

    @Override
    public boolean doInlining(BCClass bcClass,BCMethod bcMethod) {
	if (!doInlining) return false;
        String currentMethod = bcClass.getClassName()+"."+bcMethod.getName();
	if (inlineMethods!=null) {
	    for (int i=0;i<inlineMethods.size();i++) {
		String entry = (String)inlineMethods.get(i);
		//if (currentMethod.equals(entry)) return true;
		if (entry.substring(entry.length()-1).equals("*")) {
		    entry = entry.substring(0,entry.length()-1);
		    if (currentMethod.startsWith(entry)) return true;
		} 
		if (currentMethod.equals(entry)) return true;
	    }
	} else {
	    return true;
	}
	return false;
    }

    @Override
    public boolean doInlining(String methodName) {
	if (doInlining) {
	    if (inlineMethods!=null) {
		for (int i=0;i<inlineMethods.size();i++) {
		    if (methodName.equals((String)(inlineMethods.get(i)))) return true;
		}
		return false;
	    }
	    return true;
	}	
	return false;
    }

    @Override
    public boolean doProfile(BCClass bcClass, BCMethod bcMethod) {
	if (!doProfiling) return false;
        
	if (bcClass.getClassName().equals("jx/zero/timing/Control")) {
            return bcMethod.getName().startsWith("timing");
	}

	String currentMethod = bcClass.getClassName()+"."+bcMethod.getName();

	if (profileMethods!=null) {
	    for (int i=0;i<profileMethods.size();i++) {
		String entry = (String)profileMethods.get(i);
		if (entry.substring(entry.length()-1).equals("*")) {
		    entry = entry.substring(0,entry.length()-1);
		    if (currentMethod.startsWith(entry)) return true;
		} 
		if (currentMethod.equals(entry)) return true;
	    }
	} else {
	    return true;
	}

	return false;
    }

    @Override
    public boolean doEventLoging() {
	return doEventLoging;
    }

    @Override
    public void setUseNewCompiler(boolean flag) {
	doNewCode = flag;
    }

    @Override
    public boolean doNewCompiler() {
	return doNewCode;
    }

    @Override
    public boolean doLogMethod(BCClass bcClass,BCMethod bcMethod) {	
      if (logMethods!=null) {
	String currentMethod = bcClass.getClassName()+"."+bcMethod.getName();
	for (int i=0;i<logMethods.size();i++) {
	  String entry = (String)logMethods.get(i);
	  if (entry.substring(entry.length()-1).equals("*")) {
	    entry = entry.substring(0,entry.length()-1);
	  if (currentMethod.startsWith(entry)) return true;
	  } 
	  if (currentMethod.equals(entry)) return true;
	}
      }
      return false;		
    }
  
    @Override
    public boolean doNewCompiler(BCClass bcClass,BCMethod bcMethod) {	
	if (!doNewCode) return false;
        String currentMethod = bcClass.getClassName()+"."+bcMethod.getName();
	if (newCompiler!=null) {
	    for (int i=0;i<newCompiler.size();i++) {
		String entry = (String)newCompiler.get(i);
		if (entry.substring(entry.length()-1).equals("*")) {
		    entry = entry.substring(0,entry.length()-1);
		    if (currentMethod.startsWith(entry)) return true;
		} 
		if (currentMethod.equals(entry)) return true;
	    }
	} else {
	    return true;
	}
	return false;		
    }

    public boolean doPrintIMCode() {
	return doPrintIMCode;
    }

    public boolean doProfileNoIRQ() {
	return doProfileNoIRQ;
    }

    public void debug(String txt) {
	if (debug) Debug.out.println(txt);
    }

    @Override
    public boolean doDebug() {
	return debug;
    }

    @Override
    public boolean doRemoveDebug() {
	return doRemoveDebug;
    }

    public void setDebug(boolean flag) {
	debug = flag;
	doVerbose = flag;
    }

    public boolean doDebug(String flag) {
	if (debug) {
	    if (debugFlags!=null) {
		for (int i=0;i<debugFlags.size();i++) {
		    if (flag.equals((String)debugFlags.get(i))) return true;
		}
		return false;
	    }
	    return true;
	}
	return false;
    }

    public boolean rejectFloat() {
        return !enviroment.equals("float");
    }

    /**
     * returns the processor type
     * @return 
     */
    public String codeType() {
	if (doProfiling) {
	    return "x86profile";
	} else {
	    return codeType;
	}
    }

    @Override
    public boolean revocationCheckUsingCLI() {
	return revocationCheckUsingCLI;
    }

    @Override
    public boolean revocationCheckUsingSpinLock() {
	return revocationCheckUsingSpinLock;
    }


    public String monitorClass() {
	return monitorClass;
    }
}
