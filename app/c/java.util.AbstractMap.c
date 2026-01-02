// CLASS: java/util/AbstractMap extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_AbstractMap_static {};



__refer arr_vmtable_java_util_AbstractMap_from_java_util_AbstractMap[] = {
    func_java_util_AbstractMap_size___I,  //0
    func_java_util_AbstractMap_isEmpty___Z,  //1
    func_java_util_AbstractMap_containsValue__Ljava_lang_Object_2_Z,  //2
    func_java_util_AbstractMap_containsKey__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_AbstractMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //5
    func_java_util_AbstractMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //6
    func_java_util_AbstractMap_putAll__Ljava_util_Map_2_V,  //7
    func_java_util_AbstractMap_clear___V,  //8
    func_java_util_AbstractMap_keySet___Ljava_util_Set_2,  //9
    func_java_util_AbstractMap_values___Ljava_util_Collection_2,  //10
    func_java_util_AbstractMap_entrySet___Ljava_util_Set_2,  //11
    func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z,  //12
    func_java_util_AbstractMap_hashCode___I,  //13
    func_java_util_AbstractMap_toString___Ljava_lang_String_2,  //14
    func_java_util_AbstractMap_clone___Ljava_lang_Object_2  //15
};
__refer arr_vmtable_java_util_AbstractMap_from_java_lang_Object[] = {
    func_java_util_AbstractMap_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractMap_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_AbstractMap_hashCode___I  //9
};
__refer arr_vmtable_java_util_AbstractMap_from_java_util_Map[] = {
    func_java_util_AbstractMap_size___I,  //0
    func_java_util_AbstractMap_isEmpty___Z,  //1
    func_java_util_AbstractMap_containsKey__Ljava_lang_Object_2_Z,  //2
    func_java_util_AbstractMap_containsValue__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_AbstractMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //5
    func_java_util_AbstractMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //6
    func_java_util_AbstractMap_putAll__Ljava_util_Map_2_V,  //7
    func_java_util_AbstractMap_clear___V,  //8
    func_java_util_AbstractMap_keySet___Ljava_util_Set_2,  //9
    func_java_util_AbstractMap_values___Ljava_util_Collection_2,  //10
    func_java_util_AbstractMap_entrySet___Ljava_util_Set_2,  //11
    func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z,  //12
    func_java_util_AbstractMap_hashCode___I  //13
};
VMTable vmtable_java_util_AbstractMap[] = {
    {130, 16, arr_vmtable_java_util_AbstractMap_from_java_util_AbstractMap}, //0
    {5, 10, arr_vmtable_java_util_AbstractMap_from_java_lang_Object}, //1
    {171, 14, arr_vmtable_java_util_AbstractMap_from_java_util_Map}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_java_util_AbstractMap__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2205, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 9 , L1617920437 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 10 , L1579140143 , bytecode index = 
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

void bridge_java_util_AbstractMap__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap__init____V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_AbstractMap_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2206, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 14 , L2129138446 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 14;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.size()I
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

void bridge_java_util_AbstractMap_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_size___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_AbstractMap_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2207, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 19 , L1116264846 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 19;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L378693799;
    // iconst_1
    stack[sp++].i = 1;
    goto L677144856;
    L378693799:
    // iconst_0
    stack[sp++].i = 0;
    L677144856:
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

void bridge_java_util_AbstractMap_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_isEmpty___Z(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
s8 func_java_util_AbstractMap_containsValue__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2208, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 24 , L2086673744 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 24;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.iterator()Ljava/util/Iterator;
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
    ; 
    //  line no 25 , L2041742635 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L846014380;
    L1296670053:
    //  line no 26 , L1296670053 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L826245889;
    ; 
    //  line no 27 , L1556730832 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 28 , L130211746 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  != NULL) goto L107075722;
    ; 
    //  line no 29 , L1259037900 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L107075722:
    //  line no 30 , L107075722 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1296670053;
    L846014380:
    //  line no 32 , L846014380 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L826245889;
    ; 
    //  line no 33 , L1506703662 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 34 , L1214284410 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 5, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1078834804;
    ; 
    //  line no 35 , L1357944757 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1078834804:
    //  line no 36 , L1078834804 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L846014380;
    L826245889:
    //  line no 38 , L826245889 , bytecode index = 
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

void bridge_java_util_AbstractMap_containsValue__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_containsValue__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
s8 func_java_util_AbstractMap_containsKey__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2209, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 43 , L912440831 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.iterator()Ljava/util/Iterator;
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
    ; 
    //  line no 44 , L464606033 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1336418989;
    L1501497655:
    //  line no 45 , L1501497655 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L2060569250;
    ; 
    //  line no 46 , L1802188146 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 47 , L1708711928 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  != NULL) goto L1146045637;
    ; 
    //  line no 48 , L809439796 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1146045637:
    //  line no 49 , L1146045637 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1501497655;
    L1336418989:
    //  line no 51 , L1336418989 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L2060569250;
    ; 
    //  line no 52 , L38625764 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 53 , L558455114 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 5, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L522082506;
    ; 
    //  line no 54 , L1475889071 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L522082506:
    //  line no 55 , L522082506 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1336418989;
    L2060569250:
    //  line no 57 , L2060569250 , bytecode index = 
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

void bridge_java_util_AbstractMap_containsKey__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_containsKey__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_AbstractMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2210, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 62 , L1429980012 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 62;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.iterator()Ljava/util/Iterator;
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
    ; 
    //  line no 63 , L940448009 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L761197720;
    L157201184:
    //  line no 64 , L157201184 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L49619396;
    ; 
    //  line no 65 , L1258010306 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 66 , L282812721 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  != NULL) goto L1818236857;
    ; 
    //  line no 67 , L1194385648 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1818236857:
    //  line no 68 , L1818236857 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L157201184;
    L761197720:
    //  line no 70 , L761197720 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L49619396;
    ; 
    //  line no 71 , L1349129074 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 72 , L460534439 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 5, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2009215919;
    ; 
    //  line no 73 , L934636231 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2009215919:
    //  line no 74 , L2009215919 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L761197720;
    L49619396:
    //  line no 76 , L49619396 , bytecode index = 
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

void bridge_java_util_AbstractMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
struct java_lang_Object* func_java_util_AbstractMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2211, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 81 , L899736725 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2720);
    // invokespecial java/lang/RuntimeException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_RuntimeException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L899736725 in labeltable is :L899736725
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 81;
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

void bridge_java_util_AbstractMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_AbstractMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2212, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 86 , L1340493091 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 86;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.iterator()Ljava/util/Iterator;
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
    ; 
    //  line no 87 , L1480816641 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 88 , L1794489296 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1984317333;
    L187990827:
    //  line no 89 , L187990827 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  != NULL) goto L1223979324;
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
    if(stack[--sp].i  == 0) goto L1223979324;
    ; 
    //  line no 90 , L253257929 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 91 , L1269230672 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  != NULL) goto L1680085972;
    ; 
    //  line no 92 , L263382013 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rlocal[3].obj = rstack[--sp].obj;
    L1680085972:
    //  line no 93 , L1680085972 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L187990827;
    L1984317333:
    //  line no 95 , L1984317333 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  != NULL) goto L1223979324;
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
    if(stack[--sp].i  == 0) goto L1223979324;
    ; 
    //  line no 96 , L1134599394 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 97 , L1058553002 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 5, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2070295086;
    ; 
    //  line no 98 , L1666419636 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rlocal[3].obj = rstack[--sp].obj;
    L2070295086:
    //  line no 99 , L2070295086 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1984317333;
    L1223979324:
    //  line no 102 , L1223979324 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 103 , L609438896 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1515248124;
    ; 
    //  line no 104 , L275609562 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 105 , L1872515144 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    L1515248124:
    //  line no 107 , L1515248124 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
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

void bridge_java_util_AbstractMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_java_util_AbstractMap_putAll__Ljava_util_Map_2_V(JThreadRuntime *runtime, struct java_util_Map* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2213, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 112 , L232200992 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Map.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 171, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.iterator()Ljava/util/Iterator;
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
    L1988062951:
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
    if(stack[--sp].i  == 0) goto L2070703728;
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 113 , L254952533 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/AbstractMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 130, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1988062951;
    L2070703728:
    //  line no 114 , L2070703728 , bytecode index = 
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

void bridge_java_util_AbstractMap_putAll__Ljava_util_Map_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap_putAll__Ljava_util_Map_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_util_AbstractMap_clear___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2214, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 118 , L789315095 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 118;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.clear()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 86, 12);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 119 , L839259983 , bytecode index = 
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

void bridge_java_util_AbstractMap_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap_clear___V(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
struct java_util_Set* func_java_util_AbstractMap_keySet___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2215, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 127 , L367725289 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 127;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap keySet Ljava/util/Set;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap*)rstack[sp - 1].obj)->keySet_0;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1709225221;
    ; 
    //  line no 128 , L1742633625 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/AbstractMap$1
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 271);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractMap$1.<init>(Ljava/util/AbstractMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractMap_000241__init___Ljava_util_AbstractMap_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/AbstractMap keySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_AbstractMap*)rstack[sp + 0].obj)->keySet_0 = rstack[sp + 1].obj;
    L1709225221:
    //  line no 164 , L1709225221 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap keySet Ljava/util/Set;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap*)rstack[sp - 1].obj)->keySet_0;
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

