// CLASS: java/util/Arrays extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Arrays_static {};



__refer arr_vmtable_java_util_Arrays_from_java_util_Arrays[] = {
    NULL
};
__refer arr_vmtable_java_util_Arrays_from_java_lang_Object[] = {
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
VMTable vmtable_java_util_Arrays[] = {
    {40, 0, arr_vmtable_java_util_Arrays_from_java_util_Arrays}, //0
    {10, 11, arr_vmtable_java_util_Arrays_from_java_lang_Object}, //1
};



// locals: 2
// stack: 3
// args: 3
JArray * func_java_util_Arrays_copyOf___3Ljava_lang_Object_2I__3Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 55, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 73 , L1439337960 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 73;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.getClass()Ljava/lang/Class;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Class* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.copyOf([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;
    {
        sp -= 4;
        rstack[sp].obj = func_java_util_Arrays_copyOf___3Ljava_lang_Object_2ILjava_lang_Class_2__3Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj);
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

void bridge_java_util_Arrays_copyOf___3Ljava_lang_Object_2I__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Arrays_copyOf___3Ljava_lang_Object_2I__3Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 3
// stack: 6
// args: 3
JArray * func_java_util_Arrays_copyOf___3CI__3C(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 56, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 77 , L315860201 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 77;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(200));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 78 , L604125138 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L604125138
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    ; 
    //  line no 79 , L631659383 , bytecode index = 
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 78 , L785447854 , bytecode index = 
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
    //  line no 80 , L556529265 , bytecode index = 
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

void bridge_java_util_Arrays_copyOf___3CI__3C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Arrays_copyOf___3CI__3C(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 4
// stack: 6
// args: 4
JArray * func_java_util_Arrays_copyOf___3Ljava_lang_Object_2ILjava_lang_Class_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, struct java_lang_Class* p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 57, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 85 , L63468833 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 85;
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    {
        class_clinit(runtime, get_utf8str_by_utfraw_index(203));
        JClass *clazz = classes_get(get_utf8str_by_utfraw_index(203));
        rstack[sp++].obj = ins_of_Class_create_get(runtime, clazz);
    }
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L398690014;
    ; 
    //  line no 86 , L1526298704 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(203));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L1593180232;
    L398690014:
    //  line no 87 , L398690014 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/Class.getComponentType()Ljava/lang/Class;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Class* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/reflect/Array.newInstance(Ljava/lang/Class;I)Ljava/lang/Object;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast [Ljava/lang/Object;
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 203);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    L1593180232:
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 88 , L492079624 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L492079624
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    ; 
    //  line no 89 , L380242442 , bytecode index = 
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 88 , L125881207 , bytecode index = 
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
    //  line no 90 , L1763344271 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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

void bridge_java_util_Arrays_copyOf___3Ljava_lang_Object_2ILjava_lang_Class_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Arrays_copyOf___3Ljava_lang_Object_2ILjava_lang_Class_2__3Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj);
}


// locals: 1
// stack: 3
// args: 2
struct java_util_stream_Stream* func_java_util_Arrays_stream___3Ljava_lang_Object_2_Ljava_util_stream_Stream_2(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 58, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 95 , L370869802 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 95;
    // new java/lang/UnsupportedOperationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 24);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 209);
    // invokespecial java/lang/UnsupportedOperationException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_UnsupportedOperationException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L370869802 in labeltable is :L370869802
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 95;
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

void bridge_java_util_Arrays_stream___3Ljava_lang_Object_2_Ljava_util_stream_Stream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Arrays_stream___3Ljava_lang_Object_2_Ljava_util_stream_Stream_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 3
// args: 2
struct java_util_stream_IntStream* func_java_util_Arrays_stream___3I_Ljava_util_stream_IntStream_2(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 59, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 99 , L765284253 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 99;
    // new java/lang/UnsupportedOperationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 24);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 209);
    // invokespecial java/lang/UnsupportedOperationException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_UnsupportedOperationException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L765284253 in labeltable is :L765284253
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 99;
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

void bridge_java_util_Arrays_stream___3I_Ljava_util_stream_IntStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Arrays_stream___3I_Ljava_util_stream_IntStream_2(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 4
JArray * func_java_util_Arrays_copyOfRange___3Ljava_lang_Object_2II__3Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 60, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 133 , L240166646 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 133;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.getClass()Ljava/lang/Class;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Class* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.copyOfRange([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;
    {
        sp -= 5;
        rstack[sp].obj = func_java_util_Arrays_copyOfRange___3Ljava_lang_Object_2IILjava_lang_Class_2__3Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
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

void bridge_java_util_Arrays_copyOfRange___3Ljava_lang_Object_2II__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Arrays_copyOfRange___3Ljava_lang_Object_2II__3Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 6
// stack: 6
// args: 5
JArray * func_java_util_Arrays_copyOfRange___3Ljava_lang_Object_2IILjava_lang_Class_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, struct java_lang_Class* p4){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 61, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 170 , L1405747618 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 170;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 171 , L898406901 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  >= 0) goto L1054932644;
    ; 
    //  line no 172 , L1213349904 , bytecode index = 
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 216);
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
    //     L1213349904 in labeltable is :L1213349904
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 172;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1054932644:
    //  line no 174 , L1054932644 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    {
        class_clinit(runtime, get_utf8str_by_utfraw_index(203));
        JClass *clazz = classes_get(get_utf8str_by_utfraw_index(203));
        rstack[sp++].obj = ins_of_Class_create_get(runtime, clazz);
    }
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1259769769;
    ; 
    //  line no 175 , L444920847 , bytecode index = 
    stack[sp++].i = local[4].i;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(203));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L589835301;
    L1259769769:
    //  line no 176 , L1259769769 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/lang/Class.getComponentType()Ljava/lang/Class;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Class* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/reflect/Array.newInstance(Ljava/lang/Class;I)Ljava/lang/Object;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast [Ljava/lang/Object;
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 203);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    L589835301:
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 177 , L2032188048 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L2032188048
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    ; 
    //  line no 178 , L112466394 , bytecode index = 
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 177 , L992846223 , bytecode index = 
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
    //  line no 179 , L1493625803 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
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

void bridge_java_util_Arrays_copyOfRange___3Ljava_lang_Object_2IILjava_lang_Class_2__3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Arrays_copyOfRange___3Ljava_lang_Object_2IILjava_lang_Class_2__3Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].obj);
}


// locals: 1
// stack: 1
// args: 0
void func_java_util_Arrays__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 62, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 185 , L64133603 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 185;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 186 , L1436901839 , bytecode index = 
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

void bridge_java_util_Arrays__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays__init____V(runtime, ins);
}


// locals: 6
// stack: 2
// args: 3
s32 func_java_util_Arrays_binarySearch___3BB_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s8 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 63, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 205 , L1866161430 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 205;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 206 , L2024918163 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L2024918163
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 207 , L107241811 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L558922244:
    //  line no 208 , L558922244 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L339099861;
    ; 
    //  line no 210 , L1653986196 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 211 , L1197365356 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload s8  ,  L1197365356 bc index = 
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 212 , L1702660825 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1131040331;
    ; 
    //  line no 213 , L254749889 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1131040331:
    //  line no 214 , L1131040331 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L973576304;
    ; 
    //  line no 215 , L992802731 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    goto L715521683;
    L973576304:
    //  line no 218 , L973576304 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    stack[sp++].i = local[4].i;
    local[2].i = stack[--sp].i;
    L715521683:
    //  line no 219 , L715521683 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L558922244;
    L339099861:
    //  line no 220 , L339099861 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_Arrays_binarySearch___3BB_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3BB_I(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 6
// stack: 2
// args: 3
s32 func_java_util_Arrays_binarySearch___3CC_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, u16 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 64, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 239 , L1524126153 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 239;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 240 , L102065302 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L102065302
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 241 , L63001505 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L191037037:
    //  line no 242 , L191037037 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L330084561;
    ; 
    //  line no 244 , L1043351526 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 245 , L937773018 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L937773018 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 246 , L728258269 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1572098393;
    ; 
    //  line no 247 , L1627857534 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1572098393:
    //  line no 248 , L1572098393 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2084663827;
    ; 
    //  line no 249 , L360062456 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    goto L1790421142;
    L2084663827:
    //  line no 252 , L2084663827 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    stack[sp++].i = local[4].i;
    local[2].i = stack[--sp].i;
    L1790421142:
    //  line no 253 , L1790421142 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L191037037;
    L330084561:
    //  line no 254 , L330084561 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_Arrays_binarySearch___3CC_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3CC_I(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 6
// stack: 2
// args: 3
s32 func_java_util_Arrays_binarySearch___3SS_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s16 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 65, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 273 , L1172131546 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 273;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 274 , L1616974404 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1616974404
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 275 , L927327686 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1582071873:
    //  line no 276 , L1582071873 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1908981452;
    ; 
    //  line no 278 , L433287555 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 279 , L27319466 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload s16  ,  L27319466 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 280 , L1003752023 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L266272063;
    ; 
    //  line no 281 , L226744878 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L266272063:
    //  line no 282 , L266272063 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L172032696;
    ; 
    //  line no 283 , L299644693 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    goto L1771243284;
    L172032696:
    //  line no 286 , L172032696 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    stack[sp++].i = local[4].i;
    local[2].i = stack[--sp].i;
    L1771243284:
    //  line no 287 , L1771243284 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1582071873;
    L1908981452:
    //  line no 288 , L1908981452 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_Arrays_binarySearch___3SS_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3SS_I(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 6
// stack: 2
// args: 3
s32 func_java_util_Arrays_binarySearch___3II_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 66, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 307 , L2013559698 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 307;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 308 , L143695640 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L143695640
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 309 , L2043318969 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L341878976:
    //  line no 310 , L341878976 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1331923253;
    ; 
    //  line no 312 , L1132967838 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 313 , L1853205005 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload s32  ,  L1853205005 bc index = 
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
    //  line no 314 , L2143431083 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L750468423;
    ; 
    //  line no 315 , L1384010761 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L750468423:
    //  line no 316 , L750468423 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L295221641;
    ; 
    //  line no 317 , L2147046752 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    goto L182259421;
    L295221641:
    //  line no 320 , L295221641 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    stack[sp++].i = local[4].i;
    local[2].i = stack[--sp].i;
    L182259421:
    //  line no 321 , L182259421 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L341878976;
    L1331923253:
    //  line no 322 , L1331923253 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_Arrays_binarySearch___3II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3II_I(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 8
// stack: 4
// args: 3
s32 func_java_util_Arrays_binarySearch___3JJ_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s64 p2){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 67, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].j = p2;
    ; 
    //  line no 341 , L2124643775 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 341;
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 342 , L1262773598 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1262773598
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 343 , L688726285 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L494317290:
    //  line no 344 , L494317290 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L2027775614;
    ; 
    //  line no 346 , L282821294 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 347 , L1344199921 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // arrload s64  ,  L1344199921 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    sp -= 2;
    local[6].j = stack[sp].j;
    ; 
    //  line no 348 , L2025269734 , bytecode index = 
    stack[sp].j = local[6].j;
    sp += 2;
    stack[sp].j = local[1].j;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1800031768;
    ; 
    //  line no 349 , L667447085 , bytecode index = 
    stack[sp++].i = local[5].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1800031768:
    //  line no 350 , L1800031768 , bytecode index = 
    stack[sp].j = local[6].j;
    sp += 2;
    stack[sp].j = local[1].j;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L26728049;
    ; 
    //  line no 351 , L1076770748 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    goto L2041416495;
    L26728049:
    //  line no 354 , L26728049 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    stack[sp++].i = local[5].i;
    local[3].i = stack[--sp].i;
    L2041416495:
    //  line no 355 , L2041416495 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L494317290;
    L2027775614:
    //  line no 356 , L2027775614 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_Arrays_binarySearch___3JJ_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3JJ_I(runtime, para[0].obj, para[1].obj, para[2].j);
}


