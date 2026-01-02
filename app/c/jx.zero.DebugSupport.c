// CLASS: jx/zero/DebugSupport extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_DebugSupport_static {};



__refer arr_vmtable_jx_zero_DebugSupport_from_jx_zero_DebugSupport[] = {
    func_jx_zero_DebugSupport_dumpDomain__Ljx_zero_Domain_2_V,  //0
    func_jx_zero_DebugSupport_dumpObject__Ljava_lang_Object_2_V,  //1
    func_jx_zero_DebugSupport_sendBinary__Ljava_lang_String_2Ljx_zero_Memory_2I_V,  //2
    func_jx_zero_DebugSupport_registerMonitorCommand__Ljava_lang_String_2Ljx_zero_debug_MonitorCommand_2_V,  //3
    func_jx_zero_DebugSupport_breakpoint___V  //4
};
__refer arr_vmtable_jx_zero_DebugSupport_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_DebugSupport_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_DebugSupport[] = {
    {241, 5, arr_vmtable_jx_zero_DebugSupport_from_jx_zero_DebugSupport}, //0
    {5, 10, arr_vmtable_jx_zero_DebugSupport_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_DebugSupport_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 1
void func_jx_zero_DebugSupport_dumpDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1299, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DebugSupport_dumpDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DebugSupport_dumpDomain__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_DebugSupport_dumpObject__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1300, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DebugSupport_dumpObject__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DebugSupport_dumpObject__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_DebugSupport_sendBinary__Ljava_lang_String_2Ljx_zero_Memory_2I_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct jx_zero_Memory* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1301, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DebugSupport_sendBinary__Ljava_lang_String_2Ljx_zero_Memory_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DebugSupport_sendBinary__Ljava_lang_String_2Ljx_zero_Memory_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_DebugSupport_registerMonitorCommand__Ljava_lang_String_2Ljx_zero_debug_MonitorCommand_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct jx_zero_debug_MonitorCommand* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1302, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DebugSupport_registerMonitorCommand__Ljava_lang_String_2Ljx_zero_debug_MonitorCommand_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DebugSupport_registerMonitorCommand__Ljava_lang_String_2Ljx_zero_debug_MonitorCommand_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_DebugSupport_breakpoint___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1303, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DebugSupport_breakpoint___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DebugSupport_breakpoint___V(runtime, ins);
}


