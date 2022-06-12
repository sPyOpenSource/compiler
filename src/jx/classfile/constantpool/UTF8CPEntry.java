
package jx.classfile.constantpool;

import java.io.*; 

public class UTF8CPEntry extends ConstantPoolEntry {
  private String value;
  private int stringAddress;
  
  public UTF8CPEntry() {}

  public UTF8CPEntry(String value, int stringAddress) {
    this.value = value;
    this.stringAddress = stringAddress;
  }

  public UTF8CPEntry(String value) {
    this.value = value;
    this.stringAddress = 0;
  }

  @Override
  public int getTag() {return CONSTANT_UTF8;}
  
  @Override
  void readFromClassFile(DataInput input) throws IOException {
    value = input.readUTF();
  }

  public String value() {return value;}

  @Override
  public String getSimpleDescription() {
    return value;
  }

  @Override
  public String getDescription(ConstantPool cPool, boolean withIndex) {
    return "\"" + getSimpleDescription() + "\"";
  }

  @Override
  public String getDescription() {
    return "\"" + value + "\"";
  }

  int getStringAddress() {return stringAddress;}
}
