/*
 * representation of a file that contains the
 * compiled code of a domain
 *
 * Copyright 2000 Michael Golm
 */
package jx.compiler.persistent;

import java.io.FileWriter;
import java.io.IOException;
import java.util.Collections;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.logging.Level;
import java.util.logging.Logger;

import sjc.output.HexOut;
import sjc.ui.SC;
import org.json.JSONArray;
import org.json.JSONObject;

import jx.compiler.*;
import jx.compiler.execenv.*;
import jx.compiler.symbols.*;
import jx.collections.Iterator;
import jx.compspec.MetaInfo;
import jx.classfile.*; 
import jx.zero.Debug;

    /**
     * Format of codefile:

     * FILE              ::= HEADER  code

     * HEADER            ::= FORMATVERSION PROCESSOR NUMBER_OF_OPTS OPT* ... NUMBER_OF_LIBS LIB*  METAINFO STRINGTABLE NUMBER_OF_CLASSES CLASSHEADER*
     * FORMATVERSION     ::= int (currently 1)
     * PROCESSOR         ::= [ "x86" "P6" "x86profile" ]
     * NUMBER_OF_OPTS    ::= int == 0
     * OPT               ::= !!! reserved for future work !!!
     * NUMBER_OF_LIBS    ::= int
     * LIB               ::= string
     * METAINFO          ::= SIZE_OF_META META
     * SIZE_OF_META      ::= int
     * META              ::= bytes
     * NUMBER_OF_CLASSES ::= int

     * CLASSHEADERx      ::= CLASSNAME SUPERCLASSNAME ISINTERFACE 
                             NUMBER_OF_IMPLEMENTED_INTERFACES INTERFACENAME*
                             NUMBER_OF_METHODS INSTANCE_SIZE INSTANCE_FIELDMAP FIELDLIST STATICFIELDS_SIZE BYTECODESIZE VTABLE METHODHEADER*
     * CLASSNAME          ::= string
     * ISINTERFACE        ::= int (0=class, 1=interface)
     * NUMBER_OF_IMPLEMENTED_INTERFACES ::= int
     * INTERFACENAME      ::= string
     * STATIC_FIELDS_SIZE ::= int
     * INSTANCE_SIZE      ::= int
     * INSTANCE_FIELDMAP  ::= NUMBER_OF_FIELDMAPBYTES bytes 
     * NUMBER_OF_FIELDMAPBYTES ::= int 
     * FIELDLIST          ::= NUMBER_OF_FIELDS FIELD*
     * NUMBER_OF_FIELDS   ::= int 
     * FIELD              ::= FIELDNAME FIELDTYPE FIELDOFFSET
     * FIELDNAME          ::= string
     * FIELDTYPE          ::= string
     * FIELDOFFSET        ::= int
     * NUMBER_OF_METHODS  ::= int

     * METHODHEADER       ::= METHODNAME METHODSIGNATURE 
                             SIZE_LOCAL_VARS NUMBER_CODEBYTES ARGUMENTMAP RETURNTYPE FLAGS
                             NUMBER_OF_SYMBOLS SYMBOL* LINENUMBERINFO

     * ARGUMENTMAP       ::= NUMBER_OF_ARGUMENTMAPBYTES bytes
     * NUMBER_OF_ARGUMENTMAPBYTES ::= int 
     * RETURNTYPE        ::= int
     * FLAGS             ::= int

     * LINENUMBERINFO    ::= NUMBER_OF_LINES LINEINFO*
     * LINEINFO          ::= BCINDEX NATIVESTART NATIVEEND

     * METHODNAME        ::= string
     * METHODSIGNATURE   ::= string
     * NUMBER_CODEBYTES  ::= int
     * NUMBER_OF_SYMBOLS ::= int
     * SYMBOLx           ::= refer to SymbolTableEntryBase
     */


public class CodeFile {
    public static final int VERSION = 10;
    private int codesize = 0;
    public static final boolean verbose = false;
    private JSONObject object = new JSONObject();
    
    ExtendedDataInputStream in;
    ExtendedDataOutputStream out;

    CompilerOptions opts = null;

    MetaInfo meta;

