// CLASS: jx/zero/CPUState extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_CPUState_static {s32 STATE_1INIT_0; s32 STATE_1RUNNABLE_1; s32 STATE_1ZOMBIE_2; s32 STATE_1SLEEPING_3; s32 STATE_1WAITING_4; s32 STATE_1WAITPORTAL0_5; s32 STATE_1WAITPORTAL1_6; s32 STATE_1BLOCKEDUSER_7;  };
struct jx_zero_CPUState_static static_var_jx_zero_CPUState = {0, 0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_jx_zero_CPUState_from_jx_zero_CPUState[] = {
    func_jx_zero_CPUState_getState___I,  //0
    func_jx_zero_CPUState_isPortalThread___Z,  //1
    func_jx_zero_CPUState_getNext___Ljx_zero_CPUState_2,  //2
    func_jx_zero_CPUState_setNext__Ljx_zero_CPUState_2_Ljx_zero_CPUState_2  //3
};
__refer arr_vmtable_jx_zero_CPUState_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_CPUState_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_CPUState[] = {
    {214, 4, arr_vmtable_jx_zero_CPUState_from_jx_zero_CPUState}, //0
    {5, 10, arr_vmtable_jx_zero_CPUState_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_CPUState_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_CPUState_getState___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1195, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUState_getState___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUState_getState___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_zero_CPUState_isPortalThread___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1196, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUState_isPortalThread___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUState_isPortalThread___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_CPUState* func_jx_zero_CPUState_getNext___Ljx_zero_CPUState_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1197, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUState_getNext___Ljx_zero_CPUState_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUState_getNext___Ljx_zero_CPUState_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct jx_zero_CPUState* func_jx_zero_CPUState_setNext__Ljx_zero_CPUState_2_Ljx_zero_CPUState_2(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1198, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUState_setNext__Ljx_zero_CPUState_2_Ljx_zero_CPUState_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUState_setNext__Ljx_zero_CPUState_2_Ljx_zero_CPUState_2(runtime, ins);
}


