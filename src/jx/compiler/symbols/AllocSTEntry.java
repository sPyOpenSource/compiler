package jx.compiler.symbols; 

import jx.compiler.imcode.MethodStackFrame;

/** 

*/ 

public class AllocSTEntry extends IntValueSTEntry {

    private MethodStackFrame frame;

    public AllocSTEntry(MethodStackFrame frame) {
	this.frame = frame;
    }

    public void applyValue(byte[] code) {
	insertInteger(code,frame.getStackFrameSize());
    }

    public boolean isResolved() {
	return true;
    }

    public int getValue() {
	return frame.getStackFrameSize();
    }
}
