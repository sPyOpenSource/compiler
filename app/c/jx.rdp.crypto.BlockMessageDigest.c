// CLASS: jx/rdp/crypto/BlockMessageDigest extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_rdp_crypto_BlockMessageDigest_static {s32 MAX_1COUNT_4;  };
struct jx_rdp_crypto_BlockMessageDigest_static static_var_jx_rdp_crypto_BlockMessageDigest = {0};


__refer arr_vmtable_jx_rdp_crypto_BlockMessageDigest_from_jx_rdp_crypto_BlockMessageDigest[] = {
    func_jx_rdp_crypto_BlockMessageDigest_bitcount___I,  //0
    func_jx_rdp_crypto_BlockMessageDigest_engineReset___V,  //1
    func_jx_rdp_crypto_BlockMessageDigest_engineUpdate__B_V,  //2
    func_jx_rdp_crypto_BlockMessageDigest_engineUpdate___3BII_V,  //3
    func_jx_rdp_crypto_BlockMessageDigest_engineDigest____3B,  //4
    func_jx_rdp_crypto_BlockMessageDigest_engineDigest___3BI__3B,  //5
    func_jx_rdp_crypto_BlockMessageDigest_engineTransform___3B_V,  //6
    func_jx_rdp_crypto_BlockMessageDigest_engineGetDataLength___I,  //7
    func_jx_rdp_crypto_BlockMessageDigest_getAlgorithm___Ljava_lang_String_2  //8
};
__refer arr_vmtable_jx_rdp_crypto_BlockMessageDigest_from_java_lang_Object[] = {
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
VMTable vmtable_jx_rdp_crypto_BlockMessageDigest[] = {
    {42, 9, arr_vmtable_jx_rdp_crypto_BlockMessageDigest_from_jx_rdp_crypto_BlockMessageDigest}, //0
    {10, 11, arr_vmtable_jx_rdp_crypto_BlockMessageDigest_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_jx_rdp_crypto_BlockMessageDigest__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 151, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 48 , L1810899357 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 49 , L231786897 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/rdp/crypto/BlockMessageDigest algorithm Ljava/lang/String;
    sp -= 2;
    ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp + 0].obj)->algorithm_2 = rstack[sp + 1].obj;
    ; 
    //  line no 50 , L1595282218 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual jx/rdp/crypto/BlockMessageDigest.engineGetDataLength()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 42, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/rdp/crypto/BlockMessageDigest data_length I
    sp -= 2;
    ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp + 0].obj)->data_1length_5 = stack[sp + 1].i;
    ; 
    //  line no 51 , L1778081847 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest data_length I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->data_1length_5;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(314));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield jx/rdp/crypto/BlockMessageDigest buffer [B
    sp -= 2;
    ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp + 0].obj)->buffer_0 = rstack[sp + 1].obj;
    ; 
    //  line no 52 , L57497692 , bytecode index = 
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

void bridge_jx_rdp_crypto_BlockMessageDigest__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_BlockMessageDigest__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_jx_rdp_crypto_BlockMessageDigest_bitcount___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 152, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 58 , L1729779847 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 58;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest count I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
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

void bridge_jx_rdp_crypto_BlockMessageDigest_bitcount___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_rdp_crypto_BlockMessageDigest_bitcount___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_jx_rdp_crypto_BlockMessageDigest_engineReset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 153, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 67 , L1016363973 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 67;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield jx/rdp/crypto/BlockMessageDigest buffered I
    sp -= 2;
    ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp + 0].obj)->buffered_1 = stack[sp + 1].i;
    ; 
    //  line no 68 , L1620948027 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield jx/rdp/crypto/BlockMessageDigest count I
    sp -= 2;
    ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 69 , L1442191055 , bytecode index = 
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

void bridge_jx_rdp_crypto_BlockMessageDigest_engineReset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_BlockMessageDigest_engineReset___V(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
void func_jx_rdp_crypto_BlockMessageDigest_engineUpdate__B_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 154, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 78 , L201576232 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 78;
    // iconst_1
    stack[sp++].i = 1;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(314));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // arrstore s8  ,  L201576232 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 79 , L20094719 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual jx/rdp/crypto/BlockMessageDigest.engineUpdate([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 42, 3);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 80 , L1687662712 , bytecode index = 
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

