package jx.compiler.symbols;

import java.io.*;  
import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.ExtendedDataInputStream;

public class ProfileSTEntry extends SymbolTableEntryBase {

    public final static int EVENT_DATA     = 0;
    public final static int EVENT_COUNTER  = 1;
    public final static int EVENT_MAX      = 2;
    public final static int EVENT_AUTOID   = 3;
    public final static int PROFILE_CALL   = 4;
    public final static int PROFILE_OFFSET = 5;
    public final static int PROFILE_TRACE  = 6;

    String className;
    int kind;

    public ProfileSTEntry() {}

    public ProfileSTEntry(int kind) {
	this.kind = kind;
    }

    @Override
    public String getDescription() {
	return super.getDescription()+",ProfileSTEntry";
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
      out.writeInt(kind);
  }

    @Override
  public void readEntry(ExtendedDataInputStream in) throws IOException {
      super.readEntry(in);
      kind   = in.readInt();
  }
}
