// CLASS: java/io/StringReader extends java/io/Reader
#include "metadata.h"


// generation
// globals
//struct java_io_StringReader_static {};



__refer arr_vmtable_java_io_StringReader_from_java_io_StringReader[] = {
    func_java_io_StringReader_close___V,  //0
    func_java_io_StringReader_mark__I_V,  //1
    func_java_io_StringReader_markSupported___Z,  //2
    func_java_io_StringReader_read___I,  //3
    func_java_io_StringReader_read___3CII_I,  //4
    func_java_io_StringReader_ready___Z,  //5
    func_java_io_StringReader_reset___V,  //6
    func_java_io_StringReader_skip__J_J  //7
};
__refer arr_vmtable_java_io_StringReader_from_java_io_Reader[] = {
    func_java_io_StringReader_read___3CII_I,  //0
    func_java_io_Reader_read___3C_I,  //1
    func_java_io_StringReader_read___I,  //2
    func_java_io_StringReader_close___V,  //3
    func_java_io_StringReader_markSupported___Z,  //4
    func_java_io_StringReader_mark__I_V,  //5
    func_java_io_StringReader_reset___V,  //6
    func_java_io_StringReader_ready___Z  //7
};
__refer arr_vmtable_java_io_StringReader_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_io_StringReader_from_java_io_Closeable[] = {
    func_java_io_StringReader_close___V  //0
};
__refer arr_vmtable_java_io_StringReader_from_java_lang_AutoCloseable[] = {
    func_java_io_StringReader_close___V  //0
};
VMTable vmtable_java_io_StringReader[] = {
    {103, 8, arr_vmtable_java_io_StringReader_from_java_io_StringReader}, //0
    {104, 8, arr_vmtable_java_io_StringReader_from_java_io_Reader}, //1
    {10, 11, arr_vmtable_java_io_StringReader_from_java_lang_Object}, //2
    {105, 1, arr_vmtable_java_io_StringReader_from_java_io_Closeable}, //3
    {106, 1, arr_vmtable_java_io_StringReader_from_java_lang_AutoCloseable}, //4
};



// locals: 2
// stack: 4
// args: 1
void func_java_io_StringReader__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 310, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 83 , L1855610584 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 83;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/Reader.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_io_Reader__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 84 , L2114289475 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/io/StringReader buf Ljava/lang/String;
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->buf_1 = rstack[sp + 1].obj;
    ; 
    //  line no 86 , L113411247 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    // putfield java/io/StringReader count I
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->count_4 = stack[sp + 1].i;
    ; 
    //  line no 87 , L1485891705 , bytecode index = 
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
    // putfield java/io/StringReader pos I
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->pos_2 = stack[sp + 1].i;
    // putfield java/io/StringReader markedPos I
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->markedPos_3 = stack[sp + 1].i;
    ; 
    //  line no 88 , L1681920301 , bytecode index = 
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

void bridge_java_io_StringReader__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_StringReader__init___Ljava_lang_String_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_StringReader_close___V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_StringReader_close___V = {2, arr_extable_func_java_io_StringReader_close___V};

// locals: 3
// stack: 2
// args: 0
void func_java_io_StringReader_close___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 311, &rstack[0], &rlocal[0], &sp);
    // try catch :L589273327 L2081652693 L406765571 (
    // try catch :L406765571 L2107443224 L406765571 (
    ; 
    //  line no 92 , L572145572 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 92;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->lock_0;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L589273327:
    __frame->bytecodeIndex = 
    //  line no 94 , L589273327 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/io/StringReader buf Ljava/lang/String;
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->buf_1 = rstack[sp + 1].obj;
    ; 
    //  line no 95 , L1158676965 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2081652693:
    __frame->bytecodeIndex = 
    goto L725680028;
    L406765571:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L2107443224:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L2107443224 in labeltable is :L2107443224
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 95;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L725680028:
    //  line no 96 , L725680028 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L406765571;
        case 1 : goto L406765571;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_StringReader_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_StringReader_close___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_StringReader_mark__I_V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_StringReader_mark__I_V = {2, arr_extable_func_java_io_StringReader_mark__I_V};

