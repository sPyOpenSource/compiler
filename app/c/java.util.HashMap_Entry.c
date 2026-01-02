// CLASS: java/util/HashMap$Entry extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_HashMap_00024Entry_static {};



__refer arr_vmtable_java_util_HashMap_00024Entry_from_java_util_HashMap_00024Entry[] = {
    func_java_util_HashMap_00024Entry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_HashMap_00024Entry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_HashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_HashMap_00024Entry_hashCode___I,  //4
    func_java_util_HashMap_00024Entry_toString___Ljava_lang_String_2,  //5
    func_java_util_HashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V,  //6
    func_java_util_HashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V  //7
};
__refer arr_vmtable_java_util_HashMap_00024Entry_from_java_lang_Object[] = {
    func_java_util_HashMap_00024Entry_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_HashMap_00024Entry_hashCode___I  //9
};
__refer arr_vmtable_java_util_HashMap_00024Entry_from_java_util_Map_00024Entry[] = {
    func_java_util_HashMap_00024Entry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_HashMap_00024Entry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_HashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_HashMap_00024Entry_hashCode___I  //4
};
VMTable vmtable_java_util_HashMap_00024Entry[] = {
    {11, 8, arr_vmtable_java_util_HashMap_00024Entry_from_java_util_HashMap_00024Entry}, //0
    {5, 10, arr_vmtable_java_util_HashMap_00024Entry_from_java_lang_Object}, //1
    {12, 5, arr_vmtable_java_util_HashMap_00024Entry_from_java_util_Map_00024Entry}, //2
};



// locals: 5
// stack: 2
// args: 4
void func_java_util_HashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1, struct java_lang_Object* p2, struct java_util_HashMap_00024Entry* p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1763, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 368 , L1077316166 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 368;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 369 , L2124261761 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield java/util/HashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 370 , L1322484262 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->next_3 = rstack[sp + 1].obj;
    ; 
    //  line no 371 , L4015102 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/HashMap$Entry key Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->key_0 = rstack[sp + 1].obj;
    ; 
    //  line no 372 , L1957530885 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/util/HashMap$Entry hash I
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->hash_2 = stack[sp + 1].i;
    ; 
    //  line no 373 , L1735390128 , bytecode index = 
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

void bridge_java_util_HashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(runtime, ins, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_HashMap_00024Entry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1764, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 376 , L1605834811 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 376;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // invokestatic java/util/HashMap.unmaskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_HashMap_unmaskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_util_HashMap_00024Entry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_00024Entry_getKey___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_HashMap_00024Entry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 380 , L1602288195 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_HashMap_00024Entry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_00024Entry_getValue___Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_HashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1766, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 384 , L1901663135 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 384;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 385 , L1706883010 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/HashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 386 , L1035357140 , bytecode index = 
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

void bridge_java_util_HashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 7
// stack: 2
// args: 1
s8 func_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1767, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 390 , L1466717494 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 390;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map$Entry
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 797);
    if(stack[--sp].i  != 0) goto L1441577726;
    ; 
    //  line no 391 , L1519100796 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1441577726:
    //  line no 392 , L1441577726 , bytecode index = 
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
    //  line no 393 , L935520971 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashMap$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 11, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 394 , L36883680 , bytecode index = 
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
    //  line no 395 , L851033362 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L892237946;
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L362432678;
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
    if(stack[--sp].i  == 0) goto L362432678;
    L892237946:
    //  line no 396 , L892237946 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashMap$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 11, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 397 , L22790969 , bytecode index = 
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
    //  line no 398 , L2121645869 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[6].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L945747249;
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  == NULL) goto L362432678;
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
    if(stack[--sp].i  == 0) goto L362432678;
    L945747249:
    //  line no 399 , L945747249 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L362432678:
    //  line no 401 , L362432678 , bytecode index = 
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

void bridge_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_java_util_HashMap_00024Entry_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1768, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 405 , L542839598 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 405;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // getstatic java/util/HashMap NULL_KEY Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_HashMap.NULL_1KEY_10;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1929661663;
    // iconst_0
    stack[sp++].i = 0;
    goto L1019009267;
    L1929661663:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
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
    L1019009267:
    //  line no 406 , L1019009267 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1905804261;
    // iconst_0
    stack[sp++].i = 0;
    goto L161672347;
    L1905804261:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
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
    L161672347:
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 405 , L1477520324 , bytecode index = 
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

void bridge_java_util_HashMap_00024Entry_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_00024Entry_hashCode___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_java_util_HashMap_00024Entry_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1769, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 410 , L822409149 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 410;
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
    // invokevirtual java/util/HashMap$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 11, 0);
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
    // invokevirtual java/util/HashMap$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 11, 1);
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

void bridge_java_util_HashMap_00024Entry_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_00024Entry_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 0
// args: 1
void func_java_util_HashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V(JThreadRuntime *runtime, struct java_util_HashMap* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1770, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 415 , L2126664214 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 415;
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

void bridge_java_util_HashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V(runtime, ins);
}


// locals: 2
// stack: 0
// args: 1
void func_java_util_HashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V(JThreadRuntime *runtime, struct java_util_HashMap* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1771, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 419 , L1787083839 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 419;
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

void bridge_java_util_HashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V(runtime, ins);
}


