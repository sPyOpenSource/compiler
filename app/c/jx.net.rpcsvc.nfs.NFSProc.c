// CLASS: jx/net/rpcsvc/nfs/NFSProc extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_net_rpcsvc_nfs_NFSProc_static {s32 VERSION_0; s32 PROGRAM_1; s32 MID_1nullproc_10_2; s32 MID_1getattr_11_3; s32 MID_1setattr_12_4; s32 MID_1root_13_5; s32 MID_1lookup_14_6; s32 MID_1readlink_15_7; s32 MID_1read_16_8; s32 MID_1writeCache_17_9; s32 MID_1write_18_10; s32 MID_1create_19_11; s32 MID_1remove_110_12; s32 MID_1rename_111_13; s32 MID_1link_112_14; s32 MID_1symlink_113_15; s32 MID_1mkdir_114_16; s32 MID_1rmdir_115_17; s32 MID_1readdir_116_18; s32 MID_1statfs_117_19;  };
struct jx_net_rpcsvc_nfs_NFSProc_static static_var_jx_net_rpcsvc_nfs_NFSProc = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_jx_net_rpcsvc_nfs_NFSProc_from_jx_net_rpcsvc_nfs_NFSProc[] = {
    func_jx_net_rpcsvc_nfs_NFSProc_nullproc___V,  //0
    func_jx_net_rpcsvc_nfs_NFSProc_getattr__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_AttrStat_2,  //1
    func_jx_net_rpcsvc_nfs_NFSProc_setattr__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_AttrStat_2,  //2
    func_jx_net_rpcsvc_nfs_NFSProc_root___V,  //3
    func_jx_net_rpcsvc_nfs_NFSProc_lookup__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_DirOpRes_2,  //4
    func_jx_net_rpcsvc_nfs_NFSProc_readlink__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_ReadLinkRes_2,  //5
    func_jx_net_rpcsvc_nfs_NFSProc_read__Ljx_net_rpcsvc_nfs_FHandle_2III_Ljx_net_rpcsvc_nfs_ReadRes_2,  //6
    func_jx_net_rpcsvc_nfs_NFSProc_writeCache___V,  //7
    func_jx_net_rpcsvc_nfs_NFSProc_write__Ljx_net_rpcsvc_nfs_FHandle_2IIILjx_net_rpcsvc_nfs_NFSData_2_Ljx_net_rpcsvc_nfs_AttrStat_2,  //8
    func_jx_net_rpcsvc_nfs_NFSProc_create__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_DirOpRes_2,  //9
    func_jx_net_rpcsvc_nfs_NFSProc_remove__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2,  //10
    func_jx_net_rpcsvc_nfs_NFSProc_rename__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2,  //11
    func_jx_net_rpcsvc_nfs_NFSProc_link__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2,  //12
    func_jx_net_rpcsvc_nfs_NFSProc_symlink__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_DirPath_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_Stat_2,  //13
    func_jx_net_rpcsvc_nfs_NFSProc_mkdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_DirOpRes_2,  //14
    func_jx_net_rpcsvc_nfs_NFSProc_rmdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2,  //15
    func_jx_net_rpcsvc_nfs_NFSProc_readdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_NFSCookie_2I_Ljx_net_rpcsvc_nfs_ReadDirRes_2,  //16
    func_jx_net_rpcsvc_nfs_NFSProc_statfs__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_StatFSRes_2  //17
};
__refer arr_vmtable_jx_net_rpcsvc_nfs_NFSProc_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_net_rpcsvc_nfs_NFSProc_from_jx_net_rpc_RPCProc[] = {
    NULL
};
VMTable vmtable_jx_net_rpcsvc_nfs_NFSProc[] = {
    {258, 18, arr_vmtable_jx_net_rpcsvc_nfs_NFSProc_from_jx_net_rpcsvc_nfs_NFSProc}, //0
    {10, 11, arr_vmtable_jx_net_rpcsvc_nfs_NFSProc_from_java_lang_Object}, //1
    {259, 0, arr_vmtable_jx_net_rpcsvc_nfs_NFSProc_from_jx_net_rpc_RPCProc}, //2
};