void bridge_jx_rdp_crypto_BlockMessageDigest_engineUpdate__B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_BlockMessageDigest_engineUpdate__B_V(runtime, ins);
}


// locals: 6
// stack: 5
// args: 3
void func_jx_rdp_crypto_BlockMessageDigest_engineUpdate___3BII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 155, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 91 , L1403704789 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 91;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield jx/rdp/crypto/BlockMessageDigest count I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield jx/rdp/crypto/BlockMessageDigest count I
    sp -= 2;
    ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 92 , L1190820921 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest count I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    //  ldc 
    stack[sp++].i = 0xfffffff;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L532087022;
    ; 
    //  line no 93 , L1332210474 , bytecode index = 
    // new jx/rdp/crypto/CryptoException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 43);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual jx/rdp/crypto/BlockMessageDigest.getAlgorithm()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 42, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 331);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/rdp/crypto/CryptoException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rdp_crypto_CryptoException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1332210474 in labeltable is :L1332210474
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 93;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L532087022:
    //  line no 95 , L532087022 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest data_length I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->data_1length_5;
    sp += 0;
    local[4].i = stack[--sp].i;
    L1248234350:
    //  line no 98 , L1248234350 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest buffered I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffered_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[5].i = stack[--sp].i;
    ; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L2030036700;
    ; 
    //  line no 99 , L137460818 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest buffer [B
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffer_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest buffered I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffered_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 100 , L1995619265 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest buffer [B
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffer_0;
    sp += 0;
    // invokevirtual jx/rdp/crypto/BlockMessageDigest.engineTransform([B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 42, 6);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 101 , L1760126453 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 102 , L1864869682 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 103 , L1819776360 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield jx/rdp/crypto/BlockMessageDigest buffered I
    sp -= 2;
    ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp + 0].obj)->buffered_1 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1248234350;
    L2030036700:
    //  line no 106 , L2030036700 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  <= 0) goto L255334292;
    ; 
    //  line no 107 , L752684363 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest buffer [B
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffer_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest buffered I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffered_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 108 , L2123444693 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield jx/rdp/crypto/BlockMessageDigest buffered I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffered_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield jx/rdp/crypto/BlockMessageDigest buffered I
    sp -= 2;
    ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp + 0].obj)->buffered_1 = stack[sp + 1].i;
    L255334292:
    //  line no 110 , L255334292 , bytecode index = 
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

void bridge_jx_rdp_crypto_BlockMessageDigest_engineUpdate___3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_BlockMessageDigest_engineUpdate___3BII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 3
// args: 0
JArray * func_jx_rdp_crypto_BlockMessageDigest_engineDigest____3B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 156, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 120 , L1641415002 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 120;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest buffer [B
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffer_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest buffered I
    stack[sp - 1].i = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->buffered_1;
    sp += 0;
    // invokevirtual jx/rdp/crypto/BlockMessageDigest.engineDigest([BI)[B
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *,JArray *,s32) = find_method(__ins->vm_table, 42, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_jx_rdp_crypto_BlockMessageDigest_engineDigest____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_rdp_crypto_BlockMessageDigest_engineDigest____3B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
JArray * func_jx_rdp_crypto_BlockMessageDigest_engineDigest___3BI__3B(JThreadRuntime *runtime, JArray * p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 157, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_rdp_crypto_BlockMessageDigest_engineDigest___3BI__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_rdp_crypto_BlockMessageDigest_engineDigest___3BI__3B(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_rdp_crypto_BlockMessageDigest_engineTransform___3B_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 158, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_rdp_crypto_BlockMessageDigest_engineTransform___3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_BlockMessageDigest_engineTransform___3B_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_rdp_crypto_BlockMessageDigest_engineGetDataLength___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 159, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_rdp_crypto_BlockMessageDigest_engineGetDataLength___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_rdp_crypto_BlockMessageDigest_engineGetDataLength___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_jx_rdp_crypto_BlockMessageDigest_getAlgorithm___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 153 , L1380806038 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/BlockMessageDigest algorithm Ljava/lang/String;
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_BlockMessageDigest*)rstack[sp - 1].obj)->algorithm_2;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_jx_rdp_crypto_BlockMessageDigest_getAlgorithm___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_rdp_crypto_BlockMessageDigest_getAlgorithm___Ljava_lang_String_2(runtime, ins);
}


