// CLASS: java/util/TreeSet extends java/util/AbstractSet
#include "metadata.h"


// generation
// globals
//struct java_util_TreeSet_static {struct java_lang_Object* PRESENT_2; s64 serialVersionUID_3;  };
struct java_util_TreeSet_static static_var_java_util_TreeSet = {NULL, 0};


__refer arr_vmtable_java_util_TreeSet_from_java_util_TreeSet[] = {
    func_java_util_TreeSet_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_TreeSet_descendingIterator___Ljava_util_Iterator_2,  //1
    func_java_util_TreeSet_descendingSet___Ljava_util_NavigableSet_2,  //2
    func_java_util_TreeSet_size___I,  //3
    func_java_util_TreeSet_isEmpty___Z,  //4
    func_java_util_TreeSet_contains__Ljava_lang_Object_2_Z,  //5
    func_java_util_TreeSet_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_TreeSet_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_TreeSet_clear___V,  //8
    func_java_util_TreeSet_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_TreeSet_subSet__Ljava_lang_Object_2ZLjava_lang_Object_2Z_Ljava_util_NavigableSet_2,  //10
    func_java_util_TreeSet_headSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2,  //11
    func_java_util_TreeSet_tailSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2,  //12
    func_java_util_TreeSet_subSet__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_util_SortedSet_2,  //13
    func_java_util_TreeSet_headSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2,  //14
    func_java_util_TreeSet_tailSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2,  //15
    func_java_util_TreeSet_comparator___Ljava_util_Comparator_2,  //16
    func_java_util_TreeSet_first___Ljava_lang_Object_2,  //17
    func_java_util_TreeSet_last___Ljava_lang_Object_2,  //18
    func_java_util_TreeSet_lower__Ljava_lang_Object_2_Ljava_lang_Object_2,  //19
    func_java_util_TreeSet_floor__Ljava_lang_Object_2_Ljava_lang_Object_2,  //20
    func_java_util_TreeSet_ceiling__Ljava_lang_Object_2_Ljava_lang_Object_2,  //21
    func_java_util_TreeSet_higher__Ljava_lang_Object_2_Ljava_lang_Object_2,  //22
    func_java_util_TreeSet_pollFirst___Ljava_lang_Object_2,  //23
    func_java_util_TreeSet_pollLast___Ljava_lang_Object_2,  //24
    func_java_util_TreeSet_clone___Ljava_lang_Object_2,  //25
    func_java_util_TreeSet_spliterator___Ljava_util_Spliterator_2,  //26
    func_java_util_TreeSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2  //27
};
__refer arr_vmtable_java_util_TreeSet_from_java_util_AbstractSet[] = {
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //0
    func_java_util_AbstractSet_hashCode___I,  //1
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z  //2
};
__refer arr_vmtable_java_util_TreeSet_from_java_util_AbstractCollection[] = {
    func_java_util_AbstractCollection_equals__Ljava_lang_Object_2Ljava_lang_Object_2_Z,  //0
    func_java_util_TreeSet_add__Ljava_lang_Object_2_Z,  //1
    func_java_util_TreeSet_size___I,  //2
    func_java_util_TreeSet_clear___V,  //3
    func_java_util_TreeSet_isEmpty___Z,  //4
    func_java_util_TreeSet_addAll__Ljava_util_Collection_2_Z,  //5
    func_java_util_TreeSet_contains__Ljava_lang_Object_2_Z,  //6
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //7
    func_java_util_TreeSet_iterator___Ljava_util_Iterator_2,  //8
    func_java_util_TreeSet_remove__Ljava_lang_Object_2_Z,  //9
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //12
    func_java_util_TreeSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2  //13
};
__refer arr_vmtable_java_util_TreeSet_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_util_AbstractSet_hashCode___I,  //1
    func_java_util_TreeSet_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_util_TreeSet_from_java_util_Collection[] = {
    func_java_util_TreeSet_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_TreeSet_addAll__Ljava_util_Collection_2_Z,  //1
    func_java_util_TreeSet_clear___V,  //2
    func_java_util_TreeSet_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //4
    func_java_util_TreeSet_isEmpty___Z,  //5
    func_java_util_TreeSet_iterator___Ljava_util_Iterator_2,  //6
    func_java_util_TreeSet_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_TreeSet_size___I,  //10
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2  //11
};
__refer arr_vmtable_java_util_TreeSet_from_java_lang_Iterable[] = {
    func_java_util_TreeSet_iterator___Ljava_util_Iterator_2,  //0
    func_java_lang_Iterable_forEach__Ljava_util_function_Consumer_2_V,  //1
    func_java_util_TreeSet_spliterator___Ljava_util_Spliterator_2  //2
};
__refer arr_vmtable_java_util_TreeSet_from_java_util_Set[] = {
    func_java_util_TreeSet_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_TreeSet_addAll__Ljava_util_Collection_2_Z,  //1
    func_java_util_TreeSet_clear___V,  //2
    func_java_util_TreeSet_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //4
    func_java_util_AbstractSet_equals__Ljava_lang_Object_2_Z,  //5
    func_java_util_AbstractSet_hashCode___I,  //6
    func_java_util_TreeSet_isEmpty___Z,  //7
    func_java_util_TreeSet_iterator___Ljava_util_Iterator_2,  //8
    func_java_util_TreeSet_remove__Ljava_lang_Object_2_Z,  //9
    func_java_util_AbstractSet_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_TreeSet_size___I,  //12
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2  //13
};
__refer arr_vmtable_java_util_TreeSet_from_java_util_NavigableSet[] = {
    func_java_util_TreeSet_lower__Ljava_lang_Object_2_Ljava_lang_Object_2,  //0
    func_java_util_TreeSet_floor__Ljava_lang_Object_2_Ljava_lang_Object_2,  //1
    func_java_util_TreeSet_ceiling__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_TreeSet_higher__Ljava_lang_Object_2_Ljava_lang_Object_2,  //3
    func_java_util_TreeSet_pollFirst___Ljava_lang_Object_2,  //4
    func_java_util_TreeSet_pollLast___Ljava_lang_Object_2,  //5
    func_java_util_TreeSet_iterator___Ljava_util_Iterator_2,  //6
    func_java_util_TreeSet_descendingSet___Ljava_util_NavigableSet_2,  //7
    func_java_util_TreeSet_descendingIterator___Ljava_util_Iterator_2,  //8
    func_java_util_TreeSet_subSet__Ljava_lang_Object_2ZLjava_lang_Object_2Z_Ljava_util_NavigableSet_2,  //9
    func_java_util_TreeSet_headSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2,  //10
    func_java_util_TreeSet_tailSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2,  //11
    func_java_util_TreeSet_subSet__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_util_SortedSet_2,  //12
    func_java_util_TreeSet_headSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2,  //13
    func_java_util_TreeSet_tailSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2  //14
};
__refer arr_vmtable_java_util_TreeSet_from_java_util_SortedSet[] = {
    func_java_util_TreeSet_comparator___Ljava_util_Comparator_2,  //0
    func_java_util_TreeSet_subSet__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_util_SortedSet_2,  //1
    func_java_util_TreeSet_headSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2,  //2
    func_java_util_TreeSet_tailSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2,  //3
    func_java_util_TreeSet_first___Ljava_lang_Object_2,  //4
    func_java_util_TreeSet_last___Ljava_lang_Object_2,  //5
    func_java_util_TreeSet_spliterator___Ljava_util_Spliterator_2  //6
};
__refer arr_vmtable_java_util_TreeSet_from_java_lang_Cloneable[] = {
    NULL
};
__refer arr_vmtable_java_util_TreeSet_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_java_util_TreeSet[] = {
    {121, 28, arr_vmtable_java_util_TreeSet_from_java_util_TreeSet}, //0
    {131, 3, arr_vmtable_java_util_TreeSet_from_java_util_AbstractSet}, //1
    {132, 14, arr_vmtable_java_util_TreeSet_from_java_util_AbstractCollection}, //2
    {10, 11, arr_vmtable_java_util_TreeSet_from_java_lang_Object}, //3
    {75, 12, arr_vmtable_java_util_TreeSet_from_java_util_Collection}, //4
    {76, 3, arr_vmtable_java_util_TreeSet_from_java_lang_Iterable}, //5
    {128, 14, arr_vmtable_java_util_TreeSet_from_java_util_Set}, //6
    {124, 15, arr_vmtable_java_util_TreeSet_from_java_util_NavigableSet}, //7
    {122, 7, arr_vmtable_java_util_TreeSet_from_java_util_SortedSet}, //8
    {69, 0, arr_vmtable_java_util_TreeSet_from_java_lang_Cloneable}, //9
    {64, 0, arr_vmtable_java_util_TreeSet_from_java_io_Serializable}, //10
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(JThreadRuntime *runtime, struct java_util_NavigableMap* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 337, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 106 , L1572256205 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 106;
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
    //  line no 107 , L554348863 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/TreeSet m Ljava/util/NavigableMap;
    sp -= 2;
    ((struct java_util_TreeSet*)rstack[sp + 0].obj)->m_1 = rstack[sp + 1].obj;
    ; 
    //  line no 108 , L548554586 , bytecode index = 
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

void bridge_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_java_util_TreeSet__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 338, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 124 , L1863702030 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 124;
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/TreeMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 120);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/TreeMap.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeMap__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/TreeSet.<init>(Ljava/util/NavigableMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 125 , L467796378 , bytecode index = 
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

void bridge_java_util_TreeSet__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet__init____V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_java_util_TreeSet__init___Ljava_util_Comparator_2_V(JThreadRuntime *runtime, struct java_util_Comparator* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 339, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 141 , L93199773 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 141;
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/TreeMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 120);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/TreeMap.<init>(Ljava/util/Comparator;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeMap__init___Ljava_util_Comparator_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/TreeSet.<init>(Ljava/util/NavigableMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 142 , L1147805316 , bytecode index = 
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

void bridge_java_util_TreeSet__init___Ljava_util_Comparator_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet__init___Ljava_util_Comparator_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_util_TreeSet__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 340, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 159 , L643290333 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 159;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/TreeSet.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeSet__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 160 , L1396721535 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/TreeSet.addAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 121, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 161 , L1204481453 , bytecode index = 
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

void bridge_java_util_TreeSet__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet__init___Ljava_util_Collection_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_util_TreeSet__init___Ljava_util_SortedSet_2_V(JThreadRuntime *runtime, struct java_util_SortedSet* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 341, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 171 , L1766869737 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 171;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/SortedSet.comparator()Ljava/util/Comparator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Comparator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 122, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/TreeSet.<init>(Ljava/util/Comparator;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeSet__init___Ljava_util_Comparator_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 172 , L947553027 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/TreeSet.addAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_util_Collection*) = find_method(__ins->vm_table, 121, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 173 , L684566052 , bytecode index = 
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

void bridge_java_util_TreeSet__init___Ljava_util_SortedSet_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet__init___Ljava_util_SortedSet_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Iterator* func_java_util_TreeSet_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 342, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 181 , L2129442232 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 181;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.navigableKeySet()Ljava/util/NavigableSet;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableSet* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 123, 13);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/NavigableSet.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 6);
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

void bridge_java_util_TreeSet_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_iterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Iterator* func_java_util_TreeSet_descendingIterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 343, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 191 , L1473981203 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 191;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.descendingKeySet()Ljava/util/NavigableSet;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableSet* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 123, 14);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/NavigableSet.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 6);
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

void bridge_java_util_TreeSet_descendingIterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_descendingIterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_util_NavigableSet* func_java_util_TreeSet_descendingSet___Ljava_util_NavigableSet_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 344, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 198 , L1552326679 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 198;
    // new java/util/TreeSet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.descendingMap()Ljava/util/NavigableMap;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableMap* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 123, 12);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/TreeSet.<init>(Ljava/util/NavigableMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_descendingSet___Ljava_util_NavigableSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_descendingSet___Ljava_util_NavigableSet_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_TreeSet_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 345, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 207 , L1383519982 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 207;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 12);
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

void bridge_java_util_TreeSet_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TreeSet_size___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_TreeSet_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 346, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 216 , L403174823 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 216;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.isEmpty()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 8);
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

void bridge_java_util_TreeSet_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TreeSet_isEmpty___Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_TreeSet_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 347, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 234 , L2142565033 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 234;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/NavigableMap.containsKey(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 125, 1);
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

void bridge_java_util_TreeSet_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TreeSet_contains__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_java_util_TreeSet_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 348, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 255 , L1783568981 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getstatic java/util/TreeSet PRESENT Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_TreeSet.PRESENT_2;
    sp += 1;
    // invokeinterface java/util/NavigableMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 125, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  != NULL) goto L2113748097;
    // iconst_1
    stack[sp++].i = 1;
    goto L629454893;
    L2113748097:
    // iconst_0
    stack[sp++].i = 0;
    L629454893:
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

void bridge_java_util_TreeSet_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TreeSet_add__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_TreeSet_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 349, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 276 , L1764996806 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 276;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/NavigableMap.remove(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 125, 11);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic java/util/TreeSet PRESENT Ljava/lang/Object;
    rstack[sp].obj =static_var_java_util_TreeSet.PRESENT_2;
    sp += 1;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L2101249621;
    // iconst_1
    stack[sp++].i = 1;
    goto L2113604623;
    L2101249621:
    // iconst_0
    stack[sp++].i = 0;
    L2113604623:
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

void bridge_java_util_TreeSet_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TreeSet_remove__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_util_TreeSet_clear___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 350, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 284 , L379303133 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 284;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.clear()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 285 , L530486389 , bytecode index = 
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

void bridge_java_util_TreeSet_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet_clear___V(runtime, ins);
}


