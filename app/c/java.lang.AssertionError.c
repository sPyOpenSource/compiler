// CLASS: java/lang/AssertionError extends java/lang/Error
#include "metadata.h"


// generation
// globals
//struct java_lang_AssertionError_static {s64 serialVersionUID_11;  };
struct java_lang_AssertionError_static static_var_java_lang_AssertionError = {0};


__refer arr_vmtable_java_lang_AssertionError_from_java_lang_AssertionError[] = {
    NULL
};
__refer arr_vmtable_java_lang_AssertionError_from_java_lang_Error[] = {
    NULL
};
__refer arr_vmtable_java_lang_AssertionError_from_java_lang_Throwable[] = {
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //0
    func_java_lang_Throwable_getMessage___Ljava_lang_String_2,  //1
    func_java_lang_Throwable_printStackTrace___V,  //2
    func_java_lang_Throwable_printStackTrace__Ljava_io_PrintStream_2_V,  //3
    func_java_lang_Throwable_getLocalizedMessage___Ljava_lang_String_2,  //4
    func_java_lang_Throwable_initCause__Ljava_lang_Throwable_2_Ljava_lang_Throwable_2,  //5
    func_java_lang_Throwable_addSuppressed__Ljava_lang_Throwable_2_V,  //6
    func_java_lang_Throwable_getStackTrace____3Ljava_lang_StackTraceElement_2  //7
};
__refer arr_vmtable_java_lang_AssertionError_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_lang_AssertionError[] = {
    {37, 0, arr_vmtable_java_lang_AssertionError_from_java_lang_AssertionError}, //0
    {7, 0, arr_vmtable_java_lang_AssertionError_from_java_lang_Error}, //1
    {22, 8, arr_vmtable_java_lang_AssertionError_from_java_lang_Throwable}, //2
    {10, 11, arr_vmtable_java_lang_AssertionError_from_java_lang_Object}, //3
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_AssertionError__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 45, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 49 , L1452012306 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 49;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Error.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 50 , L211968962 , bytecode index = 
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

void bridge_java_lang_AssertionError__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_AssertionError__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 46, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 58 , L1173643169 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 58;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 59 , L1282287470 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_AssertionError__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 47, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 74 , L1390835631 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 74;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/lang/String.valueOf(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/AssertionError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_AssertionError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 75 , L889729797 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/lang/Throwable
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 181);
    if(stack[--sp].i  == 0) goto L148912029;
    ; 
    //  line no 76 , L874217650 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/lang/Throwable
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 181);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/AssertionError.initCause(Ljava/lang/Throwable;)Ljava/lang/Throwable;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Throwable* (*__func_p) (JThreadRuntime *,struct java_lang_Throwable*) = find_method(__ins->vm_table, 22, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L148912029:
    //  line no 77 , L148912029 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_AssertionError__init___Z_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 48, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 88 , L558187323 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 88;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/String.valueOf(Z)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__Z_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/AssertionError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_AssertionError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 89 , L680576081 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___Z_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_AssertionError__init___C_V(JThreadRuntime *runtime, u16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 49, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 100 , L453523494 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/String.valueOf(C)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__C_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/AssertionError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_AssertionError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 101 , L274722023 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___C_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_AssertionError__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 50, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 112 , L1210898719 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/String.valueOf(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/AssertionError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_AssertionError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 113 , L306123060 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___I_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_lang_AssertionError__init___J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 51, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 124 , L1527430292 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 124;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
    sp += 2;
    // invokestatic java/lang/String.valueOf(J)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_String_valueOf__J_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/AssertionError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_AssertionError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 125 , L1975546571 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___J_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_AssertionError__init___F_V(JThreadRuntime *runtime, f32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 52, &rstack[0], &rlocal[0], &sp);
    local[0].f = p0;
    ; 
    //  line no 136 , L632587706 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 136;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].f = local[1].f;
    // invokestatic java/lang/String.valueOf(F)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__F_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/AssertionError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_AssertionError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 137 , L726950788 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___F_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___F_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_lang_AssertionError__init___D_V(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 53, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 148 , L558569884 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 148;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].d = local[1].d;
    sp += 2;
    // invokestatic java/lang/String.valueOf(D)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_String_valueOf__D_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/lang/AssertionError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_AssertionError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 149 , L550752602 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___D_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_java_lang_AssertionError__init___Ljava_lang_String_2Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Throwable* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 54, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 165 , L1439337960 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 165;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;Ljava/lang/Throwable;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2Ljava_lang_Throwable_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 166 , L741669172 , bytecode index = 
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

void bridge_java_lang_AssertionError__init___Ljava_lang_String_2Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_AssertionError__init___Ljava_lang_String_2Ljava_lang_Throwable_2_V(runtime, ins, para[0].obj);
}


