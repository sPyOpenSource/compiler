// CLASS: jx/zero/NetEmulation extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_NetEmulation_static {};



__refer arr_vmtable_jx_zero_NetEmulation_from_jx_zero_NetEmulation[] = {
    func_jx_zero_NetEmulation_open__Ljava_lang_String_2_3B_I,  //0
    func_jx_zero_NetEmulation_receive__Ljx_zero_Memory_2_I,  //1
    func_jx_zero_NetEmulation_send__Ljx_zero_Memory_2II_I,  //2
    func_jx_zero_NetEmulation_getMTU___I,  //3
    func_jx_zero_NetEmulation_getMACAddress____3B,  //4
    func_jx_zero_NetEmulation_close___I  //5
};
__refer arr_vmtable_jx_zero_NetEmulation_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_NetEmulation_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_NetEmulation[] = {
    {361, 6, arr_vmtable_jx_zero_NetEmulation_from_jx_zero_NetEmulation}, //0
    {5, 10, arr_vmtable_jx_zero_NetEmulation_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_NetEmulation_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 2
s32 func_jx_zero_NetEmulation_open__Ljava_lang_String_2_3B_I(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2595, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_NetEmulation_open__Ljava_lang_String_2_3B_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_NetEmulation_open__Ljava_lang_String_2_3B_I(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_NetEmulation_receive__Ljx_zero_Memory_2_I(JThreadRuntime *runtime, struct jx_zero_Memory* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2596, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_NetEmulation_receive__Ljx_zero_Memory_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_NetEmulation_receive__Ljx_zero_Memory_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
s32 func_jx_zero_NetEmulation_send__Ljx_zero_Memory_2II_I(JThreadRuntime *runtime, struct jx_zero_Memory* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2597, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_NetEmulation_send__Ljx_zero_Memory_2II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_NetEmulation_send__Ljx_zero_Memory_2II_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_NetEmulation_getMTU___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2598, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_NetEmulation_getMTU___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_NetEmulation_getMTU___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_jx_zero_NetEmulation_getMACAddress____3B(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2599, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_NetEmulation_getMACAddress____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_NetEmulation_getMACAddress____3B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_NetEmulation_close___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2600, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_NetEmulation_close___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_NetEmulation_close___I(runtime, ins);
}


