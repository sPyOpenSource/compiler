package jx.formats;

import java.io.*;

/**
 * Writes numbers in little endian format.
 * Writes strings by first writing the stringlength and
 * then the *bytes* of the string (no unicode support up to now)
 */
public class LittleEndianOutputStream extends FilterOutputStream {

    int checksum;
    boolean doChecksum = true;
    String path;

    public LittleEndianOutputStream(String path) throws FileNotFoundException {
        super(new BufferedOutputStream(new FileOutputStream(path)));
        this.path = path;
    }

    public final void writeByte(byte v) throws IOException {
	write(v);
    }
    public final void writeShort(short v) throws IOException {
	write((v)        & 0xFF);
	write((v >>> 8)  & 0xFF);
    }
    public final void writeInt(int v) throws IOException {
	write((v)        & 0xFF);
	write((v >>> 8)  & 0xFF);
	write((v >>> 16) & 0xFF);
	write((v >>> 24) & 0xFF);
    }

    public final void writeString(String s) throws IOException {
	int len = s.length();
	char[] buf = new char[len];
	s.getChars(0, len, buf, 0);
	//writeInt(len);
	for (int i = 0; i < len; i++) {
	    write(buf[i] & 0xff); // truncate character to byte
	}
        write(0);
    }

    public final void writeChecksum() throws IOException {
	doChecksum = false;
	//jx.zero.Debug.out.println("CHECKSUM: "+checksum);
	writeInt(checksum);
    }

    @Override
    public void write(int b) throws IOException {
	if (doChecksum) checksum = (checksum ^ b) & 0xff;
	super.write(b);
    }
    
    @Override
    public String toString(){
        return path;
    }
}
