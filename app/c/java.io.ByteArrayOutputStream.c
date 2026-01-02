// CLASS: java/io/ByteArrayOutputStream extends java/io/OutputStream
#include "metadata.h"


// generation
// globals
//struct java_io_ByteArrayOutputStream_static {};



__refer arr_vmtable_java_io_ByteArrayOutputStream_from_java_io_ByteArrayOutputStream[] = {
    func_java_io_ByteArrayOutputStream_write__I_V,  //0
    func_java_io_ByteArrayOutputStream_write___3BII_V,  //1
    func_java_io_ByteArrayOutputStream_reset___V,  //2
    func_java_io_ByteArrayOutputStream_toByteArray____3B,  //3
    func_java_io_ByteArrayOutputStream_size___I,  //4
    func_java_io_ByteArrayOutputStream_toString___Ljava_lang_String_2,  //5
    func_java_io_ByteArrayOutputStream_close___V,  //6
    func_java_io_ByteArrayOutputStream_writeTo__Ljava_io_OutputStream_2_V  //7
};
__refer arr_vmtable_java_io_ByteArrayOutputStream_from_java_io_OutputStream[] = {
    func_java_io_ByteArrayOutputStream_write__I_V,  //0
    func_java_io_OutputStream_write___3B_V,  //1
    func_java_io_ByteArrayOutputStream_write___3BII_V,  //2
    func_java_io_OutputStream_flush___V,  //3
    func_java_io_ByteArrayOutputStream_close___V  //4
};
__refer arr_vmtable_java_io_ByteArrayOutputStream_from_java_lang_Object[] = {
    func_java_io_ByteArrayOutputStream_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_io_ByteArrayOutputStream[] = {
    {243, 8, arr_vmtable_java_io_ByteArrayOutputStream_from_java_io_ByteArrayOutputStream}, //0
    {122, 5, arr_vmtable_java_io_ByteArrayOutputStream_from_java_io_OutputStream}, //1
    {5, 10, arr_vmtable_java_io_ByteArrayOutputStream_from_java_lang_Object}, //2
};



// locals: 1
// stack: 3
// args: 0
void func_java_io_ByteArrayOutputStream_ensureOpen___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1306, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 20 , L669053685 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream isClosed Z
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->isClosed_2;
    sp += 0;
    if(stack[--sp].i  == 0) goto L896852376;
    ; 
    //  line no 21 , L1840670774 , bytecode index = 
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2411);
    // invokespecial java/lang/RuntimeException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_RuntimeException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1840670774 in labeltable is :L1840670774
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 21;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L896852376:
    //  line no 23 , L896852376 , bytecode index = 
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

void bridge_java_io_ByteArrayOutputStream_ensureOpen___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayOutputStream_ensureOpen___V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_io_ByteArrayOutputStream__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1307, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 27 , L769877691 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // invokespecial java/io/ByteArrayOutputStream.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ByteArrayOutputStream__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 28 , L1057569470 , bytecode index = 
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

void bridge_java_io_ByteArrayOutputStream__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayOutputStream__init____V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_java_io_ByteArrayOutputStream__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1308, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 31 , L1324262781 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 31;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/OutputStream.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_OutputStream__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 16 , L2014233765 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/io/ByteArrayOutputStream isClosed Z
    sp -= 2;
    ((struct java_io_ByteArrayOutputStream*)rstack[sp + 0].obj)->isClosed_2 = stack[sp + 1].i;
    ; 
    //  line no 32 , L237297104 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L1869673263;
    ; 
    //  line no 33 , L1418622705 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2412);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
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
    //     L1418622705 in labeltable is :L1418622705
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 33;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1869673263:
    //  line no 36 , L1869673263 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/io/ByteArrayOutputStream buf [B
    sp -= 2;
    ((struct java_io_ByteArrayOutputStream*)rstack[sp + 0].obj)->buf_0 = rstack[sp + 1].obj;
    ; 
    //  line no 37 , L1521204009 , bytecode index = 
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

void bridge_java_io_ByteArrayOutputStream__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayOutputStream__init___I_V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 1
void func_java_io_ByteArrayOutputStream_write__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1309, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 41 , L449338124 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 41;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/ByteArrayOutputStream.ensureOpen()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ByteArrayOutputStream_ensureOpen___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 42 , L1037475674 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 43 , L983767354 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // arraylength  label  L983767354
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L32393008;
    ; 
    //  line no 44 , L1504083002 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // arraylength  label  L1504083002
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
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
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 45 , L1342374939 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
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
    //  line no 46 , L1917562344 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield java/io/ByteArrayOutputStream buf [B
    sp -= 2;
    ((struct java_io_ByteArrayOutputStream*)rstack[sp + 0].obj)->buf_0 = rstack[sp + 1].obj;
    L32393008:
    //  line no 48 , L32393008 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L32393008 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    ; 
    //  line no 49 , L24097622 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield java/io/ByteArrayOutputStream count I
    sp -= 2;
    ((struct java_io_ByteArrayOutputStream*)rstack[sp + 0].obj)->count_1 = stack[sp + 1].i;
    ; 
    //  line no 50 , L1807894765 , bytecode index = 
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

