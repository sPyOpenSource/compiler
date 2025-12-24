// CLASS: jx/rdp/crypto/RC4 extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_rdp_crypto_RC4_static {s32 UNINITIALIZED_0; s32 ENCRYPT_1; s32 DECRYPT_2; s32 BLOCK_1SIZE_6;  };
struct jx_rdp_crypto_RC4_static static_var_jx_rdp_crypto_RC4 = {0, 0, 0, 0};


__refer arr_vmtable_jx_rdp_crypto_RC4_from_jx_rdp_crypto_RC4[] = {
    func_jx_rdp_crypto_RC4_clone___Ljava_lang_Object_2,  //0
    func_jx_rdp_crypto_RC4_engineBlockSize___I,  //1
    func_jx_rdp_crypto_RC4_engineInitEncrypt___3B_V,  //2
    func_jx_rdp_crypto_RC4_engineInitDecrypt___3B_V,  //3
    func_jx_rdp_crypto_RC4_engineUpdate___3BII_3BI_I,  //4
    func_jx_rdp_crypto_RC4_getAlgorithm___Ljava_lang_String_2,  //5
    func_jx_rdp_crypto_RC4_getState___I,  //6
    func_jx_rdp_crypto_RC4_crypt___3BII__3B,  //7
    func_jx_rdp_crypto_RC4_crypt___3B__3B,  //8
    func_jx_rdp_crypto_RC4_crypt___3BII_3BI_V  //9
};
__refer arr_vmtable_jx_rdp_crypto_RC4_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_jx_rdp_crypto_RC4_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_jx_rdp_crypto_RC4[] = {
    {262, 10, arr_vmtable_jx_rdp_crypto_RC4_from_jx_rdp_crypto_RC4}, //0
    {10, 11, arr_vmtable_jx_rdp_crypto_RC4_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_jx_rdp_crypto_RC4__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 691, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 89 , L989889899 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 89;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 64 , L806813022 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 256
    stack[sp++].i = 256;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(83));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield jx/rdp/crypto/RC4 sBox [I
    sp -= 2;
    ((struct jx_rdp_crypto_RC4*)rstack[sp + 0].obj)->sBox_3 = rstack[sp + 1].obj;
    ; 
    //  line no 79 , L902860396 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1758);
    // putfield jx/rdp/crypto/RC4 cipherName Ljava/lang/String;
    sp -= 2;
    ((struct jx_rdp_crypto_RC4*)rstack[sp + 0].obj)->cipherName_8 = rstack[sp + 1].obj;
    ; 
    //  line no 91 , L1406206626 , bytecode index = 
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

void bridge_jx_rdp_crypto_RC4__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_RC4__init____V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_Object* func_jx_rdp_crypto_RC4_clone___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 692, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 98 , L1799230133 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 98;
    // new java/lang/CloneNotSupportedException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 261);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/CloneNotSupportedException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_CloneNotSupportedException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1799230133 in labeltable is :L1799230133
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 98;
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
    return NULL;
}

void bridge_jx_rdp_crypto_RC4_clone___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_rdp_crypto_RC4_clone___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_jx_rdp_crypto_RC4_engineBlockSize___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 693, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 110 , L20156341 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 110;
    // iconst_1
    stack[sp++].i = 1;
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

void bridge_jx_rdp_crypto_RC4_engineBlockSize___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_rdp_crypto_RC4_engineBlockSize___I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_rdp_crypto_RC4_engineInitEncrypt___3B_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 694, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 121 , L1509309988 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 121;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial jx/rdp/crypto/RC4.makeKey([B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rdp_crypto_RC4_makeKey___3B_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 122 , L1643141512 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield jx/rdp/crypto/RC4 state I
    sp -= 2;
    ((struct jx_rdp_crypto_RC4*)rstack[sp + 0].obj)->state_7 = stack[sp + 1].i;
    ; 
    //  line no 123 , L2091072548 , bytecode index = 
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

void bridge_jx_rdp_crypto_RC4_engineInitEncrypt___3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_RC4_engineInitEncrypt___3B_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_rdp_crypto_RC4_engineInitDecrypt___3B_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 695, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 134 , L1740826931 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 134;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial jx/rdp/crypto/RC4.makeKey([B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rdp_crypto_RC4_makeKey___3B_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 135 , L69062746 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield jx/rdp/crypto/RC4 state I
    sp -= 2;
    ((struct jx_rdp_crypto_RC4*)rstack[sp + 0].obj)->state_7 = stack[sp + 1].i;
    ; 
    //  line no 136 , L1631227617 , bytecode index = 
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

void bridge_jx_rdp_crypto_RC4_engineInitDecrypt___3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_RC4_engineInitDecrypt___3B_V(runtime, ins);
}


// locals: 8
// stack: 6
// args: 5
s32 func_jx_rdp_crypto_RC4_engineUpdate___3BII_3BI_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2, JArray * p3, s32 p4){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 696, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    ; 
    //  line no 155 , L1896074070 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 155;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  >= 0) goto L460741164;
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1763);
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //     L1896074070 in labeltable is :L1896074070
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 155;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L460741164:
    //  line no 157 , L460741164 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual jx/rdp/crypto/RC4.getState()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 262, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L781091365;
    // iconst_1
    stack[sp++].i = 1;
    goto L1858015030;
    L781091365:
    // iconst_0
    stack[sp++].i = 0;
    L1858015030:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 160 , L25764044 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L671596011;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1925352804;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1687354037;
    L1925352804:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L671596011;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L671596011;
    L1687354037:
    //  line no 162 , L1687354037 , bytecode index = 
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(314));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 163 , L743778731 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[7].obj;
    // iconst_0
    stack[sp++].i = 0;
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
    //  line no 164 , L967323951 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 165 , L1600594643 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L671596011:
    //  line no 168 , L671596011 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // invokespecial jx/rdp/crypto/RC4.rc4([BII[BI)V
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rdp_crypto_RC4_rc4___3BII_3BI_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 170 , L743648472 , bytecode index = 
    stack[sp++].i = local[3].i;
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

void bridge_jx_rdp_crypto_RC4_engineUpdate___3BII_3BI_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_rdp_crypto_RC4_engineUpdate___3BII_3BI_I(runtime, ins, para[0].i, para[1].i, para[2].obj, para[3].i);
}


// locals: 9
// stack: 5
// args: 5
void func_jx_rdp_crypto_RC4_rc4___3BII_3BI_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2, JArray * p3, s32 p4){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 697, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    ; 
    //  line no 191 , L1368862151 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 191;
    // iconst_0
    stack[sp++].i = 0;
    local[8].i = stack[--sp].i;
    L922807452:
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L33563464;
    ; 
    //  line no 192 , L1494346128 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 x I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->x_4;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    // putfield jx/rdp/crypto/RC4 x I
    sp -= 2;
    ((struct jx_rdp_crypto_RC4*)rstack[sp + 0].obj)->x_4 = stack[sp + 1].i;
    ; 
    //  line no 193 , L822087264 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 x I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->x_4;
    sp += 0;
    // arrload s32  ,  L822087264 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 y I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->y_5;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    // putfield jx/rdp/crypto/RC4 y I
    sp -= 2;
    ((struct jx_rdp_crypto_RC4*)rstack[sp + 0].obj)->y_5 = stack[sp + 1].i;
    ; 
    //  line no 195 , L30699728 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 x I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->x_4;
    sp += 0;
    // arrload s32  ,  L30699728 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 196 , L38603201 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 x I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->x_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 y I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->y_5;
    sp += 0;
    // arrload s32  ,  L38603201 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    // arrstore s32  ,  L38603201 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 197 , L1422273905 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 y I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->y_5;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrstore s32  ,  L1422273905 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 199 , L1694784135 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 x I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->x_4;
    sp += 0;
    // arrload s32  ,  L1694784135 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 y I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->y_5;
    sp += 0;
    // arrload s32  ,  L1694784135 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 200 , L1207231495 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // iinc slot 2 value 1
    local[2].i += 1;
    // arrload s8  ,  L1207231495 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    stack[sp++].i = local[6].i;
    // arrload s32  ,  L1207231495 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1207231495 bc index = 
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
    ; 
    //  line no 191 , L756936249 , bytecode index = 
    // iinc slot 8 value 1
    local[8].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L922807452;
    L33563464:
    //  line no 202 , L33563464 , bytecode index = 
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

void bridge_jx_rdp_crypto_RC4_rc4___3BII_3BI_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_RC4_rc4___3BII_3BI_V(runtime, ins, para[0].i, para[1].i, para[2].obj, para[3].i);
}


