// CLASS: java/io/InputStream extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_io_InputStream_static {};



__refer arr_vmtable_java_io_InputStream_from_java_io_InputStream[] = {
    func_java_io_InputStream_read___I,  //0
    func_java_io_InputStream_read___3B_I,  //1
    func_java_io_InputStream_read___3BII_I,  //2
    func_java_io_InputStream_skip__J_J,  //3
    func_java_io_InputStream_available___I,  //4
    func_java_io_InputStream_close___V,  //5
    func_java_io_InputStream_mark__I_V,  //6
    func_java_io_InputStream_reset___V,  //7
    func_java_io_InputStream_markSupported___Z  //8
};
__refer arr_vmtable_java_io_InputStream_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_InputStream[] = {
    {66, 9, arr_vmtable_java_io_InputStream_from_java_io_InputStream}, //0
    {5, 10, arr_vmtable_java_io_InputStream_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_io_InputStream__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3381, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 7 , L1448967471 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
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

void bridge_java_io_InputStream__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_InputStream__init____V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_io_InputStream_read___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3382, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_InputStream_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_InputStream_read___I(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s32 func_java_io_InputStream_read___3B_I(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3383, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 14 , L476709123 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 14;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L476709123
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokevirtual java/io/InputStream.read([BII)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 66, 2);
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

void bridge_java_io_InputStream_read___3B_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_InputStream_read___3B_I(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_InputStream_read___3BII_I[] = {
    { , , 1457}
};
ExceptionTable extable_func_java_io_InputStream_read___3BII_I = {1, arr_extable_func_java_io_InputStream_read___3BII_I};

// locals: 7
// stack: 3
// args: 3
s32 func_java_io_InputStream_read___3BII_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3384, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    // try catch :L1170735890 L2077462509 L931003277 (
    ; 
    //  line no 18 , L1117812847 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1198859194;
    ; 
    //  line no 19 , L540962910 , bytecode index = 
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
    //     L540962910 in labeltable is :L540962910
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 19;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1198859194:
    //  line no 20 , L1198859194 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L2026325575;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1198859194
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L2026325575;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L2026325575;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1198859194
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L2026325575;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  >= 0) goto L962931248;
    L2026325575:
    //  line no 22 , L2026325575 , bytecode index = 
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
    //     L2026325575 in labeltable is :L2026325575
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 22;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L962931248:
    //  line no 23 , L962931248 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  != 0) goto L1466148437;
    ; 
    //  line no 24 , L67928167 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1466148437:
    //  line no 27 , L1466148437 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 28 , L1186663391 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1444912530;
    ; 
    //  line no 29 , L478468106 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1444912530:
    //  line no 31 , L1444912530 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1444912530 bc index = 
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
    //  line no 33 , L2095803461 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[5].i = stack[--sp].i;
    L1170735890:
    __frame->bytecodeIndex = 
    //  line no 35 , L1170735890 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2077462509;
    ; 
    //  line no 36 , L1653634548 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 37 , L1212782393 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1916224178;
    ; 
    //  line no 38 , L1436127733 , bytecode index = 
    goto L2077462509;
    L1916224178:
    //  line no 40 , L1916224178 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L885481831;
    ; 
    //  line no 41 , L817092761 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L817092761 bc index = 
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
    L885481831:
    //  line no 35 , L885481831 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1170735890;
    L2077462509:
    __frame->bytecodeIndex = 
    //  line no 45 , L2077462509 , bytecode index = 
    goto L2027499247;
    L931003277:
    //  line no 44 , L931003277 , bytecode index = 
    rlocal[6].obj = rstack[--sp].obj;
    L2027499247:
    //  line no 46 , L2027499247 , bytecode index = 
    stack[sp++].i = local[5].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L931003277;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_InputStream_read___3BII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_InputStream_read___3BII_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 5
// stack: 4
// args: 1
s64 func_java_io_InputStream_skip__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3385, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 51 , L1855297340 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 51;
    stack[sp].j = local[1].j;
    sp += 2;
    sp -= 2;
    local[3].j = stack[sp].j;
    L1078783335:
    //  line no 52 , L1078783335 , bytecode index = 
    stack[sp].j = local[3].j;
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
    if(stack[--sp].i  <= 0) goto L1901272535;
    ; 
    //  line no 53 , L539322891 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1649096004;
    ; 
    //  line no 54 , L1162595263 , bytecode index = 
    goto L1901272535;
    L1649096004:
    //  line no 56 , L1649096004 , bytecode index = 
    stack[sp].j = local[3].j;
    sp += 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[3].j = stack[sp].j;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1078783335;
    L1901272535:
    //  line no 58 , L1901272535 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    stack[sp].j = local[3].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
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

void bridge_java_io_InputStream_skip__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_io_InputStream_skip__J_J(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_io_InputStream_available___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3386, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 63 , L669096398 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 63;
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

void bridge_java_io_InputStream_available___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_InputStream_available___I(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_io_InputStream_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3387, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 68 , L120999784 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 68;
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

void bridge_java_io_InputStream_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_InputStream_close___V(runtime, ins);
}


// locals: 2
// stack: 0
// args: 1
void func_java_io_InputStream_mark__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3388, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 72 , L2124688514 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 72;
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

void bridge_java_io_InputStream_mark__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_InputStream_mark__I_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_java_io_InputStream_reset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3389, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 76 , L216758017 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 76;
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 152);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 5491);
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
    //     L216758017 in labeltable is :L216758017
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 76;
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

void bridge_java_io_InputStream_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_InputStream_reset___V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_io_InputStream_markSupported___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3390, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 81 , L17222024 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
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

void bridge_java_io_InputStream_markSupported___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_InputStream_markSupported___Z(runtime, ins);
}


