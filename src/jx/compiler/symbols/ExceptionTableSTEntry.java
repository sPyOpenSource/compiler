
package jx.compiler.symbols;

import java.io.IOException;
import jx.zero.Debug;

import jx.compiler.execenv.ExtendedDataOutputStream;

import jx.classfile.ExceptionHandlerData;
import jx.classfile.constantpool.*;
import jx.compiler.execenv.ExtendedDataInputStream;

public class ExceptionTableSTEntry extends UnresolvedJump {
    ExceptionHandlerData handler;    
    String  className;
    int     stringID;
    boolean validID;
    
    public ExceptionTableSTEntry() {}

    public ExceptionTableSTEntry(ConstantPool cPool, ExceptionHandlerData handler) {
	int cpIndex = handler.getCatchTypeCPIndex();	
	this.handler = handler;

	if (cpIndex == 0) {
	    this.className = "any";
	} else {
	    this.className = cPool.classEntryAt(cpIndex).getClassName();
	}
    }

    @Override
    public String getDescription() {
	return super.getDescription() + ",symbols.ExceptionTableSTEntry";
    }
    
    @Override
    public boolean isResolved() {
	return false;
    }

    @Override
    public int getValue() {
	Debug.throwError();
	return 0;
    }

    @Override
    public void apply(byte[] code, int codeBase) {
	Debug.throwError();
    }

    @Override
    public void writeEntry(ExtendedDataOutputStream out) throws IOException {
	super.writeEntry(out);
	out.writeInt(handler.getStartBCIndex());
	out.writeInt(handler.getEndBCIndex());
	if (!validID) throw new Error("invalid String ID");
	out.writeInt(stringID);
    }
    
    @Override
    public void readEntry(ExtendedDataInputStream in) throws IOException {
        super.readEntry(in);
        in.readInt();
        in.readInt();
        stringID = in.readInt();
    }

    @Override
    public void registerStrings(StringTable stringTable) {
	stringID = stringTable.getIdentifier(className);
	validID  = true;
    }
}