// locals: 6
// stack: 2
// args: 3
s32 func_java_util_Arrays_binarySearch___3FF_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, f32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 68, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].f = p2;
    ; 
    //  line no 376 , L576936864 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 376;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 377 , L331418503 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L331418503
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 378 , L111156771 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1519736165:
    //  line no 379 , L1519736165 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1653844940;
    ; 
    //  line no 381 , L2039810346 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 382 , L2143437117 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload f32  ,  L2143437117 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    stack[sp++].f = local[1].f;
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 383 , L260840925 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  != 0) goto L1891502635;
    ; 
    //  line no 384 , L557023567 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1891502635:
    //  line no 385 , L1891502635 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  <= 0) goto L1276504061;
    ; 
    //  line no 386 , L597190999 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    goto L603443293;
    L1276504061:
    //  line no 389 , L1276504061 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    stack[sp++].i = local[4].i;
    local[2].i = stack[--sp].i;
    L603443293:
    //  line no 390 , L603443293 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1519736165;
    L1653844940:
    //  line no 391 , L1653844940 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_Arrays_binarySearch___3FF_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3FF_I(runtime, para[0].obj, para[1].obj, para[2].f);
}


// locals: 7
// stack: 4
// args: 3
s32 func_java_util_Arrays_binarySearch___3DD_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, f64 p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 69, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].d = p2;
    ; 
    //  line no 411 , L2100961961 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 411;
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 412 , L487075464 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L487075464
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 413 , L6320204 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L112302969:
    //  line no 414 , L112302969 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L707976812;
    ; 
    //  line no 416 , L1989335500 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 417 , L1978869058 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // arrload f64  ,  L1978869058 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    stack[sp].d = local[1].d;
    sp += 2;
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 418 , L2131952342 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  != 0) goto L1139700454;
    ; 
    //  line no 419 , L592617454 , bytecode index = 
    stack[sp++].i = local[5].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1139700454:
    //  line no 420 , L1139700454 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  <= 0) goto L1340565491;
    ; 
    //  line no 421 , L671467883 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    goto L407697359;
    L1340565491:
    //  line no 424 , L1340565491 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    stack[sp++].i = local[5].i;
    local[3].i = stack[--sp].i;
    L407697359:
    //  line no 425 , L407697359 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L112302969;
    L707976812:
    //  line no 426 , L707976812 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_util_Arrays_binarySearch___3DD_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3DD_I(runtime, para[0].obj, para[1].obj, para[2].d);
}


// locals: 2
// stack: 3
// args: 3
s32 func_java_util_Arrays_binarySearch___3Ljava_lang_Object_2Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, struct java_lang_Object* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 70, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 450 , L1543148593 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 450;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokestatic java/util/Arrays.binarySearch([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I
    {
        sp -= 4;
        stack[sp].i = func_java_util_Arrays_binarySearch___3Ljava_lang_Object_2Ljava_lang_Object_2Ljava_util_Comparator_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
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

void bridge_java_util_Arrays_binarySearch___3Ljava_lang_Object_2Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3Ljava_lang_Object_2Ljava_lang_Object_2_I(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 3
// args: 4
s32 func_java_util_Arrays_binarySearch___3Ljava_lang_Object_2Ljava_lang_Object_2Ljava_util_Comparator_2_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, struct java_lang_Object* p2, struct java_util_Comparator* p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 71, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 477 , L574568002 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 477;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 229);
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
    //     L574568002 in labeltable is :L574568002
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 477;
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
    return 0;
}

void bridge_java_util_Arrays_binarySearch___3Ljava_lang_Object_2Ljava_lang_Object_2Ljava_util_Comparator_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_binarySearch___3Ljava_lang_Object_2Ljava_lang_Object_2Ljava_util_Comparator_2_I(runtime, para[0].obj, para[1].obj, para[2].obj, para[3].obj);
}


// locals: 3
// stack: 3
// args: 3
s8 func_java_util_Arrays_equals___3Z_3Z_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 72, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 512 , L932285561 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 512;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L2028555727;
    ; 
    //  line no 513 , L591391158 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2028555727:
    //  line no 517 , L2028555727 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L2028555727
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L2028555727
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L898557489;
    ; 
    //  line no 518 , L247944893 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1014166943:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1014166943
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1625082366;
    ; 
    //  line no 519 , L572593338 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L572593338 bc index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L572593338 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L384294141;
    ; 
    //  line no 520 , L1024597427 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L384294141:
    //  line no 518 , L384294141 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1014166943;
    L1625082366:
    //  line no 522 , L1625082366 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L898557489:
    //  line no 528 , L898557489 , bytecode index = 
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

void bridge_java_util_Arrays_equals___3Z_3Z_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_equals___3Z_3Z_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 3
// args: 3
s8 func_java_util_Arrays_equals___3B_3B_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 73, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 543 , L296347592 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 543;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L956420404;
    ; 
    //  line no 544 , L349420578 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L956420404:
    //  line no 548 , L956420404 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L956420404
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L956420404
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L315932542;
    ; 
    //  line no 549 , L1277009227 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1277009227
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    L2065857933:
    //  line no 550 , L2065857933 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L1914301543;
    ; 
    //  line no 551 , L1157726741 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L1157726741 bc index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L1157726741 bc index = 
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2065857933;
    ; 
    //  line no 552 , L1708570683 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1914301543:
    //  line no 553 , L1914301543 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L315932542:
    //  line no 558 , L315932542 , bytecode index = 
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

void bridge_java_util_Arrays_equals___3B_3B_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_equals___3B_3B_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 2
// stack: 2
// args: 3
s8 func_java_util_Arrays_equals___3C_3C_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 74, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 573 , L817348612 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 573;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L2045766957;
    ; 
    //  line no 574 , L690521419 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2045766957:
    //  line no 588 , L2045766957 , bytecode index = 
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

void bridge_java_util_Arrays_equals___3C_3C_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_equals___3C_3C_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 3
// args: 3
s8 func_java_util_Arrays_equals___3S_3S_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 75, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 603 , L689401025 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 603;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L790067787;
    ; 
    //  line no 604 , L1115201599 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L790067787:
    //  line no 608 , L790067787 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L790067787
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L790067787
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L343856911;
    ; 
    //  line no 609 , L102617125 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L102617125
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    L306980751:
    //  line no 610 , L306980751 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L363988129;
    ; 
    //  line no 611 , L1997963191 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // arrload s16  ,  L1997963191 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload s16  ,  L1997963191 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L306980751;
    ; 
    //  line no 612 , L534906248 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L363988129:
    //  line no 613 , L363988129 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L343856911:
    //  line no 618 , L343856911 , bytecode index = 
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

void bridge_java_util_Arrays_equals___3S_3S_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_equals___3S_3S_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 3
// args: 3
s8 func_java_util_Arrays_equals___3I_3I_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 76, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 633 , L1769193365 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 633;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L769429195;
    ; 
    //  line no 634 , L580718781 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L769429195:
    //  line no 638 , L769429195 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L769429195
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L769429195
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1196695891;
    ; 
    //  line no 639 , L867148091 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L867148091
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    L2051853139:
    //  line no 640 , L2051853139 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L815674463;
    ; 
    //  line no 641 , L1453774246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L1453774246 bc index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L1453774246 bc index = 
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2051853139;
    ; 
    //  line no 642 , L416153648 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L815674463:
    //  line no 643 , L815674463 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1196695891:
    //  line no 648 , L1196695891 , bytecode index = 
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

void bridge_java_util_Arrays_equals___3I_3I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_equals___3I_3I_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 4
// args: 3
s8 func_java_util_Arrays_equals___3J_3J_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 77, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 663 , L1169794610 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 663;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L634540230;
    ; 
    //  line no 664 , L1307904972 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L634540230:
    //  line no 668 , L634540230 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L634540230
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L634540230
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1797712197;
    ; 
    //  line no 670 , L1671846437 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1671846437
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    L1422222071:
    //  line no 671 , L1422222071 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L831236296;
    ; 
    //  line no 672 , L1840976765 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // arrload s64  ,  L1840976765 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload s64  ,  L1840976765 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L1422222071;
    ; 
    //  line no 673 , L1016925085 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L831236296:
    //  line no 674 , L831236296 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1797712197:
    //  line no 679 , L1797712197 , bytecode index = 
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

void bridge_java_util_Arrays_equals___3J_3J_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_equals___3J_3J_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 3
// args: 3
s8 func_java_util_Arrays_equals___3F_3F_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 78, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 694 , L789653861 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 694;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L436532993;
    ; 
    //  line no 695 , L1318180415 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L436532993:
    //  line no 700 , L436532993 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L436532993
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L436532993
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L222511810;
    ; 
    //  line no 701 , L733943822 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L733943822
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    L373182087:
    //  line no 702 , L373182087 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L1457410641;
    ; 
    //  line no 703 , L1100767002 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // arrload f32  ,  L1100767002 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload f32  ,  L1100767002 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L373182087;
    ; 
    //  line no 704 , L313540687 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1457410641:
    //  line no 705 , L1457410641 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L222511810:
    //  line no 710 , L222511810 , bytecode index = 
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

void bridge_java_util_Arrays_equals___3F_3F_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_equals___3F_3F_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 4
// args: 3
s8 func_java_util_Arrays_equals___3D_3D_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 79, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 725 , L1383524016 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 725;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1907431275;
    ; 
    //  line no 726 , L1637061418 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1907431275:
    //  line no 731 , L1907431275 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1907431275
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1907431275
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1686100174;
    ; 
    //  line no 732 , L22671767 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L22671767
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    L2024453272:
    //  line no 733 , L2024453272 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L98394724;
    ; 
    //  line no 734 , L536765369 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // arrload f64  ,  L536765369 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload f64  ,  L536765369 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L2024453272;
    ; 
    //  line no 735 , L1374026904 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L98394724:
    //  line no 736 , L98394724 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1686100174:
    //  line no 741 , L1686100174 , bytecode index = 
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

void bridge_java_util_Arrays_equals___3D_3D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_equals___3D_3D_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 2
// stack: 4
// args: 3
void func_java_util_Arrays_fill___3ZZ_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s8 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 80, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 791 , L317071334 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 791;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L317071334
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    // invokestatic java/util/Arrays.fill([ZIIZ)V
    {
        sp -= 5;
        func_java_util_Arrays_fill___3ZIIZ_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 792 , L2129221032 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3ZZ_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3ZZ_V(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 5
// stack: 3
// args: 5
void func_java_util_Arrays_fill___3ZIIZ_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, s8 p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 81, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    ; 
    //  line no 807 , L1224347463 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 807;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1791045777;
    ; 
    //  line no 808 , L1580297332 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1580297332 in labeltable is :L1580297332
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 808;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1791045777:
    //  line no 809 , L1791045777 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L1831477404:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1966250569;
    ; 
    //  line no 810 , L370440646 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    // arrstore s8  ,  L370440646 bc index = 
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
    //  line no 809 , L1125381564 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1831477404;
    L1966250569:
    //  line no 811 , L1966250569 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3ZIIZ_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3ZIIZ_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].i);
}


// locals: 2
// stack: 4
// args: 3
void func_java_util_Arrays_fill___3BB_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s8 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 82, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 821 , L511717113 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 821;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L511717113
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    // invokestatic java/util/Arrays.fill([BIIB)V
    {
        sp -= 5;
        func_java_util_Arrays_fill___3BIIB_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 822 , L728739494 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3BB_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3BB_V(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 5
// stack: 3
// args: 5
void func_java_util_Arrays_fill___3BIIB_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, s8 p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 83, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    ; 
    //  line no 837 , L6750210 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 837;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L521081105;
    ; 
    //  line no 838 , L1237550792 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1237550792 in labeltable is :L1237550792
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 838;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L521081105:
    //  line no 839 , L521081105 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L1448247698:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1846406218;
    ; 
    //  line no 840 , L158199555 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    // arrstore s8  ,  L158199555 bc index = 
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
    //  line no 839 , L1556995360 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1448247698;
    L1846406218:
    //  line no 841 , L1846406218 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3BIIB_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3BIIB_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].i);
}


// locals: 2
// stack: 4
// args: 3
void func_java_util_Arrays_fill___3CC_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, u16 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 84, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 851 , L524241174 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 851;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L524241174
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    // invokestatic java/util/Arrays.fill([CIIC)V
    {
        sp -= 5;
        func_java_util_Arrays_fill___3CIIC_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 852 , L2035070981 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3CC_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3CC_V(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 5
// stack: 3
// args: 5
void func_java_util_Arrays_fill___3CIIC_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, u16 p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 85, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    ; 
    //  line no 867 , L1506809545 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 867;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1019384604;
    ; 
    //  line no 868 , L550668305 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L550668305 in labeltable is :L550668305
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 868;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1019384604:
    //  line no 869 , L1019384604 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L963110412:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1624820151;
    ; 
    //  line no 870 , L1219161283 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    // arrstore u16  ,  L1219161283 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 869 , L2081191879 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L963110412;
    L1624820151:
    //  line no 871 , L1624820151 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3CIIC_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3CIIC_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].i);
}


// locals: 2
// stack: 4
// args: 3
void func_java_util_Arrays_fill___3SS_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s16 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 86, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 881 , L1559122513 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 881;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1559122513
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    // invokestatic java/util/Arrays.fill([SIIS)V
    {
        sp -= 5;
        func_java_util_Arrays_fill___3SIIS_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 882 , L1128096251 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3SS_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3SS_V(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 5
// stack: 3
// args: 5
void func_java_util_Arrays_fill___3SIIS_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, s16 p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 87, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    ; 
    //  line no 897 , L1259652483 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 897;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1699113578;
    ; 
    //  line no 898 , L1306324352 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1306324352 in labeltable is :L1306324352
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 898;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1699113578:
    //  line no 899 , L1699113578 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L355790875:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2028017635;
    ; 
    //  line no 900 , L782378927 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    // arrstore s16  ,  L782378927 bc index = 
    {
        ;
        s16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s16_arr[idx] = value;
    }
    ; 
    //  line no 899 , L70807318 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L355790875;
    L2028017635:
    //  line no 901 , L2028017635 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3SIIS_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3SIIS_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].i);
}


// locals: 2
// stack: 4
// args: 3
void func_java_util_Arrays_fill___3II_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 88, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 911 , L1183888521 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 911;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1183888521
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    // invokestatic java/util/Arrays.fill([IIII)V
    {
        sp -= 5;
        func_java_util_Arrays_fill___3IIII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 912 , L2041605291 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3II_V(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 5
// stack: 3
// args: 5
void func_java_util_Arrays_fill___3IIII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, s32 p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 89, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    ; 
    //  line no 927 , L2136288211 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 927;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1008925772;
    ; 
    //  line no 928 , L1175259735 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1175259735 in labeltable is :L1175259735
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 928;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1008925772:
    //  line no 929 , L1008925772 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L1205406622:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L293907205;
    ; 
    //  line no 930 , L988800485 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    // arrstore s32  ,  L988800485 bc index = 
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
    //  line no 929 , L345902941 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1205406622;
    L293907205:
    //  line no 931 , L293907205 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3IIII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3IIII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].i);
}


// locals: 3
// stack: 5
// args: 3
void func_java_util_Arrays_fill___3JJ_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s64 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 90, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].j = p2;
    ; 
    //  line no 941 , L796667727 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 941;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L796667727
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp].j = local[1].j;
    sp += 2;
    // invokestatic java/util/Arrays.fill([JIIJ)V
    {
        sp -= 6;
        func_java_util_Arrays_fill___3JIIJ_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 942 , L1794717576 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3JJ_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3JJ_V(runtime, para[0].obj, para[1].obj, para[2].j);
}


// locals: 6
// stack: 4
// args: 5
void func_java_util_Arrays_fill___3JIIJ_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, s64 p4){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 91, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].j = p4;
    ; 
    //  line no 957 , L919112242 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 957;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2021707251;
    ; 
    //  line no 958 , L1541857308 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1541857308 in labeltable is :L1541857308
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 958;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2021707251:
    //  line no 959 , L2021707251 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[5].i = stack[--sp].i;
    L479397964:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1861781750;
    ; 
    //  line no 960 , L283717519 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp].j = local[3].j;
    sp += 2;
    // arrstore s64  ,  L283717519 bc index = 
    {
        --sp;
        s64 value = stack[--sp].j;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s64_arr[idx] = value;
    }
    ; 
    //  line no 959 , L2095303566 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L479397964;
    L1861781750:
    //  line no 961 , L1861781750 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3JIIJ_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3JIIJ_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].j);
}


// locals: 2
// stack: 4
// args: 3
void func_java_util_Arrays_fill___3FF_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, f32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 92, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].f = p2;
    ; 
    //  line no 971 , L1378084334 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 971;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1378084334
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].f = local[1].f;
    // invokestatic java/util/Arrays.fill([FIIF)V
    {
        sp -= 5;
        func_java_util_Arrays_fill___3FIIF_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].f);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 972 , L200224114 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3FF_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3FF_V(runtime, para[0].obj, para[1].obj, para[2].f);
}


