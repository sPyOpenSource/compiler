
package jx.classfile.constantpool; 

import java.io.*; 

public class DummyCPEntry extends ConstantPoolEntry {
  
  public int getTag() {return -1;}
  
  void readFromClassFile(DataInput input) throws IOException {
  }

  public String getSimpleDescription() { return "NoValue";}
}
