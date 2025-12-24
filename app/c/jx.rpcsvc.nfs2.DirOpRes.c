// CLASS: jx/rpcsvc/nfs2/DirOpRes extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_rpcsvc_nfs2_DirOpRes_static {s32 SWITCH_1DirOpResOK_0; s32 SWITCH_1DirOpResNoSuchFile_1; s32 SWITCH_1DirOpResErrStale_2; s32 SWITCH_1DirOpResErrIO_3; s32 SWITCH_1DirOpResErrNotDir_4; s32 SWITCH_1DirOpResErrAcces_5; s32 SWITCH_1DirOpResErrExist_6; s32 SWITCHDEFAULT_1DirOpResError_7;  };
struct jx_rpcsvc_nfs2_DirOpRes_static static_var_jx_rpcsvc_nfs2_DirOpRes = {0, 0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_jx_rpcsvc_nfs2_DirOpRes_from_jx_rpcsvc_nfs2_DirOpRes[] = {
    NULL
};
__refer arr_vmtable_jx_rpcsvc_nfs2_DirOpRes_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_rpcsvc_nfs2_DirOpRes_from_jx_rpc_RPCData[] = {
    NULL
};
VMTable vmtable_jx_rpcsvc_nfs2_DirOpRes[] = {
    {206, 0, arr_vmtable_jx_rpcsvc_nfs2_DirOpRes_from_jx_rpcsvc_nfs2_DirOpRes}, //0
    {10, 11, arr_vmtable_jx_rpcsvc_nfs2_DirOpRes_from_java_lang_Object}, //1
    {15, 0, arr_vmtable_jx_rpcsvc_nfs2_DirOpRes_from_jx_rpc_RPCData}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_jx_rpcsvc_nfs2_DirOpRes__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 509, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 19 , L33233312 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 19;
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

void bridge_jx_rpcsvc_nfs2_DirOpRes__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpcsvc_nfs2_DirOpRes__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_rpcsvc_nfs2_DirOpRes__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 510, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 20 , L1515403487 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield jx/rpcsvc/nfs2/DirOpRes status I
    sp -= 2;
    ((struct jx_rpcsvc_nfs2_DirOpRes*)rstack[sp + 0].obj)->status_8 = stack[sp + 1].i;
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

void bridge_jx_rpcsvc_nfs2_DirOpRes__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpcsvc_nfs2_DirOpRes__init___I_V(runtime, ins);
}


