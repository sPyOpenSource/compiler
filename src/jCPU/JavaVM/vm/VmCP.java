
package jCPU.JavaVM.vm;

/*
 * $Id$
 *
 * Copyright (C) 2003-2015 JNode.org
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public 
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; If not, write to the Free Software Foundation, Inc., 
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
 
/**
 * A VmCP is the runtime representation of a constant pool
 *
 * @author Ewout Prangsma (epr@users.sourceforge.net)
 */

public final class VmCP {
    public static final int TYPE_UTF8 = 1;
    public static final int TYPE_INT = 3;
    public static final int TYPE_FLOAT = 4;
    public static final int TYPE_LONG = 5;
    public static final int TYPE_DOUBLE = 6;
    public static final int TYPE_CLASSREF = 7;
    public static final int TYPE_STRING = 8;
    public static final int TYPE_FIELDREF = 9;
    public static final int TYPE_METHODREF = 10;
    public static final int TYPE_IMETHODREF = 11;
    public static final int TYPE_NAMEANDTYPE = 12;

    private final Object[] cp;

    private final int used;

    /**
     * Construct a new VmCP with a given number of entries
     *
     * @param count
     */
    public VmCP(int count, byte[] file) {
        this.cp = new Object[count];
        this.used = count;
        for(int i = 0; i < count; i++){
            System.out.println(file[10 + i]);
            if(file[10 + i] == TYPE_METHODREF) i += 4;
            if(file[10 + i] == TYPE_CLASSREF) i += 2;
            if(file[10 + i] == TYPE_NAMEANDTYPE) i += 4;
            if(file[10 + i] == TYPE_UTF8) i += 2 + (file[10 + i + 1] & 0xff) << 8 | (file[10 + i + 2] & 0xff);
        }
    }

    /**
     * Gets the number of enntries in this CP
     *
     * @return int
     */
    public int getLength() {
        return cp.length;
    }

    /**
     * Read an int out of this CP
     *
     * @param index The index where to read
     * @return int
     */
    public int getInt(int index) {
        if (index == 0)
            return 0;
        else
            return ((Integer) get(index));
    }

    /**
     * Write an int into this CP
     *
     * @param index The index where to read
     * @param data  The int to write
     */
    protected void setInt(int index, int data) {
        set(index, data);
    }

    /**
     * Read a long out of this CP
     *
     * @param index The index where to read
     * @return long
     */
    public long getLong(int index) {
        return ((Long) get(index));
    }

    /**
     * Write a long into this CP
     *
     * @param index The index where to read
     * @param data  The long to write
     */
    protected void setLong(int index, long data) {
        set(index, data);
    }

    /**
     * Read a float out of this CP
     *
     * @param index The index where to read
     * @return float
     */
    public float getFloat(int index) {
        return ((Float) get(index));
    }

    /**
     * Write a float into this CP
     *
     * @param index The index where to read
     * @param data  The float to write
     */
    protected void setFloat(int index, float data) {
        set(index, data);
    }

    /**
     * Read a double out of this CP
     *
     * @param index The index where to read
     * @return double
     */
    public double getDouble(int index) {
        return (Double) get(index);
    }

    /**
     * Write a double into this CP
     *
     * @param index The index where to read
     * @param data  The double to write
     */
    protected void setDouble(int index, double data) {
        set(index, data);
    }

    protected String getUTF8(int index) {
        return (String) get(index);
    }

    /*protected void setUTF8(int index, String value) {
        set(index, InternString.internString(value));
    }*/

    public VmConstString getString(int index) {
        return (VmConstString) get(index);
    }

    protected void setString(int index, VmConstString value) {
        set(index, value);
    }

    public VmConstClass getConstClass(int index) {
        return (VmConstClass) get(index);
    }

    protected void setConstClass(int index, VmConstClass value) {
        set(index, value);
    }

    public VmConstFieldRef getConstFieldRef(int index) {
        return (VmConstFieldRef) get(index);
    }

    protected void setConstFieldRef(int index, VmConstFieldRef value) {
        set(index, value);
    }

    public VmConstMethodRef getConstMethodRef(int index) {
        return (VmConstMethodRef) get(index);
    }

    protected void setConstMethodRef(int index, VmConstMethodRef value) {
        set(index, value);
    }

    public VmConstIMethodRef getConstIMethodRef(int index) {
        return (VmConstIMethodRef) get(index);
    }

    protected void setConstIMethodRef(int index, VmConstIMethodRef value) {
        set(index, value);
    }

    public final Object getAny(int index) {
        return get(index);
    }

    /**
     * Gets the index of a constant in this CP, or -1 if not found.
     *
     * @param object
     * @return int
     */
    public final int indexOf(Object object) {
        for (int i = 0; i < used; i++) {
            final Object o = cp[i];
            if ((o != null) && (o.equals(object))) {
                return i;
            }
        }
        return -1;
    }

    /**
     * Read an Object out of this CP
     *
     * @param index The index where to read
     * @return Object
     */
    private Object get(int index) {
        return cp[index];
    }

    /**
     * Write an Object into this CP
     *
     * @param index The index where to read
     * @param data  The Object to write
     */
    private void set(int index, Object data) {
        if (data == null) {
            throw new NullPointerException(
                "Cannot set a null data");
        }
        cp[index] = data;
    }

    final void reset(int index) {
        cp[index] = null;
    }
}
