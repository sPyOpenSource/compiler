package jCPU.JavaVM.vm;

import java.io.DataInputStream;
import java.io.IOException;
import jx.classfile.constantpool.ConstantPool;
import jx.classfile.constantpool.InvalidConstantPoolIndex;

public class SignatureAttribute extends Attribute {
    String signature;

    public SignatureAttribute(DataInputStream dis, ConstantPool cp) throws IOException, InvalidConstantPoolIndex {
        int sfutfIndex = dis.readUnsignedShort();
        //ConstantPoolEntry entry = cp.getEntry(sfutfIndex);
        //UTF8CPEntry utfe = (UTF8CPEntry) entry;
        signature = cp.getUTF8StringAt(sfutfIndex);
    }

    public String getSignature() {
        return signature;
    }

}