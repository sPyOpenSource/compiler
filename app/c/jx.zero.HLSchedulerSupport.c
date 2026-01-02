// CLASS: jx/zero/HLSchedulerSupport extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_HLSchedulerSupport_static {};



__refer arr_vmtable_jx_zero_HLSchedulerSupport_from_jx_zero_HLSchedulerSupport[] = {
    func_jx_zero_HLSchedulerSupport_activateThread__Ljx_zero_CPUState_2_V,  //0
    func_jx_zero_HLSchedulerSupport_activateService__Ljx_zero_CPUStateLink_2_Z,  //1
    func_jx_zero_HLSchedulerSupport_yield___V,  //2
    func_jx_zero_HLSchedulerSupport_clearMyRunnableFlag___V,  //3
    func_jx_zero_HLSchedulerSupport_getTimeBaseInMicros___I,  //4
    func_jx_zero_HLSchedulerSupport_getDomainTimeslice___I,  //5
    func_jx_zero_HLSchedulerSupport_setMyTimeslice__I_V,  //6
    func_jx_zero_HLSchedulerSupport_setTimeslice__Ljx_zero_Domain_2I_V,  //7
    func_jx_zero_HLSchedulerSupport_storeThreadInfo__Ljx_zero_CPUState_2Ljava_lang_Object_2_V,  //8
    func_jx_zero_HLSchedulerSupport_getThreadInfo__Ljx_zero_CPUState_2_Ljava_lang_Object_2,  //9
    func_jx_zero_HLSchedulerSupport_dumpThread__Ljx_zero_CPUState_2_V  //10
};
__refer arr_vmtable_jx_zero_HLSchedulerSupport_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_HLSchedulerSupport_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_HLSchedulerSupport[] = {
    {344, 11, arr_vmtable_jx_zero_HLSchedulerSupport_from_jx_zero_HLSchedulerSupport}, //0
    {5, 10, arr_vmtable_jx_zero_HLSchedulerSupport_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_HLSchedulerSupport_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 1
void func_jx_zero_HLSchedulerSupport_activateThread__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2393, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_HLSchedulerSupport_activateThread__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_HLSchedulerSupport_activateThread__Ljx_zero_CPUState_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_HLSchedulerSupport_activateService__Ljx_zero_CPUStateLink_2_Z(JThreadRuntime *runtime, struct jx_zero_CPUStateLink* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2394, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_HLSchedulerSupport_activateService__Ljx_zero_CPUStateLink_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_HLSchedulerSupport_activateService__Ljx_zero_CPUStateLink_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_HLSchedulerSupport_yield___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2395, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_HLSchedulerSupport_yield___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_HLSchedulerSupport_yield___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_HLSchedulerSupport_clearMyRunnableFlag___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2396, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_HLSchedulerSupport_clearMyRunnableFlag___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_HLSchedulerSupport_clearMyRunnableFlag___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_HLSchedulerSupport_getTimeBaseInMicros___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2397, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_HLSchedulerSupport_getTimeBaseInMicros___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_HLSchedulerSupport_getTimeBaseInMicros___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_HLSchedulerSupport_getDomainTimeslice___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2398, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_HLSchedulerSupport_getDomainTimeslice___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_HLSchedulerSupport_getDomainTimeslice___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_HLSchedulerSupport_setMyTimeslice__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2399, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_HLSchedulerSupport_setMyTimeslice__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_HLSchedulerSupport_setMyTimeslice__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_HLSchedulerSupport_setTimeslice__Ljx_zero_Domain_2I_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2400, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_HLSchedulerSupport_setTimeslice__Ljx_zero_Domain_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_HLSchedulerSupport_setTimeslice__Ljx_zero_Domain_2I_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_HLSchedulerSupport_storeThreadInfo__Ljx_zero_CPUState_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct jx_zero_CPUState* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2401, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_HLSchedulerSupport_storeThreadInfo__Ljx_zero_CPUState_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_HLSchedulerSupport_storeThreadInfo__Ljx_zero_CPUState_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_Object* func_jx_zero_HLSchedulerSupport_getThreadInfo__Ljx_zero_CPUState_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2402, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_HLSchedulerSupport_getThreadInfo__Ljx_zero_CPUState_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_HLSchedulerSupport_getThreadInfo__Ljx_zero_CPUState_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_HLSchedulerSupport_dumpThread__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2403, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_HLSchedulerSupport_dumpThread__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_HLSchedulerSupport_dumpThread__Ljx_zero_CPUState_2_V(runtime, ins);
}


