// CLASS: java/lang/ThreadGroup extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_ThreadGroup_static {};



__refer arr_vmtable_java_lang_ThreadGroup_from_java_lang_ThreadGroup[] = {
    func_java_lang_ThreadGroup_getName___Ljava_lang_String_2,  //0
    func_java_lang_ThreadGroup_getParent___Ljava_lang_ThreadGroup_2,  //1
    func_java_lang_ThreadGroup_getMaxPriority___I,  //2
    func_java_lang_ThreadGroup_isDaemon___Z,  //3
    func_java_lang_ThreadGroup_isDestroyed___Z,  //4
    func_java_lang_ThreadGroup_setDaemon__Z_V,  //5
    func_java_lang_ThreadGroup_parentOf__Ljava_lang_ThreadGroup_2_Z,  //6
    func_java_lang_ThreadGroup_activeCount___I,  //7
    func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2_I,  //8
    func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2Z_I,  //9
    func_java_lang_ThreadGroup_activeGroupCount___I,  //10
    func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2_I,  //11
    func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2Z_I,  //12
    func_java_lang_ThreadGroup_stop___V,  //13
    func_java_lang_ThreadGroup_suspend___V,  //14
    func_java_lang_ThreadGroup_resume___V,  //15
    func_java_lang_ThreadGroup_destroy___V,  //16
    func_java_lang_ThreadGroup_add__Ljava_lang_Thread_2_V,  //17
    func_java_lang_ThreadGroup_remove__Ljava_lang_Thread_2_V,  //18
    func_java_lang_ThreadGroup_list___V,  //19
    func_java_lang_ThreadGroup_list__Ljava_io_PrintStream_2I_V,  //20
    func_java_lang_ThreadGroup_uncaughtException__Ljava_lang_Thread_2Ljava_lang_Throwable_2_V,  //21
    func_java_lang_ThreadGroup_allowThreadSuspension__Z_Z,  //22
    func_java_lang_ThreadGroup_toString___Ljava_lang_String_2  //23
};
__refer arr_vmtable_java_lang_ThreadGroup_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_ThreadGroup_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_lang_ThreadGroup[] = {
    {241, 24, arr_vmtable_java_lang_ThreadGroup_from_java_lang_ThreadGroup}, //0
    {10, 11, arr_vmtable_java_lang_ThreadGroup_from_java_lang_Object}, //1
};



// locals: 2
// stack: 1
// args: 1
void func_java_lang_ThreadGroup__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 588, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 19 , L124734309 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 19;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 20 , L211090736 , bytecode index = 
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

void bridge_java_lang_ThreadGroup__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_java_lang_ThreadGroup__init___Ljava_lang_ThreadGroup_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_ThreadGroup* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 589, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 21 , L46453164 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 21;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 22 , L2131597042 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/lang/ThreadGroup name Ljava/lang/String;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->name_1 = rstack[sp + 1].obj;
    ; 
    //  line no 23 , L1415289182 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/ThreadGroup maxPriority I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->maxPriority_2;
    sp += 0;
    // putfield java/lang/ThreadGroup maxPriority I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->maxPriority_2 = stack[sp + 1].i;
    ; 
    //  line no 24 , L1990385139 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/ThreadGroup daemon Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->daemon_4;
    sp += 0;
    // putfield java/lang/ThreadGroup daemon Z
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->daemon_4 = stack[sp + 1].i;
    ; 
    //  line no 25 , L1380924218 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->parent_0 = rstack[sp + 1].obj;
    ; 
    //  line no 27 , L1105628551 , bytecode index = 
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

void bridge_java_lang_ThreadGroup__init___Ljava_lang_ThreadGroup_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup__init___Ljava_lang_ThreadGroup_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_ThreadGroup_getName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 29 , L693267461 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->name_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_lang_ThreadGroup_getName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_ThreadGroup_getName___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_ThreadGroup* func_java_lang_ThreadGroup_getParent___Ljava_lang_ThreadGroup_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 32 , L1997548433 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_lang_ThreadGroup_getParent___Ljava_lang_ThreadGroup_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_ThreadGroup_getParent___Ljava_lang_ThreadGroup_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_lang_ThreadGroup_getMaxPriority___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 35 , L2142852357 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup maxPriority I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->maxPriority_2;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_ThreadGroup_getMaxPriority___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_getMaxPriority___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_lang_ThreadGroup_isDaemon___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 38 , L1932597611 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup daemon Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->daemon_4;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_ThreadGroup_isDaemon___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_isDaemon___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_lang_ThreadGroup_isDestroyed___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 41 , L179779934 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_ThreadGroup_isDestroyed___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_isDestroyed___Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_ThreadGroup_setDaemon__Z_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    local[0].i = p0;
    ; 
    //  line no 44 , L735085430 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/ThreadGroup daemon Z
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->daemon_4 = stack[sp + 1].i;
    ; 
    //  line no 45 , L242282810 , bytecode index = 
    return;
    ; 
}

