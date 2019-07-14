
package jx.compiler.imcode; 

import jx.classfile.datatypes.*; 
import java.util.ArrayList;

// ***** IMVarAccess ****

public class IMVarAccess extends IMOperator implements IMVarAccessInterface {

    protected int           ivar;
    protected LocalVariable lvar;
    protected boolean       writeAccess=false; 

    public IMVarAccess(CodeContainer container) {super(container);}

    public LocalVariable getLocalVariable() {
	return lvar;
    }

    public int getVarIndex() {
	return ivar;
    }
    
    public int getNrRegs() { return 1; }

    @Override
    public void getCollectVars(ArrayList vars) { vars.add(this); }

    public String toSymbolname() {
	return BCBasicDatatype.toSymbol(datatype)+Integer.toString(ivar);
    }

    public boolean writeAccess() {return writeAccess;}
}
