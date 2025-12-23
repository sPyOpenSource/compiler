// CLASS: java/util/Collections$2 extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Collections_000242_static {};



__refer arr_vmtable_java_util_Collections_000242_from_java_util_Collections_000242[] = {
    func_java_util_Collections_000242_trySplit___Ljava_util_Spliterator_2,  //0
    func_java_util_Collections_000242_tryAdvance__Ljava_util_function_Consumer_2_Z,  //1
    func_java_util_Collections_000242_forEachRemaining__Ljava_util_function_Consumer_2_V,  //2
    func_java_util_Collections_000242_estimateSize___J,  //3
    func_java_util_Collections_000242_characteristics___I  //4
};
__refer arr_vmtable_java_util_Collections_000242_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_Collections_000242_from_java_util_Spliterator[] = {
    func_java_util_Collections_000242_tryAdvance__Ljava_util_function_Consumer_2_Z,  //0
    func_java_util_Collections_000242_forEachRemaining__Ljava_util_function_Consumer_2_V,  //1
    func_java_util_Collections_000242_trySplit___Ljava_util_Spliterator_2,  //2
    func_java_util_Collections_000242_estimateSize___J,  //3
    func_java_util_Collections_000242_characteristics___I  //4
};
VMTable vmtable_java_util_Collections_000242[] = {
    {267, 5, arr_vmtable_java_util_Collections_000242_from_java_util_Collections_000242}, //0
    {10, 11, arr_vmtable_java_util_Collections_000242_from_java_lang_Object}, //1
    {253, 5, arr_vmtable_java_util_Collections_000242_from_java_util_Spliterator}, //2
};



// locals: 2
// stack: 3
// args: 1
void func_java_util_Collections_000242__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 710, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 4815 , L1141113940 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 4815;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/Collections$2 val$element Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Collections_000242*)rstack[sp + 0].obj)->val_00024element_1 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 4816 , L1711185459 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    // putfield java/util/Collections$2 est J
    sp -= 3;
    ((struct java_util_Collections_000242*)rstack[sp + 0].obj)->est_0 = stack[sp + 1].j;
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

void bridge_java_util_Collections_000242__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collections_000242__init___Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Spliterator* func_java_util_Collections_000242_trySplit___Ljava_util_Spliterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 711, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 4820 , L1123559518 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 4820;
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_java_util_Collections_000242_trySplit___Ljava_util_Spliterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_000242_trySplit___Ljava_util_Spliterator_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
s8 func_java_util_Collections_000242_tryAdvance__Ljava_util_function_Consumer_2_Z(JThreadRuntime *runtime, struct java_util_function_Consumer* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 712, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 4825 , L925150995 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 4825;
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
    //  line no 4826 , L1760219993 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$2 est J
    stack[sp - 1].j = ((struct java_util_Collections_000242*)rstack[sp - 1].obj)->est_0;
    sp += 1;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L1800649922;
    ; 
    //  line no 4827 , L403547747 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Collections$2 est J
    stack[sp - 1].j = ((struct java_util_Collections_000242*)rstack[sp - 1].obj)->est_0;
    sp += 1;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    // putfield java/util/Collections$2 est J
    sp -= 3;
    ((struct java_util_Collections_000242*)rstack[sp + 0].obj)->est_0 = stack[sp + 1].j;
    ; 
    //  line no 4828 , L172215878 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$2 val$element Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_000242*)rstack[sp - 1].obj)->val_00024element_1;
    sp += 0;
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
    //  line no 4829 , L873309260 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1800649922:
    //  line no 4831 , L1800649922 , bytecode index = 
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

void bridge_java_util_Collections_000242_tryAdvance__Ljava_util_function_Consumer_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_000242_tryAdvance__Ljava_util_function_Consumer_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_util_Collections_000242_forEachRemaining__Ljava_util_function_Consumer_2_V(JThreadRuntime *runtime, struct java_util_function_Consumer* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 713, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 4836 , L923083575 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 4836;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Collections$2.tryAdvance(Ljava/util/function/Consumer;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_function_Consumer*) = find_method(__ins->vm_table, 267, 1);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 4837 , L589363823 , bytecode index = 
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

void bridge_java_util_Collections_000242_forEachRemaining__Ljava_util_function_Consumer_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collections_000242_forEachRemaining__Ljava_util_function_Consumer_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s64 func_java_util_Collections_000242_estimateSize___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    ; 
    //  line no 4841 , L1299327689 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$2 est J
    stack[sp - 1].j = ((struct java_util_Collections_000242*)rstack[sp - 1].obj)->est_0;
    sp += 1;
    return stack[sp - 2].j;
    ; 
}

void bridge_java_util_Collections_000242_estimateSize___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_util_Collections_000242_estimateSize___J(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
s32 func_java_util_Collections_000242_characteristics___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 715, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 4846 , L2007486296 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 4846;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$2 val$element Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_000242*)rstack[sp - 1].obj)->val_00024element_1;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1033348658;
    //  sipush 256
    stack[sp++].i = 256;
    goto L1634723627;
    L1033348658:
    // iconst_0
    stack[sp++].i = 0;
    L1634723627:
    local[1].i = stack[--sp].i;
    ; 
    //  line no 4848 , L938463537 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 64
    stack[sp++].i = 64;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 16384
    stack[sp++].i = 16384;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 1024
    stack[sp++].i = 1024;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
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

void bridge_java_util_Collections_000242_characteristics___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_000242_characteristics___I(runtime, ins);
}


