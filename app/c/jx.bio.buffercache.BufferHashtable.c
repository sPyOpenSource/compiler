// CLASS: jx/bio/buffercache/BufferHashtable extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_bio_buffercache_BufferHashtable_static {s8 trace_0; s32 DEFAULT_1FILL_1PERCENT_1; s32 MINIMUM_1SIZE_2; s8 doStatistics_8;  };
struct jx_bio_buffercache_BufferHashtable_static static_var_jx_bio_buffercache_BufferHashtable = {0, 0, 0, 0};


__refer arr_vmtable_jx_bio_buffercache_BufferHashtable_from_jx_bio_buffercache_BufferHashtable[] = {
    func_jx_bio_buffercache_BufferHashtable_size___I,  //0
    func_jx_bio_buffercache_BufferHashtable_expandTable___V,  //1
    func_jx_bio_buffercache_BufferHashtable_put__Ljx_bio_buffercache_BufferHead_2_V,  //2
    func_jx_bio_buffercache_BufferHashtable_get__I_Ljx_bio_buffercache_BufferHead_2,  //3
    func_jx_bio_buffercache_BufferHashtable_remove__Ljx_bio_buffercache_BufferHead_2_V,  //4
    func_jx_bio_buffercache_BufferHashtable_printStatistics___V,  //5
    func_jx_bio_buffercache_BufferHashtable_iterator___Ljx_collections_Iterator_2  //6
};
__refer arr_vmtable_jx_bio_buffercache_BufferHashtable_from_java_lang_Object[] = {
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
VMTable vmtable_jx_bio_buffercache_BufferHashtable[] = {
    {6, 7, arr_vmtable_jx_bio_buffercache_BufferHashtable_from_jx_bio_buffercache_BufferHashtable}, //0
    {10, 11, arr_vmtable_jx_bio_buffercache_BufferHashtable_from_java_lang_Object}, //1
};



// locals: 4
// stack: 4
// args: 2
void func_jx_bio_buffercache_BufferHashtable__init___II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 0, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 41 , L1890187342 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 41;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 42 , L867398280 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 7);
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 45 , L124407148 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L85445963;
    stack[sp++].i = local[2].i;
    //  bipush 100
    stack[sp++].i = 100;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1825027294;
    L85445963:
    //  line no 46 , L85445963 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 12);
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
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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
    //     L85445963 in labeltable is :L85445963
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 46;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1825027294:
    //  line no 48 , L1825027294 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield jx/bio/buffercache/BufferHashtable fillPercent I
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->fillPercent_4 = stack[sp + 1].i;
    ; 
    //  line no 50 , L852445367 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 100
    stack[sp++].i = 100;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable fillPercent I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->fillPercent_4;
    sp += 0;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    //  bipush 31
    stack[sp++].i = 31;
    // invokestatic java/lang/Math.max(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_max__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 51 , L1738236591 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 52 , L1558021762 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 15);
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
    stack[sp++].i = local[3].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 55 , L225290371 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable fillPercent I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->fillPercent_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    //  bipush 100
    stack[sp++].i = 100;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // putfield jx/bio/buffercache/BufferHashtable entryLimit I
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->entryLimit_5 = stack[sp + 1].i;
    ; 
    //  line no 56 , L1169146729 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [Ljx/bio/buffercache/BufferHead; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(17));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->hashTable_6 = rstack[sp + 1].obj;
    ; 
    //  line no 57 , L2040352617 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield jx/bio/buffercache/BufferHashtable hashTable_length I
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->hashTable_1length_7 = stack[sp + 1].i;
    ; 
    //  line no 58 , L1237598030 , bytecode index = 
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

void bridge_jx_bio_buffercache_BufferHashtable__init___II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bio_buffercache_BufferHashtable__init___II_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
void func_jx_bio_buffercache_BufferHashtable__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 69 , L302155142 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 69;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    //  bipush 30
    stack[sp++].i = 30;
    // invokespecial jx/bio/buffercache/BufferHashtable.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_bio_buffercache_BufferHashtable__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 70 , L24606376 , bytecode index = 
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

void bridge_jx_bio_buffercache_BufferHashtable__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bio_buffercache_BufferHashtable__init___I_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_jx_bio_buffercache_BufferHashtable__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 77 , L756185697 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 77;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 30
    stack[sp++].i = 30;
    // invokespecial jx/bio/buffercache/BufferHashtable.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_bio_buffercache_BufferHashtable__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 78 , L733672688 , bytecode index = 
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

