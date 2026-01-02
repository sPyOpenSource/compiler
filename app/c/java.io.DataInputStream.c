// CLASS: java/io/DataInputStream extends java/io/InputStream
#include "metadata.h"


// generation
// globals
//struct java_io_DataInputStream_static {};



__refer arr_vmtable_java_io_DataInputStream_from_java_io_DataInputStream[] = {
    func_java_io_DataInputStream_read___I,  //0
    func_java_io_DataInputStream_read___3B_I,  //1
    func_java_io_DataInputStream_read___3BII_I,  //2
    func_java_io_DataInputStream_readFully___3B_V,  //3
    func_java_io_DataInputStream_readFully___3BII_V,  //4
    func_java_io_DataInputStream_skipBytes__I_I,  //5
    func_java_io_DataInputStream_readBoolean___Z,  //6
    func_java_io_DataInputStream_readByte___B,  //7
    func_java_io_DataInputStream_readUnsignedByte___I,  //8
    func_java_io_DataInputStream_readShort___S,  //9
    func_java_io_DataInputStream_readUnsignedShort___I,  //10
    func_java_io_DataInputStream_readChar___C,  //11
    func_java_io_DataInputStream_readInt___I,  //12
    func_java_io_DataInputStream_readLong___J,  //13
    func_java_io_DataInputStream_readFloat___F,  //14
    func_java_io_DataInputStream_readDouble___D,  //15
    func_java_io_DataInputStream_readUTF___Ljava_lang_String_2,  //16
    func_java_io_DataInputStream_skip__J_J,  //17
    func_java_io_DataInputStream_available___I,  //18
    func_java_io_DataInputStream_close___V,  //19
    func_java_io_DataInputStream_mark__I_V,  //20
    func_java_io_DataInputStream_reset___V,  //21
    func_java_io_DataInputStream_markSupported___Z  //22
};
__refer arr_vmtable_java_io_DataInputStream_from_java_io_InputStream[] = {
    func_java_io_DataInputStream_read___I,  //0
    func_java_io_DataInputStream_read___3B_I,  //1
    func_java_io_DataInputStream_read___3BII_I,  //2
    func_java_io_DataInputStream_skip__J_J,  //3
    func_java_io_DataInputStream_available___I,  //4
    func_java_io_DataInputStream_close___V,  //5
    func_java_io_DataInputStream_mark__I_V,  //6
    func_java_io_DataInputStream_reset___V,  //7
    func_java_io_DataInputStream_markSupported___Z  //8
};
__refer arr_vmtable_java_io_DataInputStream_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_DataInputStream[] = {
    {124, 23, arr_vmtable_java_io_DataInputStream_from_java_io_DataInputStream}, //0
    {66, 9, arr_vmtable_java_io_DataInputStream_from_java_io_InputStream}, //1
    {5, 10, arr_vmtable_java_io_DataInputStream_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_io_DataInputStream__init___Ljava_io_InputStream_2_V(JThreadRuntime *runtime, struct java_io_InputStream* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3198, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 13 , L479769835 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
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
    //  line no 14 , L1166021410 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/io/DataInputStream in Ljava/io/InputStream;
    sp -= 2;
    ((struct java_io_DataInputStream*)rstack[sp + 0].obj)->in_0 = rstack[sp + 1].obj;
    ; 
    //  line no 15 , L1969958288 , bytecode index = 
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

void bridge_java_io_DataInputStream__init___Ljava_io_InputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_DataInputStream__init___Ljava_io_InputStream_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_io_DataInputStream_read___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3199, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 19 , L1824931880 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 19;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
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

void bridge_java_io_DataInputStream_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_read___I(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s32 func_java_io_DataInputStream_read___3B_I(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3200, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 24 , L95545487 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 24;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L95545487
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

void bridge_java_io_DataInputStream_read___3B_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_read___3B_I(runtime, ins);
}


// locals: 4
// stack: 4
// args: 3
s32 func_java_io_DataInputStream_read___3BII_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3201, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 29 , L1779787990 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 29;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
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

void bridge_java_io_DataInputStream_read___3BII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_read___3BII_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 4
// args: 1
void func_java_io_DataInputStream_readFully___3B_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3202, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 34 , L456653804 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 34;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L456653804
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokevirtual java/io/DataInputStream.readFully([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 124, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 35 , L1243705012 , bytecode index = 
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

void bridge_java_io_DataInputStream_readFully___3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_DataInputStream_readFully___3B_V(runtime, ins);
}


// locals: 6
// stack: 5
// args: 3
void func_java_io_DataInputStream_readFully___3BII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3203, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 39 , L1590202270 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 39;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  >= 0) goto L2047145776;
    ; 
    //  line no 40 , L990994954 , bytecode index = 
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
    //     L990994954 in labeltable is :L990994954
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 40;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2047145776:
    //  line no 42 , L2047145776 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L802270602:
    //  line no 43 , L802270602 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L897541009;
    ; 
    //  line no 44 , L1755295609 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual java/io/DataInputStream.read([BII)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 124, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 45 , L1479446866 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  >= 0) goto L2050083360;
    ; 
    //  line no 46 , L882658588 , bytecode index = 
    // new java/io/EOFException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 174);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/io/EOFException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_EOFException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L882658588 in labeltable is :L882658588
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 46;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2050083360:
    //  line no 48 , L2050083360 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 49 , L569235601 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L802270602;
    L897541009:
    //  line no 50 , L897541009 , bytecode index = 
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

void bridge_java_io_DataInputStream_readFully___3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_DataInputStream_readFully___3BII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 4
// stack: 3
// args: 1
s32 func_java_io_DataInputStream_skipBytes__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3204, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 54 , L2037498537 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 54;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 55 , L802395190 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1622534157:
    //  line no 57 , L1622534157 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1178160997;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    // invokevirtual java/io/DataInputStream.skip(J)J
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 124, 17);
        stack[sp].j = __func_p(runtime, stack[sp + 0].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[3].i = stack[--sp].i;
    if(stack[--sp].i  <= 0) goto L1178160997;
    ; 
    //  line no 58 , L833272193 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1622534157;
    L1178160997:
    //  line no 60 , L1178160997 , bytecode index = 
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

void bridge_java_io_DataInputStream_skipBytes__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_skipBytes__I_I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
s8 func_java_io_DataInputStream_readBoolean___Z(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3205, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 65 , L1297189990 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 65;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 66 , L1092591822 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L622690269;
    ; 
    //  line no 67 , L2028372993 , bytecode index = 
    // new java/io/EOFException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 174);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/io/EOFException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_EOFException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L2028372993 in labeltable is :L2028372993
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 67;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L622690269:
    //  line no 69 , L622690269 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L957683143;
    // iconst_1
    stack[sp++].i = 1;
    goto L95476731;
    L957683143:
    // iconst_0
    stack[sp++].i = 0;
    L95476731:
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

void bridge_java_io_DataInputStream_readBoolean___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_readBoolean___Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
s8 func_java_io_DataInputStream_readByte___B(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3206, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 74 , L127401209 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 74;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 75 , L381516513 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L366023886;
    ; 
    //  line no 76 , L856880372 , bytecode index = 
    // new java/io/EOFException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 174);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/io/EOFException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_EOFException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L856880372 in labeltable is :L856880372
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 76;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L366023886:
    //  line no 78 , L366023886 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
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

void bridge_java_io_DataInputStream_readByte___B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_readByte___B(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
s32 func_java_io_DataInputStream_readUnsignedByte___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3207, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 83 , L1993191331 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 83;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 84 , L1797763792 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L1337347604;
    ; 
    //  line no 85 , L293618119 , bytecode index = 
    // new java/io/EOFException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 174);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/io/EOFException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_EOFException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L293618119 in labeltable is :L293618119
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 85;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1337347604:
    //  line no 87 , L1337347604 , bytecode index = 
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

void bridge_java_io_DataInputStream_readUnsignedByte___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_readUnsignedByte___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s16 func_java_io_DataInputStream_readShort___S(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3208, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 92 , L1548535364 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 92;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.readUnsignedShort()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
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

void bridge_java_io_DataInputStream_readShort___S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_readShort___S(runtime, ins);
}


// locals: 3
// stack: 3
// args: 0
s32 func_java_io_DataInputStream_readUnsignedShort___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3209, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 97 , L854202039 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 97;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 98 , L1656143941 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 99 , L1492276401 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  >= 0) goto L1186127045;
    ; 
    //  line no 100 , L604976394 , bytecode index = 
    // new java/io/EOFException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 174);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/io/EOFException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_EOFException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L604976394 in labeltable is :L604976394
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 100;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1186127045:
    //  line no 102 , L1186127045 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
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

void bridge_java_io_DataInputStream_readUnsignedShort___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_readUnsignedShort___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
u16 func_java_io_DataInputStream_readChar___C(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3210, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 107 , L989001798 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 107;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.readUnsignedShort()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
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

void bridge_java_io_DataInputStream_readChar___C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_readChar___C(runtime, ins);
}


// locals: 5
// stack: 3
// args: 0
s32 func_java_io_DataInputStream_readInt___I(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3211, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 112 , L923570200 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 113 , L1015139714 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 114 , L287056540 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 115 , L1238055041 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 116 , L437583344 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  >= 0) goto L676060909;
    ; 
    //  line no 117 , L1488130490 , bytecode index = 
    // new java/io/EOFException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 174);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/io/EOFException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_EOFException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1488130490 in labeltable is :L1488130490
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 117;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L676060909:
    //  line no 119 , L676060909 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 24
    stack[sp++].i = 24;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
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

void bridge_java_io_DataInputStream_readInt___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_readInt___I(runtime, ins);
}


// locals: 1
// stack: 6
// args: 0
s64 func_java_io_DataInputStream_readLong___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3212, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 124 , L1978317461 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 124;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.readInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 12);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 3].j = stack[sp - 3].j << stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.readInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 12);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0xffffffffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
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

void bridge_java_io_DataInputStream_readLong___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_io_DataInputStream_readLong___J(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
f32 func_java_io_DataInputStream_readFloat___F(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3213, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 129 , L1130250604 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 129;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.readInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 12);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/lang/Float.intBitsToFloat(I)F
    {
        sp -= 2;
        stack[sp].f = func_java_lang_Float_intBitsToFloat__I_F(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].f;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_DataInputStream_readFloat___F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_io_DataInputStream_readFloat___F(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
f64 func_java_io_DataInputStream_readDouble___D(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3214, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 134 , L1257058590 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 134;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.readLong()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 13);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/lang/Double.longBitsToDouble(J)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Double_longBitsToDouble__J_D(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_DataInputStream_readDouble___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_io_DataInputStream_readDouble___D(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_io_DataInputStream_readUTF___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3215, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 139 , L2111615196 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 139;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/io/DataInputStream.readUTF(Ljava/io/DataInputStream;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_io_DataInputStream_readUTF__Ljava_io_DataInputStream_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_io_DataInputStream_readUTF___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_DataInputStream_readUTF___Ljava_lang_String_2(runtime, ins);
}


// locals: 9
// stack: 5
// args: 2
struct java_lang_String* func_java_io_DataInputStream_readUTF__Ljava_io_DataInputStream_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_io_DataInputStream* p0, struct java_io_DataInputStream* p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3216, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 144 , L740120508 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 144;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/DataInputStream.readUnsignedShort()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 145 , L650608468 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 146 , L1048928512 , bytecode index = 
    stack[sp++].i = local[1].i;
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
    //  line no 148 , L1855589354 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 149 , L687608114 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 151 , L895280806 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/DataInputStream.readFully([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 124, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L541330540:
    //  line no 153 , L541330540 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L507479765;
    ; 
    //  line no 154 , L1443000737 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[7].i;
    // arrload s8  ,  L1443000737 bc index = 
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
    local[4].i = stack[--sp].i;
    ; 
    //  line no 155 , L79283217 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_4
    stack[sp++].i = 4;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    switch(stack[--sp].i){
        case 0:
            goto L1727379710;
        case 1:
            goto L1727379710;
        case 2:
            goto L1727379710;
        case 3:
            goto L1727379710;
        case 4:
            goto L1727379710;
        case 5:
            goto L1727379710;
        case 6:
            goto L1727379710;
        case 7:
            goto L1727379710;
        case 8:
            goto L69115782;
        case 9:
            goto L69115782;
        case 10:
            goto L69115782;
        case 11:
            goto L69115782;
        case 12:
            goto L591352568;
        case 13:
            goto L591352568;
        case 14:
            goto L1777112002;
        default:
            goto L69115782;
    }
    L1727379710:
    //  line no 158 , L1727379710 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 159 , L436126678 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[8].i;
    // iinc slot 8 value 1
    local[8].i += 1;
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L436126678 bc index = 
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
    //  line no 160 , L1384626783 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L541330540;
    L591352568:
    //  line no 163 , L591352568 , bytecode index = 
    // iinc slot 7 value 2
    local[7].i += 2;
    ; 
    //  line no 164 , L192318053 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L109673034;
    ; 
    //  line no 165 , L1770453310 , bytecode index = 
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4986);
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
    //     L1770453310 in labeltable is :L1770453310
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 165;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L109673034:
    //  line no 166 , L109673034 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[7].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L109673034 bc index = 
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 167 , L113042195 , bytecode index = 
    stack[sp++].i = local[5].i;
    //  sipush 192
    stack[sp++].i = 192;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  sipush 128
    stack[sp++].i = 128;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L958817283;
    ; 
    //  line no 168 , L1957691975 , bytecode index = 
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4986);
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
    //     L1957691975 in labeltable is :L1957691975
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 168;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L958817283:
    //  line no 169 , L958817283 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[8].i;
    // iinc slot 8 value 1
    local[8].i += 1;
    stack[sp++].i = local[4].i;
    //  bipush 31
    stack[sp++].i = 31;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L958817283 bc index = 
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
    //  line no 170 , L715213542 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L541330540;
    L1777112002:
    //  line no 173 , L1777112002 , bytecode index = 
    // iinc slot 7 value 3
    local[7].i += 3;
    ; 
    //  line no 174 , L1273270490 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1097397209;
    ; 
    //  line no 175 , L893281161 , bytecode index = 
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4986);
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
    //     L893281161 in labeltable is :L893281161
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 175;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1097397209:
    //  line no 176 , L1097397209 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[7].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1097397209 bc index = 
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 177 , L367589810 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[7].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L367589810 bc index = 
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
    local[6].i = stack[--sp].i;
    ; 
    //  line no 178 , L2053491093 , bytecode index = 
    stack[sp++].i = local[5].i;
    //  sipush 192
    stack[sp++].i = 192;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  sipush 128
    stack[sp++].i = 128;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2090142523;
    stack[sp++].i = local[6].i;
    //  sipush 192
    stack[sp++].i = 192;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  sipush 128
    stack[sp++].i = 128;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L988876043;
    L2090142523:
    //  line no 179 , L2090142523 , bytecode index = 
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4986);
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
    //     L2090142523 in labeltable is :L2090142523
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 179;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L988876043:
    //  line no 180 , L988876043 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[8].i;
    // iinc slot 8 value 1
    local[8].i += 1;
    stack[sp++].i = local[4].i;
    //  bipush 15
    stack[sp++].i = 15;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[6].i;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L988876043 bc index = 
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
    //  line no 183 , L1745241742 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L541330540;
    L69115782:
    //  line no 186 , L69115782 , bytecode index = 
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4986);
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
    //     L69115782 in labeltable is :L69115782
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 186;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L507479765:
    //  line no 190 , L507479765 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[8].i;
    // invokespecial java/lang/String.<init>([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3CII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
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

void bridge_java_io_DataInputStream_readUTF__Ljava_io_DataInputStream_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_DataInputStream_readUTF__Ljava_io_DataInputStream_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 3
// args: 1
s64 func_java_io_DataInputStream_skip__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3217, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 195 , L1751325469 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 195;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    stack[sp].j = local[1].j;
    sp += 2;
    // invokevirtual java/io/InputStream.skip(J)J
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 66, 3);
        stack[sp].j = __func_p(runtime, stack[sp + 0].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_io_DataInputStream_skip__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_io_DataInputStream_skip__J_J(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_io_DataInputStream_available___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3218, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 200 , L10536382 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 200;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    // invokevirtual java/io/InputStream.available()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 4);
        stack[sp].i = __func_p(runtime);
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

void bridge_java_io_DataInputStream_available___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_available___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_io_DataInputStream_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3219, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 205 , L351249017 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 205;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    // invokevirtual java/io/InputStream.close()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 5);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 206 , L149526537 , bytecode index = 
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

void bridge_java_io_DataInputStream_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_DataInputStream_close___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_DataInputStream_mark__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3220, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 210 , L1295338046 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 210;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/InputStream.mark(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 66, 6);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 211 , L614516107 , bytecode index = 
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

void bridge_java_io_DataInputStream_mark__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_DataInputStream_mark__I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_io_DataInputStream_reset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3221, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 215 , L2134639513 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 215;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    // invokevirtual java/io/InputStream.reset()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 7);
        jthread_lock(runtime, __ins);
        __func_p(runtime);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 216 , L406831866 , bytecode index = 
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

void bridge_java_io_DataInputStream_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_DataInputStream_reset___V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_io_DataInputStream_markSupported___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3222, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 220 , L856937591 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 220;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/DataInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_io_DataInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    // invokevirtual java/io/InputStream.markSupported()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 8);
        stack[sp].i = __func_p(runtime);
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

void bridge_java_io_DataInputStream_markSupported___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_DataInputStream_markSupported___Z(runtime, ins);
}


