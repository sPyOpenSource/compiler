// CLASS: java/util/WeakHashMap$HashIterator extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_WeakHashMap_00024HashIterator_static {};



__refer arr_vmtable_java_util_WeakHashMap_00024HashIterator_from_java_util_WeakHashMap_00024HashIterator[] = {
    func_java_util_WeakHashMap_00024HashIterator_hasNext___Z,  //0
    func_java_util_WeakHashMap_00024HashIterator_nextEntry___Ljava_util_WeakHashMap_00024Entry_2,  //1
    func_java_util_WeakHashMap_00024HashIterator_remove___V  //2
};
__refer arr_vmtable_java_util_WeakHashMap_00024HashIterator_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_WeakHashMap_00024HashIterator_from_java_util_Iterator[] = {
    func_java_util_WeakHashMap_00024HashIterator_hasNext___Z,  //0
    func_java_util_Iterator_next___Ljava_lang_Object_2,  //1
    func_java_util_WeakHashMap_00024HashIterator_remove___V  //2
};
VMTable vmtable_java_util_WeakHashMap_00024HashIterator[] = {
    {246, 3, arr_vmtable_java_util_WeakHashMap_00024HashIterator_from_java_util_WeakHashMap_00024HashIterator}, //0
    {5, 10, arr_vmtable_java_util_WeakHashMap_00024HashIterator_from_java_lang_Object}, //1
    {80, 3, arr_vmtable_java_util_WeakHashMap_00024HashIterator_from_java_util_Iterator}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_WeakHashMap_00024HashIterator__init___Ljava_util_WeakHashMap_2_V(JThreadRuntime *runtime, struct java_util_WeakHashMap* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1751, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 453 , L954937264 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 453;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/WeakHashMap$HashIterator this$0 Ljava/util/WeakHashMap;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->this_000240_6 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 443 , L1164436797 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$HashIterator entry Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->entry_1 = rstack[sp + 1].obj;
    ; 
    //  line no 444 , L1934729582 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$HashIterator lastReturned Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->lastReturned_2 = rstack[sp + 1].obj;
    ; 
    //  line no 445 , L1538745405 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_6;
    sp += 0;
    // getfield java/util/WeakHashMap modCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->modCount_10;
    sp += 0;
    // putfield java/util/WeakHashMap$HashIterator expectedModCount I
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->expectedModCount_3 = stack[sp + 1].i;
    ; 
    //  line no 448 , L985679444 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$HashIterator nextKey Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->nextKey_4 = rstack[sp + 1].obj;
    ; 
    //  line no 451 , L1081344572 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$HashIterator currentKey Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->currentKey_5 = rstack[sp + 1].obj;
    ; 
    //  line no 454 , L1053856141 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/WeakHashMap.isEmpty()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 190, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1579584742;
    // iconst_0
    stack[sp++].i = 0;
    goto L1726780304;
    L1579584742:
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    // arraylength  label  L1579584742
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    L1726780304:
    // putfield java/util/WeakHashMap$HashIterator index I
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->index_0 = stack[sp + 1].i;
    ; 
    //  line no 455 , L115939475 , bytecode index = 
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

void bridge_java_util_WeakHashMap_00024HashIterator__init___Ljava_util_WeakHashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_00024HashIterator__init___Ljava_util_WeakHashMap_2_V(runtime, ins);
}


// locals: 4
// stack: 2
// args: 0
s8 func_java_util_WeakHashMap_00024HashIterator_hasNext___Z(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1752, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 458 , L1445222369 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 458;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_6;
    sp += 0;
    // getfield java/util/WeakHashMap table [Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    L1414934182:
    //  line no 460 , L1414934182 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator nextKey Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->nextKey_4;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L439720255;
    ; 
    //  line no 461 , L1527906606 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator entry Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->entry_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 462 , L796774130 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator index I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->index_0;
    sp += 0;
    local[3].i = stack[--sp].i;
    L1245439653:
    //  line no 463 , L1245439653 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L2096194236;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  <= 0) goto L2096194236;
    ; 
    //  line no 464 , L924915581 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iinc slot 3 value -1
    local[3].i += -1;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L924915581 bc index = 
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1245439653;
    L2096194236:
    //  line no 465 , L2096194236 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/WeakHashMap$HashIterator entry Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->entry_1 = rstack[sp + 1].obj;
    ; 
    //  line no 466 , L1986676021 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield java/util/WeakHashMap$HashIterator index I
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->index_0 = stack[sp + 1].i;
    ; 
    //  line no 467 , L1668385683 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L350413251;
    ; 
    //  line no 468 , L726107869 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$HashIterator currentKey Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->currentKey_5 = rstack[sp + 1].obj;
    ; 
    //  line no 469 , L253767021 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L350413251:
    //  line no 471 , L350413251 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/WeakHashMap$Entry.get()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/WeakHashMap$HashIterator nextKey Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->nextKey_4 = rstack[sp + 1].obj;
    ; 
    //  line no 472 , L1625428489 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator nextKey Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->nextKey_4;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1661803311;
    ; 
    //  line no 473 , L1953175805 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator entry Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->entry_1;
    sp += 0;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    // putfield java/util/WeakHashMap$HashIterator entry Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->entry_1 = rstack[sp + 1].obj;
    L1661803311:
    //  line no 474 , L1661803311 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1414934182;
    L439720255:
    //  line no 475 , L439720255 , bytecode index = 
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

void bridge_java_util_WeakHashMap_00024HashIterator_hasNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_WeakHashMap_00024HashIterator_hasNext___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_util_WeakHashMap_00024Entry* func_java_util_WeakHashMap_00024HashIterator_nextEntry___Ljava_util_WeakHashMap_00024Entry_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1753, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 480 , L179060558 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 480;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_6;
    sp += 0;
    // getfield java/util/WeakHashMap modCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->modCount_10;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator expectedModCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->expectedModCount_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L32737623;
    ; 
    //  line no 481 , L770950500 , bytecode index = 
    // new java/util/ConcurrentModificationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 79);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/ConcurrentModificationException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ConcurrentModificationException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L770950500 in labeltable is :L770950500
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 481;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L32737623:
    //  line no 482 , L32737623 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator nextKey Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->nextKey_4;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L655713354;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/WeakHashMap$HashIterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 246, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L655713354;
    ; 
    //  line no 483 , L1277716905 , bytecode index = 
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
    //     L1277716905 in labeltable is :L1277716905
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 483;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L655713354:
    //  line no 485 , L655713354 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator entry Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->entry_1;
    sp += 0;
    // putfield java/util/WeakHashMap$HashIterator lastReturned Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->lastReturned_2 = rstack[sp + 1].obj;
    ; 
    //  line no 486 , L1368193098 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator entry Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->entry_1;
    sp += 0;
    // getfield java/util/WeakHashMap$Entry next Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024Entry*)rstack[sp - 1].obj)->next_5;
    sp += 0;
    // putfield java/util/WeakHashMap$HashIterator entry Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->entry_1 = rstack[sp + 1].obj;
    ; 
    //  line no 487 , L1659363322 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator nextKey Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->nextKey_4;
    sp += 0;
    // putfield java/util/WeakHashMap$HashIterator currentKey Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->currentKey_5 = rstack[sp + 1].obj;
    ; 
    //  line no 488 , L1859965144 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$HashIterator nextKey Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->nextKey_4 = rstack[sp + 1].obj;
    ; 
    //  line no 489 , L1630968203 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator lastReturned Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->lastReturned_2;
    sp += 0;
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

void bridge_java_util_WeakHashMap_00024HashIterator_nextEntry___Ljava_util_WeakHashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_WeakHashMap_00024HashIterator_nextEntry___Ljava_util_WeakHashMap_00024Entry_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_util_WeakHashMap_00024HashIterator_remove___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1754, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 493 , L193625667 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 493;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator lastReturned Ljava/util/WeakHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->lastReturned_2;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L56112634;
    ; 
    //  line no 494 , L1459035867 , bytecode index = 
    // new java/lang/IllegalStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 78);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalStateException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalStateException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1459035867 in labeltable is :L1459035867
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 494;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L56112634:
    //  line no 495 , L56112634 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_6;
    sp += 0;
    // getfield java/util/WeakHashMap modCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->modCount_10;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator expectedModCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->expectedModCount_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1913113425;
    ; 
    //  line no 496 , L707250996 , bytecode index = 
    // new java/util/ConcurrentModificationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 79);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/ConcurrentModificationException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ConcurrentModificationException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L707250996 in labeltable is :L707250996
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 496;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1913113425:
    //  line no 498 , L1913113425 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_6;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator currentKey Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->currentKey_5;
    sp += 0;
    // invokevirtual java/util/WeakHashMap.remove(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 190, 9);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 499 , L1754451055 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/WeakHashMap$HashIterator this$0 Ljava/util/WeakHashMap;
    rstack[sp - 1].obj = ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_6;
    sp += 0;
    // getfield java/util/WeakHashMap modCount I
    stack[sp - 1].i = ((struct java_util_WeakHashMap*)rstack[sp - 1].obj)->modCount_10;
    sp += 0;
    // putfield java/util/WeakHashMap$HashIterator expectedModCount I
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->expectedModCount_3 = stack[sp + 1].i;
    ; 
    //  line no 500 , L117249632 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$HashIterator lastReturned Ljava/util/WeakHashMap$Entry;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->lastReturned_2 = rstack[sp + 1].obj;
    ; 
    //  line no 501 , L1248598189 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/WeakHashMap$HashIterator currentKey Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_WeakHashMap_00024HashIterator*)rstack[sp + 0].obj)->currentKey_5 = rstack[sp + 1].obj;
    ; 
    //  line no 502 , L1585841343 , bytecode index = 
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

void bridge_java_util_WeakHashMap_00024HashIterator_remove___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_WeakHashMap_00024HashIterator_remove___V(runtime, ins);
}


