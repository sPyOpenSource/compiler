
package jx.classfile.datatypes; 

final public class BCLong extends BCIntegerDatatype {
  private final long value; 
  
  public BCLong(long value) {this.value = value;}
  public long value() {return value;}
  @Override
  public long longValue() {return value;}
  @Override
  public int type() {return LONG;}

  @Override
  public String toString() {return String.valueOf(value); }

  public static final BCLong VALUE_0 = new BCLong(0); 
  public static final BCLong VALUE_1 = new BCLong(1); 

  @Override
  protected BCIntegerDatatype getObjectFor(long value) {
    return new BCLong(value); 
  }
}
