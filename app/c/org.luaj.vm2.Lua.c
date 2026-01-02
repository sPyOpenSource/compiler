// CLASS: org/luaj/vm2/Lua extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Lua_static {struct java_lang_String* _1VERSION_0; s32 LUA_1MULTRET_1; s32 iABC_2; s32 iABx_3; s32 iAsBx_4; s32 iAx_5; s32 SIZE_1C_6; s32 SIZE_1B_7; s32 SIZE_1Bx_8; s32 SIZE_1A_9; s32 SIZE_1Ax_10; s32 SIZE_1OP_11; s32 POS_1OP_12; s32 POS_1A_13; s32 POS_1C_14; s32 POS_1B_15; s32 POS_1Bx_16; s32 POS_1Ax_17; s32 MAX_1OP_18; s32 MAXARG_1A_19; s32 MAXARG_1B_20; s32 MAXARG_1C_21; s32 MAXARG_1Bx_22; s32 MAXARG_1sBx_23; s32 MAXARG_1Ax_24; s32 MASK_1OP_25; s32 MASK_1A_26; s32 MASK_1B_27; s32 MASK_1C_28; s32 MASK_1Bx_29; s32 MASK_1Ax_30; s32 MASK_1NOT_1OP_31; s32 MASK_1NOT_1A_32; s32 MASK_1NOT_1B_33; s32 MASK_1NOT_1C_34; s32 MASK_1NOT_1Bx_35; s32 BITRK_36; s32 MAXINDEXRK_37; s32 NO_1REG_38; s32 OP_1MOVE_39; s32 OP_1LOADK_40; s32 OP_1LOADKX_41; s32 OP_1LOADBOOL_42; s32 OP_1LOADNIL_43; s32 OP_1GETUPVAL_44; s32 OP_1GETTABUP_45; s32 OP_1GETTABLE_46; s32 OP_1SETTABUP_47; s32 OP_1SETUPVAL_48; s32 OP_1SETTABLE_49; s32 OP_1NEWTABLE_50; s32 OP_1SELF_51; s32 OP_1ADD_52; s32 OP_1SUB_53; s32 OP_1MUL_54; s32 OP_1DIV_55; s32 OP_1MOD_56; s32 OP_1POW_57; s32 OP_1UNM_58; s32 OP_1NOT_59; s32 OP_1LEN_60; s32 OP_1CONCAT_61; s32 OP_1JMP_62; s32 OP_1EQ_63; s32 OP_1LT_64; s32 OP_1LE_65; s32 OP_1TEST_66; s32 OP_1TESTSET_67; s32 OP_1CALL_68; s32 OP_1TAILCALL_69; s32 OP_1RETURN_70; s32 OP_1FORLOOP_71; s32 OP_1FORPREP_72; s32 OP_1TFORCALL_73; s32 OP_1TFORLOOP_74; s32 OP_1SETLIST_75; s32 OP_1CLOSURE_76; s32 OP_1VARARG_77; s32 OP_1EXTRAARG_78; s32 NUM_1OPCODES_79; s32 OP_1GT_80; s32 OP_1GE_81; s32 OP_1NEQ_82; s32 OP_1AND_83; s32 OP_1OR_84; s32 OpArgN_85; s32 OpArgU_86; s32 OpArgR_87; s32 OpArgK_88; JArray * luaP_1opmodes_89; s32 LFIELDS_1PER_1FLUSH_90; s32 MAXSRC_91;  };
struct org_luaj_vm2_Lua_static static_var_org_luaj_vm2_Lua = {NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, 0, 0};


