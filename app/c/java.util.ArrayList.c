// CLASS: java/util/ArrayList extends java/util/AbstractList
#include "metadata.h"


// generation
// globals
//struct java_util_ArrayList_static {};



__refer arr_vmtable_java_util_ArrayList_from_java_util_ArrayList[] = {
    func_java_util_ArrayList_trimToSize___V,  //0
    func_java_util_ArrayList_ensureCapacity__I_V,  //1
    func_java_util_ArrayList_size___I,  //2
    func_java_util_ArrayList_isEmpty___Z,  //3
    func_java_util_ArrayList_contains__Ljava_lang_Object_2_Z,  //4
    func_java_util_ArrayList_indexOf__Ljava_lang_Object_2_I,  //5
    func_java_util_ArrayList_lastIndexOf__Ljava_lang_Object_2_I,  //6
    func_java_util_ArrayList_toArray____3Ljava_lang_Object_2,  //7
    func_java_util_ArrayList_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //8
    func_java_util_ArrayList_get__I_Ljava_lang_Object_2,  //9
    func_java_util_ArrayList_set__ILjava_lang_Object_2_Ljava_lang_Object_2,  //10
    func_java_util_ArrayList_add__Ljava_lang_Object_2_Z,  //11
    func_java_util_ArrayList_add__ILjava_lang_Object_2_V,  //12
    func_java_util_ArrayList_remove__I_Ljava_lang_Object_2,  //13
    func_java_util_ArrayList_remove__Ljava_lang_Object_2_Z,  //14
    func_java_util_ArrayList_clear___V,  //15
    func_java_util_ArrayList_addAll__Ljava_util_Collection_2_Z,  //16
    func_java_util_ArrayList_addAll__ILjava_util_Collection_2_Z,  //17
    func_java_util_ArrayList_removeRange__II_V  //18
};
__refer arr_vmtable_java_util_ArrayList_from_java_util_AbstractList[] = {
    func_java_util_ArrayList_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_ArrayList_get__I_Ljava_lang_Object_2,  //1
    func_java_util_ArrayList_set__ILjava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_ArrayList_add__ILjava_lang_Object_2_V,  //3
    func_java_util_ArrayList_remove__I_Ljava_lang_Object_2,  //4
    func_java_util_ArrayList_indexOf__Ljava_lang_Object_2_I,  //5
    func_java_util_ArrayList_lastIndexOf__Ljava_lang_Object_2_I,  //6
    func_java_util_ArrayList_clear___V,  //7
    func_java_util_ArrayList_addAll__ILjava_util_Collection_2_Z,  //8
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2,  //9
    func_java_util_AbstractList_listIterator___Ljava_util_ListIterator_2,  //10
    func_java_util_AbstractList_listIterator__I_Ljava_util_ListIterator_2,  //11
    func_java_util_AbstractList_subList__II_Ljava_util_List_2,  //12
    func_java_util_AbstractList_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_AbstractList_hashCode___I,  //14
    func_java_util_ArrayList_removeRange__II_V  //15
};
__refer arr_vmtable_java_util_ArrayList_from_java_util_AbstractCollection[] = {
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_ArrayList_size___I,  //1
    func_java_util_ArrayList_isEmpty___Z,  //2
    func_java_util_ArrayList_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_ArrayList_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_ArrayList_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_ArrayList_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_ArrayList_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_ArrayList_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractCollection_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_ArrayList_clear___V,  //12
    func_java_util_AbstractCollection_toString___Ljava_lang_String_2  //13
};
__refer arr_vmtable_java_util_ArrayList_from_java_lang_Object[] = {
    func_java_util_AbstractCollection_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_AbstractList_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_AbstractList_hashCode___I  //9
};
__refer arr_vmtable_java_util_ArrayList_from_java_util_Collection[] = {
    func_java_util_ArrayList_size___I,  //0
    func_java_util_ArrayList_isEmpty___Z,  //1
    func_java_util_ArrayList_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_ArrayList_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_ArrayList_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_ArrayList_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_ArrayList_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_ArrayList_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractCollection_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_ArrayList_clear___V,  //12
    func_java_util_AbstractList_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_AbstractList_hashCode___I  //14
};
__refer arr_vmtable_java_util_ArrayList_from_java_lang_Iterable[] = {
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2  //0
};
__refer arr_vmtable_java_util_ArrayList_from_java_util_List[] = {
    func_java_util_ArrayList_size___I,  //0
    func_java_util_ArrayList_isEmpty___Z,  //1
    func_java_util_ArrayList_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_ArrayList_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_ArrayList_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_ArrayList_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_ArrayList_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_ArrayList_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_ArrayList_addAll__ILjava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_removeAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //12
    func_java_util_ArrayList_clear___V,  //13
    func_java_util_AbstractList_equals__Ljava_lang_Object_2_Z,  //14
    func_java_util_AbstractList_hashCode___I,  //15
    func_java_util_ArrayList_get__I_Ljava_lang_Object_2,  //16
    func_java_util_ArrayList_set__ILjava_lang_Object_2_Ljava_lang_Object_2,  //17
    func_java_util_ArrayList_add__ILjava_lang_Object_2_V,  //18
    func_java_util_ArrayList_remove__I_Ljava_lang_Object_2,  //19
    func_java_util_ArrayList_indexOf__Ljava_lang_Object_2_I,  //20
    func_java_util_ArrayList_lastIndexOf__Ljava_lang_Object_2_I,  //21
    func_java_util_AbstractList_listIterator___Ljava_util_ListIterator_2,  //22
    func_java_util_AbstractList_listIterator__I_Ljava_util_ListIterator_2,  //23
    func_java_util_AbstractList_subList__II_Ljava_util_List_2  //24
};
VMTable vmtable_java_util_ArrayList[] = {
    {221, 19, arr_vmtable_java_util_ArrayList_from_java_util_ArrayList}, //0
    {76, 16, arr_vmtable_java_util_ArrayList_from_java_util_AbstractList}, //1
    {90, 14, arr_vmtable_java_util_ArrayList_from_java_util_AbstractCollection}, //2
    {5, 10, arr_vmtable_java_util_ArrayList_from_java_lang_Object}, //3
    {45, 15, arr_vmtable_java_util_ArrayList_from_java_util_Collection}, //4
    {91, 1, arr_vmtable_java_util_ArrayList_from_java_lang_Iterable}, //5
    {74, 25, arr_vmtable_java_util_ArrayList_from_java_util_List}, //6
};



