// CLASS: java/util/ListIterator extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_ListIterator_static {};



__refer arr_vmtable_java_util_ListIterator_from_java_util_ListIterator[] = {
    func_java_util_ListIterator_hasNext___Z,  //0
    func_java_util_ListIterator_next___Ljava_lang_Object_2,  //1
    func_java_util_ListIterator_hasPrevious___Z,  //2
    func_java_util_ListIterator_previous___Ljava_lang_Object_2,  //3
    func_java_util_ListIterator_nextIndex___I,  //4
    func_java_util_ListIterator_previousIndex___I,  //5
    func_java_util_ListIterator_remove___V,  //6
    func_java_util_ListIterator_set__Ljava_lang_Object_2_V,  //7
    func_java_util_ListIterator_add__Ljava_lang_Object_2_V  //8
};
__refer arr_vmtable_java_util_ListIterator_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_ListIterator_from_java_util_Iterator[] = {
    func_java_util_ListIterator_hasNext___Z,  //0
    func_java_util_ListIterator_next___Ljava_lang_Object_2,  //1
    func_java_util_ListIterator_remove___V  //2
};
VMTable vmtable_java_util_ListIterator[] = {
    {156, 9, arr_vmtable_java_util_ListIterator_from_java_util_ListIterator}, //0
    {5, 10, arr_vmtable_java_util_ListIterator_from_java_lang_Object}, //1
    {80, 3, arr_vmtable_java_util_ListIterator_from_java_util_Iterator}, //2
};



// locals: 0
// stack: 0
// args: 0
s8 func_java_util_ListIterator_hasNext___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3156, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_ListIterator_hasNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ListIterator_hasNext___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_Object* func_java_util_ListIterator_next___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3157, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_ListIterator_next___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ListIterator_next___Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_util_ListIterator_hasPrevious___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3158, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_ListIterator_hasPrevious___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ListIterator_hasPrevious___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_Object* func_java_util_ListIterator_previous___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3159, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_ListIterator_previous___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ListIterator_previous___Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_util_ListIterator_nextIndex___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3160, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_ListIterator_nextIndex___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ListIterator_nextIndex___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_util_ListIterator_previousIndex___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3161, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_ListIterator_previousIndex___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ListIterator_previousIndex___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_util_ListIterator_remove___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3162, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_ListIterator_remove___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ListIterator_remove___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_java_util_ListIterator_set__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3163, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_ListIterator_set__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ListIterator_set__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_java_util_ListIterator_add__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3164, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_ListIterator_add__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ListIterator_add__Ljava_lang_Object_2_V(runtime, ins);
}


