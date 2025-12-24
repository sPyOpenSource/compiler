// CLASS: jx/bootrc/StringTokenException extends java/lang/Exception
#include "metadata.h"


// generation
// globals
//struct jx_bootrc_StringTokenException_static {};



__refer arr_vmtable_jx_bootrc_StringTokenException_from_jx_bootrc_StringTokenException[] = {
    NULL
};
__refer arr_vmtable_jx_bootrc_StringTokenException_from_java_lang_Exception[] = {
    NULL
};
__refer arr_vmtable_jx_bootrc_StringTokenException_from_java_lang_Throwable[] = {
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //0
    func_java_lang_Throwable_getMessage___Ljava_lang_String_2,  //1
    func_java_lang_Throwable_printStackTrace___V,  //2
    func_java_lang_Throwable_printStackTrace__Ljava_io_PrintStream_2_V,  //3
    func_java_lang_Throwable_getLocalizedMessage___Ljava_lang_String_2,  //4
    func_java_lang_Throwable_initCause__Ljava_lang_Throwable_2_Ljava_lang_Throwable_2,  //5
    func_java_lang_Throwable_addSuppressed__Ljava_lang_Throwable_2_V,  //6
    func_java_lang_Throwable_getStackTrace____3Ljava_lang_StackTraceElement_2  //7
};
__refer arr_vmtable_jx_bootrc_StringTokenException_from_java_lang_Object[] = {
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
VMTable vmtable_jx_bootrc_StringTokenException[] = {
    {222, 0, arr_vmtable_jx_bootrc_StringTokenException_from_jx_bootrc_StringTokenException}, //0
    {21, 0, arr_vmtable_jx_bootrc_StringTokenException_from_java_lang_Exception}, //1
    {22, 8, arr_vmtable_jx_bootrc_StringTokenException_from_java_lang_Throwable}, //2
    {10, 11, arr_vmtable_jx_bootrc_StringTokenException_from_java_lang_Object}, //3
};



// locals: 1
// stack: 1
// args: 0
void func_jx_bootrc_StringTokenException__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 555, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 3 , L1541697437 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 3;
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

void bridge_jx_bootrc_StringTokenException__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bootrc_StringTokenException__init____V(runtime, ins);
}


