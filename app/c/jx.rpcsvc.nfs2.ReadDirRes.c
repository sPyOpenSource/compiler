// CLASS: jx/rpcsvc/nfs2/ReadDirRes extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_rpcsvc_nfs2_ReadDirRes_static {s32 SWITCH_1ReadDirResOK_0; s32 SWITCH_1ReadDirResErrNoEnt_1; s32 SWITCH_1ReadDirResErrIO_2; s32 SWITCH_1ReadDirResErrAcces_3; s32 SWITCH_1ReadDirResErrNotDir_4; s32 SWITCH_1ReadDirResErrStale_5; s32 SWITCHDEFAULT_1ReadDirResError_6;  };
struct jx_rpcsvc_nfs2_ReadDirRes_static static_var_jx_rpcsvc_nfs2_ReadDirRes = {0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_jx_rpcsvc_nfs2_ReadDirRes_from_jx_rpcsvc_nfs2_ReadDirRes[] = {
    NULL
};
__refer arr_vmtable_jx_rpcsvc_nfs2_ReadDirRes_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_rpcsvc_nfs2_ReadDirRes_from_jx_rpc_RPCData[] = {
    NULL
};
VMTable vmtable_jx_rpcsvc_nfs2_ReadDirRes[] = {
    {275, 0, arr_vmtable_jx_rpcsvc_nfs2_ReadDirRes_from_jx_rpcsvc_nfs2_ReadDirRes}, //0
    {10, 11, arr_vmtable_jx_rpcsvc_nfs2_ReadDirRes_from_java_lang_Object}, //1
    {15, 0, arr_vmtable_jx_rpcsvc_nfs2_ReadDirRes_from_jx_rpc_RPCData}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_jx_rpcsvc_nfs2_ReadDirRes__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 861, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 18 , L446445803 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield jx/rpcsvc/nfs2/ReadDirRes status I
    sp -= 2;
    ((struct jx_rpcsvc_nfs2_ReadDirRes*)rstack[sp + 0].obj)->status_7 = stack[sp + 1].i;
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

void bridge_jx_rpcsvc_nfs2_ReadDirRes__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpcsvc_nfs2_ReadDirRes__init___I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_jx_rpcsvc_nfs2_ReadDirRes__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 862, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 19 , L1280603381 , bytecode index = 
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

void bridge_jx_rpcsvc_nfs2_ReadDirRes__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_rpcsvc_nfs2_ReadDirRes__init____V(runtime, ins);
}


