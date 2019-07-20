package jx.compiler.symbols; 

import jx.compiler.imcode.MethodStackFrame;

/** 

*/ 

public class MaxFrameSizeSTEntry extends IntValueSTEntry {

    private MethodStackFrame frame;

    public MaxFrameSizeSTEntry(MethodStackFrame frame) {
	this.frame = frame;
    }

    public void apply(byte[] code, int codeBase) {
	myApplyValue(code, frame.getMaxFrameSize()); 
    }

    public void applyValue(byte[] code) {
	insertInteger(code,frame.getMaxFrameSize());
    }

    public boolean isResolved() {
	return true;
    }

    public int getValue() {
	return frame.getMaxFrameSize();
    }
}
