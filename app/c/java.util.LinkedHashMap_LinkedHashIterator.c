// CLASS: java/util/LinkedHashMap$LinkedHashIterator extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_LinkedHashMap_00024LinkedHashIterator_static {};



__refer arr_vmtable_java_util_LinkedHashMap_00024LinkedHashIterator_from_java_util_LinkedHashMap_00024LinkedHashIterator[] = {
    func_java_util_LinkedHashMap_00024LinkedHashIterator_hasNext___Z,  //0
    func_java_util_LinkedHashMap_00024LinkedHashIterator_remove___V,  //1
    func_java_util_LinkedHashMap_00024LinkedHashIterator_nextEntry___Ljava_util_LinkedHashMap_00024Entry_2  //2
};
__refer arr_vmtable_java_util_LinkedHashMap_00024LinkedHashIterator_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_LinkedHashMap_00024LinkedHashIterator_from_java_util_Iterator[] = {
    func_java_util_LinkedHashMap_00024LinkedHashIterator_hasNext___Z,  //0
    func_java_util_Iterator_next___Ljava_lang_Object_2,  //1
    func_java_util_LinkedHashMap_00024LinkedHashIterator_remove___V  //2
};
VMTable vmtable_java_util_LinkedHashMap_00024LinkedHashIterator[] = {
    {112, 3, arr_vmtable_java_util_LinkedHashMap_00024LinkedHashIterator_from_java_util_LinkedHashMap_00024LinkedHashIterator}, //0
    {5, 10, arr_vmtable_java_util_LinkedHashMap_00024LinkedHashIterator_from_java_lang_Object}, //1
    {80, 3, arr_vmtable_java_util_LinkedHashMap_00024LinkedHashIterator_from_java_util_Iterator}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_LinkedHashMap_00024LinkedHashIterator__init___Ljava_util_LinkedHashMap_2_V(JThreadRuntime *runtime, struct java_util_LinkedHashMap* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3182, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 133 , L771715205 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 133;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp + 0].obj)->this_000240_3 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 134 , L799692219 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // invokestatic java/util/LinkedHashMap.access$100(Ljava/util/LinkedHashMap;)Ljava/util/LinkedHashMap$Entry;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_LinkedHashMap_access_00024100__Ljava_util_LinkedHashMap_2_Ljava_util_LinkedHashMap_00024Entry_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield java/util/LinkedHashMap$Entry after Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->after_5;
    sp += 0;
    // putfield java/util/LinkedHashMap$LinkedHashIterator nextEntry Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp + 0].obj)->nextEntry_0 = rstack[sp + 1].obj;
    ; 
    //  line no 135 , L1343838143 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/LinkedHashMap$LinkedHashIterator lastReturned Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp + 0].obj)->lastReturned_1 = rstack[sp + 1].obj;
    ; 
    //  line no 138 , L1562221939 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // getfield java/util/LinkedHashMap modCount I
    stack[sp - 1].i = ((struct java_util_LinkedHashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // putfield java/util/LinkedHashMap$LinkedHashIterator expectedModCount I
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp + 0].obj)->expectedModCount_2 = stack[sp + 1].i;
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

void bridge_java_util_LinkedHashMap_00024LinkedHashIterator__init___Ljava_util_LinkedHashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024LinkedHashIterator__init___Ljava_util_LinkedHashMap_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_java_util_LinkedHashMap_00024LinkedHashIterator_hasNext___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3183, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 141 , L1984577117 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 141;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator nextEntry Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->nextEntry_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // invokestatic java/util/LinkedHashMap.access$100(Ljava/util/LinkedHashMap;)Ljava/util/LinkedHashMap$Entry;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_LinkedHashMap_access_00024100__Ljava_util_LinkedHashMap_2_Ljava_util_LinkedHashMap_00024Entry_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L1819552644;
    // iconst_1
    stack[sp++].i = 1;
    goto L1572066684;
    L1819552644:
    // iconst_0
    stack[sp++].i = 0;
    L1572066684:
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

