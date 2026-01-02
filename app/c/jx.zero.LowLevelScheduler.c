// CLASS: jx/zero/LowLevelScheduler extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_LowLevelScheduler_static {};



__refer arr_vmtable_jx_zero_LowLevelScheduler_from_jx_zero_LowLevelScheduler[] = {
    func_jx_zero_LowLevelScheduler_activate_1currDomain___V,  //0
    func_jx_zero_LowLevelScheduler_activate_1nextDomain___V,  //1
    func_jx_zero_LowLevelScheduler_registerDomain__Ljx_zero_Domain_2_V,  //2
    func_jx_zero_LowLevelScheduler_unregisterDomain__Ljx_zero_Domain_2_V,  //3
    func_jx_zero_LowLevelScheduler_dump___V,  //4
    func_jx_zero_LowLevelScheduler_setTimeSlice__Ljx_zero_Domain_2I_V,  //5
    func_jx_zero_LowLevelScheduler_registered__I_V  //6
};
__refer arr_vmtable_jx_zero_LowLevelScheduler_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_LowLevelScheduler_from_jx_zero_FirstLevelIrqHandler[] = {
    func_jx_zero_FirstLevelIrqHandler_interrupt___V  //0
};
VMTable vmtable_jx_zero_LowLevelScheduler[] = {
    {338, 7, arr_vmtable_jx_zero_LowLevelScheduler_from_jx_zero_LowLevelScheduler}, //0
    {5, 10, arr_vmtable_jx_zero_LowLevelScheduler_from_java_lang_Object}, //1
    {250, 1, arr_vmtable_jx_zero_LowLevelScheduler_from_jx_zero_FirstLevelIrqHandler}, //2
};



// locals: 0
// stack: 0
// args: 0
void func_jx_zero_LowLevelScheduler_activate_1currDomain___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2254, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LowLevelScheduler_activate_1currDomain___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LowLevelScheduler_activate_1currDomain___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_LowLevelScheduler_activate_1nextDomain___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2255, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LowLevelScheduler_activate_1nextDomain___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LowLevelScheduler_activate_1nextDomain___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_LowLevelScheduler_registerDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2256, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LowLevelScheduler_registerDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LowLevelScheduler_registerDomain__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_LowLevelScheduler_unregisterDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2257, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LowLevelScheduler_unregisterDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LowLevelScheduler_unregisterDomain__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_LowLevelScheduler_dump___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2258, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LowLevelScheduler_dump___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LowLevelScheduler_dump___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_LowLevelScheduler_setTimeSlice__Ljx_zero_Domain_2I_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2259, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LowLevelScheduler_setTimeSlice__Ljx_zero_Domain_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LowLevelScheduler_setTimeSlice__Ljx_zero_Domain_2I_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_LowLevelScheduler_registered__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2260, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LowLevelScheduler_registered__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LowLevelScheduler_registered__I_V(runtime, ins);
}


