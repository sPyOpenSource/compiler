// CLASS: java/security/DigestInputStream extends java/io/FilterInputStream
#include "metadata.h"


// generation
// globals
//struct java_security_DigestInputStream_static {};



__refer arr_vmtable_java_security_DigestInputStream_from_java_security_DigestInputStream[] = {
    func_java_security_DigestInputStream_getMessageDigest___Ljava_security_MessageDigest_2,  //0
    func_java_security_DigestInputStream_setMessageDigest__Ljava_security_MessageDigest_2_V,  //1
    func_java_security_DigestInputStream_read___I,  //2
    func_java_security_DigestInputStream_read___3BII_I,  //3
    func_java_security_DigestInputStream_on__Z_V,  //4
    func_java_security_DigestInputStream_toString___Ljava_lang_String_2  //5
};
__refer arr_vmtable_java_security_DigestInputStream_from_java_io_FilterInputStream[] = {
    func_java_io_FilterInputStream_available___I,  //0
    func_java_io_FilterInputStream_close___V,  //1
    func_java_io_FilterInputStream_mark__I_V,  //2
    func_java_io_FilterInputStream_markSupported___Z,  //3
    func_java_security_DigestInputStream_read___I,  //4
    func_java_io_FilterInputStream_read___3B_I,  //5
    func_java_security_DigestInputStream_read___3BII_I,  //6
    func_java_io_FilterInputStream_reset___V,  //7
    func_java_io_FilterInputStream_skip__J_J  //8
};
__refer arr_vmtable_java_security_DigestInputStream_from_java_io_InputStream[] = {
    func_java_io_FilterInputStream_available___I,  //0
    func_java_io_FilterInputStream_close___V,  //1
    func_java_io_FilterInputStream_markSupported___Z,  //2
    func_java_io_FilterInputStream_mark__I_V,  //3
    func_java_security_DigestInputStream_read___I,  //4
    func_java_security_DigestInputStream_read___3BII_I,  //5
    func_java_io_FilterInputStream_read___3B_I,  //6
    func_java_io_FilterInputStream_reset___V,  //7
    func_java_io_FilterInputStream_skip__J_J  //8
};
__refer arr_vmtable_java_security_DigestInputStream_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_security_DigestInputStream_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_security_DigestInputStream[] = {
    {176, 6, arr_vmtable_java_security_DigestInputStream_from_java_security_DigestInputStream}, //0
    {177, 9, arr_vmtable_java_security_DigestInputStream_from_java_io_FilterInputStream}, //1
    {174, 9, arr_vmtable_java_security_DigestInputStream_from_java_io_InputStream}, //2
    {10, 11, arr_vmtable_java_security_DigestInputStream_from_java_lang_Object}, //3
};



