package jx.compiler.persistent;

import java.io.*;  

import jx.compiler.symbols.SymbolTableEntryBase; 
import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.ExtendedDataInputStream;

public class PrimitiveClassSTEntry extends SymbolTableEntryBase {
    
    int type; // typecode conforming to the constantpool types
    
    public PrimitiveClassSTEntry() {}
    
    public PrimitiveClassSTEntry(int type) {
	this.type = type;
    }
    
    @Override
    public String getDescription() {
	return super.getDescription()+",PrimitiveClass:"+type;
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
	out.writeInt(type);
    }

    @Override
    public void readEntry(ExtendedDataInputStream in) throws IOException {
	super.readEntry(in);
	type = in.readInt();
    }
}
