// CLASS: java/lang/invoke/ConstantCallSite extends java/lang/invoke/CallSite
#include "metadata.h"


// generation
// globals
//struct java_lang_invoke_ConstantCallSite_static {};



__refer arr_vmtable_java_lang_invoke_ConstantCallSite_from_java_lang_invoke_ConstantCallSite[] = {
    func_java_lang_invoke_ConstantCallSite_getTarget___Ljava_lang_invoke_MethodHandle_2,  //0
    func_java_lang_invoke_ConstantCallSite_setTarget__Ljava_lang_invoke_MethodHandle_2_V,  //1
    func_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_invoke_MethodHandle_2,  //2
    func_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_Object_2  //3
};
__refer arr_vmtable_java_lang_invoke_ConstantCallSite_from_java_lang_invoke_CallSite[] = {
    func_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_Object_2  //0
};
__refer arr_vmtable_java_lang_invoke_ConstantCallSite_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_invoke_ConstantCallSite[] = {
    {25, 4, arr_vmtable_java_lang_invoke_ConstantCallSite_from_java_lang_invoke_ConstantCallSite}, //0
    {26, 1, arr_vmtable_java_lang_invoke_ConstantCallSite_from_java_lang_invoke_CallSite}, //1
    {10, 11, arr_vmtable_java_lang_invoke_ConstantCallSite_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_lang_invoke_ConstantCallSite__init___Ljava_lang_invoke_MethodHandle_2_V(JThreadRuntime *runtime, struct java_lang_invoke_MethodHandle* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 21, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 43 , L1107730949 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/invoke/CallSite.<init>(Ljava/lang/invoke/MethodHandle;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_invoke_CallSite__init___Ljava_lang_invoke_MethodHandle_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 44 , L700072760 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/lang/invoke/ConstantCallSite isFrozen Z
    sp -= 2;
    ((struct java_lang_invoke_ConstantCallSite*)rstack[sp + 0].obj)->isFrozen_1 = stack[sp + 1].i;
    ; 
    //  line no 45 , L1461149300 , bytecode index = 
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

void bridge_java_lang_invoke_ConstantCallSite__init___Ljava_lang_invoke_MethodHandle_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_ConstantCallSite__init___Ljava_lang_invoke_MethodHandle_2_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_java_lang_invoke_ConstantCallSite__init___Ljava_lang_invoke_MethodType_2Ljava_lang_invoke_MethodHandle_2_V(JThreadRuntime *runtime, struct java_lang_invoke_MethodType* p0, struct java_lang_invoke_MethodHandle* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 22, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 81 , L206835546 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/invoke/CallSite.<init>(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_invoke_CallSite__init___Ljava_lang_invoke_MethodType_2Ljava_lang_invoke_MethodHandle_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 82 , L1997287019 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/lang/invoke/ConstantCallSite isFrozen Z
    sp -= 2;
    ((struct java_lang_invoke_ConstantCallSite*)rstack[sp + 0].obj)->isFrozen_1 = stack[sp + 1].i;
    ; 
    //  line no 83 , L436546048 , bytecode index = 
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

void bridge_java_lang_invoke_ConstantCallSite__init___Ljava_lang_invoke_MethodType_2Ljava_lang_invoke_MethodHandle_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_ConstantCallSite__init___Ljava_lang_invoke_MethodType_2Ljava_lang_invoke_MethodHandle_2_V(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_invoke_MethodHandle* func_java_lang_invoke_ConstantCallSite_getTarget___Ljava_lang_invoke_MethodHandle_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 23, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 95 , L1627428162 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 95;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/invoke/ConstantCallSite isFrozen Z
    stack[sp - 1].i = ((struct java_lang_invoke_ConstantCallSite*)rstack[sp - 1].obj)->isFrozen_1;
    sp += 0;
    if(stack[--sp].i  != 0) goto L2011791487;
    // new java/lang/IllegalStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 23);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalStateException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalStateException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1627428162 in labeltable is :L1627428162
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 95;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2011791487:
    //  line no 96 , L2011791487 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/invoke/ConstantCallSite target Ljava/lang/invoke/MethodHandle;
    rstack[sp - 1].obj = ((struct java_lang_invoke_ConstantCallSite*)rstack[sp - 1].obj)->target_0;
    sp += 0;
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

void bridge_java_lang_invoke_ConstantCallSite_getTarget___Ljava_lang_invoke_MethodHandle_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_ConstantCallSite_getTarget___Ljava_lang_invoke_MethodHandle_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_invoke_ConstantCallSite_setTarget__Ljava_lang_invoke_MethodHandle_2_V(JThreadRuntime *runtime, struct java_lang_invoke_MethodHandle* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 24, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 106 , L439928219 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 106;
    // new java/lang/UnsupportedOperationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 24);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/UnsupportedOperationException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_UnsupportedOperationException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L439928219 in labeltable is :L439928219
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 106;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_invoke_ConstantCallSite_setTarget__Ljava_lang_invoke_MethodHandle_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_invoke_ConstantCallSite_setTarget__Ljava_lang_invoke_MethodHandle_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_invoke_MethodHandle* func_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_invoke_MethodHandle_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 25, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 118 , L1151755506 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 118;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/invoke/ConstantCallSite.getTarget()Ljava/lang/invoke/MethodHandle;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_invoke_MethodHandle* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 25, 0);
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

void bridge_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_invoke_MethodHandle_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_invoke_MethodHandle_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 26, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 34 , L592959754 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 34;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/invoke/ConstantCallSite.dynamicInvoker()Ljava/lang/invoke/MethodHandle;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_invoke_MethodHandle* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 25, 2);
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

void bridge_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_invoke_ConstantCallSite_dynamicInvoker___Ljava_lang_Object_2(runtime, ins);
}


