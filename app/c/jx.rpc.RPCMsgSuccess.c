// CLASS: jx/rpc/RPCMsgSuccess extends jx/rpc/RPCMsgAccepted
#include "metadata.h"


// generation
// globals
//struct jx_rpc_RPCMsgSuccess_static {};



__refer arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCMsgSuccess[] = {
    NULL
};
__refer arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCMsgAccepted[] = {
    NULL
};
__refer arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCReply[] = {
    NULL
};
__refer arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCMessage[] = {
    func_jx_rpc_RPCMessage_getID___I  //0
};
__refer arr_vmtable_jx_rpc_RPCMsgSuccess_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCData[] = {
    NULL
};
VMTable vmtable_jx_rpc_RPCMsgSuccess[] = {
    {52, 0, arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCMsgSuccess}, //0
    {53, 0, arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCMsgAccepted}, //1
    {54, 0, arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCReply}, //2
    {55, 1, arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCMessage}, //3
    {10, 11, arr_vmtable_jx_rpc_RPCMsgSuccess_from_java_lang_Object}, //4
    {15, 0, arr_vmtable_jx_rpc_RPCMsgSuccess_from_jx_rpc_RPCData}, //5
};



// locals: 1
// stack: 1
// args: 0
void func_jx_rpc_RPCMsgSuccess__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 173, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 5 , L199449817 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 5;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/rpc/RPCMsgAccepted.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rpc_RPCMsgAccepted__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_jx_rpc_RPCMsgSuccess__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpc_RPCMsgSuccess__init____V(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
void func_jx_rpc_RPCMsgSuccess__init___ILjx_rpc_Auth_2_V(JThreadRuntime *runtime, s32 p0, struct jx_rpc_Auth* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 174, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 8 , L1149377174 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 8;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial jx/rpc/RPCMsgAccepted.<init>(ILjx/rpc/Auth;I)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rpc_RPCMsgAccepted__init___ILjx_rpc_Auth_2I_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 9 , L171802996 , bytecode index = 
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

void bridge_jx_rpc_RPCMsgSuccess__init___ILjx_rpc_Auth_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpc_RPCMsgSuccess__init___ILjx_rpc_Auth_2_V(runtime, ins, para[0].obj);
}


