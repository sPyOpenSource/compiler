
package jx.classfile.datatypes; 

final public class BCShort extends BCIntegerDatatype {
    private final short value; 

    public BCShort(short value) {this.value = value;}
    public short value() {return value;}
    @Override
    public long longValue() {return value;}
    @Override
    public String toString() {return String.valueOf(value); }
    @Override
    public int type() {return SHORT;}

    @Override
    protected BCIntegerDatatype getObjectFor(long value) {
        return new BCShort((short)value); 
    }
}
