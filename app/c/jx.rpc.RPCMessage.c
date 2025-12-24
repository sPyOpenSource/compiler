// CLASS: jx/rpc/RPCMessage extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_rpc_RPCMessage_static {s32 SWITCH_1RPCCall_0; s32 SWITCH_1RPCReply_1;  };
struct jx_rpc_RPCMessage_static static_var_jx_rpc_RPCMessage = {0, 0};


__refer arr_vmtable_jx_rpc_RPCMessage_from_jx_rpc_RPCMessage[] = {
    func_jx_rpc_RPCMessage_getID___I  //0
};
__refer arr_vmtable_jx_rpc_RPCMessage_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_rpc_RPCMessage_from_jx_rpc_RPCData[] = {
    NULL
};
VMTable vmtable_jx_rpc_RPCMessage[] = {
    {55, 1, arr_vmtable_jx_rpc_RPCMessage_from_jx_rpc_RPCMessage}, //0
    {10, 11, arr_vmtable_jx_rpc_RPCMessage_from_java_lang_Object}, //1
    {15, 0, arr_vmtable_jx_rpc_RPCMessage_from_jx_rpc_RPCData}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_jx_rpc_RPCMessage__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 536, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 12 , L149225732 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 12;
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

void bridge_jx_rpc_RPCMessage__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpc_RPCMessage__init____V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_jx_rpc_RPCMessage__init___II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 537, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 13 , L1870209957 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 14 , L1957099969 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield jx/rpc/RPCMessage xid I
    sp -= 2;
    ((struct jx_rpc_RPCMessage*)rstack[sp + 0].obj)->xid_2 = stack[sp + 1].i;
    ; 
    //  line no 15 , L1424698224 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield jx/rpc/RPCMessage msgType I
    sp -= 2;
    ((struct jx_rpc_RPCMessage*)rstack[sp + 0].obj)->msgType_3 = stack[sp + 1].i;
    ; 
    //  line no 16 , L1168340825 , bytecode index = 
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

void bridge_jx_rpc_RPCMessage__init___II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpc_RPCMessage__init___II_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 1
// args: 0
s32 func_jx_rpc_RPCMessage_getID___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 18 , L550147359 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/rpc/RPCMessage xid I
    stack[sp - 1].i = ((struct jx_rpc_RPCMessage*)rstack[sp - 1].obj)->xid_2;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_jx_rpc_RPCMessage_getID___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_rpc_RPCMessage_getID___I(runtime, ins);
}


