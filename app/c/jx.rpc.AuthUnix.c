// CLASS: jx/rpc/AuthUnix extends jx/rpc/Auth
#include "metadata.h"


// generation
// globals
//struct jx_rpc_AuthUnix_static {};



__refer arr_vmtable_jx_rpc_AuthUnix_from_jx_rpc_AuthUnix[] = {
    NULL
};
__refer arr_vmtable_jx_rpc_AuthUnix_from_jx_rpc_Auth[] = {
    NULL
};
__refer arr_vmtable_jx_rpc_AuthUnix_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_rpc_AuthUnix_from_jx_rpc_RPCData[] = {
    NULL
};
__refer arr_vmtable_jx_rpc_AuthUnix_from_jx_rpc_RPCOpaque[] = {
    NULL
};
VMTable vmtable_jx_rpc_AuthUnix[] = {
    {13, 0, arr_vmtable_jx_rpc_AuthUnix_from_jx_rpc_AuthUnix}, //0
    {14, 0, arr_vmtable_jx_rpc_AuthUnix_from_jx_rpc_Auth}, //1
    {10, 11, arr_vmtable_jx_rpc_AuthUnix_from_java_lang_Object}, //2
    {15, 0, arr_vmtable_jx_rpc_AuthUnix_from_jx_rpc_RPCData}, //3
    {16, 0, arr_vmtable_jx_rpc_AuthUnix_from_jx_rpc_RPCOpaque}, //4
};



// locals: 1
// stack: 2
// args: 0
void func_jx_rpc_AuthUnix__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 14, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 13 , L891095110 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/rpc/Auth.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rpc_Auth__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 4 , L2011482127 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield jx/rpc/AuthUnix id I
    sp -= 2;
    ((struct jx_rpc_AuthUnix*)rstack[sp + 0].obj)->id_3 = stack[sp + 1].i;
    ; 
    //  line no 14 , L905735620 , bytecode index = 
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

void bridge_jx_rpc_AuthUnix__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpc_AuthUnix__init____V(runtime, ins);
}


// locals: 5
// stack: 5
// args: 4
void func_jx_rpc_AuthUnix__init___Ljava_lang_String_2II_3I_V(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 15, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 15 , L577405636 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/rpc/Auth.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rpc_Auth__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 4 , L1931444790 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield jx/rpc/AuthUnix id I
    sp -= 2;
    ((struct jx_rpc_AuthUnix*)rstack[sp + 0].obj)->id_3 = stack[sp + 1].i;
    ; 
    //  line no 16 , L626742236 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/System.currentTimeMillis()J
    {
        sp -= 1;
        stack[sp].j = func_java_lang_System_currentTimeMillis___J(runtime, rstack[sp + 0].obj);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    stack[sp].j = 0x3e8L;
    sp += 2;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // putfield jx/rpc/AuthUnix stamp I
    sp -= 2;
    ((struct jx_rpc_AuthUnix*)rstack[sp + 0].obj)->stamp_4 = stack[sp + 1].i;
    ; 
    //  line no 17 , L500772834 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/rpc/AuthUnix machinename Ljava/lang/String;
    sp -= 2;
    ((struct jx_rpc_AuthUnix*)rstack[sp + 0].obj)->machinename_5 = rstack[sp + 1].obj;
    ; 
    //  line no 18 , L1800659519 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield jx/rpc/AuthUnix uid I
    sp -= 2;
    ((struct jx_rpc_AuthUnix*)rstack[sp + 0].obj)->uid_6 = stack[sp + 1].i;
    ; 
    //  line no 19 , L1691538257 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield jx/rpc/AuthUnix gid I
    sp -= 2;
    ((struct jx_rpc_AuthUnix*)rstack[sp + 0].obj)->gid_7 = stack[sp + 1].i;
    ; 
    //  line no 20 , L459848100 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield jx/rpc/AuthUnix gids [I
    sp -= 2;
    ((struct jx_rpc_AuthUnix*)rstack[sp + 0].obj)->gids_8 = rstack[sp + 1].obj;
    ; 
    //  line no 21 , L1335505684 , bytecode index = 
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

void bridge_jx_rpc_AuthUnix__init___Ljava_lang_String_2II_3I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpc_AuthUnix__init___Ljava_lang_String_2II_3I_V(runtime, ins, para[0].i, para[1].i, para[2].obj);
}


