// CLASS: org/luaj/vm2/compiler/LexState$Priority extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024Priority_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Priority_from_org_luaj_vm2_compiler_LexState_00024Priority[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Priority_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024Priority[] = {
    {188, 0, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Priority_from_org_luaj_vm2_compiler_LexState_00024Priority}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Priority_from_java_lang_Object}, //1
};



// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 948, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 1549 , L1694784135 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1549;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 1550 , L1207231495 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/LexState$Priority left B
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Priority*)rstack[sp + 0].obj)->left_0 = stack[sp + 1].i;
    ; 
    //  line no 1551 , L756936249 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/LexState$Priority right B
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Priority*)rstack[sp + 0].obj)->right_1 = stack[sp + 1].i;
    ; 
    //  line no 1552 , L1221981006 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, ins, para[0].i);
}


