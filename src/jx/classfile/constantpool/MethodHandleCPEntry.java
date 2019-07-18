/*
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *      https://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */
package jx.classfile.constantpool;

import java.io.DataInput;
import java.io.IOException;

/**
 * A MethodHandle CP Info
 *
 */
public class MethodHandleCPEntry extends ConstantPoolEntry {
    private ConstantPoolEntry reference;

    /** reference kind **/
    private ReferenceKind referenceKind;
    /** Must be a valid index into the constant pool table. */
    private int referenceIndex;

    @Override
    public int getTag() {return CONSTANT_METHODHANDLE;}

    @Override
    public String getSimpleDescription() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    public enum ReferenceKind {
        REF_getField,
        REF_getStatic,
        REF_putField,
        REF_putStatic,
        REF_invokeVirtual,
        REF_invokeStatic,
        REF_invokeSpecial,
        REF_newInvokeSpecial,
        REF_invokeInterface;

        public int value() {
            return ordinal() + 1;
        }
    }

    /** Constructor. */
    public MethodHandleCPEntry() {
        //super(CONSTANT_METHODHANDLE, 1);
    }

    /**
     * read a constant pool entry from a class stream.
     *
     * @param cpStream the DataInputStream which contains the constant pool
     *      entry to be read.
     * @exception IOException if there is a problem reading the entry from
     *      the stream.
     */
    @Override
    public void readFromClassFile(DataInput cpStream) throws IOException {
        referenceKind = ReferenceKind.values()[cpStream.readUnsignedByte() - 1];
        referenceIndex = cpStream.readUnsignedShort();
    }

    /**
     * Print a readable version of the constant pool entry.
     *
     * @return the string representation of this constant pool entry.
     */
    /*@Override
    public String toString() {
        if (isResolved()) {
            return "MethodHandle : " + reference.toString();
        }
        return "MethodHandle : Reference kind = " + referenceKind
            + "Reference index = " + referenceIndex;
    }*/

    /**
     * Resolve this constant pool entry with respect to its dependents in
     * the constant pool.
     *
     * @param constantPool the constant pool of which this entry is a member
     *      and against which this entry is to be resolved.
     */
    /*@Override
    public void resolve(ConstantPool constantPool) {
        reference = constantPool.getEntry(referenceIndex);
        reference.resolve(constantPool);
        super.resolve(constantPool);
    }*/

}
