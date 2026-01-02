// CLASS: org/luaj/vm2/compiler/LexState$Labeldesc extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024Labeldesc_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Labeldesc_from_org_luaj_vm2_compiler_LexState_00024Labeldesc[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Labeldesc_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024Labeldesc[] = {
    {320, 0, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Labeldesc_from_org_luaj_vm2_compiler_LexState_00024Labeldesc}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Labeldesc_from_java_lang_Object}, //1
};



// locals: 5
// stack: 2
// args: 4
void func_org_luaj_vm2_compiler_LexState_00024Labeldesc__init___Lorg_luaj_vm2_LuaString_2IIS_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, s32 p1, s32 p2, s16 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3346, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 817 , L321358401 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 817;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 818 , L1244785938 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/LexState$Labeldesc name Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp + 0].obj)->name_0 = rstack[sp + 1].obj;
    ; 
    //  line no 819 , L984978888 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/LexState$Labeldesc pc I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp + 0].obj)->pc_1 = stack[sp + 1].i;
    ; 
    //  line no 820 , L593881656 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield org/luaj/vm2/compiler/LexState$Labeldesc line I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp + 0].obj)->line_2 = stack[sp + 1].i;
    ; 
    //  line no 821 , L213850519 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // putfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp + 0].obj)->nactvar_3 = stack[sp + 1].i;
    ; 
    //  line no 822 , L1227041903 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_00024Labeldesc__init___Lorg_luaj_vm2_LuaString_2IIS_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024Labeldesc__init___Lorg_luaj_vm2_LuaString_2IIS_V(runtime, ins, para[0].i, para[1].i, para[2].i);
}