void bridge_java_lang_ThreadGroup_setDaemon__Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_setDaemon__Z_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_lang_ThreadGroup_parentOf__Ljava_lang_ThreadGroup_2_Z(JThreadRuntime *runtime, struct java_lang_ThreadGroup* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 596, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    L1688470144:
    //  line no 67 , L1688470144 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 67;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1262548561;
    ; 
    //  line no 68 , L1118840610 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L224591451;
    ; 
    //  line no 69 , L1234586997 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L224591451:
    //  line no 67 , L224591451 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1688470144;
    L1262548561:
    //  line no 71 , L1262548561 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_parentOf__Ljava_lang_ThreadGroup_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_parentOf__Ljava_lang_ThreadGroup_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_activeCount___I[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_activeCount___I = {3, arr_extable_func_java_lang_ThreadGroup_activeCount___I};

// locals: 6
// stack: 5
// args: 0
s32 func_java_lang_ThreadGroup_activeCount___I(JThreadRuntime *runtime){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 597, &rstack[0], &rlocal[0], &sp);
    // try catch :L1180858072 L1558763625 L669965156 (
    // try catch :L1690713209 L835146383 L669965156 (
    // try catch :L669965156 L729218894 L669965156 (
    ; 
    //  line no 80 , L2048013503 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 80;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[4].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1180858072:
    __frame->bytecodeIndex = 
    //  line no 81 , L1180858072 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1690713209;
    ; 
    //  line no 82 , L795011696 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1558763625:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1690713209:
    __frame->bytecodeIndex = 
    //  line no 83 , L1690713209 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 84 , L616207929 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 85 , L950698351 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1408695561;
    ; 
    //  line no 86 , L1811922029 , bytecode index = 
    stack[sp++].i = local[2].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 87 , L461698165 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L2001321875;
    L1408695561:
    //  line no 89 , L1408695561 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[3].obj = rstack[--sp].obj;
    L2001321875:
    //  line no 91 , L2001321875 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L835146383:
    __frame->bytecodeIndex = 
    goto L322112198;
    L669965156:
    __frame->bytecodeIndex = 
    rlocal[5].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L729218894:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[5].obj;
    // athrow
    //     L729218894 in labeltable is :L729218894
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 91;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L322112198:
    //  line no 92 , L322112198 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L87674905:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L966966167;
    ; 
    //  line no 93 , L61681175 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L61681175 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/ThreadGroup.activeCount()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 241, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 92 , L147022238 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L87674905;
    L966966167:
    //  line no 94 , L966966167 , bytecode index = 
    stack[sp++].i = local[1].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L669965156;
        case 1 : goto L669965156;
        case 2 : goto L669965156;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_activeCount___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_activeCount___I(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s32 func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2_I(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 598, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 98 , L1868805237 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 98;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial java/lang/ThreadGroup.enumerate([Ljava/lang/Thread;IZ)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2_I(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
s32 func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2Z_I(JThreadRuntime *runtime, JArray * p0, s8 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 599, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 101 , L369671357 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 101;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokespecial java/lang/ThreadGroup.enumerate([Ljava/lang/Thread;IZ)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2Z_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2Z_I(runtime, ins, para[0].i);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I = {3, arr_extable_func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I};

// locals: 9
// stack: 5
// args: 3
s32 func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s8 p2){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 600, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    // try catch :L701119748 L187457031 L1477637771 (
    // try catch :L1143390193 L1014794348 L1477637771 (
    // try catch :L1477637771 L1430861186 L1477637771 (
    ; 
    //  line no 104 , L438314766 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 104;
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 105 , L1804126860 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 106 , L862916729 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[6].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L701119748:
    __frame->bytecodeIndex = 
    //  line no 107 , L701119748 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1143390193;
    ; 
    //  line no 108 , L790021811 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L187457031:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1143390193:
    __frame->bytecodeIndex = 
    //  line no 109 , L1143390193 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 110 , L873827336 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L873827336
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L434437292;
    ; 
    //  line no 111 , L1388563249 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1388563249
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    L434437292:
    //  line no 112 , L434437292 , bytecode index = 
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  <= 0) goto L1266265220;
    ; 
    //  line no 113 , L1402215471 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 114 , L1839962989 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L1266265220:
    //  line no 116 , L1266265220 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L570253226;
    ; 
    //  line no 117 , L661047965 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 118 , L1415630650 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1705072168;
    ; 
    //  line no 119 , L778720569 , bytecode index = 
    stack[sp++].i = local[4].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 120 , L1070157899 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L570253226;
    L1705072168:
    //  line no 122 , L1705072168 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    L570253226:
    //  line no 125 , L570253226 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1014794348:
    __frame->bytecodeIndex = 
    goto L1828868503;
    L1477637771:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1430861186:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L1430861186 in labeltable is :L1430861186
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 125;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1828868503:
    //  line no 126 , L1828868503 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L41765385;
    ; 
    //  line no 127 , L2118255842 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L192694377:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L41765385;
    ; 
    //  line no 128 , L1947020920 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L1947020920 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial java/lang/ThreadGroup.enumerate([Ljava/lang/Thread;IZ)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 127 , L474488818 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L192694377;
    L41765385:
    //  line no 130 , L41765385 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1477637771;
        case 1 : goto L1477637771;
        case 2 : goto L1477637771;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_Thread_2IZ_I(runtime, ins, para[0].i, para[1].i);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_activeGroupCount___I[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_activeGroupCount___I = {3, arr_extable_func_java_lang_ThreadGroup_activeGroupCount___I};

// locals: 5
// stack: 5
// args: 0
s32 func_java_lang_ThreadGroup_activeGroupCount___I(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 601, &rstack[0], &rlocal[0], &sp);
    // try catch :L462773420 L108449608 L1511909371 (
    // try catch :L861623840 L43650267 L1511909371 (
    // try catch :L1511909371 L849776463 L1511909371 (
    ; 
    //  line no 136 , L120689887 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 136;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[3].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L462773420:
    __frame->bytecodeIndex = 
    //  line no 137 , L462773420 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L861623840;
    ; 
    //  line no 138 , L1857173583 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L108449608:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L861623840:
    __frame->bytecodeIndex = 
    //  line no 139 , L861623840 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 140 , L1016860054 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L977674685;
    ; 
    //  line no 141 , L836427078 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 142 , L1322642290 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L318353283;
    L977674685:
    //  line no 144 , L977674685 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[2].obj = rstack[--sp].obj;
    L318353283:
    //  line no 146 , L318353283 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L43650267:
    __frame->bytecodeIndex = 
    goto L431570856;
    L1511909371:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L849776463:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L849776463 in labeltable is :L849776463
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 146;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L431570856:
    //  line no 147 , L431570856 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 148 , L2121199924 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L520162288:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1088104996;
    ; 
    //  line no 149 , L282003944 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L282003944 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/ThreadGroup.activeGroupCount()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 241, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 148 , L421637524 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L520162288;
    L1088104996:
    //  line no 150 , L1088104996 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1511909371;
        case 1 : goto L1511909371;
        case 2 : goto L1511909371;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_activeGroupCount___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_activeGroupCount___I(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s32 func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2_I(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 602, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 154 , L393996856 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 154;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial java/lang/ThreadGroup.enumerate([Ljava/lang/ThreadGroup;IZ)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2_I(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
s32 func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2Z_I(JThreadRuntime *runtime, JArray * p0, s8 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 603, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 158 , L1808432653 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 158;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokespecial java/lang/ThreadGroup.enumerate([Ljava/lang/ThreadGroup;IZ)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2Z_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2Z_I(runtime, ins, para[0].i);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I = {3, arr_extable_func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I};

// locals: 9
// stack: 5
// args: 3
s32 func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s8 p2){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 604, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    // try catch :L1859383896 L145581669 L816798571 (
    // try catch :L428039780 L1756573246 L816798571 (
    // try catch :L816798571 L198112003 L816798571 (
    ; 
    //  line no 162 , L1097897234 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 162;
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 163 , L1107530534 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 164 , L858818438 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[6].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1859383896:
    __frame->bytecodeIndex = 
    //  line no 165 , L1859383896 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L428039780;
    ; 
    //  line no 166 , L1335503880 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L145581669:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L428039780:
    __frame->bytecodeIndex = 
    //  line no 167 , L428039780 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 168 , L176683244 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L176683244
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1413730361;
    ; 
    //  line no 169 , L1668837760 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1668837760
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    L1413730361:
    //  line no 171 , L1413730361 , bytecode index = 
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  <= 0) goto L2099051403;
    ; 
    //  line no 172 , L1223240796 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 173 , L48361312 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L2099051403:
    //  line no 175 , L2099051403 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L573926093;
    ; 
    //  line no 176 , L946802083 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 177 , L962944318 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L888287133;
    ; 
    //  line no 178 , L1025001676 , bytecode index = 
    stack[sp++].i = local[4].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 179 , L2111457497 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L573926093;
    L888287133:
    //  line no 181 , L888287133 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    L573926093:
    //  line no 184 , L573926093 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1756573246:
    __frame->bytecodeIndex = 
    goto L1850042097;
    L816798571:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L198112003:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L198112003 in labeltable is :L198112003
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 184;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1850042097:
    //  line no 185 , L1850042097 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L1265508963;
    ; 
    //  line no 186 , L877612522 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L461129530:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1265508963;
    ; 
    //  line no 187 , L1582028874 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L1582028874 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial java/lang/ThreadGroup.enumerate([Ljava/lang/ThreadGroup;IZ)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 186 , L1686934746 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L461129530;
    L1265508963:
    //  line no 189 , L1265508963 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L816798571;
        case 1 : goto L816798571;
        case 2 : goto L816798571;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_enumerate___3Ljava_lang_ThreadGroup_2IZ_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 2
// args: 0
void func_java_lang_ThreadGroup_stop___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 605, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 193 , L1407083101 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 193;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial java/lang/ThreadGroup.stopOrSuspend(Z)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_stopOrSuspend__Z_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1398241764;
    ; 
    //  line no 194 , L1409092880 , bytecode index = 
    // invokestatic java/lang/Thread.currentThread()Ljava/lang/Thread;
    {
        sp -= 1;
        rstack[sp].obj = func_java_lang_Thread_currentThread___Ljava_lang_Thread_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Thread.stop()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 238, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1398241764:
    //  line no 195 , L1398241764 , bytecode index = 
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

void bridge_java_lang_ThreadGroup_stop___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_stop___V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_lang_ThreadGroup_suspend___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 606, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 198 , L1289869008 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 198;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial java/lang/ThreadGroup.stopOrSuspend(Z)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_stopOrSuspend__Z_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L605101809;
    ; 
    //  line no 199 , L524223214 , bytecode index = 
    // invokestatic java/lang/Thread.currentThread()Ljava/lang/Thread;
    {
        sp -= 1;
        rstack[sp].obj = func_java_lang_Thread_currentThread___Ljava_lang_Thread_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Thread.suspend()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 238, 8);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L605101809:
    //  line no 200 , L605101809 , bytecode index = 
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

void bridge_java_lang_ThreadGroup_suspend___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_suspend___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_stopOrSuspend__Z_Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_stopOrSuspend__Z_Z = {2, arr_extable_func_java_lang_ThreadGroup_stopOrSuspend__Z_Z};

// locals: 9
// stack: 5
// args: 1
s8 func_java_lang_ThreadGroup_stopOrSuspend__Z_Z(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 607, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    // try catch :L1573605215 L1904288897 L382627885 (
    // try catch :L382627885 L2073299099 L382627885 (
    ; 
    //  line no 203 , L2090991873 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 203;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 204 , L75470648 , bytecode index = 
    // invokestatic java/lang/Thread.currentThread()Ljava/lang/Thread;
    {
        sp -= 1;
        rstack[sp].obj = func_java_lang_Thread_currentThread___Ljava_lang_Thread_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 206 , L1633013890 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 207 , L979291363 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[6].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1573605215:
    __frame->bytecodeIndex = 
    //  line no 208 , L1573605215 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L1444440224:
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L782689036;
    ; 
    //  line no 209 , L1631119258 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L1631119258 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L768415370;
    ; 
    //  line no 210 , L948250363 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    goto L564272228;
    L768415370:
    //  line no 211 , L768415370 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L125844477;
    ; 
    //  line no 212 , L1119622337 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L1119622337 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/Thread.suspend()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 238, 8);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L564272228;
    L125844477:
    //  line no 214 , L125844477 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L125844477 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/Thread.stop()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 238, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L564272228:
    //  line no 208 , L564272228 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1444440224;
    L782689036:
    //  line no 217 , L782689036 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 218 , L1394557075 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1659840424;
    ; 
    //  line no 219 , L1681303515 , bytecode index = 
    stack[sp++].i = local[4].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 220 , L1175371136 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1659840424:
    //  line no 222 , L1659840424 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1904288897:
    __frame->bytecodeIndex = 
    goto L1866229258;
    L382627885:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2073299099:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L2073299099 in labeltable is :L2073299099
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 222;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1866229258:
    //  line no 223 , L1866229258 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L1962266146:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L632071960;
    ; 
    //  line no 224 , L385739920 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L385739920 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/ThreadGroup.stopOrSuspend(Z)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_ThreadGroup_stopOrSuspend__Z_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L452842611;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  == 0) goto L1076071888;
    L452842611:
    // iconst_1
    stack[sp++].i = 1;
    goto L7829163;
    L1076071888:
    // iconst_0
    stack[sp++].i = 0;
    L7829163:
    local[2].i = stack[--sp].i;
    ; 
    //  line no 223 , L2031588185 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1962266146;
    L632071960:
    //  line no 226 , L632071960 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L382627885;
        case 1 : goto L382627885;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_stopOrSuspend__Z_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_stopOrSuspend__Z_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_resume___V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_resume___V = {2, arr_extable_func_java_lang_ThreadGroup_resume___V};

// locals: 6
// stack: 5
// args: 0
void func_java_lang_ThreadGroup_resume___V(JThreadRuntime *runtime){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 608, &rstack[0], &rlocal[0], &sp);
    // try catch :L1370283822 L1783966110 L790487766 (
    // try catch :L790487766 L1320388319 L790487766 (
    ; 
    //  line no 232 , L2035381640 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 232;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[3].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1370283822:
    __frame->bytecodeIndex = 
    //  line no 233 , L1370283822 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L973843173:
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2059461664;
    ; 
    //  line no 234 , L680988889 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L680988889 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/Thread.resume()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 238, 9);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 233 , L1511574902 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L973843173;
    L2059461664:
    //  line no 235 , L2059461664 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 236 , L1034094674 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1077873186;
    ; 
    //  line no 237 , L1346292516 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 238 , L1280429864 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1771421544;
    L1077873186:
    //  line no 240 , L1077873186 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[2].obj = rstack[--sp].obj;
    L1771421544:
    //  line no 242 , L1771421544 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1783966110:
    __frame->bytecodeIndex = 
    goto L1363396194;
    L790487766:
    __frame->bytecodeIndex = 
    rlocal[5].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1320388319:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[5].obj;
    // athrow
    //     L1320388319 in labeltable is :L1320388319
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 242;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1363396194:
    //  line no 243 , L1363396194 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L2005028997:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L896072146;
    ; 
    //  line no 244 , L1908571880 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1908571880 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/ThreadGroup.resume()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 241, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 243 , L1048434276 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2005028997;
    L896072146:
    //  line no 246 , L896072146 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L790487766;
        case 1 : goto L790487766;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_ThreadGroup_resume___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_resume___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_destroy___V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_destroy___V = {2, arr_extable_func_java_lang_ThreadGroup_destroy___V};

// locals: 5
// stack: 5
// args: 0
void func_java_lang_ThreadGroup_destroy___V(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 609, &rstack[0], &rlocal[0], &sp);
    // try catch :L692743054 L1260217713 L461591680 (
    // try catch :L461591680 L894024873 L461591680 (
    ; 
    //  line no 251 , L1327871893 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 251;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[3].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L692743054:
    __frame->bytecodeIndex = 
    //  line no 252 , L692743054 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1874028013;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L1855261647;
    L1874028013:
    //  line no 253 , L1874028013 , bytecode index = 
    // new java/lang/IllegalThreadStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 242);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalThreadStateException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalThreadStateException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1874028013 in labeltable is :L1874028013
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 253;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1855261647:
    //  line no 255 , L1855261647 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 256 , L373378624 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1958402562;
    ; 
    //  line no 257 , L5395829 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 258 , L1189084611 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1517328406;
    L1958402562:
    //  line no 260 , L1958402562 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[2].obj = rstack[--sp].obj;
    L1517328406:
    //  line no 262 , L1517328406 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L2016949136;
    ; 
    //  line no 263 , L1792227359 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/lang/ThreadGroup destroyed Z
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->destroyed_3 = stack[sp + 1].i;
    ; 
    //  line no 264 , L1406919011 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/ThreadGroup ngroups I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->ngroups_8 = stack[sp + 1].i;
    ; 
    //  line no 265 , L229995302 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->groups_9 = rstack[sp + 1].obj;
    ; 
    //  line no 266 , L883455411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/ThreadGroup nthreads I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->nthreads_6 = stack[sp + 1].i;
    ; 
    //  line no 267 , L1195942137 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->threads_7 = rstack[sp + 1].obj;
    L2016949136:
    //  line no 269 , L2016949136 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1260217713:
    __frame->bytecodeIndex = 
    goto L1259639178;
    L461591680:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L894024873:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L894024873 in labeltable is :L894024873
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 269;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1259639178:
    //  line no 270 , L1259639178 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1830745997:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L443290224;
    ; 
    //  line no 271 , L413218476 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L413218476 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/ThreadGroup.destroy()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 241, 16);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 270 , L2010545395 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1830745997;
    L443290224:
    //  line no 273 , L443290224 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1844334363;
    ; 
    //  line no 274 , L392904516 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/ThreadGroup.remove(Ljava/lang/ThreadGroup;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_ThreadGroup_remove__Ljava_lang_ThreadGroup_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1844334363:
    //  line no 276 , L1844334363 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L461591680;
        case 1 : goto L461591680;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_ThreadGroup_destroy___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_destroy___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_add__Ljava_lang_ThreadGroup_2_V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_add__Ljava_lang_ThreadGroup_2_V = {2, arr_extable_func_java_lang_ThreadGroup_add__Ljava_lang_ThreadGroup_2_V};

// locals: 5
// stack: 5
// args: 1
void func_java_lang_ThreadGroup_add__Ljava_lang_ThreadGroup_2_V(JThreadRuntime *runtime, struct java_lang_ThreadGroup* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 610, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1109113497 L1561502550 L323823279 (
    // try catch :L323823279 L1722570594 L323823279 (
    ; 
    //  line no 280 , L2038232668 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 280;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1109113497:
    __frame->bytecodeIndex = 
    //  line no 281 , L1109113497 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L834466358;
    ; 
    //  line no 282 , L1262408432 , bytecode index = 
    // new java/lang/IllegalThreadStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 242);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalThreadStateException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalThreadStateException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1262408432 in labeltable is :L1262408432
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 282;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L834466358:
    //  line no 284 , L834466358 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1336777650;
    ; 
    //  line no 285 , L1367165453 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->groups_9 = rstack[sp + 1].obj;
    goto L126234454;
    L1336777650:
    //  line no 286 , L1336777650 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // arraylength  label  L1336777650
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L126234454;
    ; 
    //  line no 287 , L974308356 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 288 , L423733503 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 289 , L584561912 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->groups_9 = rstack[sp + 1].obj;
    L126234454:
    //  line no 291 , L126234454 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L126234454 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 295 , L345887595 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/lang/ThreadGroup ngroups I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->ngroups_8 = stack[sp + 1].i;
    ; 
    //  line no 296 , L948115224 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1561502550:
    __frame->bytecodeIndex = 
    goto L739333799;
    L323823279:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1722570594:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L1722570594 in labeltable is :L1722570594
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 296;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L739333799:
    //  line no 297 , L739333799 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L323823279;
        case 1 : goto L323823279;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_ThreadGroup_add__Ljava_lang_ThreadGroup_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_add__Ljava_lang_ThreadGroup_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_remove__Ljava_lang_ThreadGroup_2_V[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_remove__Ljava_lang_ThreadGroup_2_V = {3, arr_extable_func_java_lang_ThreadGroup_remove__Ljava_lang_ThreadGroup_2_V};

// locals: 5
// stack: 6
// args: 1
void func_java_lang_ThreadGroup_remove__Ljava_lang_ThreadGroup_2_V(JThreadRuntime *runtime, struct java_lang_ThreadGroup* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 611, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1233308726 L1763260873 L1327234595 (
    // try catch :L236567414 L1361393151 L1327234595 (
    // try catch :L1327234595 L1901238627 L1327234595 (
    ; 
    //  line no 300 , L1638435724 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 300;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1233308726:
    __frame->bytecodeIndex = 
    //  line no 301 , L1233308726 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L236567414;
    ; 
    //  line no 302 , L573136580 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1763260873:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return;
    L236567414:
    __frame->bytecodeIndex = 
    //  line no 303 , L236567414 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1524305331:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1059524106;
    ; 
    //  line no 304 , L443942537 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L443942537 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1916904573;
    ; 
    //  line no 305 , L1895143699 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/lang/ThreadGroup ngroups I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->ngroups_8 = stack[sp + 1].i;
    ; 
    //  line no 306 , L1998949977 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 309 , L1573751930 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1573751930 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 310 , L575715826 , bytecode index = 
    goto L1059524106;
    L1916904573:
    //  line no 303 , L1916904573 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1524305331;
    L1059524106:
    //  line no 313 , L1059524106 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L2117173674;
    ; 
    //  line no 314 , L624795507 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.notifyAll()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 7);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2117173674:
    //  line no 315 , L2117173674 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup daemon Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->daemon_4;
    sp += 0;
    if(stack[--sp].i  == 0) goto L337799666;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L337799666;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    if(stack[--sp].i  != 0) goto L337799666;
    ; 
    //  line no 316 , L857394605 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/ThreadGroup.destroy()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 241, 16);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L337799666:
    //  line no 317 , L337799666 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1361393151:
    __frame->bytecodeIndex = 
    goto L1104422581;
    L1327234595:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1901238627:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L1901238627 in labeltable is :L1901238627
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 317;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1104422581:
    //  line no 318 , L1104422581 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1327234595;
        case 1 : goto L1327234595;
        case 2 : goto L1327234595;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_ThreadGroup_remove__Ljava_lang_ThreadGroup_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_remove__Ljava_lang_ThreadGroup_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_add__Ljava_lang_Thread_2_V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_add__Ljava_lang_Thread_2_V = {2, arr_extable_func_java_lang_ThreadGroup_add__Ljava_lang_Thread_2_V};

// locals: 5
// stack: 5
// args: 1
void func_java_lang_ThreadGroup_add__Ljava_lang_Thread_2_V(JThreadRuntime *runtime, struct java_lang_Thread* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 612, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L254896875 L1789110533 L170052458 (
    // try catch :L170052458 L1574029810 L170052458 (
    ; 
    //  line no 321 , L1504937617 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 321;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L254896875:
    __frame->bytecodeIndex = 
    //  line no 322 , L254896875 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L774895395;
    ; 
    //  line no 323 , L843710487 , bytecode index = 
    // new java/lang/IllegalThreadStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 242);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalThreadStateException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalThreadStateException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L843710487 in labeltable is :L843710487
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 323;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L774895395:
    //  line no 324 , L774895395 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1636291061;
    ; 
    //  line no 325 , L608519258 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Thread; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1549));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->threads_7 = rstack[sp + 1].obj;
    goto L1963075870;
    L1636291061:
    //  line no 326 , L1636291061 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    // arraylength  label  L1636291061
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1963075870;
    ; 
    //  line no 327 , L397071633 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Thread; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1549));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 328 , L1216198248 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 329 , L1184124073 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->threads_7 = rstack[sp + 1].obj;
    L1963075870:
    //  line no 331 , L1963075870 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L1963075870 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 335 , L582666172 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/lang/ThreadGroup nthreads I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->nthreads_6 = stack[sp + 1].i;
    ; 
    //  line no 336 , L1668910247 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1789110533:
    __frame->bytecodeIndex = 
    goto L1175631958;
    L170052458:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1574029810:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L1574029810 in labeltable is :L1574029810
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 336;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1175631958:
    //  line no 337 , L1175631958 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L170052458;
        case 1 : goto L170052458;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_ThreadGroup_add__Ljava_lang_Thread_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_add__Ljava_lang_Thread_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_remove__Ljava_lang_Thread_2_V[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_remove__Ljava_lang_Thread_2_V = {3, arr_extable_func_java_lang_ThreadGroup_remove__Ljava_lang_Thread_2_V};

// locals: 5
// stack: 7
// args: 1
void func_java_lang_ThreadGroup_remove__Ljava_lang_Thread_2_V(JThreadRuntime *runtime, struct java_lang_Thread* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 613, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1450500594 L2043106095 L709133385 (
    // try catch :L854733477 L1140338296 L709133385 (
    // try catch :L709133385 L15024899 L709133385 (
    ; 
    //  line no 340 , L244185498 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 340;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1450500594:
    __frame->bytecodeIndex = 
    //  line no 341 , L1450500594 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L854733477;
    ; 
    //  line no 342 , L768185844 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2043106095:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return;
    L854733477:
    __frame->bytecodeIndex = 
    //  line no 343 , L854733477 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L792782299:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L85415531;
    ; 
    //  line no 344 , L1689730682 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1689730682 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L87060781;
    ; 
    //  line no 345 , L771105389 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/lang/ThreadGroup nthreads I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->nthreads_6 = stack[sp + 1].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 348 , L317562294 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L317562294 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 349 , L1341404543 , bytecode index = 
    goto L85415531;
    L87060781:
    //  line no 343 , L87060781 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L792782299;
    L85415531:
    //  line no 352 , L85415531 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1238080693;
    ; 
    //  line no 353 , L1429351083 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.notifyAll()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 7);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1238080693:
    //  line no 354 , L1238080693 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup daemon Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->daemon_4;
    sp += 0;
    if(stack[--sp].i  == 0) goto L726408598;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L726408598;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    if(stack[--sp].i  != 0) goto L726408598;
    ; 
    //  line no 355 , L1174248013 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/ThreadGroup.destroy()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 241, 16);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L726408598:
    //  line no 356 , L726408598 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1140338296:
    __frame->bytecodeIndex = 
    goto L1346799731;
    L709133385:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L15024899:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L15024899 in labeltable is :L15024899
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 356;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1346799731:
    //  line no 357 , L1346799731 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L709133385;
        case 1 : goto L709133385;
        case 2 : goto L709133385;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_ThreadGroup_remove__Ljava_lang_Thread_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_remove__Ljava_lang_Thread_2_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_java_lang_ThreadGroup_list___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 614, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 360 , L1594791957 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 360;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/System out Ljava/io/PrintStream;
    rstack[sp].obj =static_var_java_lang_System.out_1;
    sp += 1;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/ThreadGroup.list(Ljava/io/PrintStream;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_io_PrintStream*,s32) = find_method(__ins->vm_table, 241, 20);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 361 , L1988644427 , bytecode index = 
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

void bridge_java_lang_ThreadGroup_list___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_list___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_ThreadGroup_list__Ljava_io_PrintStream_2I_V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_ThreadGroup_list__Ljava_io_PrintStream_2I_V = {2, arr_extable_func_java_lang_ThreadGroup_list__Ljava_io_PrintStream_2I_V};

// locals: 9
// stack: 5
// args: 2
void func_java_lang_ThreadGroup_list__Ljava_io_PrintStream_2I_V(JThreadRuntime *runtime, struct java_io_PrintStream* p0, s32 p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 615, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    // try catch :L713656449 L23880693 L891461509 (
    // try catch :L891461509 L1832669781 L891461509 (
    ; 
    //  line no 366 , L186061555 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 366;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[5].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L713656449:
    __frame->bytecodeIndex = 
    //  line no 367 , L713656449 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L1770437551:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1215946669;
    ; 
    //  line no 368 , L1196982797 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 44);
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 84, 6);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 367 , L1961595039 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1770437551;
    L1215946669:
    //  line no 369 , L1215946669 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/PrintStream.println(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 84, 19);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 370 , L686560878 , bytecode index = 
    // iinc slot 2 value 4
    local[2].i += 4;
    ; 
    //  line no 371 , L787361897 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L765826899:
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L90346768;
    ; 
    //  line no 372 , L1307950260 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L315072539:
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L333034015;
    ; 
    //  line no 373 , L42102625 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 44);
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 84, 6);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 372 , L1651667865 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L315072539;
    L333034015:
    //  line no 374 , L333034015 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L333034015 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/io/PrintStream.println(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 84, 19);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 371 , L1301987508 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L765826899;
    L90346768:
    //  line no 376 , L90346768 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 377 , L319670866 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L40191541;
    ; 
    //  line no 378 , L1937380187 , bytecode index = 
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/ThreadGroup; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1531));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 379 , L1753150176 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[3].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L366803687;
    L40191541:
    //  line no 381 , L40191541 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[4].obj = rstack[--sp].obj;
    L366803687:
    //  line no 383 , L366803687 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L23880693:
    __frame->bytecodeIndex = 
    goto L1033917063;
    L891461509:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1832669781:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L1832669781 in labeltable is :L1832669781
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 383;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1033917063:
    //  line no 384 , L1033917063 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L509832867:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L18179709;
    ; 
    //  line no 385 , L1936502650 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1936502650 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual java/lang/ThreadGroup.list(Ljava/io/PrintStream;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_io_PrintStream*,s32) = find_method(__ins->vm_table, 241, 20);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 384 , L1290272762 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L509832867;
    L18179709:
    //  line no 386 , L18179709 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L891461509;
        case 1 : goto L891461509;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_ThreadGroup_list__Ljava_io_PrintStream_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_list__Ljava_io_PrintStream_2I_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 3
// args: 2
void func_java_lang_ThreadGroup_uncaughtException__Ljava_lang_Thread_2Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, struct java_lang_Thread* p0, struct java_lang_Throwable* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 616, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 389 , L1677207406 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 389;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1979274004;
    ; 
    //  line no 390 , L101874302 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/ThreadGroup.uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Thread*,struct java_lang_Throwable*) = find_method(__ins->vm_table, 241, 21);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1807623441;
    L1979274004:
    //  line no 391 , L1979274004 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // instanceof java/lang/ThreadDeath
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 1553);
    if(stack[--sp].i  != 0) goto L1807623441;
    ; 
    //  line no 392 , L1231006815 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getstatic java/lang/System err Ljava/io/PrintStream;
    rstack[sp].obj =static_var_java_lang_System.err_2;
    sp += 1;
    // invokevirtual java/lang/Throwable.printStackTrace(Ljava/io/PrintStream;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_io_PrintStream*) = find_method(__ins->vm_table, 22, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1807623441:
    //  line no 394 , L1807623441 , bytecode index = 
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

void bridge_java_lang_ThreadGroup_uncaughtException__Ljava_lang_Thread_2Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ThreadGroup_uncaughtException__Ljava_lang_Thread_2Ljava_lang_Throwable_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 1
// args: 1
s8 func_java_lang_ThreadGroup_allowThreadSuspension__Z_Z(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 617, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 397 , L1666544295 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 397;
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_ThreadGroup_allowThreadSuspension__Z_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ThreadGroup_allowThreadSuspension__Z_Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_java_lang_ThreadGroup_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 618, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 402 , L1305486145 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 402;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.getClass()Ljava/lang/Class;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Class* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Class.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1555);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/ThreadGroup.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 241, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1556);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup maxPriority I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->maxPriority_2;
    sp += 0;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1557);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_ThreadGroup_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_ThreadGroup_toString___Ljava_lang_String_2(runtime, ins);
}


