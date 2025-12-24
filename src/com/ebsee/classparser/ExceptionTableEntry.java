package com.ebsee.classparser;

import java.io.DataInputStream;
import java.io.IOException;

/**
 * @author Deshan Dissanayake
 */
public class ExceptionTableEntry extends Exception{
    
    private final int startPC;
    private final int endPC;
    private final int handlerPC;
    private final int catchType;

    public ExceptionTableEntry(DataInputStream dis) throws IOException {
        startPC = dis.readUnsignedShort();
        endPC = dis.readUnsignedShort();
        handlerPC = dis.readUnsignedShort();
        catchType = dis.readUnsignedShort();
    }

}
