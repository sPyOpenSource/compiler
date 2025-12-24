// CLASS: jx/classfile/VerifyResult extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_classfile_VerifyResult_static {s32 NPA_1RESULT_0; s32 FLA_1RESULT_1; s32 WCET_1RESULT_2; s32 CINSTR_1RESULT_3;  };
struct jx_classfile_VerifyResult_static static_var_jx_classfile_VerifyResult = {0, 0, 0, 0};


__refer arr_vmtable_jx_classfile_VerifyResult_from_jx_classfile_VerifyResult[] = {
    func_jx_classfile_VerifyResult_getType___I  //0
};
__refer arr_vmtable_jx_classfile_VerifyResult_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_jx_classfile_VerifyResult[] = {
    {225, 1, arr_vmtable_jx_classfile_VerifyResult_from_jx_classfile_VerifyResult}, //0
    {10, 11, arr_vmtable_jx_classfile_VerifyResult_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
s32 func_jx_classfile_VerifyResult_getType___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 11 , L1375394559 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/classfile/VerifyResult type I
    stack[sp - 1].i = ((struct jx_classfile_VerifyResult*)rstack[sp - 1].obj)->type_4;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_jx_classfile_VerifyResult_getType___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_classfile_VerifyResult_getType___I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_classfile_VerifyResult__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 563, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 13 , L838812606 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 14 , L1533985074 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield jx/classfile/VerifyResult type I
    sp -= 2;
    ((struct jx_classfile_VerifyResult*)rstack[sp + 0].obj)->type_4 = stack[sp + 1].i;
    ; 
    //  line no 15 , L1548010882 , bytecode index = 
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

void bridge_jx_classfile_VerifyResult__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_classfile_VerifyResult__init___I_V(runtime, ins);
}


