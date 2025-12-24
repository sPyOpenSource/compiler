/*
 * Copyright (C) 2025 xuyi
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
package com.ebsee.j2c;

import com.ebsee.invoke.bytecode.ByteCodeAssembler;
import static com.ebsee.j2c.MV.EXCEPTION_HANDLER;
import static com.ebsee.j2c.Util.CLASS_JAVA_LANG_ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION;
import static com.ebsee.j2c.Util.CLASS_JAVA_LANG_NULL_POINTER_EXCEPTION;
import static com.ebsee.j2c.Util.STR_JARRAY_TYPE_NAME;
import static com.ebsee.j2c.Util.getFieldVarName;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import jx.classfile.CodeData;
import jx.classfile.FieldData;
import jx.classfile.MethodSource;
import org.objectweb.asm.Label;

/**
 *
 * @author xuyi
 */
public class CBuilder {
    private final List<String> strings = new ArrayList<>();
    Label curLabel = new Label();
    List<String> usedLabels = new ArrayList<>();
    int labelId;

    public int nextId() {
        return labelId++;
    }
    
    public void addUsedLabel(String lab) {
        if (!usedLabels.contains(lab)) {
            usedLabels.add(lab);
        }
    }

    public int getLabelIndex(String lab) {
        if (!usedLabels.contains(lab)) {
            usedLabels.add(lab);
        }
        return usedLabels.indexOf(lab);
    }
    
    public List<String> getOutputs() {
        return strings;
    }

    public void add(int index, String str) {
        strings.add(index, str);
    }

    public void add(String str) {
        strings.add(str);
    }

    public void addAll(Collection<String> str) {
        strings.addAll(str);
    }

    public void comment(String str) {
        strings.add("// " + str);
    }
    
    boolean isMethodEmpty(MethodSource m) {
//        if (m.getMethodName().equals("<init>") && m.getClassFile().getThisClassName().equals("java/lang/Object")) {
//            int debug = 1;
//        }
        CodeData ca = m.getCodeAttribute();
        if (ca != null) {
            byte[] code = ca.getBytecode();
            if (code != null && code.length == 1) {
                if ((code[0] & 0xff) == ByteCodeAssembler.return_) {//empty method, do nothing
                    return true;
                }
            }
        }
        return false;
    }
    
    public void genFixedMethodCall(String className, String methodName, String descritp) {
        MethodSource m = ClassManger.findMethod(className, methodName, descritp);
        if (m == null) {
            int debug = 1;
            System.out.println("Method not found:" + className + "." + methodName + descritp);
        }
        JSignature sig = new JSignature(m);
        if (isMethodEmpty(m)) {//do nothing
            int paraSlot = sig.getSlotSizeofArgs();
            add("sp -= " + paraSlot + ";  //pop para");
            comment("it's a empty method");
            return;
        }
//        String noerrLab = MV.METHOD_EXIT_WITHOUT_EXCEPTION_LABEL + nextId();
        String errHandLab = MV.EXCEPTION_HANDLER;
        getLabelIndex(MV.EXCEPTION_HANDLER);
//        getLabelIndex(noerrLab);

        int argsCount = sig.getCtypeArgs().size();
        int argsSlotSize = sig.getSlotSizeofArgs();
        int slotIndex = 0;
        add("{");
        add("    sp -= " + argsSlotSize + ";");
        if (!m.isStatic()) {
            add("    " + Util.STR_JOBJECT_TYPE_NAME + " *__ins = rstack[sp + 0].ins;");
            add("    if (!__ins) {");
            add("        rstack[sp++].obj = " + AssistLLVM.FUNC_CONSTRUCT_AND_THROW_EXCEPTION + "(runtime, " + AssistLLVM.getClassIndex(CLASS_JAVA_LANG_NULL_POINTER_EXCEPTION) + ", ");// + curLabel.getOffset() + ", " + curLineNo + ");");
            add("        goto " + EXCEPTION_HANDLER + ";");
            add("    }");
        }
        StringBuilder sb = new StringBuilder();
        sb.append("runtime");
        for (int i = 0; i < argsCount; i++) {
            sb.append(", ");
            String s = sig.getCtypeArgs().get(i);
            String fname = Util.getStackFieldName_by_Ctype(s);
            String vname = Util.getStackName_by_Ctype(s);
            sb.append(vname + "stack[sp + " + slotIndex + "].").append(fname);
            slotIndex += Util.getSlot_by_Ctype(s);
        }
        String ret = "";
        if (!sig.getResult().equals("void")) {
            String fname = Util.getStackFieldName_by_Ctype(sig.getResult());
            String vname = Util.getStackName_by_Ctype(sig.getResult());
            ret = vname + "stack[sp]." + fname + " = ";
        }
        if (m.isSync()) {
            if (m.isStatic()) {
                add("    " + AssistLLVM.FUNC_JTHREAD_LOCK + "(runtime, (JObject *)g_classes[" + AssistLLVM.getClassIndex(className) + "].clazz);");
            } else {
                add("    " + AssistLLVM.FUNC_JTHREAD_LOCK + "(runtime, __ins);");
            }
        }
        add("    " + ret + Util.getMethodRawName(m) + "(" + sb.toString() + ");");
        if (m.isSync()) {
            if (m.isStatic()) {
                add("    " + AssistLLVM.FUNC_JTHREAD_UNLOCK + "(runtime, (JObject *)g_classes[" + AssistLLVM.getClassIndex(className) + "].clazz);");
            } else {
                add("    " + AssistLLVM.FUNC_JTHREAD_UNLOCK + "(runtime, __ins);");
            }
        }
        add("    sp += " + sig.getSlotSizeOfResult() + ";");
        add("    if (runtime->exception) {");
        add("        rstack[sp++].obj = runtime->exception;");
        add("        goto " + errHandLab + ";");
        add("    }");
        add("}");
    }

