// CLASS: jx/zero/CPUInfo extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_CPUInfo_static {s32 TYPE_1PRIMARY_1CPU_7; s32 TYPE_1OVERDRIVE_1CPU_8; s32 TYPE_1SECONDARY_1MP_1CPU_9; s32 TYPE_1RESERVED_10; s32 FAMILY_1486_11; s32 FAMILY_1P5_12; s32 FAMILY_1P6_13; s32 FEATURE_1XMM_1MASK_14; s32 FEATURE_1FXSR_1MASK_15; s32 FEATURE_1MMX_1MASK_16; s32 FEATURE_1PSN_1MASK_17; s32 FEATURE_1PSE36_1MASK_18; s32 FEATURE_1PAT_1MASK_19; s32 FEATURE_1CMOV_1MASK_20; s32 FEATURE_1MCA_1MASK_21; s32 FEATURE_1PGE_1MASK_22; s32 FEATURE_1MTRR_1MASK_23; s32 FEATURE_1SEP_1MASK_24; s32 FEATURE_1APIC_1MASK_25; s32 FEATURE_1CX8_1MASK_26; s32 FEATURE_1MCE_1MASK_27; s32 FEATURE_1PAE_1MASK_28; s32 FEATURE_1MSR_1MASK_29; s32 FEATURE_1TSC_1MASK_30; s32 FEATURE_1PSE_1MASK_31; s32 FEATURE_1DE_1MASK_32; s32 FEATURE_1VME_1MASK_33; s32 FEATURE_1FPU_1MASK_34;  };
struct jx_zero_CPUInfo_static static_var_jx_zero_CPUInfo = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_jx_zero_CPUInfo_from_jx_zero_CPUInfo[] = {
    func_jx_zero_CPUInfo_hasMTRR___Z  //0
};
__refer arr_vmtable_jx_zero_CPUInfo_from_java_lang_Object[] = {
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
VMTable vmtable_jx_zero_CPUInfo[] = {
    {402, 1, arr_vmtable_jx_zero_CPUInfo_from_jx_zero_CPUInfo}, //0
    {5, 10, arr_vmtable_jx_zero_CPUInfo_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_jx_zero_CPUInfo__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3118, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 44 , L1840457976 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 44;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 45 , L1076856210 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/zero/CPUInfo vendor Ljava/lang/String;
    sp -= 2;
    ((struct jx_zero_CPUInfo*)rstack[sp + 0].obj)->vendor_0 = rstack[sp + 1].obj;
    ; 
    //  line no 46 , L1639341396 , bytecode index = 
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

void bridge_jx_zero_CPUInfo__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUInfo__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 8
// stack: 2
// args: 7
void func_jx_zero_CPUInfo__init___Ljava_lang_String_2IIIIII_V(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3119, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    local[5].i = p5;
    local[6].i = p6;
    ; 
    //  line no 48 , L2133612542 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 49 , L1133731484 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/zero/CPUInfo vendor Ljava/lang/String;
    sp -= 2;
    ((struct jx_zero_CPUInfo*)rstack[sp + 0].obj)->vendor_0 = rstack[sp + 1].obj;
    ; 
    //  line no 50 , L270333767 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield jx/zero/CPUInfo type I
    sp -= 2;
    ((struct jx_zero_CPUInfo*)rstack[sp + 0].obj)->type_2 = stack[sp + 1].i;
    ; 
    //  line no 51 , L2030931933 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield jx/zero/CPUInfo family I
    sp -= 2;
    ((struct jx_zero_CPUInfo*)rstack[sp + 0].obj)->family_3 = stack[sp + 1].i;
    ; 
    //  line no 52 , L1677960357 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // putfield jx/zero/CPUInfo model I
    sp -= 2;
    ((struct jx_zero_CPUInfo*)rstack[sp + 0].obj)->model_4 = stack[sp + 1].i;
    ; 
    //  line no 53 , L1035825415 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // putfield jx/zero/CPUInfo stepping I
    sp -= 2;
    ((struct jx_zero_CPUInfo*)rstack[sp + 0].obj)->stepping_5 = stack[sp + 1].i;
    ; 
    //  line no 54 , L1248595768 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[6].i;
    // putfield jx/zero/CPUInfo brand I
    sp -= 2;
    ((struct jx_zero_CPUInfo*)rstack[sp + 0].obj)->brand_6 = stack[sp + 1].i;
    ; 
    //  line no 55 , L1602880207 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // putfield jx/zero/CPUInfo features I
    sp -= 2;
    ((struct jx_zero_CPUInfo*)rstack[sp + 0].obj)->features_1 = stack[sp + 1].i;
    ; 
    //  line no 65 , L651535127 , bytecode index = 
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

void bridge_jx_zero_CPUInfo__init___Ljava_lang_String_2IIIIII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CPUInfo__init___Ljava_lang_String_2IIIIII_V(runtime, ins, para[0].i, para[1].i, para[2].i, para[3].i, para[4].i, para[5].i);
}


// locals: 1
// stack: 2
// args: 0
s8 func_jx_zero_CPUInfo_hasMTRR___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3120, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 67 , L1510543202 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 67;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/zero/CPUInfo features I
    stack[sp - 1].i = ((struct jx_zero_CPUInfo*)rstack[sp - 1].obj)->features_1;
    sp += 0;
    //  sipush 4096
    stack[sp++].i = 4096;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1436218006;
    // iconst_1
    stack[sp++].i = 1;
    goto L1591492137;
    L1436218006:
    // iconst_0
    stack[sp++].i = 0;
    L1591492137:
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_CPUInfo_hasMTRR___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_CPUInfo_hasMTRR___Z(runtime, ins);
}