void bridge_jx_bio_buffercache_BufferHashtable__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bio_buffercache_BufferHashtable__init____V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_jx_bio_buffercache_BufferHashtable_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 88 , L1891546521 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable entryCount I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->entryCount_3;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_jx_bio_buffercache_BufferHashtable_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_bio_buffercache_BufferHashtable_size___I(runtime, ins);
}


// locals: 7
// stack: 3
// args: 0
void func_jx_bio_buffercache_BufferHashtable_expandTable___V(JThreadRuntime *runtime){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 4, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 99 , L849373393 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 99;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    // arraylength  label  L849373393
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 100 , L868964689 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 23);
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
    stack[sp++].i = local[1].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 101 , L912011468 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable fillPercent I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->fillPercent_4;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    //  bipush 100
    stack[sp++].i = 100;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // putfield jx/bio/buffercache/BufferHashtable entryLimit I
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->entryLimit_5 = stack[sp + 1].i;
    ; 
    //  line no 102 , L1881129850 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 103 , L1095293768 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Ljx/bio/buffercache/BufferHead; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(17));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->hashTable_6 = rstack[sp + 1].obj;
    ; 
    //  line no 104 , L673186785 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield jx/bio/buffercache/BufferHashtable hashTable_length I
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->hashTable_1length_7 = stack[sp + 1].i;
    ; 
    //  line no 106 , L2142080121 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L2142080121
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1906808037:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1983025922;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1906808037 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 107 , L1579526446 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  == NULL) goto L1308109015;
    ; 
    //  line no 108 , L11902257 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // invokespecial jx/bio/buffercache/BufferHashtable.putInTable(Ljx/bio/buffercache/BufferHead;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_bio_buffercache_BufferHashtable_putInTable__Ljx_bio_buffercache_BufferHead_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1660794022:
    //  line no 109 , L1660794022 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[6].obj = rstack[--sp].obj;
    if(rstack[--sp].obj  == NULL) goto L1308109015;
    ; 
    //  line no 110 , L300031246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // invokespecial jx/bio/buffercache/BufferHashtable.putInTable(Ljx/bio/buffercache/BufferHead;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_bio_buffercache_BufferHashtable_putInTable__Ljx_bio_buffercache_BufferHead_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1660794022;
    L1308109015:
    //  line no 106 , L1308109015 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1906808037;
    L1983025922:
    //  line no 115 , L1983025922 , bytecode index = 
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