// locals: 2
// stack: 4
// args: 1
void func_java_util_ArrayList__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2959, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 13 , L1426040161 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractList.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractList__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 14 , L77334939 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L64614565;
    ; 
    //  line no 15 , L424918165 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3775);
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
    //     L424918165 in labeltable is :L424918165
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 15;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L64614565:
    //  line no 17 , L64614565 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(309));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/ArrayList elementData [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->elementData_1 = rstack[sp + 1].obj;
    ; 
    //  line no 18 , L816760435 , bytecode index = 
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

void bridge_java_util_ArrayList__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList__init___I_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_util_ArrayList__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2960, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 21 , L411721666 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 21;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // invokespecial java/util/ArrayList.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ArrayList__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 22 , L481947474 , bytecode index = 
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

void bridge_java_util_ArrayList__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList__init____V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_java_util_ArrayList__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2961, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 24 , L1492325929 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 24;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractList.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractList__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 25 , L307046074 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    ; 
    //  line no 27 , L1096648926 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0x6eL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x64L;
    sp += 2;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x7fffffffL;
    sp += 2;
    ; 
    //  line no 28 , L168555122 , bytecode index = 
    // invokestatic java/lang/Math.min(JJ)J
    {
        sp -= 5;
        stack[sp].j = func_java_lang_Math_min__JJ_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(309));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/ArrayList elementData [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->elementData_1 = rstack[sp + 1].obj;
    ; 
    //  line no 29 , L1250553668 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // invokeinterface java/util/Collection.toArray([Ljava/lang/Object;)[Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 45, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 30 , L822769753 , bytecode index = 
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

void bridge_java_util_ArrayList__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList__init___Ljava_util_Collection_2_V(runtime, ins);
}


// locals: 3
// stack: 5
// args: 0
void func_java_util_ArrayList_trimToSize___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2962, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 33 , L1232204889 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList modCount I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList modCount I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 34 , L1275580924 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // arraylength  label  L1275580924
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[1].i = stack[--sp].i;
    ; 
    //  line no 35 , L783130773 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1384323699;
    ; 
    //  line no 36 , L337051462 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 37 , L1726759945 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(309));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/ArrayList elementData [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->elementData_1 = rstack[sp + 1].obj;
    ; 
    //  line no 38 , L621209929 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1384323699:
    //  line no 40 , L1384323699 , bytecode index = 
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

