
package jx.compspec;

import java.io.*;
import java.util.ArrayList;

public class MetaReader {
    String[] compdirs;

    public MetaReader(String[] compdirs) {
	this.compdirs = new String[compdirs.length];
	for(int i = 0; i < compdirs.length; i++) {
	    this.compdirs[i] = compdirs[i].trim();
	}
    }

    public void addMeta(ArrayList v, String l) throws IOException {
        for (String compdir : compdirs) {
            String filename = compdir + "/" + l.trim();
            RandomAccessFile file;
            try {
                file = new RandomAccessFile(filename + "/META", "r");
            } catch (FileNotFoundException ex) {
                continue;
            }
            byte [] data = new byte[(int)file.length()];
            file.readFully(data);
            MetaInfo s = new MetaInfo(filename, data);
            v.add(s);
            return;
        }
    }
}
