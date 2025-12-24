// CLASS: java/lang/invoke/InnerClassLambdaMetafactory extends java/lang/invoke/AbstractValidatingLambdaMetafactory
#include "metadata.h"


// generation
// globals
//struct java_lang_invoke_InnerClassLambdaMetafactory_static {s32 CLASSFILE_1VERSION_15; struct java_lang_String* JAVA_1LANG_1OBJECT_16; struct java_lang_String* NAME_1CTOR_17; struct java_lang_String* NAME_1FACTORY_18; struct java_lang_String* NAME_1SERIALIZED_1LAMBDA_19; struct java_lang_String* NAME_1NOT_1SERIALIZABLE_1EXCEPTION_20; struct java_lang_String* DESCR_1METHOD_1WRITE_1REPLACE_21; struct java_lang_String* DESCR_1METHOD_1WRITE_1OBJECT_22; struct java_lang_String* DESCR_1METHOD_1READ_1OBJECT_23; struct java_lang_String* NAME_1METHOD_1WRITE_1REPLACE_24; struct java_lang_String* NAME_1METHOD_1READ_1OBJECT_25; struct java_lang_String* NAME_1METHOD_1WRITE_1OBJECT_26; struct java_lang_String* DESCR_1CTOR_1SERIALIZED_1LAMBDA_27; struct java_lang_String* DESCR_1CTOR_1NOT_1SERIALIZABLE_1EXCEPTION_28; JArray * SER_1HOSTILE_1EXCEPTIONS_29; JArray * EMPTY_1STRING_1ARRAY_30; struct java_lang_invoke_ProxyClassesDumper* dumper_31;  };
struct java_lang_invoke_InnerClassLambdaMetafactory_static static_var_java_lang_invoke_InnerClassLambdaMetafactory = {0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};


__refer arr_vmtable_java_lang_invoke_InnerClassLambdaMetafactory_from_java_lang_invoke_InnerClassLambdaMetafactory[] = {
    func_java_lang_invoke_InnerClassLambdaMetafactory_buildCallSite___Ljava_lang_invoke_CallSite_2  //0
};
__refer arr_vmtable_java_lang_invoke_InnerClassLambdaMetafactory_from_java_lang_invoke_AbstractValidatingLambdaMetafactory[] = {
    func_java_lang_invoke_InnerClassLambdaMetafactory_buildCallSite___Ljava_lang_invoke_CallSite_2,  //0
    func_java_lang_invoke_AbstractValidatingLambdaMetafactory_validateMetafactoryArgs___V  //1
};
__refer arr_vmtable_java_lang_invoke_InnerClassLambdaMetafactory_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_lang_invoke_InnerClassLambdaMetafactory[] = {
    {109, 1, arr_vmtable_java_lang_invoke_InnerClassLambdaMetafactory_from_java_lang_invoke_InnerClassLambdaMetafactory}, //0
    {110, 2, arr_vmtable_java_lang_invoke_InnerClassLambdaMetafactory_from_java_lang_invoke_AbstractValidatingLambdaMetafactory}, //1
    {10, 11, arr_vmtable_java_lang_invoke_InnerClassLambdaMetafactory_from_java_lang_Object}, //2
};



