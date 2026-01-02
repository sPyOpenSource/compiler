// CLASS: jx/zero/TestDZperf extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_TestDZperf_static {};



__refer arr_vmtable_jx_zero_TestDZperf_from_jx_zero_TestDZperf[] = {
    func_jx_zero_TestDZperf_emptyMethod___V,  //0
    func_jx_zero_TestDZperf_prepareSchedulerMethod_1registered_1__Ljx_zero_CPUState_2Ljx_zero_scheduler_HighLevelScheduler_2_I,  //1
    func_jx_zero_TestDZperf_callSchedulerMethod_1registered_1___I  //2
};
__refer arr_vmtable_jx_zero_TestDZperf_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_TestDZperf_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_TestDZperf[] = {
    {392, 3, arr_vmtable_jx_zero_TestDZperf_from_jx_zero_TestDZperf}, //0
    {5, 10, arr_vmtable_jx_zero_TestDZperf_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_TestDZperf_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
void func_jx_zero_TestDZperf_emptyMethod___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2880, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_TestDZperf_emptyMethod___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_TestDZperf_emptyMethod___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
s32 func_jx_zero_TestDZperf_prepareSchedulerMethod_1registered_1__Ljx_zero_CPUState_2Ljx_zero_scheduler_HighLevelScheduler_2_I(JThreadRuntime *runtime, struct jx_zero_CPUState* p0, struct jx_zero_scheduler_HighLevelScheduler* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2881, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_TestDZperf_prepareSchedulerMethod_1registered_1__Ljx_zero_CPUState_2Ljx_zero_scheduler_HighLevelScheduler_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_TestDZperf_prepareSchedulerMethod_1registered_1__Ljx_zero_CPUState_2Ljx_zero_scheduler_HighLevelScheduler_2_I(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_TestDZperf_callSchedulerMethod_1registered_1___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2882, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_TestDZperf_callSchedulerMethod_1registered_1___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_TestDZperf_callSchedulerMethod_1registered_1___I(runtime, ins);
}


