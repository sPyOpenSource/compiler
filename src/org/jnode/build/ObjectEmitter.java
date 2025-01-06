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
 
package org.jnode.build;

import java.io.PrintWriter;
import java.lang.reflect.Array;
import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.util.HashMap;
import java.util.Set;

import org.jnode.assembler.Label;
import org.jnode.assembler.NativeStream;
import org.jnode.assembler.x86.X86BinaryAssembler;
import org.jnode.bootlog.BootLogInstance;
import org.jnode.vm.classmgr.VmArrayClass;
import org.jnode.vm.classmgr.VmClassLoader;
import org.jnode.vm.classmgr.VmClassType;
import org.jnode.vm.classmgr.VmField;
import org.jnode.vm.classmgr.VmInstanceField;
import org.jnode.vm.classmgr.VmNormalClass;
import org.jnode.vm.classmgr.VmType;
import org.jnode.vm.objects.BootableObject;
import org.jnode.vm.objects.VmSystemObject;
import org.vmmagic.unboxed.UnboxedObject;

public class ObjectEmitter {

    private final VmClassLoader loaderContext;

    private final NativeStream os;

    private final PrintWriter debugWriter;

    private final Set<String> legalInstanceClasses;

    private final HashMap<String, FieldInfo> fieldInfos = new HashMap<>();

    /**
     * Construct a new ObjectEmitter.
     *
     * @param b
     * @param os
     * @param debug
     * @param legalInstanceClasses
     */
    public ObjectEmitter(VmClassLoader b, NativeStream os, PrintWriter debug,
                         Set<String> legalInstanceClasses) {
        this.loaderContext = b;
        this.os = os;
        this.legalInstanceClasses = legalInstanceClasses;
        this.debugWriter = debug;
    }

    /**
     * Write the header and the contents of an object to the native stream.
     *
     * @param obj
     * @throws ClassNotFoundException
     */
    public final void emitObject(Object obj) throws
        ClassNotFoundException {
        if (obj == null) {
            return;
        }

        final Class<?> cls = obj.getClass();
        try {
            testForValidEmit(obj, cls.getName());
        } catch (JNodeClassNotFoundException ex) {
        }

        if (debugWriter != null) {
            debugWriter.println("$" + Integer.toHexString(os.getLength()));
            if (obj instanceof char[]) {
                final char[] a = (char[]) obj;
                for (int i = 0; i < a.length; i++) {
                    debugWriter.print("'" + a[i] + "' ");
                }
                debugWriter.println();
            } else if (obj instanceof byte[]) {
                final byte[] a = (byte[]) obj;
                for (int i = 0; i < a.length; i++) {
                    debugWriter.print("" + a[i] + ' ');
                }
                debugWriter.println();
            } else {
                debugWriter.println(obj);
            }
        }

        if (obj instanceof VmSystemObject) {
            ((VmSystemObject) obj).verifyBeforeEmit();
        }

        // Writeout the header
        final VmClassType<?> vmClass = (VmClassType<?>) loaderContext.loadClass(cls.getName(), true);
        vmClass.incInstanceCount();
        final X86BinaryAssembler.ObjectInfo oInfo = os.startObject(vmClass);
        os.setObjectRef(obj);

        // If the object is a VmClass, force the loading of the
        // correspondig java.lang.Class
        if (cls.equals(VmType.class)) {
            final VmType<?> vmCls = (VmType<?>) obj;
            String name = vmCls.getName().replace('/', '.');
            if (!name.startsWith("java.lang")) {
                vmCls.asClassDuringBootstrap();
            }
        }

        // Writeout object contents
        if (cls.equals(String.class)) {
            emitString((String) obj);
        } else if (cls.equals(Integer.class)) {
            emitInteger((Integer) obj);
        } else if (cls.equals(Long.class)) {
            emitLong((Long) obj);
        } else if (cls.equals(Class.class)) {
            emitClass((Class<?>) obj);
        } else if (cls.isArray()) {
            emitArray(cls, obj, (VmArrayClass<?>) vmClass);
        } else {
            try {
                emitObject(cls, obj, (VmNormalClass<?>) vmClass);
            } catch (JNodeClassNotFoundException ex) {
            }
        }
        oInfo.markEnd();

        if (debugWriter != null) {
            debugWriter.println();
        }
    }

