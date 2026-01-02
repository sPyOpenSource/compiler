// CLASS: java/lang/ArrayIndexOutOfBoundsException extends java/lang/RuntimeException
#include "metadata.h"


// generation
// globals
//struct java_lang_ArrayIndexOutOfBoundsException_static {};



__refer arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_ArrayIndexOutOfBoundsException[] = {
    NULL
};
__refer arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_RuntimeException[] = {
    NULL
};
__refer arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_Exception[] = {
    NULL
};
__refer arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_Throwable[] = {
    func_java_lang_Throwable_getMessage___Ljava_lang_String_2,  //0
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //1
    func_java_lang_Throwable_getStackTrace____3Ljava_lang_StackTraceElement_2,  //2
    func_java_lang_Throwable_getCodeStack___Ljava_lang_String_2,  //3
    func_java_lang_Throwable_printStackTrace___V  //4
};
__refer arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_Object[] = {
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_Object_hashCode___I  //9
};
VMTable vmtable_java_lang_ArrayIndexOutOfBoundsException[] = {
    {6, 0, arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_ArrayIndexOutOfBoundsException}, //0
    {108, 0, arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_RuntimeException}, //1
    {55, 0, arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_Exception}, //2
    {56, 5, arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_Throwable}, //3
    {5, 10, arr_vmtable_java_lang_ArrayIndexOutOfBoundsException_from_java_lang_Object}, //4
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_ArrayIndexOutOfBoundsException__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 829, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 7 , L1047478056 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/RuntimeException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_RuntimeException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 8 , L2115628016 , bytecode index = 
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

void bridge_java_lang_ArrayIndexOutOfBoundsException__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ArrayIndexOutOfBoundsException__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 830, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 11 , L1935122449 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 11;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/RuntimeException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_RuntimeException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 12 , L872826668 , bytecode index = 
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

void bridge_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_ArrayIndexOutOfBoundsException__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 831, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 15 , L110053477 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/RuntimeException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_RuntimeException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 16 , L1209411469 , bytecode index = 
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

void bridge_java_lang_ArrayIndexOutOfBoundsException__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ArrayIndexOutOfBoundsException__init___I_V(runtime, ins);
}


