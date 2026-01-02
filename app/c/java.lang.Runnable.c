// CLASS: java/lang/Runnable extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_Runnable_static {};



__refer arr_vmtable_java_lang_Runnable_from_java_lang_Runnable[] = {
    func_java_lang_Runnable_run___V  //0
};
__refer arr_vmtable_java_lang_Runnable_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_lang_Runnable[] = {
    {314, 1, arr_vmtable_java_lang_Runnable_from_java_lang_Runnable}, //0
    {5, 10, arr_vmtable_java_lang_Runnable_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 0
void func_java_lang_Runnable_run___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1961, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_Runnable_run___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Runnable_run___V(runtime, ins);
}


