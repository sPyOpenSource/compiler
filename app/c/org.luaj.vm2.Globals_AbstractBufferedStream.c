// CLASS: org/luaj/vm2/Globals$AbstractBufferedStream extends java/io/InputStream
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Globals_00024AbstractBufferedStream_static {};



__refer arr_vmtable_org_luaj_vm2_Globals_00024AbstractBufferedStream_from_org_luaj_vm2_Globals_00024AbstractBufferedStream[] = {
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_avail___I,  //0
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I,  //1
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I,  //2
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I,  //3
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J,  //4
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I  //5
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024AbstractBufferedStream_from_java_io_InputStream[] = {
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I,  //0
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I,  //1
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I,  //2
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J,  //3
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I,  //4
    func_java_io_InputStream_close___V,  //5
    func_java_io_InputStream_mark__I_V,  //6
    func_java_io_InputStream_reset___V,  //7
    func_java_io_InputStream_markSupported___Z  //8
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024AbstractBufferedStream_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_Globals_00024AbstractBufferedStream[] = {
    {100, 6, arr_vmtable_org_luaj_vm2_Globals_00024AbstractBufferedStream_from_org_luaj_vm2_Globals_00024AbstractBufferedStream}, //0
    {66, 9, arr_vmtable_org_luaj_vm2_Globals_00024AbstractBufferedStream_from_java_io_InputStream}, //1
    {5, 10, arr_vmtable_org_luaj_vm2_Globals_00024AbstractBufferedStream_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_Globals_00024AbstractBufferedStream__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 546, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 347 , L1034568234 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 347;
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
    //  line no 346 , L835227336 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp + 0].obj)->i_1 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/Globals$AbstractBufferedStream j I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp + 0].obj)->j_2 = stack[sp + 1].i;
    ; 
    //  line no 348 , L482082765 , bytecode index = 
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
    // putfield org/luaj/vm2/Globals$AbstractBufferedStream b [B
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp + 0].obj)->b_0 = rstack[sp + 1].obj;
    ; 
    //  line no 349 , L667821226 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024AbstractBufferedStream__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream__init___I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_org_luaj_vm2_Globals_00024AbstractBufferedStream_avail___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 547, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_Globals_00024AbstractBufferedStream_avail___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024AbstractBufferedStream_avail___I(runtime, ins);
}


// locals: 2
// stack: 6
// args: 0
s32 func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 548, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 352 , L1028780142 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 352;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Globals$AbstractBufferedStream.avail()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 100, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 353 , L2128029086 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  > 0) goto L686466458;
    // iconst_-1
    stack[sp++].i = -1;
    goto L875016237;
    L686466458:
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->i_1;
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
    // putfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp + 0].obj)->i_1 = stack[sp + 1].i;
    // arrload s8  ,  L686466458 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    L875016237:
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

void bridge_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s32 func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 549, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 356 , L1107024580 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 356;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1107024580
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokevirtual org/luaj/vm2/Globals$AbstractBufferedStream.read([BII)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 100, 3);
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

void bridge_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I(runtime, ins);
}


// locals: 6
// stack: 5
// args: 3
s32 func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 550, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 359 , L904861801 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 359;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Globals$AbstractBufferedStream.avail()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 100, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 360 , L204715855 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  > 0) goto L318857719;
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L318857719:
    //  line no 361 , L318857719 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
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
    //  line no 362 , L745962066 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
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
    //  line no 363 , L1637290981 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp + 0].obj)->i_1 = stack[sp + 1].i;
    ; 
    //  line no 364 , L1888442711 , bytecode index = 
    stack[sp++].i = local[5].i;
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

void bridge_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 5
// stack: 5
// args: 1
s64 func_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 551, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 367 , L1998767043 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 367;
    stack[sp].j = local[1].j;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
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
    local[3].j = stack[sp].j;
    ; 
    //  line no 368 , L787738361 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp].j = local[3].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // putfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp + 0].obj)->i_1 = stack[sp + 1].i;
    ; 
    //  line no 369 , L607932305 , bytecode index = 
    stack[sp].j = local[3].j;
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

void bridge_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 552, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 372 , L1642030774 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 372;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$AbstractBufferedStream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024AbstractBufferedStream*)rstack[sp - 1].obj)->i_1;
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

void bridge_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I(runtime, ins);
}


