// CLASS: java/util/HashMap$HashIterator extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_HashMap_00024HashIterator_static {};



__refer arr_vmtable_java_util_HashMap_00024HashIterator_from_java_util_HashMap_00024HashIterator[] = {
    func_java_util_HashMap_00024HashIterator_hasNext___Z,  //0
    func_java_util_HashMap_00024HashIterator_nextEntry___Ljava_util_HashMap_00024Entry_2,  //1
    func_java_util_HashMap_00024HashIterator_remove___V  //2
};
__refer arr_vmtable_java_util_HashMap_00024HashIterator_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_HashMap_00024HashIterator_from_java_util_Iterator[] = {
    func_java_util_HashMap_00024HashIterator_hasNext___Z,  //0
    func_java_util_Iterator_next___Ljava_lang_Object_2,  //1
    func_java_util_HashMap_00024HashIterator_remove___V  //2
};
VMTable vmtable_java_util_HashMap_00024HashIterator[] = {
    {81, 3, arr_vmtable_java_util_HashMap_00024HashIterator_from_java_util_HashMap_00024HashIterator}, //0
    {5, 10, arr_vmtable_java_util_HashMap_00024HashIterator_from_java_lang_Object}, //1
    {80, 3, arr_vmtable_java_util_HashMap_00024HashIterator_from_java_util_Iterator}, //2
};



// locals: 5
// stack: 2
// args: 1
void func_java_util_HashMap_00024HashIterator__init___Ljava_util_HashMap_2_V(JThreadRuntime *runtime, struct java_util_HashMap* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1747, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 443 , L806738808 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 443;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/HashMap$HashIterator this$0 Ljava/util/HashMap;
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->this_000240_4 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 444 , L1365163763 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/util/HashMap modCount I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // putfield java/util/HashMap$HashIterator expectedModCount I
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->expectedModCount_1 = stack[sp + 1].i;
    ; 
    //  line no 445 , L1414924274 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 446 , L957387062 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L957387062
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 447 , L666911607 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 448 , L55429210 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/util/HashMap size I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->size_6;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1732261462;
    L1516536489:
    //  line no 449 , L1516536489 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  <= 0) goto L1732261462;
    rstack[sp++].obj = rlocal[2].obj;
    // iinc slot 3 value -1
    local[3].i += -1;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1516536489 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[4].obj = rstack[--sp].obj;
    if(rstack[--sp].obj  != NULL) goto L1732261462;
    ; 
    //  line no 450 , L2140846441 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1516536489;
    L1732261462:
    //  line no 452 , L1732261462 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield java/util/HashMap$HashIterator next Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->next_0 = rstack[sp + 1].obj;
    ; 
    //  line no 453 , L318288344 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield java/util/HashMap$HashIterator index I
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->index_2 = stack[sp + 1].i;
    ; 
    //  line no 454 , L1953290071 , bytecode index = 
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

void bridge_java_util_HashMap_00024HashIterator__init___Ljava_util_HashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_00024HashIterator__init___Ljava_util_HashMap_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_HashMap_00024HashIterator_hasNext___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1748, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 457 , L546886525 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 457;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->next_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L2008666311;
    // iconst_1
    stack[sp++].i = 1;
    goto L1711105800;
    L2008666311:
    // iconst_0
    stack[sp++].i = 0;
    L1711105800:
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

void bridge_java_util_HashMap_00024HashIterator_hasNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_HashMap_00024HashIterator_hasNext___Z(runtime, ins);
}


// locals: 5
// stack: 3
// args: 0
struct java_util_HashMap_00024Entry* func_java_util_HashMap_00024HashIterator_nextEntry___Ljava_util_HashMap_00024Entry_2(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1749, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 461 , L310350177 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 461;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator this$0 Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    // getfield java/util/HashMap modCount I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator expectedModCount I
    stack[sp - 1].i = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->expectedModCount_1;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L737756161;
    ; 
    //  line no 462 , L624079697 , bytecode index = 
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
    //     L624079697 in labeltable is :L624079697
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 462;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L737756161:
    //  line no 463 , L737756161 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->next_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 464 , L70555476 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1781459498;
    ; 
    //  line no 465 , L194408994 , bytecode index = 
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
    //     L194408994 in labeltable is :L194408994
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 465;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1781459498:
    //  line no 467 , L1781459498 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/util/HashMap$Entry next Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->next_3;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 468 , L990830650 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator this$0 Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    // getfield java/util/HashMap table [Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap*)rstack[sp - 1].obj)->table_5;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 469 , L463494712 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator index I
    stack[sp - 1].i = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->index_2;
    sp += 0;
    local[4].i = stack[--sp].i;
    L113416412:
    //  line no 470 , L113416412 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L1048444228;
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L1048444228;
    ; 
    //  line no 471 , L1916720513 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iinc slot 4 value -1
    local[4].i += -1;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1916720513 bc index = 
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
    goto L113416412;
    L1048444228:
    //  line no 472 , L1048444228 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // putfield java/util/HashMap$HashIterator index I
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->index_2 = stack[sp + 1].i;
    ; 
    //  line no 473 , L1802896480 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/HashMap$HashIterator next Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->next_0 = rstack[sp + 1].obj;
    ; 
    //  line no 474 , L2036360618 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/HashMap$HashIterator current Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->current_3 = rstack[sp + 1].obj;
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

void bridge_java_util_HashMap_00024HashIterator_nextEntry___Ljava_util_HashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_HashMap_00024HashIterator_nextEntry___Ljava_util_HashMap_00024Entry_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
void func_java_util_HashMap_00024HashIterator_remove___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1750, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 478 , L741370455 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 478;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator current Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->current_3;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L2000563893;
    ; 
    //  line no 479 , L227100877 , bytecode index = 
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
    //     L227100877 in labeltable is :L227100877
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 479;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2000563893:
    //  line no 480 , L2000563893 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator this$0 Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    // getfield java/util/HashMap modCount I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator expectedModCount I
    stack[sp - 1].i = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->expectedModCount_1;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L339126187;
    ; 
    //  line no 481 , L997918120 , bytecode index = 
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
    //     L997918120 in labeltable is :L997918120
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 481;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L339126187:
    //  line no 482 , L339126187 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator current Ljava/util/HashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->current_3;
    sp += 0;
    // getfield java/util/HashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 483 , L1027006452 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/HashMap$HashIterator current Ljava/util/HashMap$Entry;
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->current_3 = rstack[sp + 1].obj;
    ; 
    //  line no 484 , L2059282367 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator this$0 Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.removeEntryForKey(Ljava/lang/Object;)Ljava/util/HashMap$Entry;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_HashMap_00024Entry* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 12);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 485 , L1536478396 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/HashMap$HashIterator this$0 Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct java_util_HashMap_00024HashIterator*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    // getfield java/util/HashMap modCount I
    stack[sp - 1].i = ((struct java_util_HashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // putfield java/util/HashMap$HashIterator expectedModCount I
    sp -= 2;
    ((struct java_util_HashMap_00024HashIterator*)rstack[sp + 0].obj)->expectedModCount_1 = stack[sp + 1].i;
    ; 
    //  line no 486 , L950125603 , bytecode index = 
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

void bridge_java_util_HashMap_00024HashIterator_remove___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_HashMap_00024HashIterator_remove___V(runtime, ins);
}


