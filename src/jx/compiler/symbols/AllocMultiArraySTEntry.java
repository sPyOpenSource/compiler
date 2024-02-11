
package jx.compiler.symbols;

public class AllocMultiArraySTEntry extends SymbolTableEntryBase {
   
    public AllocMultiArraySTEntry() {
    }
    
    @Override
    public String getDescription() {
	return super.getDescription()+",AllocMultiArray";
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
