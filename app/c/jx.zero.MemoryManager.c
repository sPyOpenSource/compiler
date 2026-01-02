// CLASS: jx/zero/MemoryManager extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_MemoryManager_static {};



__refer arr_vmtable_jx_zero_MemoryManager_from_jx_zero_MemoryManager[] = {
    func_jx_zero_MemoryManager_alloc__I_Ljx_zero_Memory_2,  //0
    func_jx_zero_MemoryManager_allocAligned__II_Ljx_zero_Memory_2,  //1
    func_jx_zero_MemoryManager_allocDeviceMemory__II_Ljx_zero_DeviceMemory_2,  //2
    func_jx_zero_MemoryManager_getTotalMemory___I,  //3
    func_jx_zero_MemoryManager_getTotalFreeMemory___I,  //4
    func_jx_zero_MemoryManager_getFreeHeapMemory___I  //5
};
__refer arr_vmtable_jx_zero_MemoryManager_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_MemoryManager_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_MemoryManager[] = {
    {364, 6, arr_vmtable_jx_zero_MemoryManager_from_jx_zero_MemoryManager}, //0
    {5, 10, arr_vmtable_jx_zero_MemoryManager_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_MemoryManager_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 1
struct jx_zero_Memory* func_jx_zero_MemoryManager_alloc__I_Ljx_zero_Memory_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2610, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_MemoryManager_alloc__I_Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_MemoryManager_alloc__I_Ljx_zero_Memory_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct jx_zero_Memory* func_jx_zero_MemoryManager_allocAligned__II_Ljx_zero_Memory_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2611, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_MemoryManager_allocAligned__II_Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_MemoryManager_allocAligned__II_Ljx_zero_Memory_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
struct jx_zero_DeviceMemory* func_jx_zero_MemoryManager_allocDeviceMemory__II_Ljx_zero_DeviceMemory_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2612, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_MemoryManager_allocDeviceMemory__II_Ljx_zero_DeviceMemory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_MemoryManager_allocDeviceMemory__II_Ljx_zero_DeviceMemory_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_MemoryManager_getTotalMemory___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2613, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_MemoryManager_getTotalMemory___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_MemoryManager_getTotalMemory___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_MemoryManager_getTotalFreeMemory___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2614, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_MemoryManager_getTotalFreeMemory___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_MemoryManager_getTotalFreeMemory___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_MemoryManager_getFreeHeapMemory___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2615, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_MemoryManager_getFreeHeapMemory___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_MemoryManager_getFreeHeapMemory___I(runtime, ins);
}


