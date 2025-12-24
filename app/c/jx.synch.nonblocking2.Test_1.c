// CLASS: jx/synch/nonblocking2/Test$1 extends java/lang/Thread
#include "metadata.h"


// generation
// globals
//struct jx_synch_nonblocking2_Test_000241_static {};



__refer arr_vmtable_jx_synch_nonblocking2_Test_000241_from_jx_synch_nonblocking2_Test_000241[] = {
    func_jx_synch_nonblocking2_Test_000241_run___V  //0
};
__refer arr_vmtable_jx_synch_nonblocking2_Test_000241_from_java_lang_Thread[] = {
    func_java_lang_Thread_start___V,  //0
    func_jx_synch_nonblocking2_Test_000241_run___V,  //1
    func_java_lang_Thread_stop___V,  //2
    func_java_lang_Thread_stop__Ljava_lang_Throwable_2_V,  //3
    func_java_lang_Thread_interrupt___V,  //4
    func_java_lang_Thread_isInterrupted___Z,  //5
    func_java_lang_Thread_destroy___V,  //6
    func_java_lang_Thread_isAlive___Z,  //7
    func_java_lang_Thread_suspend___V,  //8
    func_java_lang_Thread_resume___V,  //9
    func_java_lang_Thread_setPriority__I_V,  //10
    func_java_lang_Thread_getPriority___I,  //11
    func_java_lang_Thread_setName__Ljava_lang_String_2_V,  //12
    func_java_lang_Thread_getName___Ljava_lang_String_2,  //13
    func_java_lang_Thread_getThreadGroup___Ljava_lang_ThreadGroup_2,  //14
    func_java_lang_Thread_countStackFrames___I,  //15
    func_java_lang_Thread_join__J_V,  //16
    func_java_lang_Thread_join__JI_V,  //17
    func_java_lang_Thread_join___V,  //18
    func_java_lang_Thread_setDaemon__Z_V,  //19
    func_java_lang_Thread_isDaemon___Z,  //20
    func_java_lang_Thread_toString___Ljava_lang_String_2,  //21
    func_java_lang_Thread_getContextClassLoader___Ljava_lang_ClassLoader_2  //22
};
__refer arr_vmtable_jx_synch_nonblocking2_Test_000241_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Thread_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_jx_synch_nonblocking2_Test_000241_from_java_lang_Runnable[] = {
    func_jx_synch_nonblocking2_Test_000241_run___V  //0
};
VMTable vmtable_jx_synch_nonblocking2_Test_000241[] = {
    {237, 1, arr_vmtable_jx_synch_nonblocking2_Test_000241_from_jx_synch_nonblocking2_Test_000241}, //0
    {238, 23, arr_vmtable_jx_synch_nonblocking2_Test_000241_from_java_lang_Thread}, //1
    {10, 11, arr_vmtable_jx_synch_nonblocking2_Test_000241_from_java_lang_Object}, //2
    {239, 1, arr_vmtable_jx_synch_nonblocking2_Test_000241_from_java_lang_Runnable}, //3
};



// locals: 2
// stack: 2
// args: 1
void func_jx_synch_nonblocking2_Test_000241__init___Ljx_synch_nonblocking2_Queue_2_V(JThreadRuntime *runtime, struct jx_synch_nonblocking2_Queue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 572, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 20 , L1021258849 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/synch/nonblocking2/Test$1 val$q Ljx/synch/nonblocking2/Queue;
    sp -= 2;
    ((struct jx_synch_nonblocking2_Test_000241*)rstack[sp + 0].obj)->val_00024q_12 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Thread.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_jx_synch_nonblocking2_Test_000241__init___Ljx_synch_nonblocking2_Queue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_synch_nonblocking2_Test_000241__init___Ljx_synch_nonblocking2_Queue_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_jx_synch_nonblocking2_Test_000241_run___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 573, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 22 , L473153915 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 22;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/synch/nonblocking2/Test$1 val$q Ljx/synch/nonblocking2/Queue;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_Test_000241*)rstack[sp - 1].obj)->val_00024q_12;
    sp += 0;
    // invokestatic jx/synch/nonblocking2/Test.consume(Ljx/synch/nonblocking2/Queue;)V
    {
        sp -= 2;
        func_jx_synch_nonblocking2_Test_consume__Ljx_synch_nonblocking2_Queue_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_jx_synch_nonblocking2_Test_000241_run___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_synch_nonblocking2_Test_000241_run___V(runtime, ins);
}


