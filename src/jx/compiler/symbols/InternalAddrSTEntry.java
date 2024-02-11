
package jx.compiler.symbols; 

import jx.zero.Debug;
import jx.compiler.execenv.ExtendedDataOutputStream;
import java.io.IOException;

/** 
   for jumps with target inside of this method 
*/ 
public class InternalAddrSTEntry extends SymbolTableEntryBase {
  protected int targetNCIndex=-1; 
    // this entry is resolved when targetNCIndex and nextInstrNCIndex are known

  public InternalAddrSTEntry() {
    targetNCIndex = -1; 
  }

  @Override
    public String getDescription() {
	return super.getDescription()+",nativecode.InternalAddr="+targetNCIndex;
    }

  @Override
  public boolean isResolved() {
      if (! isRelative()) return false; /* needs codebase */
      return ((targetNCIndex != -1) && (getNextInstrNCIndex() != -1));
  }

  @Override
  public int getValue() {
    //Debug.assert(isResolved()); 
    return targetNCIndex;
  }

  @Override
  public boolean isValueRelativeToCodeBase() {
    return true; 
  }

  public void setTargetNCIndex(int ncIndex) {
    targetNCIndex = ncIndex;
  }

  @Override
  public void apply(byte[] code, int codeBase) {
    //Debug.assert(isReadyForApply());
    applyValue(code, codeBase, targetNCIndex + codeBase); 
    Debug.out.println("InternalAddrSTEntry::apply "+(targetNCIndex + codeBase));
  }

  public void applyRelative(byte[] code) {
    //Debug.assert(isReadyForApply());
    applyRelativeValue(code, targetNCIndex); 
    Debug.out.println("InternalAddrSTEntry::applyRelative "+targetNCIndex);
  }

  @Override
  protected void insertInteger(byte[] code, int ncIndex,
				      int value, int numBytes) {
      //Debug.out.println("InternalAddrSTEntry::insertInteger "+value);
      super.insertInteger(code, ncIndex, value, numBytes);
  }

  @Override
  public void writeEntry(ExtendedDataOutputStream out) throws IOException {
      super.writeEntry(out);
      out.writeInt(targetNCIndex);
  }


  @Override
    public void dump() {
	super.dump();
	Debug.out.println(" InternalAddrSTEntry");
	Debug.out.println("  targetNCIndex: "+ targetNCIndex);
    }
}
