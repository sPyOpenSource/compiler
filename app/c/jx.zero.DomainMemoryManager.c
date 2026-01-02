// CLASS: jx/zero/DomainMemoryManager extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_DomainMemoryManager_static {};



__refer arr_vmtable_jx_zero_DomainMemoryManager_from_jx_zero_DomainMemoryManager[] = {
    func_jx_zero_DomainMemoryManager_allocObject__Ljx_zero_VMClass_2_I,  //0
    func_jx_zero_DomainMemoryManager_allocArray__Ljx_zero_VMClass_2I_I,  //1
    func_jx_zero_DomainMemoryManager_allocTCB__I_I,  //2
    func_jx_zero_DomainMemoryManager_allocStack__I_I,  //3
    func_jx_zero_DomainMemoryManager_allocStaticFields__I_I,  //4
    func_jx_zero_DomainMemoryManager_allocCode__I_I,  //5
    func_jx_zero_DomainMemoryManager_threadExiting___V  //6
};
__refer arr_vmtable_jx_zero_DomainMemoryManager_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_DomainMemoryManager_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_DomainMemoryManager[] = {
    {414, 7, arr_vmtable_jx_zero_DomainMemoryManager_from_jx_zero_DomainMemoryManager}, //0
    {5, 10, arr_vmtable_jx_zero_DomainMemoryManager_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_DomainMemoryManager_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_DomainMemoryManager_allocObject__Ljx_zero_VMClass_2_I(JThreadRuntime *runtime, struct jx_zero_VMClass* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3292, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DomainMemoryManager_allocObject__Ljx_zero_VMClass_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DomainMemoryManager_allocObject__Ljx_zero_VMClass_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
s32 func_jx_zero_DomainMemoryManager_allocArray__Ljx_zero_VMClass_2I_I(JThreadRuntime *runtime, struct jx_zero_VMClass* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3293, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DomainMemoryManager_allocArray__Ljx_zero_VMClass_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DomainMemoryManager_allocArray__Ljx_zero_VMClass_2I_I(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_DomainMemoryManager_allocTCB__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3294, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DomainMemoryManager_allocTCB__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DomainMemoryManager_allocTCB__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_DomainMemoryManager_allocStack__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3295, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DomainMemoryManager_allocStack__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DomainMemoryManager_allocStack__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_DomainMemoryManager_allocStaticFields__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3296, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DomainMemoryManager_allocStaticFields__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DomainMemoryManager_allocStaticFields__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_DomainMemoryManager_allocCode__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3297, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DomainMemoryManager_allocCode__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DomainMemoryManager_allocCode__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_DomainMemoryManager_threadExiting___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3298, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DomainMemoryManager_threadExiting___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DomainMemoryManager_threadExiting___V(runtime, ins);
}


