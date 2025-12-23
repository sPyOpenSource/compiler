// CLASS: java/util/Hashtable extends java/util/Dictionary
#include "metadata.h"


// generation
// globals
//struct java_util_Hashtable_static {};



__refer arr_vmtable_java_util_Hashtable_from_java_util_Hashtable[] = {
    func_java_util_Hashtable_rehash___V,  //0
    func_java_util_Hashtable_toString___Ljava_lang_String_2,  //1
    func_java_util_Hashtable_clear___V,  //2
    func_java_util_Hashtable_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //3
    func_java_util_Hashtable_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_Hashtable_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //5
    func_java_util_Hashtable_keys___Ljava_util_Enumeration_2,  //6
    func_java_util_Hashtable_elements___Ljava_util_Enumeration_2,  //7
    func_java_util_Hashtable_size___I,  //8
    func_java_util_Hashtable_isEmpty___Z,  //9
    func_java_util_Hashtable_containsKey__Ljava_lang_Object_2_Z,  //10
    func_java_util_Hashtable_contains__Ljava_lang_Object_2_Z  //11
};
__refer arr_vmtable_java_util_Hashtable_from_java_util_Dictionary[] = {
    func_java_util_Hashtable_elements___Ljava_util_Enumeration_2,  //0
    func_java_util_Hashtable_get__Ljava_lang_Object_2_Ljava_lang_Object_2,  //1
    func_java_util_Hashtable_isEmpty___Z,  //2
    func_java_util_Hashtable_keys___Ljava_util_Enumeration_2,  //3
    func_java_util_Hashtable_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_Hashtable_remove__Ljava_lang_Object_2_Ljava_lang_Object_2,  //5
    func_java_util_Hashtable_size___I  //6
};
__refer arr_vmtable_java_util_Hashtable_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_util_Hashtable_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_util_Hashtable_from_java_lang_Cloneable[] = {
    NULL
};
VMTable vmtable_java_util_Hashtable[] = {
    {65, 12, arr_vmtable_java_util_Hashtable_from_java_util_Hashtable}, //0
    {68, 7, arr_vmtable_java_util_Hashtable_from_java_util_Dictionary}, //1
    {10, 11, arr_vmtable_java_util_Hashtable_from_java_lang_Object}, //2
    {69, 0, arr_vmtable_java_util_Hashtable_from_java_lang_Cloneable}, //3
};



// locals: 4
// stack: 4
// args: 0
void func_java_util_Hashtable_rehash___V(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 198, &rstack[0], &rlocal[0], &sp);
    L1720339:
    //  line no 68 , L1720339 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 68;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable size I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->size_5;
    sp += 0;
    //  bipush 100
    stack[sp++].i = 100;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable load I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->load_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L460201727;
    ; 
    //  line no 69 , L812586739 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    // putfield java/util/Hashtable capacity I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->capacity_2 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1720339;
    L460201727:
    //  line no 70 , L460201727 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/Hashtable mask I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->mask_4 = stack[sp + 1].i;
    ; 
    //  line no 72 , L1881901842 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 73 , L585324508 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 74 , L1234250905 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(203));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/Hashtable keys [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->keys_0 = rstack[sp + 1].obj;
    ; 
    //  line no 75 , L16868310 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(203));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/Hashtable values [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->values_1 = rstack[sp + 1].obj;
    ; 
    //  line no 76 , L769530879 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/Hashtable size I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->size_5 = stack[sp + 1].i;
    ; 
    //  line no 78 , L364639279 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1427040229:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1427040229
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1604002113;
    ; 
    //  line no 79 , L38262958 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L38262958 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L1217875525;
    ; 
    //  line no 80 , L1787079037 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1787079037 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1787079037 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/util/Hashtable.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 65, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1217875525:
    //  line no 78 , L1217875525 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1427040229;
    L1604002113:
    //  line no 82 , L1604002113 , bytecode index = 
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

