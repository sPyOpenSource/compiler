// CLASS: java/lang/Iterable extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_Iterable_static {};



__refer arr_vmtable_java_lang_Iterable_from_java_lang_Iterable[] = {
    func_java_lang_Iterable_iterator___Ljava_util_Iterator_2,  //0
    func_java_lang_Iterable_forEach__Ljava_util_function_Consumer_2_V,  //1
    func_java_lang_Iterable_spliterator___Ljava_util_Spliterator_2  //2
};
__refer arr_vmtable_java_lang_Iterable_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_Iterable[] = {
    {76, 3, arr_vmtable_java_lang_Iterable_from_java_lang_Iterable}, //0
    {10, 11, arr_vmtable_java_lang_Iterable_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 0
struct java_util_Iterator* func_java_lang_Iterable_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 622, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_Iterable_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Iterable_iterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
void func_java_lang_Iterable_forEach__Ljava_util_function_Consumer_2_V(JThreadRuntime *runtime, struct java_util_function_Consumer* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 623, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 73 , L504336483 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 73;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/Objects.requireNonNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_Objects_requireNonNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 74 , L1404932042 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokeinterface java/lang/Iterable.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 76, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    L1984094095:
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 129, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1043358826;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 129, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 75 , L1558079303 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/function/Consumer.accept(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 246, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 76 , L1671590089 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1984094095;
    L1043358826:
    //  line no 77 , L1043358826 , bytecode index = 
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

void bridge_java_lang_Iterable_forEach__Ljava_util_function_Consumer_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Iterable_forEach__Ljava_util_function_Consumer_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_util_Spliterator* func_java_lang_Iterable_spliterator___Ljava_util_Spliterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 624, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 101 , L1053967012 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 101;
    rstack[sp++].obj = rlocal[0].obj;
    // invokeinterface java/lang/Iterable.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 76, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic java/util/Spliterators.spliteratorUnknownSize(Ljava/util/Iterator;I)Ljava/util/Spliterator;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_Spliterators_spliteratorUnknownSize__Ljava_util_Iterator_2I_Ljava_util_Spliterator_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
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

void bridge_java_lang_Iterable_spliterator___Ljava_util_Spliterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Iterable_spliterator___Ljava_util_Spliterator_2(runtime, ins);
}