void bridge_java_util_AbstractMap_keySet___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_keySet___Ljava_util_Set_2(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
struct java_util_Collection* func_java_util_AbstractMap_values___Ljava_util_Collection_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2216, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 169 , L883862737 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 169;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap values Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1409712092;
    ; 
    //  line no 170 , L1083759991 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/AbstractMap$2
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 245);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractMap$2.<init>(Ljava/util/AbstractMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractMap_000242__init___Ljava_util_AbstractMap_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/AbstractMap values Ljava/util/Collection;
    sp -= 2;
    ((struct java_util_AbstractMap*)rstack[sp + 0].obj)->values_1 = rstack[sp + 1].obj;
    L1409712092:
    //  line no 206 , L1409712092 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap values Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap*)rstack[sp - 1].obj)->values_1;
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

void bridge_java_util_AbstractMap_values___Ljava_util_Collection_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_values___Ljava_util_Collection_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_util_Set* func_java_util_AbstractMap_entrySet___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2217, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_AbstractMap_entrySet___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_entrySet___Ljava_util_Set_2(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z[] = {
    { , , 1558}, 
    { , , 1558}, 
    { , , 1558}, 
    { , , 136}, 
    { , , 136}, 
    { , , 136}
};
ExceptionTable extable_func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z = {6, arr_extable_func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z};

// locals: 7
// stack: 3
// args: 1
s8 func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2218, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L36127072 L1698182759 L1674390738 (
    // try catch :L1434092798 L1844372336 L1674390738 (
    // try catch :L1237416868 L1138779634 L1674390738 (
    // try catch :L36127072 L1698182759 L1111249924 (
    // try catch :L1434092798 L1844372336 L1111249924 (
    // try catch :L1237416868 L1138779634 L1111249924 (
    ; 
    //  line no 213 , L1481886288 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 213;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L437098149;
    ; 
    //  line no 214 , L1510129635 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L437098149:
    //  line no 216 , L437098149 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 1839);
    if(stack[--sp].i  != 0) goto L2050907347;
    ; 
    //  line no 217 , L1014565006 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2050907347:
    //  line no 218 , L2050907347 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Map
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1839);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 219 , L1245124890 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Map.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 171, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L36127072;
    ; 
    //  line no 220 , L92621336 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L36127072:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 223 , L36127072 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.iterator()Ljava/util/Iterator;
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
    L223696575:
    //  line no 224 , L223696575 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L1138779634;
    ; 
    //  line no 225 , L2031882979 , bytecode index = 
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 226 , L185674515 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 227 , L619406819 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 228 , L61620079 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  != NULL) goto L1434092798;
    ; 
    //  line no 229 , L448708339 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokeinterface java/util/Map.get(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 171, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  != NULL) goto L418731780;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokeinterface java/util/Map.containsKey(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 171, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1237416868;
    L418731780:
    //  line no 230 , L418731780 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    L1698182759:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1434092798:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 232 , L1434092798 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokeinterface java/util/Map.get(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 171, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 5, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1237416868;
    ; 
    //  line no 233 , L1741618564 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    L1844372336:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1237416868:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 235 , L1237416868 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L223696575;
    L1138779634:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 240 , L1138779634 , bytecode index = 
    goto L100393301;
    L1674390738:
    //  line no 236 , L1674390738 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 237 , L1792904767 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1111249924:
    //  line no 238 , L1111249924 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 239 , L1487059223 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L100393301:
    //  line no 242 , L100393301 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1674390738;
        case 1 : goto L1674390738;
        case 2 : goto L1674390738;
        case 3 : goto L1111249924;
        case 4 : goto L1111249924;
        case 5 : goto L1111249924;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
s32 func_java_util_AbstractMap_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2219, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 247 , L314309716 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 247;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 248 , L345060426 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.iterator()Ljava/util/Iterator;
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
    L1505123790:
    //  line no 249 , L1505123790 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L327561535;
    ; 
    //  line no 250 , L1586636359 , bytecode index = 
    stack[sp++].i = local[1].i;
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Map$Entry.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 4);
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1505123790;
    L327561535:
    //  line no 251 , L327561535 , bytecode index = 
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