// locals: 5
// stack: 3
// args: 5
void func_java_util_Arrays_fill___3FIIF_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, f32 p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 93, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].f = p4;
    ; 
    //  line no 987 , L581318631 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 987;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1877453512;
    ; 
    //  line no 988 , L487694075 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L487694075 in labeltable is :L487694075
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 988;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1877453512:
    //  line no 989 , L1877453512 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L1704629915:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1989184704;
    ; 
    //  line no 990 , L611572016 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].f = local[3].f;
    // arrstore f32  ,  L611572016 bc index = 
    {
        ;
        f32 value = stack[--sp].f;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_f32_arr[idx] = value;
    }
    ; 
    //  line no 989 , L889486595 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1704629915;
    L1989184704:
    //  line no 991 , L1989184704 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3FIIF_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3FIIF_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].f);
}


// locals: 3
// stack: 5
// args: 3
void func_java_util_Arrays_fill___3DD_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, f64 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 94, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].d = p2;
    ; 
    //  line no 1001 , L1990160809 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1001;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1990160809
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp].d = local[1].d;
    sp += 2;
    // invokestatic java/util/Arrays.fill([DIID)V
    {
        sp -= 6;
        func_java_util_Arrays_fill___3DIID_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].d);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1002 , L1285524499 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3DD_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3DD_V(runtime, para[0].obj, para[1].obj, para[2].d);
}


// locals: 6
// stack: 4
// args: 5
void func_java_util_Arrays_fill___3DIID_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, f64 p4){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 95, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].d = p4;
    ; 
    //  line no 1017 , L117009527 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1017;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L199640888;
    ; 
    //  line no 1018 , L1000975683 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1000975683 in labeltable is :L1000975683
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1018;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L199640888:
    //  line no 1019 , L199640888 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[5].i = stack[--sp].i;
    L1238959340:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L76432244;
    ; 
    //  line no 1020 , L1030228826 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp].d = local[3].d;
    sp += 2;
    // arrstore f64  ,  L1030228826 bc index = 
    {
        --sp;
        f64 value = stack[--sp].d;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_f64_arr[idx] = value;
    }
    ; 
    //  line no 1019 , L1264413185 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1238959340;
    L76432244:
    //  line no 1021 , L76432244 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3DIID_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3DIID_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].d);
}


// locals: 2
// stack: 4
// args: 3
void func_java_util_Arrays_fill___3Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, struct java_lang_Object* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 96, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 1033 , L1010931249 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1033;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1010931249
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/Arrays.fill([Ljava/lang/Object;IILjava/lang/Object;)V
    {
        sp -= 5;
        func_java_util_Arrays_fill___3Ljava_lang_Object_2IILjava_lang_Object_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1034 , L1099855928 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3Ljava_lang_Object_2Ljava_lang_Object_2_V(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 5
// stack: 3
// args: 5
void func_java_util_Arrays_fill___3Ljava_lang_Object_2IILjava_lang_Object_2_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, struct java_lang_Object* p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 97, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 1051 , L1007880005 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1051;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L215219944;
    ; 
    //  line no 1052 , L1043208434 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1043208434 in labeltable is :L1043208434
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1052;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L215219944:
    //  line no 1053 , L215219944 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L1192171522:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1661081225;
    ; 
    //  line no 1054 , L1882554559 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arrstore __refer  ,  L1882554559 bc index = 
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
    //  line no 1053 , L1049817027 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1192171522;
    L1661081225:
    //  line no 1055 , L1661081225 , bytecode index = 
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

void bridge_java_util_Arrays_fill___3Ljava_lang_Object_2IILjava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_fill___3Ljava_lang_Object_2IILjava_lang_Object_2_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].obj);
}


// locals: 1
// stack: 3
// args: 2
void func_java_util_Arrays_sort___3B_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 98, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1075 , L1923598304 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1075;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1923598304
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/Arrays.qsort([BII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3BII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1076 , L776700275 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3B_V(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 4
void func_java_util_Arrays_sort___3BII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 99, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1091 , L386163331 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1091;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1540374340;
    ; 
    //  line no 1092 , L694316372 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L694316372 in labeltable is :L694316372
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1092;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1540374340:
    //  line no 1093 , L1540374340 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/util/Arrays.qsort([BII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3BII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1094 , L1516500233 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3BII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 5
s32 func_java_util_Arrays_med3__III_3B_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 100, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 1107 , L884452399 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1107;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s8  ,  L884452399 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L884452399 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L235237152;
    ; 
    //  line no 1108 , L1259014228 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L1259014228 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L1259014228 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L431687661;
    stack[sp++].i = local[1].i;
    goto L283383329;
    L431687661:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s8  ,  L431687661 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L431687661 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L893192050;
    stack[sp++].i = local[2].i;
    goto L283383329;
    L893192050:
    stack[sp++].i = local[0].i;
    goto L283383329;
    L235237152:
    //  line no 1109 , L235237152 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L235237152 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L235237152 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L644345897;
    stack[sp++].i = local[1].i;
    goto L283383329;
    L644345897:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s8  ,  L644345897 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L644345897 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1738674023;
    stack[sp++].i = local[2].i;
    goto L283383329;
    L1738674023:
    stack[sp++].i = local[0].i;
    L283383329:
    //  line no 1107 , L283383329 , bytecode index = 
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

void bridge_java_util_Arrays_med3__III_3B_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_med3__III_3B_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 4
// stack: 4
// args: 4
void func_java_util_Arrays_swap__II_3B_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 101, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 1121 , L178049969 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1121;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    // arrload s8  ,  L178049969 bc index = 
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
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1122 , L333683827 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L333683827 bc index = 
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
    // arrstore s8  ,  L333683827 bc index = 
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
    //  line no 1123 , L1691185247 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // arrstore s8  ,  L1691185247 bc index = 
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
    //  line no 1124 , L153245266 , bytecode index = 
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

void bridge_java_util_Arrays_swap__II_3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_swap__II_3B_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].obj);
}


