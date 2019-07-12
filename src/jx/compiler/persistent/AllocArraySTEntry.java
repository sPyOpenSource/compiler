package jx.compiler.persistent;



import jx.compiler.symbols.SymbolTableEntryBase; 

public class AllocArraySTEntry extends SymbolTableEntryBase {
   
    public AllocArraySTEntry() {}
    
    @Override
    public String getDescription() {
	return super.getDescription()+",AllocArray";
    }
    
    @Override
    public int getValue() {
	return 0;
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
