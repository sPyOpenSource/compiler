// CLASS: jx/rpcsvc/nfs2/DirOpResError extends jx/rpcsvc/nfs2/DirOpRes
#include "metadata.h"


// generation
// globals
//struct jx_rpcsvc_nfs2_DirOpResError_static {};



__refer arr_vmtable_jx_rpcsvc_nfs2_DirOpResError_from_jx_rpcsvc_nfs2_DirOpResError[] = {
    NULL
};
__refer arr_vmtable_jx_rpcsvc_nfs2_DirOpResError_from_jx_rpcsvc_nfs2_DirOpRes[] = {
    NULL
};
__refer arr_vmtable_jx_rpcsvc_nfs2_DirOpResError_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_rpcsvc_nfs2_DirOpResError_from_jx_rpc_RPCData[] = {
    NULL
};
VMTable vmtable_jx_rpcsvc_nfs2_DirOpResError[] = {
    {268, 0, arr_vmtable_jx_rpcsvc_nfs2_DirOpResError_from_jx_rpcsvc_nfs2_DirOpResError}, //0
    {206, 0, arr_vmtable_jx_rpcsvc_nfs2_DirOpResError_from_jx_rpcsvc_nfs2_DirOpRes}, //1
    {10, 11, arr_vmtable_jx_rpcsvc_nfs2_DirOpResError_from_java_lang_Object}, //2
    {15, 0, arr_vmtable_jx_rpcsvc_nfs2_DirOpResError_from_jx_rpc_RPCData}, //3
};



// locals: 1
// stack: 2
// args: 0
void func_jx_rpcsvc_nfs2_DirOpResError__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 716, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 6 , L1620409359 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 6;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 99
    stack[sp++].i = 99;
    // invokespecial jx/rpcsvc/nfs2/DirOpRes.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rpcsvc_nfs2_DirOpRes__init___I_V(runtime, stack[sp + 0].i);
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

void bridge_jx_rpcsvc_nfs2_DirOpResError__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpcsvc_nfs2_DirOpResError__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_rpcsvc_nfs2_DirOpResError__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 717, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 7 , L264978436 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial jx/rpcsvc/nfs2/DirOpRes.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_rpcsvc_nfs2_DirOpRes__init___I_V(runtime, stack[sp + 0].i);
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

void bridge_jx_rpcsvc_nfs2_DirOpResError__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpcsvc_nfs2_DirOpResError__init___I_V(runtime, ins);
}


