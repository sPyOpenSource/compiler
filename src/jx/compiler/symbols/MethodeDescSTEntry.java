package jx.compiler.symbols;

import java.io.*;  
import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.ExtendedDataInputStream;

public class MethodeDescSTEntry extends SymbolTableEntryBase {

    @Override
    public String getDescription() {
	return super.getDescription()+",MethodeDescSTEntry";
    }
    
    @Override
    public int getValue() {
	return 0;
    }
    
    @Override
    public void apply(byte[] code, int codeBase) {
	throw new Error();
    }

    @Override
    public String toGASFormat() {
	return "0x"+Integer.toHexString(getValue());
    }

    @Override
  public void writeEntry(ExtendedDataOutputStream out) throws IOException {
      super.writeEntry(out);
  }

    @Override
  public void readEntry(ExtendedDataInputStream in) throws IOException {
      super.readEntry(in);
  }
}
