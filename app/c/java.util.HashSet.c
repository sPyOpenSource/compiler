// CLASS: java/util/HashSet extends java/util/AbstractSet
#include "metadata.h"


// generation
// globals
//struct java_util_HashSet_static {struct java_lang_Object* PRESENT_1;  };
struct java_util_HashSet_static static_var_java_util_HashSet = {NULL};


__refer arr_vmtable_java_util_HashSet_from_java_util_HashSet[] = {
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_HashSet_size___I,  //1
    func_java_util_HashSet_isEmpty___Z,  //2
    func_java_util_HashSet_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_HashSet_add__Ljava_lang_Object_2_Z,  //4
    func_java_util_HashSet_remove__Ljava_lang_Object_2_Z,  //5
    func_java_util_HashSet_clear___V  //6
};
__refer arr_vmtable_java_util_HashSet_from_java_util_AbstractSet[] = {
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //0
    func_java_util_AbstractSet_hashCode___I,  //1
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z  //2
};
__refer arr_vmtable_java_util_HashSet_from_java_util_AbstractCollection[] = {
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_HashSet_size___I,  //1
    func_java_util_HashSet_isEmpty___Z,  //2
    func_java_util_HashSet_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_AbstractCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_HashSet_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_HashSet_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_HashSet_clear___V,  //12
    func_java_util_AbstractCollection_toString___Ljava_lang_String_2  //13
};
__refer arr_vmtable_java_util_HashSet_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_HashSet_from_java_util_Collection[] = {
    func_java_util_HashSet_size___I,  //0
    func_java_util_HashSet_isEmpty___Z,  //1
    func_java_util_HashSet_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_AbstractCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_HashSet_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_HashSet_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_HashSet_clear___V,  //12
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_AbstractSet_hashCode___I  //14
};
__refer arr_vmtable_java_util_HashSet_from_java_lang_Iterable[] = {
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2  //0
};
__refer arr_vmtable_java_util_HashSet_from_java_util_Set[] = {
    func_java_util_HashSet_size___I,  //0
    func_java_util_HashSet_isEmpty___Z,  //1
    func_java_util_HashSet_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_AbstractCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_HashSet_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_HashSet_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_HashSet_clear___V,  //12
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_AbstractSet_hashCode___I  //14
};
VMTable vmtable_java_util_HashSet[] = {
    {88, 7, arr_vmtable_java_util_HashSet_from_java_util_HashSet}, //0
    {89, 3, arr_vmtable_java_util_HashSet_from_java_util_AbstractSet}, //1
    {90, 14, arr_vmtable_java_util_HashSet_from_java_util_AbstractCollection}, //2
    {5, 10, arr_vmtable_java_util_HashSet_from_java_lang_Object}, //3
    {45, 15, arr_vmtable_java_util_HashSet_from_java_util_Collection}, //4
    {91, 1, arr_vmtable_java_util_HashSet_from_java_lang_Iterable}, //5
    {86, 15, arr_vmtable_java_util_HashSet_from_java_util_Set}, //6
};



// locals: 1
// stack: 3
// args: 0
void func_java_util_HashSet__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 517, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 13 , L1541857308 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractSet__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 14 , L479397964 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 27);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/HashMap.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/HashSet map Ljava/util/HashMap;
    sp -= 2;
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_0 = rstack[sp + 1].obj;
    ; 
    //  line no 15 , L1861781750 , bytecode index = 
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

void bridge_java_util_HashSet__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet__init____V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_java_util_HashSet__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 518, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 17 , L2095303566 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 17;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractSet__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 18 , L2025221430 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 27);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    // invokespecial java/util/HashMap.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/HashSet map Ljava/util/HashMap;
    sp -= 2;
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_0 = rstack[sp + 1].obj;
    ; 
    //  line no 19 , L1378084334 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashSet.addAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 86, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 20 , L200224114 , bytecode index = 
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

void bridge_java_util_HashSet__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet__init___Ljava_util_Collection_2_V(runtime, ins);
}


// locals: 3
// stack: 5
// args: 2
void func_java_util_HashSet__init___IF_V(JThreadRuntime *runtime, s32 p0, f32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 519, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].f = p1;
    ; 
    //  line no 22 , L581318631 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 22;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractSet__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 23 , L1877453512 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 27);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    stack[sp++].f = local[2].f;
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
    // putfield java/util/HashSet map Ljava/util/HashMap;
    sp -= 2;
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_0 = rstack[sp + 1].obj;
    ; 
    //  line no 24 , L487694075 , bytecode index = 
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

