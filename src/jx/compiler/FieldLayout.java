package jx.compiler;

import jx.zero.*;
import java.util.*;
import java.io.IOException;
import jx.compiler.execenv.*;
import jx.compiler.symbols.StringTable;

/**
 * All fields consume 4 bytes, double and long 8 bytes
 */
class FieldDescription {
    private final String fieldName;
    private final String fieldType;
    private final int offset; // in words
    FieldDescription(String fieldName, String fieldType, int offset) {
	this.fieldName = fieldName;
	this.fieldType = fieldType;
	this.offset = offset;
    }
    public String getFieldName() { return fieldName; }
    public String getFieldType() { return fieldType; }
    public int getOffset() { return offset; }
}

public final class FieldLayout {
    int numWords;
    ArrayList fields = new ArrayList();
    HashMap fieldFinder = new HashMap();

    public FieldLayout() {
	numWords = 0;
    }

    public void addFields(FieldLayout l) {
	//System.out.println("Adding from superclass:");
	for(int i = 0; i < l.fields.size(); i++) {
	    FieldDescription field = (FieldDescription)l.fields.get(i);
	    //System.out.println("  " + field.getFieldName() + " " + field.getFieldType());
	    addField(new FieldDescription(field.getFieldName(), field.getFieldType(), numWords));
	}
    }

    public void addField(String fieldName, String fieldType) {
	FieldDescription field = new FieldDescription(fieldName, fieldType, numWords);
	addField(field);
    }

    // returns field offset in words
    public int getFieldOffset(String fieldName) {
	FieldDescription field = (FieldDescription) fieldFinder.get(fieldName);
	if (field == null) {
	    System.out.println("FieldLayout::getFieldOffset field==null: " + fieldName);
	    return -1;
	}

	return field.getOffset();
    }

    public int wordsNeeded() {
	return numWords;
    }

    private void addField(FieldDescription field) {
	if (field.getFieldType().equals("D") || field.getFieldType().equals("J")) {
	    numWords += 2;
	} else {
	    numWords += 1;
	}
	fieldFinder.put(field.getFieldName(), field);
	fields.add(field);
    }

    public void  dump() {
	for(int i = 0; i < fields.size(); i++) {
	    FieldDescription f = (FieldDescription)fields.get(i);
	    Debug.out.println("    " + f.getOffset() + " " + f.getFieldName() + " " + f.getFieldType());
	}
    }

    public void writeFieldMap(ExtendedDataOutputStream out)  throws IOException {
	boolean[] map = new boolean[numWords];
	Enumeration fl = Collections.enumeration(fields);
	for(int i = 0; i < numWords; i++) {
	    FieldDescription f = (FieldDescription)fl.nextElement();
	    String t = f.getFieldType();
	    if (t.charAt(0) == 'J' || t.charAt(0) == 'D') {
		// long or double
		i++;
	    } else if (t.charAt(0) == 'L' || t.charAt(0) == '[') {
		// object reference or array reference
		if (f.getOffset() >= numWords) {
		    Debug.out.println("*** WARNING ***: f.getOffset() >= numWords in FieldLayout.writeFieldMap");
		    throw new Error();
		} else {
		    map[f.getOffset()] = true;
		}
	    }
	    //System.out.println("TYPE:" + t);
	}
        TypeMap.writeMap(out, map, false);
    }

    public static FieldLayout readMap(ExtendedDataInputStream in)  throws IOException {
	int nBytes = in.readInt();
	for(int i = 0; i < nBytes; i++) {
	    in.readByte();
	}
	return null;
    }

    public void registerStrings(StringTable strTable) {
	for(int i = 0; i < fields.size(); i++) {
	    FieldDescription field = (FieldDescription)fields.get(i);
	    strTable.register(field.getFieldName());
	    strTable.register(field.getFieldType());
	}
    }

    public void writeFieldList(ExtendedDataOutputStream out, StringTable strTable)  throws IOException {
	out.writeInt(fields.size());
	for(int i = 0; i < fields.size(); i++) {
	    FieldDescription field = (FieldDescription)fields.get(i);
	    //out.writeString(field.getFieldName());
	    //out.writeString(field.getFieldType());
	    strTable.writeStringID(out, field.getFieldName());
	    strTable.writeStringID(out, field.getFieldType());
	    out.writeInt(field.getOffset());
	}
    }
}
