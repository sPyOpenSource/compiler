// CLASS: java/util/HashMap extends java/util/AbstractMap
#include "metadata.h"


// generation
// globals
//struct java_util_HashMap_static {s32 DEFAULT_1INITIAL_1CAPACITY_2; s32 MAXIMUM_1CAPACITY_3; f32 DEFAULT_1LOAD_1FACTOR_4; struct java_lang_Object* NULL_1KEY_10;  };
struct java_util_HashMap_static static_var_java_util_HashMap = {0, 0, 0, NULL};


__refer arr_vmtable_java_util_HashMap_from_java_util_HashMap[] = {
    func_java_util_HashMap_init___V,  //0
    func_java_util_HashMap_size___I,  //1
    func_java_util_HashMap_isEmpty___Z,  //2
    func_java_util_HashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //3
    func_java_util_HashMap_containsKey__Ljava_lang_Object_2_Z,  //4
    func_java_util_HashMap_getEntry__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2,  //5
    func_java_util_HashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //6
    func_java_util_HashMap_putAllForCreate__Ljava_util_Map_2_V,  //7
    func_java_util_HashMap_resize__I_V,  //8
    func_java_util_HashMap_transfer___3Ljava_util_HashMap_00024Entry_2_V,  //9
    func_java_util_HashMap_putAll__Ljava_util_Map_2_V,  //10
    func_java_util_HashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //11
    func_java_util_HashMap_removeEntryForKey__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2,  //12
    func_java_util_HashMap_removeMapping__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2,  //13
    func_java_util_HashMap_clear___V,  //14
    func_java_util_HashMap_containsValue__Ljava_lang_Object_2_Z,  //15
    func_java_util_HashMap_addEntry__ILjava_lang_Object_2Ljava_lang_Object_2I_V,  //16
    func_java_util_HashMap_createEntry__ILjava_lang_Object_2Ljava_lang_Object_2I_V,  //17
    func_java_util_HashMap_newKeyIterator___Ljava_util_Iterator_2,  //18
    func_java_util_HashMap_newValueIterator___Ljava_util_Iterator_2,  //19
    func_java_util_HashMap_newEntryIterator___Ljava_util_Iterator_2,  //20
    func_java_util_HashMap_keySet___Ljava_util_Set_2,  //21
    func_java_util_HashMap_values___Ljava_util_Collection_2,  //22
    func_java_util_HashMap_entrySet___Ljava_util_Set_2,  //23
    func_java_util_HashMap_capacity___I,  //24
    func_java_util_HashMap_loadFactor___F  //25
};
__refer arr_vmtable_java_util_HashMap_from_java_util_AbstractMap[] = {
    func_java_util_HashMap_size___I,  //0
    func_java_util_HashMap_isEmpty___Z,  //1
    func_java_util_HashMap_containsValue__Ljava_lang_Object_2_Z,  //2
    func_java_util_HashMap_containsKey__Ljava_lang_Object_2_Z,  //3
    func_java_util_HashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_HashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //5
    func_java_util_HashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //6
    func_java_util_HashMap_putAll__Ljava_util_Map_2_V,  //7
    func_java_util_HashMap_clear___V,  //8
    func_java_util_HashMap_keySet___Ljava_util_Set_2,  //9
    func_java_util_HashMap_values___Ljava_util_Collection_2,  //10
    func_java_util_HashMap_entrySet___Ljava_util_Set_2,  //11
    func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z,  //12
    func_java_util_AbstractMap_hashCode___I,  //13
    func_java_util_AbstractMap_toString___Ljava_lang_String_2,  //14
    func_java_util_AbstractMap_clone___Ljava_lang_Object_2  //15
};
__refer arr_vmtable_java_util_HashMap_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_HashMap_from_java_util_Map[] = {
    func_java_util_HashMap_size___I,  //0
    func_java_util_HashMap_isEmpty___Z,  //1
    func_java_util_HashMap_containsKey__Ljava_lang_Object_2_Z,  //2
    func_java_util_HashMap_containsValue__Ljava_lang_Object_2_Z,  //3
    func_java_util_HashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_HashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //5
    func_java_util_HashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //6
    func_java_util_HashMap_putAll__Ljava_util_Map_2_V,  //7
    func_java_util_HashMap_clear___V,  //8
    func_java_util_HashMap_keySet___Ljava_util_Set_2,  //9
    func_java_util_HashMap_values___Ljava_util_Collection_2,  //10
    func_java_util_HashMap_entrySet___Ljava_util_Set_2,  //11
    func_java_util_AbstractMap_equals__Ljava_lang_Object_2_Z,  //12
    func_java_util_AbstractMap_hashCode___I  //13
};
VMTable vmtable_java_util_HashMap[] = {
    {27, 26, arr_vmtable_java_util_HashMap_from_java_util_HashMap}, //0
    {130, 16, arr_vmtable_java_util_HashMap_from_java_util_AbstractMap}, //1
    {5, 10, arr_vmtable_java_util_HashMap_from_java_lang_Object}, //2
    {171, 14, arr_vmtable_java_util_HashMap_from_java_util_Map}, //3
};



