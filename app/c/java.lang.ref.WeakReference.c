// CLASS: java/lang/ref/WeakReference extends java/lang/ref/Reference
#include "metadata.h"


// generation
// globals
//struct java_lang_ref_WeakReference_static {};



__refer arr_vmtable_java_lang_ref_WeakReference_from_java_lang_ref_WeakReference[] = {
    NULL
};
__refer arr_vmtable_java_lang_ref_WeakReference_from_java_lang_ref_Reference[] = {
    func_java_lang_ref_Reference_get___Ljava_lang_Object_2,  //0
    func_java_lang_ref_Reference_clear___V,  //1
    func_java_lang_ref_Reference_isEnqueued___Z,  //2
    func_java_lang_ref_Reference_enqueue___Z,  //3
    func_java_lang_ref_Reference_markItAsWeak__Z_V  //4
};
__refer arr_vmtable_java_lang_ref_WeakReference_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_ref_WeakReference[] = {
    {211, 0, arr_vmtable_java_lang_ref_WeakReference_from_java_lang_ref_WeakReference}, //0
    {38, 5, arr_vmtable_java_lang_ref_WeakReference_from_java_lang_ref_Reference}, //1
    {5, 10, arr_vmtable_java_lang_ref_WeakReference_from_java_lang_Object}, //2
};



// locals: 3
// stack: 3
// args: 2
void func_java_lang_ref_WeakReference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_ref_ReferenceQueue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1177, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 6 , L1056862342 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 6;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/ref/Reference.<init>(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ref_Reference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 7 , L1734184086 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/lang/ref/WeakReference.markItAsWeak(Z)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 38, 4);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 8 , L1947941827 , bytecode index = 
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

void bridge_java_lang_ref_WeakReference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_WeakReference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 3
// args: 1
void func_java_lang_ref_WeakReference__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1178, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 11 , L1667534569 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 11;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/lang/ref/WeakReference.<init>(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ref_WeakReference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 12 , L1758893871 , bytecode index = 
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

void bridge_java_lang_ref_WeakReference__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_WeakReference__init___Ljava_lang_Object_2_V(runtime, ins);
}