// locals: 7
// stack: 4
// args: 1
void func_jx_rdp_crypto_RC4_makeKey___3B_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 698, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 222 , L264394929 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 222;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1878413714;
    ; 
    //  line no 223 , L769132147 , bytecode index = 
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
    // invokevirtual jx/rdp/crypto/RC4.getAlgorithm()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 262, 5);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1767);
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
    //     L769132147 in labeltable is :L769132147
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 223;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1878413714:
    //  line no 225 , L1878413714 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1878413714
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    ; 
    //  line no 226 , L1257299717 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  != 0) goto L1474957626;
    ; 
    //  line no 227 , L181252244 , bytecode index = 
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
    // invokevirtual jx/rdp/crypto/RC4.getAlgorithm()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 262, 5);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1768);
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
    //     L181252244 in labeltable is :L181252244
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 227;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1474957626:
    //  line no 229 , L1474957626 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield jx/rdp/crypto/RC4 y I
    sp -= 2;
    ((struct jx_rdp_crypto_RC4*)rstack[sp + 0].obj)->y_5 = stack[sp + 1].i;
    // putfield jx/rdp/crypto/RC4 x I
    sp -= 2;
    ((struct jx_rdp_crypto_RC4*)rstack[sp + 0].obj)->x_4 = stack[sp + 1].i;
    ; 
    //  line no 230 , L1733022752 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L722417467:
    stack[sp++].i = local[3].i;
    //  sipush 256
    stack[sp++].i = 256;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L753631393;
    ; 
    //  line no 231 , L1262869688 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    // arrstore s32  ,  L1262869688 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 230 , L1914108708 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L722417467;
    L753631393:
    //  line no 233 , L753631393 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 235 , L1357700757 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L900298796:
    stack[sp++].i = local[6].i;
    //  sipush 256
    stack[sp++].i = 256;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1889757798;
    ; 
    //  line no 236 , L1166106620 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // arrload s8  ,  L1166106620 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    stack[sp++].i = local[6].i;
    // arrload s32  ,  L1166106620 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 238 , L1932470703 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    stack[sp++].i = local[6].i;
    // arrload s32  ,  L1932470703 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 239 , L221861886 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload s32  ,  L221861886 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    // arrstore s32  ,  L221861886 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 240 , L1713568869 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 sBox [I
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->sBox_3;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    // arrstore s32  ,  L1713568869 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 242 , L697508322 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 235 , L603658030 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L900298796;
    L1889757798:
    //  line no 244 , L1889757798 , bytecode index = 
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

