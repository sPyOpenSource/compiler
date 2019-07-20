package jx.compiler.persistent;

import java.io.*;

import jx.compiler.symbols.SymbolTableEntryBase; 
import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.ExtendedDataInputStream;

public class DEPFunctionSTEntry extends SymbolTableEntryBase {
   
    String className, methodName, methodSignature;

    public DEPFunctionSTEntry() {}
    public DEPFunctionSTEntry(String className, String methodName, String methodSignature) {
	this.className = className;
	this.methodName = methodName;
	this.methodSignature = methodSignature;
    }
    
    @Override
    public String getDescription() {
	return super.getDescription()+",DEP:"+className+ "."+ methodName+ methodSignature;
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
	out.writeString(className);
	out.writeString(methodName);
	out.writeString(methodSignature);
    }
    
    @Override
    public void readEntry(ExtendedDataInputStream in) throws IOException {
	super.readEntry(in);
	className = in.readString();
	methodName = in.readString();
	methodSignature = in.readString();
    }
}