    /**
     * Write all classes contained in the vector to
     * the file.
     * @param opts
     * @param meta
     */

    public CodeFile(CompilerOptions opts, MetaInfo meta) {
        this.opts = opts;
        this.meta = meta;
    }

    public void write(ExtendedDataOutputStream out, ClassStore classStore) throws IOException {
        this.out = out;
        
        //
        // write header
        //
        out.writeInt(VERSION);
        out.writeString(opts.codeType());

        /*
          symbol - base - table
        */
        out.writeInt(0);

        //
        //  needed libs
        //
        String[] libs = opts.getNeededLibs();
        if (libs == null) {
            // Debug.out.println("NO LIBS NEEDED");
            out.writeInt(0);
        } else {
            // Debug.out.println("NEEDED LIBS");
            out.writeInt(libs.length);
            for (String lib : libs) {
                try {
                    //Debug.out.println("\""+libs[i]+"\"");
                    out.writeString(lib);
                } catch (IOException ex) {
                    throw new Error(ex.getClass().getName());
                }
            }
        }

        //
        //  metainfo
        //
        String[] vars = meta.getVars();
        out.writeInt(vars.length);
        for (String var : vars) {
            System.out.println("  " + var + "   = " + meta.getVar(var));
            out.writeString(var);
            out.writeString(meta.getVar(var));
        }

        //
        // write string table
        //
        StringTable stringTable = new StringTable();
        Iterator iter = classStore.iterator();
        while (iter.hasNext()) {
            BCClass c = (BCClass) iter.next();
            collectStrings(c, stringTable);
        }
        stringTable.writeStringTable(out);

        //
        //  vmsupport-base-table
        //
        VMSupportSTEntry.writeSymTable(out);

        //
        // write header
        //
        out.writeInt(classStore.size());
        iter = classStore.iterator();
        while(iter.hasNext()) {
            BCClass c = (BCClass) iter.next();
            saveToFile(c, stringTable, true);
        }

        //
        // write code
        //
        iter = classStore.iterator();
        while(iter.hasNext()) {
            BCClass c = (BCClass) iter.next();
            saveToFile(c, stringTable, false);
        }

        out.writeChecksum();

        if (verbose) System.out.println("**********Finished saving!");
        try {
            FileWriter f = new FileWriter(out.toString().replace(".jll", ".json"));
            f.write(object.toString(4));
            f.close();
        } catch (IOException ex) {
            Logger.getLogger(SC.class.getName()).log(Level.SEVERE, null, ex);
        }
        System.out.println(object.toString(4));
    }

    /**
     * Reads a CodeFile form a input stream.
     * @param in
     * @return 
     * @throws java.lang.Exception
     */
    public ArrayList read(ExtendedDataInputStream in) throws Exception {
        this.in = in;

        ArrayList<CompiledClass> all = new ArrayList<>();
    
        // 
        // read header
        //
        if (in.readInt() != VERSION) {
            Debug.throwError("Wrong version");
        }
        String codeType = in.readString();
        
        /*
	 * reserved for option fields
	 */

	in.readInt();

	/*
	 * load needed libs
	 */

	int numberOfNeededLibs = in.readInt();

	for (int i = 0; i < numberOfNeededLibs; i++) {
		in.readString();
	}

	/*
	 * load meta
	 */
	int numberOfMeta = in.readInt();

	for (int j = 0; j < numberOfMeta; j++) {
		in.readString();
		in.readString();
	}

	/*
	 * read string table
	 */

	int n = in.readInt();
        for (int j = 0; j < n; j++){
                in.readByte();
        }

	/*
	 * vmsymbol-table
	 */

	n = in.readInt();
        for (int j = 0; j < n; j++) {
                in.readString();
	}
        
        int size = in.readInt();
        for(int i = 0; i < size; i++) {
            CompiledClass compiledClass = readHeaderFromFile();
            all.add(compiledClass);
        }

        //
        // read code
        //
        for(int i = 0; i < size; i++) {
            readCodeFromFile(all.get(i));
        }    
        return all;
    }

