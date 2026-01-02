// CLASS: java/util/Map$Entry extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Map_00024Entry_static {};



__refer arr_vmtable_java_util_Map_00024Entry_from_java_util_Map_00024Entry[] = {
    func_java_util_Map_00024Entry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_Map_00024Entry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_Map_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_Map_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_Map_00024Entry_hashCode___I  //4
};
__refer arr_vmtable_java_util_Map_00024Entry_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_Map_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_Map_00024Entry_hashCode___I  //9
};
VMTable vmtable_java_util_Map_00024Entry[] = {
    {12, 5, arr_vmtable_java_util_Map_00024Entry_from_java_util_Map_00024Entry}, //0
    {5, 10, arr_vmtable_java_util_Map_00024Entry_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 0
struct java_lang_Object* func_java_util_Map_00024Entry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2150, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Map_00024Entry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Map_00024Entry_getKey___Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_Object* func_java_util_Map_00024Entry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2151, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Map_00024Entry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Map_00024Entry_getValue___Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_Object* func_java_util_Map_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2152, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Map_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Map_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Map_00024Entry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2153, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Map_00024Entry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Map_00024Entry_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_util_Map_00024Entry_hashCode___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2154, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Map_00024Entry_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Map_00024Entry_hashCode___I(runtime, ins);
}


