// CLASS: java/lang/invoke/BoundMethodHandle$SpeciesData extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_invoke_BoundMethodHandle_00024SpeciesData_static {struct java_lang_invoke_BoundMethodHandle_00024SpeciesData* EMPTY_0;  };
struct java_lang_invoke_BoundMethodHandle_00024SpeciesData_static static_var_java_lang_invoke_BoundMethodHandle_00024SpeciesData = {NULL};


__refer arr_vmtable_java_lang_invoke_BoundMethodHandle_00024SpeciesData_from_java_lang_invoke_BoundMethodHandle_00024SpeciesData[] = {
    NULL
};
__refer arr_vmtable_java_lang_invoke_BoundMethodHandle_00024SpeciesData_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_invoke_BoundMethodHandle_00024SpeciesData[] = {
    {257, 0, arr_vmtable_java_lang_invoke_BoundMethodHandle_00024SpeciesData_from_java_lang_invoke_BoundMethodHandle_00024SpeciesData}, //0
    {10, 11, arr_vmtable_java_lang_invoke_BoundMethodHandle_00024SpeciesData_from_java_lang_Object}, //1
};



// locals: 3
// stack: 3
// args: 2
void func_java_lang_invoke_BoundMethodHandle_00024SpeciesData__init___Ljava_lang_String_2Ljava_lang_Class_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Class* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 660, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 275 , L908084672 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 275;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 276 , L288306765 , bytecode index = 
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
    //     L288306765 in labeltable is :L288306765
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 276;
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
    return ;
}

void bridge_java_lang_invoke_BoundMethodHandle_00024SpeciesData__init___Ljava_lang_String_2Ljava_lang_Class_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_BoundMethodHandle_00024SpeciesData__init___Ljava_lang_String_2Ljava_lang_Class_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 3
// args: 1
struct java_lang_invoke_LambdaForm_00024NamedFunction* func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_getterFunction__I_Ljava_lang_invoke_LambdaForm_00024NamedFunction_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 661, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 280 , L1839168128 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 280;
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
    //     L1839168128 in labeltable is :L1839168128
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 280;
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

void bridge_java_lang_invoke_BoundMethodHandle_00024SpeciesData_getterFunction__I_Ljava_lang_invoke_LambdaForm_00024NamedFunction_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_getterFunction__I_Ljava_lang_invoke_LambdaForm_00024NamedFunction_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
s32 func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_fieldCount___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 662, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 284 , L835773569 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 284;
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
    //     L835773569 in labeltable is :L835773569
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 284;
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
    return 0;
}

void bridge_java_lang_invoke_BoundMethodHandle_00024SpeciesData_fieldCount___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_fieldCount___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 2
s32 func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_access_00024100__Ljava_lang_invoke_BoundMethodHandle_00024SpeciesData_2_I(JThreadRuntime *runtime, struct java_lang_invoke_BoundMethodHandle_00024SpeciesData* p0, struct java_lang_invoke_BoundMethodHandle_00024SpeciesData* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 663, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 270 , L605982374 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 270;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/invoke/BoundMethodHandle$SpeciesData.fieldCount()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_fieldCount___I(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_lang_invoke_BoundMethodHandle_00024SpeciesData_access_00024100__Ljava_lang_invoke_BoundMethodHandle_00024SpeciesData_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_access_00024100__Ljava_lang_invoke_BoundMethodHandle_00024SpeciesData_2_I(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_String* func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_access_00024200__Ljava_lang_invoke_BoundMethodHandle_00024SpeciesData_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_invoke_BoundMethodHandle_00024SpeciesData* p0, struct java_lang_invoke_BoundMethodHandle_00024SpeciesData* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 270 , L1651262695 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/invoke/BoundMethodHandle$SpeciesData typeChars Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_lang_invoke_BoundMethodHandle_00024SpeciesData*)rstack[sp - 1].obj)->typeChars_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_lang_invoke_BoundMethodHandle_00024SpeciesData_access_00024200__Ljava_lang_invoke_BoundMethodHandle_00024SpeciesData_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_BoundMethodHandle_00024SpeciesData_access_00024200__Ljava_lang_invoke_BoundMethodHandle_00024SpeciesData_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


