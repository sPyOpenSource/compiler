// CLASS: java/lang/ExceptionInInitializerError extends java/lang/LinkageError
#include "metadata.h"


// generation
// globals
//struct java_lang_ExceptionInInitializerError_static {s64 serialVersionUID_12;  };
struct java_lang_ExceptionInInitializerError_static static_var_java_lang_ExceptionInInitializerError = {0};


__refer arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_ExceptionInInitializerError[] = {
    func_java_lang_ExceptionInInitializerError_getException___Ljava_lang_Throwable_2,  //0
    func_java_lang_ExceptionInInitializerError_getCause___Ljava_lang_Throwable_2  //1
};
__refer arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_LinkageError[] = {
    NULL
};
__refer arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_Error[] = {
    NULL
};
__refer arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_Throwable[] = {
    func_java_lang_Throwable_toString___Ljava_lang_String_2,  //0
    func_java_lang_Throwable_getMessage___Ljava_lang_String_2,  //1
    func_java_lang_Throwable_printStackTrace___V,  //2
    func_java_lang_Throwable_printStackTrace__Ljava_io_PrintStream_2_V,  //3
    func_java_lang_Throwable_getLocalizedMessage___Ljava_lang_String_2,  //4
    func_java_lang_Throwable_initCause__Ljava_lang_Throwable_2_Ljava_lang_Throwable_2,  //5
    func_java_lang_Throwable_addSuppressed__Ljava_lang_Throwable_2_V,  //6
    func_java_lang_Throwable_getStackTrace____3Ljava_lang_StackTraceElement_2  //7
};
__refer arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_ExceptionInInitializerError[] = {
    {255, 2, arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_ExceptionInInitializerError}, //0
    {248, 0, arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_LinkageError}, //1
    {7, 0, arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_Error}, //2
    {22, 8, arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_Throwable}, //3
    {10, 11, arr_vmtable_java_lang_ExceptionInInitializerError_from_java_lang_Object}, //4
};



// locals: 1
// stack: 2
// args: 0
void func_java_lang_ExceptionInInitializerError__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 650, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 66 , L587180314 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 66;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/LinkageError.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_LinkageError__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 67 , L1955990522 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokevirtual java/lang/ExceptionInInitializerError.initCause(Ljava/lang/Throwable;)Ljava/lang/Throwable;
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
    ; 
    //  line no 68 , L69673470 , bytecode index = 
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

void bridge_java_lang_ExceptionInInitializerError__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ExceptionInInitializerError__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_ExceptionInInitializerError__init___Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, struct java_lang_Throwable* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 651, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 78 , L527211736 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 78;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/LinkageError.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_LinkageError__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 79 , L1533123860 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokevirtual java/lang/ExceptionInInitializerError.initCause(Ljava/lang/Throwable;)Ljava/lang/Throwable;
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
    ; 
    //  line no 80 , L1718906711 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/lang/ExceptionInInitializerError exception Ljava/lang/Throwable;
    sp -= 2;
    ((struct java_lang_ExceptionInInitializerError*)rstack[sp + 0].obj)->exception_13 = rstack[sp + 1].obj;
    ; 
    //  line no 81 , L71802912 , bytecode index = 
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

void bridge_java_lang_ExceptionInInitializerError__init___Ljava_lang_Throwable_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ExceptionInInitializerError__init___Ljava_lang_Throwable_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_ExceptionInInitializerError__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 652, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 94 , L686349795 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 94;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/LinkageError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_LinkageError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 95 , L1831010686 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokevirtual java/lang/ExceptionInInitializerError.initCause(Ljava/lang/Throwable;)Ljava/lang/Throwable;
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
    ; 
    //  line no 96 , L1423768154 , bytecode index = 
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

void bridge_java_lang_ExceptionInInitializerError__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ExceptionInInitializerError__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Throwable* func_java_lang_ExceptionInInitializerError_getException___Ljava_lang_Throwable_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 112 , L1987977423 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ExceptionInInitializerError exception Ljava/lang/Throwable;
    rstack[sp - 1].obj = ((struct java_lang_ExceptionInInitializerError*)rstack[sp - 1].obj)->exception_13;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_lang_ExceptionInInitializerError_getException___Ljava_lang_Throwable_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_ExceptionInInitializerError_getException___Ljava_lang_Throwable_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Throwable* func_java_lang_ExceptionInInitializerError_getCause___Ljava_lang_Throwable_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 124 , L807322507 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ExceptionInInitializerError exception Ljava/lang/Throwable;
    rstack[sp - 1].obj = ((struct java_lang_ExceptionInInitializerError*)rstack[sp - 1].obj)->exception_13;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_lang_ExceptionInInitializerError_getCause___Ljava_lang_Throwable_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_ExceptionInInitializerError_getCause___Ljava_lang_Throwable_2(runtime, ins);
}


