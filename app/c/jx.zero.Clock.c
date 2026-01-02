// CLASS: jx/zero/Clock extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_Clock_static {};



__refer arr_vmtable_jx_zero_Clock_from_jx_zero_Clock[] = {
    func_jx_zero_Clock_getTicks___J,  //0
    func_jx_zero_Clock_getTimeInMillis___I,  //1
    func_jx_zero_Clock_getTicks_1low___I,  //2
    func_jx_zero_Clock_getTicks_1high___I,  //3
    func_jx_zero_Clock_toMicroSec__Ljx_zero_CycleTime_2_I,  //4
    func_jx_zero_Clock_toNanoSec__Ljx_zero_CycleTime_2_I,  //5
    func_jx_zero_Clock_toMilliSec__Ljx_zero_CycleTime_2_I,  //6
    func_jx_zero_Clock_getCycles__Ljx_zero_CycleTime_2_V,  //7
    func_jx_zero_Clock_subtract__Ljx_zero_CycleTime_2Ljx_zero_CycleTime_2Ljx_zero_CycleTime_2_V  //8
};
__refer arr_vmtable_jx_zero_Clock_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_Clock_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_Clock[] = {
    {107, 9, arr_vmtable_jx_zero_Clock_from_jx_zero_Clock}, //0
    {5, 10, arr_vmtable_jx_zero_Clock_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_Clock_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
s64 func_jx_zero_Clock_getTicks___J(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 560, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Clock_getTicks___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_jx_zero_Clock_getTicks___J(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_Clock_getTimeInMillis___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 561, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Clock_getTimeInMillis___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Clock_getTimeInMillis___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_Clock_getTicks_1low___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 562, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Clock_getTicks_1low___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Clock_getTicks_1low___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_Clock_getTicks_1high___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 563, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Clock_getTicks_1high___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Clock_getTicks_1high___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_Clock_toMicroSec__Ljx_zero_CycleTime_2_I(JThreadRuntime *runtime, struct jx_zero_CycleTime* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 564, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Clock_toMicroSec__Ljx_zero_CycleTime_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Clock_toMicroSec__Ljx_zero_CycleTime_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_Clock_toNanoSec__Ljx_zero_CycleTime_2_I(JThreadRuntime *runtime, struct jx_zero_CycleTime* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 565, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Clock_toNanoSec__Ljx_zero_CycleTime_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Clock_toNanoSec__Ljx_zero_CycleTime_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_Clock_toMilliSec__Ljx_zero_CycleTime_2_I(JThreadRuntime *runtime, struct jx_zero_CycleTime* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 566, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Clock_toMilliSec__Ljx_zero_CycleTime_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Clock_toMilliSec__Ljx_zero_CycleTime_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_Clock_getCycles__Ljx_zero_CycleTime_2_V(JThreadRuntime *runtime, struct jx_zero_CycleTime* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 567, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Clock_getCycles__Ljx_zero_CycleTime_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Clock_getCycles__Ljx_zero_CycleTime_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_Clock_subtract__Ljx_zero_CycleTime_2Ljx_zero_CycleTime_2Ljx_zero_CycleTime_2_V(JThreadRuntime *runtime, struct jx_zero_CycleTime* p0, struct jx_zero_CycleTime* p1, struct jx_zero_CycleTime* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 568, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Clock_subtract__Ljx_zero_CycleTime_2Ljx_zero_CycleTime_2Ljx_zero_CycleTime_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Clock_subtract__Ljx_zero_CycleTime_2Ljx_zero_CycleTime_2Ljx_zero_CycleTime_2_V(runtime, ins, para[0].obj, para[1].obj);
}


