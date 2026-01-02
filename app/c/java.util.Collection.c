// CLASS: java/util/Collection extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Collection_static {};



__refer arr_vmtable_java_util_Collection_from_java_util_Collection[] = {
    func_java_util_Collection_size___I,  //0
    func_java_util_Collection_isEmpty___Z,  //1
    func_java_util_Collection_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_Collection_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_Collection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_Collection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_Collection_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_Collection_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_Collection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Collection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_Collection_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_Collection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_Collection_clear___V,  //12
    func_java_util_Collection_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_Collection_hashCode___I  //14
};
__refer arr_vmtable_java_util_Collection_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_Collection_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_Collection_hashCode___I  //9
};
__refer arr_vmtable_java_util_Collection_from_java_lang_Iterable[] = {
    func_java_util_Collection_iterator___Ljava_util_Iterator_2  //0
};
VMTable vmtable_java_util_Collection[] = {
    {45, 15, arr_vmtable_java_util_Collection_from_java_util_Collection}, //0
    {5, 10, arr_vmtable_java_util_Collection_from_java_lang_Object}, //1
    {91, 1, arr_vmtable_java_util_Collection_from_java_lang_Iterable}, //2
};



// locals: 0
// stack: 0
// args: 0
s32 func_java_util_Collection_size___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1323, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_size___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_util_Collection_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1324, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_isEmpty___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Collection_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1325, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_contains__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_util_Iterator* func_java_util_Collection_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1326, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Collection_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collection_iterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_java_util_Collection_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1327, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Collection_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collection_toArray____3Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
JArray * func_java_util_Collection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1328, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Collection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Collection_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1329, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_add__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Collection_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1330, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_remove__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Collection_containsAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1331, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_containsAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_containsAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Collection_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1332, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_addAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Collection_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1333, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_removeAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Collection_retainAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1334, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_retainAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_retainAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_util_Collection_clear___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1335, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_Collection_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collection_clear___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Collection_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1336, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_util_Collection_hashCode___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1337, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collection_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collection_hashCode___I(runtime, ins);
}


