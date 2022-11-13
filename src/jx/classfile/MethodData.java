package jx.classfile; 

import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Enumeration;
import java.util.logging.Level;
import java.util.logging.Logger;
import jx.classfile.constantpool.*;
import jx.classfile.datatypes.*;
import jx.zero.Debug;

/** 
    All data about a method, that can be found 
    in a class file. This is a rather passive class. 
    It only reads the data from the class file and 
    stores it. 
*/ 
public class MethodData extends MethodSource {
    private int accessFlags;
    int methodNameCPIndex;
    int methodTypeCPIndex;
  
    UTF8CPEntry methodNameCPEntry;
    UTF8CPEntry methodTypeCPEntry;

    int numExceptionClasses;
    int[] exceptionClassCPIndex;
  
    CodeData codeData;
    ClassData declaringClass;

    private boolean allowNative = false;
    
    public ClassData getDeclaringClass() {return declaringClass;}
    @Override
    public ClassSource getDeclaringClassSource() {return declaringClass;}

    public UTF8CPEntry getMethodNameCPEntry() { return methodNameCPEntry;}
    public void setMethodTypeCPEntry(UTF8CPEntry newEntry) {methodTypeCPEntry = newEntry;}

    //public MethodData() {}
    public MethodData(ClassData declaringClass, DataInput input, ConstantPool cPool) throws IOException {
	this.declaringClass = declaringClass;
	//Debug.out.println("MethodData going to be created");
	readFromClassFile(input, cPool);
	//Debug.out.println("MethodData created");
    }

    public MethodData(ClassData declaringClass, DataInput input, ConstantPool cPool, boolean allowNative) throws IOException {
	this.declaringClass = declaringClass;
	this.allowNative = allowNative;
	readFromClassFile(input, cPool);
    }

    //Constructor for copy
    private MethodData(int accessFlags, int methodNameCPIndex, int methodTypeCPIndex, 
		       UTF8CPEntry methodNameCPEntry, UTF8CPEntry methodTypeCPEntry, 
		       int numExceptionClasses, int[] exceptionClassCPIndex, 
		       CodeData codeData, ClassData declaringClass, 
		       boolean allowNative)  {
	this.accessFlags = accessFlags;
	this.methodNameCPIndex = methodNameCPIndex;
	this.methodTypeCPIndex = methodTypeCPIndex;
	this.methodNameCPEntry = methodNameCPEntry;
	this.methodTypeCPEntry = methodTypeCPEntry;
	this.numExceptionClasses = numExceptionClasses;
	this.exceptionClassCPIndex = (exceptionClassCPIndex != null)?
	    new int[exceptionClassCPIndex.length]:
	    null;
	if (exceptionClassCPIndex != null) {
            System.arraycopy(exceptionClassCPIndex, 0, this.exceptionClassCPIndex, 0, exceptionClassCPIndex.length);
	}
	this.codeData = codeData.copy();
	this.declaringClass = declaringClass;
	this.allowNative = allowNative;
    }

    public MethodData copy() {
	return new MethodData(accessFlags, methodNameCPIndex, methodTypeCPIndex, 
			      methodNameCPEntry, methodTypeCPEntry, 
			      numExceptionClasses, exceptionClassCPIndex, 
			      codeData, declaringClass, allowNative);
    }

    public final String getName() {
	return getMethodName();
    }
    @Override
    public String getMethodName() { return methodNameCPEntry.value(); }
    @Override
    public String getMethodType() { return methodTypeCPEntry.value(); }

    @Override
    public boolean isPublic() {return ClassData.isPublic(accessFlags);}
    @Override
    public boolean isPrivate() {return ClassData.isPrivate(accessFlags);}
    @Override
    public boolean isProtected() {return ClassData.isProtected(accessFlags);}
    @Override
    public boolean isStatic() {return ClassData.isStatic(accessFlags);}
    @Override
    public boolean isFinal() {return ClassData.isFinal(accessFlags);}

    @Override
    public boolean isNative() {return ClassData.isNative(accessFlags);}
    @Override
    public boolean isAbstract() {return ClassData.isAbstract(accessFlags);}

    // get the initial types of the local variables (MD p. 62) 
    public int[] getInitialVariableTypes() {
	MethodTypeDescriptor typeDesc = 
	new MethodTypeDescriptor(methodTypeCPEntry.value());
	int[] argTypes = typeDesc.getBasicArgumentTypes();
	if (isStatic())
	return argTypes;
	else {
	    int[] varTypes = new int[argTypes.length + 1];
            System.arraycopy(argTypes, 0, varTypes, 1, argTypes.length);
	    varTypes[0] = BCBasicDatatype.REFERENCE;
	    return varTypes;
	}
    }

    public int getBasicReturnType() {
	return (new MethodTypeDescriptor(methodTypeCPEntry.value())).
	    getBasicReturnType();
    }

    public BasicTypeDescriptor getReturnType() {
	return new BasicTypeDescriptor(new MethodTypeDescriptor(methodTypeCPEntry.value()).getReturnTypeDesc());
    }