// locals: 4
// stack: 4
// args: 2
void func_java_util_HashMap__init___IF_V(JThreadRuntime *runtime, s32 p0, f32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1860, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].f = p1;
    ; 
    //  line no 33 , L773518491 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
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
    //  line no 522 , L1070740013 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/HashMap entrySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->entrySet_11 = rstack[sp + 1].obj;
    ; 
    //  line no 34 , L1454136448 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L1776589441;
    ; 
    //  line no 35 , L270734602 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3213);
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
    //     L270734602 in labeltable is :L270734602
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 35;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1776589441:
    //  line no 37 , L1776589441 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  ldc 
    stack[sp++].i = 0x40000000;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1053695609;
    ; 
    //  line no 38 , L179441020 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0x40000000;
    local[1].i = stack[--sp].i;
    L1053695609:
    //  line no 39 , L1053695609 , bytecode index = 
    stack[sp++].f = local[2].f;
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  <= 0) goto L1196404281;
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
    if(stack[--sp].i  == 0) goto L1330411679;
    L1196404281:
    //  line no 40 , L1196404281 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3214);
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
    //     L1196404281 in labeltable is :L1196404281
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 40;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1330411679:
    //  line no 44 , L1330411679 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[3].i = stack[--sp].i;
    L20945625:
    //  line no 45 , L20945625 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L461155951;
    ; 
    //  line no 46 , L569959775 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L20945625;
    L461155951:
    //  line no 48 , L461155951 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].f = local[2].f;
    // putfield java/util/HashMap loadFactor F
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->loadFactor_8 = stack[sp + 1].f;
    ; 
    //  line no 49 , L224192895 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    stack[sp++].f = local[2].f;
    stack[sp - 2].f = stack[sp - 2].f * stack[sp - 1].f; 
    --sp;
    stack[sp - 1].i = (s32)stack[sp - 1].f; 
    // putfield java/util/HashMap threshold I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->threshold_7 = stack[sp + 1].i;
    ; 
    //  line no 50 , L1883788127 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [Ljava/util/HashMap$Entry; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(3215));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->table_5 = rstack[sp + 1].obj;
    ; 
    //  line no 51 , L238654703 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashMap.init()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 27, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 52 , L1745701482 , bytecode index = 
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

void bridge_java_util_HashMap__init___IF_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap__init___IF_V(runtime, ins, para[0].f);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_HashMap__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1861, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 56 , L814753967 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 56;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    //  ldc 
    stack[sp++].f = 0.75;
    // invokespecial java/util/HashMap.<init>(IF)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init___IF_V(runtime, stack[sp + 0].i, stack[sp + 1].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 57 , L1917607102 , bytecode index = 
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

void bridge_java_util_HashMap__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap__init___I_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_util_HashMap__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1862, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 60 , L1894287849 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 60;
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
    //  line no 522 , L1099694603 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/HashMap entrySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->entrySet_11 = rstack[sp + 1].obj;
    ; 
    //  line no 61 , L1362435880 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    stack[sp++].f = 0.75;
    // putfield java/util/HashMap loadFactor F
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->loadFactor_8 = stack[sp + 1].f;
    ; 
    //  line no 62 , L560041895 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 12
    stack[sp++].i = 12;
    // putfield java/util/HashMap threshold I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->threshold_7 = stack[sp + 1].i;
    ; 
    //  line no 63 , L368242083 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 16
    stack[sp++].i = 16;
    // ; newarray/multiarray Dimension Array: [Ljava/util/HashMap$Entry; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(3215));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->table_5 = rstack[sp + 1].obj;
    ; 
    //  line no 64 , L885991756 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashMap.init()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 27, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 65 , L1299885218 , bytecode index = 
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

