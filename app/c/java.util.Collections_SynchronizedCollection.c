// CLASS: java/util/Collections$SynchronizedCollection extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Collections_00024SynchronizedCollection_static {s64 serialVersionUID_0;  };
struct java_util_Collections_00024SynchronizedCollection_static static_var_java_util_Collections_00024SynchronizedCollection = {0};


__refer arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_util_Collections_00024SynchronizedCollection[] = {
    func_java_util_Collections_00024SynchronizedCollection_size___I,  //0
    func_java_util_Collections_00024SynchronizedCollection_isEmpty___Z,  //1
    func_java_util_Collections_00024SynchronizedCollection_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_Collections_00024SynchronizedCollection_toArray____3Ljava_lang_Object_2,  //3
    func_java_util_Collections_00024SynchronizedCollection_iterator___Ljava_util_Iterator_2,  //4
    func_java_util_Collections_00024SynchronizedCollection_add__Ljava_lang_Object_2_Z,  //5
    func_java_util_Collections_00024SynchronizedCollection_remove__Ljava_lang_Object_2_Z,  //6
    func_java_util_Collections_00024SynchronizedCollection_containsAll__Ljava_util_Collection_2_Z,  //7
    func_java_util_Collections_00024SynchronizedCollection_addAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Collections_00024SynchronizedCollection_removeAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_Collections_00024SynchronizedCollection_retainAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_Collections_00024SynchronizedCollection_clear___V,  //11
    func_java_util_Collections_00024SynchronizedCollection_toString___Ljava_lang_String_2,  //12
    func_java_util_Collections_00024SynchronizedCollection_forEach__Ljava_util_function_Consumer_2_V,  //13
    func_java_util_Collections_00024SynchronizedCollection_spliterator___Ljava_util_Spliterator_2,  //14
    func_java_util_Collections_00024SynchronizedCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2  //15
};
__refer arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_util_Collections_00024SynchronizedCollection_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_util_Collection[] = {
    func_java_util_Collections_00024SynchronizedCollection_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_Collections_00024SynchronizedCollection_addAll__Ljava_util_Collection_2_Z,  //1
    func_java_util_Collections_00024SynchronizedCollection_clear___V,  //2
    func_java_util_Collections_00024SynchronizedCollection_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_Collections_00024SynchronizedCollection_containsAll__Ljava_util_Collection_2_Z,  //4
    func_java_util_Collections_00024SynchronizedCollection_isEmpty___Z,  //5
    func_java_util_Collections_00024SynchronizedCollection_iterator___Ljava_util_Iterator_2,  //6
    func_java_util_Collections_00024SynchronizedCollection_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_Collections_00024SynchronizedCollection_removeAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Collections_00024SynchronizedCollection_retainAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_Collections_00024SynchronizedCollection_size___I,  //10
    func_java_util_Collections_00024SynchronizedCollection_toArray____3Ljava_lang_Object_2  //11
};
__refer arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_lang_Iterable[] = {
    func_java_util_Collections_00024SynchronizedCollection_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_Collections_00024SynchronizedCollection_forEach__Ljava_util_function_Consumer_2_V,  //1
    func_java_util_Collections_00024SynchronizedCollection_spliterator___Ljava_util_Spliterator_2  //2
};
__refer arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_java_util_Collections_00024SynchronizedCollection[] = {
    {78, 16, arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_util_Collections_00024SynchronizedCollection}, //0
    {10, 11, arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_lang_Object}, //1
    {75, 12, arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_util_Collection}, //2
    {76, 3, arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_lang_Iterable}, //3
    {64, 0, arr_vmtable_java_util_Collections_00024SynchronizedCollection_from_java_io_Serializable}, //4
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_Collections_00024SynchronizedCollection__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 229, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 2020 , L2074820378 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2020;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 2021 , L1132307065 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    // checkcast java/util/Collection
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 524);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    sp -= 2;
    ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp + 0].obj)->c_1 = rstack[sp + 1].obj;
    ; 
    //  line no 2022 , L599984672 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp + 0].obj)->mutex_2 = rstack[sp + 1].obj;
    ; 
    //  line no 2023 , L505021446 , bytecode index = 
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

