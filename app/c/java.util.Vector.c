// CLASS: java/util/Vector extends java/util/AbstractList
#include "metadata.h"


// generation
// globals
//struct java_util_Vector_static {};



__refer arr_vmtable_java_util_Vector_from_java_util_Vector[] = {
    func_java_util_Vector_copyInto___3Ljava_lang_Object_2_V,  //0
    func_java_util_Vector_trimToSize___V,  //1
    func_java_util_Vector_ensureCapacity__I_V,  //2
    func_java_util_Vector_setSize__I_V,  //3
    func_java_util_Vector_capacity___I,  //4
    func_java_util_Vector_size___I,  //5
    func_java_util_Vector_isEmpty___Z,  //6
    func_java_util_Vector_elements___Ljava_util_Enumeration_2,  //7
    func_java_util_Vector_contains__Ljava_lang_Object_2_Z,  //8
    func_java_util_Vector_indexOf__Ljava_lang_Object_2_I,  //9
    func_java_util_Vector_indexOf__Ljava_lang_Object_2I_I,  //10
    func_java_util_Vector_lastIndexOf__Ljava_lang_Object_2_I,  //11
    func_java_util_Vector_lastIndexOf__Ljava_lang_Object_2I_I,  //12
    func_java_util_Vector_elementAt__I_Ljava_lang_Object_2,  //13
    func_java_util_Vector_firstElement___Ljava_lang_Object_2,  //14
    func_java_util_Vector_lastElement___Ljava_lang_Object_2,  //15
    func_java_util_Vector_setElementAt__Ljava_lang_Object_2I_V,  //16
    func_java_util_Vector_removeElementAt__I_V,  //17
    func_java_util_Vector_insertElementAt__Ljava_lang_Object_2I_V,  //18
    func_java_util_Vector_addElement__Ljava_lang_Object_2_V,  //19
    func_java_util_Vector_removeElement__Ljava_lang_Object_2_Z,  //20
    func_java_util_Vector_removeAllElements___V,  //21
    func_java_util_Vector_clone___Ljava_lang_Object_2,  //22
    func_java_util_Vector_toArray____3Ljava_lang_Object_2,  //23
    func_java_util_Vector_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //24
    func_java_util_Vector_get__I_Ljava_lang_Object_2,  //25
    func_java_util_Vector_set__ILjava_lang_Object_2_Ljava_lang_Object_2,  //26
    func_java_util_Vector_add__Ljava_lang_Object_2_Z,  //27
    func_java_util_Vector_remove__Ljava_lang_Object_2_Z,  //28
    func_java_util_Vector_add__ILjava_lang_Object_2_V,  //29
    func_java_util_Vector_remove__I_Ljava_lang_Object_2,  //30
    func_java_util_Vector_clear___V,  //31
    func_java_util_Vector_containsAll__Ljava_util_Collection_2_Z,  //32
    func_java_util_Vector_addAll__Ljava_util_Collection_2_Z,  //33
    func_java_util_Vector_removeAll__Ljava_util_Collection_2_Z,  //34
    func_java_util_Vector_retainAll__Ljava_util_Collection_2_Z,  //35
    func_java_util_Vector_addAll__ILjava_util_Collection_2_Z,  //36
    func_java_util_Vector_equals__Ljava_lang_Object_2_Z,  //37
    func_java_util_Vector_hashCode___I,  //38
    func_java_util_Vector_toString___Ljava_lang_String_2  //39
};
__refer arr_vmtable_java_util_Vector_from_java_util_AbstractList[] = {
    func_java_util_Vector_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_Vector_get__I_Ljava_lang_Object_2,  //1
    func_java_util_Vector_set__ILjava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_Vector_add__ILjava_lang_Object_2_V,  //3
    func_java_util_Vector_remove__I_Ljava_lang_Object_2,  //4
    func_java_util_Vector_indexOf__Ljava_lang_Object_2_I,  //5
    func_java_util_Vector_lastIndexOf__Ljava_lang_Object_2_I,  //6
    func_java_util_Vector_clear___V,  //7
    func_java_util_Vector_addAll__ILjava_util_Collection_2_Z,  //8
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2,  //9
    func_java_util_AbstractList_listIterator___Ljava_util_ListIterator_2,  //10
    func_java_util_AbstractList_listIterator__I_Ljava_util_ListIterator_2,  //11
    func_java_util_AbstractList_subList__II_Ljava_util_List_2,  //12
    func_java_util_Vector_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_Vector_hashCode___I,  //14
    func_java_util_AbstractList_removeRange__II_V  //15
};
__refer arr_vmtable_java_util_Vector_from_java_util_AbstractCollection[] = {
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_Vector_size___I,  //1
    func_java_util_Vector_isEmpty___Z,  //2
    func_java_util_Vector_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_Vector_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_Vector_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_Vector_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_Vector_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_Vector_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Vector_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_Vector_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_Vector_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_Vector_clear___V,  //12
    func_java_util_Vector_toString___Ljava_lang_String_2  //13
};
__refer arr_vmtable_java_util_Vector_from_java_lang_Object[] = {
    func_java_util_Vector_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_Vector_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_Vector_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_Vector_hashCode___I  //9
};
__refer arr_vmtable_java_util_Vector_from_java_util_Collection[] = {
    func_java_util_Vector_size___I,  //0
    func_java_util_Vector_isEmpty___Z,  //1
    func_java_util_Vector_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_Vector_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_Vector_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_Vector_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_Vector_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_Vector_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Vector_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_Vector_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_Vector_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_Vector_clear___V,  //12
    func_java_util_Vector_equals__Ljava_lang_Object_2_Z,  //13
    func_java_util_Vector_hashCode___I  //14
};
__refer arr_vmtable_java_util_Vector_from_java_lang_Iterable[] = {
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2  //0
};
__refer arr_vmtable_java_util_Vector_from_java_util_List[] = {
    func_java_util_Vector_size___I,  //0
    func_java_util_Vector_isEmpty___Z,  //1
    func_java_util_Vector_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_AbstractList_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_Vector_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_Vector_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_Vector_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_Vector_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_Vector_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Vector_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_Vector_addAll__ILjava_util_Collection_2_Z,  //10
    func_java_util_Vector_removeAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_Vector_retainAll__Ljava_util_Collection_2_Z,  //12
    func_java_util_Vector_clear___V,  //13
    func_java_util_Vector_equals__Ljava_lang_Object_2_Z,  //14
    func_java_util_Vector_hashCode___I,  //15
    func_java_util_Vector_get__I_Ljava_lang_Object_2,  //16
    func_java_util_Vector_set__ILjava_lang_Object_2_Ljava_lang_Object_2,  //17
    func_java_util_Vector_add__ILjava_lang_Object_2_V,  //18
    func_java_util_Vector_remove__I_Ljava_lang_Object_2,  //19
    func_java_util_Vector_indexOf__Ljava_lang_Object_2_I,  //20
    func_java_util_Vector_lastIndexOf__Ljava_lang_Object_2_I,  //21
    func_java_util_AbstractList_listIterator___Ljava_util_ListIterator_2,  //22
    func_java_util_AbstractList_listIterator__I_Ljava_util_ListIterator_2,  //23
    func_java_util_AbstractList_subList__II_Ljava_util_List_2  //24
};
__refer arr_vmtable_java_util_Vector_from_java_lang_Cloneable[] = {
    NULL
};
VMTable vmtable_java_util_Vector[] = {
    {120, 40, arr_vmtable_java_util_Vector_from_java_util_Vector}, //0
    {76, 16, arr_vmtable_java_util_Vector_from_java_util_AbstractList}, //1
    {90, 14, arr_vmtable_java_util_Vector_from_java_util_AbstractCollection}, //2
    {5, 10, arr_vmtable_java_util_Vector_from_java_lang_Object}, //3
    {45, 15, arr_vmtable_java_util_Vector_from_java_util_Collection}, //4
    {91, 1, arr_vmtable_java_util_Vector_from_java_lang_Iterable}, //5
    {74, 25, arr_vmtable_java_util_Vector_from_java_util_List}, //6
    {159, 0, arr_vmtable_java_util_Vector_from_java_lang_Cloneable}, //7
};