void bridge_java_util_LinkedHashMap_00024LinkedHashIterator_hasNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_LinkedHashMap_00024LinkedHashIterator_hasNext___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_util_LinkedHashMap_00024LinkedHashIterator_remove___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3184, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 145 , L1958375413 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 145;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator lastReturned Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->lastReturned_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L962548461;
    ; 
    //  line no 146 , L2055501967 , bytecode index = 
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
    //     L2055501967 in labeltable is :L2055501967
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 146;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L962548461:
    //  line no 147 , L962548461 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // getfield java/util/LinkedHashMap modCount I
    stack[sp - 1].i = ((struct java_util_LinkedHashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator expectedModCount I
    stack[sp - 1].i = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->expectedModCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L16957838;
    ; 
    //  line no 148 , L652268444 , bytecode index = 
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
    //     L652268444 in labeltable is :L652268444
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 148;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L16957838:
    //  line no 150 , L16957838 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator lastReturned Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->lastReturned_1;
    sp += 0;
    // getfield java/util/LinkedHashMap$Entry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // invokevirtual java/util/LinkedHashMap.remove(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 171, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 151 , L1709913495 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/LinkedHashMap$LinkedHashIterator lastReturned Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp + 0].obj)->lastReturned_1 = rstack[sp + 1].obj;
    ; 
    //  line no 152 , L1014135205 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // getfield java/util/LinkedHashMap modCount I
    stack[sp - 1].i = ((struct java_util_LinkedHashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // putfield java/util/LinkedHashMap$LinkedHashIterator expectedModCount I
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp + 0].obj)->expectedModCount_2 = stack[sp + 1].i;
    ; 
    //  line no 153 , L736874772 , bytecode index = 
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

void bridge_java_util_LinkedHashMap_00024LinkedHashIterator_remove___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024LinkedHashIterator_remove___V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 0
struct java_util_LinkedHashMap_00024Entry* func_java_util_LinkedHashMap_00024LinkedHashIterator_nextEntry___Ljava_util_LinkedHashMap_00024Entry_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3185, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 156 , L927744186 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 156;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // getfield java/util/LinkedHashMap modCount I
    stack[sp - 1].i = ((struct java_util_LinkedHashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator expectedModCount I
    stack[sp - 1].i = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->expectedModCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L417118375;
    ; 
    //  line no 157 , L1842002393 , bytecode index = 
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
    //     L1842002393 in labeltable is :L1842002393
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 157;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L417118375:
    //  line no 158 , L417118375 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator nextEntry Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->nextEntry_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator this$0 Ljava/util/LinkedHashMap;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // invokestatic java/util/LinkedHashMap.access$100(Ljava/util/LinkedHashMap;)Ljava/util/LinkedHashMap$Entry;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_LinkedHashMap_access_00024100__Ljava_util_LinkedHashMap_2_Ljava_util_LinkedHashMap_00024Entry_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1511319053;
    ; 
    //  line no 159 , L260580453 , bytecode index = 
    // new java/util/NoSuchElementException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 77);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 5297);
    // invokespecial java/util/NoSuchElementException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_NoSuchElementException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L260580453 in labeltable is :L260580453
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 159;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1511319053:
    //  line no 161 , L1511319053 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$LinkedHashIterator nextEntry Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp - 1].obj)->nextEntry_0;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/LinkedHashMap$LinkedHashIterator lastReturned Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp + 0].obj)->lastReturned_1 = rstack[sp + 1].obj;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 162 , L1928117427 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/util/LinkedHashMap$Entry after Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->after_5;
    sp += 0;
    // putfield java/util/LinkedHashMap$LinkedHashIterator nextEntry Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024LinkedHashIterator*)rstack[sp + 0].obj)->nextEntry_0 = rstack[sp + 1].obj;
    ; 
    //  line no 163 , L1246807878 , bytecode index = 
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

void bridge_java_util_LinkedHashMap_00024LinkedHashIterator_nextEntry___Ljava_util_LinkedHashMap_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_LinkedHashMap_00024LinkedHashIterator_nextEntry___Ljava_util_LinkedHashMap_00024Entry_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_java_util_LinkedHashMap_00024LinkedHashIterator__init___Ljava_util_LinkedHashMap_2Ljava_util_LinkedHashMap_000241_2_V(JThreadRuntime *runtime, struct java_util_LinkedHashMap* p0, struct java_util_LinkedHashMap_000241* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3186, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 133 , L2045560071 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 133;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/LinkedHashMap$LinkedHashIterator.<init>(Ljava/util/LinkedHashMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_LinkedHashMap_00024LinkedHashIterator__init___Ljava_util_LinkedHashMap_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_LinkedHashMap_00024LinkedHashIterator__init___Ljava_util_LinkedHashMap_2Ljava_util_LinkedHashMap_000241_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024LinkedHashIterator__init___Ljava_util_LinkedHashMap_2Ljava_util_LinkedHashMap_000241_2_V(runtime, ins, para[0].obj);
}


