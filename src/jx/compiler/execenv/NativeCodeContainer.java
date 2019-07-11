package jx.compiler.execenv;

import java.util.ArrayList;

public interface NativeCodeContainer {
    public BinaryCode getMachineCode();
    public ArrayList     getInstructionTable();
    public int        getLocalVarSize();
}
