// CLASS: java/util/AbstractMap$SimpleEntry extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_AbstractMap_00024SimpleEntry_static {};



__refer arr_vmtable_java_util_AbstractMap_00024SimpleEntry_from_java_util_AbstractMap_00024SimpleEntry[] = {
    func_java_util_AbstractMap_00024SimpleEntry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_AbstractMap_00024SimpleEntry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_AbstractMap_00024SimpleEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_AbstractMap_00024SimpleEntry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractMap_00024SimpleEntry_hashCode___I,  //4
    func_java_util_AbstractMap_00024SimpleEntry_toString___Ljava_lang_String_2  //5
};
__refer arr_vmtable_java_util_AbstractMap_00024SimpleEntry_from_java_lang_Object[] = {
    func_java_util_AbstractMap_00024SimpleEntry_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_AbstractMap_00024SimpleEntry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_AbstractMap_00024SimpleEntry_hashCode___I  //9
};
__refer arr_vmtable_java_util_AbstractMap_00024SimpleEntry_from_java_util_Map_00024Entry[] = {
    func_java_util_AbstractMap_00024SimpleEntry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_AbstractMap_00024SimpleEntry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_AbstractMap_00024SimpleEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_AbstractMap_00024SimpleEntry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractMap_00024SimpleEntry_hashCode___I  //4
};
__refer arr_vmtable_java_util_AbstractMap_00024SimpleEntry_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_java_util_AbstractMap_00024SimpleEntry[] = {
    {365, 6, arr_vmtable_java_util_AbstractMap_00024SimpleEntry_from_java_util_AbstractMap_00024SimpleEntry}, //0
    {5, 10, arr_vmtable_java_util_AbstractMap_00024SimpleEntry_from_java_lang_Object}, //1
    {12, 5, arr_vmtable_java_util_AbstractMap_00024SimpleEntry_from_java_util_Map_00024Entry}, //2
    {165, 0, arr_vmtable_java_util_AbstractMap_00024SimpleEntry_from_java_io_Serializable}, //3
};



// locals: 3
// stack: 2
// args: 2
void func_java_util_AbstractMap_00024SimpleEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2860, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 296 , L161615037 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 296;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 297 , L452236638 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/AbstractMap$SimpleEntry key Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp + 0].obj)->key_0 = rstack[sp + 1].obj;
    ; 
    //  line no 298 , L1146626470 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 299 , L739003402 , bytecode index = 
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

void bridge_java_util_AbstractMap_00024SimpleEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap_00024SimpleEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
void func_java_util_AbstractMap_00024SimpleEntry__init___Ljava_util_Map_00024Entry_2_V(JThreadRuntime *runtime, struct java_util_Map_00024Entry* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2861, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 302 , L196237139 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 302;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 303 , L249696914 , bytecode index = 
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
    // putfield java/util/AbstractMap$SimpleEntry key Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp + 0].obj)->key_0 = rstack[sp + 1].obj;
    ; 
    //  line no 304 , L1086350168 , bytecode index = 
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
    // putfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 305 , L1726092648 , bytecode index = 
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

void bridge_java_util_AbstractMap_00024SimpleEntry__init___Ljava_util_Map_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap_00024SimpleEntry__init___Ljava_util_Map_00024Entry_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_AbstractMap_00024SimpleEntry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 309 , L1629173206 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_AbstractMap_00024SimpleEntry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_00024SimpleEntry_getKey___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_AbstractMap_00024SimpleEntry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 314 , L1413306467 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_AbstractMap_00024SimpleEntry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_00024SimpleEntry_getValue___Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_AbstractMap_00024SimpleEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2864, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 319 , L231995562 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 319;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 320 , L1029790510 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 321 , L60945057 , bytecode index = 
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

void bridge_java_util_AbstractMap_00024SimpleEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_00024SimpleEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_java_util_AbstractMap_00024SimpleEntry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2865, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 326 , L1388979794 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 326;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map$Entry
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 797);
    if(stack[--sp].i  != 0) goto L1707458318;
    ; 
    //  line no 327 , L1769827821 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1707458318:
    //  line no 328 , L1707458318 , bytecode index = 
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
    //  line no 329 , L1560671315 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->key_0;
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
    if(stack[--sp].i  == 0) goto L1593749783;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->value_1;
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
    if(stack[--sp].i  == 0) goto L1593749783;
    // iconst_1
    stack[sp++].i = 1;
    goto L369838089;
    L1593749783:
    // iconst_0
    stack[sp++].i = 0;
    L369838089:
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

void bridge_java_util_AbstractMap_00024SimpleEntry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_00024SimpleEntry_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_java_util_AbstractMap_00024SimpleEntry_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2866, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 334 , L1716421772 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 334;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1301542747;
    // iconst_0
    stack[sp++].i = 0;
    goto L18130400;
    L1301542747:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->key_0;
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
    L18130400:
    //  line no 335 , L18130400 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1328028335;
    // iconst_0
    stack[sp++].i = 0;
    goto L1565560098;
    L1328028335:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->value_1;
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
    L1565560098:
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 334 , L254513404 , bytecode index = 
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

void bridge_java_util_AbstractMap_00024SimpleEntry_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_00024SimpleEntry_hashCode___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_java_util_AbstractMap_00024SimpleEntry_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2867, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 340 , L616990183 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 340;
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
    // getfield java/util/AbstractMap$SimpleEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->key_0;
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
    // getfield java/util/AbstractMap$SimpleEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_00024SimpleEntry*)rstack[sp - 1].obj)->value_1;
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

void bridge_java_util_AbstractMap_00024SimpleEntry_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_00024SimpleEntry_toString___Ljava_lang_String_2(runtime, ins);
}