void bridge_java_util_HashMap__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap__init____V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_HashMap__init___Ljava_util_Map_2_V(JThreadRuntime *runtime, struct java_util_Map* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1863, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 69 , L1649829954 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 69;
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
    // invokespecial java/util/HashMap.<init>(IF)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init___IF_V(runtime, stack[sp + 0].i, stack[sp + 1].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 71 , L790538253 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.putAllForCreate(Ljava/util/Map;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Map*) = find_method(__ins->vm_table, 27, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 72 , L924393200 , bytecode index = 
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

void bridge_java_util_HashMap__init___Ljava_util_Map_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap__init___Ljava_util_Map_2_V(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_util_HashMap_init___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1864, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 76 , L1591683105 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 76;
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

void bridge_java_util_HashMap_init___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_init___V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_Object* func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_util_HashMap* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1865, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 83 , L2068499906 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 83;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L648176342;
    // getstatic java/util/HashMap NULL_KEY Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_HashMap.NULL_1KEY_10;
    sp += 1;
    goto L18601987;
    L648176342:
    rstack[sp++].obj = rlocal[0].obj;
    L18601987:
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

void bridge_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 2
struct java_lang_Object* func_java_util_HashMap_unmaskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_util_HashMap* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1866, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 88 , L1970900227 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 88;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/util/HashMap NULL_KEY Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_HashMap.NULL_1KEY_10;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1090057640;
    // aconst null
    rstack[sp++].obj = NULL;
    goto L536671860;
    L1090057640:
    rstack[sp++].obj = rlocal[0].obj;
    L536671860:
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

void bridge_java_util_HashMap_unmaskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_unmaskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 3
// args: 2
s32 func_java_util_HashMap_hash__Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_util_HashMap* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1867, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 93 , L2097614581 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 93;
    rstack[sp++].obj = rlocal[0].obj;
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
    local[1].i = stack[--sp].i;
    ; 
    //  line no 95 , L2052452680 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[1].i;
    //  bipush 9
    stack[sp++].i = 9;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    // iconst_-1
    stack[sp++].i = -1;
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 96 , L48428832 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[1].i;
    //  bipush 14
    stack[sp++].i = 14;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 97 , L987950392 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[1].i;
    // iconst_4
    stack[sp++].i = 4;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 98 , L2136419383 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[1].i;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 99 , L719146276 , bytecode index = 
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

void bridge_java_util_HashMap_hash__Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_hash__Ljava_lang_Object_2_I(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 2
// args: 3
s8 func_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_util_HashMap* p0, struct java_lang_Object* p1, struct java_lang_Object* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1868, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 104 , L313869647 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 104;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L1413871034;
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
    if(stack[--sp].i  == 0) goto L338765435;
    L1413871034:
    // iconst_1
    stack[sp++].i = 1;
    goto L874981105;
    L338765435:
    // iconst_0
    stack[sp++].i = 0;
    L874981105:
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

void bridge_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 2
// stack: 3
// args: 3
s32 func_java_util_HashMap_indexFor__II_I(JThreadRuntime *runtime, struct java_util_HashMap* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1869, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 109 , L1997753864 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 109;
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

void bridge_java_util_HashMap_indexFor__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_indexFor__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_HashMap_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 114 , L1729171313 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap size I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_util_HashMap_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_size___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_HashMap_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1871, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 119 , L34032089 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 119;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap size I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L233271858;
    // iconst_1
    stack[sp++].i = 1;
    goto L1650626168;
    L233271858:
    // iconst_0
    stack[sp++].i = 0;
    L1650626168:
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

void bridge_java_util_HashMap_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_isEmpty___Z(runtime, ins);
}


// locals: 6
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_HashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1872, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 124 , L2088098699 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 124;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/HashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 125 , L1253396693 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic java/util/HashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_HashMap_hash__Ljava_lang_Object_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 126 , L1020397237 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1020397237
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/HashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 127 , L1491623023 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1491623023 bc index = 
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
    L169049466:
    //  line no 129 , L169049466 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  != NULL) goto L1791014677;
    ; 
    //  line no 130 , L1183572822 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1791014677:
    //  line no 131 , L1791014677 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->hash_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1553646796;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // invokestatic java/util/HashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1553646796;
    ; 
    //  line no 132 , L1307810440 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1553646796:
    //  line no 133 , L1553646796 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L169049466;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_HashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_get__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 6
// stack: 2
// args: 1
s8 func_java_util_HashMap_containsKey__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1873, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 139 , L1005331061 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 139;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/HashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 140 , L836386144 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic java/util/HashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_HashMap_hash__Ljava_lang_Object_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 141 , L1621939721 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1621939721
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/HashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 142 , L1710000932 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1710000932 bc index = 
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
    L1061806694:
    //  line no 143 , L1061806694 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  == NULL) goto L1595472338;
    ; 
    //  line no 144 , L1501716646 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->hash_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1488352537;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // invokestatic java/util/HashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1488352537;
    ; 
    //  line no 145 , L672982715 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1488352537:
    //  line no 146 , L1488352537 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1061806694;
    L1595472338:
    //  line no 148 , L1595472338 , bytecode index = 
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

void bridge_java_util_HashMap_containsKey__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_containsKey__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 6
// stack: 2
// args: 1
struct java_util_HashMap_00024Entry* func_java_util_HashMap_getEntry__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1874, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 153 , L2048888303 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 153;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/HashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 154 , L292167944 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic java/util/HashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_HashMap_hash__Ljava_lang_Object_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 155 , L1586246816 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1586246816
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/HashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 156 , L2082232630 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L2082232630 bc index = 
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
    L2062209967:
    //  line no 157 , L2062209967 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  == NULL) goto L986238875;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->hash_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L90096982;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // invokestatic java/util/HashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L986238875;
    L90096982:
    //  line no 158 , L90096982 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2062209967;
    L986238875:
    //  line no 159 , L986238875 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
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

void bridge_java_util_HashMap_getEntry__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_getEntry__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(runtime, ins);
}


// locals: 8
// stack: 5
// args: 2
struct java_lang_Object* func_java_util_HashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1875, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 164 , L936261188 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 164;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/HashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 165 , L1267110705 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/HashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_HashMap_hash__Ljava_lang_Object_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 166 , L939625314 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L939625314
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/HashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 168 , L216644009 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L216644009 bc index = 
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
    L1255395942:
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  == NULL) goto L892591894;
    ; 
    //  line no 169 , L22874185 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->hash_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1077464378;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // invokestatic java/util/HashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1077464378;
    ; 
    //  line no 170 , L346847161 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 171 , L1061998933 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/HashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 172 , L1446676917 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashMap$Entry.recordAccess(Ljava/util/HashMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_HashMap*) = find_method(__ins->vm_table, 11, 6);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 173 , L1349373781 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1077464378:
    //  line no 168 , L1077464378 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1255395942;
    L892591894:
    //  line no 177 , L892591894 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/HashMap modCount I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/HashMap modCount I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->modCount_9 = stack[sp + 1].i;
    ; 
    //  line no 178 , L655059806 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual java/util/HashMap.addEntry(ILjava/lang/Object;Ljava/lang/Object;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct java_lang_Object*,struct java_lang_Object*,s32) = find_method(__ins->vm_table, 27, 16);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 179 , L2123681939 , bytecode index = 
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

void bridge_java_util_HashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 7
// stack: 5
// args: 2
void func_java_util_HashMap_putForCreate__Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1876, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 184 , L1112073835 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 184;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/HashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 185 , L1046820071 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/HashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_HashMap_hash__Ljava_lang_Object_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 186 , L1722645488 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1722645488
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/HashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 189 , L376601041 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L376601041 bc index = 
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
    L327986890:
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  == NULL) goto L81355344;
    ; 
    //  line no 190 , L161938368 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->hash_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L203401172;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // invokestatic java/util/HashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L203401172;
    ; 
    //  line no 191 , L2056499811 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/HashMap$Entry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 192 , L890733699 , bytecode index = 
    method_exit(runtime);
    return;
    L203401172:
    //  line no 189 , L203401172 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L327986890;
    L81355344:
    //  line no 196 , L81355344 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual java/util/HashMap.createEntry(ILjava/lang/Object;Ljava/lang/Object;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct java_lang_Object*,struct java_lang_Object*,s32) = find_method(__ins->vm_table, 27, 17);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 197 , L198250778 , bytecode index = 
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

