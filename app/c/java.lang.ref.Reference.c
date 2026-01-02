// CLASS: java/lang/ref/Reference extends java/lang/Object
#include "metadata.h"

void func_java_lang_ref_Reference_markItAsWeak__Z_V(JThreadRuntime *runtime, s8 p0);

// generation
// globals
//struct java_lang_ref_Reference_static {};



__refer arr_vmtable_java_lang_ref_Reference_from_java_lang_ref_Reference[] = {
    func_java_lang_ref_Reference_get___Ljava_lang_Object_2,  //0
    func_java_lang_ref_Reference_clear___V,  //1
    func_java_lang_ref_Reference_isEnqueued___Z,  //2
    func_java_lang_ref_Reference_enqueue___Z,  //3
    func_java_lang_ref_Reference_markItAsWeak__Z_V  //4
};
__refer arr_vmtable_java_lang_ref_Reference_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_ref_Reference[] = {
    {38, 5, arr_vmtable_java_lang_ref_Reference_from_java_lang_ref_Reference}, //0
    {5, 10, arr_vmtable_java_lang_ref_Reference_from_java_lang_Object}, //1
};



// locals: 3
// stack: 2
// args: 2
void func_java_lang_ref_Reference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_ref_ReferenceQueue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2167, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 10 , L1964117592 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 10;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 11 , L1217883757 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/lang/ref/Reference target Ljava/lang/Object;
    sp -= 2;
    ((struct java_lang_ref_Reference*)rstack[sp + 0].obj)->target_0 = rstack[sp + 1].obj;
    ; 
    //  line no 12 , L708214419 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/lang/ref/Reference queue Ljava/lang/ref/ReferenceQueue;
    sp -= 2;
    ((struct java_lang_ref_Reference*)rstack[sp + 0].obj)->queue_1 = rstack[sp + 1].obj;
    ; 
    //  line no 13 , L2137552114 , bytecode index = 
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

void bridge_java_lang_ref_Reference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_Reference__init___Ljava_lang_Object_2Ljava_lang_ref_ReferenceQueue_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 3
// args: 1
void func_java_lang_ref_Reference__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2168, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 16 , L1769616559 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 16;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
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
    //  line no 17 , L1881218549 , bytecode index = 
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

void bridge_java_lang_ref_Reference__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_Reference__init___Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_lang_ref_Reference_get___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 20 , L954723689 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/Reference target Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_lang_ref_Reference*)rstack[sp - 1].obj)->target_0;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_lang_ref_Reference_get___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_ref_Reference_get___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_lang_ref_Reference_clear___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2170, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 24 , L2025198278 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 24;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/ref/Reference target Ljava/lang/Object;
    sp -= 2;
    ((struct java_lang_ref_Reference*)rstack[sp + 0].obj)->target_0 = rstack[sp + 1].obj;
    ; 
    //  line no 25 , L629016615 , bytecode index = 
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

void bridge_java_lang_ref_Reference_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_Reference_clear___V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_lang_ref_Reference_isEnqueued___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2171, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 28 , L565847109 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 28;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/Reference jNext Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_Reference*)rstack[sp - 1].obj)->jNext_2;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1775383190;
    // iconst_1
    stack[sp++].i = 1;
    goto L1010311355;
    L1775383190:
    // iconst_0
    stack[sp++].i = 0;
    L1010311355:
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

void bridge_java_lang_ref_Reference_isEnqueued___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ref_Reference_isEnqueued___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_java_lang_ref_Reference_enqueue___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2172, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 32 , L1199894489 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 32;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/Reference queue Ljava/lang/ref/ReferenceQueue;
    rstack[sp - 1].obj = ((struct java_lang_ref_Reference*)rstack[sp - 1].obj)->queue_1;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1069163325;
    ; 
    //  line no 33 , L1115349385 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/Reference queue Ljava/lang/ref/ReferenceQueue;
    rstack[sp - 1].obj = ((struct java_lang_ref_Reference*)rstack[sp - 1].obj)->queue_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/ref/ReferenceQueue.add(Ljava/lang/ref/Reference;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_ref_Reference*) = find_method(__ins->vm_table, 189, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 34 , L380234542 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/ref/Reference queue Ljava/lang/ref/ReferenceQueue;
    sp -= 2;
    ((struct java_lang_ref_Reference*)rstack[sp + 0].obj)->queue_1 = rstack[sp + 1].obj;
    ; 
    //  line no 35 , L1983063045 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1069163325:
    //  line no 37 , L1069163325 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
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

void bridge_java_lang_ref_Reference_enqueue___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_ref_Reference_enqueue___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 2
void func_java_lang_ref_Reference_vmEnqueneReference__Ljava_lang_ref_Reference_2_V(JThreadRuntime *runtime, struct java_lang_ref_Reference* p0, struct java_lang_ref_Reference* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2173, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 45 , L220040730 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 45;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  == NULL) goto L1412752396;
    ; 
    //  line no 46 , L994632067 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/ref/Reference.clear()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 47 , L1364058917 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/ref/Reference.enqueue()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1412752396:
    //  line no 49 , L1412752396 , bytecode index = 
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

void bridge_java_lang_ref_Reference_vmEnqueneReference__Ljava_lang_ref_Reference_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_Reference_vmEnqueneReference__Ljava_lang_ref_Reference_2_V(runtime, para[0].obj, para[1].obj);
}

void bridge_java_lang_ref_Reference_markItAsWeak__Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_Reference_markItAsWeak__Z_V(runtime, ins);
}


