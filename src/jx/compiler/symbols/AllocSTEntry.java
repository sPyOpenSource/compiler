
package jx.compiler.symbols; 

import jx.compiler.imcode.MethodStackFrame;

/** 

*/
public class AllocSTEntry extends IntValueSTEntry {

    private final MethodStackFrame frame;

    public AllocSTEntry(MethodStackFrame frame) {
	this.frame = frame;
    }

    @Override
    public void applyValue(byte[] code) {
	insertInteger(code,frame.getStackFrameSize());
    }

    @Override
    public boolean isResolved() {
	return true;
    }

    @Override
    public int getValue() {
	return frame.getStackFrameSize();
    }
    
}