// locals: 3
// stack: 4
// args: 2
void func_java_util_Vector__init___II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2102, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 23 , L2045143855 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 23;
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
    //  line no 24 , L388444787 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L100048427;
    ; 
    //  line no 25 , L159651486 , bytecode index = 
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
    //     L159651486 in labeltable is :L159651486
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 25;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L100048427:
    //  line no 28 , L100048427 , bytecode index = 
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
    // putfield java/util/Vector elementData [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementData_1 = rstack[sp + 1].obj;
    ; 
    //  line no 29 , L1139915666 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield java/util/Vector capacityIncrement I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->capacityIncrement_3 = stack[sp + 1].i;
    ; 
    //  line no 30 , L1835777333 , bytecode index = 
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

void bridge_java_util_Vector__init___II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector__init___II_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_Vector__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2103, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 34 , L1967434886 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 34;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial java/util/Vector.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 35 , L992457879 , bytecode index = 
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

void bridge_java_util_Vector__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector__init___I_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_util_Vector__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2104, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 39 , L1014278669 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 39;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // invokespecial java/util/Vector.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 40 , L1820594585 , bytecode index = 
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

void bridge_java_util_Vector__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector__init____V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_java_util_Vector__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2105, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 43 , L1217434045 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
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
    //  line no 44 , L1361931872 , bytecode index = 
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
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    ; 
    //  line no 46 , L501855493 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    // putfield java/util/Vector elementData [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementData_1 = rstack[sp + 1].obj;
    ; 
    //  line no 47 , L2064787513 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
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
    //  line no 48 , L927159199 , bytecode index = 
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

