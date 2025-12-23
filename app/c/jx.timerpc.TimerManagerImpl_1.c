// CLASS: jx/timerpc/TimerManagerImpl$1 extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_timerpc_TimerManagerImpl_000241_static {};



__refer arr_vmtable_jx_timerpc_TimerManagerImpl_000241_from_jx_timerpc_TimerManagerImpl_000241[] = {
    func_jx_timerpc_TimerManagerImpl_000241_timer__Ljava_lang_Object_2_V  //0
};
__refer arr_vmtable_jx_timerpc_TimerManagerImpl_000241_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_timerpc_TimerManagerImpl_000241_from_jx_timer_TimerHandler[] = {
    func_jx_timerpc_TimerManagerImpl_000241_timer__Ljava_lang_Object_2_V  //0
};
__refer arr_vmtable_jx_timerpc_TimerManagerImpl_000241_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_timerpc_TimerManagerImpl_000241[] = {
    {260, 1, arr_vmtable_jx_timerpc_TimerManagerImpl_000241_from_jx_timerpc_TimerManagerImpl_000241}, //0
    {10, 11, arr_vmtable_jx_timerpc_TimerManagerImpl_000241_from_java_lang_Object}, //1
    {74, 1, arr_vmtable_jx_timerpc_TimerManagerImpl_000241_from_jx_timer_TimerHandler}, //2
    {35, 0, arr_vmtable_jx_timerpc_TimerManagerImpl_000241_from_jx_zero_Portal}, //3
};



// locals: 3
// stack: 2
// args: 2
void func_jx_timerpc_TimerManagerImpl_000241__init___Ljx_timerpc_TimerManagerImpl_2Ljx_zero_CPUManager_2_V(JThreadRuntime *runtime, struct jx_timerpc_TimerManagerImpl* p0, struct jx_zero_CPUManager* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 683, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 27 , L494077446 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/timerpc/TimerManagerImpl$1 this$0 Ljx/timerpc/TimerManagerImpl;
    sp -= 2;
    ((struct jx_timerpc_TimerManagerImpl_000241*)rstack[sp + 0].obj)->this_000240_1 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield jx/timerpc/TimerManagerImpl$1 val$cpuManager Ljx/zero/CPUManager;
    sp -= 2;
    ((struct jx_timerpc_TimerManagerImpl_000241*)rstack[sp + 0].obj)->val_00024cpuManager_0 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_timerpc_TimerManagerImpl_000241__init___Ljx_timerpc_TimerManagerImpl_2Ljx_zero_CPUManager_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_timerpc_TimerManagerImpl_000241__init___Ljx_timerpc_TimerManagerImpl_2Ljx_zero_CPUManager_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_timerpc_TimerManagerImpl_000241_timer__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 684, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 30 , L989889899 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 30;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/timerpc/TimerManagerImpl$1 val$cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_timerpc_TimerManagerImpl_000241*)rstack[sp - 1].obj)->val_00024cpuManager_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast jx/zero/CPUState
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1742);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokeinterface jx/zero/CPUManager.unblock(Ljx/zero/CPUState;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct jx_zero_CPUState*) = find_method(__ins->vm_table, 91, 13);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 31 , L806813022 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_timerpc_TimerManagerImpl_000241_timer__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_timerpc_TimerManagerImpl_000241_timer__Ljava_lang_Object_2_V(runtime, ins);
}


