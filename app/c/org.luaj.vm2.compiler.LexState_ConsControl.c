// CLASS: org/luaj/vm2/compiler/LexState$ConsControl extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024ConsControl_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024ConsControl_from_org_luaj_vm2_compiler_LexState_00024ConsControl[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024ConsControl_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024ConsControl[] = {
    {295, 0, arr_vmtable_org_luaj_vm2_compiler_LexState_00024ConsControl_from_org_luaj_vm2_compiler_LexState_00024ConsControl}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024ConsControl_from_java_lang_Object}, //1
};



// locals: 1
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_00024ConsControl__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1856, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1164 , L481525476 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1164;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 1165 , L1540031691 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/compiler/LexState$expdesc
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 197);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/LexState$expdesc.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024expdesc__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->v_0 = rstack[sp + 1].obj;
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

void bridge_org_luaj_vm2_compiler_LexState_00024ConsControl__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024ConsControl__init____V(runtime, ins);
}