void bridge_java_util_Collections_00024SynchronizedCollection__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collections_00024SynchronizedCollection__init___Ljava_util_Collection_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_java_util_Collections_00024SynchronizedCollection__init___Ljava_util_Collection_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_util_Collection* p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 230, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 2025 , L313239742 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2025;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 2026 , L688005825 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    // checkcast java/util/Collection
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 524);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    sp -= 2;
    ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp + 0].obj)->c_1 = rstack[sp + 1].obj;
    ; 
    //  line no 2027 , L1744189907 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    // putfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp + 0].obj)->mutex_2 = rstack[sp + 1].obj;
    ; 
    //  line no 2028 , L103103526 , bytecode index = 
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

void bridge_java_util_Collections_00024SynchronizedCollection__init___Ljava_util_Collection_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collections_00024SynchronizedCollection__init___Ljava_util_Collection_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_size___I[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_size___I = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_size___I};

// locals: 3
// stack: 2
// args: 0
s32 func_java_util_Collections_00024SynchronizedCollection_size___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 231, &rstack[0], &rlocal[0], &sp);
    // try catch :L1906879951 L658909832 L137225802 (
    // try catch :L137225802 L1374066265 L137225802 (
    ; 
    //  line no 2031 , L1206051975 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2031;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1906879951:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    // invokeinterface java/util/Collection.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L658909832:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L137225802:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1374066265:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1374066265 in labeltable is :L1374066265
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2031;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L137225802;
        case 1 : goto L137225802;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_size___I(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_isEmpty___Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_isEmpty___Z = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_isEmpty___Z};

// locals: 3
// stack: 2
// args: 0
s8 func_java_util_Collections_00024SynchronizedCollection_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 232, &rstack[0], &rlocal[0], &sp);
    // try catch :L1627396964 L70323523 L1420232606 (
    // try catch :L1420232606 L652433136 L1420232606 (
    ; 
    //  line no 2034 , L1205445235 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2034;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1627396964:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    // invokeinterface java/util/Collection.isEmpty()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L70323523:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1420232606:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L652433136:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L652433136 in labeltable is :L652433136
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2034;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1420232606;
        case 1 : goto L1420232606;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_isEmpty___Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_contains__Ljava_lang_Object_2_Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_contains__Ljava_lang_Object_2_Z = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_contains__Ljava_lang_Object_2_Z};

// locals: 4
// stack: 2
// args: 1
s8 func_java_util_Collections_00024SynchronizedCollection_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 233, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L670663110 L454104863 L290579508 (
    // try catch :L290579508 L767904468 L290579508 (
    ; 
    //  line no 2037 , L1180244251 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2037;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L670663110:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.contains(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 75, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L454104863:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L290579508:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L767904468:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L767904468 in labeltable is :L767904468
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2037;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L290579508;
        case 1 : goto L290579508;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_contains__Ljava_lang_Object_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_toArray____3Ljava_lang_Object_2[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_toArray____3Ljava_lang_Object_2 = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_toArray____3Ljava_lang_Object_2};

// locals: 3
// stack: 2
// args: 0
JArray * func_java_util_Collections_00024SynchronizedCollection_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 234, &rstack[0], &rlocal[0], &sp);
    // try catch :L1259174396 L1276709283 L1116094714 (
    // try catch :L1116094714 L227755469 L1116094714 (
    ; 
    //  line no 2040 , L762384154 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2040;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1259174396:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    // invokeinterface java/util/Collection.toArray()[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1276709283:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1116094714:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L227755469:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L227755469 in labeltable is :L227755469
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2040;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1116094714;
        case 1 : goto L1116094714;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Collections_00024SynchronizedCollection_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024SynchronizedCollection_toArray____3Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Iterator* func_java_util_Collections_00024SynchronizedCollection_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 235, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 2047 , L1498438472 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2047;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    // invokeinterface java/util/Collection.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 6);
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

void bridge_java_util_Collections_00024SynchronizedCollection_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024SynchronizedCollection_iterator___Ljava_util_Iterator_2(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_add__Ljava_lang_Object_2_Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_add__Ljava_lang_Object_2_Z = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_add__Ljava_lang_Object_2_Z};

// locals: 4
// stack: 2
// args: 1
s8 func_java_util_Collections_00024SynchronizedCollection_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 236, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1809194904 L1219273867 L335359181 (
    // try catch :L335359181 L194707680 L335359181 (
    ; 
    //  line no 2051 , L1349182676 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2051;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1809194904:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.add(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 75, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1219273867:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L335359181:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L194707680:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L194707680 in labeltable is :L194707680
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2051;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L335359181;
        case 1 : goto L335359181;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_add__Ljava_lang_Object_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_remove__Ljava_lang_Object_2_Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_remove__Ljava_lang_Object_2_Z = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_remove__Ljava_lang_Object_2_Z};

