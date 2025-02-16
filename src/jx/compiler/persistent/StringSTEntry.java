
package jx.compiler.persistent;

import java.io.*; 

import jx.compiler.symbols.SymbolTableEntryBase; 
import jx.compiler.symbols.StringTable;

import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.ExtendedDataInputStream;

public class StringSTEntry extends SymbolTableEntryBase {
   
    String  value;
    int     stringID;
    boolean validID;

    public StringSTEntry() {}

    public StringSTEntry(String value) {
	this.value   = value;
	this.validID = false;
    }

    @Override
    public String getDescription() {
	return super.getDescription() + ",String:" + value;
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
	return "0x" + Integer.toHexString(getValue());
    }

    @Override
    public void writeEntry(ExtendedDataOutputStream out) throws IOException {
	super.writeEntry(out);
	//out.writeString(value);
	if (!validID) throw new Error("invalid String ID");
	out.writeInt(stringID);
    }
    
    @Override
    public void readEntry(ExtendedDataInputStream in) throws IOException {
	super.readEntry(in);
	stringID = in.readInt();
    }

    @Override
    public void registerStrings(StringTable stringTable) {
	stringID = stringTable.getIdentifier(value);
	validID  = true;
    }
    
}
