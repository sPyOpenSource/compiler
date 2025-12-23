// CLASS: jx/timer/TimerHandler extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_timer_TimerHandler_static {};



__refer arr_vmtable_jx_timer_TimerHandler_from_jx_timer_TimerHandler[] = {
    func_jx_timer_TimerHandler_timer__Ljava_lang_Object_2_V  //0
};
__refer arr_vmtable_jx_timer_TimerHandler_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_timer_TimerHandler_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_timer_TimerHandler[] = {
    {74, 1, arr_vmtable_jx_timer_TimerHandler_from_jx_timer_TimerHandler}, //0
    {10, 11, arr_vmtable_jx_timer_TimerHandler_from_java_lang_Object}, //1
    {35, 0, arr_vmtable_jx_timer_TimerHandler_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 1
void func_jx_timer_TimerHandler_timer__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 228, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_timer_TimerHandler_timer__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_timer_TimerHandler_timer__Ljava_lang_Object_2_V(runtime, ins);
}


