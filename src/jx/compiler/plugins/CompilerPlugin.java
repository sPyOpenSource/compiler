
package jx.compiler.plugins;

import jx.classfile.constantpool.*;
import jx.compiler.*;

import jx.compiler.imcode.graph.IMNode;
import jx.compiler.imcode.graph.IMOperant;
import jx.compiler.backend.*;

public interface CompilerPlugin {
    
    public boolean code(IMNode node,
			RegManager regs,
			BinaryCodeIA32   code,
			ClassMemberCPEntry methodRefCPEntry,
			IMOperant        obj,
			IMOperant[]      args,
			int              datatype,
			Reg              result,
			int              bcPosition) throws CompileException;
    
}
