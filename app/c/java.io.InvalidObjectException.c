// CLASS: java/io/InvalidObjectException extends java/io/ObjectStreamException
#include "metadata.h"


// generation
// globals
//struct java_io_InvalidObjectException_static {};



__refer arr_vmtable_java_io_InvalidObjectException_from_java_io_InvalidObjectException[] = {
    NULL
};
__refer arr_vmtable_java_io_InvalidObjectException_from_java_io_ObjectStreamException[] = {
    NULL
};
__refer arr_vmtable_java_io_InvalidObjectException_from_java_io_IOException[] = {
    NULL
};
__refer arr_vmtable_java_io_InvalidObjectException_from_java_lang_Exception[] = {
    NULL
};
__refer arr_vmtable_java_io_InvalidObjectException_from_java_lang_Throwable[] = {
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //0
    func_java_lang_Throwable_getMessage___Ljava_lang_String_2,  //1
    func_java_lang_Throwable_printStackTrace___V,  //2
    func_java_lang_Throwable_printStackTrace__Ljava_io_PrintStream_2_V,  //3
    func_java_lang_Throwable_getLocalizedMessage___Ljava_lang_String_2,  //4
    func_java_lang_Throwable_initCause__Ljava_lang_Throwable_2_Ljava_lang_Throwable_2,  //5
    func_java_lang_Throwable_addSuppressed__Ljava_lang_Throwable_2_V,  //6
    func_java_lang_Throwable_getStackTrace____3Ljava_lang_StackTraceElement_2  //7
};
__refer arr_vmtable_java_io_InvalidObjectException_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_io_InvalidObjectException_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_java_io_InvalidObjectException[] = {
    {61, 0, arr_vmtable_java_io_InvalidObjectException_from_java_io_InvalidObjectException}, //0
    {62, 0, arr_vmtable_java_io_InvalidObjectException_from_java_io_ObjectStreamException}, //1
    {63, 0, arr_vmtable_java_io_InvalidObjectException_from_java_io_IOException}, //2
    {21, 0, arr_vmtable_java_io_InvalidObjectException_from_java_lang_Exception}, //3
    {22, 8, arr_vmtable_java_io_InvalidObjectException_from_java_lang_Throwable}, //4
    {10, 11, arr_vmtable_java_io_InvalidObjectException_from_java_lang_Object}, //5
    {64, 0, arr_vmtable_java_io_InvalidObjectException_from_java_io_Serializable}, //6
};



// locals: 2
// stack: 2
// args: 1
void func_java_io_InvalidObjectException__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 197, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 53 , L837108062 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 53;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/io/ObjectStreamException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_io_ObjectStreamException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 54 , L170144208 , bytecode index = 
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

void bridge_java_io_InvalidObjectException__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_InvalidObjectException__init___Ljava_lang_String_2_V(runtime, ins);
}