void bridge_java_util_Vector__init___Ljava_util_Collection_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector__init___Ljava_util_Collection_2_V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_java_util_Vector_copyInto___3Ljava_lang_Object_2_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2106, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 52 , L1572255813 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 52;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //  line no 53 , L932118570 , bytecode index = 
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

void bridge_java_util_Vector_copyInto___3Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_copyInto___3Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 3
// stack: 5
// args: 0
void func_java_util_Vector_trimToSize___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2107, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 57 , L751259764 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 57;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 58 , L1146859833 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // arraylength  label  L1146859833
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[1].i = stack[--sp].i;
    ; 
    //  line no 59 , L194672584 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2055276126;
    ; 
    //  line no 60 , L1825811850 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 61 , L1964514128 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(309));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/Vector elementData [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementData_1 = rstack[sp + 1].obj;
    ; 
    //  line no 62 , L761533964 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    L2055276126:
    //  line no 64 , L2055276126 , bytecode index = 
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

void bridge_java_util_Vector_trimToSize___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_trimToSize___V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_Vector_ensureCapacity__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2108, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 68 , L787156891 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 68;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 69 , L454841229 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/util/Vector.ensureCapacityHelper(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector_ensureCapacityHelper__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 70 , L373682836 , bytecode index = 
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

void bridge_java_util_Vector_ensureCapacity__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_ensureCapacity__I_V(runtime, ins);
}


// locals: 5
// stack: 5
// args: 1
void func_java_util_Vector_ensureCapacityHelper__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2109, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 74 , L365211514 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 74;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // arraylength  label  L365211514
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    ; 
    //  line no 75 , L1824327284 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1440057381;
    ; 
    //  line no 76 , L430329518 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 77 , L698977695 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector capacityIncrement I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->capacityIncrement_3;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L765702264;
    ; 
    //  line no 78 , L1414431049 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector capacityIncrement I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->capacityIncrement_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    goto L2142660176;
    L765702264:
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    L2142660176:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 79 , L446093644 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L713464342;
    ; 
    //  line no 80 , L182584006 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L713464342:
    //  line no 82 , L713464342 , bytecode index = 
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
    // putfield java/util/Vector elementData [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementData_1 = rstack[sp + 1].obj;
    ; 
    //  line no 83 , L1185575212 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    L1440057381:
    //  line no 85 , L1440057381 , bytecode index = 
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

