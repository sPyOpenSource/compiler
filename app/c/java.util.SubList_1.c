// CLASS: java/util/SubList$1 extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_SubList_000241_static {};



__refer arr_vmtable_java_util_SubList_000241_from_java_util_SubList_000241[] = {
    func_java_util_SubList_000241_hasNext___Z,  //0
    func_java_util_SubList_000241_next___Ljava_lang_Object_2,  //1
    func_java_util_SubList_000241_hasPrevious___Z,  //2
    func_java_util_SubList_000241_previous___Ljava_lang_Object_2,  //3
    func_java_util_SubList_000241_nextIndex___I,  //4
    func_java_util_SubList_000241_previousIndex___I,  //5
    func_java_util_SubList_000241_remove___V,  //6
    func_java_util_SubList_000241_set__Ljava_lang_Object_2_V,  //7
    func_java_util_SubList_000241_add__Ljava_lang_Object_2_V  //8
};
__refer arr_vmtable_java_util_SubList_000241_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
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
__refer arr_vmtable_java_util_SubList_000241_from_java_util_ListIterator[] = {
    func_java_util_SubList_000241_hasNext___Z,  //0
    func_java_util_SubList_000241_next___Ljava_lang_Object_2,  //1
    func_java_util_SubList_000241_hasPrevious___Z,  //2
    func_java_util_SubList_000241_previous___Ljava_lang_Object_2,  //3
    func_java_util_SubList_000241_nextIndex___I,  //4
    func_java_util_SubList_000241_previousIndex___I,  //5
    func_java_util_SubList_000241_remove___V,  //6
    func_java_util_SubList_000241_set__Ljava_lang_Object_2_V,  //7
    func_java_util_SubList_000241_add__Ljava_lang_Object_2_V  //8
};
__refer arr_vmtable_java_util_SubList_000241_from_java_util_Iterator[] = {
    func_java_util_SubList_000241_hasNext___Z,  //0
    func_java_util_SubList_000241_next___Ljava_lang_Object_2,  //1
    func_java_util_SubList_000241_remove___V  //2
};
VMTable vmtable_java_util_SubList_000241[] = {
    {412, 9, arr_vmtable_java_util_SubList_000241_from_java_util_SubList_000241}, //0
    {5, 10, arr_vmtable_java_util_SubList_000241_from_java_lang_Object}, //1
    {156, 9, arr_vmtable_java_util_SubList_000241_from_java_util_ListIterator}, //2
    {80, 3, arr_vmtable_java_util_SubList_000241_from_java_util_Iterator}, //3
};



