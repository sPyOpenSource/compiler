// CLASS: java/security/acl/AclEntry extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_security_acl_AclEntry_static {};



__refer arr_vmtable_java_security_acl_AclEntry_from_java_security_acl_AclEntry[] = {
    func_java_security_acl_AclEntry_getPrincipal___Ljava_security_Principal_2,  //0
    func_java_security_acl_AclEntry_setPrincipal__Ljava_security_Principal_2_Z,  //1
    func_java_security_acl_AclEntry_setNegativePermissions___V,  //2
    func_java_security_acl_AclEntry_isNegative___Z,  //3
    func_java_security_acl_AclEntry_addPermission__Ljava_security_acl_Permission_2_Z,  //4
    func_java_security_acl_AclEntry_removePermission__Ljava_security_acl_Permission_2_Z,  //5
    func_java_security_acl_AclEntry_checkPermission__Ljava_security_acl_Permission_2_Z,  //6
    func_java_security_acl_AclEntry_permissions___Ljava_util_Enumeration_2,  //7
    func_java_security_acl_AclEntry_toString___Ljava_lang_String_2,  //8
    func_java_security_acl_AclEntry_clone___Ljava_lang_Object_2  //9
};
__refer arr_vmtable_java_security_acl_AclEntry_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_security_acl_AclEntry_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_security_acl_AclEntry_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_security_acl_AclEntry_from_java_lang_Cloneable[] = {
    NULL
};
VMTable vmtable_java_security_acl_AclEntry[] = {
    {100, 10, arr_vmtable_java_security_acl_AclEntry_from_java_security_acl_AclEntry}, //0
    {10, 11, arr_vmtable_java_security_acl_AclEntry_from_java_lang_Object}, //1
    {69, 0, arr_vmtable_java_security_acl_AclEntry_from_java_lang_Cloneable}, //2
};



// locals: 0
// stack: 0
// args: 0
struct java_security_Principal* func_java_security_acl_AclEntry_getPrincipal___Ljava_security_Principal_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 293, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_acl_AclEntry_getPrincipal___Ljava_security_Principal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_acl_AclEntry_getPrincipal___Ljava_security_Principal_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_security_acl_AclEntry_setPrincipal__Ljava_security_Principal_2_Z(JThreadRuntime *runtime, struct java_security_Principal* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 294, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_security_acl_AclEntry_setPrincipal__Ljava_security_Principal_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_acl_AclEntry_setPrincipal__Ljava_security_Principal_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_security_acl_AclEntry_setNegativePermissions___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 295, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_security_acl_AclEntry_setNegativePermissions___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_acl_AclEntry_setNegativePermissions___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_security_acl_AclEntry_isNegative___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 296, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_security_acl_AclEntry_isNegative___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_acl_AclEntry_isNegative___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_security_acl_AclEntry_addPermission__Ljava_security_acl_Permission_2_Z(JThreadRuntime *runtime, struct java_security_acl_Permission* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 297, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_security_acl_AclEntry_addPermission__Ljava_security_acl_Permission_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_acl_AclEntry_addPermission__Ljava_security_acl_Permission_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_security_acl_AclEntry_removePermission__Ljava_security_acl_Permission_2_Z(JThreadRuntime *runtime, struct java_security_acl_Permission* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 298, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_security_acl_AclEntry_removePermission__Ljava_security_acl_Permission_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_acl_AclEntry_removePermission__Ljava_security_acl_Permission_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_security_acl_AclEntry_checkPermission__Ljava_security_acl_Permission_2_Z(JThreadRuntime *runtime, struct java_security_acl_Permission* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 299, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_security_acl_AclEntry_checkPermission__Ljava_security_acl_Permission_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_acl_AclEntry_checkPermission__Ljava_security_acl_Permission_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_util_Enumeration* func_java_security_acl_AclEntry_permissions___Ljava_util_Enumeration_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 300, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_acl_AclEntry_permissions___Ljava_util_Enumeration_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_acl_AclEntry_permissions___Ljava_util_Enumeration_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_java_security_acl_AclEntry_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 301, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_acl_AclEntry_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_acl_AclEntry_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_Object* func_java_security_acl_AclEntry_clone___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 302, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_acl_AclEntry_clone___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_acl_AclEntry_clone___Ljava_lang_Object_2(runtime, ins);
}


