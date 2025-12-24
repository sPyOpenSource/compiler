// CLASS: java/util/HashSet extends java/util/AbstractSet
#include "metadata.h"


// generation
// globals
//struct java_util_HashSet_static {s64 serialVersionUID_2;  };
struct java_util_HashSet_static static_var_java_util_HashSet = {0};


__refer arr_vmtable_java_util_HashSet_from_java_util_HashSet[] = {
    func_java_util_HashSet_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_HashSet_clear___V,  //1
    func_java_util_HashSet_clone___Ljava_lang_Object_2,  //2
    func_java_util_HashSet_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_HashSet_isEmpty___Z,  //4
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //5
    func_java_util_HashSet_remove__Ljava_lang_Object_2_Z,  //6
    func_java_util_HashSet_size___I,  //7
    func_java_util_HashSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2  //8
};
__refer arr_vmtable_java_util_HashSet_from_java_util_AbstractSet[] = {
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //0
    func_java_util_AbstractSet_hashCode___I,  //1
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z  //2
};
__refer arr_vmtable_java_util_HashSet_from_java_util_AbstractCollection[] = {
    func_java_util_AbstractCollection_equals__Ljava_lang_Object_2Ljava_lang_Object_2_Z,  //0
    func_java_util_HashSet_add__Ljava_lang_Object_2_Z,  //1
    func_java_util_HashSet_size___I,  //2
    func_java_util_HashSet_clear___V,  //3
    func_java_util_HashSet_isEmpty___Z,  //4
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //5
    func_java_util_HashSet_contains__Ljava_lang_Object_2_Z,  //6
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //7
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //8
    func_java_util_HashSet_remove__Ljava_lang_Object_2_Z,  //9
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //12
    func_java_util_HashSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2  //13
};
__refer arr_vmtable_java_util_HashSet_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_util_AbstractSet_hashCode___I,  //1
    func_java_util_HashSet_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_util_HashSet_from_java_util_Collection[] = {
    func_java_util_HashSet_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //1
    func_java_util_HashSet_clear___V,  //2
    func_java_util_HashSet_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //4
    func_java_util_HashSet_isEmpty___Z,  //5
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //6
    func_java_util_HashSet_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_HashSet_size___I,  //10
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2  //11
};
__refer arr_vmtable_java_util_HashSet_from_java_lang_Iterable[] = {
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //0
    func_java_lang_Iterable_forEach__Ljava_util_function_Consumer_2_V,  //1
    func_java_lang_Iterable_spliterator___Ljava_util_Spliterator_2  //2
};
__refer arr_vmtable_java_util_HashSet_from_java_util_Set[] = {
    func_java_util_HashSet_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //1
    func_java_util_HashSet_clear___V,  //2
    func_java_util_HashSet_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //4
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //5
    func_java_util_AbstractSet_hashCode___I,  //6
    func_java_util_HashSet_isEmpty___Z,  //7
    func_java_util_HashSet_iterator___Ljava_util_Iterator_2,  //8
    func_java_util_HashSet_remove__Ljava_lang_Object_2_Z,  //9
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_HashSet_size___I,  //12
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2  //13
};
__refer arr_vmtable_java_util_HashSet_from_java_lang_Cloneable[] = {
    NULL
};
__refer arr_vmtable_java_util_HashSet_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_java_util_HashSet[] = {
    {140, 9, arr_vmtable_java_util_HashSet_from_java_util_HashSet}, //0
    {131, 3, arr_vmtable_java_util_HashSet_from_java_util_AbstractSet}, //1
    {132, 14, arr_vmtable_java_util_HashSet_from_java_util_AbstractCollection}, //2
    {10, 11, arr_vmtable_java_util_HashSet_from_java_lang_Object}, //3
    {75, 12, arr_vmtable_java_util_HashSet_from_java_util_Collection}, //4
    {76, 3, arr_vmtable_java_util_HashSet_from_java_lang_Iterable}, //5
    {128, 14, arr_vmtable_java_util_HashSet_from_java_util_Set}, //6
    {69, 0, arr_vmtable_java_util_HashSet_from_java_lang_Cloneable}, //7
    {64, 0, arr_vmtable_java_util_HashSet_from_java_io_Serializable}, //8
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
    StackFrame *__frame = method_enter(runtime, 379, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 66 , L1365767549 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 66;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //  line no 67 , L105579928 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 139);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/HashMap.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_1 = rstack[sp + 1].obj;
    ; 
    //  line no 68 , L418958713 , bytecode index = 
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
// stack: 4
// args: 1
void func_java_util_HashSet__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 380, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 78 , L1342346098 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 78;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //  line no 79 , L238762799 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 139);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_1 = rstack[sp + 1].obj;
    ; 
    //  line no 80 , L1358343316 , bytecode index = 
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


// locals: 3
// stack: 5
// args: 2
void func_java_util_HashSet__init___IF_V(JThreadRuntime *runtime, s32 p0, f32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 381, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].f = p1;
    ; 
    //  line no 91 , L672746064 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 91;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //  line no 92 , L2133655103 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 139);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_1 = rstack[sp + 1].obj;
    ; 
    //  line no 93 , L442199874 , bytecode index = 
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


// locals: 4
// stack: 2
// args: 3
void func_java_util_HashSet__init___IFZ_V(JThreadRuntime *runtime, s32 p0, f32 p1, s8 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 382, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].f = p1;
    local[2].i = p2;
    ; 
    //  line no 107 , L839998248 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 107;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //  line no 108 , L718571091 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/HashSet map Ljava/util/HashMap;
    sp -= 2;
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_1 = rstack[sp + 1].obj;
    ; 
    //  line no 109 , L1807015220 , bytecode index = 
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


// locals: 2
// stack: 3
// args: 1
void func_java_util_HashSet__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 383, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 119 , L1173346575 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 119;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //  line no 120 , L1267149311 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 139);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/HashMap.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_1 = rstack[sp + 1].obj;
    ; 
    //  line no 121 , L102174918 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashSet.addAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 128, 1);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 122 , L52514534 , bytecode index = 
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


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_HashSet_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 384, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 135 , L1242027525 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 135;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.containsKey(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 139, 13);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1948810915;
    ; 
    //  line no 137 , L2104973502 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1948810915:
    //  line no 141 , L1948810915 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/HashSet.internalAdd(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_HashSet_internalAdd__Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 142 , L735937428 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
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


// locals: 1
// stack: 1
// args: 0
void func_java_util_HashSet_clear___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 385, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 151 , L1752461090 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 151;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    // invokevirtual java/util/HashMap.clear()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 139, 8);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 152 , L788625466 , bytecode index = 
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


// locals: 3
// stack: 4
// args: 0
struct java_lang_Object* func_java_util_HashSet_clone___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 386, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 160 , L1095273238 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 160;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashSet.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 140, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 161 , L177140066 , bytecode index = 
    // new java/util/HashSet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 140);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    // getfield java/util/HashMap capacity I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->capacity_10;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    // getfield java/util/HashMap loadFactor F
    stack[sp - 1].f = ((struct java_util_HashMap*)rstack[sp - 1].obj)->loadFactor_12;
    sp += 0;
    // invokespecial java/util/HashSet.<init>(IF)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_HashSet__init___IF_V(runtime, stack[sp + 0].i, stack[sp + 1].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    L787122337:
    //  line no 162 , L787122337 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 129, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2059572982;
    ; 
    //  line no 163 , L2144838275 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 129, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/HashSet.internalAdd(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_HashSet_internalAdd__Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L787122337;
    L2059572982:
    //  line no 164 , L2059572982 , bytecode index = 
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

void bridge_java_util_HashSet_clone___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashSet_clone___Ljava_lang_Object_2(runtime, ins);
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
    StackFrame *__frame = method_enter(runtime, 387, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 174 , L2029680286 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 174;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.containsKey(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 139, 13);
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


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_HashSet_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 388, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 182 , L1423983012 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 182;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    // invokevirtual java/util/HashMap.isEmpty()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 139, 7);
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


// locals: 1
// stack: 1
// args: 0
struct java_util_Iterator* func_java_util_HashSet_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 389, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 191 , L127791068 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 191;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    // invokevirtual java/util/HashMap.keySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 139, 10);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 128, 8);
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


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_HashSet_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 390, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 200 , L1309335839 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 200;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.remove(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 139, 17);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L596470015;
    // iconst_1
    stack[sp++].i = 1;
    goto L1267105885;
    L596470015:
    // iconst_0
    stack[sp++].i = 0;
    L1267105885:
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
s32 func_java_util_HashSet_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 391, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 208 , L1095352419 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 208;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    // invokevirtual java/util/HashMap.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 139, 6);
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


// locals: 2
// stack: 3
// args: 1
void func_java_util_HashSet_internalAdd__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 392, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 223 , L1991278377 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 223;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getstatic java/lang/Boolean TRUE Ljava/lang/Boolean;
    rstack[sp].obj =static_var_java_lang_Boolean.TRUE_1;
    sp += 1;
    // invokevirtual java/util/HashMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 139, 16);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 224 , L951031848 , bytecode index = 
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

void bridge_java_util_HashSet_internalAdd__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet_internalAdd__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
void func_java_util_HashSet_writeObject__Ljava_io_ObjectOutputStream_2_V(JThreadRuntime *runtime, struct java_io_ObjectOutputStream* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 393, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 229 , L1650813924 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 229;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashSet.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 140, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 230 , L400103862 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    // getfield java/util/HashMap capacity I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->capacity_10;
    sp += 0;
    // invokevirtual java/io/ObjectOutputStream.writeInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 77, 19);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 231 , L1408482749 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashSet map Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashSet*)rstack[sp - 1].obj)->map_1;
    sp += 0;
    // getfield java/util/HashMap loadFactor F
    stack[sp - 1].f = ((struct java_util_HashMap*)rstack[sp - 1].obj)->loadFactor_12;
    sp += 0;
    // invokevirtual java/io/ObjectOutputStream.writeFloat(F)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,f32) = find_method(__ins->vm_table, 77, 21);
        __func_p(runtime, stack[sp + 0].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 232 , L873634936 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/HashSet.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 140, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/io/ObjectOutputStream.writeInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 77, 19);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2103569237:
    //  line no 233 , L2103569237 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 129, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L573200870;
    ; 
    //  line no 234 , L1819940427 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 129, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/io/ObjectOutputStream.writeObject(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 77, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2103569237;
    L573200870:
    //  line no 235 , L573200870 , bytecode index = 
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

void bridge_java_util_HashSet_writeObject__Ljava_io_ObjectOutputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet_writeObject__Ljava_io_ObjectOutputStream_2_V(runtime, ins);
}


// locals: 7
// stack: 5
// args: 1
void func_java_util_HashSet_readObject__Ljava_io_ObjectInputStream_2_V(JThreadRuntime *runtime, struct java_io_ObjectInputStream* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 394, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 245 , L1046665075 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 245;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/ObjectInputStream.readInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 246 , L1324829744 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/ObjectInputStream.readFloat()F
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        f32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 2);
        stack[sp].f = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].f = stack[--sp].f;
    ; 
    //  line no 247 , L1921242091 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/ObjectInputStream.readInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 249 , L1670313965 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 139);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[4].i;
    stack[sp++].f = local[5].f;
    // invokespecial java/util/HashMap.<init>(IF)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    ((struct java_util_HashSet*)rstack[sp + 0].obj)->map_1 = rstack[sp + 1].obj;
    ; 
    //  line no 251 , L1275035040 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1058876963:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1399701152;
    ; 
    //  line no 253 , L1204296383 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/ObjectInputStream.readObject()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 254 , L2003463579 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // invokespecial java/util/HashSet.internalAdd(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_HashSet_internalAdd__Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 251 , L567294307 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1058876963;
    L1399701152:
    //  line no 256 , L1399701152 , bytecode index = 
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

void bridge_java_util_HashSet_readObject__Ljava_io_ObjectInputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashSet_readObject__Ljava_io_ObjectInputStream_2_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
JArray * func_java_util_HashSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 395, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 260 , L418179060 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 260;
    // new java/util/UnsupportedOperationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 72);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 209);
    // invokespecial java/util/UnsupportedOperationException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_UnsupportedOperationException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L418179060 in labeltable is :L418179060
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 260;
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

void bridge_java_util_HashSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(runtime, ins);
}