// locals: 4
// stack: 3
// args: 5
void func_java_util_Arrays_vecswap__III_3B_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 102, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    L1782580546:
    //  line no 1136 , L1782580546 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1136;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1702940637;
    ; 
    //  line no 1137 , L2114684409 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/Arrays.swap(II[B)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3B_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1136 , L1664439369 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    // iinc slot 1 value 1
    local[1].i += 1;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1782580546;
    L1702940637:
    //  line no 1138 , L1702940637 , bytecode index = 
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

void bridge_java_util_Arrays_vecswap__III_3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_vecswap__III_3B_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 12
// stack: 4
// args: 4
void func_java_util_Arrays_qsort___3BII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 103, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1150 , L1781071780 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1150;
    stack[sp++].i = local[2].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1219402581;
    ; 
    //  line no 1152 , L24119573 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L568221876:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L203849460;
    ; 
    //  line no 1153 , L820914198 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L836220863:
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L1667148529;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L836220863 bc index = 
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
    stack[sp++].i = local[4].i;
    // arrload s8  ,  L836220863 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1667148529;
    ; 
    //  line no 1154 , L1546693040 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[B)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3B_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1153 , L501187768 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L836220863;
    L1667148529:
    //  line no 1152 , L1667148529 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L568221876;
    L203849460:
    //  line no 1155 , L203849460 , bytecode index = 
    method_exit(runtime);
    return;
    L1219402581:
    //  line no 1159 , L1219402581 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1160 , L288994035 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1161 , L128359175 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1163 , L1585635178 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 40
    stack[sp++].i = 40;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1058634310;
    ; 
    //  line no 1165 , L1668016508 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1166 , L1353070773 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[B)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3B_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1167 , L404214852 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[B)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3B_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1168 , L1822971466 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[B)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3B_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    L1058634310:
    //  line no 1170 , L1058634310 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[B)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3B_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1176 , L1354003114 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[B)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3B_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1177 , L825658265 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[7].i = stack[--sp].i;
    ; 
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1178 , L957465255 , bytecode index = 
    stack[sp++].i = local[5].i;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[9].i = stack[--sp].i;
    ; 
    local[8].i = stack[--sp].i;
    L1336735375:
    //  line no 1186 , L1336735375 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1984990929;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // arrload s8  ,  L1336735375 bc index = 
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
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L1336735375 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  > 0) goto L1984990929;
    ; 
    //  line no 1188 , L365181913 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1031061344;
    ; 
    //  line no 1190 , L1327536153 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[B)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3B_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1191 , L367746789 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    L1031061344:
    //  line no 1193 , L1031061344 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1336735375;
    L1984990929:
    //  line no 1195 , L1984990929 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L558216562;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[8].i;
    // arrload s8  ,  L1984990929 bc index = 
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
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L1984990929 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  < 0) goto L558216562;
    ; 
    //  line no 1197 , L1928931046 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1034568234;
    ; 
    //  line no 1199 , L835227336 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[B)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3B_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1200 , L482082765 , bytecode index = 
    // iinc slot 9 value -1
    local[9].i += -1;
    L1034568234:
    //  line no 1202 , L1034568234 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1984990929;
    L558216562:
    //  line no 1204 , L558216562 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L667821226;
    ; 
    //  line no 1205 , L1209702763 , bytecode index = 
    goto L1028780142;
    L667821226:
    //  line no 1206 , L667821226 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[B)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3B_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1207 , L2128029086 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 1208 , L686466458 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1336735375;
    L1028780142:
    //  line no 1213 , L1028780142 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1214 , L875016237 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[B)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3B_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1216 , L105374791 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[9].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1217 , L1107024580 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[B)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3B_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1219 , L1010856212 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1220 , L904861801 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L204715855;
    ; 
    //  line no 1221 , L318857719 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([BII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3BII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L204715855:
    //  line no 1223 , L204715855 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1224 , L745962066 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1637290981;
    ; 
    //  line no 1225 , L1888442711 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([BII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3BII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1637290981:
    //  line no 1226 , L1637290981 , bytecode index = 
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

void bridge_java_util_Arrays_qsort___3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_qsort___3BII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 3
// args: 2
void func_java_util_Arrays_sort___3C_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 104, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1236 , L1998767043 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1236;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1998767043
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/Arrays.qsort([CII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3CII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1237 , L787738361 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3C_V(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 4
void func_java_util_Arrays_sort___3CII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 105, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1252 , L168366 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1252;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1642030774;
    ; 
    //  line no 1253 , L1357563986 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1357563986 in labeltable is :L1357563986
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1253;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1642030774:
    //  line no 1254 , L1642030774 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/util/Arrays.qsort([CII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3CII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1255 , L384587033 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3CII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3CII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 5
s32 func_java_util_Arrays_med3__III_3C_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 106, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 1268 , L411506101 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1268;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload u16  ,  L411506101 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L411506101 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L514455215;
    ; 
    //  line no 1269 , L1780034814 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L1780034814 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload u16  ,  L1780034814 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1360657223;
    stack[sp++].i = local[1].i;
    goto L1905485420;
    L1360657223:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload u16  ,  L1360657223 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload u16  ,  L1360657223 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L551479935;
    stack[sp++].i = local[2].i;
    goto L1905485420;
    L551479935:
    stack[sp++].i = local[0].i;
    goto L1905485420;
    L514455215:
    //  line no 1270 , L514455215 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L514455215 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload u16  ,  L514455215 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L58940486;
    stack[sp++].i = local[1].i;
    goto L1905485420;
    L58940486:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload u16  ,  L58940486 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload u16  ,  L58940486 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L501107890;
    stack[sp++].i = local[2].i;
    goto L1905485420;
    L501107890:
    stack[sp++].i = local[0].i;
    L1905485420:
    //  line no 1268 , L1905485420 , bytecode index = 
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

void bridge_java_util_Arrays_med3__III_3C_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_med3__III_3C_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 4
// stack: 4
// args: 4
void func_java_util_Arrays_swap__II_3C_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 107, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 1282 , L550402284 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1282;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    // arrload u16  ,  L550402284 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1283 , L959869407 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L959869407 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // arrstore u16  ,  L959869407 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 1284 , L1449263511 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // arrstore u16  ,  L1449263511 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 1285 , L116237769 , bytecode index = 
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

void bridge_java_util_Arrays_swap__II_3C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_swap__II_3C_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].obj);
}


// locals: 4
// stack: 3
// args: 5
void func_java_util_Arrays_vecswap__III_3C_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 108, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    L1594199808:
    //  line no 1297 , L1594199808 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1297;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L422396878;
    ; 
    //  line no 1298 , L1912962767 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/Arrays.swap(II[C)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3C_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1297 , L452805835 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    // iinc slot 1 value 1
    local[1].i += 1;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1594199808;
    L422396878:
    //  line no 1299 , L422396878 , bytecode index = 
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

void bridge_java_util_Arrays_vecswap__III_3C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_vecswap__III_3C_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 12
// stack: 4
// args: 4
void func_java_util_Arrays_qsort___3CII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 109, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1311 , L447981768 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1311;
    stack[sp++].i = local[2].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1125736023;
    ; 
    //  line no 1313 , L858952163 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L1201484275:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1089418272;
    ; 
    //  line no 1314 , L1233990028 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L1847008471:
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L1076607567;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L1847008471 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L1847008471 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1076607567;
    ; 
    //  line no 1315 , L2036127838 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[C)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3C_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1314 , L1509791656 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1847008471;
    L1076607567:
    //  line no 1313 , L1076607567 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1201484275;
    L1089418272:
    //  line no 1316 , L1089418272 , bytecode index = 
    method_exit(runtime);
    return;
    L1125736023:
    //  line no 1320 , L1125736023 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1321 , L257608164 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1322 , L306115458 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1324 , L230643635 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 40
    stack[sp++].i = 40;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L944427387;
    ; 
    //  line no 1326 , L1636182655 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1327 , L71399214 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[C)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3C_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1328 , L1932831450 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[C)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3C_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1329 , L496729294 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[C)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3C_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    L944427387:
    //  line no 1331 , L944427387 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[C)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3C_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1337 , L1302227152 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[C)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3C_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1338 , L1122606666 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[7].i = stack[--sp].i;
    ; 
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1339 , L1390869998 , bytecode index = 
    stack[sp++].i = local[5].i;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[9].i = stack[--sp].i;
    ; 
    local[8].i = stack[--sp].i;
    L1645547422:
    //  line no 1347 , L1645547422 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L440737101;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // arrload u16  ,  L1645547422 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L1645547422 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  > 0) goto L440737101;
    ; 
    //  line no 1349 , L369049246 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1608297024;
    ; 
    //  line no 1351 , L1841396611 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[C)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3C_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1352 , L1577592551 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    L1608297024:
    //  line no 1354 , L1608297024 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1645547422;
    L440737101:
    //  line no 1356 , L440737101 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L854587510;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[8].i;
    // arrload u16  ,  L440737101 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L440737101 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  < 0) goto L854587510;
    ; 
    //  line no 1358 , L1847637306 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1904253191;
    ; 
    //  line no 1360 , L1021436681 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[C)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3C_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1361 , L1790585734 , bytecode index = 
    // iinc slot 9 value -1
    local[9].i += -1;
    L1904253191:
    //  line no 1363 , L1904253191 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L440737101;
    L854587510:
    //  line no 1365 , L854587510 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L22600334;
    ; 
    //  line no 1366 , L1961173763 , bytecode index = 
    goto L1202683709;
    L22600334:
    //  line no 1367 , L22600334 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[C)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3C_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1368 , L2087885397 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 1369 , L1002021887 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1645547422;
    L1202683709:
    //  line no 1374 , L1202683709 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1375 , L1712943792 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[C)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3C_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1377 , L1525919705 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[9].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1378 , L842741472 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[C)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3C_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1380 , L1156304131 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1381 , L1766505436 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L771775563;
    ; 
    //  line no 1382 , L1164440413 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([CII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3CII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L771775563:
    //  line no 1384 , L771775563 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1385 , L1610525991 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1666607455;
    ; 
    //  line no 1386 , L1327006586 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([CII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3CII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1666607455:
    //  line no 1387 , L1666607455 , bytecode index = 
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

