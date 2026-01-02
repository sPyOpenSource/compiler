// CLASS: org/luaj/vm2/compiler/LexState$Dyndata extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024Dyndata_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Dyndata_from_org_luaj_vm2_compiler_LexState_00024Dyndata[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Dyndata_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024Dyndata[] = {
    {318, 0, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Dyndata_from_org_luaj_vm2_compiler_LexState_00024Dyndata}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Dyndata_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_compiler_LexState_00024Dyndata__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2858, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 827 , L1798443618 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 827;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 829 , L1756435781 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1actvar_1 = stack[sp + 1].i;
    ; 
    //  line no 831 , L2097217770 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1gt_3 = stack[sp + 1].i;
    ; 
    //  line no 833 , L897303688 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1label_5 = stack[sp + 1].i;
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

void bridge_org_luaj_vm2_compiler_LexState_00024Dyndata__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024Dyndata__init____V(runtime, ins);
}


