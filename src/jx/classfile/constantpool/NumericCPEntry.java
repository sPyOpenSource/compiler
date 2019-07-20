
package jx.classfile.constantpool; 

import java.io.*; 
import jx.classfile.datatypes.*; 
 
public class NumericCPEntry extends ConstantPoolEntry {
  private BCBasicDatatype value; 
  private int tag; 
 
  public NumericCPEntry() {}

  // die folgenden konstruktoren sollten auch noch argumente fuer die
  // adressen bekommen  
  
  // the dummy argument is required to distinguish the constructors 
  public NumericCPEntry(int value, int dummy) { 
    this.value = new BCInteger(value);
    tag = CONSTANT_INTEGER; 
  }

  public NumericCPEntry(float value) {
    this.value = new BCFloat(value);
    tag = CONSTANT_FLOAT; 
  }

  public NumericCPEntry(double value) { 
    this.value = new BCDouble(value);
    tag = CONSTANT_DOUBLE; 
  }
  public NumericCPEntry(long value) {
    this.value = new BCLong(value);
    tag = CONSTANT_LONG; 
  }
  
  public NumericCPEntry(int tag) {
    this.tag = tag; 
  }
  
  @Override
  public int getTag() {return tag;}

  @Override
  void readFromClassFile(DataInput input) throws IOException {
    switch(tag) {
    case CONSTANT_INTEGER: 
      value = new BCInteger(input.readInt()); 
      break; 
    case CONSTANT_FLOAT: 
      value = new BCFloat(input.readFloat()); 
      break; 
    case CONSTANT_LONG: 
      value = new BCLong(input.readLong()); 
      break; 
    case CONSTANT_DOUBLE: 
      value = new BCDouble(input.readDouble()); 
      break;
    }
  }

  @Override
    void readDummyValue(DataInput input) throws IOException {
	switch(tag) {
	case CONSTANT_INTEGER: 
	    value = new BCInteger(0); 
	    input.skipBytes(4);
	    break; 
	case CONSTANT_FLOAT: 
	    value = new BCFloat(0); 
	    input.skipBytes(4);
	    break; 
	case CONSTANT_LONG: 
	    value = new BCLong(0); 
	    input.skipBytes(8);
	    break; 
	case CONSTANT_DOUBLE: 
	    value = new BCDouble(0); 
	    input.skipBytes(8);
	    break;
	}	
    }

  public BCBasicDatatype value() {return value;}

  @Override
  public String getSimpleDescription() {
    return value.toString(); 
  }

  @Override
  public String getDescription() {
    return value.toString();
  }

  int getNumericValueAddress() { return 0;}
}
