
package jx.classfile.datatypes;   

final public class BCReference extends BCBasicDatatype {
  private final int value; 

  public BCReference(int value) {this.value = value;}
  public int value() {return value;}
  @Override
  public String toString() {
    if (value == 0) 
      return "NULL"; 
    else 
      return "Ref:"+String.valueOf(value); 
  }
  @Override
  public int type() {return REFERENCE;}

  public static final BCReference NULL = new BCReference(0); 
}