void bridge_java_util_Hashtable_rehash___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Hashtable_rehash___V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 0
struct java_lang_String* func_java_util_Hashtable_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 199, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 89 , L1353530305 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 89;
    // new java/lang/StringBuffer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 66);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 460);
    // invokespecial java/lang/StringBuffer.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuffer__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 90 , L574268151 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 92 , L1832532108 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L423583818:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    // arraylength  label  L423583818
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L552936351;
    ; 
    //  line no 93 , L1471086700 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1471086700 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L1810742349;
    ; 
    //  line no 95 , L154319946 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  == 0) goto L13803304;
    ; 
    //  line no 96 , L802243390 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    goto L702061917;
    L13803304:
    //  line no 98 , L13803304 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 461);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 66, 12);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L702061917:
    //  line no 99 , L702061917 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L702061917 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/String.valueOf(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 66, 12);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 100 , L890545344 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 462);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 66, 12);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 101 , L556488341 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L556488341 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/String.valueOf(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 66, 12);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1810742349:
    //  line no 92 , L1810742349 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L423583818;
    L552936351:
    //  line no 104 , L552936351 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 463);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 66, 12);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 106 , L71706941 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/StringBuffer.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 3);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime);
        jthread_unlock(runtime, __ins);
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

void bridge_java_util_Hashtable_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Hashtable_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 6
// args: 0
void func_java_util_Hashtable_clear___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 200, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 128 , L2033968586 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 128;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L48208774:
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    // arraylength  label  L48208774
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L929383713;
    ; 
    //  line no 129 , L363509958 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // dup x2
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp - 3].j; 
    stack[sp - 3].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp - 3].obj; 
    rstack[sp - 3].obj = rstack[sp + 0].obj; 
    ++sp;
    // arrstore __refer  ,  L363509958 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    // arrstore __refer  ,  L363509958 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 128 , L865667596 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L48208774;
    L929383713:
    //  line no 130 , L929383713 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/Hashtable size I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->size_5 = stack[sp + 1].i;
    ; 
    //  line no 131 , L1306834002 , bytecode index = 
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

void bridge_java_util_Hashtable_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Hashtable_clear___V(runtime, ins);
}


// locals: 8
// stack: 4
// args: 1
struct java_lang_Object* func_java_util_Hashtable_get__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 201, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 136 , L270095066 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 136;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1806431167;
    ; 
    //  line no 137 , L50699452 , bytecode index = 
    // new java/lang/NullPointerException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 1);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/NullPointerException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_NullPointerException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L50699452 in labeltable is :L50699452
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 137;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1806431167:
    //  line no 139 , L1806431167 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 141 , L2125062626 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L620557167:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L285133380;
    ; 
    //  line no 143 , L1068586139 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 145 , L245765246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L245765246 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L1292040526;
    ; 
    //  line no 146 , L726181440 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L726181440 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L510147134;
    ; 
    //  line no 148 , L542365801 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L542365801 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1292040526:
    //  line no 155 , L1292040526 , bytecode index = 
    stack[sp++].i = local[4].i;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 156 , L2051120548 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 158 , L341138954 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    L1270038388:
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1973233403;
    ; 
    //  line no 160 , L63387985 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 162 , L1029472813 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1029472813 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L1866875501;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1029472813 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 163 , L1936722816 , bytecode index = 
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1237825806;
    ; 
    //  line no 164 , L282265585 , bytecode index = 
    goto L1866875501;
    L1237825806:
    //  line no 166 , L1237825806 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1237825806 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // arrstore __refer  ,  L1237825806 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 167 , L1297836716 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1297836716 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // arrstore __refer  ,  L1297836716 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 169 , L1048855692 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1048855692 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 170 , L1249875355 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1249875355 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 172 , L1117519786 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1117519786 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1866875501:
    //  line no 158 , L1866875501 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1270038388;
    L1973233403:
    //  line no 175 , L1973233403 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L510147134:
    //  line no 141 , L510147134 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L620557167;
    L285133380:
    //  line no 178 , L285133380 , bytecode index = 
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

