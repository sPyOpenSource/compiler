// CLASS: java/io/Reader extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_io_Reader_static {s32 maxSkipBufferSize_1;  };
struct java_io_Reader_static static_var_java_io_Reader = {0};


__refer arr_vmtable_java_io_Reader_from_java_io_Reader[] = {
    func_java_io_Reader_read___I,  //0
    func_java_io_Reader_read___3C_I,  //1
    func_java_io_Reader_read___3CII_I,  //2
    func_java_io_Reader_skip__J_J,  //3
    func_java_io_Reader_ready___Z,  //4
    func_java_io_Reader_markSupported___Z,  //5
    func_java_io_Reader_mark__I_V,  //6
    func_java_io_Reader_reset___V,  //7
    func_java_io_Reader_close___V  //8
};
__refer arr_vmtable_java_io_Reader_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_Reader[] = {
    {162, 9, arr_vmtable_java_io_Reader_from_java_io_Reader}, //0
    {5, 10, arr_vmtable_java_io_Reader_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_java_io_Reader__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2913, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 13 , L37754966 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 46 , L1836017760 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/io/Reader skipBuffer [C
    sp -= 2;
    ((struct java_io_Reader*)rstack[sp + 0].obj)->skipBuffer_2 = rstack[sp + 1].obj;
    ; 
    //  line no 14 , L709853193 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield java/io/Reader lock Ljava/lang/Object;
    sp -= 2;
    ((struct java_io_Reader*)rstack[sp + 0].obj)->lock_0 = rstack[sp + 1].obj;
    ; 
    //  line no 15 , L176514124 , bytecode index = 
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

void bridge_java_io_Reader__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Reader__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_Reader__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2914, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 18 , L507448042 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 46 , L1210486508 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/io/Reader skipBuffer [C
    sp -= 2;
    ((struct java_io_Reader*)rstack[sp + 0].obj)->skipBuffer_2 = rstack[sp + 1].obj;
    ; 
    //  line no 19 , L1772102816 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1274547241;
    ; 
    //  line no 20 , L762722278 , bytecode index = 
    // new java/lang/NullPointerException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 0);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/NullPointerException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_NullPointerException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L762722278 in labeltable is :L762722278
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 20;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1274547241:
    //  line no 22 , L1274547241 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/io/Reader lock Ljava/lang/Object;
    sp -= 2;
    ((struct java_io_Reader*)rstack[sp + 0].obj)->lock_0 = rstack[sp + 1].obj;
    ; 
    //  line no 23 , L1364958538 , bytecode index = 
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

void bridge_java_io_Reader__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Reader__init___Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 0
s32 func_java_io_Reader_read___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2915, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 27 , L849669310 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    // iconst_1
    stack[sp++].i = 1;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 28 , L779166731 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/io/Reader.read([CII)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 162, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L600661314;
    ; 
    //  line no 29 , L725931728 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L600661314:
    //  line no 31 , L600661314 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload u16  ,  L600661314 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
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

void bridge_java_io_Reader_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_Reader_read___I(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s32 func_java_io_Reader_read___3C_I(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2916, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 36 , L426124479 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 36;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L426124479
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokevirtual java/io/Reader.read([CII)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 162, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
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

void bridge_java_io_Reader_read___3C_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_Reader_read___3C_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
s32 func_java_io_Reader_read___3CII_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2917, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_Reader_read___3CII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_Reader_read___3CII_I(runtime, ins, para[0].i, para[1].i);
}

ExceptionItem arr_extable_func_java_io_Reader_skip__J_J[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_Reader_skip__J_J = {2, arr_extable_func_java_io_Reader_skip__J_J};

// locals: 9
// stack: 7
// args: 1
s64 func_java_io_Reader_skip__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2918, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    // try catch :L1576526619 L1672070753 L1262638455 (
    // try catch :L1262638455 L1496585534 L1262638455 (
    ; 
    //  line no 50 , L1002031672 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 50;
    stack[sp].j = local[1].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L370055648;
    ; 
    //  line no 51 , L1329504187 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4917);
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1329504187 in labeltable is :L1329504187
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 51;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L370055648:
    //  line no 52 , L370055648 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x2000L;
    sp += 2;
    // invokestatic java/lang/Math.min(JJ)J
    {
        sp -= 5;
        stack[sp].j = func_java_lang_Math_min__JJ_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 53 , L911933063 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Reader lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_Reader*)rstack[sp - 1].obj)->lock_0;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[4].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1576526619:
    __frame->bytecodeIndex = 
    //  line no 54 , L1576526619 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Reader skipBuffer [C
    rstack[sp - 1].obj = ((struct java_io_Reader*)rstack[sp - 1].obj)->skipBuffer_2;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1128733310;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Reader skipBuffer [C
    rstack[sp - 1].obj = ((struct java_io_Reader*)rstack[sp - 1].obj)->skipBuffer_2;
    sp += 0;
    // arraylength  label  L1576526619
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L568613487;
    L1128733310:
    //  line no 55 , L1128733310 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/io/Reader skipBuffer [C
    sp -= 2;
    ((struct java_io_Reader*)rstack[sp + 0].obj)->skipBuffer_2 = rstack[sp + 1].obj;
    L568613487:
    //  line no 56 , L568613487 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    sp -= 2;
    local[5].j = stack[sp].j;
    L438094511:
    //  line no 57 , L438094511 , bytecode index = 
    stack[sp].j = local[5].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L2069082541;
    ; 
    //  line no 58 , L3981395 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Reader skipBuffer [C
    rstack[sp - 1].obj = ((struct java_io_Reader*)rstack[sp - 1].obj)->skipBuffer_2;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp].j = local[5].j;
    sp += 2;
    stack[sp++].i = local[3].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    // invokestatic java/lang/Math.min(JJ)J
    {
        sp -= 5;
        stack[sp].j = func_java_lang_Math_min__JJ_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // invokevirtual java/io/Reader.read([CII)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 162, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 59 , L59295001 , bytecode index = 
    stack[sp++].i = local[7].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2143108725;
    ; 
    //  line no 60 , L428160758 , bytecode index = 
    goto L2069082541;
    L2143108725:
    //  line no 61 , L2143108725 , bytecode index = 
    stack[sp].j = local[5].j;
    sp += 2;
    stack[sp++].i = local[7].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[5].j = stack[sp].j;
    ; 
    //  line no 62 , L2145207245 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L438094511;
    L2069082541:
    //  line no 63 , L2069082541 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    stack[sp].j = local[5].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1672070753:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 2].j;
    L1262638455:
    __frame->bytecodeIndex = 
    //  line no 64 , L1262638455 , bytecode index = 
    rlocal[8].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1496585534:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L1496585534 in labeltable is :L1496585534
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 64;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1262638455;
        case 1 : goto L1262638455;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_Reader_skip__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_io_Reader_skip__J_J(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_io_Reader_ready___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2919, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 69 , L752893574 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 69;
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

void bridge_java_io_Reader_ready___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_Reader_ready___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_io_Reader_markSupported___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2920, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 74 , L162821120 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 74;
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

void bridge_java_io_Reader_markSupported___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_Reader_markSupported___Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_io_Reader_mark__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2921, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 79 , L1497444850 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 79;
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 152);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4919);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_IOException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1497444850 in labeltable is :L1497444850
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 79;
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
    return ;
}

void bridge_java_io_Reader_mark__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Reader_mark__I_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_java_io_Reader_reset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2922, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 84 , L2079229473 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 84;
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 152);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4920);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_IOException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L2079229473 in labeltable is :L2079229473
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 84;
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
    return ;
}

void bridge_java_io_Reader_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Reader_reset___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_io_Reader_close___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2923, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_Reader_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Reader_close___V(runtime, ins);
}