void bridge_jx_bio_buffercache_BufferHashtable_expandTable___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bio_buffercache_BufferHashtable_expandTable___V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_jx_bio_buffercache_BufferHashtable_putInTable__Ljx_bio_buffercache_BufferHead_2_V(JThreadRuntime *runtime, struct jx_bio_buffercache_BufferHead* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 5, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 118 , L824208363 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 118;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_hashkey I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1hashkey_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable_length I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_1length_7;
    sp += 0;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 119 , L1048027629 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1048027629 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L1073533248;
    ; 
    //  line no 120 , L599491651 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L599491651 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[3].obj = rstack[--sp].obj;
    L293002476:
    //  line no 121 , L293002476 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L302870502;
    ; 
    //  line no 122 , L1268959798 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L293002476;
    L302870502:
    //  line no 124 , L302870502 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHead*)rstack[sp + 0].obj)->hashtable_1nextInChain_10 = rstack[sp + 1].obj;
    ; 
    //  line no 125 , L876926621 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHead*)rstack[sp + 0].obj)->hashtable_1nextInChain_10 = rstack[sp + 1].obj;
    ; 
    //  line no 126 , L326298949 , bytecode index = 
    goto L1786364562;
    L1073533248:
    //  line no 127 , L1073533248 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L1073533248 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    L1786364562:
    //  line no 129 , L1786364562 , bytecode index = 
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

void bridge_jx_bio_buffercache_BufferHashtable_putInTable__Ljx_bio_buffercache_BufferHead_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bio_buffercache_BufferHashtable_putInTable__Ljx_bio_buffercache_BufferHead_2_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_jx_bio_buffercache_BufferHashtable_put__Ljx_bio_buffercache_BufferHead_2_V(JThreadRuntime *runtime, struct jx_bio_buffercache_BufferHead* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 6, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 139 , L624271064 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 139;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield jx/bio/buffercache/BufferHashtable entryCount I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->entryCount_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield jx/bio/buffercache/BufferHashtable entryCount I
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->entryCount_3 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable entryLimit I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->entryLimit_5;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L564742142;
    ; 
    //  line no 140 , L90205195 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual jx/bio/buffercache/BufferHashtable.expandTable()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 6, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L564742142:
    //  line no 142 , L564742142 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial jx/bio/buffercache/BufferHashtable.putInTable(Ljx/bio/buffercache/BufferHead;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_bio_buffercache_BufferHashtable_putInTable__Ljx_bio_buffercache_BufferHead_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 143 , L135184888 , bytecode index = 
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

void bridge_jx_bio_buffercache_BufferHashtable_put__Ljx_bio_buffercache_BufferHead_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bio_buffercache_BufferHashtable_put__Ljx_bio_buffercache_BufferHead_2_V(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
struct jx_bio_buffercache_BufferHead* func_jx_bio_buffercache_BufferHashtable_get__I_Ljx_bio_buffercache_BufferHead_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 7, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 153 , L1782148126 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 153;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable_length I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_1length_7;
    sp += 0;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 155 , L1816089958 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1816089958 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[3].obj = rstack[--sp].obj;
    L306206744:
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L827084938;
    ; 
    //  line no 156 , L280265505 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_hashkey I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1hashkey_9;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L112619572;
    ; 
    //  line no 157 , L371619938 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L112619572:
    //  line no 155 , L112619572 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L306206744;
    L827084938:
    //  line no 160 , L827084938 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_jx_bio_buffercache_BufferHashtable_get__I_Ljx_bio_buffercache_BufferHead_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_bio_buffercache_BufferHashtable_get__I_Ljx_bio_buffercache_BufferHead_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_jx_bio_buffercache_BufferHashtable_remove__Ljx_bio_buffercache_BufferHead_2_V(JThreadRuntime *runtime, struct jx_bio_buffercache_BufferHead* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 8, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 170 , L1898220577 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 170;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_hashkey I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1hashkey_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable_length I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_1length_7;
    sp += 0;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 172 , L1143371233 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1143371233 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 173 , L1634132079 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  != NULL) goto L1239548589;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 31);
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
    //     L1634132079 in labeltable is :L1634132079
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 173;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1239548589:
    //  line no 174 , L1239548589 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_hashkey I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1hashkey_9;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_hashkey I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1hashkey_9;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L477289012;
    ; 
    //  line no 176 , L1795960102 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    // arrstore __refer  ,  L1795960102 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 177 , L1027591600 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield jx/bio/buffercache/BufferHashtable entryCount I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->entryCount_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield jx/bio/buffercache/BufferHashtable entryCount I
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->entryCount_3 = stack[sp + 1].i;
    ; 
    //  line no 178 , L1678854096 , bytecode index = 
    method_exit(runtime);
    return;
    L477289012:
    //  line no 181 , L477289012 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1849201180;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_hashkey I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1hashkey_9;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    // getfield jx/bio/buffercache/BufferHead hashtable_hashkey I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1hashkey_9;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1849201180;
    ; 
    //  line no 183 , L1691875296 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L477289012;
    L1849201180:
    //  line no 185 , L1849201180 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L667346055;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 31);
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
    //     L1849201180 in labeltable is :L1849201180
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 185;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L667346055:
    //  line no 186 , L667346055 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    // putfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHead*)rstack[sp + 0].obj)->hashtable_1nextInChain_10 = rstack[sp + 1].obj;
    ; 
    //  line no 187 , L1225197672 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield jx/bio/buffercache/BufferHashtable entryCount I
    stack[sp - 1].i = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->entryCount_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield jx/bio/buffercache/BufferHashtable entryCount I
    sp -= 2;
    ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp + 0].obj)->entryCount_3 = stack[sp + 1].i;
    ; 
    //  line no 188 , L1669712678 , bytecode index = 
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

void bridge_jx_bio_buffercache_BufferHashtable_remove__Ljx_bio_buffercache_BufferHead_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bio_buffercache_BufferHashtable_remove__Ljx_bio_buffercache_BufferHead_2_V(runtime, ins);
}


