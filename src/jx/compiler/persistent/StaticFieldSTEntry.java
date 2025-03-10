
package jx.compiler.persistent;

import java.io.*;

import jx.compiler.symbols.*;
import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.ExtendedDataInputStream;

public class StaticFieldSTEntry extends SymbolTableEntryBase {

    public final static int FIELD_OFFSET  = 0;
    public final static int LIB_INDEX     = 1;
    public final static int TOTAL_OFFSET  = 2;
    public final static int STACK_TOP_MAP = 3;

    String  className;
    int     stringID, kind, offset;
    boolean validID;

    public StaticFieldSTEntry() {}

    public StaticFieldSTEntry(String className, int offset) {
	this.className = className;
	this.offset    = offset;
	this.kind      = FIELD_OFFSET;
    }

    public StaticFieldSTEntry(String className, int kind, int offset) {
	this.className = className;
	this.kind      = kind;
	this.offset    = offset;
    }  
    
    @Override
    public String getDescription() {
	return super.getDescription() + ",StaticField:" + className + "." + offset;
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
      //out.writeString(className);
      if (!validID) throw new Error("invalid String ID");
      out.writeInt(stringID);
      out.writeInt(kind);
      out.writeInt(offset);
    }

    @Override
    public void readEntry(ExtendedDataInputStream in) throws IOException {
      super.readEntry(in);
      stringID = in.readInt();
      kind   = in.readInt();
      offset = in.readInt();
    }

    @Override
    public void registerStrings(StringTable stringTable) {
	stringID = stringTable.getIdentifier(className);
	validID  = true;
    }  
  
}