void bridge_java_util_Vector_ensureCapacityHelper__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_ensureCapacityHelper__I_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_util_Vector_setSize__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2110, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 89 , L1947397483 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 89;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 90 , L1853633821 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2068450031;
    ; 
    //  line no 91 , L1171178358 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/util/Vector.ensureCapacityHelper(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector_ensureCapacityHelper__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L651433745;
    L2068450031:
    //  line no 93 , L2068450031 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[2].i = stack[--sp].i;
    L697240075:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L651433745;
    ; 
    //  line no 94 , L45703335 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L45703335 bc index = 
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
    //  line no 93 , L836749045 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L697240075;
    L651433745:
    //  line no 97 , L651433745 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    ; 
    //  line no 98 , L934617920 , bytecode index = 
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

void bridge_java_util_Vector_setSize__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_setSize__I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_Vector_capacity___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2111, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 102 , L793657559 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 102;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // arraylength  label  L793657559
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

void bridge_java_util_Vector_capacity___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_capacity___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_Vector_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 107 , L2119713755 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_util_Vector_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_size___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_Vector_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2113, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 112 , L411748515 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    if(stack[--sp].i  != 0) goto L911267068;
    // iconst_1
    stack[sp++].i = 1;
    goto L178917238;
    L911267068:
    // iconst_0
    stack[sp++].i = 0;
    L178917238:
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

void bridge_java_util_Vector_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_isEmpty___Z(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_util_Enumeration* func_java_util_Vector_elements___Ljava_util_Enumeration_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2114, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 117 , L2055967078 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
    // new java/util/Vector$1
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 257);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/Vector$1.<init>(Ljava/util/Vector;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector_000241__init___Ljava_util_Vector_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_Vector_elements___Ljava_util_Enumeration_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_elements___Ljava_util_Enumeration_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_java_util_Vector_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2115, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 137 , L281487983 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 137;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/Vector.indexOf(Ljava/lang/Object;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s32) = find_method(__ins->vm_table, 120, 10);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  < 0) goto L1894338251;
    // iconst_1
    stack[sp++].i = 1;
    goto L1456464145;
    L1894338251:
    // iconst_0
    stack[sp++].i = 0;
    L1456464145:
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

void bridge_java_util_Vector_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_contains__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s32 func_java_util_Vector_indexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2116, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 142 , L1475982439 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 142;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/Vector.indexOf(Ljava/lang/Object;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s32) = find_method(__ins->vm_table, 120, 10);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        jthread_unlock(runtime, __ins);
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

void bridge_java_util_Vector_indexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_indexOf__Ljava_lang_Object_2_I(runtime, ins);
}


// locals: 4
// stack: 3
// args: 2
s32 func_java_util_Vector_indexOf__Ljava_lang_Object_2I_I(JThreadRuntime *runtime, struct java_lang_Object* p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2117, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 147 , L1152554134 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 147;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L424106351;
    ; 
    //  line no 148 , L50826412 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[3].i = stack[--sp].i;
    L258860422:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1596708569;
    ; 
    //  line no 149 , L2089054322 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L2089054322 bc index = 
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
    if(rstack[--sp].obj  != NULL) goto L1138356642;
    ; 
    //  line no 150 , L603483530 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1138356642:
    //  line no 148 , L1138356642 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L258860422;
    L1596708569:
    goto L577038898;
    L424106351:
    //  line no 154 , L424106351 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[3].i = stack[--sp].i;
    L2101086700:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L577038898;
    ; 
    //  line no 155 , L1910813448 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1910813448 bc index = 
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
    if(stack[--sp].i  == 0) goto L294651011;
    ; 
    //  line no 156 , L346049017 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L294651011:
    //  line no 154 , L294651011 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2101086700;
    L577038898:
    //  line no 160 , L577038898 , bytecode index = 
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

void bridge_java_util_Vector_indexOf__Ljava_lang_Object_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_indexOf__Ljava_lang_Object_2I_I(runtime, ins, para[0].i);
}


