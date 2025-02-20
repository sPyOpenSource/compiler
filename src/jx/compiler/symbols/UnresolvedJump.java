package jx.compiler.symbols; 

import jx.zero.Debug;
import java.io.IOException;
import jx.compiler.execenv.ExtendedDataOutputStream;

/** 
    A class for internal jumps. The target 
    is always inside the method. . 
*/ 
public class UnresolvedJump extends InternalAddrSTEntry {

    int bcPosition = 0;

    public void setBCPosition(int pos) {
        bcPosition = pos;
    }
  
    public void setJump(int nextInstrNCIndex, int immediateNCIndex) {
        //Debug.throwError("SETJUMP");
        initNCIndexRelative(immediateNCIndex, 4, nextInstrNCIndex); 
    }

    @Override
    public String getDescription() {
	if (isResolved()) {
	    return super.getDescription()+",UnresolvedJump="+getValue();
	} else {
	    return super.getDescription()+",UnresolvedJump: unresolved";
	}
    }

    @Override
    public void apply(byte[] code, int codeBase) {
	//Debug.out.print("UNRESOLVEDJUMP::apply ");
	myApplyValue(code, targetNCIndex); 
    }

    @Override
    public String toGASFormat() {
	return ".L" + targetNCIndex;
    }

    @Override
    public void initNCIndexRelative(int immediateNCIndex, int numBytes, int nextInstrNCIndex) {
	Debug.throwError("this is the wrong method to call!");
    }

    @Override
    public void initNCIndexAbsolute(int immediateNCIndex,  int numBytes) {
        Debug.throwError("this is the wrong method to call!");
    }

    @Override
    public void writeEntry(ExtendedDataOutputStream out) throws IOException {
      super.writeEntry(out);
    }

    @Override
    public void dump() {
	Debug.out.println(" UnresolvedJump");
	Debug.out.println(" Bytecode : "+bcPosition);
	super.dump();
    }
    
}