__refer arr_vmtable_org_luaj_vm2_Lua_from_org_luaj_vm2_Lua[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_Lua_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_Lua[] = {
    {270, 0, arr_vmtable_org_luaj_vm2_Lua_from_org_luaj_vm2_Lua}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_Lua_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_Lua__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2757, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 31 , L270812962 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 31;
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

void bridge_org_luaj_vm2_Lua__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Lua__init____V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2758, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 108 , L1914538677 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 108;
    stack[sp++].i = local[0].i;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_GET_1OPCODE__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_GETARG_1A__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2759, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 112 , L26502020 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    stack[sp++].i = local[0].i;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_GETARG_1A__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_GETARG_1A__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_GETARG_1Ax__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2760, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 116 , L1947378744 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 116;
    stack[sp++].i = local[0].i;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  ldc 
    stack[sp++].i = 0x3ffffff;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_GETARG_1Ax__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_GETARG_1Ax__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_GETARG_1B__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2761, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 120 , L1016408627 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 120;
    stack[sp++].i = local[0].i;
    //  bipush 23
    stack[sp++].i = 23;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  sipush 511
    stack[sp++].i = 511;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_GETARG_1B__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_GETARG_1C__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2762, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 124 , L290509937 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 124;
    stack[sp++].i = local[0].i;
    //  bipush 14
    stack[sp++].i = 14;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  sipush 511
    stack[sp++].i = 511;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_GETARG_1C__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_GETARG_1C__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_GETARG_1Bx__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2763, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 128 , L1699637904 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 128;
    stack[sp++].i = local[0].i;
    //  bipush 14
    stack[sp++].i = 14;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  ldc 
    stack[sp++].i = 0x3ffff;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_GETARG_1Bx__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_GETARG_1Bx__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_GETARG_1sBx__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2764, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 132 , L379963364 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 132;
    stack[sp++].i = local[0].i;
    //  bipush 14
    stack[sp++].i = 14;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  ldc 
    stack[sp++].i = 0x3ffff;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  ldc 
    stack[sp++].i = 0x1ffff;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_GETARG_1sBx__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_GETARG_1sBx__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 3
// args: 2
s8 func_org_luaj_vm2_Lua_ISK__I_Z(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2765, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 145 , L145664926 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 145;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[0].i;
    //  sipush 256
    stack[sp++].i = 256;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L44227594;
    // iconst_1
    stack[sp++].i = 1;
    goto L973123933;
    L44227594:
    // iconst_0
    stack[sp++].i = 0;
    L973123933:
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

void bridge_org_luaj_vm2_Lua_ISK__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_ISK__I_Z(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_INDEXK__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2766, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 150 , L1273012861 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 150;
    stack[sp++].i = local[0].i;
    //  sipush -257
    stack[sp++].i = -257;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_INDEXK__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_INDEXK__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_RKASK__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2767, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 157 , L1610853733 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 157;
    stack[sp++].i = local[0].i;
    //  sipush 256
    stack[sp++].i = 256;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_RKASK__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_RKASK__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_getOpMode__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2768, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 326 , L1618230491 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 326;
    // getstatic org/luaj/vm2/Lua luaP_opmodes [I
    rstack[sp].obj =static_var_org_luaj_vm2_Lua.luaP_1opmodes_89;
    sp += 1;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L1618230491 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_getOpMode__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_getOpMode__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_getBMode__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2769, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 329 , L1897372527 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 329;
    // getstatic org/luaj/vm2/Lua luaP_opmodes [I
    rstack[sp].obj =static_var_org_luaj_vm2_Lua.luaP_1opmodes_89;
    sp += 1;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L1897372527 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    // iconst_4
    stack[sp++].i = 4;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_getBMode__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_getBMode__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_org_luaj_vm2_Lua_getCMode__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2770, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 332 , L1382973704 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 332;
    // getstatic org/luaj/vm2/Lua luaP_opmodes [I
    rstack[sp].obj =static_var_org_luaj_vm2_Lua.luaP_1opmodes_89;
    sp += 1;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L1382973704 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Lua_getCMode__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_getCMode__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 3
// args: 2
s8 func_org_luaj_vm2_Lua_testAMode__I_Z(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2771, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 335 , L4888672 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 335;
    // iconst_0
    stack[sp++].i = 0;
    // getstatic org/luaj/vm2/Lua luaP_opmodes [I
    rstack[sp].obj =static_var_org_luaj_vm2_Lua.luaP_1opmodes_89;
    sp += 1;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L4888672 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    //  bipush 64
    stack[sp++].i = 64;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2090953436;
    // iconst_1
    stack[sp++].i = 1;
    goto L1524744833;
    L2090953436:
    // iconst_0
    stack[sp++].i = 0;
    L1524744833:
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

void bridge_org_luaj_vm2_Lua_testAMode__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_testAMode__I_Z(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 3
// args: 2
s8 func_org_luaj_vm2_Lua_testTMode__I_Z(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2772, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 338 , L513113647 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 338;
    // iconst_0
    stack[sp++].i = 0;
    // getstatic org/luaj/vm2/Lua luaP_opmodes [I
    rstack[sp].obj =static_var_org_luaj_vm2_Lua.luaP_1opmodes_89;
    sp += 1;
    stack[sp++].i = local[0].i;
    // arrload s32  ,  L513113647 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    //  sipush 128
    stack[sp++].i = 128;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1762984107;
    // iconst_1
    stack[sp++].i = 1;
    goto L1035219650;
    L1762984107:
    // iconst_0
    stack[sp++].i = 0;
    L1035219650:
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

void bridge_org_luaj_vm2_Lua_testTMode__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Lua_testTMode__I_Z(runtime, para[0].obj, para[1].i);
}


// locals: 3
// stack: 5
// args: 2
struct java_lang_String* func_org_luaj_vm2_Lua_chunkid__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2773, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 347 , L26229597 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 347;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1509);
    // invokevirtual java/lang/String.startsWith(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 14);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1078031260;
    ; 
    //  line no 348 , L1560243060 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/lang/String.substring(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 21);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1078031260:
    //  line no 349 , L1078031260 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 617);
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 350 , L1652552120 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1508);
    // invokevirtual java/lang/String.startsWith(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 14);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1656059001;
    ; 
    //  line no 351 , L698562080 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/lang/String.substring(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 21);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[0].obj = rstack[--sp].obj;
    goto L245386411;
    L1656059001:
    //  line no 353 , L1656059001 , bytecode index = 
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4594);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[0].obj = rstack[--sp].obj;
    ; 
    //  line no 354 , L323981046 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4595);
    rlocal[1].obj = rstack[--sp].obj;
    L245386411:
    //  line no 356 , L245386411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 357 , L1519396442 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 80
    stack[sp++].i = 80;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1781668126;
    ; 
    //  line no 358 , L1727776231 , bytecode index = 
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 80
    stack[sp++].i = 80;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual java/lang/String.substring(II)Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 50, 22);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3575);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[0].obj = rstack[--sp].obj;
    L1781668126:
    //  line no 359 , L1781668126 , bytecode index = 
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_Lua_chunkid__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Lua_chunkid__Ljava_lang_String_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 4
// args: 1
void func_org_luaj_vm2_Lua__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_Lua* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2774, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 281 , L1381341801 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 281;
    //  bipush 40
    stack[sp++].i = 40;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 96
    stack[sp++].i = 96;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush 113
    stack[sp++].i = 113;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 65
    stack[sp++].i = 65;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  bipush 84
    stack[sp++].i = 84;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  bipush 80
    stack[sp++].i = 80;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  bipush 80
    stack[sp++].i = 80;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  bipush 92
    stack[sp++].i = 92;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  bipush 108
    stack[sp++].i = 108;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 8
    stack[sp++].i = 8;
    //  bipush 60
    stack[sp++].i = 60;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 9
    stack[sp++].i = 9;
    //  bipush 16
    stack[sp++].i = 16;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    //  bipush 60
    stack[sp++].i = 60;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 11
    stack[sp++].i = 11;
    //  bipush 84
    stack[sp++].i = 84;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 12
    stack[sp++].i = 12;
    //  bipush 108
    stack[sp++].i = 108;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 13
    stack[sp++].i = 13;
    //  bipush 124
    stack[sp++].i = 124;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 14
    stack[sp++].i = 14;
    //  bipush 124
    stack[sp++].i = 124;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 15
    stack[sp++].i = 15;
    //  bipush 124
    stack[sp++].i = 124;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 16
    stack[sp++].i = 16;
    //  bipush 124
    stack[sp++].i = 124;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 17
    stack[sp++].i = 17;
    //  bipush 124
    stack[sp++].i = 124;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 18
    stack[sp++].i = 18;
    //  bipush 124
    stack[sp++].i = 124;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 19
    stack[sp++].i = 19;
    //  bipush 96
    stack[sp++].i = 96;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 20
    stack[sp++].i = 20;
    //  bipush 96
    stack[sp++].i = 96;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 21
    stack[sp++].i = 21;
    //  bipush 96
    stack[sp++].i = 96;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 22
    stack[sp++].i = 22;
    //  bipush 104
    stack[sp++].i = 104;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 23
    stack[sp++].i = 23;
    //  bipush 34
    stack[sp++].i = 34;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 24
    stack[sp++].i = 24;
    //  sipush 188
    stack[sp++].i = 188;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 25
    stack[sp++].i = 25;
    //  sipush 188
    stack[sp++].i = 188;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 26
    stack[sp++].i = 26;
    //  sipush 188
    stack[sp++].i = 188;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 27
    stack[sp++].i = 27;
    //  sipush 132
    stack[sp++].i = 132;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 28
    stack[sp++].i = 28;
    //  sipush 228
    stack[sp++].i = 228;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 29
    stack[sp++].i = 29;
    //  bipush 84
    stack[sp++].i = 84;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 30
    stack[sp++].i = 30;
    //  bipush 84
    stack[sp++].i = 84;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 31
    stack[sp++].i = 31;
    //  bipush 16
    stack[sp++].i = 16;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 32
    stack[sp++].i = 32;
    //  bipush 98
    stack[sp++].i = 98;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 33
    stack[sp++].i = 33;
    //  bipush 98
    stack[sp++].i = 98;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 34
    stack[sp++].i = 34;
    // iconst_4
    stack[sp++].i = 4;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 35
    stack[sp++].i = 35;
    //  sipush 226
    stack[sp++].i = 226;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 36
    stack[sp++].i = 36;
    //  bipush 20
    stack[sp++].i = 20;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 37
    stack[sp++].i = 37;
    //  bipush 81
    stack[sp++].i = 81;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 38
    stack[sp++].i = 38;
    //  bipush 80
    stack[sp++].i = 80;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 39
    stack[sp++].i = 39;
    //  bipush 23
    stack[sp++].i = 23;
    // arrstore s32  ,  L1381341801 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // putstatic org/luaj/vm2/Lua luaP_opmodes [I
    sp -= 1;
    static_var_org_luaj_vm2_Lua.luaP_1opmodes_89 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_Lua__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Lua__clinit____V(runtime, para[0].obj);
}


