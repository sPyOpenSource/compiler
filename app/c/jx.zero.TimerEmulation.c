// CLASS: jx/zero/TimerEmulation extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_TimerEmulation_static {};



__refer arr_vmtable_jx_zero_TimerEmulation_from_jx_zero_TimerEmulation[] = {
    func_jx_zero_TimerEmulation_getTime___I,  //0
    func_jx_zero_TimerEmulation_installIntervallTimer__Ljx_zero_AtomicVariable_2Ljx_zero_CPUState_2II_V  //1
};
__refer arr_vmtable_jx_zero_TimerEmulation_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_TimerEmulation_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_TimerEmulation[] = {
    {384, 2, arr_vmtable_jx_zero_TimerEmulation_from_jx_zero_TimerEmulation}, //0
    {5, 10, arr_vmtable_jx_zero_TimerEmulation_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_TimerEmulation_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_TimerEmulation_getTime___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2836, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_TimerEmulation_getTime___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_TimerEmulation_getTime___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 4
void func_jx_zero_TimerEmulation_installIntervallTimer__Ljx_zero_AtomicVariable_2Ljx_zero_CPUState_2II_V(JThreadRuntime *runtime, struct jx_zero_AtomicVariable* p0, struct jx_zero_CPUState* p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2837, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_TimerEmulation_installIntervallTimer__Ljx_zero_AtomicVariable_2Ljx_zero_CPUState_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_TimerEmulation_installIntervallTimer__Ljx_zero_AtomicVariable_2Ljx_zero_CPUState_2II_V(runtime, ins, para[0].obj, para[1].i, para[2].i);
}


