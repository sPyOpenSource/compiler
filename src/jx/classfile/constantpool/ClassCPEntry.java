
package jx.classfile.constantpool; 

import java.io.*; 

public class ClassCPEntry extends ConstantPoolEntry {
  private int classNameCPIndex; 
  private UTF8CPEntry classNameCPEntry; 

  public ClassCPEntry() {}

  public ClassCPEntry(int classNameCPIndex) {
    this.classNameCPIndex = classNameCPIndex; 
  }
   
  // for metaXa interface, incomplete constructor (indices not initialized)   
  public ClassCPEntry(UTF8CPEntry classNameCPEntry) {
    classNameCPIndex = -1; 
    this.classNameCPEntry = classNameCPEntry; 
  }

  @Override
  public int getTag() {return CONSTANT_CLASS;}

  @Override
  void readFromClassFile(DataInput input) throws IOException {
    classNameCPIndex = input.readUnsignedShort(); 
  }  

  @Override
  public void linkCPEntries(ConstantPool cPool) {
    classNameCPEntry = (UTF8CPEntry)cPool.entryAt(classNameCPIndex); 
  }

  @Override
  public String getSimpleDescription() {
    return String.valueOf(classNameCPIndex); 
  }
  
  public String getClassName() {
    return classNameCPEntry.value(); 
  }
 
  @Override
  public String getDescription(ConstantPool cPool, boolean withIndex) {
    if (withIndex) 
      return getIndexDescString(cPool, classNameCPIndex); 
    else 
      return classNameCPEntry.getDescription(cPool,true); 
  }

  @Override
  public String getDescription() {
    return getClassName();
  }

  public int getClassNameAddress() {
    return classNameCPEntry.getStringAddress();
  }

  int getStaticDataAddress() {return 0;}
  private int getClassID() { return 0; }
}
