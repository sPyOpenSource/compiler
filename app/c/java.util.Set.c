// CLASS: java/util/Set extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Set_static {};



__refer arr_vmtable_java_util_Set_from_java_util_Set[] = {
    func_java_util_Set_size___I,  //0
    func_java_util_Set_isEmpty___Z,  //1
    func_java_util_Set_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_Set_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_Set_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_Set_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_Set_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_Set_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_Set_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Set_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_Set_retainAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_Set_removeAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_Set_clear___V,  //12
    func_java_util_Set_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_Set_hashCode___I  //14
};
__refer arr_vmtable_java_util_Set_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_Set_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_Set_hashCode___I  //9
};
__refer arr_vmtable_java_util_Set_from_java_util_Collection[] = {
    func_java_util_Set_size___I,  //0
    func_java_util_Set_isEmpty___Z,  //1
    func_java_util_Set_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_Set_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_Set_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_Set_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_Set_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_Set_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_Set_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Set_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_Set_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_Set_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_Set_clear___V,  //12
    func_java_util_Set_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_Set_hashCode___I  //14
};
__refer arr_vmtable_java_util_Set_from_java_lang_Iterable[] = {
    func_java_util_Set_iterator___Ljava_util_Iterator_2  //0
};
VMTable vmtable_java_util_Set[] = {
    {86, 15, arr_vmtable_java_util_Set_from_java_util_Set}, //0
    {5, 10, arr_vmtable_java_util_Set_from_java_lang_Object}, //1
    {45, 15, arr_vmtable_java_util_Set_from_java_util_Collection}, //2
    {91, 1, arr_vmtable_java_util_Set_from_java_lang_Iterable}, //3
};



// locals: 0
// stack: 0
// args: 0
s32 func_java_util_Set_size___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1199, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_size___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_util_Set_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1200, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_isEmpty___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Set_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1201, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_contains__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_util_Iterator* func_java_util_Set_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1202, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Set_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Set_iterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_java_util_Set_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1203, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Set_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Set_toArray____3Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
JArray * func_java_util_Set_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1204, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Set_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Set_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Set_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1205, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_add__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Set_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1206, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_remove__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Set_containsAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1207, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_containsAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_containsAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Set_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1208, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_addAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Set_retainAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1209, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_retainAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_retainAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Set_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1210, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_removeAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_util_Set_clear___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1211, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_Set_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Set_clear___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_util_Set_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1212, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_util_Set_hashCode___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1213, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Set_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Set_hashCode___I(runtime, ins);
}