void bridge_jx_rdp_crypto_RC4_makeKey___3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_RC4_makeKey___3B_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_jx_rdp_crypto_RC4_getAlgorithm___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 256 , L361380654 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 cipherName Ljava/lang/String;
    rstack[sp - 1].obj = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->cipherName_8;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_jx_rdp_crypto_RC4_getAlgorithm___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_rdp_crypto_RC4_getAlgorithm___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_jx_rdp_crypto_RC4_getState___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 278 , L1579132337 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rdp/crypto/RC4 state I
    stack[sp - 1].i = ((struct jx_rdp_crypto_RC4*)rstack[sp - 1].obj)->state_7;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_jx_rdp_crypto_RC4_getState___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_rdp_crypto_RC4_getState___I(runtime, ins);
}


// locals: 5
// stack: 6
// args: 3
JArray * func_jx_rdp_crypto_RC4_crypt___3BII__3B(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 701, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 281 , L790094605 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 281;
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(314));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 282 , L1048712791 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual jx/rdp/crypto/RC4.engineUpdate([BII[BI)I
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32,JArray *,s32) = find_method(__ins->vm_table, 262, 4);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 283 , L487792155 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
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

void bridge_jx_rdp_crypto_RC4_crypt___3BII__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_rdp_crypto_RC4_crypt___3BII__3B(runtime, ins, para[0].i, para[1].i);
}


// locals: 3
// stack: 6
// args: 1
JArray * func_jx_rdp_crypto_RC4_crypt___3B__3B(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 702, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 287 , L1632670136 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 287;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1632670136
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(314));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 288 , L1338905451 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1338905451
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual jx/rdp/crypto/RC4.engineUpdate([BII[BI)I
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32,JArray *,s32) = find_method(__ins->vm_table, 262, 4);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 289 , L1252540239 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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

void bridge_jx_rdp_crypto_RC4_crypt___3B__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_rdp_crypto_RC4_crypt___3B__3B(runtime, ins);
}


// locals: 6
// stack: 6
// args: 5
void func_jx_rdp_crypto_RC4_crypt___3BII_3BI_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2, JArray * p3, s32 p4){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 703, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    ; 
    //  line no 293 , L638486177 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 293;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual jx/rdp/crypto/RC4.engineUpdate([BII[BI)I
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32,JArray *,s32) = find_method(__ins->vm_table, 262, 4);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 294 , L426019904 , bytecode index = 
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

void bridge_jx_rdp_crypto_RC4_crypt___3BII_3BI_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rdp_crypto_RC4_crypt___3BII_3BI_V(runtime, ins, para[0].i, para[1].i, para[2].obj, para[3].i);
}


