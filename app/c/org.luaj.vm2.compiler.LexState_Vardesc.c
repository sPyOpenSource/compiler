// CLASS: org/luaj/vm2/compiler/LexState$Vardesc extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024Vardesc_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Vardesc_from_org_luaj_vm2_compiler_LexState_00024Vardesc[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Vardesc_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024Vardesc[] = {
    {319, 0, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Vardesc_from_org_luaj_vm2_compiler_LexState_00024Vardesc}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Vardesc_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_00024Vardesc__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2859, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 805 , L786058987 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 805;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 806 , L1537805706 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/LexState$Vardesc idx S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Vardesc*)rstack[sp + 0].obj)->idx_0 = stack[sp + 1].i;
    ; 
    //  line no 807 , L815648243 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_00024Vardesc__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024Vardesc__init___I_V(runtime, ins);
}


