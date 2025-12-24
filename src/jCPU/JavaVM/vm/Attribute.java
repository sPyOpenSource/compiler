package jCPU.JavaVM.vm;

import java.io.DataInputStream;
import java.io.IOException;
import jx.classfile.CodeData;
import jx.classfile.constantpool.ConstantPool;
import jx.classfile.constantpool.ConstantPoolEntry;
import jx.classfile.constantpool.InvalidConstantPoolIndex;
import jx.classfile.constantpool.UTF8CPEntry;

/**
 * Parses and stores the attributes from Java .class file'
 *
 * @author Deshan Dissanayake
 */

public class Attribute {

    /* Attribute info variables */
    private int attributeNameIndex;
    private int attributeLength;
    private byte[] info;

    /* Other local variables */
    private ConstantPoolEntry cpEntry;
    private UTF8CPEntry constantUtf8;
    private String attributeName;
    private CodeData codeAttribute;
    private SourceFileAttribute sourceFileAttribute;
    private SignatureAttribute signatureAttribute;

    public Attribute() {
    }

    public Attribute(DataInputStream dis, ConstantPool cp) throws IOException, InvalidConstantPoolIndex {

        /* Parsing  the attribute name */
        attributeNameIndex = dis.readUnsignedShort();
        cpEntry = cp.constantEntryAt(attributeNameIndex);
        if (cpEntry instanceof UTF8CPEntry uTF8CPEntry) {
            attributeName = uTF8CPEntry.value();
        }

        /* Parsing the attribute length */
        attributeLength = dis.readInt();

        /* Read only code attributes and discard others */
        switch (attributeName) {
            case "Code":
                codeAttribute = new CodeData(dis, cp);
                break;
            case "SourceFile":
                sourceFileAttribute = new SourceFileAttribute(dis, cp);
                break;
            case "Signature":
                signatureAttribute = new SignatureAttribute(dis, cp);
                break;
            default:
                dis.skip(attributeLength);
                break;
        }

    }

    /**
     * =======================================================================
     * Getters and Setters
     * =======================================================================
     */

    public long getAttributeLength() {
        return attributeLength;
    }

    public CodeData getCodeAttribute() {
        return codeAttribute;
    }

    public SourceFileAttribute getSourceFileAttribute() {
        return sourceFileAttribute;
    }

    public String getAttributeName() {
        return attributeName;
    }

    public SignatureAttribute getSignatureAttribute() {
        return signatureAttribute;
    }

}
