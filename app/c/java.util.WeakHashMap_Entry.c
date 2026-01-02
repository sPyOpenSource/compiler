// CLASS: java/util/WeakHashMap$Entry extends java/lang/ref/WeakReference
#include "metadata.h"


// generation
// globals
//struct java_util_WeakHashMap_00024Entry_static {};



__refer arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_util_WeakHashMap_00024Entry[] = {
    func_java_util_WeakHashMap_00024Entry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_WeakHashMap_00024Entry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_WeakHashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_WeakHashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_WeakHashMap_00024Entry_hashCode___I,  //4
    func_java_util_WeakHashMap_00024Entry_toString___Ljava_lang_String_2  //5
};
__refer arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_lang_ref_WeakReference[] = {
    NULL
};
__refer arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_lang_ref_Reference[] = {
    func_java_lang_ref_Reference_get___Ljava_lang_Object_2,  //0
    func_java_lang_ref_Reference_clear___V,  //1
    func_java_lang_ref_Reference_isEnqueued___Z,  //2
    func_java_lang_ref_Reference_enqueue___Z,  //3
    func_java_lang_ref_Reference_markItAsWeak__Z_V  //4
};
__refer arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_lang_Object[] = {
    func_java_util_WeakHashMap_00024Entry_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_WeakHashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_WeakHashMap_00024Entry_hashCode___I  //9
};
__refer arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_util_Map_00024Entry[] = {
    func_java_util_WeakHashMap_00024Entry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_WeakHashMap_00024Entry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_WeakHashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_WeakHashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_WeakHashMap_00024Entry_hashCode___I  //4
};
VMTable vmtable_java_util_WeakHashMap_00024Entry[] = {
    {191, 6, arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_util_WeakHashMap_00024Entry}, //0
    {211, 0, arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_lang_ref_WeakReference}, //1
    {38, 5, arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_lang_ref_Reference}, //2
    {5, 10, arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_lang_Object}, //3
    {12, 5, arr_vmtable_java_util_WeakHashMap_00024Entry_from_java_util_Map_00024Entry}, //4
};



// locals: 6
// stack: 3
// args: 5
void func_java_util_WeakHashMap_00024Entry__init___Ljava_lang_Object_2Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2ILjava_util_WeakHashMap_00024Entry_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1, struct java_lang_ref_ReferenceQueue* p2, s32 p3, struct java_util_WeakHashMap_00024Entry* p4){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2197, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 394 , L1875304119 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 394;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial java/lang/ref/WeakReference.<init>(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ref_WeakReference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 395 , L914293025 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->value_3 = rstack[sp + 1].obj;
    ; 
    //  line no 396 , L2107873140 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // putfield java/util/WeakHashMap$Entry hash I
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->hash_4 = stack[sp + 1].i;
    ; 
    //  line no 397 , L1142653826 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // putfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->next_5 = rstack[sp + 1].obj;
    ; 
    //  line no 398 , L502386384 , bytecode index = 
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

void bridge_java_util_WeakHashMap_00024Entry__init___Ljava_lang_Object_2Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2ILjava_util_WeakHashMap_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_00024Entry__init___Ljava_lang_Object_2Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2ILjava_util_WeakHashMap_00024Entry_2_V(runtime, ins, para[0].obj, para[1].obj, para[2].i, para[3].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_WeakHashMap_00024Entry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2198, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 402 , L850429804 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 402;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap$Entry.get()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/WeakHashMap.unmaskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_WeakHashMap_unmaskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_util_WeakHashMap_00024Entry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_00024Entry_getKey___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_WeakHashMap_00024Entry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 406 , L968612320 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_WeakHashMap_00024Entry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_00024Entry_getValue___Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_WeakHashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2200, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 410 , L298057575 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 410;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 411 , L1134011961 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->value_3 = rstack[sp + 1].obj;
    ; 
    //  line no 412 , L612635506 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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

void bridge_java_util_WeakHashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 7
// stack: 2
// args: 1
s8 func_java_util_WeakHashMap_00024Entry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2201, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 416 , L2041036732 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 416;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map$Entry
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 797);
    if(stack[--sp].i  != 0) goto L125790431;
    ; 
    //  line no 417 , L65332417 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L125790431:
    //  line no 418 , L125790431 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 419 , L2122267901 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 191, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 420 , L987834065 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 421 , L1185188034 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L1648537147;
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1709043290;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
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
    if(stack[--sp].i  == 0) goto L1709043290;
    L1648537147:
    //  line no 422 , L1648537147 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 191, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 423 , L1446615966 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 424 , L884599555 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[6].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L1140697305;
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  == NULL) goto L1709043290;
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[6].obj;
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
    if(stack[--sp].i  == 0) goto L1709043290;
    L1140697305:
    //  line no 425 , L1140697305 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1709043290:
    //  line no 427 , L1709043290 , bytecode index = 
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

void bridge_java_util_WeakHashMap_00024Entry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_00024Entry_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
s32 func_java_util_WeakHashMap_00024Entry_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2202, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 431 , L1403495948 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 431;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 191, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 432 , L683523720 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 191, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 433 , L111702054 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    rstack[sp++].obj = rlocal[2].obj;
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
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
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

void bridge_java_util_WeakHashMap_00024Entry_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_00024Entry_hashCode___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_java_util_WeakHashMap_00024Entry_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2203, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 437 , L1611618052 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 437;
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
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 191, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1509);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 191, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_WeakHashMap_00024Entry_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_00024Entry_toString___Ljava_lang_String_2(runtime, ins);
}


