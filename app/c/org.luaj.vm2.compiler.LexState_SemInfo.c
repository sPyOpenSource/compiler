// CLASS: org/luaj/vm2/compiler/LexState$SemInfo extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024SemInfo_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024SemInfo_from_org_luaj_vm2_compiler_LexState_00024SemInfo[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024SemInfo_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024SemInfo[] = {
    {167, 0, arr_vmtable_org_luaj_vm2_compiler_LexState_00024SemInfo_from_org_luaj_vm2_compiler_LexState_00024SemInfo}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024SemInfo_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_compiler_LexState_00024SemInfo__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1495, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 117 , L1222094219 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
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

void bridge_org_luaj_vm2_compiler_LexState_00024SemInfo__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024SemInfo__init____V(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
void func_org_luaj_vm2_compiler_LexState_00024SemInfo__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_000241* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1496, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 117 , L1612853208 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/compiler/LexState$SemInfo.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024SemInfo__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_LexState_00024SemInfo__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024SemInfo__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(runtime, ins);
}