void bridge_java_util_HashMap_putForCreate__Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_putForCreate__Ljava_lang_Object_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 3
// args: 1
void func_java_util_HashMap_putAllForCreate__Ljava_util_Map_2_V(JThreadRuntime *runtime, struct java_util_Map* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1877, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 200 , L501650218 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 200;
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
    L349978505:
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
    if(stack[--sp].i  == 0) goto L386311625;
    ; 
    //  line no 201 , L1681993012 , bytecode index = 
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
    //  line no 202 , L1293389141 , bytecode index = 
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
    // invokespecial java/util/HashMap.putForCreate(Ljava/lang/Object;Ljava/lang/Object;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_putForCreate__Ljava_lang_Object_2Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 203 , L952288009 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L349978505;
    L386311625:
    //  line no 204 , L386311625 , bytecode index = 
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

void bridge_java_util_HashMap_putAllForCreate__Ljava_util_Map_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_putAllForCreate__Ljava_util_Map_2_V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 1
void func_java_util_HashMap_resize__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1878, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 208 , L2005776325 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 208;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 209 , L109175108 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L109175108
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 210 , L678801430 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  ldc 
    stack[sp++].i = 0x40000000;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1928224132;
    ; 
    //  line no 211 , L1757933443 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    stack[sp++].i = 0x7fffffff;
    // putfield java/util/HashMap threshold I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->threshold_7 = stack[sp + 1].i;
    ; 
    //  line no 212 , L1631959070 , bytecode index = 
    method_exit(runtime);
    return;
    L1928224132:
    //  line no 215 , L1928224132 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Ljava/util/HashMap$Entry; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(3215));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 216 , L1681215776 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/util/HashMap.transfer([Ljava/util/HashMap$Entry;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 27, 9);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 217 , L1689723487 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->table_5 = rstack[sp + 1].obj;
    ; 
    //  line no 218 , L870019773 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap loadFactor F
    stack[sp - 1].f = ((struct java_util_HashMap*)rstack[sp - 1].obj)->loadFactor_8;
    sp += 0;
    stack[sp - 2].f = stack[sp - 2].f * stack[sp - 1].f; 
    --sp;
    stack[sp - 1].i = (s32)stack[sp - 1].f; 
    // putfield java/util/HashMap threshold I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->threshold_7 = stack[sp + 1].i;
    ; 
    //  line no 219 , L2140322192 , bytecode index = 
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

void bridge_java_util_HashMap_resize__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_resize__I_V(runtime, ins);
}


