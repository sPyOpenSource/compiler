// CLASS: jx/buffer/multithread/Buffer extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_buffer_multithread_Buffer_static {};



__refer arr_vmtable_jx_buffer_multithread_Buffer_from_jx_buffer_multithread_Buffer[] = {
    func_jx_buffer_multithread_Buffer_getMem___Ljx_zero_Memory_2,  //0
    func_jx_buffer_multithread_Buffer_setMem__Ljx_zero_Memory_2_V,  //1
    func_jx_buffer_multithread_Buffer_getData___Ljx_zero_Memory_2,  //2
    func_jx_buffer_multithread_Buffer_getMoreData___Ljava_lang_Object_2,  //3
    func_jx_buffer_multithread_Buffer_setMoreData__Ljava_lang_Object_2_V,  //4
    func_jx_buffer_multithread_Buffer_setData__Ljx_zero_Memory_2_V,  //5
    func_jx_buffer_multithread_Buffer_copyDataFrom__Ljx_buffer_multithread_Buffer_2_V,  //6
    func_jx_buffer_multithread_Buffer_init___V  //7
};
__refer arr_vmtable_jx_buffer_multithread_Buffer_from_java_lang_Object[] = {
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
VMTable vmtable_jx_buffer_multithread_Buffer[] = {
    {240, 8, arr_vmtable_jx_buffer_multithread_Buffer_from_jx_buffer_multithread_Buffer}, //0
    {10, 11, arr_vmtable_jx_buffer_multithread_Buffer_from_java_lang_Object}, //1
};



// locals: 2
// stack: 3
// args: 1
void func_jx_buffer_multithread_Buffer__init___Ljx_zero_Memory_2_V(JThreadRuntime *runtime, struct jx_zero_Memory* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 579, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 13 , L1542520418 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 14 , L503938393 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->data_1 = rstack[sp + 1].obj;
    ; 
    //  line no 15 , L1731977615 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic jx/zero/InitialNaming.getInitialNaming()Ljx/zero/Naming;
    {
        sp -= 1;
        rstack[sp].obj = func_jx_zero_InitialNaming_getInitialNaming___Ljx_zero_Naming_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 648);
    // invokeinterface jx/zero/Naming.lookup(Ljava/lang/String;)Ljx/zero/Portal;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Portal* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 90, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast jx/zero/CPUManager
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 650);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield jx/buffer/multithread/Buffer cpuManager Ljx/zero/CPUManager;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->cpuManager_3 = rstack[sp + 1].obj;
    ; 
    //  line no 16 , L1703009290 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/buffer/multithread/Buffer cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_buffer_multithread_Buffer*)rstack[sp - 1].obj)->cpuManager_3;
    sp += 0;
    // invokeinterface jx/zero/CPUManager.getAtomicVariable()Ljx/zero/AtomicVariable;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_AtomicVariable* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 91, 17);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/buffer/multithread/Buffer next Ljx/zero/AtomicVariable;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->next_0 = rstack[sp + 1].obj;
    ; 
    //  line no 20 , L970865974 , bytecode index = 
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

void bridge_jx_buffer_multithread_Buffer__init___Ljx_zero_Memory_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_buffer_multithread_Buffer__init___Ljx_zero_Memory_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct jx_zero_Memory* func_jx_buffer_multithread_Buffer_getMem___Ljx_zero_Memory_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 24 , L1424482154 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    rstack[sp - 1].obj = ((struct jx_buffer_multithread_Buffer*)rstack[sp - 1].obj)->data_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_jx_buffer_multithread_Buffer_getMem___Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_buffer_multithread_Buffer_getMem___Ljx_zero_Memory_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_buffer_multithread_Buffer_setMem__Ljx_zero_Memory_2_V(JThreadRuntime *runtime, struct jx_zero_Memory* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    rlocal[0].obj = p0;
    ; 
    //  line no 28 , L1997702454 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->data_1 = rstack[sp + 1].obj;
    ; 
    //  line no 32 , L1479696465 , bytecode index = 
    return;
    ; 
}

void bridge_jx_buffer_multithread_Buffer_setMem__Ljx_zero_Memory_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_buffer_multithread_Buffer_setMem__Ljx_zero_Memory_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct jx_zero_Memory* func_jx_buffer_multithread_Buffer_getData___Ljx_zero_Memory_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 35 , L1690101810 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    rstack[sp - 1].obj = ((struct jx_buffer_multithread_Buffer*)rstack[sp - 1].obj)->data_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_jx_buffer_multithread_Buffer_getData___Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_buffer_multithread_Buffer_getData___Ljx_zero_Memory_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_jx_buffer_multithread_Buffer_getMoreData___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 39 , L1277108979 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/buffer/multithread/Buffer moreData Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct jx_buffer_multithread_Buffer*)rstack[sp - 1].obj)->moreData_2;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_jx_buffer_multithread_Buffer_getMoreData___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_buffer_multithread_Buffer_getMoreData___Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_jx_buffer_multithread_Buffer_setMoreData__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 584, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 43 , L1517640897 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L2061774051;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 612);
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1517640897 in labeltable is :L1517640897
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 43;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2061774051:
    //  line no 44 , L2061774051 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/buffer/multithread/Buffer moreData Ljava/lang/Object;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->moreData_2 = rstack[sp + 1].obj;
    ; 
    //  line no 45 , L1331270134 , bytecode index = 
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

