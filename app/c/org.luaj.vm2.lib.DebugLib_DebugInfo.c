// CLASS: org/luaj/vm2/lib/DebugLib$DebugInfo extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_DebugLib_00024DebugInfo_static {};



__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_00024DebugInfo_from_org_luaj_vm2_lib_DebugLib_00024DebugInfo[] = {
    func_org_luaj_vm2_lib_DebugLib_00024DebugInfo_funcinfo__Lorg_luaj_vm2_LuaFunction_2_V  //0
};
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_00024DebugInfo_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_DebugLib_00024DebugInfo[] = {
    {331, 1, arr_vmtable_org_luaj_vm2_lib_DebugLib_00024DebugInfo_from_org_luaj_vm2_lib_DebugLib_00024DebugInfo}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_lib_DebugLib_00024DebugInfo_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_lib_DebugLib_00024DebugInfo__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2193, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 473 , L1849941462 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 473;
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

void bridge_org_luaj_vm2_lib_DebugLib_00024DebugInfo__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024DebugInfo__init____V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
void func_org_luaj_vm2_lib_DebugLib_00024DebugInfo_funcinfo__Lorg_luaj_vm2_LuaFunction_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaFunction* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2194, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 489 , L758705661 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 489;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaFunction.isclosure()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L352830403;
    ; 
    //  line no 490 , L1700397528 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaFunction.checkclosure()Lorg/luaj/vm2/LuaClosure;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaClosure* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 45);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 491 , L204078646 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype source Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->source_6;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1712635211;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype source Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->source_6;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1294361489;
    L1712635211:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3888);
    L1294361489:
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo source Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->source_3 = rstack[sp + 1].obj;
    ; 
    //  line no 492 , L2017980204 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype linedefined I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->linedefined_7;
    sp += 0;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo linedefined I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->linedefined_5 = stack[sp + 1].i;
    ; 
    //  line no 493 , L995911260 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype lastlinedefined I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lastlinedefined_8;
    sp += 0;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo lastlinedefined I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->lastlinedefined_6 = stack[sp + 1].i;
    ; 
    //  line no 494 , L2028042905 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$DebugInfo linedefined I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp - 1].obj)->linedefined_5;
    sp += 0;
    if(stack[--sp].i  != 0) goto L103130367;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3889);
    goto L1104938392;
    L103130367:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3890);
    L1104938392:
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo what Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->what_2 = rstack[sp + 1].obj;
    ; 
    //  line no 495 , L426435961 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/Prototype.shortsource()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 128, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo short_src Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->short_1src_11 = rstack[sp + 1].obj;
    ; 
    //  line no 496 , L1781297535 , bytecode index = 
    goto L1099248281;
    L352830403:
    //  line no 497 , L352830403 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3891);
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo source Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->source_3 = rstack[sp + 1].obj;
    ; 
    //  line no 498 , L1624510452 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo linedefined I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->linedefined_5 = stack[sp + 1].i;
    ; 
    //  line no 499 , L777748410 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo lastlinedefined I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->lastlinedefined_6 = stack[sp + 1].i;
    ; 
    //  line no 500 , L662000775 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3892);
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo what Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->what_2 = rstack[sp + 1].obj;
    ; 
    //  line no 501 , L1326230282 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaFunction.name()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 19, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo short_src Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->short_1src_11 = rstack[sp + 1].obj;
    L1099248281:
    //  line no 503 , L1099248281 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024DebugInfo_funcinfo__Lorg_luaj_vm2_LuaFunction_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024DebugInfo_funcinfo__Lorg_luaj_vm2_LuaFunction_2_V(runtime, ins);
}