// locals: 8
// stack: 3
// args: 1
void func_java_util_HashMap_transfer___3Ljava_util_HashMap_00024Entry_2_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1879, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 223 , L1813525162 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 223;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 224 , L79620878 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L79620878
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 225 , L1854577712 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1560406561:
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1560406561
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1881218633;
    ; 
    //  line no 226 , L62156248 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L62156248 bc index = 
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
    //  line no 227 , L962927234 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  == NULL) goto L1810349933;
    ; 
    //  line no 228 , L323761934 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L323761934 bc index = 
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
    L859193874:
    //  line no 230 , L859193874 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 231 , L571928572 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/util/HashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->hash_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    // invokestatic java/util/HashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 232 , L1952194564 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L1952194564 bc index = 
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
    // putfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->next_3 = rstack[sp + 1].obj;
    ; 
    //  line no 233 , L114990534 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[5].obj;
    // arrstore __refer  ,  L114990534 bc index = 
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
    //  line no 234 , L134048221 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 235 , L302059473 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(rstack[--sp].obj  != NULL) goto L859193874;
    L1810349933:
    //  line no 225 , L1810349933 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1560406561;
    L1881218633:
    //  line no 238 , L1881218633 , bytecode index = 
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

void bridge_java_util_HashMap_transfer___3Ljava_util_HashMap_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_transfer___3Ljava_util_HashMap_00024Entry_2_V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 1
void func_java_util_HashMap_putAll__Ljava_util_Map_2_V(JThreadRuntime *runtime, struct java_util_Map* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1880, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 242 , L1429133319 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 242;
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
    //  line no 243 , L963768574 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  != 0) goto L596905862;
    ; 
    //  line no 244 , L1712666248 , bytecode index = 
    method_exit(runtime);
    return;
    L596905862:
    //  line no 247 , L596905862 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap threshold I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->threshold_7;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1163404461;
    ; 
    //  line no 248 , L1931008760 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap loadFactor F
    stack[sp - 1].f = ((struct java_util_HashMap*)rstack[sp - 1].obj)->loadFactor_8;
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
    //  line no 249 , L1894978338 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  ldc 
    stack[sp++].i = 0x40000000;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1058921154;
    ; 
    //  line no 250 , L1004862656 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0x40000000;
    local[3].i = stack[--sp].i;
    L1058921154:
    //  line no 251 , L1058921154 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1058921154
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    L236858974:
    //  line no 252 , L236858974 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1713129148;
    ; 
    //  line no 253 , L931548023 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L236858974;
    L1713129148:
    //  line no 254 , L1713129148 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1713129148
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1163404461;
    ; 
    //  line no 255 , L731427771 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual java/util/HashMap.resize(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 27, 8);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1163404461:
    //  line no 258 , L1163404461 , bytecode index = 
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
    L1410008136:
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
    if(stack[--sp].i  == 0) goto L1353093587;
    ; 
    //  line no 259 , L1434367299 , bytecode index = 
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
    //  line no 260 , L999674172 , bytecode index = 
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
    // invokevirtual java/util/HashMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 261 , L925936450 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1410008136;
    L1353093587:
    //  line no 262 , L1353093587 , bytecode index = 
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

void bridge_java_util_HashMap_putAll__Ljava_util_Map_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_putAll__Ljava_util_Map_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_HashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1881, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 266 , L1929969663 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 266;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.removeEntryForKey(Ljava/lang/Object;)Ljava/util/HashMap$Entry;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_HashMap_00024Entry* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 12);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 267 , L1711393939 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L1423507882;
    // aconst null
    rstack[sp++].obj = NULL;
    goto L1668376627;
    L1423507882:
    rstack[sp++].obj = rlocal[2].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    L1668376627:
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