// locals: 6
// stack: 2
// args: 1
s8 func_java_util_TreeSet_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 351, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 300 , L220454978 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 300;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 12);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1188401255;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L1188401255;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/SortedSet
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 851);
    if(stack[--sp].i  == 0) goto L1188401255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // instanceof java/util/TreeMap
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 845);
    if(stack[--sp].i  == 0) goto L1188401255;
    ; 
    //  line no 303 , L755210740 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/SortedSet
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 851);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 304 , L350059321 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // checkcast java/util/TreeMap
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 845);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 305 , L107915280 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/SortedSet.comparator()Ljava/util/Comparator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Comparator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 122, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 306 , L1825719826 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/util/TreeMap.comparator()Ljava/util/Comparator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Comparator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 120, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 307 , L1571798597 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L575935098;
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L1188401255;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokeinterface java/util/Comparator.equals(Ljava/lang/Object;)Z
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
    if(stack[--sp].i  == 0) goto L1188401255;
    L575935098:
    //  line no 309 , L575935098 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1188401255:
    //  line no 312 , L1188401255 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/AbstractSet.addAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TreeSet_addAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 5
// stack: 7
// args: 4
struct java_util_NavigableSet* func_java_util_TreeSet_subSet__Ljava_lang_Object_2ZLjava_lang_Object_2Z_Ljava_util_NavigableSet_2(JThreadRuntime *runtime, struct java_lang_Object* p0, s8 p1, struct java_lang_Object* p2, s8 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 352, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    ; 
    //  line no 325 , L798310141 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 325;
    // new java/util/TreeSet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokeinterface java/util/NavigableMap.subMap(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableMap* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s8,struct java_lang_Object*,s8) = find_method(__ins->vm_table, 123, 15);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/TreeSet.<init>(Ljava/util/NavigableMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_subSet__Ljava_lang_Object_2ZLjava_lang_Object_2Z_Ljava_util_NavigableSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_subSet__Ljava_lang_Object_2ZLjava_lang_Object_2Z_Ljava_util_NavigableSet_2(runtime, ins, para[0].i, para[1].obj, para[2].i);
}


