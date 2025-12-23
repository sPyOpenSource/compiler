// CLASS: java/lang/invoke/MethodHandleInfo extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_invoke_MethodHandleInfo_static {s32 REF_1newInvokeSpecial_0; s32 REF_1invokeVirtual_1; s32 REF_1invokeSpecial_2; s32 REF_1invokeInterface_3;  };
struct java_lang_invoke_MethodHandleInfo_static static_var_java_lang_invoke_MethodHandleInfo = {0, 0, 0, 0};


__refer arr_vmtable_java_lang_invoke_MethodHandleInfo_from_java_lang_invoke_MethodHandleInfo[] = {
    func_java_lang_invoke_MethodHandleInfo_getReferenceKind___I,  //0
    func_java_lang_invoke_MethodHandleInfo_getDeclaringClass___Ljava_lang_Class_2,  //1
    func_java_lang_invoke_MethodHandleInfo_getMethodType___Ljava_lang_invoke_MethodType_2,  //2
    func_java_lang_invoke_MethodHandleInfo_getName___Ljava_lang_String_2,  //3
    func_java_lang_invoke_MethodHandleInfo_reflectAs__Ljava_lang_Class_2Ljava_lang_invoke_MethodHandles_00024Lookup_2_Ljava_lang_reflect_Member_2  //4
};
__refer arr_vmtable_java_lang_invoke_MethodHandleInfo_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_invoke_MethodHandleInfo[] = {
    {107, 5, arr_vmtable_java_lang_invoke_MethodHandleInfo_from_java_lang_invoke_MethodHandleInfo}, //0
    {10, 11, arr_vmtable_java_lang_invoke_MethodHandleInfo_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 0
s32 func_java_lang_invoke_MethodHandleInfo_getReferenceKind___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 517, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_invoke_MethodHandleInfo_getReferenceKind___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_invoke_MethodHandleInfo_getReferenceKind___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_Class* func_java_lang_invoke_MethodHandleInfo_getDeclaringClass___Ljava_lang_Class_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 518, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_invoke_MethodHandleInfo_getDeclaringClass___Ljava_lang_Class_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_MethodHandleInfo_getDeclaringClass___Ljava_lang_Class_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_invoke_MethodType* func_java_lang_invoke_MethodHandleInfo_getMethodType___Ljava_lang_invoke_MethodType_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 519, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_invoke_MethodHandleInfo_getMethodType___Ljava_lang_invoke_MethodType_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_MethodHandleInfo_getMethodType___Ljava_lang_invoke_MethodType_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_java_lang_invoke_MethodHandleInfo_getName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 520, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_invoke_MethodHandleInfo_getName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_MethodHandleInfo_getName___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_lang_reflect_Member* func_java_lang_invoke_MethodHandleInfo_reflectAs__Ljava_lang_Class_2Ljava_lang_invoke_MethodHandles_00024Lookup_2_Ljava_lang_reflect_Member_2(JThreadRuntime *runtime, struct java_lang_Class* p0, struct java_lang_invoke_MethodHandles_00024Lookup* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 521, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_invoke_MethodHandleInfo_reflectAs__Ljava_lang_Class_2Ljava_lang_invoke_MethodHandles_00024Lookup_2_Ljava_lang_reflect_Member_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_MethodHandleInfo_reflectAs__Ljava_lang_Class_2Ljava_lang_invoke_MethodHandles_00024Lookup_2_Ljava_lang_reflect_Member_2(runtime, ins, para[0].obj);
}


