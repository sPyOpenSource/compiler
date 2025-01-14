
package jx.classfile.datatypes;

final public class BCInteger extends BCIntegerDatatype { 
  private final int value; 
  
  public BCInteger(int value) {this.value = value;}
  public int value() {return value;}
  @Override
  public long longValue() {return value;}
  @Override
  public String toString() {return String.valueOf(value); }
  @Override
  public int type() {return INT;}

  public static final BCInteger VALUE_M1 = new BCInteger(-1); 
  public static final BCInteger VALUE_0  = new BCInteger(0); 
  public static final BCInteger VALUE_1  = new BCInteger(1); 
  public static final BCInteger VALUE_2  = new BCInteger(2); 
  public static final BCInteger VALUE_3  = new BCInteger(3); 
  public static final BCInteger VALUE_4  = new BCInteger(4);
  public static final BCInteger VALUE_5  = new BCInteger(5); 

  @Override
  protected BCIntegerDatatype getObjectFor(long value) {
    return new BCInteger((int)value); 
  }
}
