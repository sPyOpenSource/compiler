// CLASS: org/luaj/vm2/Globals$BufferedStream extends org/luaj/vm2/Globals$AbstractBufferedStream
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Globals_00024BufferedStream_static {};



__refer arr_vmtable_org_luaj_vm2_Globals_00024BufferedStream_from_org_luaj_vm2_Globals_00024BufferedStream[] = {
    func_org_luaj_vm2_Globals_00024BufferedStream_avail___I,  //0
    func_org_luaj_vm2_Globals_00024BufferedStream_close___V,  //1
    func_org_luaj_vm2_Globals_00024BufferedStream_mark__I_V,  //2
    func_org_luaj_vm2_Globals_00024BufferedStream_markSupported___Z,  //3
    func_org_luaj_vm2_Globals_00024BufferedStream_reset___V  //4
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024BufferedStream_from_org_luaj_vm2_Globals_00024AbstractBufferedStream[] = {
    func_org_luaj_vm2_Globals_00024BufferedStream_avail___I,  //0
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I,  //1
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I,  //2
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I,  //3
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J,  //4
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I  //5
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024BufferedStream_from_java_io_InputStream[] = {
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I,  //0
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I,  //1
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I,  //2
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J,  //3
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I,  //4
    func_org_luaj_vm2_Globals_00024BufferedStream_close___V,  //5
    func_org_luaj_vm2_Globals_00024BufferedStream_mark__I_V,  //6
    func_org_luaj_vm2_Globals_00024BufferedStream_reset___V,  //7
    func_org_luaj_vm2_Globals_00024BufferedStream_markSupported___Z  //8
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024BufferedStream_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_Globals_00024BufferedStream[] = {
    {183, 5, arr_vmtable_org_luaj_vm2_Globals_00024BufferedStream_from_org_luaj_vm2_Globals_00024BufferedStream}, //0
    {100, 6, arr_vmtable_org_luaj_vm2_Globals_00024BufferedStream_from_org_luaj_vm2_Globals_00024AbstractBufferedStream}, //1
    {66, 9, arr_vmtable_org_luaj_vm2_Globals_00024BufferedStream_from_java_io_InputStream}, //2
    {5, 10, arr_vmtable_org_luaj_vm2_Globals_00024BufferedStream_from_java_lang_Object}, //3
};



// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_Globals_00024BufferedStream__init___Ljava_io_InputStream_2_V(JThreadRuntime *runtime, struct java_io_InputStream* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 934, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 416 , L1955990522 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 416;
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 128
    stack[sp++].i = 128;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/Globals$BufferedStream.<init>(ILjava/io/InputStream;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024BufferedStream__init___ILjava_io_InputStream_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 417 , L69673470 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024BufferedStream__init___Ljava_io_InputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024BufferedStream__init___Ljava_io_InputStream_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_Globals_00024BufferedStream__init___ILjava_io_InputStream_2_V(JThreadRuntime *runtime, s32 p0, struct java_io_InputStream* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 935, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 419 , L527211736 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 419;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial org/luaj/vm2/Globals$AbstractBufferedStream.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024AbstractBufferedStream__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 420 , L1533123860 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/Globals$BufferedStream s Ljava/io/InputStream;
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp + 0].obj)->s_3 = rstack[sp + 1].obj;
    ; 
    //  line no 421 , L1718906711 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024BufferedStream__init___ILjava_io_InputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024BufferedStream__init___ILjava_io_InputStream_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 5
// args: 0
s32 func_org_luaj_vm2_Globals_00024BufferedStream_avail___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 936, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 423 , L2134271532 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 423;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L686349795;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L686349795:
    //  line no 424 , L686349795 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    // arraylength  label  L686349795
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1831010686;
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
    // putfield org/luaj/vm2/Globals$BufferedStream j I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp + 0].obj)->j_2 = stack[sp + 1].i;
    // putfield org/luaj/vm2/Globals$BufferedStream i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp + 0].obj)->i_1 = stack[sp + 1].i;
    L1831010686:
    //  line no 426 , L1831010686 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream s Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->s_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    // arraylength  label  L1831010686
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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
    local[1].i = stack[--sp].i;
    ; 
    //  line no 427 , L1423768154 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L404222443;
    ; 
    //  line no 428 , L1987977423 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L404222443:
    //  line no 429 , L404222443 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L61073295;
    ; 
    //  line no 430 , L807322507 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream s Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->s_3;
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
    local[2].i = stack[--sp].i;
    ; 
    //  line no 431 , L396485834 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  >= 0) goto L283039401;
    ; 
    //  line no 432 , L207471778 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L283039401:
    //  line no 433 , L283039401 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L283039401 bc index = 
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
    //  line no 434 , L1243171897 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[1].i = stack[--sp].i;
    L61073295:
    //  line no 436 , L61073295 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Globals$BufferedStream j I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp + 0].obj)->j_2 = stack[sp + 1].i;
    ; 
    //  line no 437 , L1376151044 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024BufferedStream_avail___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024BufferedStream_avail___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_Globals_00024BufferedStream_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 937, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 440 , L1443967876 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 440;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream s Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->s_3;
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
    //  line no 441 , L1449772539 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024BufferedStream_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024BufferedStream_close___V(runtime, ins);
}


// locals: 3
// stack: 6
// args: 1
void func_org_luaj_vm2_Globals_00024BufferedStream_mark__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 938, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 443 , L1603696865 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 443;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    if(stack[--sp].i  > 0) goto L12905860;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    // arraylength  label  L1603696865
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L412788346;
    L12905860:
    //  line no 444 , L12905860 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    // arraylength  label  L12905860
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1520267010;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L908084672;
    L1520267010:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    L908084672:
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 445 , L288306765 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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
    //  line no 446 , L1556867940 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Globals$BufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$BufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Globals$BufferedStream j I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp + 0].obj)->j_2 = stack[sp + 1].i;
    ; 
    //  line no 447 , L1839168128 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/Globals$BufferedStream i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp + 0].obj)->i_1 = stack[sp + 1].i;
    ; 
    //  line no 448 , L1495608502 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/Globals$BufferedStream b [B
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp + 0].obj)->b_0 = rstack[sp + 1].obj;
    L412788346:
    //  line no 450 , L412788346 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024BufferedStream_mark__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024BufferedStream_mark__I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_Globals_00024BufferedStream_markSupported___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 939, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 452 , L843299092 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 452;
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

void bridge_org_luaj_vm2_Globals_00024BufferedStream_markSupported___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024BufferedStream_markSupported___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_Globals_00024BufferedStream_reset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 940, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 455 , L1412322831 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 455;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/Globals$BufferedStream i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024BufferedStream*)rstack[sp + 0].obj)->i_1 = stack[sp + 1].i;
    ; 
    //  line no 456 , L1651262695 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024BufferedStream_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024BufferedStream_reset___V(runtime, ins);
}


