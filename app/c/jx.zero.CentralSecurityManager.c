// CLASS: jx/zero/CentralSecurityManager extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_CentralSecurityManager_static {};



__refer arr_vmtable_jx_zero_CentralSecurityManager_from_jx_zero_CentralSecurityManager[] = {
    func_jx_zero_CentralSecurityManager_addDomainAndPrincipal__Ljx_zero_Domain_2Ljx_zero_Principal_2_V,  //0
    func_jx_zero_CentralSecurityManager_getPrincipal__Ljx_zero_Domain_2_Ljx_zero_Principal_2,  //1
    func_jx_zero_CentralSecurityManager_installInterceptor__Ljx_zero_Domain_2Ljava_lang_String_2_V,  //2
    func_jx_zero_CentralSecurityManager_inheritPrincipal__Ljx_zero_Domain_2Ljx_zero_Domain_2_V,  //3
    func_jx_zero_CentralSecurityManager_inheritInterceptor__Ljx_zero_Domain_2Ljx_zero_Domain_2_V  //4
};
__refer arr_vmtable_jx_zero_CentralSecurityManager_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_CentralSecurityManager_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_CentralSecurityManager[] = {
    {350, 5, arr_vmtable_jx_zero_CentralSecurityManager_from_jx_zero_CentralSecurityManager}, //0
    {5, 10, arr_vmtable_jx_zero_CentralSecurityManager_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_CentralSecurityManager_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 2
void func_jx_zero_CentralSecurityManager_addDomainAndPrincipal__Ljx_zero_Domain_2Ljx_zero_Principal_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0, struct jx_zero_Principal* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2458, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CentralSecurityManager_addDomainAndPrincipal__Ljx_zero_Domain_2Ljx_zero_Principal_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CentralSecurityManager_addDomainAndPrincipal__Ljx_zero_Domain_2Ljx_zero_Principal_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct jx_zero_Principal* func_jx_zero_CentralSecurityManager_getPrincipal__Ljx_zero_Domain_2_Ljx_zero_Principal_2(JThreadRuntime *runtime, struct jx_zero_Domain* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2459, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_CentralSecurityManager_getPrincipal__Ljx_zero_Domain_2_Ljx_zero_Principal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CentralSecurityManager_getPrincipal__Ljx_zero_Domain_2_Ljx_zero_Principal_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_CentralSecurityManager_installInterceptor__Ljx_zero_Domain_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2460, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CentralSecurityManager_installInterceptor__Ljx_zero_Domain_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CentralSecurityManager_installInterceptor__Ljx_zero_Domain_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_CentralSecurityManager_inheritPrincipal__Ljx_zero_Domain_2Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0, struct jx_zero_Domain* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2461, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CentralSecurityManager_inheritPrincipal__Ljx_zero_Domain_2Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CentralSecurityManager_inheritPrincipal__Ljx_zero_Domain_2Ljx_zero_Domain_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_CentralSecurityManager_inheritInterceptor__Ljx_zero_Domain_2Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_zero_Domain* p0, struct jx_zero_Domain* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2462, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_CentralSecurityManager_inheritInterceptor__Ljx_zero_Domain_2Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CentralSecurityManager_inheritInterceptor__Ljx_zero_Domain_2Ljx_zero_Domain_2_V(runtime, ins, para[0].obj);
}


