// CLASS: java/util/AbstractMap$2$1 extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_AbstractMap_000242_000241_static {};



__refer arr_vmtable_java_util_AbstractMap_000242_000241_from_java_util_AbstractMap_000242_000241[] = {
    func_java_util_AbstractMap_000242_000241_hasNext___Z,  //0
    func_java_util_AbstractMap_000242_000241_next___Ljava_lang_Object_2,  //1
    func_java_util_AbstractMap_000242_000241_remove___V  //2
};
__refer arr_vmtable_java_util_AbstractMap_000242_000241_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_AbstractMap_000242_000241_from_java_util_Iterator[] = {
    func_java_util_AbstractMap_000242_000241_hasNext___Z,  //0
    func_java_util_AbstractMap_000242_000241_next___Ljava_lang_Object_2,  //1
    func_java_util_AbstractMap_000242_000241_remove___V  //2
};
VMTable vmtable_java_util_AbstractMap_000242_000241[] = {
    {244, 3, arr_vmtable_java_util_AbstractMap_000242_000241_from_java_util_AbstractMap_000242_000241}, //0
    {5, 10, arr_vmtable_java_util_AbstractMap_000242_000241_from_java_lang_Object}, //1
    {80, 3, arr_vmtable_java_util_AbstractMap_000242_000241_from_java_util_Iterator}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_AbstractMap_000242_000241__init___Ljava_util_AbstractMap_000242_2_V(JThreadRuntime *runtime, struct java_util_AbstractMap_000242* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2084, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 172 , L1423978346 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 172;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/AbstractMap$2$1 this$1 Ljava/util/AbstractMap$2;
    sp -= 2;
    ((struct java_util_AbstractMap_000242_000241*)rstack[sp + 0].obj)->this_000241_1 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 173 , L401862395 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$2$1 this$1 Ljava/util/AbstractMap$2;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_000242_000241*)rstack[sp - 1].obj)->this_000241_1;
    sp += 0;
    // getfield java/util/AbstractMap$2 this$0 Ljava/util/AbstractMap;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_000242*)rstack[sp - 1].obj)->this_000240_0;
    sp += 0;
    // invokevirtual java/util/AbstractMap.entrySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 130, 11);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 86, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/AbstractMap$2$1 i Ljava/util/Iterator;
    sp -= 2;
    ((struct java_util_AbstractMap_000242_000241*)rstack[sp + 0].obj)->i_0 = rstack[sp + 1].obj;
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

void bridge_java_util_AbstractMap_000242_000241__init___Ljava_util_AbstractMap_000242_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap_000242_000241__init___Ljava_util_AbstractMap_000242_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_AbstractMap_000242_000241_hasNext___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2085, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 176 , L2022562847 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 176;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$2$1 i Ljava/util/Iterator;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_000242_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokeinterface java/util/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 0);
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

void bridge_java_util_AbstractMap_000242_000241_hasNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractMap_000242_000241_hasNext___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_AbstractMap_000242_000241_next___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2086, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 180 , L625971310 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 180;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$2$1 i Ljava/util/Iterator;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_000242_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokeinterface java/util/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 797);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 12, 1);
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

void bridge_java_util_AbstractMap_000242_000241_next___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractMap_000242_000241_next___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_util_AbstractMap_000242_000241_remove___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2087, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 184 , L737897289 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 184;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractMap$2$1 i Ljava/util/Iterator;
    rstack[sp - 1].obj = ((struct java_util_AbstractMap_000242_000241*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokeinterface java/util/Iterator.remove()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 185 , L523528914 , bytecode index = 
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

void bridge_java_util_AbstractMap_000242_000241_remove___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractMap_000242_000241_remove___V(runtime, ins);
}


