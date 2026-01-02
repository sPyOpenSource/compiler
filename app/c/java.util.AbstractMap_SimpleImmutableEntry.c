// CLASS: java/util/AbstractMap$SimpleImmutableEntry extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_AbstractMap_00024SimpleImmutableEntry_static {s64 serialVersionUID_0;  };
struct java_util_AbstractMap_00024SimpleImmutableEntry_static static_var_java_util_AbstractMap_00024SimpleImmutableEntry = {0};


__refer arr_vmtable_java_util_AbstractMap_00024SimpleImmutableEntry_from_java_util_AbstractMap_00024SimpleImmutableEntry[] = {
    func_java_util_AbstractMap_00024SimpleImmutableEntry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_AbstractMap_00024SimpleImmutableEntry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_AbstractMap_00024SimpleImmutableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_AbstractMap_00024SimpleImmutableEntry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractMap_00024SimpleImmutableEntry_hashCode___I,  //4
    func_java_util_AbstractMap_00024SimpleImmutableEntry_toString___Ljava_lang_String_2  //5
};
__refer arr_vmtable_java_util_AbstractMap_00024SimpleImmutableEntry_from_java_lang_Object[] = {
    func_java_util_AbstractMap_00024SimpleImmutableEntry_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_AbstractMap_00024SimpleImmutableEntry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_AbstractMap_00024SimpleImmutableEntry_hashCode___I  //9
};
__refer arr_vmtable_java_util_AbstractMap_00024SimpleImmutableEntry_from_java_util_Map_00024Entry[] = {
    func_java_util_AbstractMap_00024SimpleImmutableEntry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_AbstractMap_00024SimpleImmutableEntry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_AbstractMap_00024SimpleImmutableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_AbstractMap_00024SimpleImmutableEntry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractMap_00024SimpleImmutableEntry_hashCode___I  //4
};
__refer arr_vmtable_java_util_AbstractMap_00024SimpleImmutableEntry_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_java_util_AbstractMap_00024SimpleImmutableEntry[] = {
    {362, 6, arr_vmtable_java_util_AbstractMap_00024SimpleImmutableEntry_from_java_util_AbstractMap_00024SimpleImmutableEntry}, //0
    {5, 10, arr_vmtable_java_util_AbstractMap_00024SimpleImmutableEntry_from_java_lang_Object}, //1
    {12, 5, arr_vmtable_java_util_AbstractMap_00024SimpleImmutableEntry_from_java_util_Map_00024Entry}, //2
    {165, 0, arr_vmtable_java_util_AbstractMap_00024SimpleImmutableEntry_from_java_io_Serializable}, //3
};



// locals: 3
// stack: 2
// args: 2
void func_java_util_AbstractMap_00024SimpleImmutableEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2601, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 354 , L848343462 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 354;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 355 , L1875718595 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/AbstractMap$SimpleImmutableEntry key Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp + 0].obj)->key_1 = rstack[sp + 1].obj;
    ; 
    //  line no 356 , L1740571776 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/AbstractMap$SimpleImmutableEntry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp + 0].obj)->value_2 = rstack[sp + 1].obj;
    ; 
    //  line no 357 , L89144801 , bytecode index = 
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

void bridge_java_util_AbstractMap_00024SimpleImmutableEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap_00024SimpleImmutableEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
void func_java_util_AbstractMap_00024SimpleImmutableEntry__init___Ljava_util_Map_00024Entry_2_V(JThreadRuntime *runtime, struct java_util_Map_00024Entry* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2602, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 360 , L876600793 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 360;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 361 , L733693146 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    // putfield java/util/AbstractMap$SimpleImmutableEntry key Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp + 0].obj)->key_1 = rstack[sp + 1].obj;
    ; 
    //  line no 362 , L796969849 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    // putfield java/util/AbstractMap$SimpleImmutableEntry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp + 0].obj)->value_2 = rstack[sp + 1].obj;
    ; 
    //  line no 363 , L1209462308 , bytecode index = 
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

void bridge_java_util_AbstractMap_00024SimpleImmutableEntry__init___Ljava_util_Map_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap_00024SimpleImmutableEntry__init___Ljava_util_Map_00024Entry_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_AbstractMap_00024SimpleImmutableEntry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 367 , L1935751909 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleImmutableEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->key_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_AbstractMap_00024SimpleImmutableEntry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_00024SimpleImmutableEntry_getKey___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_AbstractMap_00024SimpleImmutableEntry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 372 , L621502043 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleImmutableEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->value_2;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_AbstractMap_00024SimpleImmutableEntry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_00024SimpleImmutableEntry_getValue___Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct java_lang_Object* func_java_util_AbstractMap_00024SimpleImmutableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2605, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 377 , L884868698 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 377;
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
    //     L884868698 in labeltable is :L884868698
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 377;
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

void bridge_java_util_AbstractMap_00024SimpleImmutableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_00024SimpleImmutableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_java_util_AbstractMap_00024SimpleImmutableEntry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2606, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 382 , L235532726 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 382;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map$Entry
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 797);
    if(stack[--sp].i  != 0) goto L1434151479;
    ; 
    //  line no 383 , L296954388 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1434151479:
    //  line no 384 , L1434151479 , bytecode index = 
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
    //  line no 385 , L473163048 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleImmutableEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->key_1;
    sp += 0;
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
    // invokestatic java/util/AbstractMap.access$000(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_AbstractMap_access_00024000__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1576416089;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleImmutableEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->value_2;
    sp += 0;
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
    // invokestatic java/util/AbstractMap.access$000(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_AbstractMap_access_00024000__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1576416089;
    // iconst_1
    stack[sp++].i = 1;
    goto L1406324738;
    L1576416089:
    // iconst_0
    stack[sp++].i = 0;
    L1406324738:
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

void bridge_java_util_AbstractMap_00024SimpleImmutableEntry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_00024SimpleImmutableEntry_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_java_util_AbstractMap_00024SimpleImmutableEntry_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2607, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 390 , L1478493964 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 390;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleImmutableEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->key_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L874548138;
    // iconst_0
    stack[sp++].i = 0;
    goto L1899433964;
    L874548138:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleImmutableEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->key_1;
    sp += 0;
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
    L1899433964:
    //  line no 391 , L1899433964 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleImmutableEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->value_2;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1728554175;
    // iconst_0
    stack[sp++].i = 0;
    goto L1070057268;
    L1728554175:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleImmutableEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->value_2;
    sp += 0;
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
    L1070057268:
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 390 , L252339901 , bytecode index = 
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

void bridge_java_util_AbstractMap_00024SimpleImmutableEntry_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_00024SimpleImmutableEntry_hashCode___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_java_util_AbstractMap_00024SimpleImmutableEntry_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2608, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 396 , L485701373 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 396;
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
    // getfield java/util/AbstractMap$SimpleImmutableEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->key_1;
    sp += 0;
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
    // getfield java/util/AbstractMap$SimpleImmutableEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleImmutableEntry*)rstack[sp - 1].obj)->value_2;
    sp += 0;
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

void bridge_java_util_AbstractMap_00024SimpleImmutableEntry_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_00024SimpleImmutableEntry_toString___Ljava_lang_String_2(runtime, ins);
}