    public void genVirtualMethodCall(String className, String methodName, String descritp) {
//        if (className.equals("java/util/List") && methodName.equals("forEach")) {
//            int debug = 1;
//        }

        ClassManger.FindResult result = ClassManger.findVirtualMethod(className, methodName, descritp);
        int classIndex = AssistLLVM.getClassIndex(result.className);
        int methodIndex = result.index;
        JSignature sig = new JSignature(result.getMethod());
        String methodType = sig.getMethodType();
        MethodSource m = ClassManger.findMethod(className, methodName, sig.getJavaSignature());

        String noerrLab = MV.METHOD_EXIT_WITHOUT_EXCEPTION_LABEL + nextId();
        String errHandLab = MV.EXCEPTION_HANDLER;
        getLabelIndex(errHandLab);

        int argsCount = sig.getCtypeArgs().size();
        int argsSlotSize = sig.getSlotSizeofArgs();
        int slotIndex = 0;
        add("{");
        add("    sp -= " + argsSlotSize + ";");
        add("    " + Util.STR_JOBJECT_TYPE_NAME + " *__ins = rstack[sp + 0].ins;");
        add("    if (!__ins) {");
        add("        rstack[sp++].obj = " + AssistLLVM.FUNC_CONSTRUCT_AND_THROW_EXCEPTION + "(runtime, " + AssistLLVM.getClassIndex(CLASS_JAVA_LANG_NULL_POINTER_EXCEPTION) + ", ");// + curLabel.getOffset() + ", " + curLineNo + ");");
        add("        goto " + EXCEPTION_HANDLER + ";");
        add("    }");
        add("    " + methodType + " = " + AssistLLVM.FUNC_FIND_METHOD + "(__ins->vm_table, " + classIndex + ", " + methodIndex + ");");
        StringBuilder sb = new StringBuilder();
        sb.append("runtime");
        for (int i = 0; i < argsCount; i++) {
            sb.append(", ");
            String s = sig.getCtypeArgs().get(i);
            String fname = Util.getStackFieldName_by_Ctype(s);
            String vname = Util.getStackName_by_Ctype(s);
            sb.append(vname + "stack[sp + " + slotIndex + "].").append(fname);
            slotIndex += Util.getSlot_by_Ctype(s);
        }
        String ret = "";
        if (!sig.getResult().equals("void")) {
            String fname = Util.getStackFieldName_by_Ctype(sig.getResult());
            String vname = Util.getStackName_by_Ctype(sig.getResult());
            ret = vname + "stack[sp]." + fname + " = ";
        }
        if (m.isSync()) {
            if (m.isStatic()) {
                add("    " + AssistLLVM.FUNC_JTHREAD_LOCK + "(runtime, (JObject *)g_classes[" + AssistLLVM.getClassIndex(className) + "].clazz);");
            } else {
                add("    " + AssistLLVM.FUNC_JTHREAD_LOCK + "(runtime, __ins);");
            }
        }
        add("    " + ret + "__func_p(" + sb.toString() + ");");
        if (m.isSync()) {
            if (m.isStatic()) {
                add("    " + AssistLLVM.FUNC_JTHREAD_UNLOCK + "(runtime, (JObject *)g_classes[" + AssistLLVM.getClassIndex(className) + "].clazz);");
            } else {
                add("    " + AssistLLVM.FUNC_JTHREAD_UNLOCK + "(runtime, __ins);");
            }
        }
        add("    sp += " + sig.getSlotSizeOfResult() + ";");
        add("    if (runtime->exception) {");
        add("        rstack[sp++].obj = runtime->exception;");
        add("        goto " + errHandLab + ";");
        add("    }");
        add("}");
    }

