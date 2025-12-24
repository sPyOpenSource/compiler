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
    //  line no 2020 , L1426963578 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2020;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 2021 , L556281560 , bytecode index = 
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
    //  line no 2022 , L915500720 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield java/util/Collections$SynchronizedCollection mutex Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Collections_00024SynchronizedCollection*)rstack[sp + 0].obj)->mutex_2 = rstack[sp + 1].obj;
    ; 
    //  line no 2023 , L2074820378 , bytecode index = 
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
    //  line no 2025 , L599984672 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2025;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 2026 , L505021446 , bytecode index = 
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
    //  line no 2027 , L1022081840 , bytecode index = 
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
    //  line no 2028 , L313239742 , bytecode index = 
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
    // try catch :L1744189907 L103103526 L1225038340 (
    // try catch :L1225038340 L658909832 L1225038340 (
    ; 
    //  line no 2031 , L137225802 , bytecode index = 
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
    L1744189907:
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
    L103103526:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1225038340:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L658909832:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L658909832 in labeltable is :L658909832
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2031;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1225038340;
        case 1 : goto L1225038340;
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
    // try catch :L1374066265 L1206051975 L538592647 (
    // try catch :L538592647 L1627396964 L538592647 (
    ; 
    //  line no 2034 , L70323523 , bytecode index = 
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
    L1374066265:
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
    L1206051975:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L538592647:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1627396964:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1627396964 in labeltable is :L1627396964
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2034;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L538592647;
        case 1 : goto L538592647;
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
    // try catch :L652433136 L1205445235 L1267655902 (
    // try catch :L1267655902 L670663110 L1267655902 (
    ; 
    //  line no 2037 , L454104863 , bytecode index = 
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
    L652433136:
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
    L1205445235:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1267655902:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L670663110:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L670663110 in labeltable is :L670663110
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2037;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1267655902;
        case 1 : goto L1267655902;
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
    // try catch :L767904468 L1180244251 L1432569632 (
    // try catch :L1432569632 L1259174396 L1432569632 (
    ; 
    //  line no 2040 , L1276709283 , bytecode index = 
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
    L767904468:
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
    L1180244251:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1432569632:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1259174396:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1259174396 in labeltable is :L1259174396
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2040;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1432569632;
        case 1 : goto L1432569632;
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
    //  line no 2047 , L227755469 , bytecode index = 
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
    // try catch :L690052870 L1498438472 L1325056130 (
    // try catch :L1325056130 L1809194904 L1325056130 (
    ; 
    //  line no 2051 , L1219273867 , bytecode index = 
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
    L690052870:
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
    L1498438472:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1325056130:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1809194904:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1809194904 in labeltable is :L1809194904
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2051;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1325056130;
        case 1 : goto L1325056130;
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
    // try catch :L194707680 L1349182676 L2102368942 (
    // try catch :L2102368942 L120478350 L2102368942 (
    ; 
    //  line no 2054 , L1424082571 , bytecode index = 
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
    L194707680:
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
    L1349182676:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L2102368942:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L120478350:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L120478350 in labeltable is :L120478350
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2054;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L2102368942;
        case 1 : goto L2102368942;
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
    // try catch :L1387380406 L658404420 L2108763062 (
    // try catch :L2108763062 L2017085051 L2108763062 (
    ; 
    //  line no 2058 , L656479172 , bytecode index = 
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
    L1387380406:
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
    L658404420:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L2108763062:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2017085051:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L2017085051 in labeltable is :L2017085051
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2058;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L2108763062;
        case 1 : goto L2108763062;
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
    // try catch :L124888672 L760357227 L37926966 (
    // try catch :L37926966 L1064265473 L37926966 (
    ; 
    //  line no 2061 , L891786282 , bytecode index = 
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
    L124888672:
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
    L760357227:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L37926966:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1064265473:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1064265473 in labeltable is :L1064265473
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2061;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L37926966;
        case 1 : goto L37926966;
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
    // try catch :L517355658 L1514476350 L1397381784 (
    // try catch :L1397381784 L1333810223 L1397381784 (
    ; 
    //  line no 2064 , L1623009085 , bytecode index = 
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
    L517355658:
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
    L1514476350:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1397381784:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1333810223:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1333810223 in labeltable is :L1333810223
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2064;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1397381784;
        case 1 : goto L1397381784;
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
    // try catch :L319558327 L1583353301 L1466785259 (
    // try catch :L1466785259 L1565740893 L1466785259 (
    ; 
    //  line no 2067 , L775514090 , bytecode index = 
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
    L319558327:
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
    L1583353301:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1466785259:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1565740893:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1565740893 in labeltable is :L1565740893
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2067;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1466785259;
        case 1 : goto L1466785259;
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
    // try catch :L1297502382 L171493374 L1876682596 (
    // try catch :L1876682596 L1371957475 L1876682596 (
    ; 
    //  line no 2070 , L778731861 , bytecode index = 
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
    L1297502382:
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
    L171493374:
    __frame->bytecodeIndex = 
    goto L1646371921;
    L1876682596:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1371957475:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1371957475 in labeltable is :L1371957475
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2070;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1646371921:
    //  line no 2071 , L1646371921 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1876682596;
        case 1 : goto L1876682596;
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
    // try catch :L806511723 L1250442005 L627318073 (
    // try catch :L627318073 L2067180044 L627318073 (
    ; 
    //  line no 2073 , L1478797373 , bytecode index = 
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
    L806511723:
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
    L1250442005:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L627318073:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2067180044:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L2067180044 in labeltable is :L2067180044
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2073;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L627318073;
        case 1 : goto L627318073;
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
    // try catch :L1450652220 L417301556 L1707582034 (
    // try catch :L1707582034 L1293241549 L1707582034 (
    ; 
    //  line no 2078 , L580673921 , bytecode index = 
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
    L1450652220:
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
    L417301556:
    __frame->bytecodeIndex = 
    goto L1183231938;
    L1707582034:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1293241549:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1293241549 in labeltable is :L1293241549
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2078;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1183231938:
    //  line no 2079 , L1183231938 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1707582034;
        case 1 : goto L1707582034;
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
    //  line no 2086 , L2032079962 , bytecode index = 
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
    // try catch :L1262854901 L252277567 L238357312 (
    // try catch :L238357312 L1101048445 L238357312 (
    ; 
    //  line no 2097 , L664070838 , bytecode index = 
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
    L1262854901:
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
    L252277567:
    __frame->bytecodeIndex = 
    goto L1665197552;
    L238357312:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1101048445:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1101048445 in labeltable is :L1101048445
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2097;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1665197552:
    //  line no 2098 , L1665197552 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L238357312;
        case 1 : goto L238357312;
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
    //  line no 2102 , L20853837 , bytecode index = 
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
    //     L20853837 in labeltable is :L20853837
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