// locals: 0
// stack: 0
// args: 0
void func_jx_net_rpcsvc_nfs_NFSProc_nullproc___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 665, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_nullproc___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_rpcsvc_nfs_NFSProc_nullproc___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct jx_net_rpcsvc_nfs_AttrStat* func_jx_net_rpcsvc_nfs_NFSProc_getattr__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_AttrStat_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 666, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_getattr__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_AttrStat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_getattr__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_AttrStat_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct jx_net_rpcsvc_nfs_AttrStat* func_jx_net_rpcsvc_nfs_NFSProc_setattr__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_AttrStat_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_SAttr* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 667, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_setattr__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_AttrStat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_setattr__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_AttrStat_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_net_rpcsvc_nfs_NFSProc_root___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 668, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_root___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_rpcsvc_nfs_NFSProc_root___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct jx_net_rpcsvc_nfs_DirOpRes* func_jx_net_rpcsvc_nfs_NFSProc_lookup__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_Name* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 669, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_lookup__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_lookup__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct jx_net_rpcsvc_nfs_ReadLinkRes* func_jx_net_rpcsvc_nfs_NFSProc_readlink__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_ReadLinkRes_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 670, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_readlink__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_ReadLinkRes_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_readlink__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_ReadLinkRes_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 4
struct jx_net_rpcsvc_nfs_ReadRes* func_jx_net_rpcsvc_nfs_NFSProc_read__Ljx_net_rpcsvc_nfs_FHandle_2III_Ljx_net_rpcsvc_nfs_ReadRes_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 671, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_read__Ljx_net_rpcsvc_nfs_FHandle_2III_Ljx_net_rpcsvc_nfs_ReadRes_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_read__Ljx_net_rpcsvc_nfs_FHandle_2III_Ljx_net_rpcsvc_nfs_ReadRes_2(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_net_rpcsvc_nfs_NFSProc_writeCache___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 672, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_writeCache___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_net_rpcsvc_nfs_NFSProc_writeCache___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 5
struct jx_net_rpcsvc_nfs_AttrStat* func_jx_net_rpcsvc_nfs_NFSProc_write__Ljx_net_rpcsvc_nfs_FHandle_2IIILjx_net_rpcsvc_nfs_NFSData_2_Ljx_net_rpcsvc_nfs_AttrStat_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, s32 p1, s32 p2, s32 p3, struct jx_net_rpcsvc_nfs_NFSData* p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 673, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_write__Ljx_net_rpcsvc_nfs_FHandle_2IIILjx_net_rpcsvc_nfs_NFSData_2_Ljx_net_rpcsvc_nfs_AttrStat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_write__Ljx_net_rpcsvc_nfs_FHandle_2IIILjx_net_rpcsvc_nfs_NFSData_2_Ljx_net_rpcsvc_nfs_AttrStat_2(runtime, ins, para[0].i, para[1].i, para[2].i, para[3].obj);
}


// locals: 0
// stack: 0
// args: 3
struct jx_net_rpcsvc_nfs_DirOpRes* func_jx_net_rpcsvc_nfs_NFSProc_create__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_Name* p1, struct jx_net_rpcsvc_nfs_SAttr* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 674, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_create__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_create__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 0
// args: 2
struct jx_net_rpcsvc_nfs_Stat* func_jx_net_rpcsvc_nfs_NFSProc_remove__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_Name* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 675, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_remove__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_remove__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 4
struct jx_net_rpcsvc_nfs_Stat* func_jx_net_rpcsvc_nfs_NFSProc_rename__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_Name* p1, struct jx_net_rpcsvc_nfs_FHandle* p2, struct jx_net_rpcsvc_nfs_Name* p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 676, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_rename__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_rename__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(runtime, ins, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 0
// stack: 0
// args: 3
struct jx_net_rpcsvc_nfs_Stat* func_jx_net_rpcsvc_nfs_NFSProc_link__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_FHandle* p1, struct jx_net_rpcsvc_nfs_Name* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 677, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_link__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_link__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 0
// args: 4
struct jx_net_rpcsvc_nfs_Stat* func_jx_net_rpcsvc_nfs_NFSProc_symlink__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_DirPath_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_Name* p1, struct jx_net_rpcsvc_nfs_DirPath* p2, struct jx_net_rpcsvc_nfs_SAttr* p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 678, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_symlink__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_DirPath_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_symlink__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_DirPath_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_Stat_2(runtime, ins, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 0
// stack: 0
// args: 3
struct jx_net_rpcsvc_nfs_DirOpRes* func_jx_net_rpcsvc_nfs_NFSProc_mkdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_Name* p1, struct jx_net_rpcsvc_nfs_SAttr* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 679, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_mkdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_mkdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2Ljx_net_rpcsvc_nfs_SAttr_2_Ljx_net_rpcsvc_nfs_DirOpRes_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 0
// args: 2
struct jx_net_rpcsvc_nfs_Stat* func_jx_net_rpcsvc_nfs_NFSProc_rmdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_Name* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 680, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_rmdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_rmdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_Name_2_Ljx_net_rpcsvc_nfs_Stat_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 3
struct jx_net_rpcsvc_nfs_ReadDirRes* func_jx_net_rpcsvc_nfs_NFSProc_readdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_NFSCookie_2I_Ljx_net_rpcsvc_nfs_ReadDirRes_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0, struct jx_net_rpcsvc_nfs_NFSCookie* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 681, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_readdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_NFSCookie_2I_Ljx_net_rpcsvc_nfs_ReadDirRes_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_readdir__Ljx_net_rpcsvc_nfs_FHandle_2Ljx_net_rpcsvc_nfs_NFSCookie_2I_Ljx_net_rpcsvc_nfs_ReadDirRes_2(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 1
struct jx_net_rpcsvc_nfs_StatFSRes* func_jx_net_rpcsvc_nfs_NFSProc_statfs__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_StatFSRes_2(JThreadRuntime *runtime, struct jx_net_rpcsvc_nfs_FHandle* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 682, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rpcsvc_nfs_NFSProc_statfs__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_StatFSRes_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rpcsvc_nfs_NFSProc_statfs__Ljx_net_rpcsvc_nfs_FHandle_2_Ljx_net_rpcsvc_nfs_StatFSRes_2(runtime, ins);
}