// locals: 4
// stack: 3
// args: 1
void func_java_io_StringReader_mark__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 312, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    // try catch :L1293680734 L138817329 L609656250 (
    // try catch :L609656250 L1574877131 L609656250 (
    ; 
    //  line no 100 , L1894601438 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->lock_0;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1293680734:
    __frame->bytecodeIndex = 
    //  line no 102 , L1293680734 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader buf Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->buf_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1231799381;
    ; 
    //  line no 103 , L1497377679 , bytecode index = 
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 63);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 716);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //     L1497377679 in labeltable is :L1497377679
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 103;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1231799381:
    //  line no 106 , L1231799381 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
    sp += 0;
    // putfield java/io/StringReader markedPos I
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->markedPos_3 = stack[sp + 1].i;
    ; 
    //  line no 107 , L1904783235 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L138817329:
    __frame->bytecodeIndex = 
    goto L1810458830;
    L609656250:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1574877131:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1574877131 in labeltable is :L1574877131
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 107;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1810458830:
    //  line no 108 , L1810458830 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L609656250;
        case 1 : goto L609656250;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_StringReader_mark__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_StringReader_mark__I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_io_StringReader_markSupported___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 313, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 112 , L611520720 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
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

void bridge_java_io_StringReader_markSupported___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_StringReader_markSupported___Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_StringReader_read___I[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_StringReader_read___I = {3, arr_extable_func_java_io_StringReader_read___I};

// locals: 3
// stack: 5
// args: 0
s32 func_java_io_StringReader_read___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 314, &rstack[0], &rlocal[0], &sp);
    // try catch :L809300666 L1984513847 L1241529534 (
    // try catch :L1082309267 L402405659 L1241529534 (
    // try catch :L1241529534 L724608044 L1241529534 (
    ; 
    //  line no 117 , L1621002296 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->lock_0;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L809300666:
    __frame->bytecodeIndex = 
    //  line no 119 , L809300666 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader buf Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->buf_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L899543194;
    ; 
    //  line no 120 , L1138697171 , bytecode index = 
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 63);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 716);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //     L1138697171 in labeltable is :L1138697171
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 120;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L899543194:
    //  line no 122 , L899543194 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader count I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->count_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1082309267;
    ; 
    //  line no 123 , L1835073088 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader buf Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->buf_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
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
    // putfield java/io/StringReader pos I
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->pos_2 = stack[sp + 1].i;
    // invokevirtual java/lang/String.charAt(I)C
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        u16 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 9, 3);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    stack[sp++].i = 0xffff;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1984513847:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1082309267:
    __frame->bytecodeIndex = 
    //  line no 124 , L1082309267 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L402405659:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1241529534:
    __frame->bytecodeIndex = 
    //  line no 125 , L1241529534 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L724608044:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L724608044 in labeltable is :L724608044
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 125;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1241529534;
        case 1 : goto L1241529534;
        case 2 : goto L1241529534;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_StringReader_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_StringReader_read___I(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_StringReader_read___3CII_I[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_StringReader_read___3CII_I = {3, arr_extable_func_java_io_StringReader_read___3CII_I};

// locals: 8
// stack: 5
// args: 3
s32 func_java_io_StringReader_read___3CII_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 315, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    // try catch :L602423811 L429075478 L1944798106 (
    // try catch :L1363560175 L811597470 L1944798106 (
    // try catch :L1944798106 L808228639 L1944798106 (
    ; 
    //  line no 130 , L426960147 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 130;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->lock_0;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[4].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L602423811:
    __frame->bytecodeIndex = 
    //  line no 132 , L602423811 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader buf Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->buf_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L2061543916;
    ; 
    //  line no 133 , L897848096 , bytecode index = 
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 63);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 716);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //     L897848096 in labeltable is :L897848096
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 133;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2061543916:
    //  line no 136 , L2061543916 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L1640296160;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L1640296160;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L2061543916
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1863374262;
    L1640296160:
    //  line no 137 , L1640296160 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 5);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1640296160 in labeltable is :L1640296160
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 137;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1863374262:
    //  line no 139 , L1863374262 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader count I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->count_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1363560175;
    ; 
    //  line no 140 , L272678513 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L429075478:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1363560175:
    __frame->bytecodeIndex = 
    //  line no 142 , L1363560175 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader count I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->count_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 143 , L88646218 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader buf Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->buf_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
    sp += 0;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual java/lang/String.getChars(II[CI)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,JArray *,s32) = find_method(__ins->vm_table, 9, 4);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 144 , L1128132589 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 145 , L711540569 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // putfield java/io/StringReader pos I
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->pos_2 = stack[sp + 1].i;
    ; 
    //  line no 146 , L1062186835 , bytecode index = 
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L811597470:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1944798106:
    __frame->bytecodeIndex = 
    //  line no 147 , L1944798106 , bytecode index = 
    rlocal[7].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L808228639:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[7].obj;
    // athrow
    //     L808228639 in labeltable is :L808228639
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 147;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1944798106;
        case 1 : goto L1944798106;
        case 2 : goto L1944798106;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_StringReader_read___3CII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_StringReader_read___3CII_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 3