// locals: 3
// stack: 5
// args: 2
struct java_util_NavigableSet* func_java_util_TreeSet_headSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2(JThreadRuntime *runtime, struct java_lang_Object* p0, s8 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 353, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 338 , L221111433 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 338;
    // new java/util/TreeSet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokeinterface java/util/NavigableMap.headMap(Ljava/lang/Object;Z)Ljava/util/NavigableMap;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableMap* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s8) = find_method(__ins->vm_table, 123, 16);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/TreeSet.<init>(Ljava/util/NavigableMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_headSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_headSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2(runtime, ins, para[0].i);
}


// locals: 3
// stack: 5
// args: 2
struct java_util_NavigableSet* func_java_util_TreeSet_tailSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2(JThreadRuntime *runtime, struct java_lang_Object* p0, s8 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 354, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 350 , L307829448 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 350;
    // new java/util/TreeSet
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokeinterface java/util/NavigableMap.tailMap(Ljava/lang/Object;Z)Ljava/util/NavigableMap;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableMap* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s8) = find_method(__ins->vm_table, 123, 17);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/TreeSet.<init>(Ljava/util/NavigableMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeSet__init___Ljava_util_NavigableMap_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_tailSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_tailSet__Ljava_lang_Object_2Z_Ljava_util_NavigableSet_2(runtime, ins, para[0].i);
}


