// CLASS: jx/zero/Profiler extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_Profiler_static {};



__refer arr_vmtable_jx_zero_Profiler_from_jx_zero_Profiler[] = {
    func_jx_zero_Profiler_restart___V,  //0
    func_jx_zero_Profiler_shell___V,  //1
    func_jx_zero_Profiler_startCalibration___V,  //2
    func_jx_zero_Profiler_endCalibration__III_Z,  //3
    func_jx_zero_Profiler_getAverageCyclesOfMethod__Ljava_lang_String_2_I,  //4
    func_jx_zero_Profiler_startSampling___V,  //5
    func_jx_zero_Profiler_stopSampling___V,  //6
    func_jx_zero_Profiler_isSampling___Z  //7
};
__refer arr_vmtable_jx_zero_Profiler_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_Profiler_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_Profiler[] = {
    {236, 8, arr_vmtable_jx_zero_Profiler_from_jx_zero_Profiler}, //0
    {5, 10, arr_vmtable_jx_zero_Profiler_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_Profiler_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
void func_jx_zero_Profiler_restart___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1277, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Profiler_restart___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Profiler_restart___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_Profiler_shell___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1278, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Profiler_shell___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Profiler_shell___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_Profiler_startCalibration___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1279, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Profiler_startCalibration___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Profiler_startCalibration___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
s8 func_jx_zero_Profiler_endCalibration__III_Z(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1280, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Profiler_endCalibration__III_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Profiler_endCalibration__III_Z(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_Profiler_getAverageCyclesOfMethod__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1281, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Profiler_getAverageCyclesOfMethod__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Profiler_getAverageCyclesOfMethod__Ljava_lang_String_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_Profiler_startSampling___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1282, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Profiler_startSampling___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Profiler_startSampling___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_Profiler_stopSampling___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1283, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Profiler_stopSampling___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Profiler_stopSampling___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_zero_Profiler_isSampling___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1284, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Profiler_isSampling___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Profiler_isSampling___Z(runtime, ins);
}


