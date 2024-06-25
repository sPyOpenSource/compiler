
package jx.compspec;

import java.util.ArrayList;
import jx.compiler.CompilerOptionsNative;

class BuilderOptions extends CompilerOptionsNative {
    public BuilderOptions(ArrayList libs, ArrayList jlns, String src, String jlnFile, String target, String env) {
        /* set defaults */
        doZeroDivChecks      = true;
        doNullChecks         = true;
        doBoundsChecks       = true;  
        doStackSizeCheck     = true;
        doExceptions         = true;
        doMemoryRangeChecks  = true;

        /* -O ============== */
        //doOptimize           = true;
        //doFastStatics        = true;
        //doOptSizeChecks      = true;
        //doAlignCode          = true;
        /* -O ============= */

        //doInlining           = true;
        //doCF                 = true;

        doProfiling          = false;
        doEventLoging        = false;
        doFastMemoryAccess   = false;
        doFastStatics        = false;
        doPrintIMCode        = true;
        doStackTrace         = false;
        doUsePackedArrays    = false;     // old Compiler allways use 32 Bit

        replaceInterfaceWithClass = null; // substitute a classname for an interface name when loading

        debug        = false;
        makeLib      = true;
        libPath      = null;

        enviroment   = env;
        zipClassFile = src;
        zipLibFiles  = libs;
        jlnLibFiles  = jlns;
        jxdFileName  = target;
        jlnFileName  = jlnFile;
    }
    //public boolean doDebug() {return true;}
}
