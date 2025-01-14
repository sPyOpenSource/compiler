
package jx.classfile.constantpool; 

import java.io.*; 

public class DummyCPEntry extends ConstantPoolEntry {
  
  @Override
  public int getTag() {return -1;}
  
  @Override
  void readFromClassFile(DataInput input) throws IOException {
  }

  @Override
  public String getSimpleDescription() { return "NoValue";}
  
}
