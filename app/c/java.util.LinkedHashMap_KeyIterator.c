// CLASS: java/util/LinkedHashMap$KeyIterator extends java/util/LinkedHashMap$LinkedHashIterator
#include "metadata.h"


// generation
// globals
//struct java_util_LinkedHashMap_00024KeyIterator_static {};



__refer arr_vmtable_java_util_LinkedHashMap_00024KeyIterator_from_java_util_LinkedHashMap_00024KeyIterator[] = {
    func_java_util_LinkedHashMap_00024KeyIterator_next___Ljava_lang_Object_2  //0
};
__refer arr_vmtable_java_util_LinkedHashMap_00024KeyIterator_from_java_util_LinkedHashMap_00024LinkedHashIterator[] = {
    func_java_util_LinkedHashMap_00024LinkedHashIterator_hasNext___Z,  //0
    func_java_util_LinkedHashMap_00024LinkedHashIterator_remove___V,  //1
    func_java_util_LinkedHashMap_00024LinkedHashIterator_nextEntry___Ljava_util_LinkedHashMap_00024Entry_2  //2
};
__refer arr_vmtable_java_util_LinkedHashMap_00024KeyIterator_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_LinkedHashMap_00024KeyIterator_from_java_util_Iterator[] = {
    func_java_util_LinkedHashMap_00024LinkedHashIterator_hasNext___Z,  //0
    func_java_util_LinkedHashMap_00024KeyIterator_next___Ljava_lang_Object_2,  //1
    func_java_util_LinkedHashMap_00024LinkedHashIterator_remove___V  //2
};
VMTable vmtable_java_util_LinkedHashMap_00024KeyIterator[] = {
    {113, 1, arr_vmtable_java_util_LinkedHashMap_00024KeyIterator_from_java_util_LinkedHashMap_00024KeyIterator}, //0
    {112, 3, arr_vmtable_java_util_LinkedHashMap_00024KeyIterator_from_java_util_LinkedHashMap_00024LinkedHashIterator}, //1
    {5, 10, arr_vmtable_java_util_LinkedHashMap_00024KeyIterator_from_java_lang_Object}, //2
    {80, 3, arr_vmtable_java_util_LinkedHashMap_00024KeyIterator_from_java_util_Iterator}, //3
};



// locals: 2
// stack: 3
// args: 1
void func_java_util_LinkedHashMap_00024KeyIterator__init___Ljava_util_LinkedHashMap_2_V(JThreadRuntime *runtime, struct java_util_LinkedHashMap* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 604, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 167 , L1793436274 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 167;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/LinkedHashMap$KeyIterator this$0 Ljava/util/LinkedHashMap;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024KeyIterator*)rstack[sp + 0].obj)->this_000240_4 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/LinkedHashMap$LinkedHashIterator.<init>(Ljava/util/LinkedHashMap;Ljava/util/LinkedHashMap$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_LinkedHashMap_00024LinkedHashIterator__init___Ljava_util_LinkedHashMap_2Ljava_util_LinkedHashMap_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_util_LinkedHashMap_00024KeyIterator__init___Ljava_util_LinkedHashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024KeyIterator__init___Ljava_util_LinkedHashMap_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_LinkedHashMap_00024KeyIterator_next___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 605, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 169 , L1549725679 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 169;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/LinkedHashMap$KeyIterator.nextEntry()Ljava/util/LinkedHashMap$Entry;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_LinkedHashMap_00024Entry* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 112, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/LinkedHashMap$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 11, 0);
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

void bridge_java_util_LinkedHashMap_00024KeyIterator_next___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_LinkedHashMap_00024KeyIterator_next___Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_java_util_LinkedHashMap_00024KeyIterator__init___Ljava_util_LinkedHashMap_2Ljava_util_LinkedHashMap_000241_2_V(JThreadRuntime *runtime, struct java_util_LinkedHashMap* p0, struct java_util_LinkedHashMap_000241* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 606, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 167 , L1364767791 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 167;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/LinkedHashMap$KeyIterator.<init>(Ljava/util/LinkedHashMap;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_LinkedHashMap_00024KeyIterator__init___Ljava_util_LinkedHashMap_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_LinkedHashMap_00024KeyIterator__init___Ljava_util_LinkedHashMap_2Ljava_util_LinkedHashMap_000241_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024KeyIterator__init___Ljava_util_LinkedHashMap_2Ljava_util_LinkedHashMap_000241_2_V(runtime, ins, para[0].obj);
}