    public void newString(String src) {
        int strIndex = AssistLLVM.getStrIndex(src);
        add("rstack[sp++].obj = " + AssistLLVM.FUNC_CONSTRUCT_STRING_WITH_UTF_INDEX + "(runtime, " + strIndex + ");");
    }

    public void _new(String className) {

        // state
        int classIndex = AssistLLVM.getClassIndex(className);
        // out
        comment("new " + className);
        add("rstack[sp++].obj = " + AssistLLVM.FUNC_NEW_INSTANCE_WITH_RAWINDEX + "(runtime, " + classIndex + ");");

    }

    public void newArray(String javaArrayType) {
        multiArr("[" + javaArrayType, 1);
    }

    public void multiArr(String s, int dims) {

        String type = Util.getJavaSignatureCtype(s);
        int index = AssistLLVM.getStrIndex(s);
        comment("; newarray/multiarray Dimension Array: " + s + " " + dims);
        add("{");
        add("    s32 dim[" + dims + "];");
        for (int i = dims - 1; i >= 0; i--) {
            add("    dim[" + i + "] = stack[--sp].i;");
        }
        add("    static JClass *clazz = NULL;");
        add("    if (!clazz)clazz = " + AssistLLVM.FUNC_ARRAY_CLASS_CREATE_GET + "(" + AssistLLVM.FUNC_GET_UTF_8_STR_BY_UTFRAW_INDEX + "(" + index + "));");
        add("    rstack[sp++].obj = " + AssistLLVM.FUNC_MULTI_ARRAY_CREATE + "(runtime, dim, " + dims + ", clazz);");
        add("}");
    }

    public void putfield(String className, String name, String signature) {
        comment("putfield " + className + " " + name + " " + signature);
        FieldData field = ClassManger.findField(className, name, signature);

        String ty = Util.getCtype_by_className(className);
        String fname = Util.getStackFieldName_by_Jtype(signature);
        String vname = Util.getStackName_by_Jtype(signature);
        add("sp -= " + (Util.getSlot_by_Jtype(signature) + 1) + ";");
        add("((" + ty + ")rstack[sp + 0].obj)->" + getFieldVarName(field) + " = " + vname + "stack[sp + 1]." + fname + ";");
    }

    public void putstatic(String className, String name, String signature) {
        comment("putstatic " + className + " " + name + " " + signature);
        FieldData field = ClassManger.findField(className, name, signature);

        String fname = Util.getStackFieldName_by_Jtype(signature);
        String vname = Util.getStackName_by_Jtype(signature);
        add("sp -= " + Util.getSlot_by_Jtype(signature) + ";");
        add(Util.getStaticFieldStructVarName(field.getDeclaringClass().getClassName()) + "." + getFieldVarName(field) + " = " + vname + "stack[sp]." + fname + ";");
    }


    public void getfield(String className, String name, String signature) {
        comment("getfield " + className + " " + name + " " + signature);
        FieldData field = ClassManger.findField(className, name, signature);

        String ty = Util.getCtype_by_className(className);
        String fname = Util.getStackFieldName_by_Jtype(signature);
        String vname = Util.getStackName_by_Jtype(signature);
        add(vname + "stack[sp - 1]." + fname + " = ((" + ty + ")rstack[sp - 1].obj)->" + getFieldVarName(field) + ";");
        add("sp += " + (Util.getSlot_by_Jtype(signature) - 1) + ";");
    }

