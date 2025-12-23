// CLASS: jx/net/protocol/tcp/TCPSocketState extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_net_protocol_tcp_TCPSocketState_static {};



__refer arr_vmtable_jx_net_protocol_tcp_TCPSocketState_from_jx_net_protocol_tcp_TCPSocketState[] = {
    NULL
};
__refer arr_vmtable_jx_net_protocol_tcp_TCPSocketState_from_java_lang_Object[] = {
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
VMTable vmtable_jx_net_protocol_tcp_TCPSocketState[] = {
    {101, 0, arr_vmtable_jx_net_protocol_tcp_TCPSocketState_from_jx_net_protocol_tcp_TCPSocketState}, //0
    {10, 11, arr_vmtable_jx_net_protocol_tcp_TCPSocketState_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_jx_net_protocol_tcp_TCPSocketState__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 303, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 3 , L391183339 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 3;
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

void bridge_jx_net_protocol_tcp_TCPSocketState__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_protocol_tcp_TCPSocketState__init____V(runtime, ins);
}


