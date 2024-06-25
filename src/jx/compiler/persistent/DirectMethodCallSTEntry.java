
package jx.compiler.persistent;

import java.io.*;

import jx.compiler.symbols.SymbolTableEntryBase; 
import jx.compiler.symbols.StringTable;
import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.ExtendedDataInputStream;

public class DirectMethodCallSTEntry extends SymbolTableEntryBase {

    String className, methodName, methodSignature;
    int classID, methodID, sigID;
    boolean validID;
   
    public DirectMethodCallSTEntry() {}

    public DirectMethodCallSTEntry(String className, String methodName, String methodSignature) {
	this.className = className;
	this.methodName = methodName;
	this.methodSignature = methodSignature;
    }
    
    @Override
    public String getDescription() {
	return super.getDescription()+",DirectMethodCall";
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
	/*
	out.writeString(className);
	out.writeString(methodName);
	out.writeString(methodSignature);
	*/
	if (!validID) throw new Error("invalid String ID");
	out.writeInt(classID);
	out.writeInt(methodID);
	out.writeInt(sigID);
    }
    
    @Override
    public void readEntry(ExtendedDataInputStream in) throws IOException {
	super.readEntry(in);
	className = in.readString();
	methodName = in.readString();
	methodSignature = in.readString();
    }    

    @Override
    public void registerStrings(StringTable stringTable) {
	classID = stringTable.getIdentifier(className);
	methodID = stringTable.getIdentifier(methodName);
	sigID   = stringTable.getIdentifier(methodSignature);	
	validID  = true;
    }
    
}
