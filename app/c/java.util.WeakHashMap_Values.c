// CLASS: java/util/WeakHashMap$Values extends java/util/AbstractCollection
#include "metadata.h"


// generation
// globals
//struct java_util_WeakHashMap_00024Values_static {};



__refer arr_vmtable_java_util_WeakHashMap_00024Values_from_java_util_WeakHashMap_00024Values[] = {
    func_java_util_WeakHashMap_00024Values_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_WeakHashMap_00024Values_size___I,  //1
    func_java_util_WeakHashMap_00024Values_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_WeakHashMap_00024Values_clear___V  //3
};
__refer arr_vmtable_java_util_WeakHashMap_00024Values_from_java_util_AbstractCollection[] = {
    func_java_util_WeakHashMap_00024Values_iterator___Ljava_util_Iterator_2,  //0
    func_java_util_WeakHashMap_00024Values_size___I,  //1
    func_java_util_AbstractCollection_isEmpty___Z,  //2
    func_java_util_WeakHashMap_00024Values_contains__Ljava_lang_Object_2_Z,  //3
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_AbstractCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_AbstractCollection_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_AbstractCollection_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractCollection_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_WeakHashMap_00024Values_clear___V,  //12
    func_java_util_AbstractCollection_toString___Ljava_lang_String_2  //13
};
__refer arr_vmtable_java_util_WeakHashMap_00024Values_from_java_lang_Object[] = {
    func_java_util_AbstractCollection_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_Object_hashCode___I  //9
};
__refer arr_vmtable_java_util_WeakHashMap_00024Values_from_java_util_Collection[] = {
    func_java_util_WeakHashMap_00024Values_size___I,  //0
    func_java_util_AbstractCollection_isEmpty___Z,  //1
    func_java_util_WeakHashMap_00024Values_contains__Ljava_lang_Object_2_Z,  //2
    func_java_util_WeakHashMap_00024Values_iterator___Ljava_util_Iterator_2,  //3
    func_java_util_AbstractCollection_toArray____3Ljava_lang_Object_2,  //4
    func_java_util_AbstractCollection_toArray___3Ljava_lang_Object_2__3Ljava_lang_Object_2,  //5
    func_java_util_AbstractCollection_add__Ljava_lang_Object_2_Z,  //6
    func_java_util_AbstractCollection_remove__Ljava_lang_Object_2_Z,  //7
    func_java_util_AbstractCollection_containsAll__Ljava_util_Collection_2_Z,  //8
    func_java_util_AbstractCollection_addAll__Ljava_util_Collection_2_Z,  //9
    func_java_util_AbstractCollection_removeAll__Ljava_util_Collection_2_Z,  //10
    func_java_util_AbstractCollection_retainAll__Ljava_util_Collection_2_Z,  //11
    func_java_util_WeakHashMap_00024Values_clear___V,  //12
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //13
    func_java_lang_Object_hashCode___I  //14
};
__refer arr_vmtable_java_util_WeakHashMap_00024Values_from_java_lang_Iterable[] = {
    func_java_util_WeakHashMap_00024Values_iterator___Ljava_util_Iterator_2  //0
};
VMTable vmtable_java_util_WeakHashMap_00024Values[] = {
    {193, 4, arr_vmtable_java_util_WeakHashMap_00024Values_from_java_util_WeakHashMap_00024Values}, //0
    {90, 14, arr_vmtable_java_util_WeakHashMap_00024Values_from_java_util_AbstractCollection}, //1
    {5, 10, arr_vmtable_java_util_WeakHashMap_00024Values_from_java_lang_Object}, //2
    {45, 15, arr_vmtable_java_util_WeakHashMap_00024Values_from_java_util_Collection}, //3
    {91, 1, arr_vmtable_java_util_WeakHashMap_00024Values_from_java_lang_Iterable}, //4
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_WeakHashMap_00024Values__init___Ljava_util_WeakHashMap_2_V(JThreadRuntime *runtime, struct java_util_WeakHashMap* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2478, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 566 , L995482901 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 566;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/WeakHashMap$Values this$0 Ljava/util/WeakHashMap;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024Values*)rstack[sp + 0].obj)->this_000240_0 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/AbstractCollection.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractCollection__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_util_WeakHashMap_00024Values__init___Ljava_util_WeakHashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_00024Values__init___Ljava_util_WeakHashMap_2_V(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
struct java_util_Iterator* func_java_util_WeakHashMap_00024Values_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2479, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 568 , L1000592566 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 568;
    // new java/util/WeakHashMap$ValueIterator
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 352);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$Values this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Values*)rstack[sp - 1].obj)->this_000240_0;
    sp += 0;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/WeakHashMap$ValueIterator.<init>(Ljava/util/WeakHashMap;Ljava/util/WeakHashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_00024ValueIterator__init___Ljava_util_WeakHashMap_2Ljava_util_WeakHashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_util_WeakHashMap_00024Values_iterator___Ljava_util_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_00024Values_iterator___Ljava_util_Iterator_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_WeakHashMap_00024Values_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2480, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 572 , L1142931081 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 572;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$Values this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Values*)rstack[sp - 1].obj)->this_000240_0;
    sp += 0;
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

void bridge_java_util_WeakHashMap_00024Values_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_00024Values_size___I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_util_WeakHashMap_00024Values_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2481, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 576 , L1168849885 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 576;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$Values this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Values*)rstack[sp - 1].obj)->this_000240_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/WeakHashMap.containsValue(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 12);
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

void bridge_java_util_WeakHashMap_00024Values_contains__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_00024Values_contains__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_util_WeakHashMap_00024Values_clear___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2482, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 580 , L373485230 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 580;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$Values this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Values*)rstack[sp - 1].obj)->this_000240_0;
    sp += 0;
    // invokevirtual java/util/WeakHashMap.clear()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 190, 11);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 581 , L876669389 , bytecode index = 
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

void bridge_java_util_WeakHashMap_00024Values_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_00024Values_clear___V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_java_util_WeakHashMap_00024Values__init___Ljava_util_WeakHashMap_2Ljava_util_WeakHashMap_000241_2_V(JThreadRuntime *runtime, struct java_util_WeakHashMap* p0, struct java_util_WeakHashMap_000241* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2483, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 566 , L10523395 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 566;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/WeakHashMap$Values.<init>(Ljava/util/WeakHashMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_WeakHashMap_00024Values__init___Ljava_util_WeakHashMap_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_util_WeakHashMap_00024Values__init___Ljava_util_WeakHashMap_2Ljava_util_WeakHashMap_000241_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_00024Values__init___Ljava_util_WeakHashMap_2Ljava_util_WeakHashMap_000241_2_V(runtime, ins, para[0].obj);
}


