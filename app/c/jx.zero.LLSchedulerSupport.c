// CLASS: jx/zero/LLSchedulerSupport extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_LLSchedulerSupport_static {};



__refer arr_vmtable_jx_zero_LLSchedulerSupport_from_jx_zero_LLSchedulerSupport[] = {
    func_jx_zero_LLSchedulerSupport_preemptCurrentThread___Ljx_zero_CPUState_2,  //0
    func_jx_zero_LLSchedulerSupport_interruptCurrentThread___Ljx_zero_CPUState_2,  //1
    func_jx_zero_LLSchedulerSupport_activateDomain__Ljx_zero_Domain_2_V,  //2
    func_jx_zero_LLSchedulerSupport_activateIdleThread___V,  //3
    func_jx_zero_LLSchedulerSupport_isRunnable__Ljx_zero_Domain_2_Z,  //4
    func_jx_zero_LLSchedulerSupport_getDomainTimeslice___I,  //5
    func_jx_zero_LLSchedulerSupport_tuneTimer__I_V,  //6
    func_jx_zero_LLSchedulerSupport_readTimer___I,  //7
    func_jx_zero_LLSchedulerSupport_dumpDomain__Ljx_zero_Domain_2_V,  //8
    func_jx_zero_LLSchedulerSupport_dumpHLSched__Ljx_zero_Domain_2_V,  //9
    func_jx_zero_LLSchedulerSupport_printDomainName__Ljx_zero_Domain_2_V  //10
};
__refer arr_vmtable_jx_zero_LLSchedulerSupport_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_LLSchedulerSupport_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_LLSchedulerSupport[] = {
    {213, 11, arr_vmtable_jx_zero_LLSchedulerSupport_from_jx_zero_LLSchedulerSupport}, //0
    {5, 10, arr_vmtable_jx_zero_LLSchedulerSupport_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_LLSchedulerSupport_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
struct jx_zero_CPUState* func_jx_zero_LLSchedulerSupport_preemptCurrentThread___Ljx_zero_CPUState_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1184, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_LLSchedulerSupport_preemptCurrentThread___Ljx_zero_CPUState_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_LLSchedulerSupport_preemptCurrentThread___Ljx_zero_CPUState_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_CPUState* func_jx_zero_LLSchedulerSupport_interruptCurrentThread___Ljx_zero_CPUState_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1185, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_LLSchedulerSupport_interruptCurrentThread___Ljx_zero_CPUState_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_LLSchedulerSupport_interruptCurrentThread___Ljx_zero_CPUState_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_LLSchedulerSupport_activateDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1186, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LLSchedulerSupport_activateDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LLSchedulerSupport_activateDomain__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_LLSchedulerSupport_activateIdleThread___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1187, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LLSchedulerSupport_activateIdleThread___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LLSchedulerSupport_activateIdleThread___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_LLSchedulerSupport_isRunnable__Ljx_zero_Domain_2_Z(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1188, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_LLSchedulerSupport_isRunnable__Ljx_zero_Domain_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_LLSchedulerSupport_isRunnable__Ljx_zero_Domain_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_LLSchedulerSupport_getDomainTimeslice___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1189, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_LLSchedulerSupport_getDomainTimeslice___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_LLSchedulerSupport_getDomainTimeslice___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_LLSchedulerSupport_tuneTimer__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1190, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LLSchedulerSupport_tuneTimer__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LLSchedulerSupport_tuneTimer__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_LLSchedulerSupport_readTimer___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1191, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_LLSchedulerSupport_readTimer___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_LLSchedulerSupport_readTimer___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_LLSchedulerSupport_dumpDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1192, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LLSchedulerSupport_dumpDomain__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LLSchedulerSupport_dumpDomain__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_LLSchedulerSupport_dumpHLSched__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1193, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LLSchedulerSupport_dumpHLSched__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LLSchedulerSupport_dumpHLSched__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_LLSchedulerSupport_printDomainName__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1194, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_LLSchedulerSupport_printDomainName__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_LLSchedulerSupport_printDomainName__Ljx_zero_Domain_2_V(runtime, ins);
}


