// CLASS: jx/net/UDPSender extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_net_UDPSender_static {};



__refer arr_vmtable_jx_net_UDPSender_from_jx_net_UDPSender[] = {
    func_jx_net_UDPSender_send__Ljx_zero_Memory_2_Ljx_zero_Memory_2,  //0
    func_jx_net_UDPSender_send1__Ljx_zero_Memory_2II_Ljx_zero_Memory_2,  //1
    func_jx_net_UDPSender_close___V,  //2
    func_jx_net_UDPSender_getLocalPort___I,  //3
    func_jx_net_UDPSender_getRemotePort___I,  //4
    func_jx_net_UDPSender_getDestination___Ljx_net_IPAddress_2  //5
};
__refer arr_vmtable_jx_net_UDPSender_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_net_UDPSender_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_net_UDPSender[] = {
    {191, 6, arr_vmtable_jx_net_UDPSender_from_jx_net_UDPSender}, //0
    {10, 11, arr_vmtable_jx_net_UDPSender_from_java_lang_Object}, //1
    {35, 0, arr_vmtable_jx_net_UDPSender_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 1
struct jx_zero_Memory* func_jx_net_UDPSender_send__Ljx_zero_Memory_2_Ljx_zero_Memory_2(JThreadRuntime *runtime, struct jx_zero_Memory* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 685, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_UDPSender_send__Ljx_zero_Memory_2_Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_UDPSender_send__Ljx_zero_Memory_2_Ljx_zero_Memory_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
struct jx_zero_Memory* func_jx_net_UDPSender_send1__Ljx_zero_Memory_2II_Ljx_zero_Memory_2(JThreadRuntime *runtime, struct jx_zero_Memory* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 686, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_UDPSender_send1__Ljx_zero_Memory_2II_Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_UDPSender_send1__Ljx_zero_Memory_2II_Ljx_zero_Memory_2(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_net_UDPSender_close___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 687, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_net_UDPSender_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_UDPSender_close___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_net_UDPSender_getLocalPort___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 688, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_net_UDPSender_getLocalPort___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_net_UDPSender_getLocalPort___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_net_UDPSender_getRemotePort___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 689, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_net_UDPSender_getRemotePort___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_net_UDPSender_getRemotePort___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_net_IPAddress* func_jx_net_UDPSender_getDestination___Ljx_net_IPAddress_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 690, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_UDPSender_getDestination___Ljx_net_IPAddress_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_UDPSender_getDestination___Ljx_net_IPAddress_2(runtime, ins);
}


