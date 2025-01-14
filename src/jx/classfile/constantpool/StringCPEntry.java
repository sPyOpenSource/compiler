
package jx.classfile.constantpool; 

import java.io.*; 

public class StringCPEntry extends ConstantPoolEntry {
  private int stringCPIndex; 
  private UTF8CPEntry stringCPEntry; 
  private int stringObjectAddress; 
  
  public StringCPEntry() {}
  
  StringCPEntry(int stringCPIndex, int stringObjectAddress) {
    this.stringCPIndex = stringCPIndex; 
    this.stringObjectAddress = stringObjectAddress; 
  }

  // for metaXa interface, incomplete constructor (indices not initialized)   
  public StringCPEntry(UTF8CPEntry stringCPEntry) {
    this.stringCPEntry = stringCPEntry; 
    stringCPIndex = -1; // stringCPIndex must not be used, if the class is
			// initialized with this constructor 
  }

  @Override
  public int getTag() {return CONSTANT_STRING;}

  @Override
  void readFromClassFile(DataInput input) throws IOException {
    stringCPIndex = input.readUnsignedShort(); 
  }

  @Override
  void linkCPEntries(ConstantPool cPool) {
    stringCPEntry = (UTF8CPEntry)cPool.entryAt(stringCPIndex); 
  }

  @Override
  public String getSimpleDescription() {
    return String.valueOf(stringCPIndex); 
  }

  public String getStringObject(ConstantPool cPool) {
    return stringCPEntry.value(); 
  }

  public String value() {
    return stringCPEntry.value(); 
  }

  @Override
  public String getDescription(ConstantPool cPool, boolean withIndex) {
    if (withIndex) 
      return getIndexDescString(cPool, stringCPIndex); 
    else 
      return stringCPEntry.getDescription(cPool,true);
  }

  @Override
  public String getDescription() {
    return value();
  }

  int getStringObjectAddress() { return stringObjectAddress;}
}