void bridge_java_util_HashSet__init___IF_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet__init___IF_V(runtime, ins, para[0].f);
}


// locals: 2
// stack: 4
// args: 1
void func_java_util_HashSet__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 520, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 26 , L1989184704 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 26;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractSet__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 27 , L611572016 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 27);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    // invokespecial java/util/HashMap.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/HashSet map Ljava/util/HashMap;
    sp -= 2;
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_0 = rstack[sp + 1].obj;
    ; 
    //  line no 28 , L889486595 , bytecode index = 
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

void bridge_java_util_HashSet__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet__init___I_V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 3
void func_java_util_HashSet__init___IFZ_V(JThreadRuntime *runtime, s32 p0, f32 p1, s8 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 521, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].f = p1;
    local[2].i = p2;
    ; 
    //  line no 30 , L1990160809 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 30;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractSet__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 31 , L1285524499 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/LinkedHashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 87);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    stack[sp++].f = local[2].f;
    // invokespecial java/util/LinkedHashMap.<init>(IF)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_LinkedHashMap__init___IF_V(runtime, stack[sp + 0].i, stack[sp + 1].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/HashSet map Ljava/util/HashMap;
    sp -= 2;
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_0 = rstack[sp + 1].obj;
    ; 
    //  line no 32 , L1524960486 , bytecode index = 
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

void bridge_java_util_HashSet__init___IFZ_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet__init___IFZ_V(runtime, ins, para[0].f, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Iterator* func_java_util_HashSet_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 522, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 35 , L199640888 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 35;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_0;
    sp += 0;
    // invokevirtual java/util/HashMap.keySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 27, 21);
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

void bridge_java_util_HashSet_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashSet_iterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_HashSet_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 523, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 39 , L1238959340 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 39;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_0;
    sp += 0;
    // invokevirtual java/util/HashMap.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 27, 1);
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

void bridge_java_util_HashSet_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashSet_size___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_HashSet_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 524, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 43 , L1030228826 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_0;
    sp += 0;
    // invokevirtual java/util/HashMap.isEmpty()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 27, 2);
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

void bridge_java_util_HashSet_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashSet_isEmpty___Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_HashSet_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 525, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 47 , L1243806178 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 47;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.containsKey(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 4);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_HashSet_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashSet_contains__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_java_util_HashSet_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 526, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 51 , L1099855928 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 51;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getstatic java/util/HashSet PRESENT Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_HashSet.PRESENT_1;
    sp += 1;
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
    if(rstack[--sp].obj  != NULL) goto L1629687658;
    // iconst_1
    stack[sp++].i = 1;
    goto L1007880005;
    L1629687658:
    // iconst_0
    stack[sp++].i = 0;
    L1007880005:
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

void bridge_java_util_HashSet_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashSet_add__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_HashSet_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 527, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 55 , L1043208434 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 55;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.remove(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 11);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic java/util/HashSet PRESENT Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_HashSet.PRESENT_1;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1192171522;
    // iconst_1
    stack[sp++].i = 1;
    goto L1661081225;
    L1192171522:
    // iconst_0
    stack[sp++].i = 0;
    L1661081225:
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

void bridge_java_util_HashSet_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashSet_remove__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_util_HashSet_clear___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 528, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 59 , L1049817027 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 59;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_0;
    sp += 0;
    // invokevirtual java/util/HashMap.clear()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 27, 14);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 60 , L23211803 , bytecode index = 
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

void bridge_java_util_HashSet_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet_clear___V(runtime, ins);
}


// locals: 0
// stack: 2
// args: 1
void func_java_util_HashSet__clinit____V(JThreadRuntime *runtime, struct java_util_HashSet* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 529, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 11 , L776700275 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 11;
    // new java/lang/Object
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 5);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    // putstatic java/util/HashSet PRESENT Ljava/lang/Object;
    sp -= 1;
    static_var_java_util_HashSet.PRESENT_1 = rstack[sp].obj;
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

void bridge_java_util_HashSet__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet__clinit____V(runtime, para[0].obj);
}