// locals: 3
// stack: 2
// args: 2
void func_java_security_DigestInputStream__init___Ljava_io_InputStream_2Ljava_security_MessageDigest_2_V(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_security_MessageDigest* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 445, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 67 , L1261764601 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 67;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/io/FilterInputStream.<init>(Ljava/io/InputStream;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_io_FilterInputStream__init___Ljava_io_InputStream_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 55 , L294111720 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/security/DigestInputStream state Z
    sp -= 2;
    ((struct java_security_DigestInputStream*)rstack[sp + 0].obj)->state_2 = stack[sp + 1].i;
    ; 
    //  line no 69 , L310016558 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/security/DigestInputStream digest Ljava/security/MessageDigest;
    sp -= 2;
    ((struct java_security_DigestInputStream*)rstack[sp + 0].obj)->digest_1 = rstack[sp + 1].obj;
    ; 
    //  line no 70 , L335580595 , bytecode index = 
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

void bridge_java_security_DigestInputStream__init___Ljava_io_InputStream_2Ljava_security_MessageDigest_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DigestInputStream__init___Ljava_io_InputStream_2Ljava_security_MessageDigest_2_V(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_security_MessageDigest* func_java_security_DigestInputStream_getMessageDigest___Ljava_security_MessageDigest_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 79 , L1472216456 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DigestInputStream digest Ljava/security/MessageDigest;
    rstack[sp - 1].obj = ((struct java_security_DigestInputStream*)rstack[sp - 1].obj)->digest_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_security_DigestInputStream_getMessageDigest___Ljava_security_MessageDigest_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_DigestInputStream_getMessageDigest___Ljava_security_MessageDigest_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_security_DigestInputStream_setMessageDigest__Ljava_security_MessageDigest_2_V(JThreadRuntime *runtime, struct java_security_MessageDigest* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    rlocal[0].obj = p0;
    ; 
    //  line no 89 , L114818087 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/security/DigestInputStream digest Ljava/security/MessageDigest;
    sp -= 2;
    ((struct java_security_DigestInputStream*)rstack[sp + 0].obj)->digest_1 = rstack[sp + 1].obj;
    ; 
    //  line no 90 , L1168924571 , bytecode index = 
    return;
    ; 
}

void bridge_java_security_DigestInputStream_setMessageDigest__Ljava_security_MessageDigest_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DigestInputStream_setMessageDigest__Ljava_security_MessageDigest_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
s32 func_java_security_DigestInputStream_read___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 448, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 105 , L1368173251 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 105;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DigestInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_security_DigestInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 174, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 107 , L1745043985 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DigestInputStream state Z
    stack[sp - 1].i = ((struct java_security_DigestInputStream*)rstack[sp - 1].obj)->state_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1333041165;
    stack[sp++].i = local[1].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1333041165;
    ; 
    //  line no 108 , L1815556070 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DigestInputStream digest Ljava/security/MessageDigest;
    rstack[sp - 1].obj = ((struct java_security_DigestInputStream*)rstack[sp - 1].obj)->digest_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // invokevirtual java/security/MessageDigest.update(B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 175, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1333041165:
    //  line no 110 , L1333041165 , bytecode index = 
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

void bridge_java_security_DigestInputStream_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_DigestInputStream_read___I(runtime, ins);
}


// locals: 5
// stack: 4
// args: 3
s32 func_java_security_DigestInputStream_read___3BII_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 449, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 129 , L708348097 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 129;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DigestInputStream in Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct java_security_DigestInputStream*)rstack[sp - 1].obj)->in_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual java/io/InputStream.read([BII)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 174, 5);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 131 , L1097324923 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DigestInputStream state Z
    stack[sp - 1].i = ((struct java_security_DigestInputStream*)rstack[sp - 1].obj)->state_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L351962798;
    stack[sp++].i = local[4].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L351962798;
    ; 
    //  line no 132 , L115433442 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DigestInputStream digest Ljava/security/MessageDigest;
    rstack[sp - 1].obj = ((struct java_security_DigestInputStream*)rstack[sp - 1].obj)->digest_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual java/security/MessageDigest.update([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 175, 2);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L351962798:
    //  line no 134 , L351962798 , bytecode index = 
    stack[sp++].i = local[4].i;
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

void bridge_java_security_DigestInputStream_read___3BII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_DigestInputStream_read___3BII_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 2
// args: 1
void func_java_security_DigestInputStream_on__Z_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    local[0].i = p0;
    ; 
    //  line no 145 , L388104475 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/security/DigestInputStream state Z
    sp -= 2;
    ((struct java_security_DigestInputStream*)rstack[sp + 0].obj)->state_2 = stack[sp + 1].i;
    ; 
    //  line no 146 , L1470966439 , bytecode index = 
    return;
    ; 
}

void bridge_java_security_DigestInputStream_on__Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DigestInputStream_on__Z_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_java_security_DigestInputStream_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 451, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 155 , L1042307502 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 155;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1106);
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
    // getfield java/security/DigestInputStream digest Ljava/security/MessageDigest;
    rstack[sp - 1].obj = ((struct java_security_DigestInputStream*)rstack[sp - 1].obj)->digest_1;
    sp += 0;
    // invokevirtual java/security/MessageDigest.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 175, 7);
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

void bridge_java_security_DigestInputStream_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_DigestInputStream_toString___Ljava_lang_String_2(runtime, ins);
}


