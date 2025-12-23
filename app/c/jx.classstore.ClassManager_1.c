// CLASS: jx/classstore/ClassManager$1 extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_classstore_ClassManager_000241_static {};



__refer arr_vmtable_jx_classstore_ClassManager_000241_from_jx_classstore_ClassManager_000241[] = {
    func_jx_classstore_ClassManager_000241_hasNext___Z,  //0
    func_jx_classstore_ClassManager_000241_next___Ljava_lang_Object_2  //1
};
__refer arr_vmtable_jx_classstore_ClassManager_000241_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_classstore_ClassManager_000241_from_jx_collections_Iterator[] = {
    func_jx_classstore_ClassManager_000241_hasNext___Z,  //0
    func_jx_classstore_ClassManager_000241_next___Ljava_lang_Object_2  //1
};
VMTable vmtable_jx_classstore_ClassManager_000241[] = {
    {89, 2, arr_vmtable_jx_classstore_ClassManager_000241_from_jx_classstore_ClassManager_000241}, //0
    {10, 11, arr_vmtable_jx_classstore_ClassManager_000241_from_java_lang_Object}, //1
    {88, 2, arr_vmtable_jx_classstore_ClassManager_000241_from_jx_collections_Iterator}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_jx_classstore_ClassManager_000241__init___Ljx_classstore_ClassManager_2_V(JThreadRuntime *runtime, struct jx_classstore_ClassManager* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 282, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 116 , L138776324 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 116;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/classstore/ClassManager$1 this$0 Ljx/classstore/ClassManager;
    sp -= 2;
    ((struct jx_classstore_ClassManager_000241*)rstack[sp + 0].obj)->this_000240_2 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 117 , L1208442275 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/classstore/ClassManager$1 this$0 Ljx/classstore/ClassManager;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // getfield jx/classstore/ClassManager domClassStore Ljx/classstore/ClassStore;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager*)rstack[sp - 1].obj)->domClassStore_1;
    sp += 0;
    // invokevirtual jx/classstore/ClassStore.iterator()Ljx/collections/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_collections_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 87, 6);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/classstore/ClassManager$1 d Ljx/collections/Iterator;
    sp -= 2;
    ((struct jx_classstore_ClassManager_000241*)rstack[sp + 0].obj)->d_0 = rstack[sp + 1].obj;
    ; 
    //  line no 118 , L1758008124 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/classstore/ClassManager$1 this$0 Ljx/classstore/ClassManager;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // getfield jx/classstore/ClassManager libClassStore Ljx/classstore/ClassStore;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager*)rstack[sp - 1].obj)->libClassStore_0;
    sp += 0;
    // invokevirtual jx/classstore/ClassStore.iterator()Ljx/collections/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_collections_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 87, 6);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/classstore/ClassManager$1 l Ljx/collections/Iterator;
    sp -= 2;
    ((struct jx_classstore_ClassManager_000241*)rstack[sp + 0].obj)->l_1 = rstack[sp + 1].obj;
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

void bridge_jx_classstore_ClassManager_000241__init___Ljx_classstore_ClassManager_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_classstore_ClassManager_000241__init___Ljx_classstore_ClassManager_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_jx_classstore_ClassManager_000241_hasNext___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 283, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 120 , L1579957528 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 120;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/classstore/ClassManager$1 d Ljx/collections/Iterator;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager_000241*)rstack[sp - 1].obj)->d_0;
    sp += 0;
    // invokeinterface jx/collections/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 88, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L750029115;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/classstore/ClassManager$1 l Ljx/collections/Iterator;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager_000241*)rstack[sp - 1].obj)->l_1;
    sp += 0;
    // invokeinterface jx/collections/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 88, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L214187874;
    L750029115:
    // iconst_1
    stack[sp++].i = 1;
    goto L1528923159;
    L214187874:
    // iconst_0
    stack[sp++].i = 0;
    L1528923159:
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

void bridge_jx_classstore_ClassManager_000241_hasNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_classstore_ClassManager_000241_hasNext___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_jx_classstore_ClassManager_000241_next___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 284, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 123 , L1823409783 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 123;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/classstore/ClassManager$1 d Ljx/collections/Iterator;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager_000241*)rstack[sp - 1].obj)->d_0;
    sp += 0;
    // invokeinterface jx/collections/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 88, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1094523823;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/classstore/ClassManager$1 d Ljx/collections/Iterator;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager_000241*)rstack[sp - 1].obj)->d_0;
    sp += 0;
    // invokeinterface jx/collections/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 88, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1094523823:
    //  line no 124 , L1094523823 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/classstore/ClassManager$1 l Ljx/collections/Iterator;
    rstack[sp - 1].obj = ((struct jx_classstore_ClassManager_000241*)rstack[sp - 1].obj)->l_1;
    sp += 0;
    // invokeinterface jx/collections/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 88, 1);
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

void bridge_jx_classstore_ClassManager_000241_next___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_classstore_ClassManager_000241_next___Ljava_lang_Object_2(runtime, ins);
}


