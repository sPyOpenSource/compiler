// CLASS: jx/net/IPReceiver extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_net_IPReceiver_static {};



__refer arr_vmtable_jx_net_IPReceiver_from_jx_net_IPReceiver[] = {
    func_jx_net_IPReceiver_receive__Ljx_zero_Memory_2I_Ljx_net_IPData_2,  //0
    func_jx_net_IPReceiver_receive__Ljx_zero_Memory_2_Ljx_net_IPData_2,  //1
    func_jx_net_IPReceiver_close___V  //2
};
__refer arr_vmtable_jx_net_IPReceiver_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_net_IPReceiver_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_net_IPReceiver[] = {
    {115, 3, arr_vmtable_jx_net_IPReceiver_from_jx_net_IPReceiver}, //0
    {10, 11, arr_vmtable_jx_net_IPReceiver_from_java_lang_Object}, //1
    {35, 0, arr_vmtable_jx_net_IPReceiver_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 2
struct jx_net_IPData* func_jx_net_IPReceiver_receive__Ljx_zero_Memory_2I_Ljx_net_IPData_2(JThreadRuntime *runtime, struct jx_zero_Memory* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 332, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_IPReceiver_receive__Ljx_zero_Memory_2I_Ljx_net_IPData_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_IPReceiver_receive__Ljx_zero_Memory_2I_Ljx_net_IPData_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 1
struct jx_net_IPData* func_jx_net_IPReceiver_receive__Ljx_zero_Memory_2_Ljx_net_IPData_2(JThreadRuntime *runtime, struct jx_zero_Memory* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 333, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_IPReceiver_receive__Ljx_zero_Memory_2_Ljx_net_IPData_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_IPReceiver_receive__Ljx_zero_Memory_2_Ljx_net_IPData_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_net_IPReceiver_close___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 334, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_net_IPReceiver_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_IPReceiver_close___V(runtime, ins);
}


