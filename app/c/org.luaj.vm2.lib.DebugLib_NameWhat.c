// CLASS: org/luaj/vm2/lib/DebugLib$NameWhat extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_DebugLib_00024NameWhat_static {};



__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_00024NameWhat_from_org_luaj_vm2_lib_DebugLib_00024NameWhat[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_00024NameWhat_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_DebugLib_00024NameWhat[] = {
    {360, 0, arr_vmtable_org_luaj_vm2_lib_DebugLib_00024NameWhat_from_org_luaj_vm2_lib_DebugLib_00024NameWhat}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_lib_DebugLib_00024NameWhat_from_java_lang_Object}, //1
};



// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3117, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 733 , L1312907964 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 733;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 734 , L1278319954 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/lib/DebugLib$NameWhat name Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024NameWhat*)rstack[sp + 0].obj)->name_0 = rstack[sp + 1].obj;
    ; 
    //  line no 735 , L1929115981 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/lib/DebugLib$NameWhat namewhat Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024NameWhat*)rstack[sp + 0].obj)->namewhat_1 = rstack[sp + 1].obj;
    ; 
    //  line no 736 , L1748574267 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


