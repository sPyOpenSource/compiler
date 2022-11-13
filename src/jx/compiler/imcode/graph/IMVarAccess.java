
package jx.compiler.imcode.graph; 

import jx.classfile.datatypes.*; 
import java.util.ArrayList;
import jx.compiler.imcode.CodeContainer;
import jx.compiler.imcode.LocalVariable;

// ***** IMVarAccess ****

public class IMVarAccess extends IMOperator implements IMVarAccessInterface {
    protected int           ivar;
    protected LocalVariable lvar;
    protected boolean       writeAccess = false; 

    public IMVarAccess(CodeContainer container) {super(container);}

    public LocalVariable getLocalVariable() {
	return lvar;
    }

    public int getVarIndex() {
	return ivar;
    }
    
    @Override
    public int getNrRegs() { return 1; }

    @Override
    public void getCollectVars(ArrayList vars) { vars.add(this); }

    @Override
    public String toSymbolname() {
	return BCBasicDatatype.toSymbol(datatype) + Integer.toString(ivar);
    }

    @Override
    public boolean writeAccess() {return writeAccess;}
}
