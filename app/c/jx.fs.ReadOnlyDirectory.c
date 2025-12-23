// CLASS: jx/fs/ReadOnlyDirectory extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_fs_ReadOnlyDirectory_static {};



__refer arr_vmtable_jx_fs_ReadOnlyDirectory_from_jx_fs_ReadOnlyDirectory[] = {
    func_jx_fs_ReadOnlyDirectory_list____3Ljava_lang_String_2,  //0
    func_jx_fs_ReadOnlyDirectory_openRO__Ljava_lang_String_2_Ljx_fs_FSObject_2,  //1
    func_jx_fs_ReadOnlyDirectory_openRW__Ljava_lang_String_2_Ljx_fs_FSObject_2  //2
};
__refer arr_vmtable_jx_fs_ReadOnlyDirectory_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_fs_ReadOnlyDirectory_from_jx_fs_FSObject[] = {
    func_jx_fs_FSObject_getFileSystem___Ljx_fs_FileSystem_2,  //0
    func_jx_fs_FSObject_isFile___Z,  //1
    func_jx_fs_FSObject_isDirectory___Z,  //2
    func_jx_fs_FSObject_getPermission___Ljx_fs_Permission_2,  //3
    func_jx_fs_FSObject_getAttribute___Ljx_fs_FSAttribute_2,  //4
    func_jx_fs_FSObject_close___V,  //5
    func_jx_fs_FSObject_getLength___I,  //6
    func_jx_fs_FSObject_isValid___Z  //7
};
__refer arr_vmtable_jx_fs_ReadOnlyDirectory_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_fs_ReadOnlyDirectory[] = {
    {208, 3, arr_vmtable_jx_fs_ReadOnlyDirectory_from_jx_fs_ReadOnlyDirectory}, //0
    {10, 11, arr_vmtable_jx_fs_ReadOnlyDirectory_from_java_lang_Object}, //1
    {209, 8, arr_vmtable_jx_fs_ReadOnlyDirectory_from_jx_fs_FSObject}, //2
    {35, 0, arr_vmtable_jx_fs_ReadOnlyDirectory_from_jx_zero_Portal}, //3
};



// locals: 0
// stack: 0
// args: 0
JArray * func_jx_fs_ReadOnlyDirectory_list____3Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 514, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_fs_ReadOnlyDirectory_list____3Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_fs_ReadOnlyDirectory_list____3Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct jx_fs_FSObject* func_jx_fs_ReadOnlyDirectory_openRO__Ljava_lang_String_2_Ljx_fs_FSObject_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 515, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_fs_ReadOnlyDirectory_openRO__Ljava_lang_String_2_Ljx_fs_FSObject_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_fs_ReadOnlyDirectory_openRO__Ljava_lang_String_2_Ljx_fs_FSObject_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct jx_fs_FSObject* func_jx_fs_ReadOnlyDirectory_openRW__Ljava_lang_String_2_Ljx_fs_FSObject_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 516, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_fs_ReadOnlyDirectory_openRW__Ljava_lang_String_2_Ljx_fs_FSObject_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_fs_ReadOnlyDirectory_openRW__Ljava_lang_String_2_Ljx_fs_FSObject_2(runtime, ins);
}


