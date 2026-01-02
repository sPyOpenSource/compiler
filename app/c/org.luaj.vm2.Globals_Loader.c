// CLASS: org/luaj/vm2/Globals$Loader extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Globals_00024Loader_static {};



__refer arr_vmtable_org_luaj_vm2_Globals_00024Loader_from_org_luaj_vm2_Globals_00024Loader[] = {
    func_org_luaj_vm2_Globals_00024Loader_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2  //0
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024Loader_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_Globals_00024Loader[] = {
    {289, 1, arr_vmtable_org_luaj_vm2_Globals_00024Loader_from_org_luaj_vm2_Globals_00024Loader}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_Globals_00024Loader_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 3
struct org_luaj_vm2_LuaFunction* func_org_luaj_vm2_Globals_00024Loader_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0, struct java_lang_String* p1, struct org_luaj_vm2_LuaValue* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2192, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_Globals_00024Loader_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_00024Loader_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2(runtime, ins, para[0].obj, para[1].obj);
}