    private void collectStrings(BCClass aClass, StringTable strTable) {
        BinaryCode mc;
        BCMethod   method;

        BCClassInfo info = aClass.getInfo();

        strTable.register(aClass.getClassName());
        if (info.superClass != null)
            strTable.register(info.superClass.getClassName());
        else
            strTable.register("");

        for (BCClass intf : info.interfaces)
            strTable.register(intf.getClassName());

        info.objectLayout.registerStrings(strTable);
        info.classLayout.registerStrings(strTable);
        info.methodTable.registerStrings(strTable);

        int len = info.nativeCode.length;
        for(int i = 0; i < len; i++) {
            method = info.methods[i];

            strTable.register(method.getName());
            strTable.register(method.getSignature());

            if (!method.isAbstract() && info.nativeCode[i] != null) {
                mc = info.nativeCode[i].getMachineCode();
                ArrayList unresolvedAddresses = mc.getUnresolvedAddresses();
                Enumeration elements = Collections.enumeration(unresolvedAddresses);
                while (elements.hasMoreElements()) {
                    SymbolTableEntryBase entry = (SymbolTableEntryBase)elements.nextElement();
                    entry.registerStrings(strTable);
                }
            }
        }
    }

    private void saveToFile(BCClass aClass, StringTable strTable, boolean saveHeader) throws IOException {
        BCClassInfo info = aClass.getInfo();
        if (saveHeader) { 
            if (verbose) Debug.out.println("***** Saving header class: " + aClass.getClassName());
            strTable.writeStringID(out, aClass.getClassName());
            if (info.superClass != null) {
                strTable.writeStringID(out, info.superClass.getClassName());
            } else {
                strTable.writeStringID(out, "");
            }
            if (aClass.isInterface())
                out.writeInt(1); // isinterface
            else
                out.writeInt(0); // isinterface
            out.writeInt(info.interfaces.length); // number of implemented interfaces
            for (BCClass intf : info.interfaces) {
                strTable.writeStringID(out, intf.getClassName());
            }
            out.writeInt(info.nativeCode.length);
            out.writeInt(info.objectLayout.wordsNeeded());
            // fieldmap
            info.objectLayout.writeFieldMap(out);
            // fieldlist
            info.objectLayout.writeFieldList(out, strTable);
            // statics
            out.writeInt(info.classLayout.wordsNeeded());
            info.classLayout.writeFieldMap(out);

            /* accumulated bytecode size */
            //Debug.out.println("BYTECODES-CLASS-START "+aClass.getClassName());
            if (aClass.isInterface()) {
                out.writeInt(0); // no bytecode in an interface
            } else {
                int bcsize = 0;
                for (BCMethod method : info.methods) {
                    if (method instanceof BCMethodWithCode b) {
                        bcsize += b.getByteCodeSize();
                        //Debug.out.println("BYTECODES of "+b.getName()+b.getSignature()+":"+b.getByteCodeSize());
                    }
                }
                //Debug.out.println("BYTECODES-CLASS "+aClass.getClassName()+"="+bcsize);
                out.writeInt(bcsize); 
            }

            info.methodTable.serialize(out, strTable);
        }
        int len = info.nativeCode.length;
        for(int i = 0; i < len; i++) {
            if (saveHeader) {
                if (verbose) Debug.out.println("**  Saving header method " + i + "/" + len + " "
                           + aClass.getClassName() + "." + info.methods[i].getName());
                saveHeaderToFile(strTable, aClass.getClassName(), info.methods[i].getName(), 
                 info.methods[i].getSignature(), info.nativeCode[i], info.methods[i], info);
            } else {
                if (verbose) Debug.out.println("**  Saving code method " + i + " " + info.methods[i].getName());
                saveCodeToFile(info.methods[i], info.nativeCode[i]);
            }
        }
    }

