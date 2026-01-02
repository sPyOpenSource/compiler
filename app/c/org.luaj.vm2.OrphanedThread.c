// CLASS: org/luaj/vm2/OrphanedThread extends java/lang/Error
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_OrphanedThread_static {};



__refer arr_vmtable_org_luaj_vm2_OrphanedThread_from_org_luaj_vm2_OrphanedThread[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_OrphanedThread_from_java_lang_Error[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_OrphanedThread_from_java_lang_Throwable[] = {
    func_java_lang_Throwable_getMessage___Ljava_lang_String_2,  //0
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //1
    func_java_lang_Throwable_getStackTrace____3Ljava_lang_StackTraceElement_2,  //2
    func_java_lang_Throwable_getCodeStack___Ljava_lang_String_2,  //3
    func_java_lang_Throwable_printStackTrace___V  //4
};
__refer arr_vmtable_org_luaj_vm2_OrphanedThread_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_OrphanedThread[] = {
    {335, 0, arr_vmtable_org_luaj_vm2_OrphanedThread_from_org_luaj_vm2_OrphanedThread}, //0
    {93, 0, arr_vmtable_org_luaj_vm2_OrphanedThread_from_java_lang_Error}, //1
    {56, 5, arr_vmtable_org_luaj_vm2_OrphanedThread_from_java_lang_Throwable}, //2
    {5, 10, arr_vmtable_org_luaj_vm2_OrphanedThread_from_java_lang_Object}, //3
};



// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_OrphanedThread__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2404, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 42 , L724128993 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 42;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4159);
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 43 , L1490478426 , bytecode index = 
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

void bridge_org_luaj_vm2_OrphanedThread__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_OrphanedThread__init____V(runtime, ins);
}


