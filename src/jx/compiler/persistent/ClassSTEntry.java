
package jx.compiler.persistent;

import java.io.*;  

import jx.compiler.symbols.SymbolTableEntryBase;
import jx.compiler.symbols.StringTable;
import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.ExtendedDataInputStream;

public class ClassSTEntry extends SymbolTableEntryBase {
   
    String className;
    int     stringID;
    boolean validID;

    public ClassSTEntry() {}
    public ClassSTEntry(String className) {
	this.className = className;
    }
    
    @Override
    public String getDescription() {
	return super.getDescription()+",Class:"+className;
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

    @Override
    public void writeEntry(ExtendedDataOutputStream out) throws IOException {
	super.writeEntry(out);
	//out.writeString(className);
	if (!validID) throw new Error("invalid String ID");
	out.writeInt(stringID);
    }
    
    @Override
    public void readEntry(ExtendedDataInputStream in) throws IOException {
	super.readEntry(in);
	className = in.readString();
    }

    @Override
    public void registerStrings(StringTable stringTable) {
	stringID = stringTable.getIdentifier(className);
	validID  = true;
    }
    
}