    public void getstatic(String className, String name, String signature) {
        comment("getstatic " + className + " " + name + " " + signature);
        FieldData field = ClassManger.findField(className, name, signature);

        String fname = Util.getStackFieldName_by_Jtype(signature);
        String vname = Util.getStackName_by_Jtype(signature);
        add(vname + "stack[sp]." + fname + " =" + Util.getStaticFieldStructVarName(field.getDeclaringClass().getClassName()) + "." + getFieldVarName(field) + ";");
        add("sp += " + Util.getSlot_by_Jtype(signature) + ";");
    }

    public void arrstore(String ctype) {
        String fname = Util.getStackFieldName_by_Ctype(ctype);
        String vname = Util.getStackName_by_Ctype(ctype);
        String arrName = Util.getArrayName_by_Ctype(ctype);
        comment("arrstore " + ctype + "  ,  " + curLabel + " bc index = ");// + curLabel.getOffset());
        add("{");
        add("    " + (Util.getSlot_by_Ctype(ctype) == 2 ? "--sp;" : ";"));
        add("    " + ctype + " value = " + vname + "stack[--sp]." + fname + ";");
        add("    s32 idx = stack[--sp].i;");
        add("    " + STR_JARRAY_TYPE_NAME + " *arr = rstack[--sp].obj;");
        add("    if (!arr) {");
        add("        rstack[sp++].obj = " + AssistLLVM.FUNC_CONSTRUCT_AND_THROW_EXCEPTION + "(runtime, " + AssistLLVM.getClassIndex(CLASS_JAVA_LANG_NULL_POINTER_EXCEPTION) + ", ");// + curLabel.getOffset() + ", " + curLineNo + ");");
        add("        goto " + EXCEPTION_HANDLER + ";");
        add("    } else if (idx < 0 || idx >= arr->prop.arr_length) {");
        add("        rstack[sp++].obj = " + AssistLLVM.FUNC_CONSTRUCT_AND_THROW_EXCEPTION + "(runtime, " + AssistLLVM.getClassIndex(CLASS_JAVA_LANG_ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION) + ", ");// + curLabel.getOffset() + ", " + curLineNo + ");");
        add("        goto " + MV.EXCEPTION_HANDLER + ";");
        add("    }");
        add("    arr->prop." + arrName + "[idx] = value;");
        add("}");
    }

    public void arrload(String ctype) {
        String fname = Util.getStackFieldName_by_Ctype(ctype);
        String vname = Util.getStackName_by_Ctype(ctype);
        String arrName = Util.getArrayName_by_Ctype(ctype);
        comment("arrload " + ctype + "  ,  " + curLabel + " bc index = ");// + curLabel.getOffset());
        add("{");
        add("    s32 idx = stack[--sp].i;");
        add("    " + STR_JARRAY_TYPE_NAME + " *arr = rstack[--sp].obj;");
        add("    if (!arr) {");
        add("        rstack[sp++].obj = " + AssistLLVM.FUNC_CONSTRUCT_AND_THROW_EXCEPTION + "(runtime, " + AssistLLVM.getClassIndex(CLASS_JAVA_LANG_NULL_POINTER_EXCEPTION) + ", ");// + curLabel.getOffset() + ", " + curLineNo + ");");
        add("        goto " + EXCEPTION_HANDLER + ";");
        add("    } else if (idx < 0 || idx >= arr->prop.arr_length) {");
        add("        rstack[sp++].obj = " + AssistLLVM.FUNC_CONSTRUCT_AND_THROW_EXCEPTION + "(runtime, " + AssistLLVM.getClassIndex(CLASS_JAVA_LANG_ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION) + ", ");// + curLabel.getOffset() + ", " + curLineNo + ");");
        add("        goto " + MV.EXCEPTION_HANDLER + ";");
        add("    }");
        add("    " + vname + "stack[sp]." + fname + " = arr->prop." + arrName + "[idx];");
        add("    sp += " + Util.getSlot_by_Ctype(ctype) + ";");
        add("}");
    }
}
