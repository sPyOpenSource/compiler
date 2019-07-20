package jx.compiler.persistent;

import jx.compiler.symbols.SymbolTableEntryBase; 

public class AllocObjectSTEntry extends SymbolTableEntryBase {   
    public AllocObjectSTEntry() {
    }
    
    @Override
    public String getDescription() {
	return super.getDescription()+",ExceptionHandler";
    }
    
    @Override
    public void apply(byte[] code, int codeBase) {
	//Debug.assert(isReadyForApply()); 
	myApplyValue(code, codeBase, getValue()); 
    }
    
    @Override
    public String toGASFormat() {
	return "0x"+Integer.toHexString(getValue());
    }
}
