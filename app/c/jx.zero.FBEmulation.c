// CLASS: jx/zero/FBEmulation extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_FBEmulation_static {};



__refer arr_vmtable_jx_zero_FBEmulation_from_jx_zero_FBEmulation[] = {
    func_jx_zero_FBEmulation_getVideoMemory___Ljx_zero_DeviceMemory_2,  //0
    func_jx_zero_FBEmulation_getWidth___I,  //1
    func_jx_zero_FBEmulation_getHeight___I,  //2
    func_jx_zero_FBEmulation_getBytesPerLine___I,  //3
    func_jx_zero_FBEmulation_getBitsPerPixel___I,  //4
    func_jx_zero_FBEmulation_update___V,  //5
    func_jx_zero_FBEmulation_inputDevicesAvailable___Z,  //6
    func_jx_zero_FBEmulation_checkEvent__Ljx_zero_FBEmulationEvent_2_Z,  //7
    func_jx_zero_FBEmulation_open__I_Z  //8
};
__refer arr_vmtable_jx_zero_FBEmulation_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_FBEmulation_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_FBEmulation[] = {
    {272, 9, arr_vmtable_jx_zero_FBEmulation_from_jx_zero_FBEmulation}, //0
    {5, 10, arr_vmtable_jx_zero_FBEmulation_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_FBEmulation_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
struct jx_zero_DeviceMemory* func_jx_zero_FBEmulation_getVideoMemory___Ljx_zero_DeviceMemory_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1584, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_FBEmulation_getVideoMemory___Ljx_zero_DeviceMemory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_FBEmulation_getVideoMemory___Ljx_zero_DeviceMemory_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_FBEmulation_getWidth___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1585, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_FBEmulation_getWidth___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_FBEmulation_getWidth___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_FBEmulation_getHeight___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1586, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_FBEmulation_getHeight___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_FBEmulation_getHeight___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_FBEmulation_getBytesPerLine___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1587, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_FBEmulation_getBytesPerLine___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_FBEmulation_getBytesPerLine___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_FBEmulation_getBitsPerPixel___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1588, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_FBEmulation_getBitsPerPixel___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_FBEmulation_getBitsPerPixel___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_FBEmulation_update___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1589, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_FBEmulation_update___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_FBEmulation_update___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_zero_FBEmulation_inputDevicesAvailable___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1590, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_FBEmulation_inputDevicesAvailable___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_FBEmulation_inputDevicesAvailable___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_FBEmulation_checkEvent__Ljx_zero_FBEmulationEvent_2_Z(JThreadRuntime *runtime, struct jx_zero_FBEmulationEvent* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1591, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_FBEmulation_checkEvent__Ljx_zero_FBEmulationEvent_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_FBEmulation_checkEvent__Ljx_zero_FBEmulationEvent_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_FBEmulation_open__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1592, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_FBEmulation_open__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_FBEmulation_open__I_Z(runtime, ins);
}


