// CLASS: java/io/ByteArrayInputStream extends java/io/InputStream
#include "metadata.h"


// generation
// globals
//struct java_io_ByteArrayInputStream_static {};



__refer arr_vmtable_java_io_ByteArrayInputStream_from_java_io_ByteArrayInputStream[] = {
    func_java_io_ByteArrayInputStream_read___I,  //0
    func_java_io_ByteArrayInputStream_read___3BII_I,  //1
    func_java_io_ByteArrayInputStream_skip__J_J,  //2
    func_java_io_ByteArrayInputStream_available___I,  //3
    func_java_io_ByteArrayInputStream_markSupported___Z,  //4
    func_java_io_ByteArrayInputStream_mark__I_V,  //5
    func_java_io_ByteArrayInputStream_reset___V,  //6
    func_java_io_ByteArrayInputStream_close___V  //7
};
__refer arr_vmtable_java_io_ByteArrayInputStream_from_java_io_InputStream[] = {
    func_java_io_ByteArrayInputStream_read___I,  //0
    func_java_io_InputStream_read___3B_I,  //1
    func_java_io_ByteArrayInputStream_read___3BII_I,  //2
    func_java_io_ByteArrayInputStream_skip__J_J,  //3
    func_java_io_ByteArrayInputStream_available___I,  //4
    func_java_io_ByteArrayInputStream_close___V,  //5
    func_java_io_ByteArrayInputStream_mark__I_V,  //6
    func_java_io_ByteArrayInputStream_reset___V,  //7
    func_java_io_ByteArrayInputStream_markSupported___Z  //8
};
__refer arr_vmtable_java_io_ByteArrayInputStream_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_ByteArrayInputStream[] = {
    {206, 8, arr_vmtable_java_io_ByteArrayInputStream_from_java_io_ByteArrayInputStream}, //0
    {66, 9, arr_vmtable_java_io_ByteArrayInputStream_from_java_io_InputStream}, //1
    {5, 10, arr_vmtable_java_io_ByteArrayInputStream_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_io_ByteArrayInputStream__init____3B_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2468, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 20 , L1300497562 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/InputStream.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_InputStream__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 14 , L971936990 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/io/ByteArrayInputStream mark I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->mark_2 = stack[sp + 1].i;
    ; 
    //  line no 21 , L1680365536 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/io/ByteArrayInputStream buf [B
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->buf_0 = rstack[sp + 1].obj;
    ; 
    //  line no 22 , L1282100951 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/io/ByteArrayInputStream pos I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->pos_1 = stack[sp + 1].i;
    ; 
    //  line no 23 , L556151572 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L556151572
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // putfield java/io/ByteArrayInputStream count I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 24 , L1822624650 , bytecode index = 
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

void bridge_java_io_ByteArrayInputStream__init____3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayInputStream__init____3B_V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 3
void func_java_io_ByteArrayInputStream__init____3BII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2469, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 27 , L1553544410 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/InputStream.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_InputStream__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 14 , L1287062222 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/io/ByteArrayInputStream mark I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->mark_2 = stack[sp + 1].i;
    ; 
    //  line no 28 , L943501193 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/io/ByteArrayInputStream buf [B
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->buf_0 = rstack[sp + 1].obj;
    ; 
    //  line no 29 , L1690796457 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield java/io/ByteArrayInputStream pos I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->pos_1 = stack[sp + 1].i;
    ; 
    //  line no 30 , L1911379471 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1911379471
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
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
    // putfield java/io/ByteArrayInputStream count I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 31 , L95980430 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield java/io/ByteArrayInputStream mark I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->mark_2 = stack[sp + 1].i;
    ; 
    //  line no 32 , L1478835287 , bytecode index = 
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

void bridge_java_io_ByteArrayInputStream__init____3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayInputStream__init____3BII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 5
// args: 0
s32 func_java_io_ByteArrayInputStream_read___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2470, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 36 , L468797188 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 36;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1515477775;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/io/ByteArrayInputStream pos I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->pos_1 = stack[sp + 1].i;
    // arrload s8  ,  L468797188 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    goto L736236438;
    L1515477775:
    // iconst_-1
    stack[sp++].i = -1;
    L736236438:
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

void bridge_java_io_ByteArrayInputStream_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ByteArrayInputStream_read___I(runtime, ins);
}


// locals: 4
// stack: 5
// args: 3
s32 func_java_io_ByteArrayInputStream_read___3BII_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2471, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 41 , L51712095 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 41;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L2070003473;
    ; 
    //  line no 42 , L1076133192 , bytecode index = 
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
    //     L1076133192 in labeltable is :L1076133192
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 42;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2070003473:
    //  line no 43 , L2070003473 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L1073041213;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L2070003473
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1073041213;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L1073041213;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L2070003473
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1073041213;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  >= 0) goto L348731252;
    L1073041213:
    //  line no 45 , L1073041213 , bytecode index = 
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
    //     L1073041213 in labeltable is :L1073041213
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 45;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L348731252:
    //  line no 47 , L348731252 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1655081931;
    ; 
    //  line no 48 , L25916650 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1655081931:
    //  line no 50 , L1655081931 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L345132865;
    ; 
    //  line no 51 , L1228777520 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L345132865:
    //  line no 53 , L345132865 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  > 0) goto L529766927;
    ; 
    //  line no 54 , L1164280115 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L529766927:
    //  line no 56 , L529766927 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream buf [B
    rstack[sp - 1].obj = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->buf_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
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
    //  line no 57 , L1124804249 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/io/ByteArrayInputStream pos I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->pos_1 = stack[sp + 1].i;
    ; 
    //  line no 58 , L1733520096 , bytecode index = 
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

