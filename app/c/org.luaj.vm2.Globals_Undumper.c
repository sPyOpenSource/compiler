// CLASS: org/luaj/vm2/Globals$Undumper extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Globals_00024Undumper_static {};



__refer arr_vmtable_org_luaj_vm2_Globals_00024Undumper_from_org_luaj_vm2_Globals_00024Undumper[] = {
    func_org_luaj_vm2_Globals_00024Undumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2  //0
};
__refer arr_vmtable_org_luaj_vm2_Globals_00024Undumper_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_Globals_00024Undumper[] = {
    {223, 1, arr_vmtable_org_luaj_vm2_Globals_00024Undumper_from_org_luaj_vm2_Globals_00024Undumper}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_Globals_00024Undumper_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 2
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_Globals_00024Undumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1262, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_Globals_00024Undumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_00024Undumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, ins, para[0].obj);
}


