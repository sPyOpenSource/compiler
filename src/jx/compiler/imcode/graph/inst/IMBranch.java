
package jx.compiler.imcode.graph.inst;

import jx.compiler.*;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.CodeVector;
import jx.compiler.imcode.graph.*;
// ***** IMBranch ***** 

public class IMBranch extends IMOperant {

    protected IMBasicBlock[] targets;

    public IMBranch(CodeContainer container) {
	super(container);
	tag    = tag | IMNode.BRANCH | IMNode.BB_END;
	targets = null;
    }

    @Override
    public IMNode inlineCode(CodeVector iCode, int depth, boolean forceInline) throws CompileException {	
	return this;
    }

    @Override
    public IMNode assignNewVars(CodeContainer newContainer, int slots[], IMOperant opr[], int retval, int bcPos) throws CompileException {
	bcPosition = bcPos;
	init(newContainer);

	return this;
    }

    public IMBasicBlock[] getTargets() {
	return targets;
    }
}
