
package jx.classfile.datatypes; 

final public class BCByte extends BCIntegerDatatype {
  private final byte value; 

  public BCByte(byte value) {this.value = value;}
  public byte value() {return value;}
  @Override
  public long longValue() {return value;}
  @Override
  public String toString() {return String.valueOf(value); }
  @Override
  public int type() {return BYTE;}

  @Override
  protected BCIntegerDatatype getObjectFor(long value) {
    return new BCByte((byte)value); 
  }
}