    /**
     * Is it legal to emit the given object?
     *
     * @param object
     * @throws JNodeClassNotFoundException
     */
    public final void testForValidEmit(Object object, String location)
        throws JNodeClassNotFoundException {
        if (object == null) {
            return;
        } else if (object instanceof BootableObject) {
            return;
        } else if (object.getClass().isArray()) {
            return;
        } else if (object instanceof Class) {
            return;
        } else {
            final String clsName = object.getClass().getName().replace('/', '.');
            /*
             * if (clsName.startsWith("org.jnode.")) { return;
             */
            if (legalInstanceClasses.contains(clsName)) {
                return;
            }

            final FieldInfo fieldInfo;
            try {
                fieldInfo = getFieldInfo(object.getClass());
            } catch (ClassNotFoundException ex) {
            }
            if (!fieldInfo.isExact()) {
                BootLogInstance.get().warn("Use of in-exact matching class (" + clsName + ") in bootimage at "
                    + location);
            }
            legalInstanceClasses.add(clsName);
        }
    }

    private void emitString(String s) {
        // This layout should match the order and type of fields
        // in java.lang.String
        os.write32(0); // int offset
        os.write32(s.length()); // int count
        os.write32(s.hashCode()); // int cachedHashCode        
    }

    private void emitInteger(Integer i) {
        // This layout should match the order and type of fields
        // in java.lang.Integer
        os.write32(i); // int value
    }

    private void emitLong(Long l) {
        // This layout should match the order and type of fields
        // in java.lang.Long
        os.write64(l); // long value
    }

    private void emitArray(Class<?> cls, Object obj, VmArrayClass<?> vmClass) {
        final Class<?> cmpType = cls.getComponentType();
        final int len = Array.getLength(obj);
        vmClass.incTotalLength(len);
        os.writeWord(len);
        if (cmpType == byte.class) {
            final byte[] a = (byte[]) obj;
            os.write(a, 0, len);
        } else if (cmpType == boolean.class) {
            final boolean[] a = (boolean[]) obj;
            for (int i = 0; i < len; i++) {
                os.write8(a[i] ? 1 : 0);
            }
        } else if (cmpType == char.class) {
            final char[] a = (char[]) obj;
            for (int i = 0; i < len; i++) {
                os.write16(a[i]);
            }
        } else if (cmpType == short.class) {
            final short[] a = (short[]) obj;
            for (int i = 0; i < len; i++) {
                os.write16(a[i]);
            }
        } else if (cmpType == int.class) {
            final int[] a = (int[]) obj;
            for (int i = 0; i < len; i++) {
                os.write32(a[i]);
            }
        } else if (cmpType == long.class) {
            final long[] a = (long[]) obj;
            for (int i = 0; i < len; i++) {
                os.write64(a[i]);
            }
        } else if (cmpType == float.class) {
            final float[] a = (float[]) obj;
            for (int i = 0; i < len; i++) {
                os.write32(Float.floatToRawIntBits(a[i]));
            }
        } else if (cmpType == double.class) {
            final double[] a = (double[]) obj;
            for (int i = 0; i < len; i++) {
                os.write64(Double.doubleToRawLongBits(a[i]));
            }
        }
    }

