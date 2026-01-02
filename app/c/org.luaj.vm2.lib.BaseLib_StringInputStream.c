// CLASS: org/luaj/vm2/lib/BaseLib$StringInputStream extends java/io/InputStream
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_BaseLib_00024StringInputStream_static {};



__refer arr_vmtable_org_luaj_vm2_lib_BaseLib_00024StringInputStream_from_org_luaj_vm2_lib_BaseLib_00024StringInputStream[] = {
    func_org_luaj_vm2_lib_BaseLib_00024StringInputStream_read___I  //0
};
__refer arr_vmtable_org_luaj_vm2_lib_BaseLib_00024StringInputStream_from_java_io_InputStream[] = {
    func_org_luaj_vm2_lib_BaseLib_00024StringInputStream_read___I,  //0
    func_java_io_InputStream_read___3B_I,  //1
    func_java_io_InputStream_read___3BII_I,  //2
    func_java_io_InputStream_skip__J_J,  //3
    func_java_io_InputStream_available___I,  //4
    func_java_io_InputStream_close___V,  //5
    func_java_io_InputStream_mark__I_V,  //6
    func_java_io_InputStream_reset___V,  //7
    func_java_io_InputStream_markSupported___Z  //8
};
__refer arr_vmtable_org_luaj_vm2_lib_BaseLib_00024StringInputStream_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_BaseLib_00024StringInputStream[] = {
    {65, 1, arr_vmtable_org_luaj_vm2_lib_BaseLib_00024StringInputStream_from_org_luaj_vm2_lib_BaseLib_00024StringInputStream}, //0
    {66, 9, arr_vmtable_org_luaj_vm2_lib_BaseLib_00024StringInputStream_from_java_io_InputStream}, //1
    {5, 10, arr_vmtable_org_luaj_vm2_lib_BaseLib_00024StringInputStream_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_lib_BaseLib_00024StringInputStream__init___Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 393, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 464 , L1226204845 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 464;
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
    //  line no 463 , L393040818 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/lib/BaseLib$StringInputStream remaining I
    sp -= 2;
    ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp + 0].obj)->remaining_3 = stack[sp + 1].i;
    ; 
    //  line no 465 , L158453976 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/lib/BaseLib$StringInputStream func Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp + 0].obj)->func_0 = rstack[sp + 1].obj;
    ; 
    //  line no 466 , L1368594774 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_BaseLib_00024StringInputStream__init___Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_BaseLib_00024StringInputStream__init___Lorg_luaj_vm2_LuaValue_2_V(runtime, ins);
}


// locals: 3
// stack: 6
// args: 0
s32 func_org_luaj_vm2_lib_BaseLib_00024StringInputStream_read___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 394, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 468 , L1447499999 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 468;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/BaseLib$StringInputStream remaining I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp - 1].obj)->remaining_3;
    sp += 0;
    if(stack[--sp].i  >= 0) goto L1371006431;
    ; 
    //  line no 469 , L413601558 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1371006431:
    //  line no 470 , L1371006431 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/BaseLib$StringInputStream remaining I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp - 1].obj)->remaining_3;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1658926803;
    ; 
    //  line no 471 , L210652080 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/BaseLib$StringInputStream func Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp - 1].obj)->func_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.call()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 101);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 472 , L1652149987 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isnil()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1107730949;
    ; 
    //  line no 473 , L700072760 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/lib/BaseLib$StringInputStream remaining I
    sp -= 2;
    ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp + 0].obj)->remaining_3 = stack[sp + 1].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1107730949:
    //  line no 474 , L1107730949 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strvalue()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 203);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 475 , L1461149300 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    // putfield org/luaj/vm2/lib/BaseLib$StringInputStream bytes [B
    sp -= 2;
    ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp + 0].obj)->bytes_1 = rstack[sp + 1].obj;
    ; 
    //  line no 476 , L2075495587 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    // putfield org/luaj/vm2/lib/BaseLib$StringInputStream offset I
    sp -= 2;
    ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp + 0].obj)->offset_2 = stack[sp + 1].i;
    ; 
    //  line no 477 , L206835546 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    // putfield org/luaj/vm2/lib/BaseLib$StringInputStream remaining I
    sp -= 2;
    ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp + 0].obj)->remaining_3 = stack[sp + 1].i;
    ; 
    //  line no 478 , L1997287019 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/BaseLib$StringInputStream remaining I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp - 1].obj)->remaining_3;
    sp += 0;
    if(stack[--sp].i  > 0) goto L1658926803;
    ; 
    //  line no 479 , L436546048 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1658926803:
    //  line no 481 , L1658926803 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/BaseLib$StringInputStream remaining I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp - 1].obj)->remaining_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/BaseLib$StringInputStream remaining I
    sp -= 2;
    ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp + 0].obj)->remaining_3 = stack[sp + 1].i;
    ; 
    //  line no 482 , L1300393335 , bytecode index = 
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/BaseLib$StringInputStream bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp - 1].obj)->bytes_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/BaseLib$StringInputStream offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp - 1].obj)->offset_2;
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
    // putfield org/luaj/vm2/lib/BaseLib$StringInputStream offset I
    sp -= 2;
    ((struct org_luaj_vm2_lib_BaseLib_00024StringInputStream*)rstack[sp + 0].obj)->offset_2 = stack[sp + 1].i;
    // arrload s8  ,  L1300393335 bc index = 
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

void bridge_org_luaj_vm2_lib_BaseLib_00024StringInputStream_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_BaseLib_00024StringInputStream_read___I(runtime, ins);
}


