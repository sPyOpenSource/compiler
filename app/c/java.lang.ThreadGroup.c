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
    //  line no 19 , L211090736 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 19;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 20 , L909282611 , bytecode index = 
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
    //  line no 21 , L2131597042 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 21;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 22 , L1415289182 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/lang/ThreadGroup name Ljava/lang/String;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->name_1 = rstack[sp + 1].obj;
    ; 
    //  line no 23 , L1990385139 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/ThreadGroup maxPriority I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->maxPriority_2;
    sp += 0;
    // putfield java/lang/ThreadGroup maxPriority I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->maxPriority_2 = stack[sp + 1].i;
    ; 
    //  line no 24 , L1380924218 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/ThreadGroup daemon Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->daemon_4;
    sp += 0;
    // putfield java/lang/ThreadGroup daemon Z
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->daemon_4 = stack[sp + 1].i;
    ; 
    //  line no 25 , L1105628551 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->parent_0 = rstack[sp + 1].obj;
    ; 
    //  line no 27 , L1241480588 , bytecode index = 
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
    //  line no 29 , L49222910 , bytecode index = 
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
    //  line no 32 , L1160850402 , bytecode index = 
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
    //  line no 35 , L93054696 , bytecode index = 
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
    //  line no 38 , L1066615508 , bytecode index = 
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
    //  line no 41 , L1355887174 , bytecode index = 
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
    //  line no 44 , L242282810 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/ThreadGroup daemon Z
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->daemon_4 = stack[sp + 1].i;
    ; 
    //  line no 45 , L1027495011 , bytecode index = 
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
    L1262548561:
    //  line no 67 , L1262548561 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 67;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1118840610;
    ; 
    //  line no 68 , L224591451 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1234586997;
    ; 
    //  line no 69 , L86558824 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1234586997:
    //  line no 67 , L1234586997 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1262548561;
    L1118840610:
    //  line no 71 , L1118840610 , bytecode index = 
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
    // try catch :L1558763625 L669965156 L1690713209 (
    // try catch :L835146383 L729218894 L1690713209 (
    // try catch :L1690713209 L2048013503 L1690713209 (
    ; 
    //  line no 80 , L795011696 , bytecode index = 
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
    L1558763625:
    __frame->bytecodeIndex = 
    //  line no 81 , L1558763625 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L835146383;
    ; 
    //  line no 82 , L616207929 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L669965156:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L835146383:
    __frame->bytecodeIndex = 
    //  line no 83 , L835146383 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 84 , L950698351 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 85 , L1408695561 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1811922029;
    ; 
    //  line no 86 , L461698165 , bytecode index = 
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
    //  line no 87 , L2001321875 , bytecode index = 
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
    goto L322112198;
    L1811922029:
    //  line no 89 , L1811922029 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[3].obj = rstack[--sp].obj;
    L322112198:
    //  line no 91 , L322112198 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L729218894:
    __frame->bytecodeIndex = 
    goto L87674905;
    L1690713209:
    __frame->bytecodeIndex = 
    rlocal[5].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2048013503:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[5].obj;
    // athrow
    //     L2048013503 in labeltable is :L2048013503
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 91;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L87674905:
    //  line no 92 , L87674905 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L966966167:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L61681175;
    ; 
    //  line no 93 , L147022238 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L147022238 bc index = 
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
    //  line no 92 , L1127338375 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L966966167;
    L61681175:
    //  line no 94 , L61681175 , bytecode index = 
    stack[sp++].i = local[1].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1690713209;
        case 1 : goto L1690713209;
        case 2 : goto L1690713209;
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
    //  line no 98 , L89448984 , bytecode index = 
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
    //  line no 101 , L1543043602 , bytecode index = 
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
    // try catch :L187457031 L1477637771 L1143390193 (
    // try catch :L1014794348 L1430861186 L1143390193 (
    // try catch :L1143390193 L438314766 L1143390193 (
    ; 
    //  line no 104 , L1804126860 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 104;
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 105 , L862916729 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 106 , L790021811 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[6].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L187457031:
    __frame->bytecodeIndex = 
    //  line no 107 , L187457031 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1014794348;
    ; 
    //  line no 108 , L873827336 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1477637771:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1014794348:
    __frame->bytecodeIndex = 
    //  line no 109 , L1014794348 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 110 , L434437292 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L434437292
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1388563249;
    ; 
    //  line no 111 , L1266265220 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1266265220
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    L1388563249:
    //  line no 112 , L1388563249 , bytecode index = 
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  <= 0) goto L1402215471;
    ; 
    //  line no 113 , L1839962989 , bytecode index = 
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
    //  line no 114 , L570253226 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L1402215471:
    //  line no 116 , L1402215471 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L661047965;
    ; 
    //  line no 117 , L1415630650 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 118 , L1705072168 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L778720569;
    ; 
    //  line no 119 , L1070157899 , bytecode index = 
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
    //  line no 120 , L1828868503 , bytecode index = 
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
    goto L661047965;
    L778720569:
    //  line no 122 , L778720569 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    L661047965:
    //  line no 125 , L661047965 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1430861186:
    __frame->bytecodeIndex = 
    goto L41765385;
    L1143390193:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L438314766:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L438314766 in labeltable is :L438314766
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 125;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L41765385:
    //  line no 126 , L41765385 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L2118255842;
    ; 
    //  line no 127 , L192694377 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L1947020920:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2118255842;
    ; 
    //  line no 128 , L474488818 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L474488818 bc index = 
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
    //  line no 127 , L1917025677 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1947020920;
    L2118255842:
    //  line no 130 , L2118255842 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1143390193;
        case 1 : goto L1143390193;
        case 2 : goto L1143390193;
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
    // try catch :L108449608 L1511909371 L861623840 (
    // try catch :L43650267 L849776463 L861623840 (
    // try catch :L861623840 L120689887 L861623840 (
    ; 
    //  line no 136 , L1857173583 , bytecode index = 
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
    L108449608:
    __frame->bytecodeIndex = 
    //  line no 137 , L108449608 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L43650267;
    ; 
    //  line no 138 , L1016860054 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1511909371:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L43650267:
    __frame->bytecodeIndex = 
    //  line no 139 , L43650267 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 140 , L977674685 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L836427078;
    ; 
    //  line no 141 , L1322642290 , bytecode index = 
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
    //  line no 142 , L318353283 , bytecode index = 
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
    goto L431570856;
    L836427078:
    //  line no 144 , L836427078 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[2].obj = rstack[--sp].obj;
    L431570856:
    //  line no 146 , L431570856 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L849776463:
    __frame->bytecodeIndex = 
    goto L2121199924;
    L861623840:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L120689887:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L120689887 in labeltable is :L120689887
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 146;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2121199924:
    //  line no 147 , L2121199924 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 148 , L520162288 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1088104996:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L282003944;
    ; 
    //  line no 149 , L421637524 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L421637524 bc index = 
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
    //  line no 148 , L250112971 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1088104996;
    L282003944:
    //  line no 150 , L282003944 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L861623840;
        case 1 : goto L861623840;
        case 2 : goto L861623840;
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
    //  line no 154 , L2131960182 , bytecode index = 
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
    //  line no 158 , L640808588 , bytecode index = 
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
    // try catch :L145581669 L816798571 L428039780 (
    // try catch :L1756573246 L198112003 L428039780 (
    // try catch :L428039780 L1097897234 L428039780 (
    ; 
    //  line no 162 , L1107530534 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 162;
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 163 , L858818438 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 164 , L1335503880 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[6].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L145581669:
    __frame->bytecodeIndex = 
    //  line no 165 , L145581669 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1756573246;
    ; 
    //  line no 166 , L176683244 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L816798571:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1756573246:
    __frame->bytecodeIndex = 
    //  line no 167 , L1756573246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 168 , L1413730361 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1413730361
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1668837760;
    ; 
    //  line no 169 , L2099051403 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L2099051403
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    L1668837760:
    //  line no 171 , L1668837760 , bytecode index = 
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  <= 0) goto L1223240796;
    ; 
    //  line no 172 , L48361312 , bytecode index = 
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
    //  line no 173 , L573926093 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L1223240796:
    //  line no 175 , L1223240796 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L946802083;
    ; 
    //  line no 176 , L962944318 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 177 , L888287133 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1025001676;
    ; 
    //  line no 178 , L2111457497 , bytecode index = 
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
    //  line no 179 , L1850042097 , bytecode index = 
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
    goto L946802083;
    L1025001676:
    //  line no 181 , L1025001676 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    L946802083:
    //  line no 184 , L946802083 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L198112003:
    __frame->bytecodeIndex = 
    goto L1265508963;
    L428039780:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1097897234:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L1097897234 in labeltable is :L1097897234
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 184;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1265508963:
    //  line no 185 , L1265508963 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L877612522;
    ; 
    //  line no 186 , L461129530 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L1582028874:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L877612522;
    ; 
    //  line no 187 , L1686934746 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L1686934746 bc index = 
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
    //  line no 186 , L711112124 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1582028874;
    L877612522:
    //  line no 189 , L877612522 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L428039780;
        case 1 : goto L428039780;
        case 2 : goto L428039780;
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
    //  line no 193 , L1398241764 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L1409092880;
    ; 
    //  line no 194 , L1812831622 , bytecode index = 
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
    L1409092880:
    //  line no 195 , L1409092880 , bytecode index = 
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
    //  line no 198 , L605101809 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L524223214;
    ; 
    //  line no 199 , L534666530 , bytecode index = 
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
    L524223214:
    //  line no 200 , L524223214 , bytecode index = 
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
    // try catch :L1904288897 L382627885 L2073299099 (
    // try catch :L2073299099 L2090991873 L2073299099 (
    ; 
    //  line no 203 , L75470648 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 203;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 204 , L1633013890 , bytecode index = 
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
    //  line no 206 , L979291363 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 207 , L1444440224 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[6].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1904288897:
    __frame->bytecodeIndex = 
    //  line no 208 , L1904288897 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L782689036:
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1631119258;
    ; 
    //  line no 209 , L768415370 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L768415370 bc index = 
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
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L948250363;
    ; 
    //  line no 210 , L564272228 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    goto L125844477;
    L948250363:
    //  line no 211 , L948250363 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L1119622337;
    ; 
    //  line no 212 , L1394557075 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L1394557075 bc index = 
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
    goto L125844477;
    L1119622337:
    //  line no 214 , L1119622337 , bytecode index = 
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
    L125844477:
    //  line no 208 , L125844477 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L782689036;
    L1631119258:
    //  line no 217 , L1631119258 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 218 , L1659840424 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1681303515;
    ; 
    //  line no 219 , L1175371136 , bytecode index = 
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
    //  line no 220 , L1866229258 , bytecode index = 
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
    L1681303515:
    //  line no 222 , L1681303515 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L382627885:
    __frame->bytecodeIndex = 
    goto L1962266146;
    L2073299099:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2090991873:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L2090991873 in labeltable is :L2090991873
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 222;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1962266146:
    //  line no 223 , L1962266146 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L632071960:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L385739920;
    ; 
    //  line no 224 , L452842611 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L452842611 bc index = 
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
    if(stack[--sp].i  != 0) goto L1076071888;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  == 0) goto L7829163;
    L1076071888:
    // iconst_1
    stack[sp++].i = 1;
    goto L2031588185;
    L7829163:
    // iconst_0
    stack[sp++].i = 0;
    L2031588185:
    local[2].i = stack[--sp].i;
    ; 
    //  line no 223 , L230526532 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L632071960;
    L385739920:
    //  line no 226 , L385739920 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L2073299099;
        case 1 : goto L2073299099;
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
    // try catch :L1783966110 L790487766 L1320388319 (
    // try catch :L1320388319 L2035381640 L1320388319 (
    ; 
    //  line no 232 , L973843173 , bytecode index = 
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
    L1783966110:
    __frame->bytecodeIndex = 
    //  line no 233 , L1783966110 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L2059461664:
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L680988889;
    ; 
    //  line no 234 , L1511574902 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1511574902 bc index = 
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
    //  line no 233 , L1034094674 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2059461664;
    L680988889:
    //  line no 235 , L680988889 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 236 , L1077873186 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1346292516;
    ; 
    //  line no 237 , L1280429864 , bytecode index = 
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
    //  line no 238 , L1771421544 , bytecode index = 
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
    goto L1363396194;
    L1346292516:
    //  line no 240 , L1346292516 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[2].obj = rstack[--sp].obj;
    L1363396194:
    //  line no 242 , L1363396194 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L790487766:
    __frame->bytecodeIndex = 
    goto L2005028997;
    L1320388319:
    __frame->bytecodeIndex = 
    rlocal[5].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2035381640:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[5].obj;
    // athrow
    //     L2035381640 in labeltable is :L2035381640
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 242;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2005028997:
    //  line no 243 , L2005028997 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L896072146:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1908571880;
    ; 
    //  line no 244 , L1048434276 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1048434276 bc index = 
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
    //  line no 243 , L1528741718 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L896072146;
    L1908571880:
    //  line no 246 , L1908571880 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1320388319;
        case 1 : goto L1320388319;
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
    // try catch :L1260217713 L461591680 L894024873 (
    // try catch :L894024873 L1327871893 L894024873 (
    ; 
    //  line no 251 , L1874028013 , bytecode index = 
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
    L1260217713:
    __frame->bytecodeIndex = 
    //  line no 252 , L1260217713 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1855261647;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L373378624;
    L1855261647:
    //  line no 253 , L1855261647 , bytecode index = 
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
    //     L1855261647 in labeltable is :L1855261647
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 253;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L373378624:
    //  line no 255 , L373378624 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 256 , L1958402562 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L5395829;
    ; 
    //  line no 257 , L1189084611 , bytecode index = 
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
    //  line no 258 , L1517328406 , bytecode index = 
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
    goto L2016949136;
    L5395829:
    //  line no 260 , L5395829 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[2].obj = rstack[--sp].obj;
    L2016949136:
    //  line no 262 , L2016949136 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1792227359;
    ; 
    //  line no 263 , L1406919011 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/lang/ThreadGroup destroyed Z
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->destroyed_3 = stack[sp + 1].i;
    ; 
    //  line no 264 , L229995302 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/ThreadGroup ngroups I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->ngroups_8 = stack[sp + 1].i;
    ; 
    //  line no 265 , L883455411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->groups_9 = rstack[sp + 1].obj;
    ; 
    //  line no 266 , L1195942137 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/ThreadGroup nthreads I
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->nthreads_6 = stack[sp + 1].i;
    ; 
    //  line no 267 , L1259639178 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->threads_7 = rstack[sp + 1].obj;
    L1792227359:
    //  line no 269 , L1792227359 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L461591680:
    __frame->bytecodeIndex = 
    goto L1830745997;
    L894024873:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1327871893:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L1327871893 in labeltable is :L1327871893
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 269;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1830745997:
    //  line no 270 , L1830745997 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L443290224:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L413218476;
    ; 
    //  line no 271 , L2010545395 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L2010545395 bc index = 
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
    //  line no 270 , L1844334363 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L443290224;
    L413218476:
    //  line no 273 , L413218476 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L392904516;
    ; 
    //  line no 274 , L116289363 , bytecode index = 
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
    L392904516:
    //  line no 276 , L392904516 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L894024873;
        case 1 : goto L894024873;
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
    // try catch :L1561502550 L323823279 L1722570594 (
    // try catch :L1722570594 L2038232668 L1722570594 (
    ; 
    //  line no 280 , L834466358 , bytecode index = 
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
    L1561502550:
    __frame->bytecodeIndex = 
    //  line no 281 , L1561502550 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1262408432;
    ; 
    //  line no 282 , L1336777650 , bytecode index = 
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
    //     L1336777650 in labeltable is :L1336777650
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 282;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1262408432:
    //  line no 284 , L1262408432 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1367165453;
    ; 
    //  line no 285 , L126234454 , bytecode index = 
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
    goto L974308356;
    L1367165453:
    //  line no 286 , L1367165453 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    // arraylength  label  L1367165453
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L974308356;
    ; 
    //  line no 287 , L423733503 , bytecode index = 
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
    //  line no 288 , L584561912 , bytecode index = 
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
    //  line no 289 , L345887595 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->groups_9 = rstack[sp + 1].obj;
    L974308356:
    //  line no 291 , L974308356 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L974308356 bc index = 
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
    //  line no 295 , L948115224 , bytecode index = 
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
    //  line no 296 , L739333799 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L323823279:
    __frame->bytecodeIndex = 
    goto L872306601;
    L1722570594:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2038232668:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L2038232668 in labeltable is :L2038232668
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 296;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L872306601:
    //  line no 297 , L872306601 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1722570594;
        case 1 : goto L1722570594;
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
    // try catch :L1763260873 L1327234595 L236567414 (
    // try catch :L1361393151 L1901238627 L236567414 (
    // try catch :L236567414 L1638435724 L236567414 (
    ; 
    //  line no 300 , L573136580 , bytecode index = 
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
    L1763260873:
    __frame->bytecodeIndex = 
    //  line no 301 , L1763260873 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1361393151;
    ; 
    //  line no 302 , L1524305331 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1327234595:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return;
    L1361393151:
    __frame->bytecodeIndex = 
    //  line no 303 , L1361393151 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1059524106:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L443942537;
    ; 
    //  line no 304 , L1916904573 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1916904573 bc index = 
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
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1895143699;
    ; 
    //  line no 305 , L1998949977 , bytecode index = 
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
    //  line no 306 , L1573751930 , bytecode index = 
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
    //  line no 309 , L575715826 , bytecode index = 
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
    // arrstore __refer  ,  L575715826 bc index = 
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
    //  line no 310 , L2117173674 , bytecode index = 
    goto L443942537;
    L1895143699:
    //  line no 303 , L1895143699 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1059524106;
    L443942537:
    //  line no 313 , L443942537 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L624795507;
    ; 
    //  line no 314 , L337799666 , bytecode index = 
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
    L624795507:
    //  line no 315 , L624795507 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup daemon Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->daemon_4;
    sp += 0;
    if(stack[--sp].i  == 0) goto L857394605;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L857394605;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    if(stack[--sp].i  != 0) goto L857394605;
    ; 
    //  line no 316 , L1104422581 , bytecode index = 
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
    L857394605:
    //  line no 317 , L857394605 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1901238627:
    __frame->bytecodeIndex = 
    goto L148635643;
    L236567414:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1638435724:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L1638435724 in labeltable is :L1638435724
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 317;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L148635643:
    //  line no 318 , L148635643 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L236567414;
        case 1 : goto L236567414;
        case 2 : goto L236567414;
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
    // try catch :L1789110533 L170052458 L1574029810 (
    // try catch :L1574029810 L1504937617 L1574029810 (
    ; 
    //  line no 321 , L774895395 , bytecode index = 
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
    L1789110533:
    __frame->bytecodeIndex = 
    //  line no 322 , L1789110533 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L843710487;
    ; 
    //  line no 323 , L1636291061 , bytecode index = 
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
    //     L1636291061 in labeltable is :L1636291061
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 323;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L843710487:
    //  line no 324 , L843710487 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L608519258;
    ; 
    //  line no 325 , L1963075870 , bytecode index = 
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
    goto L397071633;
    L608519258:
    //  line no 326 , L608519258 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    // arraylength  label  L608519258
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L397071633;
    ; 
    //  line no 327 , L1216198248 , bytecode index = 
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
    //  line no 328 , L1184124073 , bytecode index = 
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
    //  line no 329 , L582666172 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    sp -= 2;
    ((struct java_lang_ThreadGroup*)rstack[sp + 0].obj)->threads_7 = rstack[sp + 1].obj;
    L397071633:
    //  line no 331 , L397071633 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L397071633 bc index = 
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
    //  line no 335 , L1668910247 , bytecode index = 
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
    //  line no 336 , L1175631958 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L170052458:
    __frame->bytecodeIndex = 
    goto L579294521;
    L1574029810:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1504937617:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L1504937617 in labeltable is :L1504937617
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 336;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L579294521:
    //  line no 337 , L579294521 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1574029810;
        case 1 : goto L1574029810;
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
    // try catch :L2043106095 L709133385 L854733477 (
    // try catch :L1140338296 L15024899 L854733477 (
    // try catch :L854733477 L244185498 L854733477 (
    ; 
    //  line no 340 , L768185844 , bytecode index = 
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
    L2043106095:
    __frame->bytecodeIndex = 
    //  line no 341 , L2043106095 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup destroyed Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->destroyed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1140338296;
    ; 
    //  line no 342 , L792782299 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L709133385:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return;
    L1140338296:
    __frame->bytecodeIndex = 
    //  line no 343 , L1140338296 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L85415531:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1689730682;
    ; 
    //  line no 344 , L87060781 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L87060781 bc index = 
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
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L771105389;
    ; 
    //  line no 345 , L317562294 , bytecode index = 
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
    //  line no 348 , L1341404543 , bytecode index = 
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
    // arrstore __refer  ,  L1341404543 bc index = 
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
    //  line no 349 , L1238080693 , bytecode index = 
    goto L1689730682;
    L771105389:
    //  line no 343 , L771105389 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L85415531;
    L1689730682:
    //  line no 352 , L1689730682 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1429351083;
    ; 
    //  line no 353 , L726408598 , bytecode index = 
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
    L1429351083:
    //  line no 354 , L1429351083 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup daemon Z
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->daemon_4;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1174248013;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1174248013;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1174248013;
    ; 
    //  line no 355 , L1346799731 , bytecode index = 
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
    L1174248013:
    //  line no 356 , L1174248013 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L15024899:
    __frame->bytecodeIndex = 
    goto L342198178;
    L854733477:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L244185498:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L244185498 in labeltable is :L244185498
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 356;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L342198178:
    //  line no 357 , L342198178 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L854733477;
        case 1 : goto L854733477;
        case 2 : goto L854733477;
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
    //  line no 360 , L1988644427 , bytecode index = 
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
    //  line no 361 , L308889081 , bytecode index = 
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
    // try catch :L23880693 L891461509 L1832669781 (
    // try catch :L1832669781 L186061555 L1832669781 (
    ; 
    //  line no 366 , L1770437551 , bytecode index = 
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
    L23880693:
    __frame->bytecodeIndex = 
    //  line no 367 , L23880693 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L1215946669:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1196982797;
    ; 
    //  line no 368 , L1961595039 , bytecode index = 
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
    //  line no 367 , L686560878 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1215946669;
    L1196982797:
    //  line no 369 , L1196982797 , bytecode index = 
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
    //  line no 370 , L787361897 , bytecode index = 
    // iinc slot 2 value 4
    local[2].i += 4;
    ; 
    //  line no 371 , L765826899 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L90346768:
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup nthreads I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->nthreads_6;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1307950260;
    ; 
    //  line no 372 , L315072539 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L333034015:
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L42102625;
    ; 
    //  line no 373 , L1651667865 , bytecode index = 
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
    //  line no 372 , L1301987508 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L333034015;
    L42102625:
    //  line no 374 , L42102625 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup threads [Ljava/lang/Thread;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->threads_7;
    sp += 0;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L42102625 bc index = 
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
    //  line no 371 , L319670866 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L90346768;
    L1307950260:
    //  line no 376 , L1307950260 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup ngroups I
    stack[sp - 1].i = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->ngroups_8;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 377 , L40191541 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup groups [Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->groups_9;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1937380187;
    ; 
    //  line no 378 , L1753150176 , bytecode index = 
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
    //  line no 379 , L366803687 , bytecode index = 
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
    goto L1033917063;
    L1937380187:
    //  line no 381 , L1937380187 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[4].obj = rstack[--sp].obj;
    L1033917063:
    //  line no 383 , L1033917063 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L891461509:
    __frame->bytecodeIndex = 
    goto L509832867;
    L1832669781:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L186061555:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L186061555 in labeltable is :L186061555
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 383;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L509832867:
    //  line no 384 , L509832867 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L18179709:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1936502650;
    ; 
    //  line no 385 , L1290272762 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1290272762 bc index = 
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
    //  line no 384 , L1232373427 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L18179709;
    L1936502650:
    //  line no 386 , L1936502650 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1832669781;
        case 1 : goto L1832669781;
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
    //  line no 389 , L1979274004 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 389;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ThreadGroup parent Ljava/lang/ThreadGroup;
    rstack[sp - 1].obj = ((struct java_lang_ThreadGroup*)rstack[sp - 1].obj)->parent_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L101874302;
    ; 
    //  line no 390 , L1807623441 , bytecode index = 
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
    goto L1231006815;
    L101874302:
    //  line no 391 , L101874302 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // instanceof java/lang/ThreadDeath
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 1553);
    if(stack[--sp].i  != 0) goto L1231006815;
    ; 
    //  line no 392 , L1979787155 , bytecode index = 
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
    L1231006815:
    //  line no 394 , L1231006815 , bytecode index = 
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
    //  line no 397 , L2044282225 , bytecode index = 
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
    //  line no 402 , L840083671 , bytecode index = 
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