// locals: 3
// stack: 5
// args: 2
struct java_util_SortedSet* func_java_util_TreeSet_subSet__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_util_SortedSet_2(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 355, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 361 , L940857381 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 361;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/TreeSet.subSet(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableSet* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s8,struct java_lang_Object*,s8) = find_method(__ins->vm_table, 121, 10);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i);
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

void bridge_java_util_TreeSet_subSet__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_util_SortedSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_subSet__Ljava_lang_Object_2Ljava_lang_Object_2_Ljava_util_SortedSet_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 3
// args: 1
struct java_util_SortedSet* func_java_util_TreeSet_headSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 356, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 372 , L459718907 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 372;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/TreeSet.headSet(Ljava/lang/Object;Z)Ljava/util/NavigableSet;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableSet* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s8) = find_method(__ins->vm_table, 121, 11);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_util_TreeSet_headSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_headSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct java_util_SortedSet* func_java_util_TreeSet_tailSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 357, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 383 , L616674002 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 383;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/util/TreeSet.tailSet(Ljava/lang/Object;Z)Ljava/util/NavigableSet;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_NavigableSet* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s8) = find_method(__ins->vm_table, 121, 12);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_util_TreeSet_tailSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_tailSet__Ljava_lang_Object_2_Ljava_util_SortedSet_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Comparator* func_java_util_TreeSet_comparator___Ljava_util_Comparator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 358, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 387 , L1351478315 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 387;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.comparator()Ljava/util/Comparator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Comparator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 126, 0);
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