// args: 0
s8 func_java_io_StringReader_ready___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 316, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 161 , L1396431506 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 161;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader buf Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->buf_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L810267739;
    ; 
    //  line no 162 , L1916575798 , bytecode index = 
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 63);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 716);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //     L1916575798 in labeltable is :L1916575798
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 162;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L810267739:
    //  line no 164 , L810267739 , bytecode index = 
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

void bridge_java_io_StringReader_ready___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_StringReader_ready___Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_StringReader_reset___V[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_StringReader_reset___V = {2, arr_extable_func_java_io_StringReader_reset___V};

// locals: 3
// stack: 3
// args: 0
void func_java_io_StringReader_reset___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 317, &rstack[0], &rlocal[0], &sp);
    // try catch :L685558284 L1171802656 L1391624125 (
    // try catch :L1391624125 L79782883 L1391624125 (
    ; 
    //  line no 174 , L1250121181 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 174;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->lock_0;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L685558284:
    __frame->bytecodeIndex = 
    //  line no 176 , L685558284 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader buf Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->buf_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1292738535;
    ; 
    //  line no 177 , L205721196 , bytecode index = 
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 63);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 716);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //     L205721196 in labeltable is :L205721196
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 177;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1292738535:
    //  line no 179 , L1292738535 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader markedPos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->markedPos_3;
    sp += 0;
    // putfield java/io/StringReader pos I
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->pos_2 = stack[sp + 1].i;
    ; 
    //  line no 180 , L51554940 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1171802656:
    __frame->bytecodeIndex = 
    goto L1399794302;
    L1391624125:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L79782883:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L79782883 in labeltable is :L79782883
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 180;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1399794302:
    //  line no 181 , L1399794302 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1391624125;
        case 1 : goto L1391624125;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_StringReader_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_StringReader_reset___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_StringReader_skip__J_J[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_io_StringReader_skip__J_J = {2, arr_extable_func_java_io_StringReader_skip__J_J};

// locals: 7
// stack: 6
// args: 1
s64 func_java_io_StringReader_skip__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 318, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    // try catch :L1721246982 L1892627171 L1515833950 (
    // try catch :L1515833950 L1272883899 L1515833950 (
    ; 
    //  line no 196 , L1816725203 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 196;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader lock Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->lock_0;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[3].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1721246982:
    __frame->bytecodeIndex = 
    //  line no 198 , L1721246982 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader buf Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_io_StringReader*)rstack[sp - 1].obj)->buf_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1704491411;
    ; 
    //  line no 199 , L1896305732 , bytecode index = 
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 63);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 716);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    //     L1896305732 in labeltable is :L1896305732
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 199;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1704491411:
    //  line no 205 , L1704491411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader count I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->count_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
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
    if(stack[--sp].i  >= 0) goto L1802066694;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    goto L1293677337;
    L1802066694:
    stack[sp].j = local[1].j;
    sp += 2;
    L1293677337:
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
    sp -= 2;
    local[4].j = stack[sp].j;
    ; 
    //  line no 206 , L116734858 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/io/StringReader pos I
    stack[sp - 1].i = ((struct java_io_StringReader*)rstack[sp - 1].obj)->pos_2;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp].j = local[4].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // putfield java/io/StringReader pos I
    sp -= 2;
    ((struct java_io_StringReader*)rstack[sp + 0].obj)->pos_2 = stack[sp + 1].i;
    ; 
    //  line no 207 , L1551945522 , bytecode index = 
    stack[sp].j = local[4].j;
    sp += 2;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1892627171:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 2].j;
    L1515833950:
    __frame->bytecodeIndex = 
    //  line no 208 , L1515833950 , bytecode index = 
    rlocal[6].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1272883899:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[6].obj;
    // athrow
    //     L1272883899 in labeltable is :L1272883899
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 208;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1515833950;
        case 1 : goto L1515833950;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_StringReader_skip__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_io_StringReader_skip__J_J(runtime, ins);
}