void bridge_java_io_ByteArrayOutputStream_write__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayOutputStream_write__I_V(runtime, ins);
}


// locals: 6
// stack: 5
// args: 3
void func_java_io_ByteArrayOutputStream_write___3BII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1310, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 54 , L211973922 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 54;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/ByteArrayOutputStream.ensureOpen()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ByteArrayOutputStream_ensureOpen___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 55 , L1890287843 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L156711739;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1890287843
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L156711739;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L156711739;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1890287843
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L156711739;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  >= 0) goto L1732410217;
    L156711739:
    //  line no 57 , L156711739 , bytecode index = 
    // new java/lang/IndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 175);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IndexOutOfBoundsException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IndexOutOfBoundsException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L156711739 in labeltable is :L156711739
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 57;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1732410217:
    //  line no 58 , L1732410217 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  != 0) goto L2017860548;
    ; 
    //  line no 59 , L1413886135 , bytecode index = 
    method_exit(runtime);
    return;
    L2017860548:
    //  line no 61 , L2017860548 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 62 , L1693997031 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // arraylength  label  L1693997031
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L278262050;
    ; 
    //  line no 63 , L1489322191 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // arraylength  label  L1489322191
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
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
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 64 , L1029898472 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
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
    //  line no 65 , L461516748 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // putfield java/io/ByteArrayOutputStream buf [B
    sp -= 2;
    ((struct java_io_ByteArrayOutputStream*)rstack[sp + 0].obj)->buf_0 = rstack[sp + 1].obj;
    L278262050:
    //  line no 67 , L278262050 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
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
    //  line no 68 , L614580607 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // putfield java/io/ByteArrayOutputStream count I
    sp -= 2;
    ((struct java_io_ByteArrayOutputStream*)rstack[sp + 0].obj)->count_1 = stack[sp + 1].i;
    ; 
    //  line no 69 , L1443900956 , bytecode index = 
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

void bridge_java_io_ByteArrayOutputStream_write___3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayOutputStream_write___3BII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 2
// args: 0
void func_java_io_ByteArrayOutputStream_reset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1311, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 73 , L2032647583 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 73;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/ByteArrayOutputStream.ensureOpen()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ByteArrayOutputStream_ensureOpen___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 74 , L1395073533 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/io/ByteArrayOutputStream count I
    sp -= 2;
    ((struct java_io_ByteArrayOutputStream*)rstack[sp + 0].obj)->count_1 = stack[sp + 1].i;
    ; 
    //  line no 75 , L68195659 , bytecode index = 
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

void bridge_java_io_ByteArrayOutputStream_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayOutputStream_reset___V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
JArray * func_java_io_ByteArrayOutputStream_toByteArray____3B(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1312, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 80 , L993420850 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 80;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream isClosed Z
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->isClosed_2;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1374982240;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // arraylength  label  L993420850
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1374982240;
    ; 
    //  line no 81 , L1364127192 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1374982240:
    //  line no 83 , L1374982240 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 84 , L1635772897 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
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
    //  line no 85 , L1768952842 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_java_io_ByteArrayOutputStream_toByteArray____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_ByteArrayOutputStream_toByteArray____3B(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_io_ByteArrayOutputStream_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 91 , L989126847 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_io_ByteArrayOutputStream_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ByteArrayOutputStream_size___I(runtime, ins);
}


// locals: 1
// stack: 5
// args: 0
struct java_lang_String* func_java_io_ByteArrayOutputStream_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1314, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 96 , L1298380324 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 96;
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    // invokespecial java/lang/String.<init>([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3BII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
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

void bridge_java_io_ByteArrayOutputStream_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_ByteArrayOutputStream_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_io_ByteArrayOutputStream_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1315, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 101 , L1535116392 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 101;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/io/ByteArrayOutputStream isClosed Z
    sp -= 2;
    ((struct java_io_ByteArrayOutputStream*)rstack[sp + 0].obj)->isClosed_2 = stack[sp + 1].i;
    ; 
    //  line no 102 , L773348567 , bytecode index = 
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

void bridge_java_io_ByteArrayOutputStream_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayOutputStream_close___V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_java_io_ByteArrayOutputStream_writeTo__Ljava_io_OutputStream_2_V(JThreadRuntime *runtime, struct java_io_OutputStream* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1316, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 105 , L1602167682 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 105;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayOutputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayOutputStream*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    // invokevirtual java/io/OutputStream.write([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 122, 2);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 106 , L67620673 , bytecode index = 
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

void bridge_java_io_ByteArrayOutputStream_writeTo__Ljava_io_OutputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayOutputStream_writeTo__Ljava_io_OutputStream_2_V(runtime, ins);
}


