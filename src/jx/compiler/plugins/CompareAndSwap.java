package jx.compiler.plugins;

import jx.zero.Debug;

import jx.compiler.*;
import jx.classfile.constantpool.*;
import jx.compiler.nativecode.*;
import jx.compiler.execenv.*;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.imcode.graph.IMOperant;

public class CompareAndSwap implements CompilerPlugin {

    private static final int CASPROXY_INDEX_OFF = 4;

    private final boolean fastConstants = false;    

    private final ExecEnvironmentIA32      e;
    private final CompilerOptionsInterface opts;
    private BinaryCodeIA32           code;
    private RegManager               regs;

    public CompareAndSwap(ExecEnvironmentIA32 e) {
	this.e    = e;
	this.opts = e.getCompilerOptions();
    }

    @Override
    public boolean code(IMNode node,
			RegManager regs,
			BinaryCodeIA32   code,
			ClassMemberCPEntry methodRefCPEntry,
			IMOperant        obj,
			IMOperant[]      args,
			int              datatype,
			Reg              result,
			int              bcPosition) throws CompileException {

	if (!opts.isOption("cas")) return false;

	this.code = code;
	this.regs = regs;

	String methodName = methodRefCPEntry.getMemberName();
	String signature = methodRefCPEntry.getMemberTypeDesc();
	
	if (opts.doVerbose("plugin") || opts.doVerbose("cas")) {
	    Debug.out.println("Compiling jx.zero.Ports call: "+
			       methodRefCPEntry.getClassName()+"."+
			       methodName + " " +  signature);
	}
	
	if (methodName.equals("casObject") ||
	    methodName.equals("casInt") ||
	    methodName.equals("casBoolean") ||
	    methodName.equals("casShort") ||
	    methodName.equals("casByte")) {

	    /*
	      public interface CAS extends Portal {
	      boolean casObject(Object obj, Object compareValue, Object setValue);
	      boolean casInt(Object obj, int compareValue, int setValue);
	      boolean casBoolean(Object obj, boolean compareValue, boolean setValue);
	      boolean casShort(Object obj, short compareValue, short setValue);
	      boolean casByte(Object obj, byte compareValue, byte setValue);
	      }

	      static inline u4_t cas(u4_t *var, u4_t old, u4_t new) { 
	      int result;
	      asm volatile ( "
	      lock;
	      cmpxchg %%edx, (%%ecx);
	      jne 2f;
	      1:          mov $1, %%eax;
	      jmp 3f;
	      2:          xor %%eax,%%eax;
	      3:"
	      :"=a" ((result))
	      :"c" ((var)), "a" ((old)), "d" ((new))
	      :"cc", "memory");
	      return result;
	      }
	    */


	    
	    return true;
	}

	if (opts.doVerbose("plugin") || opts.doVerbose("cas")) 
	    Debug.out.println("method has no plugin implementation. call normal method for "+methodName);

	return false;
    }
    
}
