// CLASS: java/util/WeakHashMap extends java/util/AbstractMap
#include "metadata.h"


// generation
// globals
//struct java_util_WeakHashMap_static {s32 DEFAULT_1INITIAL_1CAPACITY_2; s32 MAXIMUM_1CAPACITY_3; f32 DEFAULT_1LOAD_1FACTOR_4; struct java_lang_Object* NULL_1KEY_11;  };
struct java_util_WeakHashMap_static static_var_java_util_WeakHashMap = {0, 0, 0, NULL};


__refer arr_vmtable_java_util_WeakHashMap_from_java_util_WeakHashMap[] = {
    func_java_util_WeakHashMap_hash__Ljava_lang_Object_2_I,  //0
    func_java_util_WeakHashMap_size___I,  //1
    func_java_util_WeakHashMap_isEmpty___Z,  //2
    func_java_util_WeakHashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //3
    func_java_util_WeakHashMap_containsKey__Ljava_lang_Object_2_Z,  //4
    func_java_util_WeakHashMap_getEntry__Ljava_lang_Object_2_Ljava_util_WeakHashMap_00024Entry_2,  //5
    func_java_util_WeakHashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //6
    func_java_util_WeakHashMap_resize__I_V,  //7
    func_java_util_WeakHashMap_putAll__Ljava_util_Map_2_V,  //8
    func_java_util_WeakHashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //9
    func_java_util_WeakHashMap_removeMapping__Ljava_lang_Object_2_Z,  //10
    func_java_util_WeakHashMap_clear___V,  //11
    func_java_util_WeakHashMap_containsValue__Ljava_lang_Object_2_Z,  //12
    func_java_util_WeakHashMap_keySet___Ljava_util_Set_2,  //13
    func_java_util_WeakHashMap_values___Ljava_util_Collection_2,  //14
    func_java_util_WeakHashMap_entrySet___Ljava_util_Set_2  //15
};
__refer arr_vmtable_java_util_WeakHashMap_from_java_util_AbstractMap[] = {
    func_java_util_WeakHashMap_size___I,  //0
    func_java_util_WeakHashMap_isEmpty___Z,  //1
    func_java_util_WeakHashMap_containsValue__Ljava_lang_Object_2_Z,  //2
    func_java_util_WeakHashMap_containsKey__Ljava_lang_Object_2_Z,  //3
    func_java_util_WeakHashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_WeakHashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //5
    func_java_util_WeakHashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //6
    func_java_util_WeakHashMap_putAll__Ljava_util_Map_2_V,  //7
    func_java_util_WeakHashMap_clear___V,  //8
    func_java_util_WeakHashMap_keySet___Ljava_util_Set_2,  //9
    func_java_util_WeakHashMap_values___Ljava_util_Collection_2,  //10
    func_java_util_WeakHashMap_entrySet___Ljava_util_Set_2,  //11
    func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z,  //12
    func_java_util_AbstractMap_hashCode___I,  //13
    func_java_util_AbstractMap_toString___Ljava_lang_String_2,  //14
    func_java_util_AbstractMap_clone___Ljava_lang_Object_2  //15
};
__refer arr_vmtable_java_util_WeakHashMap_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_WeakHashMap_from_java_util_Map[] = {
    func_java_util_WeakHashMap_size___I,  //0
    func_java_util_WeakHashMap_isEmpty___Z,  //1
    func_java_util_WeakHashMap_containsKey__Ljava_lang_Object_2_Z,  //2
    func_java_util_WeakHashMap_containsValue__Ljava_lang_Object_2_Z,  //3
    func_java_util_WeakHashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_WeakHashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //5
    func_java_util_WeakHashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //6
    func_java_util_WeakHashMap_putAll__Ljava_util_Map_2_V,  //7
    func_java_util_WeakHashMap_clear___V,  //8
    func_java_util_WeakHashMap_keySet___Ljava_util_Set_2,  //9
    func_java_util_WeakHashMap_values___Ljava_util_Collection_2,  //10
    func_java_util_WeakHashMap_entrySet___Ljava_util_Set_2,  //11
    func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z,  //12
    func_java_util_AbstractMap_hashCode___I  //13
};
VMTable vmtable_java_util_WeakHashMap[] = {
    {190, 16, arr_vmtable_java_util_WeakHashMap_from_java_util_WeakHashMap}, //0
    {130, 16, arr_vmtable_java_util_WeakHashMap_from_java_util_AbstractMap}, //1
    {5, 10, arr_vmtable_java_util_WeakHashMap_from_java_lang_Object}, //2
    {171, 14, arr_vmtable_java_util_WeakHashMap_from_java_util_Map}, //3
};



// locals: 2
// stack: 1
// args: 1
JArray * func_java_util_WeakHashMap_newTable__I__3Ljava_util_WeakHashMap_00024Entry_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 949, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 43 , L1878413714 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Ljava/util/WeakHashMap$Entry; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1958));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
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