// locals: 3
// stack: 4
// args: 2
void func_java_util_SubList_000241__init___Ljava_util_SubList_2I_V(JThreadRuntime *runtime, struct java_util_SubList* p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3262, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 339 , L2086177500 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 339;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/SubList$1 this$0 Ljava/util/SubList;
    sp -= 2;
    ((struct java_util_SubList_000241*)rstack[sp + 0].obj)->this_000240_2 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield java/util/SubList$1 val$index I
    sp -= 2;
    ((struct java_util_SubList_000241*)rstack[sp + 0].obj)->val_00024index_1 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 340 , L871115788 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$100(Ljava/util/SubList;)Ljava/util/AbstractList;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_SubList_access_00024100__Ljava_util_SubList_2_Ljava_util_AbstractList_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 val$index I
    stack[sp - 1].i = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->val_00024index_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$000(Ljava/util/SubList;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_SubList_access_00024000__Ljava_util_SubList_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/AbstractList.listIterator(I)Ljava/util/ListIterator;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_ListIterator* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 76, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/SubList$1 i Ljava/util/ListIterator;
    sp -= 2;
    ((struct java_util_SubList_000241*)rstack[sp + 0].obj)->i_0 = rstack[sp + 1].obj;
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

void bridge_java_util_SubList_000241__init___Ljava_util_SubList_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_SubList_000241__init___Ljava_util_SubList_2I_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 2
// args: 0
s8 func_java_util_SubList_000241_hasNext___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3263, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 343 , L948422615 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 343;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/SubList$1.nextIndex()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 412, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$200(Ljava/util/SubList;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_SubList_access_00024200__Ljava_util_SubList_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L11646065;
    // iconst_1
    stack[sp++].i = 1;
    goto L1383031847;
    L11646065:
    // iconst_0
    stack[sp++].i = 0;
    L1383031847:
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

void bridge_java_util_SubList_000241_hasNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_SubList_000241_hasNext___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_Object* func_java_util_SubList_000241_next___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3264, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 347 , L1227170244 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 347;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/SubList$1.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 412, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1144653485;
    ; 
    //  line no 348 , L1843207249 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 i Ljava/util/ListIterator;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokeinterface java/util/ListIterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 156, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1144653485:
    //  line no 350 , L1144653485 , bytecode index = 
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
    //     L1144653485 in labeltable is :L1144653485
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 350;
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

void bridge_java_util_SubList_000241_next___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_SubList_000241_next___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_SubList_000241_hasPrevious___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3265, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 354 , L358636931 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 354;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/SubList$1.previousIndex()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 412, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  < 0) goto L33238764;
    // iconst_1
    stack[sp++].i = 1;
    goto L79791382;
    L33238764:
    // iconst_0
    stack[sp++].i = 0;
    L79791382:
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

void bridge_java_util_SubList_000241_hasPrevious___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_SubList_000241_hasPrevious___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_Object* func_java_util_SubList_000241_previous___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3266, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 358 , L1024478363 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 358;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/SubList$1.hasPrevious()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 412, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1698990491;
    ; 
    //  line no 359 , L1839548688 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 i Ljava/util/ListIterator;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokeinterface java/util/ListIterator.previous()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 156, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1698990491:
    //  line no 361 , L1698990491 , bytecode index = 
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
    //     L1698990491 in labeltable is :L1698990491
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 361;
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

void bridge_java_util_SubList_000241_previous___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_SubList_000241_previous___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_java_util_SubList_000241_nextIndex___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3267, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 365 , L605244604 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 365;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 i Ljava/util/ListIterator;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokeinterface java/util/ListIterator.nextIndex()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 156, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$000(Ljava/util/SubList;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_SubList_access_00024000__Ljava_util_SubList_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_SubList_000241_nextIndex___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_SubList_000241_nextIndex___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_java_util_SubList_000241_previousIndex___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3268, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 369 , L586164630 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 369;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 i Ljava/util/ListIterator;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokeinterface java/util/ListIterator.previousIndex()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 156, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$000(Ljava/util/SubList;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_SubList_access_00024000__Ljava_util_SubList_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_SubList_000241_previousIndex___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_SubList_000241_previousIndex___I(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_java_util_SubList_000241_remove___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3269, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 373 , L1119920494 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 373;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 i Ljava/util/ListIterator;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokeinterface java/util/ListIterator.remove()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 156, 6);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 374 , L2007031139 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$100(Ljava/util/SubList;)Ljava/util/AbstractList;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_SubList_access_00024100__Ljava_util_SubList_2_Ljava_util_AbstractList_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield java/util/AbstractList modCount I
    stack[sp - 1].i = ((struct java_util_AbstractList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // invokestatic java/util/SubList.access$302(Ljava/util/SubList;I)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_SubList_access_00024302__Ljava_util_SubList_2I_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 375 , L1413473944 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$210(Ljava/util/SubList;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_SubList_access_00024210__Ljava_util_SubList_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 376 , L1798299644 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/SubList modCount I
    stack[sp - 1].i = ((struct java_util_SubList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/SubList modCount I
    sp -= 2;
    ((struct java_util_SubList*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 377 , L748935206 , bytecode index = 
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

void bridge_java_util_SubList_000241_remove___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_SubList_000241_remove___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_util_SubList_000241_set__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3270, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 380 , L1983472905 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 380;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 i Ljava/util/ListIterator;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/ListIterator.set(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 156, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 381 , L1669104653 , bytecode index = 
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

void bridge_java_util_SubList_000241_set__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_SubList_000241_set__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_SubList_000241_add__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3271, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 384 , L1178270318 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 384;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 i Ljava/util/ListIterator;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/ListIterator.add(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 156, 8);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 385 , L2073484941 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$100(Ljava/util/SubList;)Ljava/util/AbstractList;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_SubList_access_00024100__Ljava_util_SubList_2_Ljava_util_AbstractList_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield java/util/AbstractList modCount I
    stack[sp - 1].i = ((struct java_util_AbstractList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // invokestatic java/util/SubList.access$302(Ljava/util/SubList;I)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_SubList_access_00024302__Ljava_util_SubList_2I_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 386 , L2093834526 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/SubList.access$208(Ljava/util/SubList;)I
    {
        sp -= 2;
        stack[sp].i = func_java_util_SubList_access_00024208__Ljava_util_SubList_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 387 , L1304765785 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/SubList$1 this$0 Ljava/util/SubList;
    rstack[sp - 1].obj = ((struct java_util_SubList_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/SubList modCount I
    stack[sp - 1].i = ((struct java_util_SubList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/SubList modCount I
    sp -= 2;
    ((struct java_util_SubList*)rstack[sp + 0].obj)->modCount_0 = stack[sp + 1].i;
    ; 
    //  line no 388 , L1547521797 , bytecode index = 
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

void bridge_java_util_SubList_000241_add__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_SubList_000241_add__Ljava_lang_Object_2_V(runtime, ins);
}