void bridge_java_util_Hashtable_get__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Hashtable_get__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 7
// stack: 3
// args: 2
struct java_lang_Object* func_java_util_Hashtable_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 202, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 184 , L1212116343 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 184;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable size I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->size_5;
    sp += 0;
    //  bipush 100
    stack[sp++].i = 100;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable load I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->load_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2119891622;
    ; 
    //  line no 185 , L1671507048 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Hashtable.rehash()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 65, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2119891622:
    //  line no 187 , L2119891622 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L687059528;
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L454305524;
    L687059528:
    //  line no 188 , L687059528 , bytecode index = 
    // new java/lang/NullPointerException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 1);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/NullPointerException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_NullPointerException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L687059528 in labeltable is :L687059528
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 188;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L454305524:
    //  line no 196 , L454305524 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 198 , L850551034 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1478150312:
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1833848849;
    ; 
    //  line no 200 , L1473771722 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 202 , L1992550266 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1992550266 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L2014461570;
    ; 
    //  line no 203 , L1740846921 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1740846921 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L263885523;
    ; 
    //  line no 204 , L1714113641 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1714113641 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 206 , L262445056 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L262445056 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 207 , L1898155970 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arrstore __refer  ,  L1898155970 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 209 , L710190911 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2014461570:
    //  line no 215 , L2014461570 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L2014461570 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 216 , L379645464 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arrstore __refer  ,  L379645464 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 218 , L1030684756 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Hashtable size I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->size_5;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Hashtable size I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->size_5 = stack[sp + 1].i;
    ; 
    //  line no 220 , L1348453796 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    L1606286799:
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1325144078;
    ; 
    //  line no 222 , L198499365 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 224 , L621300254 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L621300254 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L359368949;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L621300254 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 225 , L1006227006 , bytecode index = 
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L375457936;
    ; 
    //  line no 226 , L1910438136 , bytecode index = 
    goto L359368949;
    L375457936:
    //  line no 228 , L375457936 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L375457936 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 230 , L943454742 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[5].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L943454742 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 231 , L1296456465 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1296456465 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 233 , L1409154977 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Hashtable size I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->size_5;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/Hashtable size I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->size_5 = stack[sp + 1].i;
    ; 
    //  line no 235 , L1432536094 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L359368949:
    //  line no 220 , L359368949 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1606286799;
    L1325144078:
    //  line no 238 , L1325144078 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L263885523:
    //  line no 198 , L263885523 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1478150312;
    L1833848849:
    //  line no 241 , L1833848849 , bytecode index = 
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

void bridge_java_util_Hashtable_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Hashtable_put__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 6
// stack: 3
// args: 1
struct java_lang_Object* func_java_util_Hashtable_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 203, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 247 , L1292838001 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 247;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 249 , L1899223686 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L842179210:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1944201789;
    ; 
    //  line no 251 , L1207608476 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 253 , L686989583 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L686989583 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L259219561;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L686989583 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 254 , L1839337592 , bytecode index = 
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L2146338580;
    ; 
    //  line no 255 , L1110031167 , bytecode index = 
    goto L259219561;
    L2146338580:
    //  line no 257 , L2146338580 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L2146338580 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 259 , L1456339771 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1456339771 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 260 , L730923082 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L730923082 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 262 , L550302731 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Hashtable size I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->size_5;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/Hashtable size I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->size_5 = stack[sp + 1].i;
    ; 
    //  line no 264 , L800281454 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L259219561:
    //  line no 249 , L259219561 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L842179210;
    L1944201789:
    //  line no 267 , L1944201789 , bytecode index = 
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

void bridge_java_util_Hashtable_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Hashtable_remove__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_util_Enumeration* func_java_util_Hashtable_keys___Ljava_util_Enumeration_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 204, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 273 , L900636745 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 273;
    // new java/util/HashtableEnumeration
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 67);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    // invokespecial java/util/HashtableEnumeration.<init>([Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_HashtableEnumeration__init____3Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_Hashtable_keys___Ljava_util_Enumeration_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Hashtable_keys___Ljava_util_Enumeration_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_util_Enumeration* func_java_util_Hashtable_elements___Ljava_util_Enumeration_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 205, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 279 , L1201173334 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 279;
    // new java/util/HashtableEnumeration
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 67);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    // invokespecial java/util/HashtableEnumeration.<init>([Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_HashtableEnumeration__init____3Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_Hashtable_elements___Ljava_util_Enumeration_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Hashtable_elements___Ljava_util_Enumeration_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_Hashtable_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 285 , L1652807864 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable size I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->size_5;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_util_Hashtable_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Hashtable_size___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_Hashtable_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 207, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 291 , L1063980005 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 291;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable size I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->size_5;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1628998132;
    // iconst_1
    stack[sp++].i = 1;
    goto L497208183;
    L1628998132:
    // iconst_0
    stack[sp++].i = 0;
    L497208183:
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

