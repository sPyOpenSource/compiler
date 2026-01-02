// CLASS: java/io/Writer extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_io_Writer_static {};



__refer arr_vmtable_java_io_Writer_from_java_io_Writer[] = {
    func_java_io_Writer_write__I_V,  //0
    func_java_io_Writer_write___3C_V,  //1
    func_java_io_Writer_write___3CII_V,  //2
    func_java_io_Writer_write__Ljava_lang_String_2_V,  //3
    func_java_io_Writer_write__Ljava_lang_String_2II_V,  //4
    func_java_io_Writer_flush___V,  //5
    func_java_io_Writer_close___V,  //6
    func_java_io_Writer_append__C_Ljava_io_Writer_2,  //7
    func_java_io_Writer_append__Ljava_lang_CharSequence_2_Ljava_io_Writer_2,  //8
    func_java_io_Writer_append__Ljava_lang_CharSequence_2II_Ljava_io_Writer_2  //9
};
__refer arr_vmtable_java_io_Writer_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_Writer[] = {
    {410, 10, arr_vmtable_java_io_Writer_from_java_io_Writer}, //0
    {5, 10, arr_vmtable_java_io_Writer_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_java_io_Writer__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3241, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 19 , L698062929 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 19;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 13 , L421135185 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 1024
    stack[sp++].i = 1024;
    // putfield java/io/Writer writeBufferSize I
    sp -= 2;
    ((struct java_io_Writer*)rstack[sp + 0].obj)->writeBufferSize_1 = stack[sp + 1].i;
    ; 
    //  line no 20 , L1731365835 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield java/io/Writer lock Ljava/lang/Object;
    sp -= 2;
    ((struct java_io_Writer*)rstack[sp + 0].obj)->lock_2 = rstack[sp + 1].obj;
    ; 
    //  line no 21 , L1371182382 , bytecode index = 
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

void bridge_java_io_Writer__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_Writer__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3242, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 24 , L1834961152 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 24;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 13 , L507575219 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 1024
    stack[sp++].i = 1024;
    // putfield java/io/Writer writeBufferSize I
    sp -= 2;
    ((struct java_io_Writer*)rstack[sp + 0].obj)->writeBufferSize_1 = stack[sp + 1].i;
    ; 
    //  line no 25 , L458624688 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L165687172;
    ; 
    //  line no 26 , L509632753 , bytecode index = 
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
    //     L509632753 in labeltable is :L509632753
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 26;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L165687172:
    //  line no 28 , L165687172 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/io/Writer lock Ljava/lang/Object;
    sp -= 2;
    ((struct java_io_Writer*)rstack[sp + 0].obj)->lock_2 = rstack[sp + 1].obj;
    ; 
    //  line no 29 , L132423149 , bytecode index = 
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

void bridge_java_io_Writer__init___Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer__init___Ljava_lang_Object_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_Writer_write__I_V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_Writer_write__I_V = {2, arr_extable_func_java_io_Writer_write__I_V};

// locals: 4
// stack: 4
// args: 1
void func_java_io_Writer_write__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3243, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    // try catch :L611890729 L956448191 L439010439 (
    // try catch :L439010439 L1460298405 L439010439 (
    ; 
    //  line no 33 , L908218259 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Writer lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_Writer*)rstack[sp - 1].obj)->lock_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L611890729:
    __frame->bytecodeIndex = 
    //  line no 34 , L611890729 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Writer writeBuffer [C
    rstack[sp - 1].obj = ((struct java_io_Writer*)rstack[sp - 1].obj)->writeBuffer_0;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L518349613;
    ; 
    //  line no 35 , L1386713738 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 1024
    stack[sp++].i = 1024;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/io/Writer writeBuffer [C
    sp -= 2;
    ((struct java_io_Writer*)rstack[sp + 0].obj)->writeBuffer_0 = rstack[sp + 1].obj;
    L518349613:
    //  line no 37 , L518349613 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Writer writeBuffer [C
    rstack[sp - 1].obj = ((struct java_io_Writer*)rstack[sp - 1].obj)->writeBuffer_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L518349613 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 38 , L1446825265 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Writer writeBuffer [C
    rstack[sp - 1].obj = ((struct java_io_Writer*)rstack[sp - 1].obj)->writeBuffer_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/io/Writer.write([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 410, 2);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 39 , L1917214386 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L956448191:
    __frame->bytecodeIndex = 
    goto L1200601052;
    L439010439:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1460298405:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1460298405 in labeltable is :L1460298405
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 39;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1200601052:
    //  line no 40 , L1200601052 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L439010439;
        case 1 : goto L439010439;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_Writer_write__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer_write__I_V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_java_io_Writer_write___3C_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3244, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 44 , L431446827 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 44;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L431446827
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokevirtual java/io/Writer.write([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 410, 2);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 45 , L1506030945 , bytecode index = 
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

void bridge_java_io_Writer_write___3C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer_write___3C_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
void func_java_io_Writer_write___3CII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3245, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_Writer_write___3CII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer_write___3CII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 4
// args: 1
void func_java_io_Writer_write__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3246, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 52 , L1481970600 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 52;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/io/Writer.write(Ljava/lang/String;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32,s32) = find_method(__ins->vm_table, 410, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 53 , L2065196426 , bytecode index = 
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

void bridge_java_io_Writer_write__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer_write__Ljava_lang_String_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_Writer_write__Ljava_lang_String_2II_V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_Writer_write__Ljava_lang_String_2II_V = {2, arr_extable_func_java_io_Writer_write__Ljava_lang_String_2II_V};

// locals: 7
// stack: 5
// args: 3
void func_java_io_Writer_write__Ljava_lang_String_2II_V(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1, s32 p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3247, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    // try catch :L438270414 L1789387126 L1386999197 (
    // try catch :L1386999197 L672869885 L1386999197 (
    ; 
    //  line no 57 , L1227612217 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 57;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Writer lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_Writer*)rstack[sp - 1].obj)->lock_2;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[4].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L438270414:
    __frame->bytecodeIndex = 
    //  line no 59 , L438270414 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  sipush 1024
    stack[sp++].i = 1024;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L483529787;
    ; 
    //  line no 60 , L286840121 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Writer writeBuffer [C
    rstack[sp - 1].obj = ((struct java_io_Writer*)rstack[sp - 1].obj)->writeBuffer_0;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1612539426;
    ; 
    //  line no 61 , L1981900848 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 1024
    stack[sp++].i = 1024;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/io/Writer writeBuffer [C
    sp -= 2;
    ((struct java_io_Writer*)rstack[sp + 0].obj)->writeBuffer_0 = rstack[sp + 1].obj;
    L1612539426:
    //  line no 63 , L1612539426 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/Writer writeBuffer [C
    rstack[sp - 1].obj = ((struct java_io_Writer*)rstack[sp - 1].obj)->writeBuffer_0;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    goto L767060604;
    L483529787:
    //  line no 65 , L483529787 , bytecode index = 
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[5].obj = rstack[--sp].obj;
    L767060604:
    //  line no 67 , L767060604 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.getChars(II[CI)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,JArray *,s32) = find_method(__ins->vm_table, 50, 8);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 68 , L639579551 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[3].i;
    // invokevirtual java/io/Writer.write([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 410, 2);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 69 , L1526901124 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1789387126:
    __frame->bytecodeIndex = 
    goto L1461216550;
    L1386999197:
    __frame->bytecodeIndex = 
    rlocal[6].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L672869885:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[6].obj;
    // athrow
    //     L672869885 in labeltable is :L672869885
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 69;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1461216550:
    //  line no 70 , L1461216550 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1386999197;
        case 1 : goto L1386999197;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_Writer_write__Ljava_lang_String_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer_write__Ljava_lang_String_2II_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 0
void func_java_io_Writer_flush___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3248, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_Writer_flush___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer_flush___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_io_Writer_close___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3249, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_Writer_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_Writer_close___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_io_Writer* func_java_io_Writer_append__C_Ljava_io_Writer_2(JThreadRuntime *runtime, u16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3250, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 79 , L1727096642 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 79;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/Writer.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 410, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 80 , L678538385 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_io_Writer_append__C_Ljava_io_Writer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_Writer_append__C_Ljava_io_Writer_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct java_io_Writer* func_java_io_Writer_append__Ljava_lang_CharSequence_2_Ljava_io_Writer_2(JThreadRuntime *runtime, struct java_lang_CharSequence* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3251, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 84 , L1835638995 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 84;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/lang/CharSequence.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 294, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/io/Writer.append(Ljava/lang/CharSequence;II)Ljava/io/Writer;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_io_Writer* (*__func_p) (JThreadRuntime *,struct java_lang_CharSequence*,s32,s32) = find_method(__ins->vm_table, 410, 9);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
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

void bridge_java_io_Writer_append__Ljava_lang_CharSequence_2_Ljava_io_Writer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_Writer_append__Ljava_lang_CharSequence_2_Ljava_io_Writer_2(runtime, ins);
}


// locals: 7
// stack: 4
// args: 3
struct java_io_Writer* func_java_io_Writer_append__Ljava_lang_CharSequence_2II_Ljava_io_Writer_2(JThreadRuntime *runtime, struct java_lang_CharSequence* p0, s32 p1, s32 p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3252, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 89 , L629092599 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 89;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 90 , L1071522313 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/lang/String
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 32);
    if(stack[--sp].i  == 0) goto L529621529;
    ; 
    //  line no 91 , L1739390441 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/lang/String
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 32);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    // invokevirtual java/io/Writer.write(Ljava/lang/String;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32,s32) = find_method(__ins->vm_table, 410, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L990413155;
    L529621529:
    //  line no 93 , L529621529 , bytecode index = 
    stack[sp++].i = local[4].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 94 , L1971855969 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[6].i = stack[--sp].i;
    L1629292387:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1633615132;
    ; 
    //  line no 95 , L505572301 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[6].i;
    // invokeinterface java/lang/CharSequence.charAt(I)C
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        u16 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 294, 0);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore u16  ,  L505572301 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 94 , L713939266 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1629292387;
    L1633615132:
    //  line no 97 , L1633615132 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[4].i;
    // invokevirtual java/io/Writer.write([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 410, 2);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L990413155:
    //  line no 99 , L990413155 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_io_Writer_append__Ljava_lang_CharSequence_2II_Ljava_io_Writer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_Writer_append__Ljava_lang_CharSequence_2II_Ljava_io_Writer_2(runtime, ins, para[0].i, para[1].i);
}


