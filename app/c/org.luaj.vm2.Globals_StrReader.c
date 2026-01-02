// CLASS: org/luaj/vm2/Globals$StrReader extends java/io/Reader
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Globals_00024StrReader_static {};



__refer arr_vmtable_org_luaj_vm2_Globals_00024StrReader_from_org_luaj_vm2_Globals_00024StrReader[] = {
    func_org_luaj_vm2_Globals_00024StrReader_close___V,  //0
    func_org_luaj_vm2_Globals_00024StrReader_read___I,  //1
    func_org_luaj_vm2_Globals_00024StrReader_read___3CII_I  //2
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024StrReader_from_java_io_Reader[] = {
    func_org_luaj_vm2_Globals_00024StrReader_read___I,  //0
    func_java_io_Reader_read___3C_I,  //1
    func_org_luaj_vm2_Globals_00024StrReader_read___3CII_I,  //2
    func_java_io_Reader_skip__J_J,  //3
    func_java_io_Reader_ready___Z,  //4
    func_java_io_Reader_markSupported___Z,  //5
    func_java_io_Reader_mark__I_V,  //6
    func_java_io_Reader_reset___V,  //7
    func_org_luaj_vm2_Globals_00024StrReader_close___V  //8
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024StrReader_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_Globals_00024StrReader[] = {
    {161, 3, arr_vmtable_org_luaj_vm2_Globals_00024StrReader_from_org_luaj_vm2_Globals_00024StrReader}, //0
    {162, 9, arr_vmtable_org_luaj_vm2_Globals_00024StrReader_from_java_io_Reader}, //1
    {5, 10, arr_vmtable_org_luaj_vm2_Globals_00024StrReader_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_Globals_00024StrReader__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 845, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 323 , L1616359099 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 323;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/Reader.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
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
    //  line no 321 , L1676605578 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/Globals$StrReader i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp + 0].obj)->i_4 = stack[sp + 1].i;
    ; 
    //  line no 324 , L1394940518 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/Globals$StrReader s Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp + 0].obj)->s_3 = rstack[sp + 1].obj;
    ; 
    //  line no 325 , L1750286943 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    // putfield org/luaj/vm2/Globals$StrReader n I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp + 0].obj)->n_5 = stack[sp + 1].i;
    ; 
    //  line no 326 , L892083096 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024StrReader__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024StrReader__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_Globals_00024StrReader_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 846, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 328 , L1520387953 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 328;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$StrReader n I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->n_5;
    sp += 0;
    // putfield org/luaj/vm2/Globals$StrReader i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp + 0].obj)->i_4 = stack[sp + 1].i;
    ; 
    //  line no 329 , L674019271 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_00024StrReader_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals_00024StrReader_close___V(runtime, ins);
}


// locals: 1
// stack: 5
// args: 0
s32 func_org_luaj_vm2_Globals_00024StrReader_read___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 847, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 331 , L1221991240 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 331;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$StrReader i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->i_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$StrReader n I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->n_5;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1758624236;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$StrReader s Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->s_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Globals$StrReader i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->i_4;
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
    // putfield org/luaj/vm2/Globals$StrReader i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp + 0].obj)->i_4 = stack[sp + 1].i;
    // invokevirtual java/lang/String.charAt(I)C
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        u16 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L630028734;
    L1758624236:
    // iconst_-1
    stack[sp++].i = -1;
    L630028734:
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

void bridge_org_luaj_vm2_Globals_00024StrReader_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024StrReader_read___I(runtime, ins);
}


// locals: 5
// stack: 4
// args: 3
s32 func_org_luaj_vm2_Globals_00024StrReader_read___3CII_I(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 848, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 334 , L1812823171 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 334;
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L392918519:
    //  line no 335 , L392918519 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1499840045;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$StrReader i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->i_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$StrReader n I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->n_5;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1499840045;
    ; 
    //  line no 336 , L67749199 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$StrReader s Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->s_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals$StrReader i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->i_4;
    sp += 0;
    // invokevirtual java/lang/String.charAt(I)C
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        u16 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore u16  ,  L67749199 bc index = 
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
    //  line no 335 , L65488937 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Globals$StrReader i I
    stack[sp - 1].i = ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp - 1].obj)->i_4;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Globals$StrReader i I
    sp -= 2;
    ((struct org_luaj_vm2_Globals_00024StrReader*)rstack[sp + 0].obj)->i_4 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L392918519;
    L1499840045:
    //  line no 337 , L1499840045 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  > 0) goto L1332691311;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  != 0) goto L999230073;
    L1332691311:
    stack[sp++].i = local[4].i;
    goto L1910936570;
    L999230073:
    // iconst_-1
    stack[sp++].i = -1;
    L1910936570:
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

void bridge_org_luaj_vm2_Globals_00024StrReader_read___3CII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Globals_00024StrReader_read___3CII_I(runtime, ins, para[0].i, para[1].i);
}