void bridge_java_util_TreeSet_comparator___Ljava_util_Comparator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_comparator___Ljava_util_Comparator_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_TreeSet_first___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 359, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 394 , L925973605 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 394;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.firstKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 126, 4);
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

void bridge_java_util_TreeSet_first___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_first___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_TreeSet_last___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 360, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 401 , L2038522556 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 401;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.lastKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 126, 5);
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

void bridge_java_util_TreeSet_last___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_last___Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_TreeSet_lower__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 361, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 414 , L596910004 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 414;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/NavigableMap.lowerKey(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 123, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_lower__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_lower__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_TreeSet_floor__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 362, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 425 , L106999035 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 425;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/NavigableMap.floorKey(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 123, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_floor__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_floor__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_TreeSet_ceiling__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 363, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 436 , L1593458942 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 436;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/NavigableMap.ceilingKey(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 123, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_ceiling__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_ceiling__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_TreeSet_higher__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 364, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 447 , L479920916 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 447;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/NavigableMap.higherKey(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 123, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_TreeSet_higher__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_higher__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_TreeSet_pollFirst___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 365, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 454 , L1237912220 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 454;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.pollFirstEntry()Ljava/util/Map$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Map_00024Entry* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 123, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 455 , L757708014 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1777238524;
    // aconst null
    rstack[sp++].obj = NULL;
    goto L1848289347;
    L1777238524:
    rstack[sp++].obj = rlocal[1].obj;
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
    L1848289347:
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

void bridge_java_util_TreeSet_pollFirst___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_pollFirst___Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_TreeSet_pollLast___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 366, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 462 , L257459516 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 462;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.pollLastEntry()Ljava/util/Map$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Map_00024Entry* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 123, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 463 , L304354378 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L704106237;
    // aconst null
    rstack[sp++].obj = NULL;
    goto L1880078449;
    L704106237:
    rstack[sp++].obj = rlocal[1].obj;
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
    L1880078449:
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

void bridge_java_util_TreeSet_pollLast___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_pollLast___Ljava_lang_Object_2(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_TreeSet_clone___Ljava_lang_Object_2[] = {
    { , , 882}
};
ExceptionTable extable_func_java_util_TreeSet_clone___Ljava_lang_Object_2 = {1, arr_extable_func_java_util_TreeSet_clone___Ljava_lang_Object_2};

// locals: 3
// stack: 4
// args: 0
struct java_lang_Object* func_java_util_TreeSet_clone___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 367, &rstack[0], &rlocal[0], &sp);
    // try catch :L159475521 L504807594 L332873513 (
    L159475521:
    __frame->bytecodeIndex = 
    //  line no 476 , L159475521 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 476;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.clone()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_Object_clone___Ljava_lang_Object_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/util/TreeSet
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 844);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    L504807594:
    __frame->bytecodeIndex = 
    //  line no 479 , L504807594 , bytecode index = 
    goto L90567568;
    L332873513:
    //  line no 477 , L332873513 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 478 , L131872530 , bytecode index = 
    // new java/lang/InternalError
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 127);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/InternalError.<init>(Ljava/lang/CloneNotSupportedException;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_InternalError__init___Ljava_lang_CloneNotSupportedException_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L131872530 in labeltable is :L131872530
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 478;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L90567568:
    //  line no 481 , L90567568 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // new java/util/TreeMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 120);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokespecial java/util/TreeMap.<init>(Ljava/util/SortedMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeMap__init___Ljava_util_SortedMap_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/TreeSet m Ljava/util/NavigableMap;
    sp -= 2;
    ((struct java_util_TreeSet*)rstack[sp + 0].obj)->m_1 = rstack[sp + 1].obj;
    ; 
    //  line no 482 , L795321555 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L332873513;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_TreeSet_clone___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_clone___Ljava_lang_Object_2(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
void func_java_util_TreeSet_writeObject__Ljava_io_ObjectOutputStream_2_V(JThreadRuntime *runtime, struct java_io_ObjectOutputStream* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 368, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 500 , L800088638 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 500;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/ObjectOutputStream.defaultWriteObject()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 77, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 503 , L1236444285 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.comparator()Ljava/util/Comparator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Comparator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 126, 0);
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
    ; 
    //  line no 506 , L1541525668 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 12);
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
    ; 
    //  line no 509 , L1096485705 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TreeSet m Ljava/util/NavigableMap;
    rstack[sp - 1].obj = ((struct java_util_TreeSet*)rstack[sp - 1].obj)->m_1;
    sp += 0;
    // invokeinterface java/util/NavigableMap.keySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 126, 6);
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
    rlocal[2].obj = rstack[--sp].obj;
    L1834361038:
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
    if(stack[--sp].i  == 0) goto L823914581;
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 510 , L1680503330 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
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
    ; 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1834361038;
    L823914581:
    //  line no 511 , L823914581 , bytecode index = 
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

void bridge_java_util_TreeSet_writeObject__Ljava_io_ObjectOutputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet_writeObject__Ljava_io_ObjectOutputStream_2_V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 1
void func_java_util_TreeSet_readObject__Ljava_io_ObjectInputStream_2_V(JThreadRuntime *runtime, struct java_io_ObjectInputStream* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 369, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 520 , L1330247343 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 520;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/ObjectInputStream.defaultReadObject()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 4);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 524 , L2017797638 , bytecode index = 
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
    // checkcast java/util/Comparator
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 857);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 527 , L343812839 , bytecode index = 
    // new java/util/TreeMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 120);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/util/TreeMap.<init>(Ljava/util/Comparator;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_TreeMap__init___Ljava_util_Comparator_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 528 , L1150058854 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield java/util/TreeSet m Ljava/util/NavigableMap;
    sp -= 2;
    ((struct java_util_TreeSet*)rstack[sp + 0].obj)->m_1 = rstack[sp + 1].obj;
    ; 
    //  line no 531 , L1148255190 , bytecode index = 
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
    //  line no 534 , L366252104 , bytecode index = 
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

void bridge_java_util_TreeSet_readObject__Ljava_io_ObjectInputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet_readObject__Ljava_io_ObjectInputStream_2_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_util_Spliterator* func_java_util_TreeSet_spliterator___Ljava_util_Spliterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 370, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 557 , L1346343363 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 557;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 124);
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1346343363 in labeltable is :L1346343363
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 557;
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

void bridge_java_util_TreeSet_spliterator___Ljava_util_Spliterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_spliterator___Ljava_util_Spliterator_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
JArray * func_java_util_TreeSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 371, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 564 , L573958827 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 564;
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
    //     L573958827 in labeltable is :L573958827
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 564;
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

void bridge_java_util_TreeSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TreeSet_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 2
// args: 1
void func_java_util_TreeSet__clinit____V(JThreadRuntime *runtime, struct java_util_TreeSet* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 372, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 101 , L1003292107 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 101;
    // new java/lang/Object
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 10);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    // putstatic java/util/TreeSet PRESENT Ljava/lang/Object;
    sp -= 1;
    static_var_java_util_TreeSet.PRESENT_2 = rstack[sp].obj;
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

void bridge_java_util_TreeSet__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TreeSet__clinit____V(runtime, para[0].obj);
}