// locals: 10
// stack: 10
// args: 9
void func_java_lang_invoke_InnerClassLambdaMetafactory__init___Ljava_lang_invoke_MethodHandles_00024Lookup_2Ljava_lang_invoke_MethodType_2Ljava_lang_String_2Ljava_lang_invoke_MethodType_2Ljava_lang_invoke_MethodHandle_2Ljava_lang_invoke_MethodType_2Z_3Ljava_lang_Class_2_3Ljava_lang_invoke_MethodType_2_V(JThreadRuntime *runtime, struct java_lang_invoke_MethodHandles_00024Lookup* p0, struct java_lang_invoke_MethodType* p1, struct java_lang_String* p2, struct java_lang_invoke_MethodType* p3, struct java_lang_invoke_MethodHandle* p4, struct java_lang_invoke_MethodType* p5, s8 p6, JArray * p7, JArray * p8){
    
    StackItem local[10] = {0};
    RStackItem rlocal[10] = {0};
    StackItem stack[11];
    RStackItem rstack[11];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 319, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    rlocal[4].obj = p4;
    rlocal[5].obj = p5;
    local[6].i = p6;
    rlocal[7].obj = p7;
    rlocal[8].obj = p8;
    ; 
    //  line no 138 , L1862383967 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 138;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[8].obj;
    rstack[sp++].obj = rlocal[9].obj;
    // invokespecial java/lang/invoke/AbstractValidatingLambdaMetafactory.<init>(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MethodType;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Z[Ljava/lang/Class;[Ljava/lang/invoke/MethodType;)V
    {
        sp -= 9;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_invoke_AbstractValidatingLambdaMetafactory__init___Ljava_lang_invoke_MethodHandles_00024Lookup_2Ljava_lang_invoke_MethodType_2Ljava_lang_String_2Ljava_lang_invoke_MethodType_2Ljava_lang_invoke_MethodHandle_2Ljava_lang_invoke_MethodType_2Z_3Ljava_lang_Class_2_3Ljava_lang_invoke_MethodType_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj, rstack[sp + 4].obj, rstack[sp + 5].obj, stack[sp + 6].i, rstack[sp + 7].obj, rstack[sp + 8].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 142 , L1074263646 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/invoke/InnerClassLambdaMetafactory implInfo Ljava/lang/invoke/MethodHandleInfo;
    rstack[sp - 1].obj = ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp - 1].obj)->implInfo_6;
    sp += 0;
    // invokeinterface java/lang/invoke/MethodHandleInfo.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 107, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/invoke/InnerClassLambdaMetafactory implMethodName Ljava/lang/String;
    sp -= 2;
    ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp + 0].obj)->implMethodName_33 = rstack[sp + 1].obj;
    ; 
    //  line no 143 , L438589491 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/invoke/InnerClassLambdaMetafactory implMethodType Ljava/lang/invoke/MethodType;
    rstack[sp - 1].obj = ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp - 1].obj)->implMethodType_10;
    sp += 0;
    // invokevirtual java/lang/invoke/MethodType.toMethodDescriptorString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 108, 6);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/invoke/InnerClassLambdaMetafactory implMethodDesc Ljava/lang/String;
    sp -= 2;
    ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp + 0].obj)->implMethodDesc_34 = rstack[sp + 1].obj;
    ; 
    //  line no 147 , L1732238286 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getstatic java/lang/Void TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Void.TYPE_0;
    sp += 1;
    // invokevirtual java/lang/invoke/MethodType.changeReturnType(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_invoke_MethodType* (*__func_p) (JThreadRuntime *,struct java_lang_Class*) = find_method(__ins->vm_table, 108, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/invoke/InnerClassLambdaMetafactory constructorType Ljava/lang/invoke/MethodType;
    sp -= 2;
    ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp + 0].obj)->constructorType_36 = rstack[sp + 1].obj;
    ; 
    //  line no 148 , L93740343 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/invoke/InnerClassLambdaMetafactory targetClass Ljava/lang/Class;
    rstack[sp - 1].obj = ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp - 1].obj)->targetClass_0;
    sp += 0;
    // invokevirtual java/lang/Class.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 46
    stack[sp++].i = 46;
    //  bipush 47
    stack[sp++].i = 47;
    // invokevirtual java/lang/String.replace(CC)Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,u16,u16) = find_method(__ins->vm_table, 9, 20);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 741);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/invoke/InnerClassLambdaMetafactory lambdaClassName Ljava/lang/String;
    sp -= 2;
    ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp + 0].obj)->lambdaClassName_39 = rstack[sp + 1].obj;
    ; 
    //  line no 161 , L2052910813 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic java/lang/invoke/InnerClassLambdaMetafactory dumper Ljava/lang/invoke/ProxyClassesDumper;
    sp -= 1;
    static_var_java_lang_invoke_InnerClassLambdaMetafactory.dumper_31 = rstack[sp].obj;
    ; 
    //  line no 162 , L1107412069 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/invoke/InnerClassLambdaMetafactory argNames [Ljava/lang/String;
    sp -= 2;
    ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp + 0].obj)->argNames_37 = rstack[sp + 1].obj;
    ; 
    //  line no 163 , L1534694976 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/invoke/InnerClassLambdaMetafactory argDescs [Ljava/lang/String;
    sp -= 2;
    ((struct java_lang_invoke_InnerClassLambdaMetafactory*)rstack[sp + 0].obj)->argDescs_38 = rstack[sp + 1].obj;
    ; 
    //  line no 164 , L1823541245 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory__init___Ljava_lang_invoke_MethodHandles_00024Lookup_2Ljava_lang_invoke_MethodType_2Ljava_lang_String_2Ljava_lang_invoke_MethodType_2Ljava_lang_invoke_MethodHandle_2Ljava_lang_invoke_MethodType_2Z_3Ljava_lang_Class_2_3Ljava_lang_invoke_MethodType_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_InnerClassLambdaMetafactory__init___Ljava_lang_invoke_MethodHandles_00024Lookup_2Ljava_lang_invoke_MethodType_2Ljava_lang_String_2Ljava_lang_invoke_MethodType_2Ljava_lang_invoke_MethodHandle_2Ljava_lang_invoke_MethodType_2Z_3Ljava_lang_Class_2_3Ljava_lang_invoke_MethodType_2_V(runtime, ins, para[0].obj, para[1].obj, para[2].obj, para[3].obj, para[4].obj, para[5].i, para[6].obj, para[7].obj);
}


