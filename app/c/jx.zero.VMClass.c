// CLASS: jx/zero/VMClass extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_VMClass_static {};



__refer arr_vmtable_jx_zero_VMClass_from_jx_zero_VMClass[] = {
    func_jx_zero_VMClass_getName___Ljava_lang_String_2,  //0
    func_jx_zero_VMClass_isPrimitive___Z,  //1
    func_jx_zero_VMClass_equals__Ljx_zero_VMClass_2_Z,  //2
    func_jx_zero_VMClass_getInstanceSize___I,  //3
    func_jx_zero_VMClass_newInstance___Ljava_lang_Object_2,  //4
    func_jx_zero_VMClass_getMethods____3Ljx_zero_VMMethod_2  //5
};
__refer arr_vmtable_jx_zero_VMClass_from_java_lang_Object[] = {
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
VMTable vmtable_jx_zero_VMClass[] = {
    {102, 6, arr_vmtable_jx_zero_VMClass_from_jx_zero_VMClass}, //0
    {10, 11, arr_vmtable_jx_zero_VMClass_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_jx_zero_VMClass_getName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 304, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_VMClass_getName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_VMClass_getName___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_zero_VMClass_isPrimitive___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 305, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_VMClass_isPrimitive___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_VMClass_isPrimitive___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_VMClass_equals__Ljx_zero_VMClass_2_Z(JThreadRuntime *runtime, struct jx_zero_VMClass* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 306, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_VMClass_equals__Ljx_zero_VMClass_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_VMClass_equals__Ljx_zero_VMClass_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_VMClass_getInstanceSize___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 307, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_VMClass_getInstanceSize___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_VMClass_getInstanceSize___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_Object* func_jx_zero_VMClass_newInstance___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 308, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_VMClass_newInstance___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_VMClass_newInstance___Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_jx_zero_VMClass_getMethods____3Ljx_zero_VMMethod_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 309, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_VMClass_getMethods____3Ljx_zero_VMMethod_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_VMClass_getMethods____3Ljx_zero_VMMethod_2(runtime, ins);
}


