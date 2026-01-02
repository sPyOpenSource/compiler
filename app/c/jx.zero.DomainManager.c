// CLASS: jx/zero/DomainManager extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_DomainManager_static {};



__refer arr_vmtable_jx_zero_DomainManager_from_jx_zero_DomainManager[] = {
    func_jx_zero_DomainManager_createDomain__Ljava_lang_String_2_3Ljx_zero_CPU_2_3Ljava_lang_String_2Ljava_lang_String_2_3Ljava_lang_String_2Ljava_lang_String_2IIILjava_lang_String_2II_3Ljava_lang_String_2Ljx_zero_Naming_2_3Ljava_lang_Object_2I_3I_Ljx_zero_Domain_2,  //0
    func_jx_zero_DomainManager_getDomainZero___Ljx_zero_Domain_2,  //1
    func_jx_zero_DomainManager_getCurrentDomain___Ljx_zero_Domain_2,  //2
    func_jx_zero_DomainManager_installInterceptor__Ljx_zero_Domain_2Ljx_zero_DomainBorder_2Ljx_zero_CPUState_2_V,  //3
    func_jx_zero_DomainManager_gc__Ljx_zero_Domain_2_V,  //4
    func_jx_zero_DomainManager_freeze__Ljx_zero_Domain_2_V,  //5
    func_jx_zero_DomainManager_thaw__Ljx_zero_Domain_2_V,  //6
    func_jx_zero_DomainManager_terminate__Ljx_zero_Domain_2_V,  //7
    func_jx_zero_DomainManager_terminateCaller___V  //8
};
__refer arr_vmtable_jx_zero_DomainManager_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_DomainManager_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_DomainManager[] = {
    {397, 9, arr_vmtable_jx_zero_DomainManager_from_jx_zero_DomainManager}, //0
    {5, 10, arr_vmtable_jx_zero_DomainManager_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_DomainManager_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 17
struct jx_zero_Domain* func_jx_zero_DomainManager_createDomain__Ljava_lang_String_2_3Ljx_zero_CPU_2_3Ljava_lang_String_2Ljava_lang_String_2_3Ljava_lang_String_2Ljava_lang_String_2IIILjava_lang_String_2II_3Ljava_lang_String_2Ljx_zero_Naming_2_3Ljava_lang_Object_2I_3I_Ljx_zero_Domain_2(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1, JArray * p2, struct java_lang_String* p3, JArray * p4, struct java_lang_String* p5, s32 p6, s32 p7, s32 p8, struct java_lang_String* p9, s32 p10, s32 p11, JArray * p12, struct jx_zero_Naming* p13, JArray * p14, s32 p15, JArray * p16){
    
    StackItem local[17] = {0};
    RStackItem rlocal[17] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2926, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_DomainManager_createDomain__Ljava_lang_String_2_3Ljx_zero_CPU_2_3Ljava_lang_String_2Ljava_lang_String_2_3Ljava_lang_String_2Ljava_lang_String_2IIILjava_lang_String_2II_3Ljava_lang_String_2Ljx_zero_Naming_2_3Ljava_lang_Object_2I_3I_Ljx_zero_Domain_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_DomainManager_createDomain__Ljava_lang_String_2_3Ljx_zero_CPU_2_3Ljava_lang_String_2Ljava_lang_String_2_3Ljava_lang_String_2Ljava_lang_String_2IIILjava_lang_String_2II_3Ljava_lang_String_2Ljx_zero_Naming_2_3Ljava_lang_Object_2I_3I_Ljx_zero_Domain_2(runtime, ins, para[0].obj, para[1].obj, para[2].obj, para[3].obj, para[4].obj, para[5].i, para[6].i, para[7].i, para[8].obj, para[9].i, para[10].i, para[11].obj, para[12].obj, para[13].obj, para[14].i, para[15].obj);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Domain* func_jx_zero_DomainManager_getDomainZero___Ljx_zero_Domain_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2927, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_DomainManager_getDomainZero___Ljx_zero_Domain_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_DomainManager_getDomainZero___Ljx_zero_Domain_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Domain* func_jx_zero_DomainManager_getCurrentDomain___Ljx_zero_Domain_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2928, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_DomainManager_getCurrentDomain___Ljx_zero_Domain_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_DomainManager_getCurrentDomain___Ljx_zero_Domain_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_DomainManager_installInterceptor__Ljx_zero_Domain_2Ljx_zero_DomainBorder_2Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0, struct jx_zero_DomainBorder* p1, struct jx_zero_CPUState* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2929, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DomainManager_installInterceptor__Ljx_zero_Domain_2Ljx_zero_DomainBorder_2Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DomainManager_installInterceptor__Ljx_zero_Domain_2Ljx_zero_DomainBorder_2Ljx_zero_CPUState_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_DomainManager_gc__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2930, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DomainManager_gc__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DomainManager_gc__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_DomainManager_freeze__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2931, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DomainManager_freeze__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DomainManager_freeze__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_DomainManager_thaw__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2932, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DomainManager_thaw__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DomainManager_thaw__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_DomainManager_terminate__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2933, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DomainManager_terminate__Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DomainManager_terminate__Ljx_zero_Domain_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_DomainManager_terminateCaller___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2934, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DomainManager_terminateCaller___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DomainManager_terminateCaller___V(runtime, ins);
}