void bridge_java_util_Arrays_qsort___3CII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_qsort___3CII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 3
// args: 2
void func_java_util_Arrays_sort___3S_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 110, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1397 , L530737374 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1397;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L530737374
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/Arrays.qsort([SII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3SII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1398 , L1332668132 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3S_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3S_V(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 4
void func_java_util_Arrays_sort___3SII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 111, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1413 , L173099767 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1413;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L112797691;
    ; 
    //  line no 1414 , L1045997582 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1045997582 in labeltable is :L1045997582
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1414;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L112797691:
    //  line no 1415 , L112797691 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/util/Arrays.qsort([SII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3SII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1416 , L1337335626 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3SII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3SII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 5
s32 func_java_util_Arrays_med3__III_3S_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 112, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 1429 , L7967307 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1429;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s16  ,  L7967307 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s16  ,  L7967307 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2073707154;
    ; 
    //  line no 1430 , L78204644 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s16  ,  L78204644 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s16  ,  L78204644 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1287934450;
    stack[sp++].i = local[1].i;
    goto L6519275;
    L1287934450:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s16  ,  L1287934450 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s16  ,  L1287934450 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L692331943;
    stack[sp++].i = local[2].i;
    goto L6519275;
    L692331943:
    stack[sp++].i = local[0].i;
    goto L6519275;
    L2073707154:
    //  line no 1431 , L2073707154 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s16  ,  L2073707154 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s16  ,  L2073707154 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1741979653;
    stack[sp++].i = local[1].i;
    goto L6519275;
    L1741979653:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s16  ,  L1741979653 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s16  ,  L1741979653 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L166794956;
    stack[sp++].i = local[2].i;
    goto L6519275;
    L166794956:
    stack[sp++].i = local[0].i;
    L6519275:
    //  line no 1429 , L6519275 , bytecode index = 
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

void bridge_java_util_Arrays_med3__III_3S_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_med3__III_3S_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 4
// stack: 4
// args: 4
void func_java_util_Arrays_swap__II_3S_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 113, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 1443 , L447212746 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1443;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    // arrload s16  ,  L447212746 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1444 , L1496355635 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // arrload s16  ,  L1496355635 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    // arrstore s16  ,  L1496355635 bc index = 
    {
        ;
        s16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s16_arr[idx] = value;
    }
    ; 
    //  line no 1445 , L1484171695 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // arrstore s16  ,  L1484171695 bc index = 
    {
        ;
        s16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s16_arr[idx] = value;
    }
    ; 
    //  line no 1446 , L2127036371 , bytecode index = 
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

void bridge_java_util_Arrays_swap__II_3S_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_swap__II_3S_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].obj);
}


// locals: 4
// stack: 3
// args: 5
void func_java_util_Arrays_vecswap__III_3S_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 114, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    L106374177:
    //  line no 1458 , L106374177 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1458;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1803669141;
    ; 
    //  line no 1459 , L712609105 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/Arrays.swap(II[S)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3S_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1458 , L1836463382 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    // iinc slot 1 value 1
    local[1].i += 1;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L106374177;
    L1803669141:
    //  line no 1460 , L1803669141 , bytecode index = 
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

void bridge_java_util_Arrays_vecswap__III_3S_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_vecswap__III_3S_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 12
// stack: 4
// args: 4
void func_java_util_Arrays_qsort___3SII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 115, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1472 , L934275857 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1472;
    stack[sp++].i = local[2].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1364913072;
    ; 
    //  line no 1474 , L232307208 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L609962972:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1818544933;
    ; 
    //  line no 1475 , L1793436274 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L572868060:
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L1549725679;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s16  ,  L572868060 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload s16  ,  L572868060 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1549725679;
    ; 
    //  line no 1476 , L371800738 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[S)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3S_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1475 , L1364767791 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L572868060;
    L1549725679:
    //  line no 1474 , L1549725679 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L609962972;
    L1818544933:
    //  line no 1477 , L1818544933 , bytecode index = 
    method_exit(runtime);
    return;
    L1364913072:
    //  line no 1481 , L1364913072 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1482 , L1499136125 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1483 , L1926343982 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1485 , L762476028 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 40
    stack[sp++].i = 40;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L966739377;
    ; 
    //  line no 1487 , L952562199 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1488 , L1199673596 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[S)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3S_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1489 , L2044903525 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[S)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3S_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1490 , L982757413 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[S)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3S_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    L966739377:
    //  line no 1492 , L966739377 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[S)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3S_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1498 , L902478634 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[S)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3S_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1499 , L2114444063 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[7].i = stack[--sp].i;
    ; 
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1500 , L918312414 , bytecode index = 
    stack[sp++].i = local[5].i;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[9].i = stack[--sp].i;
    ; 
    local[8].i = stack[--sp].i;
    L382750013:
    //  line no 1508 , L382750013 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1240232440;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // arrload s16  ,  L382750013 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload s16  ,  L382750013 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  > 0) goto L1240232440;
    ; 
    //  line no 1510 , L915416632 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L574434418;
    ; 
    //  line no 1512 , L150268540 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[S)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3S_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1513 , L1130894323 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    L574434418:
    //  line no 1515 , L574434418 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L382750013;
    L1240232440:
    //  line no 1517 , L1240232440 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1962826816;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[8].i;
    // arrload s16  ,  L1240232440 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload s16  ,  L1240232440 bc index = 
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
        stack[sp].i = arr->prop.as_s16_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  < 0) goto L1962826816;
    ; 
    //  line no 1519 , L283318938 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L320304382;
    ; 
    //  line no 1521 , L361571968 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[S)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3S_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1522 , L2005169944 , bytecode index = 
    // iinc slot 9 value -1
    local[9].i += -1;
    L320304382:
    //  line no 1524 , L320304382 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1240232440;
    L1962826816:
    //  line no 1526 , L1962826816 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2134607032;
    ; 
    //  line no 1527 , L1470344997 , bytecode index = 
    goto L728115831;
    L2134607032:
    //  line no 1528 , L2134607032 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[S)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3S_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1529 , L2131670196 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 1530 , L1546908073 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L382750013;
    L728115831:
    //  line no 1535 , L728115831 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1536 , L371439501 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[S)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3S_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1538 , L210506412 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[9].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1539 , L112049309 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[S)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3S_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1541 , L1162918744 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1542 , L1321530272 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L573673894;
    ; 
    //  line no 1543 , L1226020905 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([SII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3SII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L573673894:
    //  line no 1545 , L573673894 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1546 , L156856360 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1617550160;
    ; 
    //  line no 1547 , L1325124186 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([SII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3SII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1617550160:
    //  line no 1548 , L1617550160 , bytecode index = 
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

void bridge_java_util_Arrays_qsort___3SII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_qsort___3SII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 3
// args: 2
void func_java_util_Arrays_sort___3I_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 116, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1558 , L1499867659 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1558;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1499867659
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/Arrays.qsort([III)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3III_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1559 , L2012993836 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3I_V(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 4
void func_java_util_Arrays_sort___3III_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 117, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1574 , L440938038 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1574;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1922464006;
    ; 
    //  line no 1575 , L1536031937 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1536031937 in labeltable is :L1536031937
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1575;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1922464006:
    //  line no 1576 , L1922464006 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/util/Arrays.qsort([III)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3III_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1577 , L798981583 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3III_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 5
s32 func_java_util_Arrays_med3__III_3I_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 118, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 1590 , L904058452 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1590;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L904058452 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L904058452 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L29183965;
    ; 
    //  line no 1591 , L1427651360 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L1427651360 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L1427651360 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1334042472;
    stack[sp++].i = local[1].i;
    goto L1827725498;
    L1334042472:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L1334042472 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L1334042472 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L131635550;
    stack[sp++].i = local[2].i;
    goto L1827725498;
    L131635550:
    stack[sp++].i = local[0].i;
    goto L1827725498;
    L29183965:
    //  line no 1592 , L29183965 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L29183965 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L29183965 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L319644606;
    stack[sp++].i = local[1].i;
    goto L1827725498;
    L319644606:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L319644606 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L319644606 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1118078504;
    stack[sp++].i = local[2].i;
    goto L1827725498;
    L1118078504:
    stack[sp++].i = local[0].i;
    L1827725498:
    //  line no 1590 , L1827725498 , bytecode index = 
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

void bridge_java_util_Arrays_med3__III_3I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_med3__III_3I_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 4
// stack: 4
// args: 4
void func_java_util_Arrays_swap__II_3I_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 119, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 1604 , L1793799654 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1604;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L1793799654 bc index = 
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
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1605 , L310623126 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L310623126 bc index = 
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
    // arrstore s32  ,  L310623126 bc index = 
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
    //  line no 1606 , L1961945640 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // arrstore s32  ,  L1961945640 bc index = 
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
    //  line no 1607 , L258931371 , bytecode index = 
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

void bridge_java_util_Arrays_swap__II_3I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_swap__II_3I_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].obj);
}


// locals: 4
// stack: 3
// args: 5
void func_java_util_Arrays_vecswap__III_3I_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 120, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    L860481979:
    //  line no 1619 , L860481979 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1619;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1083962448;
    ; 
    //  line no 1620 , L953742666 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/Arrays.swap(II[I)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1619 , L1239759990 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    // iinc slot 1 value 1
    local[1].i += 1;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L860481979;
    L1083962448:
    //  line no 1621 , L1083962448 , bytecode index = 
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

void bridge_java_util_Arrays_vecswap__III_3I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_vecswap__III_3I_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 2
// stack: 2
// args: 3
s32 func_java_util_Arrays_compare__II_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 121, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1632 , L708533063 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1632;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1438030319;
    // iconst_-1
    stack[sp++].i = -1;
    goto L902830499;
    L1438030319:
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1754662105;
    // iconst_0
    stack[sp++].i = 0;
    goto L902830499;
    L1754662105:
    // iconst_1
    stack[sp++].i = 1;
    L902830499:
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

void bridge_java_util_Arrays_compare__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_compare__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 12
// stack: 4
// args: 4
void func_java_util_Arrays_qsort___3III_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 122, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1645 , L2040467681 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1645;
    stack[sp++].i = local[2].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1278677872;
    ; 
    //  line no 1647 , L341796579 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L807657332:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L825936265;
    ; 
    //  line no 1648 , L1164107853 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L711327356:
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L68377659;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s32  ,  L711327356 bc index = 
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
    stack[sp++].i = local[4].i;
    // arrload s32  ,  L711327356 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L68377659;
    ; 
    //  line no 1649 , L1661123505 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[I)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1648 , L825249556 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L711327356;
    L68377659:
    //  line no 1647 , L68377659 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L807657332;
    L825936265:
    //  line no 1650 , L825936265 , bytecode index = 
    method_exit(runtime);
    return;
    L1278677872:
    //  line no 1654 , L1278677872 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1655 , L883151184 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1656 , L709865851 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1658 , L1550207152 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 40
    stack[sp++].i = 40;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1864230087;
    ; 
    //  line no 1660 , L1168019749 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1661 , L311239812 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[I)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1662 , L2093010349 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[I)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1663 , L2088445230 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[I)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    L1864230087:
    //  line no 1665 , L1864230087 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[I)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1671 , L1297978429 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[I)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1672 , L915349526 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[7].i = stack[--sp].i;
    ; 
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1673 , L1764696127 , bytecode index = 
    stack[sp++].i = local[5].i;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[9].i = stack[--sp].i;
    ; 
    local[8].i = stack[--sp].i;
    L129153987:
    //  line no 1681 , L129153987 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L168907708;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // arrload s32  ,  L129153987 bc index = 
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
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L129153987 bc index = 
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
    // invokestatic java/util/Arrays.compare(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_compare__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  > 0) goto L168907708;
    ; 
    //  line no 1683 , L1206569586 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1427381743;
    ; 
    //  line no 1685 , L1427646530 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[I)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1686 , L846254484 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    L1427381743:
    //  line no 1688 , L1427381743 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L129153987;
    L168907708:
    //  line no 1690 , L168907708 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L592983282;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[8].i;
    // arrload s32  ,  L168907708 bc index = 
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
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L168907708 bc index = 
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
    // invokestatic java/util/Arrays.compare(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_compare__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  < 0) goto L592983282;
    ; 
    //  line no 1692 , L1108924067 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1984975621;
    ; 
    //  line no 1694 , L348984985 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[I)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1695 , L2005435445 , bytecode index = 
    // iinc slot 9 value -1
    local[9].i += -1;
    L1984975621:
    //  line no 1697 , L1984975621 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L168907708;
    L592983282:
    //  line no 1699 , L592983282 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1939990953;
    ; 
    //  line no 1700 , L119358627 , bytecode index = 
    goto L2073621255;
    L1939990953:
    //  line no 1701 , L1939990953 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[I)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1702 , L1208121709 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 1703 , L873610597 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L129153987;
    L2073621255:
    //  line no 1708 , L2073621255 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1709 , L1497845528 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[I)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1711 , L1710989308 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[9].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1712 , L1047087935 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[I)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1714 , L464887938 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1715 , L2020152163 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1104443373;
    ; 
    //  line no 1716 , L898694235 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([III)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3III_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1104443373:
    //  line no 1718 , L1104443373 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1719 , L60292059 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L869601985;
    ; 
    //  line no 1720 , L1365008457 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([III)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3III_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L869601985:
    //  line no 1721 , L869601985 , bytecode index = 
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