// locals: 4
// stack: 2
// args: 1
s8 func_java_util_Collections_00024SynchronizedCollection_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 237, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L120478350 L1424082571 L1403700359 (
    // try catch :L1403700359 L1387380406 L1403700359 (
    ; 
    //  line no 2054 , L658404420 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2054;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L120478350:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.remove(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 75, 7);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1424082571:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1403700359:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1387380406:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1387380406 in labeltable is :L1387380406
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2054;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1403700359;
        case 1 : goto L1403700359;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_remove__Ljava_lang_Object_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_containsAll__Ljava_util_Collection_2_Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_containsAll__Ljava_util_Collection_2_Z = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_containsAll__Ljava_util_Collection_2_Z};

// locals: 4
// stack: 2
// args: 1
s8 func_java_util_Collections_00024SynchronizedCollection_containsAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 238, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L2017085051 L656479172 L1944702768 (
    // try catch :L1944702768 L124888672 L1944702768 (
    ; 
    //  line no 2058 , L760357227 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2058;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L2017085051:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.containsAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 75, 4);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L656479172:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1944702768:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L124888672:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L124888672 in labeltable is :L124888672
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2058;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1944702768;
        case 1 : goto L1944702768;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_containsAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_containsAll__Ljava_util_Collection_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_addAll__Ljava_util_Collection_2_Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_addAll__Ljava_util_Collection_2_Z = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_addAll__Ljava_util_Collection_2_Z};

// locals: 4
// stack: 2
// args: 1
s8 func_java_util_Collections_00024SynchronizedCollection_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 239, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1064265473 L891786282 L155361948 (
    // try catch :L155361948 L517355658 L155361948 (
    ; 
    //  line no 2061 , L1514476350 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2061;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1064265473:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.addAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 75, 1);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L891786282:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L155361948:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L517355658:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L517355658 in labeltable is :L517355658
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2061;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L155361948;
        case 1 : goto L155361948;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_addAll__Ljava_util_Collection_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_removeAll__Ljava_util_Collection_2_Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_removeAll__Ljava_util_Collection_2_Z = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_removeAll__Ljava_util_Collection_2_Z};

// locals: 4
// stack: 2
// args: 1
s8 func_java_util_Collections_00024SynchronizedCollection_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 240, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1333810223 L1623009085 L303240439 (
    // try catch :L303240439 L319558327 L303240439 (
    ; 
    //  line no 2064 , L1583353301 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2064;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1333810223:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.removeAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 75, 8);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1623009085:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L303240439:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L319558327:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L319558327 in labeltable is :L319558327
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2064;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L303240439;
        case 1 : goto L303240439;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_removeAll__Ljava_util_Collection_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_retainAll__Ljava_util_Collection_2_Z[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_retainAll__Ljava_util_Collection_2_Z = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_retainAll__Ljava_util_Collection_2_Z};

// locals: 4
// stack: 2
// args: 1
s8 func_java_util_Collections_00024SynchronizedCollection_retainAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 241, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1565740893 L775514090 L1894369629 (
    // try catch :L1894369629 L1297502382 L1894369629 (
    ; 
    //  line no 2067 , L171493374 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2067;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1565740893:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.retainAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 75, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L775514090:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1894369629:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1297502382:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1297502382 in labeltable is :L1297502382
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2067;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1894369629;
        case 1 : goto L1894369629;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Collections_00024SynchronizedCollection_retainAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024SynchronizedCollection_retainAll__Ljava_util_Collection_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_clear___V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_clear___V = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_clear___V};

// locals: 3
// stack: 2
// args: 0
void func_java_util_Collections_00024SynchronizedCollection_clear___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 242, &rstack[0], &rlocal[0], &sp);
    // try catch :L1371957475 L778731861 L1646371921 (
    // try catch :L1646371921 L1383178166 L1646371921 (
    ; 
    //  line no 2070 , L806511723 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2070;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1371957475:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    // invokeinterface java/util/Collection.clear()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L778731861:
    __frame->bytecodeIndex = 
    goto L1250442005;
    L1646371921:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1383178166:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1383178166 in labeltable is :L1383178166
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2070;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1250442005:
    //  line no 2071 , L1250442005 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1646371921;
        case 1 : goto L1646371921;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_Collections_00024SynchronizedCollection_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collections_00024SynchronizedCollection_clear___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_toString___Ljava_lang_String_2[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_toString___Ljava_lang_String_2 = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_toString___Ljava_lang_String_2};