void bridge_java_util_HashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 8
// stack: 3
// args: 1
struct java_util_HashMap_00024Entry* func_java_util_HashMap_removeEntryForKey__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1882, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 272 , L1069531012 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 272;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/HashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 273 , L603401608 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic java/util/HashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_HashMap_hash__Ljava_lang_Object_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 274 , L1269819701 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1269819701
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/HashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 275 , L142302025 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L142302025 bc index = 
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
    //  line no 276 , L1249547869 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rlocal[6].obj = rstack[--sp].obj;
    L1350269431:
    //  line no 278 , L1350269431 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  == NULL) goto L1688851596;
    ; 
    //  line no 279 , L911895107 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 280 , L680319659 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->hash_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L598977164;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // invokestatic java/util/HashMap.eq(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_eq__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L598977164;
    ; 
    //  line no 281 , L160696258 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/HashMap modCount I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/HashMap modCount I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->modCount_9 = stack[sp + 1].i;
    ; 
    //  line no 282 , L1819897025 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/HashMap size I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/HashMap size I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    ; 
    //  line no 283 , L577682023 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[6].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L481792876;
    ; 
    //  line no 284 , L892611887 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[7].obj;
    // arrstore __refer  ,  L892611887 bc index = 
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
    goto L311185452;
    L481792876:
    //  line no 286 , L481792876 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // putfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->next_3 = rstack[sp + 1].obj;
    L311185452:
    //  line no 287 , L311185452 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashMap$Entry.recordRemoval(Ljava/util/HashMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_HashMap*) = find_method(__ins->vm_table, 11, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 288 , L1164344728 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L598977164:
    //  line no 290 , L598977164 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 291 , L1709882027 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 292 , L1898167916 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1350269431;
    L1688851596:
    //  line no 294 , L1688851596 , bytecode index = 
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

void bridge_java_util_HashMap_removeEntryForKey__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_removeEntryForKey__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(runtime, ins);
}


// locals: 9
// stack: 3
// args: 1
struct java_util_HashMap_00024Entry* func_java_util_HashMap_removeMapping__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1883, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 299 , L2007149130 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 299;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map$Entry
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 797);
    if(stack[--sp].i  != 0) goto L1202547191;
    ; 
    //  line no 300 , L730955696 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1202547191:
    //  line no 302 , L1202547191 , bytecode index = 
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
    //  line no 303 , L1582330795 , bytecode index = 
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
    // invokestatic java/util/HashMap.maskNull(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_HashMap_maskNull__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 304 , L1010983633 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/HashMap.hash(Ljava/lang/Object;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_HashMap_hash__Ljava_lang_Object_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 305 , L269244031 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L269244031
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/HashMap.indexFor(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_HashMap_indexFor__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 306 , L817944369 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L817944369 bc index = 
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
    //  line no 307 , L1833973673 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rlocal[7].obj = rstack[--sp].obj;
    L1110148152:
    //  line no 309 , L1110148152 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    if(rstack[--sp].obj  == NULL) goto L812031404;
    ; 
    //  line no 310 , L103394766 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 311 , L1781018589 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getfield java/util/HashMap$Entry hash I
    stack[sp - 1].i = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->hash_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1950117092;
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/HashMap$Entry.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 11, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1950117092;
    ; 
    //  line no 312 , L1882395698 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/HashMap modCount I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/HashMap modCount I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->modCount_9 = stack[sp + 1].i;
    ; 
    //  line no 313 , L1002410023 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/HashMap size I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/HashMap size I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    ; 
    //  line no 314 , L281151050 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[7].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L118363130;
    ; 
    //  line no 315 , L1878267309 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[8].obj;
    // arrstore __refer  ,  L1878267309 bc index = 
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
    goto L671981276;
    L118363130:
    //  line no 317 , L118363130 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[8].obj;
    // putfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap_00024Entry*)rstack[sp + 0].obj)->next_3 = rstack[sp + 1].obj;
    L671981276:
    //  line no 318 , L671981276 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashMap$Entry.recordRemoval(Ljava/util/HashMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_HashMap*) = find_method(__ins->vm_table, 11, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 319 , L687685057 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1950117092:
    //  line no 321 , L1950117092 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 322 , L1604020967 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 323 , L277697988 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1110148152;
    L812031404:
    //  line no 325 , L812031404 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
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

void bridge_java_util_HashMap_removeMapping__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_removeMapping__Ljava_lang_Object_2_Ljava_util_HashMap_00024Entry_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 0
void func_java_util_HashMap_clear___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1884, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 330 , L367066629 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 330;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/HashMap modCount I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/HashMap modCount I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->modCount_9 = stack[sp + 1].i;
    ; 
    //  line no 331 , L287859212 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 332 , L1810970264 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L697463019:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L697463019
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L999334666;
    ; 
    //  line no 333 , L1778028150 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1778028150 bc index = 
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
    //  line no 332 , L199041063 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L697463019;
    L999334666:
    //  line no 334 , L999334666 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/HashMap size I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    ; 
    //  line no 335 , L837946527 , bytecode index = 
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

void bridge_java_util_HashMap_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_clear___V(runtime, ins);
}