void bridge_java_util_AbstractMap_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_hashCode___I(runtime, ins);
}


// locals: 6
// stack: 3
// args: 0
struct java_lang_String* func_java_util_AbstractMap_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2220, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 256 , L680466239 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 256;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.iterator()Ljava/util/Iterator;
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
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 257 , L170050776 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    if(stack[--sp].i  != 0) goto L1171094469;
    ; 
    //  line no 258 , L1694804085 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3920);
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1171094469:
    //  line no 260 , L1171094469 , bytecode index = 
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 261 , L904031493 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 123
    stack[sp++].i = 123;
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L704277349:
    //  line no 263 , L704277349 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 264 , L130494156 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 265 , L1195403585 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 266 , L1642905321 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[0].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L464994546;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3921);
    goto L624475142;
    L464994546:
    rstack[sp++].obj = rlocal[4].obj;
    L624475142:
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 41, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 267 , L1643565953 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 61
    stack[sp++].i = 61;
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 268 , L1701388960 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[0].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1148735023;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3921);
    goto L608174634;
    L1148735023:
    rstack[sp++].obj = rlocal[5].obj;
    L608174634:
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 41, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 269 , L1937618936 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    if(stack[--sp].i  != 0) goto L1596843797;
    ; 
    //  line no 270 , L1495454697 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 125
    stack[sp++].i = 125;
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1596843797:
    //  line no 271 , L1596843797 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 272 , L2102909877 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L704277349;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_AbstractMap_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