void bridge_java_util_ArrayList_trimToSize___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList_trimToSize___V(runtime, ins);
}


// locals: 5
// stack: 5
// args: 1
void func_java_util_ArrayList_ensureCapacity__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2963, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 43 , L1280512370 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList modCount I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList modCount I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 44 , L1218169085 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // arraylength  label  L1218169085
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    ; 
    //  line no 45 , L1522875398 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1420770489;
    ; 
    //  line no 46 , L2322399 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 47 , L384406278 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 48 , L1698674897 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1213733435;
    ; 
    //  line no 49 , L1394526584 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L1213733435:
    //  line no 50 , L1213733435 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(309));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/ArrayList elementData [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->elementData_1 = rstack[sp + 1].obj;
    ; 
    //  line no 51 , L154468798 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1420770489:
    //  line no 53 , L1420770489 , bytecode index = 
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

void bridge_java_util_ArrayList_ensureCapacity__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList_ensureCapacity__I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_ArrayList_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 56 , L425033914 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_util_ArrayList_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_size___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_ArrayList_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2965, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 60 , L490475818 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 60;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    if(stack[--sp].i  != 0) goto L705957093;
    // iconst_1
    stack[sp++].i = 1;
    goto L527505741;
    L705957093:
    // iconst_0
    stack[sp++].i = 0;
    L527505741:
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

void bridge_java_util_ArrayList_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_isEmpty___Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_ArrayList_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2966, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 64 , L1886478937 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/ArrayList.indexOf(Ljava/lang/Object;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 221, 5);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  < 0) goto L2047359894;
    // iconst_1
    stack[sp++].i = 1;
    goto L1839529707;
    L2047359894:
    // iconst_0
    stack[sp++].i = 0;
    L1839529707:
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

void bridge_java_util_ArrayList_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_contains__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
s32 func_java_util_ArrayList_indexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2967, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 68 , L1475908890 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 68;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1813496056;
    ; 
    //  line no 69 , L638466103 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L143357682:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L457732796;
    ; 
    //  line no 70 , L1233805613 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1233805613 bc index = 
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
    if(rstack[--sp].obj  != NULL) goto L504510379;
    ; 
    //  line no 71 , L1308491389 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L504510379:
    //  line no 69 , L504510379 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L143357682;
    L457732796:
    goto L360233196;
    L1813496056:
    //  line no 73 , L1813496056 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L258027623:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L360233196;
    ; 
    //  line no 74 , L12706127 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L12706127 bc index = 
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
    if(stack[--sp].i  == 0) goto L577628476;
    ; 
    //  line no 75 , L1912769093 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L577628476:
    //  line no 73 , L577628476 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L258027623;
    L360233196:
    //  line no 77 , L360233196 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_java_util_ArrayList_indexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_indexOf__Ljava_lang_Object_2_I(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
s32 func_java_util_ArrayList_lastIndexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2968, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 81 , L2065834544 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L910889057;
    ; 
    //  line no 82 , L1358820431 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L388973844:
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L2113328739;
    ; 
    //  line no 83 , L332405156 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L332405156 bc index = 
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
    if(rstack[--sp].obj  != NULL) goto L741394461;
    ; 
    //  line no 84 , L1096433514 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L741394461:
    //  line no 82 , L741394461 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L388973844;
    L2113328739:
    goto L173321452;
    L910889057:
    //  line no 86 , L910889057 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L433756475:
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L173321452;
    ; 
    //  line no 87 , L864078397 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L864078397 bc index = 
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
    if(stack[--sp].i  == 0) goto L590414408;
    ; 
    //  line no 88 , L204339470 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L590414408:
    //  line no 86 , L590414408 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L433756475;
    L173321452:
    //  line no 90 , L173321452 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_java_util_ArrayList_lastIndexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_lastIndexOf__Ljava_lang_Object_2_I(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