// locals: 5
// stack: 2
// args: 1
s8 func_java_util_HashMap_containsValue__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1885, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 339 , L854640632 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 339;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1347294617;
    ; 
    //  line no 340 , L1912172027 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/HashMap.containsNullValue()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_util_HashMap_containsNullValue___Z(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1347294617:
    //  line no 342 , L1347294617 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 343 , L1562090557 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1776312161:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1776312161
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1235381529;
    ; 
    //  line no 344 , L1930319715 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1930319715 bc index = 
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
    L1920321355:
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L419792179;
    ; 
    //  line no 345 , L1125509551 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
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
    if(stack[--sp].i  == 0) goto L1109461985;
    ; 
    //  line no 346 , L515036017 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1109461985:
    //  line no 344 , L1109461985 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1920321355;
    L419792179:
    //  line no 343 , L419792179 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1776312161;
    L1235381529:
    //  line no 347 , L1235381529 , bytecode index = 
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

void bridge_java_util_HashMap_containsValue__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_containsValue__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 4
// stack: 2
// args: 0
s8 func_java_util_HashMap_containsNullValue___Z(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1886, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 352 , L1201614274 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 352;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 353 , L229329107 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L92941132:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L92941132
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1901700557;
    ; 
    //  line no 354 , L1335256857 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1335256857 bc index = 
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
    L413946856:
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1286134778;
    ; 
    //  line no 355 , L1885562991 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/util/HashMap$Entry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L204568533;
    ; 
    //  line no 356 , L1995986600 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L204568533:
    //  line no 354 , L204568533 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L413946856;
    L1286134778:
    //  line no 353 , L1286134778 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L92941132;
    L1901700557:
    //  line no 357 , L1901700557 , bytecode index = 
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

void bridge_java_util_HashMap_containsNullValue___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_containsNullValue___Z(runtime, ins);
}


// locals: 6
// stack: 8
// args: 4
void func_java_util_HashMap_addEntry__ILjava_lang_Object_2Ljava_lang_Object_2I_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1, struct java_lang_Object* p2, s32 p3){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1887, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    ; 
    //  line no 424 , L390994793 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 424;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L390994793 bc index = 
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
    //  line no 425 , L273041802 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // new java/util/HashMap$Entry
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 11);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokespecial java/util/HashMap$Entry.<init>(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/HashMap$Entry;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L273041802 bc index = 
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
    //  line no 426 , L608108604 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/HashMap size I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/HashMap size I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap threshold I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->threshold_7;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1909141817;
    ; 
    //  line no 427 , L372898106 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L372898106
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/HashMap.resize(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 27, 8);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1909141817:
    //  line no 428 , L1909141817 , bytecode index = 
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

void bridge_java_util_HashMap_addEntry__ILjava_lang_Object_2Ljava_lang_Object_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_addEntry__ILjava_lang_Object_2Ljava_lang_Object_2I_V(runtime, ins, para[0].obj, para[1].obj, para[2].i);
}


// locals: 6
// stack: 8
// args: 4
void func_java_util_HashMap_createEntry__ILjava_lang_Object_2Ljava_lang_Object_2I_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1, struct java_lang_Object* p2, s32 p3){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1888, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    ; 
    //  line no 432 , L1760763936 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 432;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1760763936 bc index = 
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
    //  line no 433 , L1083803390 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    stack[sp++].i = local[4].i;
    // new java/util/HashMap$Entry
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 11);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokespecial java/util/HashMap$Entry.<init>(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/HashMap$Entry;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1083803390 bc index = 
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
    //  line no 434 , L430983166 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/HashMap size I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/HashMap size I
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->size_6 = stack[sp + 1].i;
    ; 
    //  line no 435 , L576261694 , bytecode index = 
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

void bridge_java_util_HashMap_createEntry__ILjava_lang_Object_2Ljava_lang_Object_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_createEntry__ILjava_lang_Object_2Ljava_lang_Object_2I_V(runtime, ins, para[0].obj, para[1].obj, para[2].i);
}