void bridge_java_io_ByteArrayInputStream_read___3BII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ByteArrayInputStream_read___3BII_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 3
// stack: 5
// args: 1
s64 func_java_io_ByteArrayInputStream_skip__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2472, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 63 , L219594319 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 63;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp].j = local[1].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L397639322;
    ; 
    //  line no 64 , L1808470758 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    sp -= 2;
    local[1].j = stack[sp].j;
    L397639322:
    //  line no 66 , L397639322 , bytecode index = 
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
    if(stack[--sp].i  >= 0) goto L287136919;
    ; 
    //  line no 67 , L700546109 , bytecode index = 
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].j;
    L287136919:
    //  line no 69 , L287136919 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp].j = local[1].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // putfield java/io/ByteArrayInputStream pos I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->pos_1 = stack[sp + 1].i;
    ; 
    //  line no 70 , L621449265 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ByteArrayInputStream_skip__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_io_ByteArrayInputStream_skip__J_J(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_java_io_ByteArrayInputStream_available___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2473, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 75 , L1835529707 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 75;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream count I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
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

void bridge_java_io_ByteArrayInputStream_available___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ByteArrayInputStream_available___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_io_ByteArrayInputStream_markSupported___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2474, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 80 , L1042273835 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 80;
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

void bridge_java_io_ByteArrayInputStream_markSupported___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ByteArrayInputStream_markSupported___Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_ByteArrayInputStream_mark__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2475, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 85 , L1435191618 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 85;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream pos I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->pos_1;
    sp += 0;
    // putfield java/io/ByteArrayInputStream mark I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->mark_2 = stack[sp + 1].i;
    ; 
    //  line no 86 , L820804897 , bytecode index = 
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

void bridge_java_io_ByteArrayInputStream_mark__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayInputStream_mark__I_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_io_ByteArrayInputStream_reset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2476, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 90 , L2130329443 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 90;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ByteArrayInputStream mark I
    stack[sp - 1].i = ((struct java_io_ByteArrayInputStream*)rstack[sp - 1].obj)->mark_2;
    sp += 0;
    // putfield java/io/ByteArrayInputStream pos I
    sp -= 2;
    ((struct java_io_ByteArrayInputStream*)rstack[sp + 0].obj)->pos_1 = stack[sp + 1].i;
    ; 
    //  line no 91 , L1899280551 , bytecode index = 
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

void bridge_java_io_ByteArrayInputStream_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayInputStream_reset___V(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_io_ByteArrayInputStream_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2477, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 95 , L1088327571 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 95;
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

void bridge_java_io_ByteArrayInputStream_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ByteArrayInputStream_close___V(runtime, ins);
}


