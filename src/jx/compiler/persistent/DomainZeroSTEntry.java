package jx.compiler.persistent;

import jx.compiler.symbols.SymbolTableEntryBase; 

public class DomainZeroSTEntry extends SymbolTableEntryBase {
   
    public DomainZeroSTEntry() {}

    @Override
    public String getDescription() {
	return super.getDescription()+",DomainZero";
    }

    @Override
    public boolean isResolved() {return false;} 

    @Override
    public void apply(byte[] code, int codeBase) {
	//Debug.assert(isReadyForApply()); 
	applyValue(code, codeBase, getValue()); 
    }
    
    @Override
    public String toGASFormat() {
	return "$0x"+Integer.toHexString(getValue());
    }    
}