// locals: 1
// stack: 4
// args: 0
struct java_util_Iterator* func_java_util_HashMap_newKeyIterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1889, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 510 , L1601702534 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 510;
    // new java/util/HashMap$KeyIterator
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 204);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/HashMap$KeyIterator.<init>(Ljava/util/HashMap;Ljava/util/HashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024KeyIterator__init___Ljava_util_HashMap_2Ljava_util_HashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
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

void bridge_java_util_HashMap_newKeyIterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_newKeyIterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
struct java_util_Iterator* func_java_util_HashMap_newValueIterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1890, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 514 , L783218541 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 514;
    // new java/util/HashMap$ValueIterator
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 85);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/HashMap$ValueIterator.<init>(Ljava/util/HashMap;Ljava/util/HashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024ValueIterator__init___Ljava_util_HashMap_2Ljava_util_HashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
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

void bridge_java_util_HashMap_newValueIterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_newValueIterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
struct java_util_Iterator* func_java_util_HashMap_newEntryIterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1891, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 518 , L880908391 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 518;
    // new java/util/HashMap$EntryIterator
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 82);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/HashMap$EntryIterator.<init>(Ljava/util/HashMap;Ljava/util/HashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024EntryIterator__init___Ljava_util_HashMap_2Ljava_util_HashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
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

void bridge_java_util_HashMap_newEntryIterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_newEntryIterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
struct java_util_Set* func_java_util_HashMap_keySet___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1892, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 526 , L1221433900 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 526;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap keySet Ljava/util/Set;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->keySet_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 527 , L1998397435 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1332208607;
    rstack[sp++].obj = rlocal[1].obj;
    goto L1449664175;
    L1332208607:
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap$KeySet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 298);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/HashMap$KeySet.<init>(Ljava/util/HashMap;Ljava/util/HashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024KeySet__init___Ljava_util_HashMap_2Ljava_util_HashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    // putfield java/util/HashMap keySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->keySet_0 = rstack[sp + 1].obj;
    L1449664175:
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

void bridge_java_util_HashMap_keySet___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_keySet___Ljava_util_Set_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
struct java_util_Collection* func_java_util_HashMap_values___Ljava_util_Collection_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1893, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 554 , L1831717330 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 554;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap values Ljava/util/Collection;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 555 , L497333939 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L187649742;
    rstack[sp++].obj = rlocal[1].obj;
    goto L2115983437;
    L187649742:
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap$Values
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 172);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/HashMap$Values.<init>(Ljava/util/HashMap;Ljava/util/HashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024Values__init___Ljava_util_HashMap_2Ljava_util_HashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    // putfield java/util/HashMap values Ljava/util/Collection;
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->values_1 = rstack[sp + 1].obj;
    L2115983437:
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

void bridge_java_util_HashMap_values___Ljava_util_Collection_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_values___Ljava_util_Collection_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
struct java_util_Set* func_java_util_HashMap_entrySet___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1894, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 578 , L1171672359 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 578;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap entrySet Ljava/util/Set;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->entrySet_11;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 579 , L889074285 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L816302479;
    rstack[sp++].obj = rlocal[1].obj;
    goto L909516251;
    L816302479:
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap$EntrySet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 299);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/HashMap$EntrySet.<init>(Ljava/util/HashMap;Ljava/util/HashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024EntrySet__init___Ljava_util_HashMap_2Ljava_util_HashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    // putfield java/util/HashMap entrySet Ljava/util/Set;
    sp -= 2;
    ((struct java_util_HashMap*)rstack[sp + 0].obj)->entrySet_11 = rstack[sp + 1].obj;
    L909516251:
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

void bridge_java_util_HashMap_entrySet___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_entrySet___Ljava_util_Set_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_HashMap_capacity___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1895, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 609 , L81194567 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 609;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L81194567
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
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

void bridge_java_util_HashMap_capacity___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_capacity___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
f32 func_java_util_HashMap_loadFactor___F(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 613 , L208513211 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap loadFactor F
    stack[sp - 1].f = ((struct java_util_HashMap*)rstack[sp - 1].obj)->loadFactor_8;
    sp += 0;
    return stack[sp - 1].f;
    ; 
}

void bridge_java_util_HashMap_loadFactor___F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_util_HashMap_loadFactor___F(runtime, ins);
}


// locals: 0
// stack: 2
// args: 1
void func_java_util_HashMap__clinit____V(JThreadRuntime *runtime, struct java_util_HashMap* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1897, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 79 , L146346292 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 79;
    // new java/lang/Object
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 5);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    // putstatic java/util/HashMap NULL_KEY Ljava/lang/Object;
    sp -= 1;
    static_var_java_util_HashMap.NULL_1KEY_10 = rstack[sp].obj;
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

void bridge_java_util_HashMap__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap__clinit____V(runtime, para[0].obj);
}


