package jx.compiler.execenv; 

import jx.compiler.*;
import jx.classfile.constantpool.*; 
import jx.classfile.*;

import java.util.ArrayList;

// BCClass stimmt nicht unbedingt mit ClassData ueberein to subclassen etc ! 
// vorerst: Schnittstellen sind wichtig 
public class BCClass implements BCClassInterface {
    BCMethod[] method;
    
    ClassSource classSource;
    String className;
    BCClassInfo info;

    public BCClass(ClassSource classSource, String className, BCClassInfo info) {
        this.classSource = classSource;
        this.className = className;
        this.info = info;
    }

  public BCClass(ClassSource classSource, String className) {
      this(classSource, className, null);
  }

    public BCClass(ClassSource classSource) {
        this(classSource, classSource.getClassName(), null);
    }

    @Override
    public void setInfo(BCClassInfo info) {
	this.info = info;
    }

    @Override
    public BCClassInfo getInfo() {
	return info;
    }

    @Override
    public boolean isInterface() {
	return classSource.isInterface();
    }

    @Override
    public ClassSource getClassSource() { return classSource; }

    @Override
    public BCMethod getMethod(String name, String type) {
        return new BCMethod(classSource.getMethod(name, type)); 
    }

    @Override
    public String getClassName() {
	return className;
    }

    @Override
    public BCMethodWithCode getMethodWithCode(String name, String type) throws CompileException {
	return new BCMethodWithCode(classSource.getMethod(name, type), getConstantPool(), null); 
    }
    
    // get all methods of this class
    // returns also abstract methods
    // NO LONGER filters out native methods
    @Override
  public BCMethod[] getAllMethodsWithCode(ArrayList replaceInterfaceWithClass) throws CompileException {
      //Debug.out.println("getAllMethodsWithCode from " + classSource);
      MethodSource[] m = classSource.getMethods();
      ConstantPool cp = getConstantPool(); 
      int numMethods = m.length;

      /*
      for(int i=0; i<m.length; i++) {
	  if (m[i].isNative()) {
	      throw new Error("native method not allowed");
	  }
      }
      */
      BCMethod[] bm = new BCMethod[numMethods];
      int j=0;
        for (MethodSource m1 : m) {
            /*
            if (m[i].isNative()) {
            throw new Error("native method not allowed");
            }
             */
            //Debug.out.println("    "+m[i].getMethodName() + m[i].getMethodType());
            if (m1.isAbstract() || m1.isNative()) {
                bm[j] = new BCMethod(m1); // cannot get code of abstract method
            } else {
                bm[j] = new BCMethodWithCode(m1, cp, replaceInterfaceWithClass);
            }
            j++;
        }
      return bm;
  }

    @Override
    public ConstantPool getConstantPool() {
        return classSource.getConstantPool();
    }

    @Override
    public void invalidateMethod(BCMethod method) {
        // invalidate method, if cached 
    }

    @Override
    public String toString() {
	return "BCClass(" + className + ")";
    }
}
