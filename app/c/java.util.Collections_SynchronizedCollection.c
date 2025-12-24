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
    //  line no 2020 , L1132307065 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2020;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 2021 , L599984672 , bytecode index = 
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
    //  line no 2022 , L505021446 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp + 0].obj)->mutex_2 = rstack[sp + 1].obj;
    ; 
    //  line no 2023 , L1022081840 , bytecode index = 
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
    //  line no 2025 , L688005825 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2025;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 2026 , L1744189907 , bytecode index = 
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
    //  line no 2027 , L103103526 , bytecode index = 
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
    //  line no 2028 , L1225038340 , bytecode index = 
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
    // try catch :L658909832 L137225802 L1704237553 (
    // try catch :L1704237553 L1206051975 L1704237553 (
    ; 
    //  line no 2031 , L538592647 , bytecode index = 
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
    L658909832:
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
    L137225802:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1704237553:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1206051975:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1206051975 in labeltable is :L1206051975
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2031;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1704237553;
        case 1 : goto L1704237553;
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
    // try catch :L70323523 L1420232606 L652433136 (
    // try catch :L652433136 L1205445235 L652433136 (
    ; 
    //  line no 2034 , L1267655902 , bytecode index = 
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
    L70323523:
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
    L1420232606:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L652433136:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1205445235:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1205445235 in labeltable is :L1205445235
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2034;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L652433136;
        case 1 : goto L652433136;
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
    // try catch :L454104863 L290579508 L767904468 (
    // try catch :L767904468 L1180244251 L767904468 (
    ; 
    //  line no 2037 , L1432569632 , bytecode index = 
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
    L454104863:
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
    L290579508:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L767904468:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1180244251:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1180244251 in labeltable is :L1180244251
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2037;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L767904468;
        case 1 : goto L767904468;
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
    // try catch :L1276709283 L1116094714 L227755469 (
    // try catch :L227755469 L762384154 L227755469 (
    ; 
    //  line no 2040 , L690052870 , bytecode index = 
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
    L1276709283:
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
    L1116094714:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L227755469:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L762384154:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L762384154 in labeltable is :L762384154
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2040;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L227755469;
        case 1 : goto L227755469;
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
    //  line no 2047 , L1325056130 , bytecode index = 
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
    // try catch :L1219273867 L335359181 L194707680 (
    // try catch :L194707680 L1349182676 L194707680 (
    ; 
    //  line no 2051 , L2102368942 , bytecode index = 
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
    L1219273867:
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
    L335359181:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L194707680:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1349182676:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1349182676 in labeltable is :L1349182676
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2051;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L194707680;
        case 1 : goto L194707680;
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
    // try catch :L1424082571 L1403700359 L1387380406 (
    // try catch :L1387380406 L658404420 L1387380406 (
    ; 
    //  line no 2054 , L2108763062 , bytecode index = 
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
    L1424082571:
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
    L1403700359:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1387380406:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L658404420:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L658404420 in labeltable is :L658404420
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2054;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1387380406;
        case 1 : goto L1387380406;
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
    // try catch :L656479172 L1944702768 L124888672 (
    // try catch :L124888672 L760357227 L124888672 (
    ; 
    //  line no 2058 , L37926966 , bytecode index = 
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
    L656479172:
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
    L1944702768:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L124888672:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L760357227:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L760357227 in labeltable is :L760357227
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2058;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L124888672;
        case 1 : goto L124888672;
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
    // try catch :L891786282 L155361948 L517355658 (
    // try catch :L517355658 L1514476350 L517355658 (
    ; 
    //  line no 2061 , L1397381784 , bytecode index = 
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
    L891786282:
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
    L155361948:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L517355658:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1514476350:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1514476350 in labeltable is :L1514476350
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2061;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L517355658;
        case 1 : goto L517355658;
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
    // try catch :L1623009085 L303240439 L319558327 (
    // try catch :L319558327 L1583353301 L319558327 (
    ; 
    //  line no 2064 , L1466785259 , bytecode index = 
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
    L1623009085:
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
    L303240439:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L319558327:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1583353301:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1583353301 in labeltable is :L1583353301
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2064;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L319558327;
        case 1 : goto L319558327;
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
    // try catch :L775514090 L1894369629 L1297502382 (
    // try catch :L1297502382 L171493374 L1297502382 (
    ; 
    //  line no 2067 , L1876682596 , bytecode index = 
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
    L775514090:
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
    L1894369629:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1297502382:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L171493374:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L171493374 in labeltable is :L171493374
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2067;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1297502382;
        case 1 : goto L1297502382;
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
    // try catch :L778731861 L1646371921 L1383178166 (
    // try catch :L1383178166 L806511723 L1383178166 (
    ; 
    //  line no 2070 , L1250442005 , bytecode index = 
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
    L778731861:
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
    L1646371921:
    __frame->bytecodeIndex = 
    goto L627318073;
    L1383178166:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L806511723:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L806511723 in labeltable is :L806511723
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2070;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L627318073:
    //  line no 2071 , L627318073 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1383178166;
        case 1 : goto L1383178166;
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
    // try catch :L1478797373 L1400856767 L1450652220 (
    // try catch :L1450652220 L417301556 L1450652220 (
    ; 
    //  line no 2073 , L1707582034 , bytecode index = 
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
    L1478797373:
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
    L1400856767:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1450652220:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L417301556:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L417301556 in labeltable is :L417301556
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2073;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1450652220;
        case 1 : goto L1450652220;
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
    // try catch :L580673921 L1183231938 L504053874 (
    // try catch :L504053874 L2032079962 L504053874 (
    ; 
    //  line no 2078 , L953082513 , bytecode index = 
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
    L580673921:
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
    L1183231938:
    __frame->bytecodeIndex = 
    goto L1262854901;
    L504053874:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2032079962:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L2032079962 in labeltable is :L2032079962
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2078;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1262854901:
    //  line no 2079 , L1262854901 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L504053874;
        case 1 : goto L504053874;
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
    //  line no 2086 , L238357312 , bytecode index = 
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
    // try catch :L664070838 L1665197552 L1158258131 (
    // try catch :L1158258131 L20853837 L1158258131 (
    ; 
    //  line no 2097 , L33533830 , bytecode index = 
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
    L664070838:
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
    L1665197552:
    __frame->bytecodeIndex = 
    goto L1702143276;
    L1158258131:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L20853837:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L20853837 in labeltable is :L20853837
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2097;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1702143276:
    //  line no 2098 , L1702143276 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1158258131;
        case 1 : goto L1158258131;
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
    //  line no 2102 , L477533894 , bytecode index = 
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
    //     L477533894 in labeltable is :L477533894
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


