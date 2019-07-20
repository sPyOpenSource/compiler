package jx.compiler.symbols; 

import java.io.IOException;

import jx.compiler.execenv.ExtendedDataOutputStream;

/** 

*/ 

public abstract class IntValueSTEntry extends SymbolTableEntryBase {

    @Override
    public void apply(byte[] code, int codeBase) {
	throw new Error("this is the wrong method to call!");
    }

    public abstract void applyValue(byte[] code);

    @Override
    public boolean isResolved() {
	throw new Error("this is the wrong method to call!");	
    }

    @Override
    public boolean isRelative() {
	return false;
    }

    @Override
    public int getValue() {
	throw new Error("this is the wrong method to call!");	
    }

    @Override
    public boolean isValueRelativeToCodeBase() {
	return false;
    }

    @Override
    public void initNCIndexRelative(int immediateNCIndex, int numBytes, int nextInstrNCIndex) {
	throw new Error("this is the wrong method to call!");
    }

    @Override
    public void initNCIndexAbsolute(int immediateNCIndex,  int numBytes) {
	throw new Error("this is the wrong method to call!");
    }
    
    @Override
    public void writeEntry(ExtendedDataOutputStream out) throws IOException {
	super.writeEntry(out);
    }
    
    @Override
    public String getDescription() {
	if (isResolved()) {
	    return super.getDescription()+",IntValueSTEntry="+getValue();
	} else {
	    return super.getDescription()+",IntValueSTEntry: unresolved";
	}
    }
}
