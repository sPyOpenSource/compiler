// CLASS: java/lang/Runtime extends java/lang/Object
#include "metadata.h"

void func_java_lang_Runtime_exitInternal__I_V(JThreadRuntime *runtime, s32 p0);
void func_java_lang_Runtime_gc___V(JThreadRuntime *runtime);
s64 func_java_lang_Runtime_freeMemory___J(JThreadRuntime *runtime);
s64 func_java_lang_Runtime_totalMemory___J(JThreadRuntime *runtime);

// generation
// globals
//struct java_lang_Runtime_static {struct java_lang_Runtime* currentRuntime_0;  };
struct java_lang_Runtime_static static_var_java_lang_Runtime = {NULL};


__refer arr_vmtable_java_lang_Runtime_from_java_lang_Runtime[] = {
    func_java_lang_Runtime_exit__I_V,  //0
    func_java_lang_Runtime_freeMemory___J,  //1
    func_java_lang_Runtime_totalMemory___J,  //2
    func_java_lang_Runtime_gc___V  //3
};
__refer arr_vmtable_java_lang_Runtime_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_Runtime[] = {
    {254, 4, arr_vmtable_java_lang_Runtime_from_java_lang_Runtime}, //0
    {5, 10, arr_vmtable_java_lang_Runtime_from_java_lang_Object}, //1
};



// locals: 0
// stack: 1
// args: 1
struct java_lang_Runtime* func_java_lang_Runtime_getRuntime___Ljava_lang_Runtime_2(JThreadRuntime *runtime, struct java_lang_Runtime* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1755, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 14 , L1311315651 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 14;
    // getstatic java/lang/Runtime currentRuntime Ljava/lang/Runtime;
    rstack[sp].obj =static_var_java_lang_Runtime.currentRuntime_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_Runtime_getRuntime___Ljava_lang_Runtime_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Runtime_getRuntime___Ljava_lang_Runtime_2(runtime, para[0].obj);
}


// locals: 1
// stack: 1
// args: 0
void func_java_lang_Runtime__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1756, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 18 , L1688917723 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
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

void bridge_java_lang_Runtime__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Runtime__init____V(runtime, ins);
}

void bridge_java_lang_Runtime_exitInternal__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Runtime_exitInternal__I_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_Runtime_exit__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1758, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 25 , L1724399560 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 25;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/Runtime.exitInternal(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Runtime_exitInternal__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 26 , L1415979460 , bytecode index = 
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

void bridge_java_lang_Runtime_exit__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Runtime_exit__I_V(runtime, ins);
}

void bridge_java_lang_Runtime_freeMemory___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_Runtime_freeMemory___J(runtime, ins);
}

void bridge_java_lang_Runtime_totalMemory___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_Runtime_totalMemory___J(runtime, ins);
}

void bridge_java_lang_Runtime_gc___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Runtime_gc___V(runtime, ins);
}


// locals: 0
// stack: 2
// args: 1
void func_java_lang_Runtime__clinit____V(JThreadRuntime *runtime, struct java_lang_Runtime* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1762, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 10 , L1407428730 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 10;
    // new java/lang/Runtime
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 254);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/Runtime.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Runtime__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Runtime currentRuntime Ljava/lang/Runtime;
    sp -= 1;
    static_var_java_lang_Runtime.currentRuntime_0 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_Runtime__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Runtime__clinit____V(runtime, para[0].obj);
}