// locals: 2
// stack: 4
// args: 1
s32 func_java_util_Vector_lastIndexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2118, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 165 , L1575407418 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 165;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/Vector.lastIndexOf(Ljava/lang/Object;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s32) = find_method(__ins->vm_table, 120, 12);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        jthread_unlock(runtime, __ins);
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

void bridge_java_util_Vector_lastIndexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_lastIndexOf__Ljava_lang_Object_2_I(runtime, ins);
}


// locals: 4
// stack: 4
// args: 2
s32 func_java_util_Vector_lastIndexOf__Ljava_lang_Object_2I_I(JThreadRuntime *runtime, struct java_lang_Object* p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2119, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 170 , L1513757689 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 170;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L553701447;
    ; 
    //  line no 171 , L1257526338 , bytecode index = 
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
    stack[sp++].i = local[2].i;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3783);
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
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //     L1257526338 in labeltable is :L1257526338
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 171;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L553701447:
    //  line no 174 , L553701447 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L494951073;
    ; 
    //  line no 175 , L393183035 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[3].i = stack[--sp].i;
    L818546553:
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L1483998054;
    ; 
    //  line no 176 , L1203638171 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1203638171 bc index = 
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
    if(rstack[--sp].obj  != NULL) goto L734275312;
    ; 
    //  line no 177 , L1272257854 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L734275312:
    //  line no 175 , L734275312 , bytecode index = 
    // iinc slot 3 value -1
    local[3].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L818546553;
    L1483998054:
    goto L859985937;
    L494951073:
    //  line no 181 , L494951073 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[3].i = stack[--sp].i;
    L79121205:
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L859985937;
    ; 
    //  line no 182 , L240000757 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L240000757 bc index = 
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
    if(stack[--sp].i  == 0) goto L1829883631;
    ; 
    //  line no 183 , L1286771084 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1829883631:
    //  line no 181 , L1829883631 , bytecode index = 
    // iinc slot 3 value -1
    local[3].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L79121205;
    L859985937:
    //  line no 187 , L859985937 , bytecode index = 
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

void bridge_java_util_Vector_lastIndexOf__Ljava_lang_Object_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_lastIndexOf__Ljava_lang_Object_2I_I(runtime, ins, para[0].i);
}


// locals: 2
// stack: 4
// args: 1
struct java_lang_Object* func_java_util_Vector_elementAt__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2120, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 192 , L203785427 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 192;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1872774414;
    ; 
    //  line no 193 , L927369095 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3783);
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
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L927369095 in labeltable is :L927369095
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 193;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1872774414:
    //  line no 196 , L1872774414 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L1872774414 bc index = 
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

void bridge_java_util_Vector_elementAt__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_elementAt__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_Object* func_java_util_Vector_firstElement___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2121, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 201 , L1901018532 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 201;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    if(stack[--sp].i  != 0) goto L480943798;
    ; 
    //  line no 202 , L525551643 , bytecode index = 
    // new java/util/NoSuchElementException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 77);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/NoSuchElementException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_NoSuchElementException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L525551643 in labeltable is :L525551643
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 202;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L480943798:
    //  line no 204 , L480943798 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // arrload __refer  ,  L480943798 bc index = 
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

void bridge_java_util_Vector_firstElement___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_firstElement___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_lang_Object* func_java_util_Vector_lastElement___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2122, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 209 , L669501311 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 209;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1869652507;
    ; 
    //  line no 210 , L1793469566 , bytecode index = 
    // new java/util/NoSuchElementException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 77);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/NoSuchElementException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_NoSuchElementException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1793469566 in labeltable is :L1793469566
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 210;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1869652507:
    //  line no 212 , L1869652507 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1869652507 bc index = 
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

void bridge_java_util_Vector_lastElement___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_lastElement___Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
void func_java_util_Vector_setElementAt__Ljava_lang_Object_2I_V(JThreadRuntime *runtime, struct java_lang_Object* p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2123, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 217 , L935552520 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 217;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1565096593;
    ; 
    //  line no 218 , L102185114 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
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
    stack[sp++].i = local[2].i;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3783);
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
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L102185114 in labeltable is :L102185114
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 218;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1565096593:
    //  line no 221 , L1565096593 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L1565096593 bc index = 
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
    //  line no 222 , L479160976 , bytecode index = 
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