void bridge_java_util_WeakHashMap_newTable__I__3Ljava_util_WeakHashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_newTable__I__3Ljava_util_WeakHashMap_00024Entry_2(runtime, ins);
}


// locals: 4
// stack: 4
// args: 2
void func_java_util_WeakHashMap__init___IF_V(JThreadRuntime *runtime, s32 p0, f32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 950, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].f = p1;
    ; 
    //  line no 47 , L1257299717 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 47;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractMap.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractMap__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 36 , L1474957626 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/lang/ref/ReferenceQueue
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 189);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/ref/ReferenceQueue.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ref_ReferenceQueue__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/WeakHashMap queue Ljava/lang/ref/ReferenceQueue;
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->queue_9 = rstack[sp + 1].obj;
    ; 
    //  line no 525 , L181252244 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap entrySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->entrySet_12 = rstack[sp + 1].obj;
    ; 
    //  line no 48 , L1733022752 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L722417467;
    ; 
    //  line no 49 , L753631393 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1960);
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
    stack[sp++].i = local[1].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L753631393 in labeltable is :L753631393
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 49;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L722417467:
    //  line no 51 , L722417467 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  ldc 
    stack[sp++].i = 0x40000000;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1262869688;
    ; 
    //  line no 52 , L1914108708 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0x40000000;
    local[1].i = stack[--sp].i;
    L1262869688:
    //  line no 54 , L1262869688 , bytecode index = 
    stack[sp++].f = local[2].f;
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  <= 0) goto L544386226;
    stack[sp++].f = local[2].f;
    // invokestatic java/lang/Float.isNaN(F)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Float_isNaN__F_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1357700757;
    L544386226:
    //  line no 55 , L544386226 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1961);
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
    stack[sp++].f = local[2].f;
    // invokevirtual java/lang/StringBuilder.append(F)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,f32) = find_method(__ins->vm_table, 41, 3);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].f);
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L544386226 in labeltable is :L544386226
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 55;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1357700757:
    //  line no 57 , L1357700757 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[3].i = stack[--sp].i;
    L900298796:
    //  line no 58 , L900298796 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1889757798;
    ; 
    //  line no 59 , L1166106620 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L900298796;
    L1889757798:
    //  line no 60 , L1889757798 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokespecial java/util/WeakHashMap.newTable(I)[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_newTable__I__3Ljava_util_WeakHashMap_00024Entry_2(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->table_5 = rstack[sp + 1].obj;
    ; 
    //  line no 61 , L1932470703 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].f = local[2].f;
    // putfield java/util/WeakHashMap loadFactor F
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->loadFactor_8 = stack[sp + 1].f;
    ; 
    //  line no 62 , L221861886 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    stack[sp++].f = local[2].f;
    stack[sp - 2].f = stack[sp - 2].f * stack[sp - 1].f; 
    --sp;
    stack[sp - 1].i = (s32)stack[sp - 1].f; 
    // putfield java/util/WeakHashMap threshold I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->threshold_7 = stack[sp + 1].i;
    ; 
    //  line no 63 , L1713568869 , bytecode index = 
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

void bridge_java_util_WeakHashMap__init___IF_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap__init___IF_V(runtime, ins, para[0].f);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_WeakHashMap__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 951, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 67 , L603658030 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 67;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    //  ldc 
    stack[sp++].f = 0.75;
    // invokespecial java/util/WeakHashMap.<init>(IF)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap__init___IF_V(runtime, stack[sp + 0].i, stack[sp + 1].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 68 , L1689924104 , bytecode index = 
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

void bridge_java_util_WeakHashMap__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap__init___I_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_java_util_WeakHashMap__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 952, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 72 , L631673932 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 72;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 16
    stack[sp++].i = 16;
    //  ldc 
    stack[sp++].f = 0.75;
    // invokespecial java/util/WeakHashMap.<init>(IF)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap__init___IF_V(runtime, stack[sp + 0].i, stack[sp + 1].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 73 , L1579132337 , bytecode index = 
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