void bridge_java_util_Arrays_qsort___3III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_qsort___3III_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 3
// args: 2
void func_java_util_Arrays_sort___3J_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 123, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1731 , L1609124502 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1731;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1609124502
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/Arrays.qsort([JII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3JII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1732 , L1144068272 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3J_V(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 4
void func_java_util_Arrays_sort___3JII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 124, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1747 , L1948471365 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1747;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1636506029;
    ; 
    //  line no 1748 , L758348212 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L758348212 in labeltable is :L758348212
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1748;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1636506029:
    //  line no 1749 , L1636506029 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/util/Arrays.qsort([JII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3JII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1750 , L817978763 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3JII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3JII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 4
// args: 5
s32 func_java_util_Arrays_med3__III_3J_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 125, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 1763 , L1735507635 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1763;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s64  ,  L1735507635 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s64  ,  L1735507635 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L1362728240;
    ; 
    //  line no 1764 , L1798219673 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s64  ,  L1798219673 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s64  ,  L1798219673 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L1092572064;
    stack[sp++].i = local[1].i;
    goto L728885526;
    L1092572064:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s64  ,  L1092572064 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s64  ,  L1092572064 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L922511709;
    stack[sp++].i = local[2].i;
    goto L728885526;
    L922511709:
    stack[sp++].i = local[0].i;
    goto L728885526;
    L1362728240:
    //  line no 1765 , L1362728240 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload s64  ,  L1362728240 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s64  ,  L1362728240 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L678433396;
    stack[sp++].i = local[1].i;
    goto L728885526;
    L678433396:
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload s64  ,  L678433396 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload s64  ,  L678433396 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L331994761;
    stack[sp++].i = local[2].i;
    goto L728885526;
    L331994761:
    stack[sp++].i = local[0].i;
    L728885526:
    //  line no 1763 , L728885526 , bytecode index = 
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

void bridge_java_util_Arrays_med3__III_3J_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_med3__III_3J_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 5
// stack: 4
// args: 4
void func_java_util_Arrays_swap__II_3J_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 126, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 1777 , L1647809929 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1777;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    // arrload s64  ,  L1647809929 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    sp -= 2;
    local[3].j = stack[sp].j;
    ; 
    //  line no 1778 , L1258084361 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // arrload s64  ,  L1258084361 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    // arrstore s64  ,  L1258084361 bc index = 
    {
        --sp;
        s64 value = stack[--sp].j;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s64_arr[idx] = value;
    }
    ; 
    //  line no 1779 , L391914049 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    stack[sp].j = local[3].j;
    sp += 2;
    // arrstore s64  ,  L391914049 bc index = 
    {
        --sp;
        s64 value = stack[--sp].j;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s64_arr[idx] = value;
    }
    ; 
    //  line no 1780 , L96406857 , bytecode index = 
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

void bridge_java_util_Arrays_swap__II_3J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_swap__II_3J_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].obj);
}


// locals: 4
// stack: 3
// args: 5
void func_java_util_Arrays_vecswap__III_3J_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 127, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    L2003496028:
    //  line no 1792 , L2003496028 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1792;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L30578394;
    ; 
    //  line no 1793 , L2088371948 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/Arrays.swap(II[J)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3J_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1792 , L1976870338 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    // iinc slot 1 value 1
    local[1].i += 1;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2003496028;
    L30578394:
    //  line no 1794 , L30578394 , bytecode index = 
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

void bridge_java_util_Arrays_vecswap__III_3J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_vecswap__III_3J_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 4
// stack: 4
// args: 3
s32 func_java_util_Arrays_compare__JJ_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s64 p1, s64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 128, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    local[3].j = p3;
    ; 
    //  line no 1805 , L1083021083 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1805;
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp].j = local[2].j;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L1819063424;
    // iconst_-1
    stack[sp++].i = -1;
    goto L1011279482;
    L1819063424:
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp].j = local[2].j;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L208866101;
    // iconst_0
    stack[sp++].i = 0;
    goto L1011279482;
    L208866101:
    // iconst_1
    stack[sp++].i = 1;
    L1011279482:
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

void bridge_java_util_Arrays_compare__JJ_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_compare__JJ_I(runtime, para[0].obj, para[1].j, para[2].j);
}


// locals: 12
// stack: 4
// args: 4
void func_java_util_Arrays_qsort___3JII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 129, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1818 , L690686166 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1818;
    stack[sp++].i = local[2].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L576020159;
    ; 
    //  line no 1820 , L921420643 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L1165303897:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L887750041;
    ; 
    //  line no 1821 , L1010953501 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L1423561005:
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L943870983;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s64  ,  L1423561005 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload s64  ,  L1423561005 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L943870983;
    ; 
    //  line no 1822 , L1136419747 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[J)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3J_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1821 , L1881561036 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1423561005;
    L943870983:
    //  line no 1820 , L943870983 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1165303897;
    L887750041:
    //  line no 1823 , L887750041 , bytecode index = 
    method_exit(runtime);
    return;
    L576020159:
    //  line no 1827 , L576020159 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1828 , L1785507932 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1829 , L1084502906 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1831 , L1613095350 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 40
    stack[sp++].i = 40;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L587153993;
    ; 
    //  line no 1833 , L757004314 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1834 , L1279271200 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[J)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3J_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1835 , L52908367 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[J)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3J_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1836 , L1527953000 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[J)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3J_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    L587153993:
    //  line no 1838 , L587153993 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[J)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3J_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1844 , L18242360 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[J)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3J_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1845 , L1276261147 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[7].i = stack[--sp].i;
    ; 
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1846 , L996796369 , bytecode index = 
    stack[sp++].i = local[5].i;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[9].i = stack[--sp].i;
    ; 
    local[8].i = stack[--sp].i;
    L1430439149:
    //  line no 1853 , L1430439149 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L359922172;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // arrload s64  ,  L1430439149 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload s64  ,  L1430439149 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    // invokestatic java/util/Arrays.compare(JJ)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_compare__JJ_I(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].j);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  > 0) goto L359922172;
    ; 
    //  line no 1854 , L1153447573 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L132577100;
    ; 
    //  line no 1855 , L231756373 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[J)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3J_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1856 , L1786294176 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    L132577100:
    //  line no 1858 , L132577100 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1430439149;
    L359922172:
    //  line no 1860 , L359922172 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L793331940;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[8].i;
    // arrload s64  ,  L359922172 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload s64  ,  L359922172 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    // invokestatic java/util/Arrays.compare(JJ)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_compare__JJ_I(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].j);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  < 0) goto L793331940;
    ; 
    //  line no 1861 , L275266973 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1069716895;
    ; 
    //  line no 1862 , L1521083627 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[J)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3J_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1863 , L1770642014 , bytecode index = 
    // iinc slot 9 value -1
    local[9].i += -1;
    L1069716895:
    //  line no 1865 , L1069716895 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L359922172;
    L793331940:
    //  line no 1867 , L793331940 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L945591847;
    ; 
    //  line no 1868 , L328827614 , bytecode index = 
    goto L109228794;
    L945591847:
    //  line no 1869 , L945591847 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[J)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3J_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1870 , L561959774 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 1871 , L2110756088 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1430439149;
    L109228794:
    //  line no 1876 , L109228794 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1877 , L580871917 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[J)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3J_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1879 , L823723302 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[9].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1880 , L1714078840 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[J)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3J_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1882 , L1732502545 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1883 , L1051876890 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1199262943;
    ; 
    //  line no 1884 , L2009221452 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([JII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3JII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1199262943:
    //  line no 1886 , L1199262943 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 1887 , L257513673 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L590845366;
    ; 
    //  line no 1888 , L1052195003 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([JII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3JII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L590845366:
    //  line no 1889 , L590845366 , bytecode index = 
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

void bridge_java_util_Arrays_qsort___3JII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_qsort___3JII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 3
// args: 2
void func_java_util_Arrays_sort___3F_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 130, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1899 , L511707818 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1899;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L511707818
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/Arrays.qsort([FII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3FII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1900 , L25536233 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3F_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3F_V(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 4
void func_java_util_Arrays_sort___3FII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 131, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1915 , L164974746 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1915;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L396283472;
    ; 
    //  line no 1916 , L989892772 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L989892772 in labeltable is :L989892772
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1916;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L396283472:
    //  line no 1917 , L396283472 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/util/Arrays.qsort([FII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3FII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1918 , L1020520290 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3FII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3FII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 5
s32 func_java_util_Arrays_med3__III_3F_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 132, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 1931 , L2125238280 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1931;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload f32  ,  L2125238280 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload f32  ,  L2125238280 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1092004553;
    ; 
    //  line no 1932 , L1658699134 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload f32  ,  L1658699134 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload f32  ,  L1658699134 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1961176822;
    stack[sp++].i = local[1].i;
    goto L1859374258;
    L1961176822:
    //  line no 1933 , L1961176822 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload f32  ,  L1961176822 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload f32  ,  L1961176822 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L442987331;
    stack[sp++].i = local[2].i;
    goto L1859374258;
    L442987331:
    stack[sp++].i = local[0].i;
    goto L1859374258;
    L1092004553:
    //  line no 1934 , L1092004553 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload f32  ,  L1092004553 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload f32  ,  L1092004553 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L366873404;
    stack[sp++].i = local[1].i;
    goto L1859374258;
    L366873404:
    //  line no 1935 , L366873404 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload f32  ,  L366873404 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload f32  ,  L366873404 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L1217467887;
    stack[sp++].i = local[2].i;
    goto L1859374258;
    L1217467887:
    stack[sp++].i = local[0].i;
    L1859374258:
    //  line no 1931 , L1859374258 , bytecode index = 
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

void bridge_java_util_Arrays_med3__III_3F_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_med3__III_3F_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 4
// stack: 4
// args: 4
void func_java_util_Arrays_swap__II_3F_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 133, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 1947 , L428566321 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1947;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    // arrload f32  ,  L428566321 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    local[3].f = stack[--sp].f;
    ; 
    //  line no 1948 , L2087258327 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // arrload f32  ,  L2087258327 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // arrstore f32  ,  L2087258327 bc index = 
    {
        ;
        f32 value = stack[--sp].f;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_f32_arr[idx] = value;
    }
    ; 
    //  line no 1949 , L1016550616 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].f = local[3].f;
    // arrstore f32  ,  L1016550616 bc index = 
    {
        ;
        f32 value = stack[--sp].f;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_f32_arr[idx] = value;
    }
    ; 
    //  line no 1950 , L1006094903 , bytecode index = 
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

void bridge_java_util_Arrays_swap__II_3F_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_swap__II_3F_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].obj);
}