// locals: 8
// stack: 5
// args: 0
void func_jx_bio_buffercache_BufferHashtable_printStatistics___V(JThreadRuntime *runtime){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 9, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 192 , L683962652 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 192;
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 33);
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    // arraylength  label  L683962652
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 193 , L1500608548 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 194 , L341853399 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 195 , L513700442 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 196 , L366590980 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 197 , L1195067075 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1366025231:
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    // arraylength  label  L1366025231
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1007309018;
    ; 
    //  line no 198 , L1684792003 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L1684792003 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L2038148563;
    ; 
    //  line no 199 , L2008966511 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 200 , L433874882 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bio/buffercache/BufferHashtable hashTable [Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHashtable*)rstack[sp - 1].obj)->hashTable_6;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L433874882 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[7].obj = rstack[--sp].obj;
    L572191680:
    //  line no 201 , L572191680 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L103536485;
    ; 
    //  line no 202 , L37380050 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getfield jx/bio/buffercache/BufferHead hashtable_nextInChain Ljx/bio/buffercache/BufferHead;
    rstack[sp - 1].obj = ((struct jx_bio_buffercache_BufferHead*)rstack[sp - 1].obj)->hashtable_1nextInChain_10;
    sp += 0;
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 203 , L2023938592 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L572191680;
    L103536485:
    //  line no 205 , L103536485 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 206 , L231977479 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 207 , L1427889191 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L93314457;
    stack[sp++].i = local[6].i;
    local[4].i = stack[--sp].i;
    L93314457:
    //  line no 208 , L93314457 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 34);
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
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 11
    stack[sp++].i = 11;
    // invokespecial jx/bio/buffercache/BufferHashtable.alignString(Ljava/lang/String;I)Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_jx_bio_buffercache_BufferHashtable_alignString__Ljava_lang_String_2I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[6].i;
    ; 
    //  line no 209 , L1796371666 , bytecode index = 
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 11
    stack[sp++].i = 11;
    // invokespecial jx/bio/buffercache/BufferHashtable.alignString(Ljava/lang/String;I)Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_jx_bio_buffercache_BufferHashtable_alignString__Ljava_lang_String_2I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 35);
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
    ; 
    //  line no 208 , L2076287037 , bytecode index = 
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 210 , L1890627974 , bytecode index = 
    goto L195615004;
    L2038148563:
    //  line no 211 , L2038148563 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    L195615004:
    //  line no 197 , L195615004 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1366025231;
    L1007309018:
    //  line no 214 , L1007309018 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 36);
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
    stack[sp++].i = local[2].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 215 , L1935972447 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 37);
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
    stack[sp++].i = local[1].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 216 , L97652294 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 38);
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
    stack[sp++].i = local[3].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 217 , L1889248251 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 39);
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
    stack[sp++].i = local[4].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 218 , L1027007693 , bytecode index = 
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

void bridge_jx_bio_buffercache_BufferHashtable_printStatistics___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bio_buffercache_BufferHashtable_printStatistics___V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct jx_collections_Iterator* func_jx_bio_buffercache_BufferHashtable_iterator___Ljx_collections_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 10, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 223 , L2146608740 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 223;
    // new jx/bio/buffercache/BufferHashtable$1
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/bio/buffercache/BufferHashtable$1.<init>(Ljx/bio/buffercache/BufferHashtable;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_bio_buffercache_BufferHashtable_000241__init___Ljx_bio_buffercache_BufferHashtable_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
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

void bridge_jx_bio_buffercache_BufferHashtable_iterator___Ljx_collections_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_bio_buffercache_BufferHashtable_iterator___Ljx_collections_Iterator_2(runtime, ins);
}


// locals: 6
// stack: 2
// args: 2
struct java_lang_String* func_jx_bio_buffercache_BufferHashtable_alignString__Ljava_lang_String_2I_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 11, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 258 , L1489092624 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 258;
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 9);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/String.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 259 , L192881625 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 9, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 260 , L1641313620 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1773638882:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1059063940;
    ; 
    //  line no 261 , L1295226194 , bytecode index = 
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
    rstack[sp++].obj = rlocal[3].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 44);
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 260 , L252651381 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1773638882;
    L1059063940:
    //  line no 262 , L1059063940 , bytecode index = 
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
    rstack[sp++].obj = rlocal[3].obj;
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
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_jx_bio_buffercache_BufferHashtable_alignString__Ljava_lang_String_2I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_bio_buffercache_BufferHashtable_alignString__Ljava_lang_String_2I_Ljava_lang_String_2(runtime, ins, para[0].i);
}