void bridge_java_util_Vector_setElementAt__Ljava_lang_Object_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_setElementAt__Ljava_lang_Object_2I_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 5
// args: 1
void func_java_util_Vector_removeElementAt__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2124, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 226 , L643552582 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 226;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 227 , L423095039 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L2114701475;
    ; 
    //  line no 228 , L1259283097 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3783);
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
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1259283097 in labeltable is :L1259283097
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 228;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2114701475:
    //  line no 230 , L2114701475 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L856047451;
    ; 
    //  line no 231 , L356539350 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L356539350 in labeltable is :L356539350
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 231;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L856047451:
    //  line no 233 , L856047451 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //  line no 234 , L892262157 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L117911771;
    ; 
    //  line no 235 , L91831175 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
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
    L117911771:
    //  line no 237 , L117911771 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    ; 
    //  line no 238 , L309349909 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L309349909 bc index = 
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
    //  line no 240 , L1361409513 , bytecode index = 
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

void bridge_java_util_Vector_removeElementAt__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_removeElementAt__I_V(runtime, ins);
}


// locals: 3
// stack: 6
// args: 2
void func_java_util_Vector_insertElementAt__Ljava_lang_Object_2I_V(JThreadRuntime *runtime, struct java_lang_Object* p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2125, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 244 , L594783641 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 244;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 245 , L862146308 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1234435772;
    ; 
    //  line no 246 , L1979825302 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
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
    stack[sp++].i = local[2].i;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3792);
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
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1979825302 in labeltable is :L1979825302
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 246;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1234435772:
    //  line no 249 , L1234435772 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokespecial java/util/Vector.ensureCapacityHelper(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector_ensureCapacityHelper__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 250 , L1218496682 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    stack[sp++].i = local[2].i;
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
    //  line no 251 , L1637000661 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L1637000661 bc index = 
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
    //  line no 252 , L925024581 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    ; 
    //  line no 253 , L1287401019 , bytecode index = 
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

void bridge_java_util_Vector_insertElementAt__Ljava_lang_Object_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_insertElementAt__Ljava_lang_Object_2I_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 5
// args: 1
void func_java_util_Vector_addElement__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2126, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 257 , L1986001684 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 257;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 258 , L1465263219 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokespecial java/util/Vector.ensureCapacityHelper(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector_ensureCapacityHelper__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 259 , L2050360660 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L2050360660 bc index = 
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
    //  line no 260 , L1112400678 , bytecode index = 
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

void bridge_java_util_Vector_addElement__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_addElement__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
s8 func_java_util_Vector_removeElement__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2127, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 264 , L768669591 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 264;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 265 , L1728465884 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Vector.indexOf(Ljava/lang/Object;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 120, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 266 , L1249890505 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L408388753;
    ; 
    //  line no 267 , L848409667 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual java/util/Vector.removeElementAt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 120, 17);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 268 , L1729904998 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L408388753:
    //  line no 270 , L408388753 , bytecode index = 
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

void bridge_java_util_Vector_removeElement__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_removeElement__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 0
void func_java_util_Vector_removeAllElements___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2128, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 275 , L2005293363 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 275;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 277 , L1208670252 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L1293465402:
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L393549265;
    ; 
    //  line no 278 , L1392482765 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1392482765 bc index = 
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
    //  line no 277 , L1277882374 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1293465402;
    L393549265:
    //  line no 281 , L393549265 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    ; 
    //  line no 282 , L1141059550 , bytecode index = 
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

void bridge_java_util_Vector_removeAllElements___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_removeAllElements___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Vector_clone___Ljava_lang_Object_2[] = {
    { , , 141}
};
ExceptionTable extable_func_java_util_Vector_clone___Ljava_lang_Object_2 = {1, arr_extable_func_java_util_Vector_clone___Ljava_lang_Object_2};

// locals: 2
// stack: 5
// args: 0
struct java_lang_Object* func_java_util_Vector_clone___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2129, &rstack[0], &rlocal[0], &sp);
    // try catch :L1433976386 L1313459755 L325674467 (
    L1433976386:
    __frame->bytecodeIndex = 
    //  line no 287 , L1433976386 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 287;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.clone()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_Object_clone___Ljava_lang_Object_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/util/Vector
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1058);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 288 , L1405548909 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //  line no 289 , L1130153977 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 290 , L1130656047 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    L1313459755:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L325674467:
    //  line no 291 , L325674467 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 293 , L461001437 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Exception.printStackTrace()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 56, 4);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 294 , L2140396878 , bytecode index = 
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3797);
    // invokespecial java/lang/RuntimeException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_RuntimeException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L2140396878 in labeltable is :L2140396878
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 294;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L325674467;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Vector_clone___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_clone___Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
JArray * func_java_util_Vector_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2130, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 300 , L987255094 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 300;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //  line no 301 , L1937575946 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //  line no 302 , L317053574 , bytecode index = 
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

