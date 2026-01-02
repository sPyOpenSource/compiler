// CLASS: java/util/Random extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Random_static {s64 multiplier_1; s64 addend_2; s64 mask_3;  };
struct java_util_Random_static static_var_java_util_Random = {0, 0, 0};


__refer arr_vmtable_java_util_Random_from_java_util_Random[] = {
    func_java_util_Random_setSeed__J_V,  //0
    func_java_util_Random_next__I_I,  //1
    func_java_util_Random_nextInt___I,  //2
    func_java_util_Random_nextInt__I_I,  //3
    func_java_util_Random_nextLong___J,  //4
    func_java_util_Random_nextFloat___F,  //5
    func_java_util_Random_nextDouble___D  //6
};
__refer arr_vmtable_java_util_Random_from_java_lang_Object[] = {
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
VMTable vmtable_java_util_Random[] = {
    {240, 7, arr_vmtable_java_util_Random_from_java_util_Random}, //0
    {5, 10, arr_vmtable_java_util_Random_from_java_lang_Object}, //1
};



// locals: 1
// stack: 3
// args: 0
void func_java_util_Random__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3189, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 13 , L2131723476 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/System.currentTimeMillis()J
    {
        sp -= 1;
        stack[sp].j = func_java_lang_System_currentTimeMillis___J(runtime, rstack[sp + 0].obj);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/Random.<init>(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Random__init___J_V(runtime, stack[sp + 0].j);
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

void bridge_java_util_Random__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Random__init____V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_util_Random__init___J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3190, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 15 , L652803980 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 16 , L1520921298 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
    sp += 2;
    // invokevirtual java/util/Random.setSeed(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 240, 0);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].j);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 17 , L1494051958 , bytecode index = 
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

void bridge_java_util_Random__init___J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Random__init___J_V(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
void func_java_util_Random_setSeed__J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3191, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 20 , L1150063356 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x5deece66dL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j ^ stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0xffffffffffffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    // putfield java/util/Random seed J
    sp -= 3;
    ((struct java_util_Random*)rstack[sp + 0].obj)->seed_0 = stack[sp + 1].j;
    ; 
    //  line no 21 , L622625093 , bytecode index = 
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

void bridge_java_util_Random_setSeed__J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Random_setSeed__J_V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 1
s32 func_java_util_Random_next__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3192, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 24 , L2059316201 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 24;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Random seed J
    stack[sp - 1].j = ((struct java_util_Random*)rstack[sp - 1].obj)->seed_0;
    sp += 1;
    //  ldc 
    stack[sp].j = 0x5deece66dL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0xbL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0xffffffffffffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[2].j = stack[sp].j;
    ; 
    //  line no 25 , L1510333744 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[2].j;
    sp += 2;
    // putfield java/util/Random seed J
    sp -= 3;
    ((struct java_util_Random*)rstack[sp + 0].obj)->seed_0 = stack[sp + 1].j;
    ; 
    //  line no 26 , L458385820 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 3].j = ((u64)stack[sp - 3].j) >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
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

void bridge_java_util_Random_next__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Random_next__I_I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_java_util_Random_nextInt___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3193, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 29 , L38851648 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 29;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // invokevirtual java/util/Random.next(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 240, 1);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
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

void bridge_java_util_Random_nextInt___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Random_nextInt___I(runtime, ins);
}


// locals: 4
// stack: 4
// args: 1
s32 func_java_util_Random_nextInt__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3194, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 32 , L2120154283 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 32;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  > 0) goto L94690722;
    ; 
    //  line no 33 , L30604162 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 5305);
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L30604162 in labeltable is :L30604162
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 33;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L94690722:
    //  line no 35 , L94690722 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L872699266;
    ; 
    //  line no 36 , L1035361293 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 31
    stack[sp++].i = 31;
    // invokevirtual java/util/Random.next(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 240, 1);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
    //  bipush 31
    stack[sp++].i = 31;
    stack[sp - 3].j = stack[sp - 3].j >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L872699266:
    //  line no 40 , L872699266 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 31
    stack[sp++].i = 31;
    // invokevirtual java/util/Random.next(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 240, 1);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 41 , L517787604 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 42 , L147077478 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  < 0) goto L872699266;
    ; 
    //  line no 43 , L519751097 , bytecode index = 
    stack[sp++].i = local[3].i;
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

void bridge_java_util_Random_nextInt__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Random_nextInt__I_I(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
s64 func_java_util_Random_nextLong___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3195, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 47 , L1769565136 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 47;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // invokevirtual java/util/Random.next(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 240, 1);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 3].j = stack[sp - 3].j << stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // invokevirtual java/util/Random.next(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 240, 1);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Random_nextLong___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_util_Random_nextLong___J(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
f32 func_java_util_Random_nextFloat___F(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3196, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 51 , L146842175 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 51;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 24
    stack[sp++].i = 24;
    // invokevirtual java/util/Random.next(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 240, 1);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 52 , L72187428 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    //  ldc 
    stack[sp++].f = 1.6777216E7;
    stack[sp - 2].f = stack[sp - 2].f / stack[sp - 1].f; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].f;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Random_nextFloat___F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_util_Random_nextFloat___F(runtime, ins);
}


// locals: 3
// stack: 4
// args: 0
f64 func_java_util_Random_nextDouble___D(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3197, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 56 , L489200959 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 56;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 26
    stack[sp++].i = 26;
    // invokevirtual java/util/Random.next(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 240, 1);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  bipush 27
    stack[sp++].i = 27;
    stack[sp - 3].j = stack[sp - 3].j << stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 27
    stack[sp++].i = 27;
    // invokevirtual java/util/Random.next(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 240, 1);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[1].j = stack[sp].j;
    ; 
    //  line no 57 , L284427775 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    //  ldc 
    stack[sp].d = 9.007199254740992E15;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
    sp -= 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Random_nextDouble___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_util_Random_nextDouble___D(runtime, ins);
}


