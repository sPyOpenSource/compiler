// CLASS: jx/zero/CPUManager extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_CPUManager_static {};



__refer arr_vmtable_jx_zero_CPUManager_from_jx_zero_CPUManager[] = {
    func_jx_zero_CPUManager_yield___V,  //0
    func_jx_zero_CPUManager_sleep__II_V,  //1
    func_jx_zero_CPUManager_wait__Ljava_lang_Object_2II_V,  //2
    func_jx_zero_CPUManager_notify__Ljava_lang_Object_2_V,  //3
    func_jx_zero_CPUManager_notifyAll__Ljava_lang_Object_2_V,  //4
    func_jx_zero_CPUManager_dump__Ljava_lang_String_2Ljava_lang_Object_2_V,  //5
    func_jx_zero_CPUManager_switchTo__Ljx_zero_CPUState_2_V,  //6
    func_jx_zero_CPUManager_getCPUState___Ljx_zero_CPUState_2,  //7
    func_jx_zero_CPUManager_block___V,  //8
    func_jx_zero_CPUManager_blockIfNotUnblocked___V,  //9
    func_jx_zero_CPUManager_clearUnblockFlag___V,  //10
    func_jx_zero_CPUManager_waitUntilBlocked__Ljx_zero_CPUState_2_V,  //11
    func_jx_zero_CPUManager_join__Ljx_zero_CPUState_2_V,  //12
    func_jx_zero_CPUManager_unblock__Ljx_zero_CPUState_2_Z,  //13
    func_jx_zero_CPUManager_createCPUState__Ljx_zero_ThreadEntry_2_Ljx_zero_CPUState_2,  //14
    func_jx_zero_CPUManager_start__Ljx_zero_CPUState_2_Z,  //15
    func_jx_zero_CPUManager_printStackTrace___V,  //16
    func_jx_zero_CPUManager_getAtomicVariable___Ljx_zero_AtomicVariable_2,  //17
    func_jx_zero_CPUManager_setThreadName__Ljava_lang_String_2_V,  //18
    func_jx_zero_CPUManager_attachToThread__Ljava_lang_Object_2_V,  //19
    func_jx_zero_CPUManager_getAttachedObject___Ljava_lang_Object_2,  //20
    func_jx_zero_CPUManager_getCredential___Ljx_zero_Credential_2,  //21
    func_jx_zero_CPUManager_createNewEvent__Ljava_lang_String_2_I,  //22
    func_jx_zero_CPUManager_recordEvent__I_V,  //23
    func_jx_zero_CPUManager_recordEventWithInfo__II_V,  //24
    func_jx_zero_CPUManager_getCAS__Ljava_lang_String_2Ljava_lang_String_2_Ljx_zero_CAS_2,  //25
    func_jx_zero_CPUManager_getClass__Ljava_lang_String_2_Ljx_zero_VMClass_2,  //26
    func_jx_zero_CPUManager_getVMClass__Ljava_lang_Object_2_Ljx_zero_VMClass_2,  //27
    func_jx_zero_CPUManager_getVMObject___Ljx_zero_VMObject_2,  //28
    func_jx_zero_CPUManager_assertInterruptEnabled___V,  //29
    func_jx_zero_CPUManager_executeClassConstructors__I_V,  //30
    func_jx_zero_CPUManager_reboot___V,  //31
    func_jx_zero_CPUManager_getStackDepth___I,  //32
    func_jx_zero_CPUManager_getStackFrameClassName__I_Ljava_lang_String_2,  //33
    func_jx_zero_CPUManager_getStackFrameMethodName__I_Ljava_lang_String_2,  //34
    func_jx_zero_CPUManager_getStackFrameLine__I_I,  //35
    func_jx_zero_CPUManager_getStackFrameBytecode__I_I,  //36
    func_jx_zero_CPUManager_inhibitScheduling___V,  //37
    func_jx_zero_CPUManager_allowScheduling___V  //38
};
__refer arr_vmtable_jx_zero_CPUManager_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_CPUManager_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_CPUManager[] = {
    {401, 39, arr_vmtable_jx_zero_CPUManager_from_jx_zero_CPUManager}, //0
    {5, 10, arr_vmtable_jx_zero_CPUManager_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_CPUManager_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_yield___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3017, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_yield___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_yield___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_CPUManager_sleep__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3018, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_sleep__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_sleep__II_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_CPUManager_wait__Ljava_lang_Object_2II_V(JThreadRuntime *runtime, struct java_lang_Object* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3019, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_wait__Ljava_lang_Object_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_wait__Ljava_lang_Object_2II_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_notify__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3020, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_notify__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_notify__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_notifyAll__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3021, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_notifyAll__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_notifyAll__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_CPUManager_dump__Ljava_lang_String_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3022, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_dump__Ljava_lang_String_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_dump__Ljava_lang_String_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_switchTo__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3023, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_switchTo__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_switchTo__Ljx_zero_CPUState_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_CPUState* func_jx_zero_CPUManager_getCPUState___Ljx_zero_CPUState_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3024, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getCPUState___Ljx_zero_CPUState_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getCPUState___Ljx_zero_CPUState_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_block___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3025, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_block___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_block___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_blockIfNotUnblocked___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3026, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_blockIfNotUnblocked___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_blockIfNotUnblocked___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_clearUnblockFlag___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3027, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_clearUnblockFlag___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_clearUnblockFlag___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_waitUntilBlocked__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3028, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_waitUntilBlocked__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_waitUntilBlocked__Ljx_zero_CPUState_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_join__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3029, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_join__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_join__Ljx_zero_CPUState_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_CPUManager_unblock__Ljx_zero_CPUState_2_Z(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3030, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUManager_unblock__Ljx_zero_CPUState_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUManager_unblock__Ljx_zero_CPUState_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct jx_zero_CPUState* func_jx_zero_CPUManager_createCPUState__Ljx_zero_ThreadEntry_2_Ljx_zero_CPUState_2(JThreadRuntime *runtime, struct jx_zero_ThreadEntry* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3031, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_createCPUState__Ljx_zero_ThreadEntry_2_Ljx_zero_CPUState_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_createCPUState__Ljx_zero_ThreadEntry_2_Ljx_zero_CPUState_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_CPUManager_start__Ljx_zero_CPUState_2_Z(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3032, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUManager_start__Ljx_zero_CPUState_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUManager_start__Ljx_zero_CPUState_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_printStackTrace___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3033, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_printStackTrace___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_printStackTrace___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_AtomicVariable* func_jx_zero_CPUManager_getAtomicVariable___Ljx_zero_AtomicVariable_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3034, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getAtomicVariable___Ljx_zero_AtomicVariable_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getAtomicVariable___Ljx_zero_AtomicVariable_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_setThreadName__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3035, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_setThreadName__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_setThreadName__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_attachToThread__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3036, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_attachToThread__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_attachToThread__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_Object* func_jx_zero_CPUManager_getAttachedObject___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3037, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getAttachedObject___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getAttachedObject___Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Credential* func_jx_zero_CPUManager_getCredential___Ljx_zero_Credential_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3038, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getCredential___Ljx_zero_Credential_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getCredential___Ljx_zero_Credential_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_CPUManager_createNewEvent__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3039, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUManager_createNewEvent__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUManager_createNewEvent__Ljava_lang_String_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_recordEvent__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3040, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_recordEvent__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_recordEvent__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_CPUManager_recordEventWithInfo__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3041, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_recordEventWithInfo__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_recordEventWithInfo__II_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
struct jx_zero_CAS* func_jx_zero_CPUManager_getCAS__Ljava_lang_String_2Ljava_lang_String_2_Ljx_zero_CAS_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3042, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getCAS__Ljava_lang_String_2Ljava_lang_String_2_Ljx_zero_CAS_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getCAS__Ljava_lang_String_2Ljava_lang_String_2_Ljx_zero_CAS_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct jx_zero_VMClass* func_jx_zero_CPUManager_getClass__Ljava_lang_String_2_Ljx_zero_VMClass_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3043, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getClass__Ljava_lang_String_2_Ljx_zero_VMClass_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getClass__Ljava_lang_String_2_Ljx_zero_VMClass_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct jx_zero_VMClass* func_jx_zero_CPUManager_getVMClass__Ljava_lang_Object_2_Ljx_zero_VMClass_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3044, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getVMClass__Ljava_lang_Object_2_Ljx_zero_VMClass_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getVMClass__Ljava_lang_Object_2_Ljx_zero_VMClass_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_VMObject* func_jx_zero_CPUManager_getVMObject___Ljx_zero_VMObject_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3045, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getVMObject___Ljx_zero_VMObject_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getVMObject___Ljx_zero_VMObject_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_assertInterruptEnabled___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3046, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_assertInterruptEnabled___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_assertInterruptEnabled___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_CPUManager_executeClassConstructors__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3047, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_executeClassConstructors__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_executeClassConstructors__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_reboot___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3048, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_reboot___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_reboot___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_CPUManager_getStackDepth___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3049, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUManager_getStackDepth___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUManager_getStackDepth___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_String* func_jx_zero_CPUManager_getStackFrameClassName__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3050, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getStackFrameClassName__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getStackFrameClassName__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_String* func_jx_zero_CPUManager_getStackFrameMethodName__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3051, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CPUManager_getStackFrameMethodName__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CPUManager_getStackFrameMethodName__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_CPUManager_getStackFrameLine__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3052, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUManager_getStackFrameLine__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUManager_getStackFrameLine__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_CPUManager_getStackFrameBytecode__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3053, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUManager_getStackFrameBytecode__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUManager_getStackFrameBytecode__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_inhibitScheduling___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3054, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_inhibitScheduling___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_inhibitScheduling___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_CPUManager_allowScheduling___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3055, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CPUManager_allowScheduling___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUManager_allowScheduling___V(runtime, ins);
}