void bridge_java_util_Hashtable_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Hashtable_isEmpty___Z(runtime, ins);
}


// locals: 5
// stack: 2
// args: 1
s8 func_java_util_Hashtable_containsKey__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 208, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 296 , L790722099 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 296;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L173214986;
    ; 
    //  line no 297 , L27362884 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L173214986:
    //  line no 299 , L173214986 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 301 , L1523553211 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L2122049087:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1825738663;
    ; 
    //  line no 303 , L1632413663 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable mask I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->mask_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 305 , L1194893830 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1194893830 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L1725165248;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable keys [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->keys_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1194893830 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 306 , L503642634 , bytecode index = 
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1725165248;
    ; 
    //  line no 307 , L452121674 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1725165248:
    //  line no 301 , L1725165248 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2122049087;
    L1825738663:
    //  line no 309 , L1825738663 , bytecode index = 
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

void bridge_java_util_Hashtable_containsKey__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Hashtable_containsKey__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_java_util_Hashtable_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 209, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 314 , L1636050357 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 314;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1483298597;
    ; 
    //  line no 315 , L1412794598 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1483298597:
    //  line no 317 , L1483298597 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L257608605:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1337192014;
    ; 
    //  line no 318 , L1567705314 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1567705314 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L637241618;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable values [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->values_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1567705314 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 319 , L2082781203 , bytecode index = 
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L637241618;
    ; 
    //  line no 320 , L741730375 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L637241618:
    //  line no 317 , L637241618 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L257608605;
    L1337192014:
    //  line no 322 , L1337192014 , bytecode index = 
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

void bridge_java_util_Hashtable_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Hashtable_contains__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_java_util_Hashtable__init___II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 210, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 328 , L35534346 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 328;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/Dictionary.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_Dictionary__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 329 , L1537471098 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield java/util/Hashtable load I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->load_3 = stack[sp + 1].i;
    ; 
    //  line no 330 , L1490509465 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/Hashtable size I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->size_5 = stack[sp + 1].i;
    ; 
    //  line no 331 , L122114483 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/util/Hashtable capacity I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->capacity_2 = stack[sp + 1].i;
    L1947896119:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L812553708;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    // putfield java/util/Hashtable capacity I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->capacity_2 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1947896119;
    L812553708:
    //  line no 332 , L812553708 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(203));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/Hashtable keys [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->keys_0 = rstack[sp + 1].obj;
    ; 
    //  line no 333 , L1387210478 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(203));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/Hashtable values [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->values_1 = rstack[sp + 1].obj;
    ; 
    //  line no 334 , L1876443073 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable capacity I
    stack[sp - 1].i = ((struct java_util_Hashtable*)rstack[sp - 1].obj)->capacity_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/Hashtable mask I
    sp -= 2;
    ((struct java_util_Hashtable*)rstack[sp + 0].obj)->mask_4 = stack[sp + 1].i;
    ; 
    //  line no 335 , L1328238652 , bytecode index = 
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

void bridge_java_util_Hashtable__init___II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Hashtable__init___II_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_Hashtable__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 211, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 339 , L547201549 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 339;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    //  bipush 75
    stack[sp++].i = 75;
    // invokespecial java/util/Hashtable.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_Hashtable__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 340 , L236304360 , bytecode index = 
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

void bridge_java_util_Hashtable__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Hashtable__init___I_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_util_Hashtable__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 212, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 344 , L1670546046 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 344;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // invokespecial java/util/Hashtable.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_Hashtable__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 345 , L785570251 , bytecode index = 
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

void bridge_java_util_Hashtable__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Hashtable__init____V(runtime, ins);
}


