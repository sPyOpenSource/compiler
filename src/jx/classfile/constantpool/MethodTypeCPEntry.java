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
 * A Method Type CP Info
 *
 */
public class MethodTypeCPEntry extends ConstantPoolEntry {
    /** Index into the constant pool for the class */
    private int methodDescriptorIndex;
    /** the value of the method descriptor pointed to */
    private String methodDescriptor;

    /** Constructor.  */
    public MethodTypeCPEntry() {
        //super(CONSTANT_METHODTYPE, 1);
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
    public void readFromClassFile(final DataInput cpStream) throws IOException {
        methodDescriptorIndex = cpStream.readUnsignedShort();
    }

    /**
     * Resolve this constant pool entry with respect to its dependents in
     * the constant pool.
     *
     * @param constantPool the constant pool of which this entry is a member
     *      and against which this entry is to be resolved.
     */
    /*@Override
    public void resolve(final ConstantPool constantPool) {
        final Utf8CPInfo methodClass
                = (Utf8CPInfo) constantPool.getEntry(methodDescriptorIndex);
        methodClass.resolve(constantPool);
        methodDescriptor = methodClass.getValue();
        super.resolve(constantPool);
    }*/

    /**
     * Print a readable version of the constant pool entry.
     *
     * @return the string representation of this constant pool entry.
     */
    /*@Override
    public String toString() {
        if (isResolved()) {
            return "MethodDescriptor: " + methodDescriptor;
        }
        return "MethodDescriptorIndex: " + methodDescriptorIndex;
    }*/

    @Override
    public int getTag() {return CONSTANT_METHODTYPE;}

    @Override
    public String getSimpleDescription() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
