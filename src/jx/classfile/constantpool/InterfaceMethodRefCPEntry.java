
package jx.classfile.constantpool; 

public class InterfaceMethodRefCPEntry extends ClassMemberCPEntry {

  public InterfaceMethodRefCPEntry() {}
  
  public InterfaceMethodRefCPEntry(int classCPIndex, int nameAndTypeCPIndex) {
    super(classCPIndex, nameAndTypeCPIndex);
  } 

  // for metaXa interface, incomplete constructor (indices not initialized)   
  public InterfaceMethodRefCPEntry(ClassCPEntry classCPEntry, 
				   NameAndTypeCPEntry nameAndTypeCPEntry) {
    super(classCPEntry, nameAndTypeCPEntry); 
  }

  @Override
  public int getTag() {return CONSTANT_INTERFACEMETHODREF;}

  int getMethodIndex() {return 0;}
  int getInterfaceID() {return 0;}
} 