    private void saveHeaderToFile(StringTable strTable, String className, String methodName, String methodType,
                  NativeCodeContainer nativeCode, BCMethod method, BCClassInfo info) {
        BinaryCode mc = null;

        try {
            strTable.writeStringID(out, methodName);
            strTable.writeStringID(out, methodType);

            if (method.isAbstract()) {
                out.writeInt(0);
                out.writeInt(0);
            } else {
                out.writeInt(nativeCode.getLocalVarSize());
                mc = nativeCode.getMachineCode(); 
                int numCodeBytes = mc.getNumCodeBytes();
                if (numCodeBytes <= 0)
                    Debug.throwError("Fatal error: Number of code bytes <=0");
                out.writeInt(numCodeBytes);
            }

            // write argument map
            int[] argtypes = method.getArgumentTypes();
            TypeMap.writeMap(out, argtypes);

            // write return type (0=numeric; 1=reference)
            if (method.returnsReference())
                out.writeInt(1);
            else
                out.writeInt(0);

            // write flags (static, etc.)
            if (method.isStatic())
                out.writeInt(1);
            else
                out.writeInt(0);

            if (method.isAbstract() || nativeCode == null) { 
                out.writeInt(0); // number of symbols
                out.writeInt(0); // number of lineinfos
                out.writeInt(0); // number of lineinfos
            } else {
                ArrayList unresolvedAddresses = mc.getUnresolvedAddresses();
                int numEntries = 0;
                Enumeration elements = Collections.enumeration(unresolvedAddresses); 
                while (elements.hasMoreElements()) {
                    SymbolTableEntryBase entry =(SymbolTableEntryBase)elements.nextElement(); 
                    //Debug.out.println("* SymTableEntry:");
                    //entry.dump();
                    if(!entry.isResolved()) {
                        if ((entry instanceof UnresolvedJump)
                            && entry.isRelative()) {
                            Debug.out.println("ERROR: relative Jump Entry not resolved: Class: " + className + ", Method: " + method);
                            entry.dump();
                            Debug.throwError("unresolved jump: " + entry);
                        }
                        numEntries++;
                    }
                }
                out.writeInt(numEntries);
                elements = Collections.enumeration(unresolvedAddresses); 
                while (elements.hasMoreElements()) {
                    SymbolTableEntryBase entry =(SymbolTableEntryBase)elements.nextElement(); 
                    if(entry.isResolved()) {
                        //System.out.println("Skipping resolved entry: "+entry);
                    } else {
                        //Debug.out.println("Wrinting to file: "+entry);
                        entry.writeEntry(out); 
                    }
                }
                // write  nativecode -> bytecode mapping
                if (!opts.isOption("noBytecodeNumbers")) {
                    ArrayList lineTable = nativeCode.getInstructionTable();
                    out.writeInt(lineTable.size());
                    for(int k = 0; k < lineTable.size(); k++) {
                        int[] l = (int[])lineTable.get(k);
                        out.writeInt(l[0]);
                        out.writeInt(l[1]);
                        out.writeInt(l[2]);
                    }
                } else { 
                    out.writeInt(0); // no lineinfos available
                }
                // write  bytecode -> sourcecode mapping
                LineAttributeData lineNumbers[] = method.getLineNumberTable();
                //Debug.out.println("LINENUMBERS: "+lineNumbers.length);
                if (lineNumbers != null && ! opts.isOption("noLineNumbers")) {
                    out.writeInt(lineNumbers.length); // number of lineinfos
                    for (LineAttributeData lineNumber : lineNumbers) {
                        out.writeInt(lineNumber.startBytecodepos);
                        out.writeInt(lineNumber.lineNumber);
                    }
                } else {
                    out.writeInt(0); // no lineinfos available
                }
            }
        } catch (IOException e) {
            Debug.throwError("Exception " + e.getClass().getName() + " caught while writting code file.");
        }
    }
    