void bridge_java_util_WeakHashMap__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap__init____V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_WeakHashMap__init___Ljava_util_Map_2_V(JThreadRuntime *runtime, struct java_util_Map* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 953, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 77 , L790094605 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 77;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    //  ldc 
    stack[sp++].f = 0.75;
    stack[sp - 2].f = stack[sp - 2].f / stack[sp - 1].f; 
    --sp;
    stack[sp - 1].i = (s32)stack[sp - 1].f; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 16
    stack[sp++].i = 16;
    // invokestatic java/lang/Math.max(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_max__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    stack[sp++].f = 0.75;
    // invokespecial java/util/WeakHashMap.<init>(IF)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap__init___IF_V(runtime, stack[sp + 0].i, stack[sp + 1].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 80 , L1048712791 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/WeakHashMap.putAll(Ljava/util/Map;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Map*) = find_method(__ins->vm_table, 190, 8);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 81 , L487792155 , bytecode index = 
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

void bridge_java_util_WeakHashMap__init___Ljava_util_Map_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap__init___Ljava_util_Map_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_Object* func_java_util_WeakHashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_util_WeakHashMap* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 954, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 88 , L1632670136 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 88;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L1338905451;
    // getstatic java/util/WeakHashMap NULL_KEY Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_WeakHashMap.NULL_1KEY_11;
    sp += 1;
    goto L1252540239;
    L1338905451:
    rstack[sp++].obj = rlocal[0].obj;
    L1252540239:
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

void bridge_java_util_WeakHashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 2
struct java_lang_Object* func_java_util_WeakHashMap_unmaskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_util_WeakHashMap* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 955, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 93 , L638486177 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 93;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/util/WeakHashMap NULL_KEY Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_WeakHashMap.NULL_1KEY_11;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L426019904;
    // aconst null
    rstack[sp++].obj = NULL;
    goto L314411620;
    L426019904:
    rstack[sp++].obj = rlocal[0].obj;
    L314411620:
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

void bridge_java_util_WeakHashMap_unmaskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_unmaskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 2
// args: 3
s8 func_java_util_WeakHashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_util_WeakHashMap* p0, struct java_lang_Object* p1, struct java_lang_Object* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 956, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 98 , L855700733 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 98;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L247162961;
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
    if(stack[--sp].i  == 0) goto L1890266440;
    L247162961:
    // iconst_1
    stack[sp++].i = 1;
    goto L1527152775;
    L1890266440:
    // iconst_0
    stack[sp++].i = 0;
    L1527152775:
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

void bridge_java_util_WeakHashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 4
// args: 1
s32 func_java_util_WeakHashMap_hash__Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 957, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 103 , L976827477 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 103;
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
    local[2].i = stack[--sp].i;
    ; 
    //  line no 106 , L324112183 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[2].i;
    //  bipush 20
    stack[sp++].i = 20;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 107 , L2092709730 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[2].i;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    // iconst_4
    stack[sp++].i = 4;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
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

void bridge_java_util_WeakHashMap_hash__Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_hash__Ljava_lang_Object_2_I(runtime, ins);
}


// locals: 2
// stack: 3
// args: 3
s32 func_java_util_WeakHashMap_indexFor__II_I(JThreadRuntime *runtime, struct java_util_WeakHashMap* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 958, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 112 , L1233595751 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
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

void bridge_java_util_WeakHashMap_indexFor__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_indexFor__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}

ExceptionItem arr_extable_func_java_util_WeakHashMap_expungeStaleEntries___V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_WeakHashMap_expungeStaleEntries___V = {2, arr_extable_func_java_util_WeakHashMap_expungeStaleEntries___V};

// locals: 9
// stack: 3
// args: 0
void func_java_util_WeakHashMap_expungeStaleEntries___V(JThreadRuntime *runtime){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 959, &rstack[0], &rlocal[0], &sp);
    // try catch :L1261044180 L141110631 L2029372696 (
    // try catch :L2029372696 L793293778 L2029372696 (
    L888611662:
    //  line no 117 , L888611662 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap queue Ljava/lang/ref/ReferenceQueue;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->queue_9;
    sp += 0;
    // invokevirtual java/lang/ref/ReferenceQueue.poll()Ljava/lang/ref/Reference;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_ref_Reference* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 189, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    if(rstack[--sp].obj  == NULL) goto L599782425;
    ; 
    //  line no 118 , L1233327519 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap queue Ljava/lang/ref/ReferenceQueue;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->queue_9;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1261044180:
    __frame->bytecodeIndex = 
    //  line no 120 , L1261044180 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/WeakHashMap$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1953);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 121 , L1155769010 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/util/WeakHashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->hash_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1155769010
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/WeakHashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 123 , L269892014 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L269892014 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 124 , L1280641161 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rlocal[6].obj = rstack[--sp].obj;
    L489411441:
    //  line no 125 , L489411441 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  == NULL) goto L1141113940;
    ; 
    //  line no 126 , L1711185459 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 127 , L25936709 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[3].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1123559518;
    ; 
    //  line no 128 , L649769713 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[3].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L925150995;
    ; 
    //  line no 129 , L1760219993 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[7].obj;
    // arrstore __refer  ,  L1760219993 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    goto L1800649922;
    L925150995:
    //  line no 131 , L925150995 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // putfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->next_5 = rstack[sp + 1].obj;
    L1800649922:
    //  line no 134 , L1800649922 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->value_3 = rstack[sp + 1].obj;
    ; 
    //  line no 135 , L403547747 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap size I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/WeakHashMap size I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    ; 
    //  line no 136 , L172215878 , bytecode index = 
    goto L1141113940;
    L1123559518:
    //  line no 138 , L1123559518 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 139 , L873309260 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 140 , L1112456099 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L489411441;
    L1141113940:
    //  line no 141 , L1141113940 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L141110631:
    __frame->bytecodeIndex = 
    goto L923083575;
    L2029372696:
    __frame->bytecodeIndex = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L793293778:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L793293778 in labeltable is :L793293778
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 141;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L923083575:
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L888611662;
    L599782425:
    //  line no 143 , L599782425 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L2029372696;
        case 1 : goto L2029372696;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_WeakHashMap_expungeStaleEntries___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_expungeStaleEntries___V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
