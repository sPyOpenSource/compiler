// CLASS: jx/synch/nonblocking2/MPSCQueue extends jx/synch/nonblocking2/SPSCQueue
#include "metadata.h"


// generation
// globals
//struct jx_synch_nonblocking2_MPSCQueue_static {};



__refer arr_vmtable_jx_synch_nonblocking2_MPSCQueue_from_jx_synch_nonblocking2_MPSCQueue[] = {
    func_jx_synch_nonblocking2_MPSCQueue_enqueue__Ljava_lang_Object_2_V  //0
};
__refer arr_vmtable_jx_synch_nonblocking2_MPSCQueue_from_jx_synch_nonblocking2_SPSCQueue[] = {
    func_jx_synch_nonblocking2_MPSCQueue_enqueue__Ljava_lang_Object_2_V,  //0
    func_jx_synch_nonblocking2_SPSCQueue_dequeue___Ljava_lang_Object_2  //1
};
__refer arr_vmtable_jx_synch_nonblocking2_MPSCQueue_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_synch_nonblocking2_MPSCQueue_from_jx_synch_nonblocking2_Queue[] = {
    func_jx_synch_nonblocking2_MPSCQueue_enqueue__Ljava_lang_Object_2_V,  //0
    func_jx_synch_nonblocking2_SPSCQueue_dequeue___Ljava_lang_Object_2  //1
};
VMTable vmtable_jx_synch_nonblocking2_MPSCQueue[] = {
    {94, 1, arr_vmtable_jx_synch_nonblocking2_MPSCQueue_from_jx_synch_nonblocking2_MPSCQueue}, //0
    {95, 2, arr_vmtable_jx_synch_nonblocking2_MPSCQueue_from_jx_synch_nonblocking2_SPSCQueue}, //1
    {10, 11, arr_vmtable_jx_synch_nonblocking2_MPSCQueue_from_java_lang_Object}, //2
    {96, 2, arr_vmtable_jx_synch_nonblocking2_MPSCQueue_from_jx_synch_nonblocking2_Queue}, //3
};



// locals: 1
// stack: 4
// args: 0
void func_jx_synch_nonblocking2_MPSCQueue__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 285, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 12 , L867988177 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 12;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/synch/nonblocking2/SPSCQueue.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_synch_nonblocking2_SPSCQueue__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 10 , L443934570 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic jx/zero/InitialNaming.getInitialNaming()Ljx/zero/Naming;
    {
        sp -= 1;
        rstack[sp].obj = func_jx_zero_InitialNaming_getInitialNaming___Ljx_zero_Naming_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 648);
    // invokeinterface jx/zero/Naming.lookup(Ljava/lang/String;)Ljx/zero/Portal;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Portal* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 90, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast jx/zero/CPUManager
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 650);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield jx/synch/nonblocking2/MPSCQueue cpuManager Ljx/zero/CPUManager;
    sp -= 2;
    ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp + 0].obj)->cpuManager_4 = rstack[sp + 1].obj;
    ; 
    //  line no 13 , L1428475041 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/synch/nonblocking2/MPSCQueue cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp - 1].obj)->cpuManager_4;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 645);
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 634);
    // invokeinterface jx/zero/CPUManager.getCAS(Ljava/lang/String;Ljava/lang/String;)Ljx/zero/CAS;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_CAS* (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct java_lang_String*) = find_method(__ins->vm_table, 91, 25);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/synch/nonblocking2/MPSCQueue cas_next Ljx/zero/CAS;
    sp -= 2;
    ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp + 0].obj)->cas_1next_2 = rstack[sp + 1].obj;
    ; 
    //  line no 14 , L1345483087 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/synch/nonblocking2/MPSCQueue cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp - 1].obj)->cpuManager_4;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 644);
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 651);
    // invokeinterface jx/zero/CPUManager.getCAS(Ljava/lang/String;Ljava/lang/String;)Ljx/zero/CAS;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_CAS* (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct java_lang_String*) = find_method(__ins->vm_table, 91, 25);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/synch/nonblocking2/MPSCQueue cas_tail Ljx/zero/CAS;
    sp -= 2;
    ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp + 0].obj)->cas_1tail_3 = rstack[sp + 1].obj;
    ; 
    //  line no 15 , L4766562 , bytecode index = 
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

void bridge_jx_synch_nonblocking2_MPSCQueue__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_synch_nonblocking2_MPSCQueue__init____V(runtime, ins);
}


// locals: 5
// stack: 4
// args: 1
void func_jx_synch_nonblocking2_MPSCQueue_enqueue__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 286, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 19 , L1182908789 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 19;
    // new jx/synch/nonblocking2/SPSCQueue$Node
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 92);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/synch/nonblocking2/SPSCQueue$Node.<init>(Ljx/synch/nonblocking2/SPSCQueue;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_synch_nonblocking2_SPSCQueue_00024Node__init___Ljx_synch_nonblocking2_SPSCQueue_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 20 , L91912419 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/synch/nonblocking2/SPSCQueue$Node value Ljava/lang/Object;
    sp -= 2;
    ((struct jx_synch_nonblocking2_SPSCQueue_00024Node*)rstack[sp + 0].obj)->value_0 = rstack[sp + 1].obj;
    L1076641925:
    //  line no 24 , L1076641925 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/synch/nonblocking2/MPSCQueue tail Ljx/synch/nonblocking2/SPSCQueue$Node;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp - 1].obj)->tail_1;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 25 , L1873091796 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/synch/nonblocking2/SPSCQueue$Node next Ljx/synch/nonblocking2/SPSCQueue$Node;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_SPSCQueue_00024Node*)rstack[sp - 1].obj)->next_1;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 26 , L661119548 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/synch/nonblocking2/MPSCQueue tail Ljx/synch/nonblocking2/SPSCQueue$Node;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp - 1].obj)->tail_1;
    sp += 0;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1896622931;
    ; 
    //  line no 27 , L1401316767 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  != NULL) goto L335708295;
    ; 
    //  line no 28 , L216856121 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/synch/nonblocking2/MPSCQueue cas_next Ljx/zero/CAS;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp - 1].obj)->cas_1next_2;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface jx/zero/CAS.casObject(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 93, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1896622931;
    ; 
    //  line no 29 , L480903748 , bytecode index = 
    goto L2095064787;
    L335708295:
    //  line no 32 , L335708295 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/synch/nonblocking2/MPSCQueue cas_tail Ljx/zero/CAS;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp - 1].obj)->cas_1tail_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface jx/zero/CAS.casObject(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 93, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1896622931:
    //  line no 35 , L1896622931 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1076641925;
    L2095064787:
    //  line no 36 , L2095064787 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/synch/nonblocking2/MPSCQueue cas_tail Ljx/zero/CAS;
    rstack[sp - 1].obj = ((struct jx_synch_nonblocking2_MPSCQueue*)rstack[sp - 1].obj)->cas_1tail_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface jx/zero/CAS.casObject(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 93, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 37 , L2095486832 , bytecode index = 
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

void bridge_jx_synch_nonblocking2_MPSCQueue_enqueue__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_synch_nonblocking2_MPSCQueue_enqueue__Ljava_lang_Object_2_V(runtime, ins);
}


