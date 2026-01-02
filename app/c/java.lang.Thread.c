// CLASS: java/lang/Thread extends java/lang/Object
#include "metadata.h"

s64 func_java_lang_Thread_createStackFrame___J(JThreadRuntime *runtime);
void func_java_lang_Thread_yield___V(JThreadRuntime *runtime, struct java_lang_Thread* p0);
void func_java_lang_Thread_setPriority0__I_V(JThreadRuntime *runtime, s32 p0);
void func_java_lang_Thread_start___V(JThreadRuntime *runtime);
void func_java_lang_Thread_interrupt0___V(JThreadRuntime *runtime);
s8 func_java_lang_Thread_isAlive___Z(JThreadRuntime *runtime);
struct java_lang_Thread* func_java_lang_Thread_currentThread___Ljava_lang_Thread_2(JThreadRuntime *runtime, struct java_lang_Thread* p0);
void func_java_lang_Thread_sleep__J_V(JThreadRuntime *runtime, struct java_lang_Thread* p0, s64 p1);
s32 func_java_lang_Thread_activeCount___I(JThreadRuntime *runtime, struct java_lang_Thread* p0);

// generation
// globals
//struct java_lang_Thread_static {s32 MIN_1PRIORITY_5; s32 NORM_1PRIORITY_6; s32 MAX_1PRIORITY_7; s32 threadInitNumber_9;  };
struct java_lang_Thread_static static_var_java_lang_Thread = {0, 0, 0, 0};


__refer arr_vmtable_java_lang_Thread_from_java_lang_Thread[] = {
    func_java_lang_Thread_start___V,  //0
    func_java_lang_Thread_run___V,  //1
    func_java_lang_Thread_interrupt___V,  //2
    func_java_lang_Thread_isAlive___Z,  //3
    func_java_lang_Thread_setPriority__I_V,  //4
    func_java_lang_Thread_getPriority___I,  //5
    func_java_lang_Thread_getName___Ljava_lang_String_2,  //6
    func_java_lang_Thread_setName__Ljava_lang_String_2_V,  //7
    func_java_lang_Thread_join___V,  //8
    func_java_lang_Thread_setDaemon__Z_V,  //9
    func_java_lang_Thread_isDaemon___Z,  //10
    func_java_lang_Thread_toString___Ljava_lang_String_2  //11
};
__refer arr_vmtable_java_lang_Thread_from_java_lang_Object[] = {
    func_java_lang_Thread_toString___Ljava_lang_String_2,  //0
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
__refer arr_vmtable_java_lang_Thread_from_java_lang_Runnable[] = {
    func_java_lang_Thread_run___V  //0
};
VMTable vmtable_java_lang_Thread[] = {
    {334, 12, arr_vmtable_java_lang_Thread_from_java_lang_Thread}, //0
    {5, 10, arr_vmtable_java_lang_Thread_from_java_lang_Object}, //1
    {314, 1, arr_vmtable_java_lang_Thread_from_java_lang_Runnable}, //2
};


void bridge_java_lang_Thread_createStackFrame___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_Thread_createStackFrame___J(runtime, ins);
}

void bridge_java_lang_Thread_currentThread___Ljava_lang_Thread_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Thread_currentThread___Ljava_lang_Thread_2(runtime, para[0].obj);
}


// locals: 0
// stack: 2
// args: 1
s32 func_java_lang_Thread_nextThreadNum___I(JThreadRuntime *runtime, struct java_lang_Thread* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2279, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 40 , L2051397396 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 40;
    // getstatic java/lang/Thread threadInitNumber I
    stack[sp].i =static_var_java_lang_Thread.threadInitNumber_9;
    sp += 1;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // putstatic java/lang/Thread threadInitNumber I
    sp -= 1;
    static_var_java_lang_Thread.threadInitNumber_9 = stack[sp].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Thread_nextThreadNum___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Thread_nextThreadNum___I(runtime, para[0].obj);
}

void bridge_java_lang_Thread_yield___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_yield___V(runtime, para[0].obj);
}

void bridge_java_lang_Thread_sleep__J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_sleep__J_V(runtime, para[0].obj, para[1].j);
}


