// CLASS: java/io/IOException extends java/lang/Exception
#include "metadata.h"


// generation
// globals
//struct java_io_IOException_static {s64 serialVersionUID_12;  };
struct java_io_IOException_static static_var_java_io_IOException = {0};


__refer arr_vmtable_java_io_IOException_from_java_io_IOException[] = {
    NULL
};
__refer arr_vmtable_java_io_IOException_from_java_lang_Exception[] = {
    NULL
};
__refer arr_vmtable_java_io_IOException_from_java_lang_Throwable[] = {
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //0
    func_java_lang_Throwable_getMessage___Ljava_lang_String_2,  //1
    func_java_lang_Throwable_printStackTrace___V,  //2
    func_java_lang_Throwable_printStackTrace__Ljava_io_PrintStream_2_V,  //3
    func_java_lang_Throwable_getLocalizedMessage___Ljava_lang_String_2,  //4
    func_java_lang_Throwable_initCause__Ljava_lang_Throwable_2_Ljava_lang_Throwable_2,  //5
    func_java_lang_Throwable_addSuppressed__Ljava_lang_Throwable_2_V,  //6
    func_java_lang_Throwable_getStackTrace____3Ljava_lang_StackTraceElement_2  //7
};
__refer arr_vmtable_java_io_IOException_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_io_IOException[] = {
    {63, 0, arr_vmtable_java_io_IOException_from_java_io_IOException}, //0
    {21, 0, arr_vmtable_java_io_IOException_from_java_lang_Exception}, //1
    {22, 8, arr_vmtable_java_io_IOException_from_java_lang_Throwable}, //2
    {10, 11, arr_vmtable_java_io_IOException_from_java_lang_Object}, //3
};



// locals: 1
// stack: 1
// args: 0
void func_java_io_IOException__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 655, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 12 , L61073295 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 12;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Exception.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Exception__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 13 , L807322507 , bytecode index = 
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

void bridge_java_io_IOException__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_IOException__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_IOException__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 656, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 23 , L283039401 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 23;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/Exception.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Exception__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 24 , L207471778 , bytecode index = 
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

void bridge_java_io_IOException__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_IOException__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_java_io_IOException__init___Ljava_lang_String_2Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Throwable* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 657, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 46 , L1376151044 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 46;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/Exception.<init>(Ljava/lang/String;Ljava/lang/Throwable;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Exception__init___Ljava_lang_String_2Ljava_lang_Throwable_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 47 , L873175411 , bytecode index = 
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

void bridge_java_io_IOException__init___Ljava_lang_String_2Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_IOException__init___Ljava_lang_String_2Ljava_lang_Throwable_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_IOException__init___Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, struct java_lang_Throwable* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 658, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 64 , L1449772539 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/Exception.<init>(Ljava/lang/Throwable;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Exception__init___Ljava_lang_Throwable_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 65 , L926859124 , bytecode index = 
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

void bridge_java_io_IOException__init___Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_IOException__init___Ljava_lang_Throwable_2_V(runtime, ins);
}