// locals: 4
// stack: 3
// args: 5
void func_java_util_Arrays_vecswap__III_3F_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 134, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    L1293680848:
    //  line no 1962 , L1293680848 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1962;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1261153343;
    ; 
    //  line no 1963 , L1309176095 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/Arrays.swap(II[F)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3F_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1962 , L198099809 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    // iinc slot 1 value 1
    local[1].i += 1;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1293680848;
    L1261153343:
    //  line no 1964 , L1261153343 , bytecode index = 
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

void bridge_java_util_Arrays_vecswap__III_3F_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_vecswap__III_3F_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 12
// stack: 4
// args: 4
void func_java_util_Arrays_qsort___3FII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 135, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1976 , L807752428 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1976;
    stack[sp++].i = local[2].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1026055550;
    ; 
    //  line no 1978 , L1073763441 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L752316209:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L914356853;
    ; 
    //  line no 1979 , L1229161065 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L195228908:
    //  line no 1980 , L195228908 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L471579726;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload f32  ,  L195228908 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload f32  ,  L195228908 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L471579726;
    ; 
    //  line no 1983 , L1442726378 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[F)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3F_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1981 , L16503286 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L195228908;
    L471579726:
    //  line no 1978 , L471579726 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L752316209;
    L914356853:
    //  line no 1985 , L914356853 , bytecode index = 
    method_exit(runtime);
    return;
    L1026055550:
    //  line no 1989 , L1026055550 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1990 , L484589713 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1991 , L1574598287 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1993 , L2056031695 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 40
    stack[sp++].i = 40;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L606508809;
    ; 
    //  line no 1995 , L718187988 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1996 , L615438348 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[F)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1997 , L978508707 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[F)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1998 , L710708543 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[F)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    L606508809:
    //  line no 2000 , L606508809 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[F)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 2006 , L1965237677 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[F)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3F_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2007 , L664792509 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[7].i = stack[--sp].i;
    ; 
    local[6].i = stack[--sp].i;
    ; 
    //  line no 2008 , L1170727939 , bytecode index = 
    stack[sp++].i = local[5].i;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[9].i = stack[--sp].i;
    ; 
    local[8].i = stack[--sp].i;
    L1896828359:
    //  line no 2016 , L1896828359 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L536122141;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // arrload f32  ,  L1896828359 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload f32  ,  L1896828359 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  > 0) goto L536122141;
    ; 
    //  line no 2018 , L1630678941 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1792550665;
    ; 
    //  line no 2020 , L1359953204 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[F)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3F_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2021 , L2014838114 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    L1792550665:
    //  line no 2023 , L1792550665 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1896828359;
    L536122141:
    //  line no 2025 , L536122141 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L136936250;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[8].i;
    // arrload f32  ,  L536122141 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload f32  ,  L536122141 bc index = 
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
        stack[sp].f = arr->prop.as_f32_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Float.compare(FF)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Float_compare__FF_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f, stack[sp + 2].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  < 0) goto L136936250;
    ; 
    //  line no 2027 , L187472540 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L1276611190;
    ; 
    //  line no 2029 , L262457445 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[F)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3F_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2030 , L1004023029 , bytecode index = 
    // iinc slot 9 value -1
    local[9].i += -1;
    L1276611190:
    //  line no 2032 , L1276611190 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L536122141;
    L136936250:
    //  line no 2034 , L136936250 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1414506856;
    ; 
    //  line no 2035 , L612097453 , bytecode index = 
    goto L221634215;
    L1414506856:
    //  line no 2036 , L1414506856 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[F)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3F_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2037 , L2003891312 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 2038 , L1583159071 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1896828359;
    L221634215:
    //  line no 2043 , L221634215 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 2044 , L607207372 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[F)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3F_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2046 , L131206411 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[9].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 2047 , L2012330741 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[F)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3F_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2049 , L1101184763 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 2050 , L1816147548 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2079179914;
    ; 
    //  line no 2051 , L20049680 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([FII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3FII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2079179914:
    //  line no 2053 , L2079179914 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 2054 , L1437654187 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L951050903;
    ; 
    //  line no 2055 , L770947228 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([FII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3FII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L951050903:
    //  line no 2056 , L951050903 , bytecode index = 
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

void bridge_java_util_Arrays_qsort___3FII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_qsort___3FII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 3
// args: 2
void func_java_util_Arrays_sort___3D_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 136, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 2066 , L1882349076 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2066;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1882349076
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/util/Arrays.qsort([DII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3DII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2067 , L936292831 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3D_V(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 4
void func_java_util_Arrays_sort___3DII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 137, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 2082 , L2151717 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2082;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1644231115;
    ; 
    //  line no 2083 , L537066525 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L537066525 in labeltable is :L537066525
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2083;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1644231115:
    //  line no 2084 , L1644231115 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/util/Arrays.qsort([DII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3DII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2085 , L1766145591 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3DII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3DII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 4
// args: 5
s32 func_java_util_Arrays_med3__III_3D_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 138, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 2098 , L182531396 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2098;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload f64  ,  L182531396 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload f64  ,  L182531396 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1026871825;
    ; 
    //  line no 2099 , L2109798150 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload f64  ,  L2109798150 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload f64  ,  L2109798150 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1074389766;
    stack[sp++].i = local[1].i;
    goto L1136768342;
    L1074389766:
    //  line no 2100 , L1074389766 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload f64  ,  L1074389766 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload f64  ,  L1074389766 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1484673893;
    stack[sp++].i = local[2].i;
    goto L1136768342;
    L1484673893:
    stack[sp++].i = local[0].i;
    goto L1136768342;
    L1026871825:
    //  line no 2101 , L1026871825 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // arrload f64  ,  L1026871825 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload f64  ,  L1026871825 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L587003819;
    stack[sp++].i = local[1].i;
    goto L1136768342;
    L587003819:
    //  line no 2102 , L587003819 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[0].i;
    // arrload f64  ,  L587003819 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload f64  ,  L587003819 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L769798433;
    stack[sp++].i = local[2].i;
    goto L1136768342;
    L769798433:
    stack[sp++].i = local[0].i;
    L1136768342:
    //  line no 2098 , L1136768342 , bytecode index = 
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

void bridge_java_util_Arrays_med3__III_3D_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_med3__III_3D_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 5
// stack: 4
// args: 4
void func_java_util_Arrays_swap__II_3D_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 139, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 2114 , L1233705144 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2114;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    // arrload f64  ,  L1233705144 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    sp -= 2;
    local[3].d = stack[sp].d;
    ; 
    //  line no 2115 , L202125197 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[0].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // arrload f64  ,  L202125197 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // arrstore f64  ,  L202125197 bc index = 
    {
        --sp;
        f64 value = stack[--sp].d;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_f64_arr[idx] = value;
    }
    ; 
    //  line no 2116 , L811301908 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    stack[sp].d = local[3].d;
    sp += 2;
    // arrstore f64  ,  L811301908 bc index = 
    {
        --sp;
        f64 value = stack[--sp].d;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_f64_arr[idx] = value;
    }
    ; 
    //  line no 2117 , L1762902523 , bytecode index = 
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

void bridge_java_util_Arrays_swap__II_3D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_swap__II_3D_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].obj);
}


// locals: 4
// stack: 3
// args: 5
void func_java_util_Arrays_vecswap__III_3D_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, s32 p1, s32 p2, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 140, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    L197964393:
    //  line no 2129 , L197964393 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2129;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1620890840;
    ; 
    //  line no 2130 , L402115881 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic java/util/Arrays.swap(II[D)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2129 , L2106000623 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    // iinc slot 1 value 1
    local[1].i += 1;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L197964393;
    L1620890840:
    //  line no 2131 , L1620890840 , bytecode index = 
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

void bridge_java_util_Arrays_vecswap__III_3D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_vecswap__III_3D_V(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].obj);
}