struct java_lang_Object* func_java_util_AbstractMap_clone___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2221, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 277 , L1395533739 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 277;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.clone()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_Object_clone___Ljava_lang_Object_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/util/AbstractMap
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1564);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 278 , L484187068 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/AbstractMap keySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_AbstractMap*)rstack[sp + 0].obj)->keySet_0 = rstack[sp + 1].obj;
    ; 
    //  line no 279 , L1603662305 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/AbstractMap values Ljava/util/Collection;
    sp -= 2;
    ((struct java_util_AbstractMap*)rstack[sp + 0].obj)->values_1 = rstack[sp + 1].obj;
    ; 
    //  line no 280 , L1730813026 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_java_util_AbstractMap_clone___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_clone___Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 3
s8 func_java_util_AbstractMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_util_AbstractMap* p0, struct java_lang_Object* p1, struct java_lang_Object* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2222, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 285 , L971415207 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 285;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L1225554563;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L2121443020;
    // iconst_1
    stack[sp++].i = 1;
    goto L1612031141;
    L2121443020:
    // iconst_0
    stack[sp++].i = 0;
    goto L1612031141;
    L1225554563:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 5, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1612031141:
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

void bridge_java_util_AbstractMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 2
// stack: 2
// args: 3
s8 func_java_util_AbstractMap_access_00024000__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_util_AbstractMap* p0, struct java_lang_Object* p1, struct java_lang_Object* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2223, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 7 , L1199155942 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/AbstractMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_AbstractMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_util_AbstractMap_access_00024000__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_access_00024000__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