JArray * func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 960, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 147 , L2052457859 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 147;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.expungeStaleEntries()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_expungeStaleEntries___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 148 , L1299327689 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
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

void bridge_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_WeakHashMap_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 961, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 153 , L2007486296 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 153;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap size I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1033348658;
    ; 
    //  line no 154 , L1634723627 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1033348658:
    //  line no 155 , L1033348658 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.expungeStaleEntries()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_expungeStaleEntries___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 156 , L938463537 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap size I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
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

void bridge_java_util_WeakHashMap_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_size___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_WeakHashMap_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 962, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 161 , L2120063568 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 161;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 190, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1620409359;
    // iconst_1
    stack[sp++].i = 1;
    goto L691691381;
    L1620409359:
    // iconst_0
    stack[sp++].i = 0;
    L691691381:
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

void bridge_java_util_WeakHashMap_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_isEmpty___Z(runtime, ins);
}


// locals: 7
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_WeakHashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 963, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 166 , L500618423 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 166;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/WeakHashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_WeakHashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 167 , L1458091526 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/WeakHashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 168 , L768776793 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.getTable()[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 169 , L2018260103 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[4].obj;
    // arraylength  label  L2018260103
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/WeakHashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 170 , L1393828949 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1393828949 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[6].obj = rstack[--sp].obj;
    L1088417975:
    //  line no 171 , L1088417975 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  == NULL) goto L2036775591;
    ; 
    //  line no 172 , L1620529408 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/WeakHashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->hash_4;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L307488715;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[6].obj;
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
    // invokestatic java/util/WeakHashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L307488715;
    ; 
    //  line no 173 , L758572926 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L307488715:
    //  line no 174 , L307488715 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1088417975;
    L2036775591:
    //  line no 176 , L2036775591 , bytecode index = 
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

void bridge_java_util_WeakHashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_WeakHashMap_containsKey__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 964, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 181 , L990679445 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 181;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/WeakHashMap.getEntry(Ljava/lang/Object;)Ljava/util/WeakHashMap$Entry;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_WeakHashMap_00024Entry* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L913065088;
    // iconst_1
    stack[sp++].i = 1;
    goto L746280996;
    L913065088:
    // iconst_0
    stack[sp++].i = 0;
    L746280996:
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

void bridge_java_util_WeakHashMap_containsKey__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_containsKey__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 7
// stack: 2
// args: 1
struct java_util_WeakHashMap_00024Entry* func_java_util_WeakHashMap_getEntry__Ljava_lang_Object_2_Ljava_util_WeakHashMap_00024Entry_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 965, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 186 , L1557989809 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 186;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/WeakHashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_WeakHashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 187 , L146874094 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/WeakHashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 188 , L2123222442 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.getTable()[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 189 , L1746570062 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[4].obj;
    // arraylength  label  L1746570062
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/WeakHashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 190 , L1555990397 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1555990397 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[6].obj = rstack[--sp].obj;
    L1544078442:
    //  line no 191 , L1544078442 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  == NULL) goto L1291367132;
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/WeakHashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->hash_4;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1887699190;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[6].obj;
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
    // invokestatic java/util/WeakHashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1291367132;
    L1887699190:
    //  line no 192 , L1887699190 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1544078442;
    L1291367132:
    //  line no 193 , L1291367132 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
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

void bridge_java_util_WeakHashMap_getEntry__Ljava_lang_Object_2_Ljava_util_WeakHashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_getEntry__Ljava_lang_Object_2_Ljava_util_WeakHashMap_00024Entry_2(runtime, ins);
}


// locals: 9
// stack: 9
// args: 2
struct java_lang_Object* func_java_util_WeakHashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[10];
    RStackItem rstack[10];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 966, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 198 , L1108889615 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 198;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/WeakHashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_WeakHashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 199 , L1275028674 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/util/WeakHashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 200 , L455888635 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.getTable()[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 201 , L204805934 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[5].obj;
    // arraylength  label  L204805934
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/WeakHashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 203 , L204322447 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L204322447 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[7].obj = rstack[--sp].obj;
    L1019484860:
    rstack[sp++].obj = rlocal[7].obj;
    if(rstack[--sp].obj  == NULL) goto L1164365897;
    ; 
    //  line no 204 , L1640899500 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[7].obj;
    // getfield java/util/WeakHashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->hash_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L3565780;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[7].obj;
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
    // invokestatic java/util/WeakHashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L3565780;
    ; 
    //  line no 205 , L473666452 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 206 , L1865219266 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[8].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L2138005960;
    ; 
    //  line no 207 , L1278002745 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->value_3 = rstack[sp + 1].obj;
    L2138005960:
    //  line no 208 , L2138005960 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L3565780:
    //  line no 203 , L3565780 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[7].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1019484860;
    L1164365897:
    //  line no 212 , L1164365897 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap modCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->modCount_10;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/WeakHashMap modCount I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->modCount_10 = stack[sp + 1].i;
    ; 
    //  line no 213 , L214649627 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L214649627 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 214 , L67730604 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // new java/util/WeakHashMap$Entry
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 191);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap queue Ljava/lang/ref/ReferenceQueue;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->queue_9;
    sp += 0;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[7].obj;
    // invokespecial java/util/WeakHashMap$Entry.<init>(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;ILjava/util/WeakHashMap$Entry;)V
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_00024Entry__init___Ljava_lang_Object_2Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2ILjava_util_WeakHashMap_00024Entry_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L67730604 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 215 , L15477956 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap size I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/WeakHashMap size I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap threshold I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->threshold_7;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L710623214;
    ; 
    //  line no 216 , L2082351661 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // arraylength  label  L2082351661
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/WeakHashMap.resize(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 190, 7);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L710623214:
    //  line no 217 , L710623214 , bytecode index = 
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

void bridge_java_util_WeakHashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 3
// args: 1
void func_java_util_WeakHashMap_resize__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 967, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 222 , L1389774257 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 222;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.getTable()[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 223 , L553759818 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L553759818
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 224 , L751021317 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  ldc 
    stack[sp++].i = 0x40000000;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1896552614;
    ; 
    //  line no 225 , L294658299 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    stack[sp++].i = 0x7fffffff;
    // putfield java/util/WeakHashMap threshold I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->threshold_7 = stack[sp + 1].i;
    ; 
    //  line no 226 , L1033856359 , bytecode index = 
    method_exit(runtime);
    return;
    L1896552614:
    //  line no 229 , L1896552614 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/util/WeakHashMap.newTable(I)[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_newTable__I__3Ljava_util_WeakHashMap_00024Entry_2(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 230 , L201677908 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokespecial java/util/WeakHashMap.transfer([Ljava/util/WeakHashMap$Entry;[Ljava/util/WeakHashMap$Entry;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_transfer___3Ljava_util_WeakHashMap_00024Entry_2_3Ljava_util_WeakHashMap_00024Entry_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 231 , L635611994 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->table_5 = rstack[sp + 1].obj;
    ; 
    //  line no 234 , L904253669 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap size I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap threshold I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->threshold_7;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1930903395;
    ; 
    //  line no 235 , L1431710377 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap loadFactor F
    stack[sp - 1].f = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->loadFactor_8;
    sp += 0;
    stack[sp - 2].f = stack[sp - 2].f * stack[sp - 1].f; 
    --sp;
    stack[sp - 1].i = (s32)stack[sp - 1].f; 
    // putfield java/util/WeakHashMap threshold I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->threshold_7 = stack[sp + 1].i;
    goto L1700721442;
    L1930903395:
    //  line no 237 , L1930903395 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.expungeStaleEntries()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_expungeStaleEntries___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 238 , L2116511124 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/util/WeakHashMap.transfer([Ljava/util/WeakHashMap$Entry;[Ljava/util/WeakHashMap$Entry;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_transfer___3Ljava_util_WeakHashMap_00024Entry_2_3Ljava_util_WeakHashMap_00024Entry_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 239 , L872522004 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->table_5 = rstack[sp + 1].obj;
    L1700721442:
    //  line no 241 , L1700721442 , bytecode index = 
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

void bridge_java_util_WeakHashMap_resize__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_resize__I_V(runtime, ins);
}


// locals: 8
// stack: 3
// args: 2
void func_java_util_WeakHashMap_transfer___3Ljava_util_WeakHashMap_00024Entry_2_3Ljava_util_WeakHashMap_00024Entry_2_V(JThreadRuntime *runtime, JArray * p0, JArray * p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 968, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 245 , L1110698130 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 245;
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L125644421:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L125644421
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1053632127;
    ; 
    //  line no 246 , L1493158871 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1493158871 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 247 , L89509666 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L89509666 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    L1806880779:
    //  line no 248 , L1806880779 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L1016856028;
    ; 
    //  line no 249 , L446445803 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 250 , L832292933 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
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
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 251 , L1280603381 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  != NULL) goto L792855998;
    ; 
    //  line no 252 , L1424108509 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->next_5 = rstack[sp + 1].obj;
    ; 
    //  line no 253 , L1003755748 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->value_3 = rstack[sp + 1].obj;
    ; 
    //  line no 254 , L1414013111 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap size I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/WeakHashMap size I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    goto L1805164661;
    L792855998:
    //  line no 256 , L792855998 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield java/util/WeakHashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->hash_4;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L792855998
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/WeakHashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 257 , L778162712 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L778162712 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // putfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->next_5 = rstack[sp + 1].obj;
    ; 
    //  line no 258 , L896138248 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[4].obj;
    // arrstore __refer  ,  L896138248 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    L1805164661:
    //  line no 260 , L1805164661 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 261 , L548482954 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1806880779;
    L1016856028:
    //  line no 245 , L1016856028 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L125644421;
    L1053632127:
    //  line no 263 , L1053632127 , bytecode index = 
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

void bridge_java_util_WeakHashMap_transfer___3Ljava_util_WeakHashMap_00024Entry_2_3Ljava_util_WeakHashMap_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_transfer___3Ljava_util_WeakHashMap_00024Entry_2_3Ljava_util_WeakHashMap_00024Entry_2_V(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 3
// args: 1
void func_java_util_WeakHashMap_putAll__Ljava_util_Map_2_V(JThreadRuntime *runtime, struct java_util_Map* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 969, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 267 , L777341499 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 267;
    rstack[sp++].obj = rlocal[1].obj;
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
    local[2].i = stack[--sp].i;
    ; 
    //  line no 268 , L1420196421 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  != 0) goto L2101527076;
    ; 
    //  line no 269 , L1454026445 , bytecode index = 
    method_exit(runtime);
    return;
    L2101527076:
    //  line no 272 , L2101527076 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap threshold I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->threshold_7;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1378497201;
    ; 
    //  line no 273 , L892931811 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap loadFactor F
    stack[sp - 1].f = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->loadFactor_8;
    sp += 0;
    stack[sp - 2].f = stack[sp - 2].f / stack[sp - 1].f; 
    --sp;
    //  fconst 1
    stack[sp++].f = 1;
    stack[sp - 2].f = stack[sp - 2].f + stack[sp - 1].f; 
    --sp;
    stack[sp - 1].i = (s32)stack[sp - 1].f; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 274 , L1577167234 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  ldc 
    stack[sp++].i = 0x40000000;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1574873161;
    ; 
    //  line no 275 , L1591916281 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0x40000000;
    local[3].i = stack[--sp].i;
    L1574873161:
    //  line no 276 , L1574873161 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1574873161
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    L600958416:
    //  line no 277 , L600958416 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1884231057;
    ; 
    //  line no 278 , L1492875057 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L600958416;
    L1884231057:
    //  line no 279 , L1884231057 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1884231057
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1378497201;
    ; 
    //  line no 280 , L333793193 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual java/util/WeakHashMap.resize(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 190, 7);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1378497201:
    //  line no 283 , L1378497201 , bytecode index = 
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
    rlocal[3].obj = rstack[--sp].obj;
    L1068945248:
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
    if(stack[--sp].i  == 0) goto L937277082;
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
    //  line no 284 , L882646447 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    // invokevirtual java/util/WeakHashMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 6);
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
    goto L1068945248;
    L937277082:
    //  line no 285 , L937277082 , bytecode index = 
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

void bridge_java_util_WeakHashMap_putAll__Ljava_util_Map_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_putAll__Ljava_util_Map_2_V(runtime, ins);
}


// locals: 9
// stack: 3
// args: 1
struct java_lang_Object* func_java_util_WeakHashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 970, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 289 , L1586151649 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 289;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/WeakHashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_WeakHashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 290 , L179294202 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/WeakHashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 291 , L1767230265 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.getTable()[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 292 , L593103894 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[4].obj;
    // arraylength  label  L593103894
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/WeakHashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 293 , L727666004 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L727666004 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 294 , L1601935322 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rlocal[7].obj = rstack[--sp].obj;
    L414225167:
    //  line no 296 , L414225167 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    if(rstack[--sp].obj  == NULL) goto L1803093683;
    ; 
    //  line no 297 , L975033189 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 298 , L962287291 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[7].obj;
    // getfield java/util/WeakHashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->hash_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L628064884;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[7].obj;
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
    // invokestatic java/util/WeakHashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L628064884;
    ; 
    //  line no 299 , L109069556 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap modCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->modCount_10;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/WeakHashMap modCount I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->modCount_10 = stack[sp + 1].i;
    ; 
    //  line no 300 , L1389509050 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap size I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/WeakHashMap size I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    ; 
    //  line no 301 , L828326869 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[7].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1761217448;
    ; 
    //  line no 302 , L1817789863 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[8].obj;
    // arrstore __refer  ,  L1817789863 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    goto L788905599;
    L1761217448:
    //  line no 304 , L1761217448 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[8].obj;
    // putfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->next_5 = rstack[sp + 1].obj;
    L788905599:
    //  line no 305 , L788905599 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L628064884:
    //  line no 307 , L628064884 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 308 , L1678709153 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 309 , L1544614339 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L414225167;
    L1803093683:
    //  line no 311 , L1803093683 , bytecode index = 
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

void bridge_java_util_WeakHashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 10
// stack: 3
// args: 1
s8 func_java_util_WeakHashMap_removeMapping__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[10] = {0};
    RStackItem rlocal[10] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 971, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 316 , L2016828666 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 316;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map$Entry
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 797);
    if(stack[--sp].i  != 0) goto L1688782916;
    ; 
    //  line no 317 , L1064154107 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1688782916:
    //  line no 318 , L1688782916 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.getTable()[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 319 , L1390301622 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    //  line no 320 , L415565467 , bytecode index = 
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
    // invokestatic java/util/WeakHashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_WeakHashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 321 , L973936431 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/util/WeakHashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 322 , L1756207614 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1756207614
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/WeakHashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_WeakHashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 323 , L1214133948 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L1214133948 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 324 , L2015301874 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rlocal[8].obj = rstack[--sp].obj;
    L712627377:
    //  line no 326 , L712627377 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    if(rstack[--sp].obj  == NULL) goto L782228073;
    ; 
    //  line no 327 , L399373008 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 328 , L391506011 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[8].obj;
    // getfield java/util/WeakHashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->hash_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1936550492;
    rstack[sp++].obj = rlocal[8].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/util/WeakHashMap$Entry.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 191, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1936550492;
    ; 
    //  line no 329 , L594651850 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap modCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->modCount_10;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/WeakHashMap modCount I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->modCount_10 = stack[sp + 1].i;
    ; 
    //  line no 330 , L1532139270 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap size I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/WeakHashMap size I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    ; 
    //  line no 331 , L1677568775 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[8].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L2069500590;
    ; 
    //  line no 332 , L1431556341 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[9].obj;
    // arrstore __refer  ,  L1431556341 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    goto L452364286;
    L2069500590:
    //  line no 334 , L2069500590 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[9].obj;
    // putfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Entry*)rstack[sp + 0].obj)->next_5 = rstack[sp + 1].obj;
    L452364286:
    //  line no 335 , L452364286 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1936550492:
    //  line no 337 , L1936550492 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 338 , L350069300 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 339 , L1060703587 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L712627377;
    L782228073:
    //  line no 341 , L782228073 , bytecode index = 
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

void bridge_java_util_WeakHashMap_removeMapping__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_removeMapping__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 3
// args: 0
void func_java_util_WeakHashMap_clear___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 972, &rstack[0], &rlocal[0], &sp);
    L1514214932:
    //  line no 348 , L1514214932 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 348;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap queue Ljava/lang/ref/ReferenceQueue;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->queue_9;
    sp += 0;
    // invokevirtual java/lang/ref/ReferenceQueue.poll()Ljava/lang/ref/Reference;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_ref_Reference* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 189, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L594858858;
    ; 
    //  line no 349 , L1423016050 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1514214932;
    L594858858:
    //  line no 351 , L594858858 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/WeakHashMap modCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->modCount_10;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/WeakHashMap modCount I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->modCount_10 = stack[sp + 1].i;
    ; 
    //  line no 352 , L352776719 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 353 , L1202042637 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1112527632:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1112527632
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L440736059;
    ; 
    //  line no 354 , L955324150 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L955324150 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 353 , L1384563514 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1112527632;
    L440736059:
    //  line no 355 , L440736059 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/WeakHashMap size I
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    L1852661033:
    //  line no 357 , L1852661033 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap queue Ljava/lang/ref/ReferenceQueue;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->queue_9;
    sp += 0;
    // invokevirtual java/lang/ref/ReferenceQueue.poll()Ljava/lang/ref/Reference;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_ref_Reference* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 189, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L1548946718;
    ; 
    //  line no 358 , L1814423236 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1852661033;
    L1548946718:
    //  line no 359 , L1548946718 , bytecode index = 
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

void bridge_java_util_WeakHashMap_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_clear___V(runtime, ins);
}