// locals: 12
// stack: 4
// args: 4
void func_java_util_Arrays_qsort___3DII_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 141, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 2143 , L361398902 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2143;
    stack[sp++].i = local[2].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1010670443;
    ; 
    //  line no 2145 , L2044215423 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L1606304070:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L510063093;
    ; 
    //  line no 2146 , L1313916817 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L1966124444:
    //  line no 2147 , L1966124444 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L1487500813;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload f64  ,  L1966124444 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // arrload f64  ,  L1966124444 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L1487500813;
    ; 
    //  line no 2150 , L1911152052 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[D)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2148 , L961409111 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1966124444;
    L1487500813:
    //  line no 2145 , L1487500813 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1606304070;
    L510063093:
    //  line no 2152 , L510063093 , bytecode index = 
    method_exit(runtime);
    return;
    L1010670443:
    //  line no 2156 , L1010670443 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 2157 , L1231156911 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 2158 , L1525409936 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 2160 , L1708169732 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 40
    stack[sp++].i = 40;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L868815265;
    ; 
    //  line no 2162 , L1977310713 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 2163 , L1886491834 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[D)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3D_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 2164 , L294658058 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[D)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3D_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 2165 , L1781493632 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[D)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3D_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    L868815265:
    //  line no 2167 , L868815265 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.med3(III[D)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_Arrays_med3__III_3D_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 2173 , L1169474473 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[D)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2174 , L966544353 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[7].i = stack[--sp].i;
    ; 
    local[6].i = stack[--sp].i;
    ; 
    //  line no 2175 , L945722724 , bytecode index = 
    stack[sp++].i = local[5].i;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[9].i = stack[--sp].i;
    ; 
    local[8].i = stack[--sp].i;
    L9190301:
    //  line no 2183 , L9190301 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1278852808;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // arrload f64  ,  L9190301 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload f64  ,  L9190301 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  > 0) goto L1278852808;
    ; 
    //  line no 2185 , L2129144075 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L525968792;
    ; 
    //  line no 2187 , L504858437 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[D)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2188 , L422330142 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    L525968792:
    //  line no 2190 , L525968792 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L9190301;
    L1278852808:
    //  line no 2192 , L1278852808 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L649329985;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[8].i;
    // arrload f64  ,  L1278852808 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload f64  ,  L1278852808 bc index = 
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
        stack[sp].d = arr->prop.as_f64_arr[idx];
        sp += 2;
    }
    // invokestatic java/lang/Double.compare(DD)I
    {
        sp -= 5;
        stack[sp].i = func_java_lang_Double_compare__DD_I(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[10].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  < 0) goto L649329985;
    ; 
    //  line no 2194 , L1444635922 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  != 0) goto L775386112;
    ; 
    //  line no 2196 , L391630194 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[D)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2197 , L1146825051 , bytecode index = 
    // iinc slot 9 value -1
    local[9].i += -1;
    L775386112:
    //  line no 2199 , L775386112 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1278852808;
    L649329985:
    //  line no 2201 , L649329985 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1239807799;
    ; 
    //  line no 2202 , L1550261631 , bytecode index = 
    goto L1970436060;
    L1239807799:
    //  line no 2203 , L1239807799 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.swap(II[D)V
    {
        sp -= 4;
        func_java_util_Arrays_swap__II_3D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2204 , L1753127384 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 2205 , L239372207 , bytecode index = 
    // iinc slot 8 value -1
    local[8].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L9190301;
    L1970436060:
    //  line no 2210 , L1970436060 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 2211 , L1789718525 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[D)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2213 , L210156003 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[9].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 2214 , L279593458 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Arrays.vecswap(III[D)V
    {
        sp -= 5;
        func_java_util_Arrays_vecswap__III_3D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2216 , L989447607 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 2217 , L925308434 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L249034932;
    ; 
    //  line no 2218 , L1278254413 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([DII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3DII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L249034932:
    //  line no 2220 , L249034932 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 2221 , L940584193 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L931675031;
    ; 
    //  line no 2222 , L111900554 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[11].i;
    // invokestatic java/util/Arrays.qsort([DII)V
    {
        sp -= 4;
        func_java_util_Arrays_qsort___3DII_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L931675031:
    //  line no 2223 , L931675031 , bytecode index = 
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

void bridge_java_util_Arrays_qsort___3DII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_qsort___3DII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 4
// args: 2
void func_java_util_Arrays_sort___3Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 142, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 2242 , L2012744708 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2242;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L2012744708
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // aconst null
    rstack[sp++].obj = NULL;
    // invokestatic java/util/Arrays.sort([Ljava/lang/Object;IILjava/util/Comparator;)V
    {
        sp -= 5;
        func_java_util_Arrays_sort___3Ljava_lang_Object_2IILjava_util_Comparator_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2243 , L31114735 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3Ljava_lang_Object_2_V(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 4
// args: 3
void func_java_util_Arrays_sort___3Ljava_lang_Object_2Ljava_util_Comparator_2_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, struct java_util_Comparator* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 143, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 2263 , L1491755116 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2263;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1491755116
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/util/Arrays.sort([Ljava/lang/Object;IILjava/util/Comparator;)V
    {
        sp -= 5;
        func_java_util_Arrays_sort___3Ljava_lang_Object_2IILjava_util_Comparator_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2264 , L1866850137 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3Ljava_lang_Object_2Ljava_util_Comparator_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3Ljava_lang_Object_2Ljava_util_Comparator_2_V(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 4
// args: 4
void func_java_util_Arrays_sort___3Ljava_lang_Object_2II_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 144, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 2287 , L1661406123 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2287;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokestatic java/util/Arrays.sort([Ljava/lang/Object;IILjava/util/Comparator;)V
    {
        sp -= 5;
        func_java_util_Arrays_sort___3Ljava_lang_Object_2IILjava_util_Comparator_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2288 , L1759899303 , bytecode index = 
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

void bridge_java_util_Arrays_sort___3Ljava_lang_Object_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3Ljava_lang_Object_2II_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 5
void func_java_util_Arrays_sort___3Ljava_lang_Object_2IILjava_util_Comparator_2_V(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, s32 p2, s32 p3, struct java_util_Comparator* p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 145, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 2313 , L758119607 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2313;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 229);
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
    //     L758119607 in labeltable is :L758119607
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 2313;
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

void bridge_java_util_Arrays_sort___3Ljava_lang_Object_2IILjava_util_Comparator_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Arrays_sort___3Ljava_lang_Object_2IILjava_util_Comparator_2_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].obj);
}


// locals: 1
// stack: 3
// args: 2
struct java_util_List* func_java_util_Arrays_asList___3Ljava_lang_Object_2_Ljava_util_List_2(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 146, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 2448 , L838449246 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2448;
    // new java/util/Arrays$ArrayList
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 39);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/Arrays$ArrayList.<init>([Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_Arrays_00024ArrayList__init____3Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_Arrays_asList___3Ljava_lang_Object_2_Ljava_util_List_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Arrays_asList___3Ljava_lang_Object_2_Ljava_util_List_2(runtime, para[0].obj, para[1].obj);
}


// locals: 8
// stack: 5
// args: 2
s32 func_java_util_Arrays_hashCode___3J_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 147, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 2452 , L282496973 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2452;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L293508253;
    ; 
    //  line no 2453 , L1840903588 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L293508253:
    //  line no 2455 , L293508253 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 2456 , L1603198149 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1603198149
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L2063763486:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L515715487;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // arrload s64  ,  L2063763486 bc index = 
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
        stack[sp].j = arr->prop.as_s64_arr[idx];
        sp += 2;
    }
    sp -= 2;
    local[5].j = stack[sp].j;
    ; 
    //  line no 2457 , L1007412025 , bytecode index = 
    stack[sp].j = local[5].j;
    sp += 2;
    stack[sp].j = local[5].j;
    sp += 2;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 3].j = ((u64)stack[sp - 3].j) >> stack[sp - 1].i; 
    --sp;
    stack[sp - 4].j = stack[sp - 4].j ^ stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 2458 , L365590665 , bytecode index = 
    //  bipush 31
    stack[sp++].i = 31;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 2456 , L2053591126 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2063763486;
    L515715487:
    //  line no 2461 , L515715487 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_java_util_Arrays_hashCode___3J_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_hashCode___3J_I(runtime, para[0].obj, para[1].obj);
}


// locals: 6
// stack: 2
// args: 2
s32 func_java_util_Arrays_hashCode___3Ljava_lang_Object_2_I(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 148, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 2465 , L1850777594 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2465;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L681094281;
    ; 
    //  line no 2466 , L1748876332 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L681094281:
    //  line no 2468 , L681094281 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 2470 , L1747352992 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1747352992
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L40075281:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1878169648;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L40075281 bc index = 
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 2471 , L1781241150 , bytecode index = 
    //  bipush 31
    stack[sp++].i = 31;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  != NULL) goto L825962150;
    // iconst_0
    stack[sp++].i = 0;
    goto L793138072;
    L825962150:
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L793138072:
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 2470 , L1418620248 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L40075281;
    L1878169648:
    //  line no 2473 , L1878169648 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_java_util_Arrays_hashCode___3Ljava_lang_Object_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_hashCode___3Ljava_lang_Object_2_I(runtime, para[0].obj, para[1].obj);
}


// locals: 7
// stack: 2
// args: 3
s8 func_java_util_Arrays_deepEquals___3Ljava_lang_Object_2_3Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, JArray * p1, JArray * p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 149, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 2477 , L169663597 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2477;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L391877669;
    ; 
    //  line no 2478 , L815320891 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L391877669:
    //  line no 2479 , L391877669 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  == NULL) goto L101775274;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1778629809;
    L101775274:
    //  line no 2480 , L101775274 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1778629809:
    //  line no 2481 , L1778629809 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1778629809
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    ; 
    //  line no 2482 , L565372776 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L565372776
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1462044018;
    ; 
    //  line no 2483 , L1443435931 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1462044018:
    //  line no 2485 , L1462044018 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L555273695:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L396883763;
    ; 
    //  line no 2486 , L1750498848 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1750498848 bc index = 
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
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 2487 , L1995250556 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1995250556 bc index = 
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 2489 , L301749835 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L961160488;
    ; 
    //  line no 2490 , L1647766367 , bytecode index = 
    goto L2082351774;
    L961160488:
    //  line no 2491 , L961160488 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  != NULL) goto L262366552;
    ; 
    //  line no 2492 , L1730704097 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L262366552:
    //  line no 2495 , L262366552 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokestatic java/util/Arrays.deepEquals0(Ljava/lang/Object;Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_deepEquals0__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 2497 , L848363848 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  != 0) goto L2082351774;
    ; 
    //  line no 2498 , L1062635358 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2082351774:
    //  line no 2485 , L2082351774 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L555273695;
    L396883763:
    //  line no 2500 , L396883763 , bytecode index = 
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

void bridge_java_util_Arrays_deepEquals___3Ljava_lang_Object_2_3Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_deepEquals___3Ljava_lang_Object_2_3Ljava_lang_Object_2_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 2
// args: 3
s8 func_java_util_Arrays_deepEquals0__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_util_Arrays* p0, struct java_lang_Object* p1, struct java_lang_Object* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 150, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 2506 , L265321659 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2506;
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [Ljava/lang/Object;
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 203);
    if(stack[--sp].i  == 0) goto L896644936;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [Ljava/lang/Object;
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 203);
    if(stack[--sp].i  == 0) goto L896644936;
    ; 
    //  line no 2507 , L1050065615 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [Ljava/lang/Object;
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 203);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [Ljava/lang/Object;
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 203);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.deepEquals([Ljava/lang/Object;[Ljava/lang/Object;)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_deepEquals___3Ljava_lang_Object_2_3Ljava_lang_Object_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L896644936:
    //  line no 2508 , L896644936 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [B
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 314);
    if(stack[--sp].i  == 0) goto L2089016471;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [B
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 314);
    if(stack[--sp].i  == 0) goto L2089016471;
    ; 
    //  line no 2509 , L2001223946 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [B
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 314);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [B
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 314);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.equals([B[B)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_equals___3B_3B_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L2089016471:
    //  line no 2510 , L2089016471 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [S
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 315);
    if(stack[--sp].i  == 0) goto L938545229;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [S
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 315);
    if(stack[--sp].i  == 0) goto L938545229;
    ; 
    //  line no 2511 , L1433666880 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [S
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 315);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [S
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 315);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.equals([S[S)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_equals___3S_3S_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L938545229:
    //  line no 2512 , L938545229 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [I
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 83);
    if(stack[--sp].i  == 0) goto L794075965;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [I
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 83);
    if(stack[--sp].i  == 0) goto L794075965;
    ; 
    //  line no 2513 , L270056930 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [I
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 83);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [I
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 83);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.equals([I[I)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_equals___3I_3I_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L794075965:
    //  line no 2514 , L794075965 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [J
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 316);
    if(stack[--sp].i  == 0) goto L254801937;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [J
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 316);
    if(stack[--sp].i  == 0) goto L254801937;
    ; 
    //  line no 2515 , L90767234 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [J
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 316);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [J
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 316);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.equals([J[J)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_equals___3J_3J_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L254801937:
    //  line no 2516 , L254801937 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [C
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 200);
    if(stack[--sp].i  == 0) goto L707161353;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [C
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 200);
    if(stack[--sp].i  == 0) goto L707161353;
    ; 
    //  line no 2517 , L1522132780 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [C
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 200);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [C
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 200);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.equals([C[C)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_equals___3C_3C_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L707161353:
    //  line no 2518 , L707161353 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [F
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 317);
    if(stack[--sp].i  == 0) goto L495702238;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [F
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 317);
    if(stack[--sp].i  == 0) goto L495702238;
    ; 
    //  line no 2519 , L73181251 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [F
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 317);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [F
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 317);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.equals([F[F)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_equals___3F_3F_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L495702238:
    //  line no 2520 , L495702238 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [D
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 318);
    if(stack[--sp].i  == 0) goto L1970982267;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [D
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 318);
    if(stack[--sp].i  == 0) goto L1970982267;
    ; 
    //  line no 2521 , L917831210 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [D
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 318);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [D
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 318);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.equals([D[D)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_equals___3D_3D_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L1970982267:
    //  line no 2522 , L1970982267 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof [Z
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 319);
    if(stack[--sp].i  == 0) goto L195381554;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof [Z
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 319);
    if(stack[--sp].i  == 0) goto L195381554;
    ; 
    //  line no 2523 , L681008168 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast [Z
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 319);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast [Z
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 319);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/util/Arrays.equals([Z[Z)Z
    {
        sp -= 3;
        stack[sp].i = func_java_util_Arrays_equals___3Z_3Z_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1148254374;
    L195381554:
    //  line no 2525 , L195381554 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    L1148254374:
    //  line no 2526 , L1148254374 , bytecode index = 
    stack[sp++].i = local[2].i;
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

void bridge_java_util_Arrays_deepEquals0__Ljava_lang_Object_2Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Arrays_deepEquals0__Ljava_lang_Object_2Ljava_lang_Object_2_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