// locals: 4
// stack: 2
// args: 2
void func_java_lang_Thread_init__Ljava_lang_Runnable_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_Runnable* p0, struct java_lang_String* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2282, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 51 , L1263461649 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 51;
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
    //  line no 52 , L526874139 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/lang/Thread target Ljava/lang/Runnable;
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->target_2 = rstack[sp + 1].obj;
    ; 
    //  line no 53 , L1510162775 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/String.toCharArray()[C
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 7);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/Thread name [C
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->name_3 = rstack[sp + 1].obj;
    ; 
    //  line no 54 , L793485742 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/lang/Thread.getPriority()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 334, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/Thread priority I
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->priority_0 = stack[sp + 1].i;
    ; 
    //  line no 55 , L328314683 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Thread priority I
    stack[sp - 1].i = ((struct java_lang_Thread*)rstack[sp - 1].obj)->priority_0;
    sp += 0;
    // invokespecial java/lang/Thread.setPriority0(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread_setPriority0__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 56 , L929219836 , bytecode index = 
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

void bridge_java_lang_Thread_init__Ljava_lang_Runnable_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_init__Ljava_lang_Runnable_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 4
// args: 0
void func_java_lang_Thread__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2283, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 59 , L94354228 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 59;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 6 , L459875531 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_5
    stack[sp++].i = 5;
    // putfield java/lang/Thread priority I
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->priority_0 = stack[sp + 1].i;
    ; 
    //  line no 18 , L982337150 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Thread.createStackFrame()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].j = func_java_lang_Thread_createStackFrame___J(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/Thread stackFrame J
    sp -= 3;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->stackFrame_4 = stack[sp + 1].j;
    ; 
    //  line no 30 , L337460547 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/Thread daemon Z
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->daemon_8 = stack[sp + 1].i;
    ; 
    //  line no 60 , L1822651119 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4021);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/lang/Thread.nextThreadNum()I
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[334].clazz);
        stack[sp].i = func_java_lang_Thread_nextThreadNum___I(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[334].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/Thread.init(Ljava/lang/Runnable;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread_init__Ljava_lang_Runnable_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 61 , L1052658892 , bytecode index = 
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

void bridge_java_lang_Thread__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread__init____V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_lang_Thread__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2284, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 64 , L324701295 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 6 , L1679401185 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_5
    stack[sp++].i = 5;
    // putfield java/lang/Thread priority I
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->priority_0 = stack[sp + 1].i;
    ; 
    //  line no 18 , L671959170 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Thread.createStackFrame()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].j = func_java_lang_Thread_createStackFrame___J(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/Thread stackFrame J
    sp -= 3;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->stackFrame_4 = stack[sp + 1].j;
    ; 
    //  line no 30 , L1152342155 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/Thread daemon Z
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->daemon_8 = stack[sp + 1].i;
    ; 
    //  line no 65 , L64068997 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/Thread.init(Ljava/lang/Runnable;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread_init__Ljava_lang_Runnable_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 66 , L719727542 , bytecode index = 
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

void bridge_java_lang_Thread__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_java_lang_Thread__init___Ljava_lang_Runnable_2_V(JThreadRuntime *runtime, struct java_lang_Runnable* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2285, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 69 , L1454922150 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 69;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 6 , L1493883713 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_5
    stack[sp++].i = 5;
    // putfield java/lang/Thread priority I
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->priority_0 = stack[sp + 1].i;
    ; 
    //  line no 18 , L1118494797 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Thread.createStackFrame()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].j = func_java_lang_Thread_createStackFrame___J(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/Thread stackFrame J
    sp -= 3;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->stackFrame_4 = stack[sp + 1].j;
    ; 
    //  line no 30 , L1136612247 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/Thread daemon Z
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->daemon_8 = stack[sp + 1].i;
    ; 
    //  line no 70 , L1465800495 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4021);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/lang/Thread.nextThreadNum()I
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[334].clazz);
        stack[sp].i = func_java_lang_Thread_nextThreadNum___I(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[334].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/Thread.init(Ljava/lang/Runnable;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread_init__Ljava_lang_Runnable_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 71 , L1476484694 , bytecode index = 
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

void bridge_java_lang_Thread__init___Ljava_lang_Runnable_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread__init___Ljava_lang_Runnable_2_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_java_lang_Thread__init___Ljava_lang_Runnable_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_Runnable* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2286, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 74 , L1948689480 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 74;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 6 , L1365533388 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_5
    stack[sp++].i = 5;
    // putfield java/lang/Thread priority I
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->priority_0 = stack[sp + 1].i;
    ; 
    //  line no 18 , L54879576 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Thread.createStackFrame()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].j = func_java_lang_Thread_createStackFrame___J(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/Thread stackFrame J
    sp -= 3;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->stackFrame_4 = stack[sp + 1].j;
    ; 
    //  line no 30 , L771459166 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/Thread daemon Z
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->daemon_8 = stack[sp + 1].i;
    ; 
    //  line no 75 , L1824423245 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/Thread.init(Ljava/lang/Runnable;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread_init__Ljava_lang_Runnable_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 76 , L507383828 , bytecode index = 
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

void bridge_java_lang_Thread__init___Ljava_lang_Runnable_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread__init___Ljava_lang_Runnable_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}

void bridge_java_lang_Thread_start___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_start___V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_lang_Thread_run___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2288, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 83 , L1492801385 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 83;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Thread target Ljava/lang/Runnable;
    rstack[sp - 1].obj = ((struct java_lang_Thread*)rstack[sp - 1].obj)->target_2;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L917131986;
    ; 
    //  line no 84 , L1323457920 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Thread target Ljava/lang/Runnable;
    rstack[sp - 1].obj = ((struct java_lang_Thread*)rstack[sp - 1].obj)->target_2;
    sp += 0;
    // invokeinterface java/lang/Runnable.run()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 314, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L917131986:
    //  line no 86 , L917131986 , bytecode index = 
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

void bridge_java_lang_Thread_run___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_run___V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_lang_Thread_interrupt___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2289, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 90 , L195132390 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 90;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Thread.interrupt0()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread_interrupt0___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 91 , L1870234754 , bytecode index = 
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

void bridge_java_lang_Thread_interrupt___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_interrupt___V(runtime, ins);
}

void bridge_java_lang_Thread_isAlive___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Thread_isAlive___Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_java_lang_Thread_setPriority__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2291, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 98 , L1665335167 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 98;
    stack[sp++].i = local[1].i;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1077688833;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L766445308;
    L1077688833:
    //  line no 99 , L1077688833 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1077688833 in labeltable is :L1077688833
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 99;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L766445308:
    //  line no 101 , L766445308 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/lang/Thread priority I
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->priority_0 = stack[sp + 1].i;
    // invokespecial java/lang/Thread.setPriority0(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread_setPriority0__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 102 , L673412242 , bytecode index = 
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

void bridge_java_lang_Thread_setPriority__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_setPriority__I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_lang_Thread_getPriority___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 106 , L2107841088 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Thread priority I
    stack[sp - 1].i = ((struct java_lang_Thread*)rstack[sp - 1].obj)->priority_0;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_Thread_getPriority___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Thread_getPriority___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_Thread_getName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2293, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 111 , L458890629 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 111;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Thread name [C
    rstack[sp - 1].obj = ((struct java_lang_Thread*)rstack[sp - 1].obj)->name_3;
    sp += 0;
    // invokestatic java/lang/String.valueOf([C)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf___3C_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_lang_Thread_getName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Thread_getName___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_Thread_setName__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2294, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 116 , L1416977881 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 116;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L253722034;
    ; 
    //  line no 117 , L1147334625 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.toCharArray()[C
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 7);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/lang/Thread name [C
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->name_3 = rstack[sp + 1].obj;
    L253722034:
    //  line no 119 , L253722034 , bytecode index = 
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

void bridge_java_lang_Thread_setName__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_setName__Ljava_lang_String_2_V(runtime, ins);
}

void bridge_java_lang_Thread_activeCount___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Thread_activeCount___I(runtime, para[0].obj);
}


// locals: 1
// stack: 3
// args: 0
void func_java_lang_Thread_join___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2296, &rstack[0], &rlocal[0], &sp);
    L1985828309:
    //  line no 126 , L1985828309 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 126;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Thread.isAlive()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 334, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L622043416;
    ; 
    //  line no 127 , L737892411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    stack[sp].j = 0x3e8L;
    sp += 2;
    // invokevirtual java/lang/Object.wait(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 5, 6);
        __func_p(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1985828309;
    L622043416:
    //  line no 129 , L622043416 , bytecode index = 
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

void bridge_java_lang_Thread_join___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_join___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_Thread_setDaemon__Z_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2297, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 133 , L1874919946 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 133;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Thread.isAlive()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 334, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1466066315;
    ; 
    //  line no 134 , L640275932 , bytecode index = 
    // new java/lang/IllegalThreadStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 306);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalThreadStateException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
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
    //     L640275932 in labeltable is :L640275932
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 134;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1466066315:
    //  line no 136 , L1466066315 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/Thread daemon Z
    sp -= 2;
    ((struct java_lang_Thread*)rstack[sp + 0].obj)->daemon_8 = stack[sp + 1].i;
    ; 
    //  line no 137 , L630642676 , bytecode index = 
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

void bridge_java_lang_Thread_setDaemon__Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_setDaemon__Z_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_lang_Thread_isDaemon___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 141 , L111819772 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Thread daemon Z
    stack[sp - 1].i = ((struct java_lang_Thread*)rstack[sp - 1].obj)->daemon_8;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_Thread_isDaemon___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Thread_isDaemon___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_java_lang_Thread_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2299, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 146 , L2113919627 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 146;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4031);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Thread.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 334, 6);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4032);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Thread.getPriority()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 334, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4033);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
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

void bridge_java_lang_Thread_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Thread_toString___Ljava_lang_String_2(runtime, ins);
}

void bridge_java_lang_Thread_setPriority0__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_setPriority0__I_V(runtime, ins);
}

void bridge_java_lang_Thread_interrupt0___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Thread_interrupt0___V(runtime, ins);
}


