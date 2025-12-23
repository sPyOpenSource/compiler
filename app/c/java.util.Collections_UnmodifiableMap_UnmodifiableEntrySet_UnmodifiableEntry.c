// CLASS: java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_static {};



__refer arr_vmtable_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_from_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry[] = {
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_hashCode___I,  //3
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_equals__Ljava_lang_Object_2_Z,  //4
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_toString___Ljava_lang_String_2  //5
};
__refer arr_vmtable_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_toString___Ljava_lang_String_2,  //8
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_from_java_util_Map_00024Entry[] = {
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_hashCode___I,  //3
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_equals__Ljava_lang_Object_2_Z  //4
};
VMTable vmtable_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry[] = {
    {73, 6, arr_vmtable_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_from_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry}, //0
    {10, 11, arr_vmtable_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_from_java_lang_Object}, //1
    {30, 5, arr_vmtable_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_from_java_util_Map_00024Entry}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry__init___Ljava_util_Map_00024Entry_2_V(JThreadRuntime *runtime, struct java_util_Map_00024Entry* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 221, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1758 , L977552154 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1758;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
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
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 496);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry e Ljava/util/Map$Entry;
    sp -= 2;
    ((struct java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry*)rstack[sp + 0].obj)->e_0 = rstack[sp + 1].obj;
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

void bridge_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry__init___Ljava_util_Map_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry__init___Ljava_util_Map_00024Entry_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 222, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1760 , L424398527 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1760;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry e Ljava/util/Map$Entry;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry*)rstack[sp - 1].obj)->e_0;
    sp += 0;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 0);
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

void bridge_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getKey___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 223, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1761 , L252553541 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1761;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry e Ljava/util/Map$Entry;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry*)rstack[sp - 1].obj)->e_0;
    sp += 0;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 1);
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

void bridge_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_getValue___Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 224, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1763 , L268084911 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1763;
    // new java/util/UnsupportedOperationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 72);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/UnsupportedOperationException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_UnsupportedOperationException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L268084911 in labeltable is :L268084911
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1763;
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

void bridge_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 225, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1765 , L829149076 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1765;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry e Ljava/util/Map$Entry;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry*)rstack[sp - 1].obj)->e_0;
    sp += 0;
    // invokeinterface java/util/Map$Entry.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 3);
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

void bridge_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_hashCode___I(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 226, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1767 , L1041365481 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1767;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L501609049;
    ; 
    //  line no 1768 , L1922930974 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L501609049:
    //  line no 1769 , L501609049 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map$Entry
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 496);
    if(stack[--sp].i  != 0) goto L838473569;
    ; 
    //  line no 1770 , L9797126 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L838473569:
    //  line no 1771 , L838473569 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 496);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1772 , L844112759 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry e Ljava/util/Map$Entry;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry*)rstack[sp - 1].obj)->e_0;
    sp += 0;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Collections.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Collections_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L739973450;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry e Ljava/util/Map$Entry;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry*)rstack[sp - 1].obj)->e_0;
    sp += 0;
    ; 
    //  line no 1773 , L1304117943 , bytecode index = 
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Collections.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Collections_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L739973450;
    // iconst_1
    stack[sp++].i = 1;
    goto L1727361096;
    L739973450:
    // iconst_0
    stack[sp++].i = 0;
    L1727361096:
    //  line no 1772 , L1727361096 , bytecode index = 
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

void bridge_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 227, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1775 , L556281560 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1775;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry e Ljava/util/Map$Entry;
    rstack[sp - 1].obj = ((struct java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry*)rstack[sp - 1].obj)->e_0;
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

void bridge_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Collections_00024UnmodifiableMap_00024UnmodifiableEntrySet_00024UnmodifiableEntry_toString___Ljava_lang_String_2(runtime, ins);
}


