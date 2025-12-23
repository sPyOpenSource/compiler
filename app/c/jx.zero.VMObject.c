// CLASS: jx/zero/VMObject extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_VMObject_static {};



__refer arr_vmtable_jx_zero_VMObject_from_jx_zero_VMObject[] = {
    func_jx_zero_VMObject_getVMClass___Ljx_zero_VMClass_2,  //0
    func_jx_zero_VMObject_getPrimitiveData___I,  //1
    func_jx_zero_VMObject_getString___Ljava_lang_String_2,  //2
    func_jx_zero_VMObject_getFirstSubObject__Ljx_zero_VMObject_2_Z,  //3
    func_jx_zero_VMObject_getNextSubObject__Ljx_zero_VMObject_2_Z  //4
};
__refer arr_vmtable_jx_zero_VMObject_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_jx_zero_VMObject_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_VMObject[] = {
    {230, 5, arr_vmtable_jx_zero_VMObject_from_jx_zero_VMObject}, //0
    {10, 11, arr_vmtable_jx_zero_VMObject_from_java_lang_Object}, //1
    {35, 0, arr_vmtable_jx_zero_VMObject_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
struct jx_zero_VMClass* func_jx_zero_VMObject_getVMClass___Ljx_zero_VMClass_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 574, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_VMObject_getVMClass___Ljx_zero_VMClass_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_VMObject_getVMClass___Ljx_zero_VMClass_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_VMObject_getPrimitiveData___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 575, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_VMObject_getPrimitiveData___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_VMObject_getPrimitiveData___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_jx_zero_VMObject_getString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 576, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_VMObject_getString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_VMObject_getString___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_VMObject_getFirstSubObject__Ljx_zero_VMObject_2_Z(JThreadRuntime *runtime, struct jx_zero_VMObject* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 577, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_VMObject_getFirstSubObject__Ljx_zero_VMObject_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_VMObject_getFirstSubObject__Ljx_zero_VMObject_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_VMObject_getNextSubObject__Ljx_zero_VMObject_2_Z(JThreadRuntime *runtime, struct jx_zero_VMObject* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 578, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_VMObject_getNextSubObject__Ljx_zero_VMObject_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_VMObject_getNextSubObject__Ljx_zero_VMObject_2_Z(runtime, ins);
}