void bridge_jx_buffer_multithread_Buffer_setMoreData__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_buffer_multithread_Buffer_setMoreData__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_buffer_multithread_Buffer_setData__Ljx_zero_Memory_2_V(JThreadRuntime *runtime, struct jx_zero_Memory* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    rlocal[0].obj = p0;
    ; 
    //  line no 48 , L941836856 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->data_1 = rstack[sp + 1].obj;
    ; 
    //  line no 52 , L1677458155 , bytecode index = 
    return;
    ; 
}

void bridge_jx_buffer_multithread_Buffer_setData__Ljx_zero_Memory_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_buffer_multithread_Buffer_setData__Ljx_zero_Memory_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_buffer_multithread_Buffer_copyDataFrom__Ljx_buffer_multithread_Buffer_2_V(JThreadRuntime *runtime, struct jx_buffer_multithread_Buffer* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 586, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 55 , L738677855 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 55;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    rstack[sp - 1].obj = ((struct jx_buffer_multithread_Buffer*)rstack[sp - 1].obj)->data_1;
    sp += 0;
    // putfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->data_1 = rstack[sp + 1].obj;
    ; 
    //  line no 56 , L240630125 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/buffer/multithread/Buffer moreData Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct jx_buffer_multithread_Buffer*)rstack[sp - 1].obj)->moreData_2;
    sp += 0;
    // putfield jx/buffer/multithread/Buffer moreData Ljava/lang/Object;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->moreData_2 = rstack[sp + 1].obj;
    ; 
    //  line no 57 , L851912430 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    rstack[sp - 1].obj = ((struct jx_buffer_multithread_Buffer*)rstack[sp - 1].obj)->data_1;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L586358252;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    rstack[sp - 1].obj = ((struct jx_buffer_multithread_Buffer*)rstack[sp - 1].obj)->data_1;
    sp += 0;
    // invokeinterface jx/zero/Memory.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 83, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  sipush 1514
    stack[sp++].i = 1514;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L586358252;
    L586358252:
    //  line no 62 , L586358252 , bytecode index = 
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

void bridge_jx_buffer_multithread_Buffer_copyDataFrom__Ljx_buffer_multithread_Buffer_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_buffer_multithread_Buffer_copyDataFrom__Ljx_buffer_multithread_Buffer_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_jx_buffer_multithread_Buffer_init___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 587, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 69 , L124734309 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 69;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield jx/buffer/multithread/Buffer data Ljx/zero/Memory;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->data_1 = rstack[sp + 1].obj;
    ; 
    //  line no 70 , L211090736 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield jx/buffer/multithread/Buffer moreData Ljava/lang/Object;
    sp -= 2;
    ((struct jx_buffer_multithread_Buffer*)rstack[sp + 0].obj)->moreData_2 = rstack[sp + 1].obj;
    ; 
    //  line no 71 , L909282611 , bytecode index = 
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

void bridge_jx_buffer_multithread_Buffer_init___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_buffer_multithread_Buffer_init___V(runtime, ins);
}


