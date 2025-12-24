package jCPU.JavaVM.vm;

import java.io.DataInputStream;
import java.io.IOException;
import jx.classfile.constantpool.ConstantPool;
import jx.classfile.constantpool.InvalidConstantPoolIndex;

public class SourceFileAttribute extends Attribute {
    String sourceFileName;

    public SourceFileAttribute(DataInputStream dis, ConstantPool cp) throws IOException, InvalidConstantPoolIndex {
        int sfutfIndex = dis.readUnsignedShort();
        //ConstantPoolEntry entry = cp.getEntry(sfutfIndex);
        //UTF8CPEntry utfe = (UTF8CPEntry) entry;
        sourceFileName = cp.getUTF8StringAt(sfutfIndex);
    }

    public String getSourceFileName() {
        return sourceFileName;
    }

}