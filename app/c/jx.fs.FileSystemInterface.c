// CLASS: jx/fs/FileSystemInterface extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_fs_FileSystemInterface_static {};



__refer arr_vmtable_jx_fs_FileSystemInterface_from_jx_fs_FileSystemInterface[] = {
    func_jx_fs_FileSystemInterface_getName___Ljava_lang_String_2,  //0
    func_jx_fs_FileSystemInterface_getDefaultPermission___Ljx_fs_Permission_2,  //1
    func_jx_fs_FileSystemInterface_openRootDirectoryRO___Ljx_fs_FSObject_2,  //2
    func_jx_fs_FileSystemInterface_openRootDirectoryRW___Ljx_fs_FSObject_2,  //3
    func_jx_fs_FileSystemInterface_mount___V,  //4
    func_jx_fs_FileSystemInterface_unmount___V  //5
};
__refer arr_vmtable_jx_fs_FileSystemInterface_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_fs_FileSystemInterface_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_fs_FileSystemInterface[] = {
    {34, 6, arr_vmtable_jx_fs_FileSystemInterface_from_jx_fs_FileSystemInterface}, //0
    {10, 11, arr_vmtable_jx_fs_FileSystemInterface_from_java_lang_Object}, //1
    {35, 0, arr_vmtable_jx_fs_FileSystemInterface_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_jx_fs_FileSystemInterface_getName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 39, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_fs_FileSystemInterface_getName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_fs_FileSystemInterface_getName___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_fs_Permission* func_jx_fs_FileSystemInterface_getDefaultPermission___Ljx_fs_Permission_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 40, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_fs_FileSystemInterface_getDefaultPermission___Ljx_fs_Permission_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_fs_FileSystemInterface_getDefaultPermission___Ljx_fs_Permission_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_fs_FSObject* func_jx_fs_FileSystemInterface_openRootDirectoryRO___Ljx_fs_FSObject_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 41, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_fs_FileSystemInterface_openRootDirectoryRO___Ljx_fs_FSObject_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_fs_FileSystemInterface_openRootDirectoryRO___Ljx_fs_FSObject_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_fs_FSObject* func_jx_fs_FileSystemInterface_openRootDirectoryRW___Ljx_fs_FSObject_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 42, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_fs_FileSystemInterface_openRootDirectoryRW___Ljx_fs_FSObject_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_fs_FileSystemInterface_openRootDirectoryRW___Ljx_fs_FSObject_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_fs_FileSystemInterface_mount___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 43, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_fs_FileSystemInterface_mount___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_fs_FileSystemInterface_mount___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_fs_FileSystemInterface_unmount___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 44, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_fs_FileSystemInterface_unmount___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_fs_FileSystemInterface_unmount___V(runtime, ins);
}


