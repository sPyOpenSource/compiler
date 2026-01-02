// CLASS: org/luaj/vm2/LuaString$RecentShortStrings extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LuaString_00024RecentShortStrings_static {JArray * recent_1short_1strings_0;  };
struct org_luaj_vm2_LuaString_00024RecentShortStrings_static static_var_org_luaj_vm2_LuaString_00024RecentShortStrings = {NULL};


__refer arr_vmtable_org_luaj_vm2_LuaString_00024RecentShortStrings_from_org_luaj_vm2_LuaString_00024RecentShortStrings[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_LuaString_00024RecentShortStrings_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_Object_hashCode___I  //9
};
VMTable vmtable_org_luaj_vm2_LuaString_00024RecentShortStrings[] = {
    {329, 0, arr_vmtable_org_luaj_vm2_LuaString_00024RecentShortStrings_from_org_luaj_vm2_LuaString_00024RecentShortStrings}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_LuaString_00024RecentShortStrings_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_LuaString_00024RecentShortStrings__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2179, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 102 , L1204822967 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 102;
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

void bridge_org_luaj_vm2_LuaString_00024RecentShortStrings__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaString_00024RecentShortStrings__init____V(runtime, ins);
}


// locals: 0
// stack: 1
// args: 1
JArray * func_org_luaj_vm2_LuaString_00024RecentShortStrings_access_00024000____3Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString_00024RecentShortStrings* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2180, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 102 , L761577728 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 102;
    // getstatic org/luaj/vm2/LuaString$RecentShortStrings recent_short_strings [Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaString_00024RecentShortStrings.recent_1short_1strings_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaString_00024RecentShortStrings_access_00024000____3Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_00024RecentShortStrings_access_00024000____3Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj);
}


// locals: 0
// stack: 1
// args: 1
void func_org_luaj_vm2_LuaString_00024RecentShortStrings__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString_00024RecentShortStrings* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2181, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 103 , L1775525066 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 103;
    //  sipush 128
    stack[sp++].i = 128;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaString; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(3390));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/LuaString$RecentShortStrings recent_short_strings [Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_LuaString_00024RecentShortStrings.recent_1short_1strings_0 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_LuaString_00024RecentShortStrings__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaString_00024RecentShortStrings__clinit____V(runtime, para[0].obj);
}