JArray * func_java_util_ArrayList_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2969, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 94 , L1947681232 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 94;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(309));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 95 , L1604271704 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 96 , L1008294188 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_java_util_ArrayList_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ArrayList_toArray____3Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
JArray * func_java_util_ArrayList_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2970, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 100 , L783682673 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L783682673
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L142449153;
    ; 
    //  line no 101 , L2119918107 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.getClass()Ljava/lang/Class;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Class* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Class.getComponentType()Ljava/lang/Class;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Class* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // invokestatic java/lang/reflect/Array.newInstance(Ljava/lang/Class;I)Ljava/lang/Object;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast [Ljava/lang/Object;
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 309);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    L142449153:
    //  line no 104 , L142449153 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 106 , L269973396 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L269973396
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L240919651;
    ; 
    //  line no 107 , L1788152379 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1788152379 bc index = 
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
    L240919651:
    //  line no 109 , L240919651 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_java_util_ArrayList_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ArrayList_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_ArrayList_get__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2971, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 115 , L1685820260 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 115;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/util/ArrayList.RangeCheck(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ArrayList_RangeCheck__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 117 , L191614132 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L191614132 bc index = 
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

void bridge_java_util_ArrayList_get__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ArrayList_get__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 2
struct java_lang_Object* func_java_util_ArrayList_set__ILjava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2972, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 121 , L1496332643 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 121;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/util/ArrayList.RangeCheck(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ArrayList_RangeCheck__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 123 , L1642619282 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L1642619282 bc index = 
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
    ; 
    //  line no 124 , L875761527 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arrstore __refer  ,  L875761527 bc index = 
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
    //  line no 125 , L320923274 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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

void bridge_java_util_ArrayList_set__ILjava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ArrayList_set__ILjava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 5
// args: 1
s8 func_java_util_ArrayList_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2973, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 129 , L1774531247 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 129;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/ArrayList.ensureCapacity(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 221, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 130 , L1168232535 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
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
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L1168232535 bc index = 
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
    //  line no 131 , L1369533151 , bytecode index = 
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

void bridge_java_util_ArrayList_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_add__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 6
// args: 2
void func_java_util_ArrayList_add__ILjava_lang_Object_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2974, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 135 , L1125499532 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 135;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L150835665;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L1389426051;
    L150835665:
    //  line no 136 , L150835665 , bytecode index = 
    // new java/lang/IndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 175);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2721);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4961);
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
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
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
    // invokespecial java/lang/IndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L150835665 in labeltable is :L150835665
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 136;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1389426051:
    //  line no 139 , L1389426051 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/ArrayList.ensureCapacity(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 221, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 140 , L2142812880 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 142 , L315885065 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arrstore __refer  ,  L315885065 bc index = 
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
    //  line no 143 , L1984134811 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    ; 
    //  line no 144 , L594207037 , bytecode index = 
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

void bridge_java_util_ArrayList_add__ILjava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList_add__ILjava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 5
// args: 1
struct java_lang_Object* func_java_util_ArrayList_remove__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2975, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 147 , L736631002 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 147;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/util/ArrayList.RangeCheck(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ArrayList_RangeCheck__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 149 , L1177685146 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList modCount I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList modCount I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 150 , L841313896 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L841313896 bc index = 
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
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 152 , L1585101559 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 153 , L893339434 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  <= 0) goto L1673518027;
    ; 
    //  line no 154 , L2062594042 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1673518027:
    //  line no 156 , L1673518027 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1673518027 bc index = 
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
    //  line no 158 , L1901465425 , bytecode index = 
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

void bridge_java_util_ArrayList_remove__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ArrayList_remove__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
s8 func_java_util_ArrayList_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2976, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 162 , L602142157 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 162;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1553142068;
    ; 
    //  line no 163 , L494842224 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1529159609:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1741997197;
    ; 
    //  line no 164 , L587887602 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L587887602 bc index = 
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
    if(rstack[--sp].obj  != NULL) goto L1268233170;
    ; 
    //  line no 165 , L943502798 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokespecial java/util/ArrayList.fastRemove(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ArrayList_fastRemove__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 166 , L2039344872 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1268233170:
    //  line no 163 , L1268233170 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1529159609;
    L1741997197:
    goto L157849544;
    L1553142068:
    //  line no 169 , L1553142068 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L2140650516:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L157849544;
    ; 
    //  line no 170 , L584643821 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L584643821 bc index = 
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
    if(stack[--sp].i  == 0) goto L875865328;
    ; 
    //  line no 171 , L2041553769 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokespecial java/util/ArrayList.fastRemove(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ArrayList_fastRemove__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 172 , L999999316 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L875865328:
    //  line no 169 , L875865328 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2140650516;
    L157849544:
    //  line no 175 , L157849544 , bytecode index = 
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

void bridge_java_util_ArrayList_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_remove__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
void func_java_util_ArrayList_fastRemove__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2977, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 179 , L1333923650 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 179;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList modCount I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList modCount I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 180 , L1261590832 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 181 , L645896037 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L2042235503;
    ; 
    //  line no 182 , L639492613 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2042235503:
    //  line no 184 , L2042235503 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L2042235503 bc index = 
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
    //  line no 185 , L2134885423 , bytecode index = 
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

void bridge_java_util_ArrayList_fastRemove__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList_fastRemove__I_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 0
void func_java_util_ArrayList_clear___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2978, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 188 , L216084411 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 188;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList modCount I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList modCount I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 191 , L1160112616 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L1144673247:
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1815337594;
    ; 
    //  line no 192 , L1772797104 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1772797104 bc index = 
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
    //  line no 191 , L53113540 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1144673247;
    L1815337594:
    //  line no 194 , L1815337594 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    ; 
    //  line no 195 , L362311125 , bytecode index = 
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

void bridge_java_util_ArrayList_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList_clear___V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 1
s8 func_java_util_ArrayList_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2979, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 198 , L1543105131 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 198;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Collection.toArray()[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 45, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 199 , L194318210 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L194318210
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 200 , L1563766240 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/ArrayList.ensureCapacity(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 221, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 201 , L1847865717 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 202 , L2048537704 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    ; 
    //  line no 203 , L1506856374 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L771666241;
    // iconst_1
    stack[sp++].i = 1;
    goto L1654555154;
    L771666241:
    // iconst_0
    stack[sp++].i = 0;
    L1654555154:
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

void bridge_java_util_ArrayList_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_addAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 6
// stack: 5
// args: 2
s8 func_java_util_ArrayList_addAll__ILjava_util_Collection_2_Z(JThreadRuntime *runtime, s32 p0, struct java_util_Collection* p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2980, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 207 , L384735911 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 207;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1312966018;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L1490735178;
    L1312966018:
    //  line no 208 , L1312966018 , bytecode index = 
    // new java/lang/IndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 175);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2721);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4961);
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
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
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
    // invokespecial java/lang/IndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1312966018 in labeltable is :L1312966018
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 208;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1490735178:
    //  line no 211 , L1490735178 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Collection.toArray()[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 45, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 212 , L1944549047 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L1944549047
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    ; 
    //  line no 213 , L289333710 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/ArrayList.ensureCapacity(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 221, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 215 , L1292683326 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 216 , L1138362709 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  <= 0) goto L197172567;
    ; 
    //  line no 217 , L1838562672 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L197172567:
    //  line no 220 , L197172567 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 221 , L1181763012 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    ; 
    //  line no 222 , L1433627902 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  == 0) goto L1515612450;
    // iconst_1
    stack[sp++].i = 1;
    goto L116892325;
    L1515612450:
    // iconst_0
    stack[sp++].i = 0;
    L116892325:
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

void bridge_java_util_ArrayList_addAll__ILjava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_ArrayList_addAll__ILjava_util_Collection_2_Z(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 5
// args: 2
void func_java_util_ArrayList_removeRange__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2981, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 226 , L204937701 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 226;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList modCount I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/ArrayList modCount I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 227 , L1707179576 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 228 , L1578633903 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 232 , L1880484847 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    L1146694713:
    //  line no 233 , L1146694713 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L713538100;
    ; 
    //  line no 234 , L886341817 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/ArrayList size I
    sp -= 2;
    ((struct java_util_ArrayList*)rstack[sp + 0].obj)->size_2 = stack[sp + 1].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L886341817 bc index = 
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1146694713;
    L713538100:
    //  line no 235 , L713538100 , bytecode index = 
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

void bridge_java_util_ArrayList_removeRange__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList_removeRange__II_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 4
// args: 1
void func_java_util_ArrayList_RangeCheck__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2982, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 238 , L1718918890 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 238;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1899351562;
    ; 
    //  line no 239 , L1635011037 , bytecode index = 
    // new java/lang/IndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 175);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2721);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4961);
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
    // getfield java/util/ArrayList size I
    stack[sp - 1].i = ((struct java_util_ArrayList*)rstack[sp - 1].obj)->size_2;
    sp += 0;
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
    // invokespecial java/lang/IndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1635011037 in labeltable is :L1635011037
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 239;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1899351562:
    //  line no 241 , L1899351562 , bytecode index = 
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

void bridge_java_util_ArrayList_RangeCheck__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ArrayList_RangeCheck__I_V(runtime, ins);
}


