// CLASS: jx/net/UDPData extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_net_UDPData_static {};



__refer arr_vmtable_jx_net_UDPData_from_jx_net_UDPData[] = {
    func_jx_net_UDPData_setMemory__Ljx_zero_Memory_2_V,  //0
    func_jx_net_UDPData_setSourcePort__I_V,  //1
    func_jx_net_UDPData_setSourceAddress__Ljx_net_IPAddress_2_V,  //2
    func_jx_net_UDPData_Size___I,  //3
    func_jx_net_UDPData_getOffset___I,  //4
    func_jx_net_UDPData_getMemory___Ljx_zero_Memory_2,  //5
    func_jx_net_UDPData_getSourceAddress___Ljx_net_IPAddress_2,  //6
    func_jx_net_UDPData_getSourcePort___I  //7
};
__refer arr_vmtable_jx_net_UDPData_from_java_lang_Object[] = {
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
VMTable vmtable_jx_net_UDPData[] = {
    {44, 8, arr_vmtable_jx_net_UDPData_from_jx_net_UDPData}, //0
    {10, 11, arr_vmtable_jx_net_UDPData_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 1
void func_jx_net_UDPData_setMemory__Ljx_zero_Memory_2_V(JThreadRuntime *runtime, struct jx_zero_Memory* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 161, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_net_UDPData_setMemory__Ljx_zero_Memory_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_UDPData_setMemory__Ljx_zero_Memory_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_net_UDPData_setSourcePort__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 162, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_net_UDPData_setSourcePort__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_UDPData_setSourcePort__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_net_UDPData_setSourceAddress__Ljx_net_IPAddress_2_V(JThreadRuntime *runtime, struct jx_net_IPAddress* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 163, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_net_UDPData_setSourceAddress__Ljx_net_IPAddress_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_UDPData_setSourceAddress__Ljx_net_IPAddress_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_net_UDPData_Size___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 164, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_net_UDPData_Size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_net_UDPData_Size___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_net_UDPData_getOffset___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 165, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_net_UDPData_getOffset___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_net_UDPData_getOffset___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Memory* func_jx_net_UDPData_getMemory___Ljx_zero_Memory_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 166, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_UDPData_getMemory___Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_UDPData_getMemory___Ljx_zero_Memory_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_net_IPAddress* func_jx_net_UDPData_getSourceAddress___Ljx_net_IPAddress_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 167, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_UDPData_getSourceAddress___Ljx_net_IPAddress_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_UDPData_getSourceAddress___Ljx_net_IPAddress_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_net_UDPData_getSourcePort___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 168, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_net_UDPData_getSourcePort___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_net_UDPData_getSourcePort___I(runtime, ins);
}