// locals: 1
// stack: 3
// args: 0
struct java_lang_invoke_CallSite* func_java_lang_invoke_InnerClassLambdaMetafactory_buildCallSite___Ljava_lang_invoke_CallSite_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 320, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 218 , L1038677529 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 218;
    // new java/lang/UnsupportedOperationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 24);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 209);
    // invokespecial java/lang/UnsupportedOperationException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_UnsupportedOperationException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1038677529 in labeltable is :L1038677529
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 218;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory_buildCallSite___Ljava_lang_invoke_CallSite_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_InnerClassLambdaMetafactory_buildCallSite___Ljava_lang_invoke_CallSite_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_lang_Class* func_java_lang_invoke_InnerClassLambdaMetafactory_spinInnerClass___Ljava_lang_Class_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 321, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 237 , L1314838582 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 237;
    // new java/lang/UnsupportedOperationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 24);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 209);
    // invokespecial java/lang/UnsupportedOperationException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_UnsupportedOperationException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1314838582 in labeltable is :L1314838582
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 237;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory_spinInnerClass___Ljava_lang_Class_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_InnerClassLambdaMetafactory_spinInnerClass___Ljava_lang_Class_2(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_lang_invoke_InnerClassLambdaMetafactory_generateFactory___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 322, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 258 , L1947185929 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 258;
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory_generateFactory___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_InnerClassLambdaMetafactory_generateFactory___V(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_lang_invoke_InnerClassLambdaMetafactory_generateConstructor___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 323, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 283 , L1139814130 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 283;
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory_generateConstructor___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_InnerClassLambdaMetafactory_generateConstructor___V(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_lang_invoke_InnerClassLambdaMetafactory_generateSerializationFriendlyMethods___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 324, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 323 , L713312506 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 323;
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory_generateSerializationFriendlyMethods___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_InnerClassLambdaMetafactory_generateSerializationFriendlyMethods___V(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_lang_invoke_InnerClassLambdaMetafactory_generateSerializationHostileMethods___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 325, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 354 , L770010802 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 354;
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory_generateSerializationHostileMethods___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_InnerClassLambdaMetafactory_generateSerializationHostileMethods___V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
s32 func_java_lang_invoke_InnerClassLambdaMetafactory_getParameterSize__Ljava_lang_Class_2_I(JThreadRuntime *runtime, struct java_lang_invoke_InnerClassLambdaMetafactory* p0, struct java_lang_Class* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 326, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 437 , L1464191502 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 437;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/Void TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Void.TYPE_0;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L987249254;
    ; 
    //  line no 438 , L1020154737 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L987249254:
    //  line no 439 , L987249254 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/Long TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Long.TYPE_0;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L398457879;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/Double TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Double.TYPE_5;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1850954068;
    L398457879:
    //  line no 440 , L398457879 , bytecode index = 
    // iconst_2
    stack[sp++].i = 2;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1850954068:
    //  line no 442 , L1850954068 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory_getParameterSize__Ljava_lang_Class_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_invoke_InnerClassLambdaMetafactory_getParameterSize__Ljava_lang_Class_2_I(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 2
s32 func_java_lang_invoke_InnerClassLambdaMetafactory_getOpcodeOffset__Ljava_lang_Class_2_I(JThreadRuntime *runtime, struct java_lang_invoke_InnerClassLambdaMetafactory* p0, struct java_lang_Class* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 327, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 460 , L1530446316 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 460;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.isPrimitive()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 14);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L865059288;
    ; 
    //  line no 461 , L1193471756 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/Long TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Long.TYPE_0;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1222768327;
    ; 
    //  line no 462 , L1439394198 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1222768327:
    //  line no 463 , L1222768327 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/Float TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Float.TYPE_5;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L403170294;
    ; 
    //  line no 464 , L1208825205 , bytecode index = 
    // iconst_2
    stack[sp++].i = 2;
    method_exit(runtime);
    return stack[sp - 1].i;
    L403170294:
    //  line no 465 , L403170294 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/Double TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Double.TYPE_5;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L253601149;
    ; 
    //  line no 466 , L26540753 , bytecode index = 
    // iconst_3
    stack[sp++].i = 3;
    method_exit(runtime);
    return stack[sp - 1].i;
    L253601149:
    //  line no 468 , L253601149 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L865059288:
    //  line no 470 , L865059288 , bytecode index = 
    // iconst_4
    stack[sp++].i = 4;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory_getOpcodeOffset__Ljava_lang_Class_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_invoke_InnerClassLambdaMetafactory_getOpcodeOffset__Ljava_lang_Class_2_I(runtime, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 4
// args: 1
void func_java_lang_invoke_InnerClassLambdaMetafactory__clinit____V(JThreadRuntime *runtime, struct java_lang_invoke_InnerClassLambdaMetafactory* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 328, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 52 , L120360571 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 52;
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic java/lang/invoke/InnerClassLambdaMetafactory DESCR_CTOR_SERIALIZED_LAMBDA Ljava/lang/String;
    sp -= 1;
    static_var_java_lang_invoke_InnerClassLambdaMetafactory.DESCR_1CTOR_1SERIALIZED_1LAMBDA_27 = rstack[sp].obj;
    ; 
    //  line no 59 , L1710814638 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic java/lang/invoke/InnerClassLambdaMetafactory DESCR_CTOR_NOT_SERIALIZABLE_EXCEPTION Ljava/lang/String;
    sp -= 1;
    static_var_java_lang_invoke_InnerClassLambdaMetafactory.DESCR_1CTOR_1NOT_1SERIALIZABLE_1EXCEPTION_28 = rstack[sp].obj;
    ; 
    //  line no 61 , L1125964210 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(374));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 757);
    // arrstore __refer  ,  L1125964210 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    // putstatic java/lang/invoke/InnerClassLambdaMetafactory SER_HOSTILE_EXCEPTIONS [Ljava/lang/String;
    sp -= 1;
    static_var_java_lang_invoke_InnerClassLambdaMetafactory.SER_1HOSTILE_1EXCEPTIONS_29 = rstack[sp].obj;
    ; 
    //  line no 64 , L944140566 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(374));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic java/lang/invoke/InnerClassLambdaMetafactory EMPTY_STRING_ARRAY [Ljava/lang/String;
    sp -= 1;
    static_var_java_lang_invoke_InnerClassLambdaMetafactory.EMPTY_1STRING_1ARRAY_30 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_invoke_InnerClassLambdaMetafactory__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_InnerClassLambdaMetafactory__clinit____V(runtime, para[0].obj);
}