    public BasicTypeDescriptor[] getParameterTypes() {
	String args[] = new MethodTypeDescriptor(methodTypeCPEntry.value()).getArgumentTypeDesc();
	BasicTypeDescriptor[] result = new BasicTypeDescriptor[args.length];
	for(int i=0; i<args.length; i++) {
	    result[i] = new BasicTypeDescriptor(args[i]);
	}
	return result;
    }

    public CodeData getCode() { return codeData; }

    // ***** convenience ***** 

    @Override
    public byte[] getBytecode() {return codeData.getBytecode();}
    @Override
    public int getNumLocalVariables() {return codeData.getNumLocalVariables();}
    @Override
    public int getNumStackSlots() {return codeData.getNumStackSlots();}
    @Override
    public int getNumInstr() {
	/* is not reale the number of instructions yet */
	try {
	    if (codeData == null) return -1;
	    return codeData.getBytecodeLength();
	} catch (Exception ex) {
	    System.err.println("What the hell");
	    Logger.getLogger(MethodData.class.getName()).log(Level.SEVERE, null, ex);
	    System.exit(-1);
	}
	return 0;
    }
    
    @Override
    public ExceptionHandlerData[] getExceptionHandlers() {
	return codeData.getExceptionHandlers();
    }
    
    @Override
    public LineAttributeData[] getLineNumberTable() { return codeData.getLineNumberTable(); }

    public void readFromClassFile(DataInput input, ConstantPool cPool)
	throws IOException {
	accessFlags = input.readUnsignedShort();
	//Debug.out.println("MethodData.accessFlags="+accessFlags);

	methodNameCPIndex = input.readUnsignedShort(); 
	methodNameCPEntry = (UTF8CPEntry)cPool.entryAt(methodNameCPIndex);

	methodTypeCPIndex = input.readUnsignedShort();
	methodTypeCPEntry = (UTF8CPEntry)cPool.entryAt(methodTypeCPIndex);

	int numAttributes = input.readUnsignedShort();

	// System.out.println(getDescription(cPool));
      
	for(int i = 0; i < numAttributes; i++)
	    readAttribute(input, cPool);

	if (codeData == null) {
	    if (isNative()) {
		/*
		if (! allowNative) {
		    throw new NativeMethodException("Method "+getDescription(cPool)+" is native");
		}
		*/
	    } else {
		if (!isAbstract()) {
		    Debug.out.println("Non-abstract Method " + getDescription(cPool) + "contains no code");
		    Debug.throwError("Method contains no code");
		}
	    }
	}
    }

    private void readAttribute(DataInput input, ConstantPool cPool)
	throws IOException {
	int attrNameCPIndex = input.readUnsignedShort();
	int numBytes = input.readInt();

	String attributeName = cPool.getUTF8StringAt(attrNameCPIndex);
	if (attributeName.equals("Code")) {
	    codeData = new CodeData();
	    codeData.readFromClassFile(input, cPool);
	} else {
	    input.skipBytes(numBytes);
        }
    }

    // reads the Exception  Method Attribute
    private void readExceptionClasses(DataInput input)
	throws IOException {
	int numBytes = input.readInt();
	numExceptionClasses = input.readUnsignedShort();
	exceptionClassCPIndex = new int[numExceptionClasses];
	for(int i=0; i< numExceptionClasses; i++)
	    exceptionClassCPIndex[i] = input.readUnsignedShort();
    }
  
    @Override
    public String toString() {
	return super.toString() + "\n" + 
	    "AccessFlags        : " + accessFlags + "\n" + 
	    "methodNameCPIndex  : " + methodNameCPIndex + "\n" +
	    "methodTypeCPIndex  : " + methodTypeCPIndex + "\n";
    }

    public String getDescription(ConstantPool cPool) {
	return "MethodData : \n" + 
               "AccessFlags  : " + accessFlags + "\n" + 
               "methodName   : " + cPool.getUTF8StringAt(methodNameCPIndex) + "\n" + 
               "methodType   : " + cPool.getUTF8StringAt(methodTypeCPIndex) + "\n";
    }
    /*
    public LineAttributeData[] getLineNumbers() {
	return codeData.getLineNumberTable();
    }
    */

    public int getModifiers() { return accessFlags; }
    
    private ArrayList verifyResults;
    
    @Override
    public void setVerifyResult(VerifyResult newElm) {
	if (newElm == null)
	    return;
	if (verifyResults == null) {
	    verifyResults = new ArrayList(1);
	    verifyResults.add(newElm);
	} else {
	    //look if result of same type already there and replace
	    for (int i = 0; i < verifyResults.size(); i++) {
		if (((VerifyResult)verifyResults.get(i)).getType() == newElm.getType()) {
		    verifyResults.set(i, newElm);
		    return;
		}
	    }
	    verifyResults.add(newElm);
	}
    }
    
    @Override
    public VerifyResult getVerifyResult(int type){
	if (verifyResults == null){
	    return null;
	}
	for (Enumeration e = Collections.enumeration(verifyResults); e.hasMoreElements();) {
	    VerifyResult res = (VerifyResult) e.nextElement();
	    if (res.getType() == type)
		return res;
	}
	return null;
    }
}      
