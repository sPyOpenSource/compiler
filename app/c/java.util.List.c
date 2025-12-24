// CLASS: java/util/List extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_List_static {};



__refer arr_vmtable_java_util_List_from_java_util_List[] = {
    func_java_util_List_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_List_remove__I_Ljava_lang_Object_2,  //1
    func_java_util_List_size___I,  //2
    func_java_util_List_get__I_Ljava_lang_Object_2,  //3
    func_java_util_List_sort__Ljava_util_Comparator_2_V,  //4
    func_java_util_List_listIterator___Ljava_util_ListIterator_2,  //5
    func_java_util_List_listIterator__I_Ljava_util_ListIterator_2,  //6
    func_java_util_List_add__ILjava_lang_Object_2_V,  //7
    func_java_util_List_indexOf__Ljava_lang_Object_2_I,  //8
    func_java_util_List_lastIndexOf__Ljava_lang_Object_2_I,  //9
    func_java_util_List_set__ILjava_lang_Object_2_Ljava_lang_Object_2,  //10
    func_java_util_List_subList__II_Ljava_util_List_2  //11
};
__refer arr_vmtable_java_util_List_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_util_List_from_java_util_Collection[] = {
    func_java_util_List_add__Ljava_lang_Object_2_Z,  //0
    func_java_util_Collection_addAll__Ljava_util_Collection_2_Z,  //1
    func_java_util_Collection_clear___V,  //2
    func_java_util_Collection_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_Collection_containsAll__Ljava_util_Collection_2_Z,  //4
    func_java_util_Collection_isEmpty___Z,  //5
    func_java_util_Collection_iterator___Ljava_util_Iterator_2,  //6
    func_java_util_Collection_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_Collection_removeAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_Collection_retainAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_List_size___I,  //10
    func_java_util_Collection_toArray____3Ljava_lang_Object_2  //11
};
__refer arr_vmtable_java_util_List_from_java_lang_Iterable[] = {
    func_java_util_Collection_iterator___Ljava_util_Iterator_2,  //0
    func_java_lang_Iterable_forEach__Ljava_util_function_Consumer_2_V,  //1
    func_java_lang_Iterable_spliterator___Ljava_util_Spliterator_2  //2
};
VMTable vmtable_java_util_List[] = {
    {198, 12, arr_vmtable_java_util_List_from_java_util_List}, //0
    {10, 11, arr_vmtable_java_util_List_from_java_lang_Object}, //1
    {75, 12, arr_vmtable_java_util_List_from_java_util_Collection}, //2
    {76, 3, arr_vmtable_java_util_List_from_java_lang_Iterable}, //3
};



// locals: 0
// stack: 0
// args: 1
s8 func_java_util_List_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 493, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_List_add__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_List_add__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_Object* func_java_util_List_remove__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 494, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_List_remove__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_List_remove__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_util_List_size___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 495, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_List_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_List_size___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_Object* func_java_util_List_get__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 496, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_List_get__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_List_get__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 8
// stack: 2
// args: 1
void func_java_util_List_sort__Ljava_util_Comparator_2_V(JThreadRuntime *runtime, struct java_util_Comparator* p0){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 497, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 56 , L194481424 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 56;
    rstack[sp++].obj = rlocal[0].obj;
    // invokeinterface java/util/List.toArray()[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 57 , L1534755892 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/Arrays.sort([Ljava/lang/Object;Ljava/util/Comparator;)V
    {
        sp -= 3;
        func_java_util_Arrays_sort___3Ljava_lang_Object_2Ljava_util_Comparator_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 58 , L1548081008 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokeinterface java/util/List.listIterator()Ljava/util/ListIterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_ListIterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 198, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 59 , L753321708 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // arraylength  label  L753321708
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[5].i = stack[--sp].i;
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L464400749:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L343563528;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L464400749 bc index = 
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
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 60 , L1719072416 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface java/util/ListIterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 199, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 61 , L2092801316 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // invokeinterface java/util/ListIterator.set(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 199, 8);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 59 , L376635015 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L464400749;
    L343563528:
    //  line no 63 , L343563528 , bytecode index = 
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

void bridge_java_util_List_sort__Ljava_util_Comparator_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_List_sort__Ljava_util_Comparator_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_util_ListIterator* func_java_util_List_listIterator___Ljava_util_ListIterator_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 498, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_List_listIterator___Ljava_util_ListIterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_List_listIterator___Ljava_util_ListIterator_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_util_ListIterator* func_java_util_List_listIterator__I_Ljava_util_ListIterator_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 499, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_List_listIterator__I_Ljava_util_ListIterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_List_listIterator__I_Ljava_util_ListIterator_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_java_util_List_add__ILjava_lang_Object_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 500, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_List_add__ILjava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_List_add__ILjava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
s32 func_java_util_List_indexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 501, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_List_indexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_List_indexOf__Ljava_lang_Object_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_java_util_List_lastIndexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 502, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_List_lastIndexOf__Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_List_lastIndexOf__Ljava_lang_Object_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_lang_Object* func_java_util_List_set__ILjava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 503, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_List_set__ILjava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_List_set__ILjava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
struct java_util_List* func_java_util_List_subList__II_Ljava_util_List_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 504, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_List_subList__II_Ljava_util_List_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_List_subList__II_Ljava_util_List_2(runtime, ins, para[0].i);
}