// locals: 5
// stack: 2
// args: 1
s8 func_java_util_WeakHashMap_containsValue__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 973, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 363 , L207546206 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 363;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1218519094;
    ; 
    //  line no 364 , L200404000 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.containsNullValue()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_util_WeakHashMap_containsNullValue___Z(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1218519094:
    //  line no 366 , L1218519094 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.getTable()[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 367 , L1894758168 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1894758168
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    L191945292:
    stack[sp++].i = local[3].i;
    // iinc slot 3 value -1
    local[3].i += -1;
    if(stack[--sp].i  <= 0) goto L1242688388;
    ; 
    //  line no 368 , L1317375498 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1317375498 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[4].obj = rstack[--sp].obj;
    L1130346421:
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L1316005672;
    ; 
    //  line no 369 , L192428201 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->value_3;
    sp += 0;
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
    if(stack[--sp].i  == 0) goto L1768882706;
    ; 
    //  line no 370 , L1463022229 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1768882706:
    //  line no 368 , L1768882706 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1130346421;
    L1316005672:
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L191945292;
    L1242688388:
    //  line no 371 , L1242688388 , bytecode index = 
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

void bridge_java_util_WeakHashMap_containsValue__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_containsValue__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 4
// stack: 2
// args: 0
s8 func_java_util_WeakHashMap_containsNullValue___Z(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 974, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 376 , L1455855843 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 376;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/WeakHashMap.getTable()[Ljava/util/WeakHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_WeakHashMap_getTable____3Ljava_util_WeakHashMap_00024Entry_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 377 , L1202220987 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1202220987
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    L256346753:
    stack[sp++].i = local[2].i;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(stack[--sp].i  <= 0) goto L425015667;
    ; 
    //  line no 378 , L2075568954 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L2075568954 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[3].obj = rstack[--sp].obj;
    L2145896000:
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1279740095;
    ; 
    //  line no 379 , L2095677157 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/util/WeakHashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L852026681;
    ; 
    //  line no 380 , L1943855334 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L852026681:
    //  line no 378 , L852026681 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2145896000;
    L1279740095:
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L256346753;
    L425015667:
    //  line no 381 , L425015667 , bytecode index = 
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

void bridge_java_util_WeakHashMap_containsNullValue___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_containsNullValue___Z(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
struct java_util_Set* func_java_util_WeakHashMap_keySet___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 975, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 529 , L847320212 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 529;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap keySet Ljava/util/Set;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->keySet_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 530 , L1201004240 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1406848276;
    rstack[sp++].obj = rlocal[1].obj;
    goto L349259569;
    L1406848276:
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/WeakHashMap$KeySet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 192);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/WeakHashMap$KeySet.<init>(Ljava/util/WeakHashMap;Ljava/util/WeakHashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_00024KeySet__init___Ljava_util_WeakHashMap_2Ljava_util_WeakHashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/WeakHashMap keySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->keySet_0 = rstack[sp + 1].obj;
    L349259569:
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

void bridge_java_util_WeakHashMap_keySet___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_keySet___Ljava_util_Set_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
struct java_util_Collection* func_java_util_WeakHashMap_values___Ljava_util_Collection_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 976, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 562 , L1204088028 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 562;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap values Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 563 , L1123236701 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1552221437;
    rstack[sp++].obj = rlocal[1].obj;
    goto L79161706;
    L1552221437:
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/WeakHashMap$Values
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 193);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/WeakHashMap$Values.<init>(Ljava/util/WeakHashMap;Ljava/util/WeakHashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_00024Values__init___Ljava_util_WeakHashMap_2Ljava_util_WeakHashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/WeakHashMap values Ljava/util/Collection;
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->values_1 = rstack[sp + 1].obj;
    L79161706:
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

void bridge_java_util_WeakHashMap_values___Ljava_util_Collection_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_values___Ljava_util_Collection_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
struct java_util_Set* func_java_util_WeakHashMap_entrySet___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 977, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 587 , L1057468716 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 587;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap entrySet Ljava/util/Set;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->entrySet_12;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 588 , L1272051933 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1888924788;
    rstack[sp++].obj = rlocal[1].obj;
    goto L1041547629;
    L1888924788:
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/WeakHashMap$EntrySet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 194);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/WeakHashMap$EntrySet.<init>(Ljava/util/WeakHashMap;Ljava/util/WeakHashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_00024EntrySet__init___Ljava_util_WeakHashMap_2Ljava_util_WeakHashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/WeakHashMap entrySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_WeakHashMap*)rstack[sp + 0].obj)->entrySet_12 = rstack[sp + 1].obj;
    L1041547629:
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

void bridge_java_util_WeakHashMap_entrySet___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_entrySet___Ljava_util_Set_2(runtime, ins);
}


// locals: 0
// stack: 2
// args: 1
void func_java_util_WeakHashMap__clinit____V(JThreadRuntime *runtime, struct java_util_WeakHashMap* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 978, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 84 , L2018220300 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 84;
    // new java/lang/Object
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 5);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    // putstatic java/util/WeakHashMap NULL_KEY Ljava/lang/Object;
    sp -= 1;
    static_var_java_util_WeakHashMap.NULL_1KEY_11 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_WeakHashMap__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap__clinit____V(runtime, para[0].obj);
}


