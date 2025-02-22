package jx.compiler.symbols;

import jx.compiler.execenv.*;

import java.util.*;
import java.io.IOException;


public class StringTable {

    ArrayList<String> strings;

    public StringTable() {
	strings = new ArrayList<>();
	//strings.addElement("STRING-TABLE:");
	strings.add("java/lang/Object");
    }

    public void register(String str) {
	getIdentifier(str);
    }

    public int getIdentifier(String str) {
	int i;
	for (i = 0; i < strings.size(); i++) {
	    String e = strings.get(i);
	    if (e.equals(str)) return i;
	}
	strings.add(str);
	return i;
    }

    public String getString(int id) {
	return strings.get(id);
    }
    
    public void writeStringTable(ExtendedDataOutputStream out) throws IOException {
	int number = strings.size();
        for(String str:strings) number += str.length();
        
	//out.writeInt(number+1);
	out.writeInt(number);
	for (int i = 0; i < strings.size(); i++) {
	    String str = strings.get(i);
	    /*
	    if (str.equals("STRING-TABLE:")) {
		out.writeString("STRING-TABLE: size = "+number);
		continue;
	    } else {
	    */
	    out.writeString(str);
            //out.writeByte((byte)0);
	}
	//out.writeString("END OF STRING-TABLE");
    }

    public void writeStringID(ExtendedDataOutputStream out, String str) throws IOException {
	int number = strings.size();
	for (int i = 0; i < number; i++) {
	    String e = strings.get(i);
	    if (e.equals(str)) {
		out.writeInt(i);
		return;
	    }
	}
	throw new Error("invalid String ID");
    }
}
