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
 
package org.jnode.vm;

import java.io.Writer;
import java.util.HashMap;

import org.jnode.annotation.PrivilegedActionPragma;
import org.jnode.vm.classmgr.IMTBuilder;
import org.jnode.vm.classmgr.SelectorMap;
import org.jnode.vm.classmgr.VmIsolatedStatics;
import org.jnode.vm.classmgr.VmMethod;
import org.jnode.vm.classmgr.VmSharedStatics;
import org.jnode.vm.classmgr.VmType;
import org.jnode.vm.compiler.CompiledIMT;
import org.jnode.vm.scheduler.VmProcessor;

/**
 * @author Ewout Prangsma (epr@users.sourceforge.net)
 */
public final class VmJavaClassLoader extends VmAbstractClassLoader {

    /**
     * The java classloader
     */
    private final ClassLoader loader;

    /**
     * The system classloader
     */
    private final VmSystemClassLoader systemLoader;

    /**
     * A className to VmType map for all loaded classes
     */
    private final HashMap<String, VmType> loadedClasses = new HashMap<>();

    /**
     * Initialize this class.
     *
     * @param loader
     */
    public VmJavaClassLoader(ClassLoader loader) {
        this.loader = loader;
        this.systemLoader = VmSystem.getSystemClassLoader();
    }

    /**
     * @return 
     * @see org.jnode.vm.classmgr.VmClassLoader#asClassLoader()
     */
    @Override
    public final ClassLoader asClassLoader() {
        return loader;
    }

    @Override
    public void disassemble(VmMethod vmMethod, int optLevel, boolean enableTestCompilers, Writer writer) {
        systemLoader.disassemble(vmMethod, optLevel, enableTestCompilers, writer);
    }

    /**
     * Compile the given IMT.
     * @param builder
     * @return 
     */
    @Override
    public CompiledIMT compileIMT(IMTBuilder builder) {
        return systemLoader.compileIMT(builder);
    }

    /**
     * @return 
     * @see org.jnode.vm.classmgr.VmClassLoader#findLoadedClass(java.lang.String)
     */
    @Override
    public final VmType findLoadedClass(String className) {
        return (VmType) loadedClasses.get(className);
    }

    /**
     * Add a class that has been loaded.
     *
     * @param name
     * @param cls
     */
    @Override
    public final void addLoadedClass(String name, VmType cls) {
        loadedClasses.put(name, cls);
    }

    /**
     * @return 
     * @see org.jnode.vm.classmgr.VmClassLoader#getArchitecture()
     */
    @Override
    public final BaseVmArchitecture getArchitecture() {
        return systemLoader.getArchitecture();
    }

    /**
     * @return 
     * @see org.jnode.vm.classmgr.VmClassLoader#isCompileRequired()
     */
    @Override
    public final boolean isCompileRequired() {
        return systemLoader.isCompileRequired();
    }

    /**
     * @return 
     * @throws java.lang.ClassNotFoundException
     * @see org.jnode.vm.classmgr.VmClassLoader#loadClass(java.lang.String,
     *      boolean)
     */
    @PrivilegedActionPragma
    @Override
    public final VmType<?> loadClass(String className, boolean resolve)
        throws ClassNotFoundException {
        final VmType<?> cls;
        if (className.charAt(0) == '[') {
            cls = loadArrayClass(className, resolve);
            addLoadedClass(className, cls);
        } else {
            final Class<?> javaType = loader.loadClass(className);
            cls = VmType.fromClass((Class<?>) javaType);
        }
        if (resolve) {
            cls.link();
        }
        return cls;
    }

    /**
     * @return 
     * @see org.jnode.vm.classmgr.VmClassLoader#isSystemClassLoader()
     */
    @Override
    public final boolean isSystemClassLoader() {
        return false;
    }

    /**
     * @return 
     * @see org.jnode.vm.VmAbstractClassLoader#getSelectorMap()
     */
    @Override
    protected final SelectorMap getSelectorMap() {
        return systemLoader.getSelectorMap();
    }

    /**
     * @return 
     * @see org.jnode.vm.VmAbstractClassLoader#getSharedStatics()
     */
    @Override
    public final VmSharedStatics getSharedStatics() {
        return systemLoader.getSharedStatics();
    }

    /**
     * Gets the isolated statics table (of the current isolate)
     *
     * @return The statics table
     */
    @Override
    public final VmIsolatedStatics getIsolatedStatics() {
        return VmProcessor.current().getIsolatedStatics();
    }

    /**
     * @return 
     * @see org.jnode.vm.classmgr.VmClassLoader#resourceExists(java.lang.String)
     */
    @Override
    public final boolean resourceExists(String resName) {
        return false;
    }

}
