
package jx.compiler.imcode.graph.inst; 

import jx.compiler.*;
import jx.compiler.imcode.*;
import jx.compiler.imcode.graph.*;
import jx.compiler.nativecode.*;

// ***** IMNop ***** 

public class IMNop extends IMOperant {

    public IMNop(CodeContainer container,int bcpos) {
	super(container);
	bcPosition = bcpos;
    }

    @Override
    public IMNode processStack(VirtualOperantenStack stack,IMBasicBlock basicBlock) {
	if (verbose) System.err.println("!! NOP");
	return this;
    }


    @Override
    public IMNode inlineCode(CodeVector iCode,int depth, boolean forceInline) throws CompileException {	
	return this;
    }
    
    @Override
    public void translate(Reg result) throws CompileException {	
	code.nop();
    }     
}