void bridge_java_util_Vector_toArray____3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_toArray____3Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
JArray * func_java_util_Vector_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2131, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 307 , L488422671 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 307;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L488422671
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L117052390;
    ; 
    //  line no 308 , L989321301 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 309 , L1996787860 , bytecode index = 
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
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    ; 
    //  line no 308 , L260620222 , bytecode index = 
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
    L117052390:
    //  line no 311 , L117052390 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //  line no 313 , L1505486986 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1505486986
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1569371800;
    ; 
    //  line no 314 , L249109901 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L249109901 bc index = 
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
    L1569371800:
    //  line no 317 , L1569371800 , bytecode index = 
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

void bridge_java_util_Vector_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct java_lang_Object* func_java_util_Vector_get__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2132, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 322 , L1117747481 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 322;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1244211620;
    ; 
    //  line no 323 , L215638041 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L215638041 in labeltable is :L215638041
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 323;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1244211620:
    //  line no 326 , L1244211620 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L1244211620 bc index = 
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

void bridge_java_util_Vector_get__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_get__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 2
struct java_lang_Object* func_java_util_Vector_set__ILjava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2133, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 331 , L1074976188 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 331;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1131786259;
    ; 
    //  line no 332 , L485542604 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L485542604 in labeltable is :L485542604
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 332;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1131786259:
    //  line no 335 , L1131786259 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L1131786259 bc index = 
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
    //  line no 336 , L83210381 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arrstore __refer  ,  L83210381 bc index = 
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
    //  line no 337 , L1385966234 , bytecode index = 
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

void bridge_java_util_Vector_set__ILjava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_set__ILjava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 5
// args: 1
s8 func_java_util_Vector_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2134, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 342 , L649848324 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 342;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 343 , L266554246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokespecial java/util/Vector.ensureCapacityHelper(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector_ensureCapacityHelper__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 344 , L1016625178 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L1016625178 bc index = 
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
    //  line no 345 , L1064528406 , bytecode index = 
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

void bridge_java_util_Vector_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_add__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_Vector_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2135, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 350 , L1403780103 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 350;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Vector.removeElement(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 120, 20);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
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

void bridge_java_util_Vector_remove__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_remove__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_java_util_Vector_add__ILjava_lang_Object_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2136, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 355 , L135002781 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 355;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual java/util/Vector.insertElementAt(Ljava/lang/Object;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s32) = find_method(__ins->vm_table, 120, 18);
        jthread_lock(runtime, __ins);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 356 , L1204030294 , bytecode index = 
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

void bridge_java_util_Vector_add__ILjava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_add__ILjava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 5
// args: 1
struct java_lang_Object* func_java_util_Vector_remove__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2137, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 360 , L133544411 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 360;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 361 , L1350395050 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L923032392;
    ; 
    //  line no 362 , L1622362417 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1622362417 in labeltable is :L1622362417
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 362;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L923032392:
    //  line no 364 , L923032392 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L923032392 bc index = 
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
    //  line no 366 , L1252138909 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //  line no 367 , L1908505175 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  <= 0) goto L1678422332;
    ; 
    //  line no 368 , L504006221 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
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
    L1678422332:
    //  line no 371 , L1678422332 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1678422332 bc index = 
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
    //  line no 373 , L1141783782 , bytecode index = 
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

void bridge_java_util_Vector_remove__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_remove__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_util_Vector_clear___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2138, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 378 , L265629779 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 378;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Vector.removeAllElements()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 120, 21);
        jthread_lock(runtime, __ins);
        __func_p(runtime);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 379 , L1160247050 , bytecode index = 
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

