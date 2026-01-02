// CLASS: java/io/EOFException extends java/io/IOException
#include "metadata.h"


// generation
// globals
//struct java_io_EOFException_static {};



__refer arr_vmtable_java_io_EOFException_from_java_io_EOFException[] = {
    NULL
};
__refer arr_vmtable_java_io_EOFException_from_java_io_IOException[] = {
    NULL
};
__refer arr_vmtable_java_io_EOFException_from_java_lang_Exception[] = {
    NULL
};
__refer arr_vmtable_java_io_EOFException_from_java_lang_Throwable[] = {
    func_java_lang_Throwable_getMessage___Ljava_lang_String_2,  //0
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //1
    func_java_lang_Throwable_getStackTrace____3Ljava_lang_StackTraceElement_2,  //2
    func_java_lang_Throwable_getCodeStack___Ljava_lang_String_2,  //3
    func_java_lang_Throwable_printStackTrace___V  //4
};
__refer arr_vmtable_java_io_EOFException_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_EOFException[] = {
    {174, 0, arr_vmtable_java_io_EOFException_from_java_io_EOFException}, //0
    {152, 0, arr_vmtable_java_io_EOFException_from_java_io_IOException}, //1
    {55, 0, arr_vmtable_java_io_EOFException_from_java_lang_Exception}, //2
    {56, 5, arr_vmtable_java_io_EOFException_from_java_lang_Throwable}, //3
    {5, 10, arr_vmtable_java_io_EOFException_from_java_lang_Object}, //4
};



// locals: 1
// stack: 1
// args: 0
void func_java_io_EOFException__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 917, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 12 , L1757317128 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 12;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/IOException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_IOException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 13 , L840514538 , bytecode index = 
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

void bridge_java_io_EOFException__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_EOFException__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_EOFException__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 918, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 17 , L1768242710 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 17;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_IOException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 18 , L1971783162 , bytecode index = 
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

void bridge_java_io_EOFException__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_EOFException__init___Ljava_lang_String_2_V(runtime, ins);
}


