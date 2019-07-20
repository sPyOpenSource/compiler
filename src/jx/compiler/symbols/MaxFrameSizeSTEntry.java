package jx.compiler.symbols; 

import jx.compiler.imcode.MethodStackFrame;

/** 

*/ 

public class MaxFrameSizeSTEntry extends IntValueSTEntry {

    private final MethodStackFrame frame;

    public MaxFrameSizeSTEntry(MethodStackFrame frame) {
	this.frame = frame;
    }

    @Override
    public void apply(byte[] code, int codeBase) {
	myApplyValue(code, frame.getMaxFrameSize()); 
    }

    @Override
    public void applyValue(byte[] code) {
	insertInteger(code,frame.getMaxFrameSize());
    }

    @Override
    public boolean isResolved() {
	return true;
    }

    @Override
    public int getValue() {
	return frame.getMaxFrameSize();
    }
}
