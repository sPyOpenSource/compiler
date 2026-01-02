// CLASS: java/util/AbstractSet extends java/util/AbstractCollection
#include "metadata.h"


// generation
// globals
//struct java_util_AbstractSet_static {};



__refer arr_vmtable_java_util_AbstractSet_from_java_util_AbstractSet[] = {
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //0
    func_java_util_AbstractSet_hashCode___I,  //1
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z  //2
};
__refer arr_vmtable_java_util_AbstractSet_from_java_util_AbstractCollection[] = {
    func_java_util_AbstractCollection_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_AbstractCollection_size___I,  //1
    func_java_util_AbstractCollection_isEmpty___Z,  //2
    func_java_util_AbstractCollection_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_AbstractCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_AbstractCollection_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_AbstractCollection_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_AbstractCollection_clear___V,  //12
    func_java_util_AbstractCollection_toString___Ljava_lang_String_2  //13
};
__refer arr_vmtable_java_util_AbstractSet_from_java_lang_Object[] = {
    func_java_util_AbstractCollection_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_AbstractSet_hashCode___I  //9
};
__refer arr_vmtable_java_util_AbstractSet_from_java_util_Collection[] = {
    func_java_util_AbstractCollection_size___I,  //0
    func_java_util_AbstractCollection_isEmpty___Z,  //1
    func_java_util_AbstractCollection_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_AbstractCollection_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_AbstractCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_AbstractCollection_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_AbstractCollection_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_AbstractCollection_clear___V,  //12
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_AbstractSet_hashCode___I  //14
};
__refer arr_vmtable_java_util_AbstractSet_from_java_lang_Iterable[] = {
    func_java_util_AbstractCollection_iterator___Ljava_util_Iterator_2  //0
};
__refer arr_vmtable_java_util_AbstractSet_from_java_util_Set[] = {
    func_java_util_AbstractCollection_size___I,  //0
    func_java_util_AbstractCollection_isEmpty___Z,  //1
    func_java_util_AbstractCollection_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_AbstractCollection_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_AbstractCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_AbstractCollection_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_AbstractCollection_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_AbstractCollection_clear___V,  //12
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_AbstractSet_hashCode___I  //14
};
VMTable vmtable_java_util_AbstractSet[] = {
    {89, 3, arr_vmtable_java_util_AbstractSet_from_java_util_AbstractSet}, //0
    {90, 14, arr_vmtable_java_util_AbstractSet_from_java_util_AbstractCollection}, //1
    {5, 10, arr_vmtable_java_util_AbstractSet_from_java_lang_Object}, //2
    {45, 15, arr_vmtable_java_util_AbstractSet_from_java_util_Collection}, //3
    {91, 1, arr_vmtable_java_util_AbstractSet_from_java_lang_Iterable}, //4
    {86, 15, arr_vmtable_java_util_AbstractSet_from_java_util_Set}, //5
};



// locals: 1
// stack: 1
// args: 0
void func_java_util_AbstractSet__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1593, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 6 , L2146303527 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 6;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractCollection.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractCollection__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 7 , L797416363 , bytecode index = 
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

void bridge_java_util_AbstractSet__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractSet__init____V(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z[] = {
    { , , 1558}, 
    { , , 136}
};
ExceptionTable extable_func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z = {2, arr_extable_func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z};

// locals: 4
// stack: 2
// args: 1
s8 func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1594, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1186989416 L1456265041 L1166361824 (
    // try catch :L1186989416 L1456265041 L1808527451 (
    ; 
    //  line no 12 , L761680655 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 12;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L488669101;
    ; 
    //  line no 13 , L1928174253 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L488669101:
    //  line no 15 , L488669101 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Set
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 822);
    if(stack[--sp].i  != 0) goto L1183905155;
    ; 
    //  line no 16 , L1500588149 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1183905155:
    //  line no 17 , L1183905155 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Collection
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 303);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 18 , L1202907617 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Collection.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 45, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractSet.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 86, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1186989416;
    ; 
    //  line no 19 , L1502882632 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1186989416:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 21 , L1186989416 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/AbstractSet.containsAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 86, 8);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1456265041:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1166361824:
    //  line no 22 , L1166361824 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 23 , L409596180 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1808527451:
    //  line no 24 , L1808527451 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 25 , L1217089772 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1166361824;
        case 1 : goto L1808527451;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 4
// stack: 2
// args: 0
s32 func_java_util_AbstractSet_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1595, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 30 , L1620112330 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 30;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 31 , L933646237 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractSet.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 86, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    L632841653:
    //  line no 32 , L632841653 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L261838162;
    ; 
    //  line no 33 , L1752365512 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 34 , L1831705084 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L199150625;
    ; 
    //  line no 35 , L1580874189 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    L199150625:
    //  line no 36 , L199150625 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L632841653;
    L261838162:
    //  line no 37 , L261838162 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_java_util_AbstractSet_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractSet_hashCode___I(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
s8 func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1596, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 41 , L538618049 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 41;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 43 , L1566099239 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractSet.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 86, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 45, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1386440976;
    ; 
    //  line no 44 , L973692608 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 45, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    L1327539680:
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1423586012;
    ; 
    //  line no 45 , L494414526 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/AbstractSet.remove(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 86, 7);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1327539680;
    L1423586012:
    goto L1844942991;
    L1386440976:
    //  line no 47 , L1386440976 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractSet.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 86, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    L665988980:
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1844942991;
    ; 
    //  line no 48 , L586917260 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Collection.contains(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 45, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L665988980;
    ; 
    //  line no 49 , L2122991287 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Iterator.remove()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 50 , L803768841 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L665988980;
    L1844942991:
    //  line no 54 , L1844942991 , bytecode index = 
    stack[sp++].i = local[2].i;
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

void bridge_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z(runtime, ins);
}