// locals: 3
// stack: 2
// args: 0
struct java_lang_String* func_java_util_Collections_00024SynchronizedCollection_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 243, &rstack[0], &rlocal[0], &sp);
    // try catch :L2067180044 L1478797373 L1400856767 (
    // try catch :L1400856767 L1450652220 L1400856767 (
    ; 
    //  line no 2073 , L417301556 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2073;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L2067180044:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    // invokevirtual java/lang/Object.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1478797373:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1400856767:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1450652220:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1450652220 in labeltable is :L1450652220
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2073;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1400856767;
        case 1 : goto L1400856767;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Collections_00024SynchronizedCollection_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024SynchronizedCollection_toString___Ljava_lang_String_2(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_forEach__Ljava_util_function_Consumer_2_V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_forEach__Ljava_util_function_Consumer_2_V = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_forEach__Ljava_util_function_Consumer_2_V};

// locals: 4
// stack: 2
// args: 1
void func_java_util_Collections_00024SynchronizedCollection_forEach__Ljava_util_function_Consumer_2_V(JThreadRuntime *runtime, struct java_util_function_Consumer* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 244, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1293241549 L580673921 L1183231938 (
    // try catch :L1183231938 L504053874 L1183231938 (
    ; 
    //  line no 2078 , L2032079962 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2078;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1293241549:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.forEach(Ljava/util/function/Consumer;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_function_Consumer*) = find_method(__ins->vm_table, 76, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L580673921:
    __frame->bytecodeIndex = 
    goto L953082513;
    L1183231938:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L504053874:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L504053874 in labeltable is :L504053874
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2078;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L953082513:
    //  line no 2079 , L953082513 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1183231938;
        case 1 : goto L1183231938;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_Collections_00024SynchronizedCollection_forEach__Ljava_util_function_Consumer_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collections_00024SynchronizedCollection_forEach__Ljava_util_function_Consumer_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Spliterator* func_java_util_Collections_00024SynchronizedCollection_spliterator___Ljava_util_Spliterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 245, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 2086 , L252277567 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2086;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection c Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->c_1;
    sp += 0;
    // invokeinterface java/util/Collection.spliterator()Ljava/util/Spliterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Spliterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 76, 2);
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

void bridge_java_util_Collections_00024SynchronizedCollection_spliterator___Ljava_util_Spliterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024SynchronizedCollection_spliterator___Ljava_util_Spliterator_2(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Collections_00024SynchronizedCollection_writeObject__Ljava_io_ObjectOutputStream_2_V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Collections_00024SynchronizedCollection_writeObject__Ljava_io_ObjectOutputStream_2_V = {2, arr_extable_func_java_util_Collections_00024SynchronizedCollection_writeObject__Ljava_io_ObjectOutputStream_2_V};

// locals: 4
// stack: 2
// args: 1
void func_java_util_Collections_00024SynchronizedCollection_writeObject__Ljava_io_ObjectOutputStream_2_V(JThreadRuntime *runtime, struct java_io_ObjectOutputStream* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 246, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1101048445 L664070838 L1665197552 (
    // try catch :L1665197552 L1158258131 L1665197552 (
    ; 
    //  line no 2097 , L20853837 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2097;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp - 1].obj)->mutex_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1101048445:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/ObjectOutputStream.defaultWriteObject()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 77, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L664070838:
    __frame->bytecodeIndex = 
    goto L33533830;
    L1665197552:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1158258131:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1158258131 in labeltable is :L1158258131
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2097;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L33533830:
    //  line no 2098 , L33533830 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1665197552;
        case 1 : goto L1665197552;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_Collections_00024SynchronizedCollection_writeObject__Ljava_io_ObjectOutputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collections_00024SynchronizedCollection_writeObject__Ljava_io_ObjectOutputStream_2_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
JArray * func_java_util_Collections_00024SynchronizedCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 247, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 2102 , L1813666644 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2102;
    // new java/lang/UnsupportedOperationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 24);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 209);
    // invokespecial java/lang/UnsupportedOperationException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_UnsupportedOperationException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1813666644 in labeltable is :L1813666644
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2102;
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
    return NULL;
}

void bridge_java_util_Collections_00024SynchronizedCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024SynchronizedCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(runtime, ins);
}