void bridge_java_util_Vector_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_clear___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_Vector_containsAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2139, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 383 , L1899145692 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 383;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/AbstractList.containsAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_Vector_containsAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_containsAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 4
// stack: 5
// args: 1
s8 func_java_util_Vector_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2140, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 388 , L765880900 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 388;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 389 , L86506638 , bytecode index = 
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
    //  line no 390 , L1639958975 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1639958975
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 391 , L745604825 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokespecial java/util/Vector.ensureCapacityHelper(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector_ensureCapacityHelper__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 392 , L849063257 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
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
    //  line no 393 , L140702728 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    ; 
    //  line no 394 , L395257482 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L871153004;
    // iconst_1
    stack[sp++].i = 1;
    goto L1550991149;
    L871153004:
    // iconst_0
    stack[sp++].i = 0;
    L1550991149:
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

void bridge_java_util_Vector_addAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_addAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_Vector_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2141, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 399 , L763008902 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 399;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/AbstractList.removeAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_util_AbstractCollection_removeAll__Ljava_util_Collection_2_Z(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_Vector_removeAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_removeAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_Vector_retainAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, struct java_util_Collection* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2142, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 404 , L913148823 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 404;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/AbstractList.retainAll(Ljava/util/Collection;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_Vector_retainAll__Ljava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_retainAll__Ljava_util_Collection_2_Z(runtime, ins);
}


// locals: 6
// stack: 5
// args: 2
s8 func_java_util_Vector_addAll__ILjava_util_Collection_2_Z(JThreadRuntime *runtime, s32 p0, struct java_util_Collection* p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2143, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 409 , L1985280051 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 409;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector modCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector modCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 410 , L1461322233 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L225511870;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1578026015;
    L225511870:
    //  line no 411 , L225511870 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L225511870 in labeltable is :L225511870
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 411;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1578026015:
    //  line no 414 , L1578026015 , bytecode index = 
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
    //  line no 415 , L256522893 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L256522893
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    ; 
    //  line no 416 , L148436820 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokespecial java/util/Vector.ensureCapacityHelper(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector_ensureCapacityHelper__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 418 , L224473864 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 419 , L627519623 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  <= 0) goto L2066213108;
    ; 
    //  line no 420 , L881513107 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
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
    L2066213108:
    //  line no 424 , L2066213108 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
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
    //  line no 425 , L821513849 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/Vector elementCount I
    sp -= 2;
    ((struct java_util_Vector*)rstack[sp + 0].obj)->elementCount_2 = stack[sp + 1].i;
    ; 
    //  line no 426 , L747152360 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  == 0) goto L1756143301;
    // iconst_1
    stack[sp++].i = 1;
    goto L173070089;
    L1756143301:
    // iconst_0
    stack[sp++].i = 0;
    L173070089:
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

void bridge_java_util_Vector_addAll__ILjava_util_Collection_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_addAll__ILjava_util_Collection_2_Z(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_Vector_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2144, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 431 , L1763750076 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 431;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/AbstractList.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_util_AbstractList_equals__Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_Vector_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_Vector_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2145, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 436 , L1771190979 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 436;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractList.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_util_AbstractList_hashCode___I(runtime);
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

void bridge_java_util_Vector_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_hashCode___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_util_Vector_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2146, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 441 , L1943408246 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 441;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractList.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_util_AbstractCollection_toString___Ljava_lang_String_2(runtime);
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

void bridge_java_util_Vector_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_toString___Ljava_lang_String_2(runtime, ins);
}


