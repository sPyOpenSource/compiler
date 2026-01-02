// CLASS: jx/zero/SMPCPUManager extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_SMPCPUManager_static {};



__refer arr_vmtable_jx_zero_SMPCPUManager_from_jx_zero_SMPCPUManager[] = {
    func_jx_zero_SMPCPUManager_start__Ljx_zero_CPUState_2Ljx_zero_CPU_2_Z,  //0
    func_jx_zero_SMPCPUManager_unblock__Ljx_zero_CPUState_2Ljx_zero_CPU_2_Z,  //1
    func_jx_zero_SMPCPUManager_swap_1HLScheduler__Ljx_zero_CPU_2Ljx_zero_Domain_2Ljx_zero_scheduler_HighLevelScheduler_2Ljx_zero_scheduler_HighLevelScheduler_2_V,  //2
    func_jx_zero_SMPCPUManager_register_1LLScheduler__Ljx_zero_CPU_2Ljx_zero_LowLevelScheduler_2_V,  //3
    func_jx_zero_SMPCPUManager_sendIPI__Ljx_zero_CPU_2I_V,  //4
    func_jx_zero_SMPCPUManager_getMyCPU___Ljx_zero_CPU_2,  //5
    func_jx_zero_SMPCPUManager_getNumCPUs___I,  //6
    func_jx_zero_SMPCPUManager_getCPU__I_Ljx_zero_CPU_2,  //7
    func_jx_zero_SMPCPUManager_test__I_I,  //8
    func_jx_zero_SMPCPUManager_test2__I_I,  //9
    func_jx_zero_SMPCPUManager_test_1setAPICTimer__I_I,  //10
    func_jx_zero_SMPCPUManager_dump__Ljx_zero_CPU_2_V,  //11
    func_jx_zero_SMPCPUManager_createMutex___Ljx_zero_Mutex_2  //12
};
__refer arr_vmtable_jx_zero_SMPCPUManager_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_SMPCPUManager_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_SMPCPUManager[] = {
    {145, 13, arr_vmtable_jx_zero_SMPCPUManager_from_jx_zero_SMPCPUManager}, //0
    {5, 10, arr_vmtable_jx_zero_SMPCPUManager_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_SMPCPUManager_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 2
s8 func_jx_zero_SMPCPUManager_start__Ljx_zero_CPUState_2Ljx_zero_CPU_2_Z(JThreadRuntime *runtime, struct jx_zero_CPUState* p0, struct jx_zero_CPU* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 760, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_SMPCPUManager_start__Ljx_zero_CPUState_2Ljx_zero_CPU_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_SMPCPUManager_start__Ljx_zero_CPUState_2Ljx_zero_CPU_2_Z(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
s8 func_jx_zero_SMPCPUManager_unblock__Ljx_zero_CPUState_2Ljx_zero_CPU_2_Z(JThreadRuntime *runtime, struct jx_zero_CPUState* p0, struct jx_zero_CPU* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 761, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_SMPCPUManager_unblock__Ljx_zero_CPUState_2Ljx_zero_CPU_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_SMPCPUManager_unblock__Ljx_zero_CPUState_2Ljx_zero_CPU_2_Z(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 4
void func_jx_zero_SMPCPUManager_swap_1HLScheduler__Ljx_zero_CPU_2Ljx_zero_Domain_2Ljx_zero_scheduler_HighLevelScheduler_2Ljx_zero_scheduler_HighLevelScheduler_2_V(JThreadRuntime *runtime, struct jx_zero_CPU* p0, struct jx_zero_Domain* p1, struct jx_zero_scheduler_HighLevelScheduler* p2, struct jx_zero_scheduler_HighLevelScheduler* p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 762, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_SMPCPUManager_swap_1HLScheduler__Ljx_zero_CPU_2Ljx_zero_Domain_2Ljx_zero_scheduler_HighLevelScheduler_2Ljx_zero_scheduler_HighLevelScheduler_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_SMPCPUManager_swap_1HLScheduler__Ljx_zero_CPU_2Ljx_zero_Domain_2Ljx_zero_scheduler_HighLevelScheduler_2Ljx_zero_scheduler_HighLevelScheduler_2_V(runtime, ins, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_SMPCPUManager_register_1LLScheduler__Ljx_zero_CPU_2Ljx_zero_LowLevelScheduler_2_V(JThreadRuntime *runtime, struct jx_zero_CPU* p0, struct jx_zero_LowLevelScheduler* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 763, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_SMPCPUManager_register_1LLScheduler__Ljx_zero_CPU_2Ljx_zero_LowLevelScheduler_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_SMPCPUManager_register_1LLScheduler__Ljx_zero_CPU_2Ljx_zero_LowLevelScheduler_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_SMPCPUManager_sendIPI__Ljx_zero_CPU_2I_V(JThreadRuntime *runtime, struct jx_zero_CPU* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 764, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_SMPCPUManager_sendIPI__Ljx_zero_CPU_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_SMPCPUManager_sendIPI__Ljx_zero_CPU_2I_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_CPU* func_jx_zero_SMPCPUManager_getMyCPU___Ljx_zero_CPU_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 765, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_SMPCPUManager_getMyCPU___Ljx_zero_CPU_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_SMPCPUManager_getMyCPU___Ljx_zero_CPU_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_SMPCPUManager_getNumCPUs___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 766, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_SMPCPUManager_getNumCPUs___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_SMPCPUManager_getNumCPUs___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct jx_zero_CPU* func_jx_zero_SMPCPUManager_getCPU__I_Ljx_zero_CPU_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 767, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_SMPCPUManager_getCPU__I_Ljx_zero_CPU_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_SMPCPUManager_getCPU__I_Ljx_zero_CPU_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_SMPCPUManager_test__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 768, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_SMPCPUManager_test__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_SMPCPUManager_test__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_SMPCPUManager_test2__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 769, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_SMPCPUManager_test2__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_SMPCPUManager_test2__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_SMPCPUManager_test_1setAPICTimer__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 770, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_SMPCPUManager_test_1setAPICTimer__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_SMPCPUManager_test_1setAPICTimer__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_SMPCPUManager_dump__Ljx_zero_CPU_2_V(JThreadRuntime *runtime, struct jx_zero_CPU* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 771, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_SMPCPUManager_dump__Ljx_zero_CPU_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_SMPCPUManager_dump__Ljx_zero_CPU_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Mutex* func_jx_zero_SMPCPUManager_createMutex___Ljx_zero_Mutex_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 772, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_SMPCPUManager_createMutex___Ljx_zero_Mutex_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_SMPCPUManager_createMutex___Ljx_zero_Mutex_2(runtime, ins);
}