    /**
     * Store an object at a given offset.
     *
     * @param offset The offset of the start of the object.
     * @param cls
     * @param obj
     * @param vmType
     * @throws ClassNotFoundException
     * @throws JNodeClassNotFoundException
     */
    private void storeObject(int offset, Class<?> cls, Object obj, VmClassType<?> vmType) throws
        ClassNotFoundException, JNodeClassNotFoundException {
        final Class<?> sCls = cls.getSuperclass();
        if (sCls != null) {
            final VmClassType<?> vmSuperType = (VmClassType<?>) loaderContext.loadClass(sCls.getName(), true);
            storeObject(offset, sCls, obj, vmSuperType);
        }
        try {
            final FieldInfo fieldInfo = getFieldInfo(cls);
            // final Field fields[] = cls.getDeclaredFields();
            final Field[] fields = fieldInfo.getJdkInstanceFields();
            final int len = fields.length;
            // AccessibleObject.setAccessible(fields, true);
            for (int i = 0; i < len; i++) {
                final VmField jnodeField = fieldInfo.getJNodeInstanceField(i);
                final Field jdkField = fields[i];
                final int modifiers = jnodeField.getModifiers();

                if ((modifiers & Modifier.STATIC) != 0) {
                }

                final int fldOffset = offset + ((VmInstanceField) jnodeField).getOffset();
                if ((jdkField == null) || ((modifiers & Modifier.TRANSIENT) != 0)) {
                    if (jnodeField.isWide()) {
                        os.set64(fldOffset, 0);
                    } else if (!jnodeField.isPrimitive()) {
                        os.setWord(fldOffset, 0);
                    } else {
                        switch (jnodeField.getTypeSize()) {
                            case 1:
                                os.set8(fldOffset, 0);
                                break;
                            case 2:
                                os.set16(fldOffset, 0);
                                break;
                            case 4:
                                os.set32(fldOffset, 0);
                                break;
                            default:
                                System.out.println("Invalid typesize in: " + jnodeField);
                        }
                    }
                    if (debugWriter != null) {
                        debugWriter.println(jnodeField.getName() + " transient: 0");
                    }
                } else if (jnodeField.isPrimitive()) {
                    final Class<?> fType = jdkField.getType();
                    if (debugWriter != null) {
                        debugWriter.println(jdkField.getName() + " " + jdkField.get(obj));
                    }
                    if (fType == byte.class) {
                        os.set8(fldOffset, jdkField.getByte(obj));
                    } else if (fType == boolean.class) {
                        os.set8(fldOffset, (jdkField.getBoolean(obj)) ? 1 : 0);
                    } else if (fType == char.class) {
                        os.set16(fldOffset, jdkField.getChar(obj));
                    } else if (fType == short.class) {
                        os.set16(fldOffset, jdkField.getShort(obj));
                    } else if (fType == int.class) {
                        os.set32(fldOffset, jdkField.getInt(obj));
                    } else if (fType == float.class) {
                        os.set32(fldOffset, Float.floatToIntBits(jdkField.getFloat(obj)));
                    } else if (fType == long.class) {
                        os.set64(fldOffset, jdkField.getLong(obj));
                    } else if (fType == double.class) {
                        os.set64(fldOffset, Double.doubleToLongBits(jdkField.getDouble(obj)));
                    } else {
                        System.out.println("Unknown primitive class " + fType.getName());
                    }
                } else if (jnodeField.isAddressType()) {
                    final Object value = jdkField.get(obj);
                    if (value == null) {
                        os.setWord(fldOffset, 0);
                    } else if (value instanceof UnboxedObject) {
                        final UnboxedObject uobj = (UnboxedObject) value;
                        os.setWord(fldOffset, uobj.toLong());
                    } else if (value instanceof Label) {
                        final Label lbl = (Label) value;
                    } else {
                        System.out.println("Cannot handle magic type " + value.getClass().getName());
                    }
                } else {
                    Object value = jdkField.get(obj);
                    try {
                        testForValidEmit(value, cls.getName());
                    } catch (JNodeClassNotFoundException ex) {
                        BootLogInstance.get().warn("JNode class not found " + ex.getMessage());
                        value = null;
                    }
                }
            }
        } catch (IllegalAccessException | SecurityException ex) {
        }
    }

    /**
     * Gets the field information for the given type.
     *
     * @param jdkType
     * @throws ClassNotFoundException
     */
    public FieldInfo getFieldInfo(Class<?> jdkType)
        throws ClassNotFoundException, JNodeClassNotFoundException {
        final String cname = jdkType.getName();
        FieldInfo info = fieldInfos.get(cname);
        if (info == null) {
            VmType<?> jnodeType = null;
            try {
                jnodeType = loaderContext.loadClass(cname, true);
            } catch (ClassNotFoundException ex) {
                throw new JNodeClassNotFoundException(cname);
            }
            info = new FieldInfo(jdkType, jnodeType);
            fieldInfos.put(cname, info);
        }
        return info;
    }
}
