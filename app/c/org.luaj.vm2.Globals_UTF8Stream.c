// CLASS: org/luaj/vm2/Globals$UTF8Stream extends org/luaj/vm2/Globals$AbstractBufferedStream
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Globals_00024UTF8Stream_static {};



__refer arr_vmtable_org_luaj_vm2_Globals_00024UTF8Stream_from_org_luaj_vm2_Globals_00024UTF8Stream[] = {
    func_org_luaj_vm2_Globals_00024UTF8Stream_avail___I,  //0
    func_org_luaj_vm2_Globals_00024UTF8Stream_close___V  //1
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024UTF8Stream_from_org_luaj_vm2_Globals_00024AbstractBufferedStream[] = {
    func_org_luaj_vm2_Globals_00024UTF8Stream_avail___I,  //0
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I,  //1
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I,  //2
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I,  //3
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J,  //4
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I  //5
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024UTF8Stream_from_java_io_InputStream[] = {
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___I,  //0
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3B_I,  //1
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_read___3BII_I,  //2
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_skip__J_J,  //3
    func_org_luaj_vm2_Globals_00024AbstractBufferedStream_available___I,  //4
    func_org_luaj_vm2_Globals_00024UTF8Stream_close___V,  //5
    func_java_io_InputStream_mark__I_V,  //6
    func_java_io_InputStream_reset___V,  //7
    func_java_io_InputStream_markSupported___Z  //8
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024UTF8Stream_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_Globals_00024UTF8Stream[] = {
    {288, 2, arr_vmtable_org_luaj_vm2_Globals_00024UTF8Stream_from_org_luaj_vm2_Globals_00024UTF8Stream}, //0
    {100, 6, arr_vmtable_org_luaj_vm2_Globals_00024UTF8Stream_from_org_luaj_vm2_Globals_00024AbstractBufferedStream}, //1
    {66, 9, arr_vmtable_org_luaj_vm2_Globals_00024UTF8Stream_from_java_io_InputStream}, //2
    {5, 10, arr_vmtable_org_luaj_vm2_Globals_00024UTF8Stream_from_java_lang_Object}, //3
};



// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_Globals_00024UTF8Stream__init___Ljava_io_Reader_2_V(JThreadRuntime *runtime, struct java_io_Reader* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2838, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 384 , L1215456927 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 384;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 96
    stack[sp++].i = 96;
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
    //  line no 381 , L1212098670 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield org/luaj/vm2/Globals$UTF8Stream c [C
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp + 0].obj)->c_3 = rstack[sp + 1].obj;
    ; 
    //  line no 385 , L1269909484 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/Globals$UTF8Stream r Ljava/io/Reader;
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp + 0].obj)->r_4 = rstack[sp + 1].obj;
    ; 
    //  line no 386 , L871550938 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024UTF8Stream__init___Ljava_io_Reader_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024UTF8Stream__init___Ljava_io_Reader_2_V(runtime, ins);
}


// locals: 3
// stack: 7
// args: 0
s32 func_org_luaj_vm2_Globals_00024UTF8Stream_avail___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2839, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 388 , L1503803534 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 388;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L409832049;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->i_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L409832049:
    //  line no 389 , L409832049 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream r Ljava/io/Reader;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->r_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream c [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->c_3;
    sp += 0;
    // invokevirtual java/io/Reader.read([C)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 162, 1);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 390 , L1036257977 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L766957197;
    ; 
    //  line no 391 , L1696136701 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L766957197:
    //  line no 392 , L766957197 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L299031853;
    ; 
    //  line no 393 , L215911532 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream r Ljava/io/Reader;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->r_4;
    sp += 0;
    // invokevirtual java/io/Reader.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 162, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 394 , L390537668 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  >= 0) goto L898810308;
    ; 
    //  line no 395 , L841894382 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L898810308:
    //  line no 396 , L898810308 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream c [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->c_3;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L898810308 bc index = 
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
    //  line no 397 , L1256918571 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[1].i = stack[--sp].i;
    L299031853:
    //  line no 399 , L299031853 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream c [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->c_3;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream b [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->b_0;
    sp += 0;
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
    // putfield org/luaj/vm2/Globals$UTF8Stream i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp + 0].obj)->i_1 = stack[sp + 1].i;
    // invokestatic org/luaj/vm2/LuaString.encodeToUtf8([CI[BI)I
    {
        sp -= 5;
        stack[sp].i = func_org_luaj_vm2_LuaString_encodeToUtf8___3CI_3BI_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Globals$UTF8Stream j I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp + 0].obj)->j_2 = stack[sp + 1].i;
    ; 
    //  line no 400 , L1686921139 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream j I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->j_2;
    sp += 0;
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

void bridge_org_luaj_vm2_Globals_00024UTF8Stream_avail___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024UTF8Stream_avail___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_Globals_00024UTF8Stream_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2840, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 403 , L118648358 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 403;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$UTF8Stream r Ljava/io/Reader;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024UTF8Stream*)rstack[sp - 1].obj)->r_4;
    sp += 0;
    // invokevirtual java/io/Reader.close()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 162, 8);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 404 , L354071225 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024UTF8Stream_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024UTF8Stream_close___V(runtime, ins);
}