    private void saveCodeToFile(BCMethod method, 
                NativeCodeContainer nativeCode) {
        try {
            if (method.isAbstract() || nativeCode==null) {
                return;
            }
            BinaryCode mc = nativeCode.getMachineCode();
            byte[] code = mc.getCode();
            int numCodeBytes = mc.getNumCodeBytes();
            // apply the symbols that already are resolved
            ArrayList unresolvedAddresses = mc.getUnresolvedAddresses();
            Enumeration<SymbolTableEntryBase> elements = Collections.enumeration(unresolvedAddresses); 
            while (elements.hasMoreElements()) {
                SymbolTableEntryBase entry = elements.nextElement();
                if(entry.isRelative()) {
                    if(entry.isResolved()) {
                        // this entry must be applied before the code is saved
                        entry.apply(code, 0);
                    }
                }
            }
            String name = method.getClassName() + ".";
            name += method.getName();
            out.write(code, 0, numCodeBytes);
            HexOut hex = new HexOut(null, null);
            hex.setAddress(0);
            hex.write(code, 0, numCodeBytes);
            JSONArray array = new JSONArray(hex.toString().replace(":", ""));
            object.put(name.replace("/", "."), array);
            //Disassembler disass = new Disassembler(code, 0, numCodeBytes);
            //disass.disasm();
        } catch(IOException e) {
            Debug.throwError("Error writing code file");
        }
    }

    private CompiledClass readHeaderFromFile() throws Exception {
        Integer className = in.readInt();
        Integer superName = in.readInt();
        ///Debug.out.println(className + " - " + superName);
        int isInterface = in.readInt();
        int objectSize = in.readInt();
        for(int i = 0; i < objectSize; i++) in.readInt();
        //int vtableSize = in.readInt();
        int numberOfMethods = in.readInt();
        in.readInt();

        FieldLayout.readMap(in); // object map
        int classSize = in.readInt();
        for(int i = 0; i < classSize; i++) {
            in.readInt();
            in.readInt();
            in.readInt();
        }
        in.readInt();

        FieldLayout.readMap(in); // statics map
        int numberOfBytecodes = in.readInt();
        int Type = in.readInt();
        int Msize = in.readInt();
        for(int i = 0; i < Msize; i++){
            in.readInt();
            in.readInt();
            in.readInt();
            in.readInt();
        }

        //Debug.out.println("Ml " + numberOfMethods);    
        CompiledMethod[] methods = new CompiledMethod[numberOfMethods];
        for(int i = 0; i < numberOfMethods; i++) {
            methods[i] = readMethodHeaderFromFile();
        }
        CompiledClass compiledClass = new CompiledClass(className.toString(), superName.toString(), objectSize, classSize, methods);
        return compiledClass;
    }

    private CompiledMethod readMethodHeaderFromFile() throws Exception {
        Integer methodName = in.readInt();
        Integer methodType = in.readInt();
        //Debug.out.println("Method:" + methodName + " - " + methodType);
        in.readInt();
        int numCodeBytes = in.readInt();
        FieldLayout.readMap(in);
        in.readInt();

        int vtableIndex = in.readInt(); // -1 means: no virtual method
        if (numCodeBytes > 0) { // not an abstract method
        }
        in.readInt();
        int numSymbols = in.readInt(); // number of symbols
        SymbolTableEntryBase[] symbols = new SymbolTableEntryBase[numSymbols];
        for(int i = 0; i < numSymbols; i++) {
            symbols[i] = SymbolTableEntryBase.readUnknownEntry(in);
        }
        int numLineInfo = in.readInt(); // number of lineinfos
        LineInfo[] lineTable = new LineInfo[numLineInfo];
        for(int k = 0; k < numLineInfo; k++) {
            LineInfo l = new LineInfo();
            l.bytecodePos = in.readInt();
            l.start = in.readInt();
            l.end = in.readInt();
            lineTable[k] = l;
        }
        int nl = in.readInt();
        for(int i = 0; i < nl; i++){
            in.readInt();
            in.readInt();
        }
        return new CompiledMethod(methodName.toString(), methodType.toString(), numCodeBytes, vtableIndex, symbols, lineTable);
    }

    private void readCodeFromFile(CompiledClass compiledClass) throws IOException {
    CompiledMethod[] methods = compiledClass.getMethods();
        for (CompiledMethod method : methods) {
            readCodeFromFile(method);
        }
    }

    private void readCodeFromFile(CompiledMethod method) throws IOException {
        if (method.isAbstract()) {
            return;
        }
        byte[] code = new byte[method.numCodeBytes];
        codesize += method.numCodeBytes;
        method.setCode(code);
        in.read(code, 0, method.numCodeBytes);
    }
    
    public void size(){
        System.out.println("codesize:" + codesize);
    }
}
