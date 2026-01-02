// CLASS: org/luaj/vm2/compiler/FuncState extends org/luaj/vm2/compiler/Constants
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_FuncState_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_FuncState_from_org_luaj_vm2_compiler_FuncState[] = {
    func_org_luaj_vm2_compiler_FuncState_getcodePtr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Lorg_luaj_vm2_compiler_InstructionPtr_2,  //0
    func_org_luaj_vm2_compiler_FuncState_getcode__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I,  //1
    func_org_luaj_vm2_compiler_FuncState_codeAsBx__III_I,  //2
    func_org_luaj_vm2_compiler_FuncState_setmultret__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //3
    func_org_luaj_vm2_compiler_FuncState_checkrepeated___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2ILorg_luaj_vm2_LuaString_2_V,  //4
    func_org_luaj_vm2_compiler_FuncState_checklimit__IILjava_lang_String_2_V,  //5
    func_org_luaj_vm2_compiler_FuncState_errorlimit__ILjava_lang_String_2_V,  //6
    func_org_luaj_vm2_compiler_FuncState_getlocvar__I_Lorg_luaj_vm2_LocVars_2,  //7
    func_org_luaj_vm2_compiler_FuncState_removevars__I_V,  //8
    func_org_luaj_vm2_compiler_FuncState_searchupvalue__Lorg_luaj_vm2_LuaString_2_I,  //9
    func_org_luaj_vm2_compiler_FuncState_newupvalue__Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I,  //10
    func_org_luaj_vm2_compiler_FuncState_searchvar__Lorg_luaj_vm2_LuaString_2_I,  //11
    func_org_luaj_vm2_compiler_FuncState_markupval__I_V,  //12
    func_org_luaj_vm2_compiler_FuncState_movegotosout__Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2_V,  //13
    func_org_luaj_vm2_compiler_FuncState_enterblock__Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2Z_V,  //14
    func_org_luaj_vm2_compiler_FuncState_leaveblock___V,  //15
    func_org_luaj_vm2_compiler_FuncState_closelistfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V,  //16
    func_org_luaj_vm2_compiler_FuncState_hasmultret__I_Z,  //17
    func_org_luaj_vm2_compiler_FuncState_lastlistfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V,  //18
    func_org_luaj_vm2_compiler_FuncState_nil__II_V,  //19
    func_org_luaj_vm2_compiler_FuncState_jump___I,  //20
    func_org_luaj_vm2_compiler_FuncState_ret__II_V,  //21
    func_org_luaj_vm2_compiler_FuncState_condjump__IIII_I,  //22
    func_org_luaj_vm2_compiler_FuncState_fixjump__II_V,  //23
    func_org_luaj_vm2_compiler_FuncState_getlabel___I,  //24
    func_org_luaj_vm2_compiler_FuncState_getjump__I_I,  //25
    func_org_luaj_vm2_compiler_FuncState_getjumpcontrol__I_Lorg_luaj_vm2_compiler_InstructionPtr_2,  //26
    func_org_luaj_vm2_compiler_FuncState_need_1value__I_Z,  //27
    func_org_luaj_vm2_compiler_FuncState_patchtestreg__II_Z,  //28
    func_org_luaj_vm2_compiler_FuncState_removevalues__I_V,  //29
    func_org_luaj_vm2_compiler_FuncState_patchlistaux__IIII_V,  //30
    func_org_luaj_vm2_compiler_FuncState_dischargejpc___V,  //31
    func_org_luaj_vm2_compiler_FuncState_patchlist__II_V,  //32
    func_org_luaj_vm2_compiler_FuncState_patchclose__II_V,  //33
    func_org_luaj_vm2_compiler_FuncState_patchtohere__I_V,  //34
    func_org_luaj_vm2_compiler_FuncState_concat__Lorg_luaj_vm2_compiler_IntPtr_2I_V,  //35
    func_org_luaj_vm2_compiler_FuncState_checkstack__I_V,  //36
    func_org_luaj_vm2_compiler_FuncState_reserveregs__I_V,  //37
    func_org_luaj_vm2_compiler_FuncState_freereg__I_V,  //38
    func_org_luaj_vm2_compiler_FuncState_freeexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //39
    func_org_luaj_vm2_compiler_FuncState_addk__Lorg_luaj_vm2_LuaValue_2_I,  //40
    func_org_luaj_vm2_compiler_FuncState_stringK__Lorg_luaj_vm2_LuaString_2_I,  //41
    func_org_luaj_vm2_compiler_FuncState_numberK__Lorg_luaj_vm2_LuaValue_2_I,  //42
    func_org_luaj_vm2_compiler_FuncState_boolK__Z_I,  //43
    func_org_luaj_vm2_compiler_FuncState_nilK___I,  //44
    func_org_luaj_vm2_compiler_FuncState_setreturns__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V,  //45
    func_org_luaj_vm2_compiler_FuncState_setoneret__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //46
    func_org_luaj_vm2_compiler_FuncState_dischargevars__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //47
    func_org_luaj_vm2_compiler_FuncState_code_1label__III_I,  //48
    func_org_luaj_vm2_compiler_FuncState_discharge2reg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V,  //49
    func_org_luaj_vm2_compiler_FuncState_discharge2anyreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //50
    func_org_luaj_vm2_compiler_FuncState_exp2reg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V,  //51
    func_org_luaj_vm2_compiler_FuncState_exp2nextreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //52
    func_org_luaj_vm2_compiler_FuncState_exp2anyreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I,  //53
    func_org_luaj_vm2_compiler_FuncState_exp2anyregup__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //54
    func_org_luaj_vm2_compiler_FuncState_exp2val__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //55
    func_org_luaj_vm2_compiler_FuncState_exp2RK__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I,  //56
    func_org_luaj_vm2_compiler_FuncState_storevar__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //57
    func_org_luaj_vm2_compiler_FuncState_self__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //58
    func_org_luaj_vm2_compiler_FuncState_invertjump__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //59
    func_org_luaj_vm2_compiler_FuncState_jumponcond__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I,  //60
    func_org_luaj_vm2_compiler_FuncState_goiftrue__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //61
    func_org_luaj_vm2_compiler_FuncState_goiffalse__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //62
    func_org_luaj_vm2_compiler_FuncState_codenot__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //63
    func_org_luaj_vm2_compiler_FuncState_indexed__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //64
    func_org_luaj_vm2_compiler_FuncState_constfolding__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Z,  //65
    func_org_luaj_vm2_compiler_FuncState_codearith__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V,  //66
    func_org_luaj_vm2_compiler_FuncState_codecomp__IILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //67
    func_org_luaj_vm2_compiler_FuncState_prefix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V,  //68
    func_org_luaj_vm2_compiler_FuncState_infix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //69
    func_org_luaj_vm2_compiler_FuncState_posfix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V,  //70
    func_org_luaj_vm2_compiler_FuncState_fixline__I_V,  //71
    func_org_luaj_vm2_compiler_FuncState_code__II_I,  //72
    func_org_luaj_vm2_compiler_FuncState_codeABC__IIII_I,  //73
    func_org_luaj_vm2_compiler_FuncState_codeABx__III_I,  //74
    func_org_luaj_vm2_compiler_FuncState_codeextraarg__I_I,  //75
    func_org_luaj_vm2_compiler_FuncState_codeK__II_I,  //76
    func_org_luaj_vm2_compiler_FuncState_setlist__III_V  //77
};
__refer arr_vmtable_org_luaj_vm2_compiler_FuncState_from_org_luaj_vm2_compiler_Constants[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_FuncState_from_org_luaj_vm2_Lua[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_FuncState_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_FuncState[] = {
    {264, 78, arr_vmtable_org_luaj_vm2_compiler_FuncState_from_org_luaj_vm2_compiler_FuncState}, //0
    {269, 0, arr_vmtable_org_luaj_vm2_compiler_FuncState_from_org_luaj_vm2_compiler_Constants}, //1
    {270, 0, arr_vmtable_org_luaj_vm2_compiler_FuncState_from_org_luaj_vm2_Lua}, //2
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_FuncState_from_java_lang_Object}, //3
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_compiler_FuncState__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1497, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 64 , L653337757 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/compiler/Constants.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_Constants__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 65 , L1896558831 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState__init____V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_compiler_InstructionPtr* func_org_luaj_vm2_compiler_FuncState_getcodePtr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Lorg_luaj_vm2_compiler_InstructionPtr_2(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1498, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 73 , L682981033 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 73;
    // new org/luaj/vm2/compiler/InstructionPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 263);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/InstructionPtr.<init>([II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_InstructionPtr__init____3II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
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

void bridge_org_luaj_vm2_compiler_FuncState_getcodePtr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Lorg_luaj_vm2_compiler_InstructionPtr_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_FuncState_getcodePtr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Lorg_luaj_vm2_compiler_InstructionPtr_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_getcode__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1499, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 77 , L795590320 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 77;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // arrload s32  ,  L795590320 bc index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_getcode__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_getcode__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(runtime, ins);
}


// locals: 4
// stack: 5
// args: 3
s32 func_org_luaj_vm2_compiler_FuncState_codeAsBx__III_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1500, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 81 , L404036116 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    //  ldc 
    stack[sp++].i = 0x1ffff;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABx(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 74);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_codeAsBx__III_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_codeAsBx__III_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_setmultret__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1501, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 85 , L379430898 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 85;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.setreturns(Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 45);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 86 , L1008608255 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_setmultret__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_setmultret__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 6
// stack: 4
// args: 3
void func_org_luaj_vm2_compiler_FuncState_checkrepeated___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2ILorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, JArray * p0, s32 p1, struct org_luaj_vm2_LuaString* p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1502, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 96 , L1613332278 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 96;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->bl_107;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt firstlabel S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->firstlabel_1;
    sp += 0;
    local[4].i = stack[--sp].i;
    L468776694:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1455177644;
    ; 
    //  line no 97 , L14633842 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L14633842 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.eq_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 31, 80);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L732189840;
    ; 
    //  line no 98 , L939475028 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2765);
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
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 41, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2766);
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
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L939475028 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc line I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->line_2;
    sp += 0;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.pushfstring(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 265, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 100 , L8996952 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.semerror(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 27);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L732189840:
    //  line no 96 , L732189840 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L468776694;
    L1455177644:
    //  line no 103 , L1455177644 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_checkrepeated___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2ILorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_checkrepeated___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2ILorg_luaj_vm2_LuaString_2_V(runtime, ins, para[0].i, para[1].obj);
}


// locals: 4
// stack: 3
// args: 3
void func_org_luaj_vm2_compiler_FuncState_checklimit__IILjava_lang_String_2_V(JThreadRuntime *runtime, s32 p0, s32 p1, struct java_lang_String* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1503, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 107 , L1937693946 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 107;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1053744929;
    ; 
    //  line no 108 , L1959758632 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.errorlimit(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct java_lang_String*) = find_method(__ins->vm_table, 264, 6);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1053744929:
    //  line no 109 , L1053744929 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_checklimit__IILjava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_checklimit__IILjava_lang_String_2_V(runtime, ins, para[0].i, para[1].obj);
}


// locals: 4
// stack: 3
// args: 2
void func_org_luaj_vm2_compiler_FuncState_errorlimit__ILjava_lang_String_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_String* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1504, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 113 , L861522296 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 113;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype linedefined I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->linedefined_7;
    sp += 0;
    if(stack[--sp].i  != 0) goto L2074492901;
    ; 
    //  line no 114 , L1933077874 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2770);
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
    stack[sp++].i = local[1].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 922);
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
    rstack[sp++].obj = rlocal[2].obj;
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
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.pushfstring(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 265, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1865617081;
    L2074492901:
    //  line no 115 , L2074492901 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2771);
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
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype linedefined I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->linedefined_7;
    sp += 0;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2772);
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
    stack[sp++].i = local[1].i;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 922);
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
    rstack[sp++].obj = rlocal[2].obj;
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
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.pushfstring(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 265, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1865617081:
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 116 , L308021294 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.lexerror(Ljava/lang/String;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32) = find_method(__ins->vm_table, 266, 6);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 117 , L1481594007 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_errorlimit__ILjava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_errorlimit__ILjava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 3
// args: 1
struct org_luaj_vm2_LocVars* func_org_luaj_vm2_compiler_FuncState_getlocvar__I_Lorg_luaj_vm2_LocVars_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1505, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 120 , L530410619 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 120;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata actvar [Lorg/luaj/vm2/compiler/LexState$Vardesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->actvar_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState firstlocal I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->firstlocal_113;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L530410619 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // getfield org/luaj/vm2/compiler/LexState$Vardesc idx S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Vardesc*)rstack[sp - 1].obj)->idx_0;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 121 , L1844579038 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nlocvars S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nlocvars_114;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1337655323;
    // iconst_1
    stack[sp++].i = 1;
    goto L1074844820;
    L1337655323:
    // iconst_0
    stack[sp++].i = 0;
    L1074844820:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 122 , L874153561 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L874153561 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
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

void bridge_org_luaj_vm2_compiler_FuncState_getlocvar__I_Lorg_luaj_vm2_LocVars_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_FuncState_getlocvar__I_Lorg_luaj_vm2_LocVars_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_FuncState_removevars__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1506, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 126 , L1592763413 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 126;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1actvar_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1actvar_1 = stack[sp + 1].i;
    L404586280:
    //  line no 127 , L404586280 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2027227708;
    ; 
    //  line no 128 , L800497654 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/FuncState nactvar S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nactvar_115 = stack[sp + 1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getlocvar(I)Lorg/luaj/vm2/LocVars;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LocVars* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 7);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // putfield org/luaj/vm2/LocVars endpc I
    sp -= 2;
    ((struct org_luaj_vm2_LocVars*)rstack[sp + 0].obj)->endpc_2 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L404586280;
    L2027227708:
    //  line no 129 , L2027227708 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_removevars__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_removevars__I_V(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_searchupvalue__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1507, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 134 , L2135790485 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 134;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 135 , L790229674 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L877363600:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nups S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nups_116;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1778877569;
    ; 
    //  line no 136 , L2042979183 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L2042979183 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // getfield org/luaj/vm2/Upvaldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Upvaldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.eq_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 31, 80);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L422134367;
    ; 
    //  line no 137 , L1904609259 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L422134367:
    //  line no 135 , L422134367 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L877363600;
    L1778877569:
    //  line no 138 , L1778877569 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_org_luaj_vm2_compiler_FuncState_searchupvalue__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_searchupvalue__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 3
// stack: 7
// args: 2
s32 func_org_luaj_vm2_compiler_FuncState_newupvalue__Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1508, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 142 , L1971283804 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 142;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nups S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nups_116;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2779);
    // invokevirtual org/luaj/vm2/compiler/FuncState.checklimit(IILjava/lang/String;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct java_lang_String*) = find_method(__ins->vm_table, 264, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 143 , L639105046 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1735330400;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nups S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nups_116;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    // arraylength  label  L639105046
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1561347421;
    L1735330400:
    //  line no 144 , L1735330400 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nups S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nups_116;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L1398508580;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nups S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nups_116;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    goto L1251285265;
    L1398508580:
    // iconst_1
    stack[sp++].i = 1;
    L1251285265:
    // invokestatic org/luaj/vm2/compiler/FuncState.realloc([Lorg/luaj/vm2/Upvaldesc;I)[Lorg/luaj/vm2/Upvaldesc;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3Lorg_luaj_vm2_Upvaldesc_2I__3Lorg_luaj_vm2_Upvaldesc_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->upvalues_5 = rstack[sp + 1].obj;
    L1561347421:
    //  line no 145 , L1561347421 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nups S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nups_116;
    sp += 0;
    ; 
    // new org/luaj/vm2/Upvaldesc
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 126);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L173259631;
    // iconst_1
    stack[sp++].i = 1;
    goto L98974893;
    L173259631:
    // iconst_0
    stack[sp++].i = 0;
    L98974893:
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokespecial org/luaj/vm2/Upvaldesc.<init>(Lorg/luaj/vm2/LuaString;ZI)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Upvaldesc__init___Lorg_luaj_vm2_LuaString_2ZI_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L98974893 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 146 , L1733947537 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState nups S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nups_116;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState nups S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nups_116 = stack[sp + 1].i;
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

void bridge_org_luaj_vm2_compiler_FuncState_newupvalue__Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_newupvalue__Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 3
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_searchvar__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1509, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 151 , L346377974 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 151;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L546446235:
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L141015648;
    ; 
    //  line no 152 , L1537689020 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getlocvar(I)Lorg/luaj/vm2/LocVars;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LocVars* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 7);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LocVars varname Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LocVars*)rstack[sp - 1].obj)->varname_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.eq_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 31, 80);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1699443392;
    ; 
    //  line no 153 , L1437983537 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1699443392:
    //  line no 151 , L1699443392 , bytecode index = 
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L546446235;
    L141015648:
    //  line no 155 , L141015648 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_org_luaj_vm2_compiler_FuncState_searchvar__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_searchvar__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_FuncState_markupval__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1510, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 159 , L23053378 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 159;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->bl_107;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    L1060928475:
    //  line no 160 , L1060928475 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1164622694;
    ; 
    //  line no 161 , L44278425 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt previous Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->previous_0;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1060928475;
    L1164622694:
    //  line no 162 , L1164622694 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/compiler/FuncState$BlockCnt upval Z
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp + 0].obj)->upval_4 = stack[sp + 1].i;
    ; 
    //  line no 163 , L2107706203 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_markupval__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_markupval__I_V(runtime, ins);
}


// locals: 6
// stack: 4
// args: 5
s32 func_org_luaj_vm2_compiler_FuncState_singlevaraux__Lorg_luaj_vm2_compiler_FuncState_2Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_FuncState* p0, struct org_luaj_vm2_compiler_FuncState* p1, struct org_luaj_vm2_LuaString* p2, struct org_luaj_vm2_compiler_LexState_00024expdesc* p3, s32 p4){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1511, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    ; 
    //  line no 166 , L834562889 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 166;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L773238925;
    ; 
    //  line no 167 , L1536728519 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L773238925:
    //  line no 168 , L773238925 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.searchvar(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 264, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 169 , L7395550 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  < 0) goto L1112940474;
    ; 
    //  line no 170 , L1499418021 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.init(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 197, 0);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 171 , L1186371052 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  != 0) goto L1082528716;
    ; 
    //  line no 172 , L845119401 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.markupval(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 12);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1082528716:
    //  line no 173 , L1082528716 , bytecode index = 
    //  bipush 7
    stack[sp++].i = 7;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1112940474:
    //  line no 175 , L1112940474 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.searchupvalue(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 264, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 176 , L298724898 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  >= 0) goto L1671811074;
    ; 
    //  line no 177 , L332244937 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState prev Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->prev_105;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/compiler/FuncState.singlevaraux(Lorg/luaj/vm2/compiler/FuncState;Lorg/luaj/vm2/LuaString;Lorg/luaj/vm2/compiler/LexState$expdesc;I)I
    {
        sp -= 5;
        stack[sp].i = func_org_luaj_vm2_compiler_FuncState_singlevaraux__Lorg_luaj_vm2_compiler_FuncState_2Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1520836654;
    ; 
    //  line no 178 , L989440614 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1520836654:
    //  line no 180 , L1520836654 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.newupvalue(Lorg/luaj/vm2/LuaString;Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 10);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    L1671811074:
    //  line no 182 , L1671811074 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp++].i = local[5].i;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.init(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 197, 0);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 183 , L1997625595 , bytecode index = 
    //  bipush 8
    stack[sp++].i = 8;
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

void bridge_org_luaj_vm2_compiler_FuncState_singlevaraux__Lorg_luaj_vm2_compiler_FuncState_2Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_singlevaraux__Lorg_luaj_vm2_compiler_FuncState_2Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(runtime, para[0].obj, para[1].obj, para[2].obj, para[3].obj, para[4].i);
}


// locals: 5
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_movegotosout__Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_FuncState_00024BlockCnt* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1512, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 194 , L1657842786 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 194;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt firstgoto S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->firstgoto_2;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 195 , L353206468 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata gt [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->gt_2;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    L1747371038:
    //  line no 198 , L1747371038 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L50345623;
    ; 
    //  line no 199 , L1691629865 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1691629865 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 200 , L489070295 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1132379993;
    ; 
    //  line no 201 , L1103666479 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt upval Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->upval_4;
    sp += 0;
    if(stack[--sp].i  == 0) goto L68217166;
    ; 
    //  line no 202 , L761863997 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchclose(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L68217166:
    //  line no 203 , L68217166 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp + 0].obj)->nactvar_3 = stack[sp + 1].i;
    L1132379993:
    //  line no 205 , L1132379993 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.findlabel(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 47);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L467401150;
    ; 
    //  line no 206 , L511651343 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    L467401150:
    //  line no 207 , L467401150 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1747371038;
    L50345623:
    //  line no 208 , L50345623 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_movegotosout__Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_movegotosout__Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_compiler_FuncState_enterblock__Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2Z_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_FuncState_00024BlockCnt* p0, s8 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1513, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 211 , L2027133545 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 211;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/FuncState$BlockCnt isloop Z
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp + 0].obj)->isloop_5 = stack[sp + 1].i;
    ; 
    //  line no 212 , L1015122628 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    // putfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp + 0].obj)->nactvar_3 = stack[sp + 1].i;
    ; 
    //  line no 213 , L1533662221 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
    sp += 0;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState$BlockCnt firstlabel S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp + 0].obj)->firstlabel_1 = stack[sp + 1].i;
    ; 
    //  line no 214 , L1897221921 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
    sp += 0;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState$BlockCnt firstgoto S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp + 0].obj)->firstgoto_2 = stack[sp + 1].i;
    ; 
    //  line no 215 , L368153528 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/FuncState$BlockCnt upval Z
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp + 0].obj)->upval_4 = stack[sp + 1].i;
    ; 
    //  line no 216 , L622263400 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->bl_107;
    sp += 0;
    // putfield org/luaj/vm2/compiler/FuncState$BlockCnt previous Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp + 0].obj)->previous_0 = rstack[sp + 1].obj;
    ; 
    //  line no 217 , L810196347 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->bl_107 = rstack[sp + 1].obj;
    ; 
    //  line no 218 , L1811787796 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1921553024;
    // iconst_1
    stack[sp++].i = 1;
    goto L1617937669;
    L1921553024:
    // iconst_0
    stack[sp++].i = 0;
    L1617937669:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 219 , L78265654 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_enterblock__Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_enterblock__Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2Z_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_FuncState_leaveblock___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1514, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 222 , L880533231 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 222;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->bl_107;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 223 , L715289224 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt previous Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->previous_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L2134157671;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt upval Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->upval_4;
    sp += 0;
    if(stack[--sp].i  == 0) goto L2134157671;
    ; 
    //  line no 225 , L2011695710 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.jump()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 226 , L495857386 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchclose(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 227 , L604060129 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchtohere(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 34);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2134157671:
    //  line no 229 , L2134157671 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt isloop Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->isloop_5;
    sp += 0;
    if(stack[--sp].i  == 0) goto L2124731287;
    ; 
    //  line no 230 , L1227459815 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.breaklabel()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 50);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2124731287:
    //  line no 231 , L2124731287 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt previous Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->previous_0;
    sp += 0;
    // putfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->bl_107 = rstack[sp + 1].obj;
    ; 
    //  line no 232 , L624693846 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.removevars(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 8);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 233 , L148891937 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1346354118;
    // iconst_1
    stack[sp++].i = 1;
    goto L1442077586;
    L1346354118:
    // iconst_0
    stack[sp++].i = 0;
    L1442077586:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 234 , L278879704 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    ; 
    //  line no 235 , L1744713739 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt firstlabel S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->firstlabel_1;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1label_5 = stack[sp + 1].i;
    ; 
    //  line no 236 , L1244815033 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt previous Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->previous_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1038988454;
    ; 
    //  line no 237 , L1475759966 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.movegotosout(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*) = find_method(__ins->vm_table, 264, 13);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1096682443;
    L1038988454:
    //  line no 238 , L1038988454 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt firstgoto S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->firstgoto_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1096682443;
    ; 
    //  line no 239 , L423711439 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata gt [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->gt_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt firstgoto S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->firstgoto_2;
    sp += 0;
    // arrload __refer  ,  L423711439 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.undefgoto(Lorg/luaj/vm2/compiler/LexState$Labeldesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024Labeldesc*) = find_method(__ins->vm_table, 266, 51);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1096682443:
    //  line no 240 , L1096682443 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_leaveblock___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_leaveblock___V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_FuncState_closelistfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024ConsControl* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1515, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 243 , L741390111 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 243;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    if(stack[--sp].i  != 0) goto L495051009;
    ; 
    //  line no 244 , L247795540 , bytecode index = 
    method_exit(runtime);
    return;
    L495051009:
    //  line no 245 , L495051009 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2nextreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 52);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 246 , L200744172 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 247 , L584501954 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->tostore_4;
    sp += 0;
    //  bipush 50
    stack[sp++].i = 50;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L818785904;
    ; 
    //  line no 248 , L374646930 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl t Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->t_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl na I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->na_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->tostore_4;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.setlist(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 77);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 249 , L628610760 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->tostore_4 = stack[sp + 1].i;
    L818785904:
    //  line no 251 , L818785904 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_closelistfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_closelistfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_FuncState_hasmultret__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1516, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 254 , L1811942924 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 254;
    stack[sp++].i = local[1].i;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1596144422;
    stack[sp++].i = local[1].i;
    //  bipush 13
    stack[sp++].i = 13;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1157199772;
    L1596144422:
    // iconst_1
    stack[sp++].i = 1;
    goto L1769252629;
    L1157199772:
    // iconst_0
    stack[sp++].i = 0;
    L1769252629:
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

void bridge_org_luaj_vm2_compiler_FuncState_hasmultret__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_hasmultret__I_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_FuncState_lastlistfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024ConsControl* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1517, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 258 , L1137989065 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 258;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->tostore_4;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1285463992;
    method_exit(runtime);
    return;
    L1285463992:
    //  line no 259 , L1285463992 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.hasmultret(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 17);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L10405169;
    ; 
    //  line no 260 , L1075082007 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.setmultret(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 261 , L554634433 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl t Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->t_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl na I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->na_3;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.setlist(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 77);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 262 , L424944647 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl na I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->na_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl na I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->na_3 = stack[sp + 1].i;
    goto L1872088401;
    L10405169:
    //  line no 265 , L10405169 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    if(stack[--sp].i  == 0) goto L209360767;
    ; 
    //  line no 266 , L1439361845 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2nextreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 52);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L209360767:
    //  line no 267 , L209360767 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl t Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->t_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl na I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->na_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->tostore_4;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.setlist(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 77);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1872088401:
    //  line no 269 , L1872088401 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_lastlistfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_lastlistfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(runtime, ins);
}


// locals: 8
// stack: 5
// args: 2
void func_org_luaj_vm2_compiler_FuncState_nil__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1518, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 278 , L741883443 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 278;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 279 , L1956746660 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState lasttarget I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->lasttarget_109;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1982876486;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L1982876486;
    ; 
    //  line no 280 , L799260198 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s32  ,  L799260198 bc index = 
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
    local[4].i = stack[--sp].i;
    ; 
    //  line no 281 , L1116197959 , bytecode index = 
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_4
    stack[sp++].i = 4;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1982876486;
    ; 
    //  line no 282 , L989033734 , bytecode index = 
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_A(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1A__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 283 , L1315795813 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 284 , L2081269248 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L13918250;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[6].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L565079667;
    L13918250:
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1982876486;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1982876486;
    L565079667:
    //  line no 286 , L565079667 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L75356024;
    ; 
    //  line no 287 , L357653585 , bytecode index = 
    stack[sp++].i = local[5].i;
    local[1].i = stack[--sp].i;
    L75356024:
    //  line no 288 , L75356024 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L916958177;
    ; 
    //  line no 289 , L1688770224 , bytecode index = 
    stack[sp++].i = local[6].i;
    local[3].i = stack[--sp].i;
    L916958177:
    //  line no 290 , L916958177 , bytecode index = 
    // new org/luaj/vm2/compiler/InstructionPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 263);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokespecial org/luaj/vm2/compiler/InstructionPtr.<init>([II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_InstructionPtr__init____3II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 291 , L235162442 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_A(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1A__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 292 , L296234255 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_B(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1B__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 293 , L450589816 , bytecode index = 
    method_exit(runtime);
    return;
    L1982876486:
    //  line no 297 , L1982876486 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 298 , L988179589 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_nil__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_nil__II_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 6
// args: 0
s32 func_org_luaj_vm2_compiler_FuncState_jump___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1519, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 302 , L1174714624 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 302;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState jpc Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->jpc_110;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 303 , L121466124 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState jpc Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->jpc_110;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 304 , L238467882 , bytecode index = 
    // new org/luaj/vm2/compiler/IntPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 132);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 23
    stack[sp++].i = 23;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_-1
    stack[sp++].i = -1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeAsBx(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial org/luaj/vm2/compiler/IntPtr.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_IntPtr__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 305 , L962700314 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.concat(Lorg/luaj/vm2/compiler/IntPtr;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*,s32) = find_method(__ins->vm_table, 264, 35);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 306 , L1515116175 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
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

void bridge_org_luaj_vm2_compiler_FuncState_jump___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_jump___I(runtime, ins);
}


// locals: 3
// stack: 5
// args: 2
void func_org_luaj_vm2_compiler_FuncState_ret__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1520, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 310 , L220432328 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 310;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 31
    stack[sp++].i = 31;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 311 , L961983234 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_ret__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_ret__II_V(runtime, ins, para[0].i);
}


// locals: 5
// stack: 5
// args: 4
s32 func_org_luaj_vm2_compiler_FuncState_condjump__IIII_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1521, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 314 , L533956291 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 314;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 315 , L249515830 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.jump()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_condjump__IIII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_condjump__IIII_I(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 5
// stack: 4
// args: 2
void func_org_luaj_vm2_compiler_FuncState_fixjump__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1522, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 319 , L269458366 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 319;
    // new org/luaj/vm2/compiler/InstructionPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 263);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokespecial org/luaj/vm2/compiler/InstructionPtr.<init>([II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_InstructionPtr__init____3II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 320 , L334099170 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 321 , L1731967318 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L215478702;
    // iconst_1
    stack[sp++].i = 1;
    goto L1625901537;
    L215478702:
    // iconst_0
    stack[sp++].i = 0;
    L1625901537:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 322 , L1011599868 , bytecode index = 
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/Math.abs(I)I
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Math_abs__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    stack[sp++].i = 0x1ffff;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L109065770;
    ; 
    //  line no 323 , L896134613 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2798);
    // invokevirtual org/luaj/vm2/compiler/LexState.syntaxerror(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L109065770:
    //  line no 324 , L109065770 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_sBx(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1sBx__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 325 , L526720216 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_fixjump__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_fixjump__II_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_compiler_FuncState_getlabel___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1523, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 333 , L2050320909 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 333;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // putfield org/luaj/vm2/compiler/FuncState lasttarget I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->lasttarget_109 = stack[sp + 1].i;
    ; 
    //  line no 334 , L13117403 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
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

void bridge_org_luaj_vm2_compiler_FuncState_getlabel___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_getlabel___I(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_getjump__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1524, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 339 , L1401737458 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 339;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L1401737458 bc index = 
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
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_sBx(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1sBx__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 341 , L37268876 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1125098735;
    ; 
    //  line no 343 , L392289808 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1125098735:
    //  line no 346 , L1125098735 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
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

void bridge_org_luaj_vm2_compiler_FuncState_getjump__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_getjump__I_I(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
struct org_luaj_vm2_compiler_InstructionPtr* func_org_luaj_vm2_compiler_FuncState_getjumpcontrol__I_Lorg_luaj_vm2_compiler_InstructionPtr_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1525, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 351 , L1699486292 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 351;
    // new org/luaj/vm2/compiler/InstructionPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 263);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokespecial org/luaj/vm2/compiler/InstructionPtr.<init>([II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_InstructionPtr__init____3II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 352 , L1541075662 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1121072891;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/InstructionPtr code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp - 1].obj)->code_0;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/InstructionPtr idx I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp - 1].obj)->idx_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s32  ,  L1541075662 bc index = 
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
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.testTMode(I)Z
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_testTMode__I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1121072891;
    ; 
    //  line no 353 , L485047320 , bytecode index = 
    // new org/luaj/vm2/compiler/InstructionPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 263);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/InstructionPtr code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp - 1].obj)->code_0;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/InstructionPtr idx I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp - 1].obj)->idx_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokespecial org/luaj/vm2/compiler/InstructionPtr.<init>([II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_InstructionPtr__init____3II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1121072891:
    //  line no 355 , L1121072891 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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

void bridge_org_luaj_vm2_compiler_FuncState_getjumpcontrol__I_Lorg_luaj_vm2_compiler_InstructionPtr_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_FuncState_getjumpcontrol__I_Lorg_luaj_vm2_compiler_InstructionPtr_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_FuncState_need_1value__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1526, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    L355649049:
    //  line no 364 , L355649049 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 364;
    stack[sp++].i = local[1].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1174687658;
    ; 
    //  line no 365 , L324579982 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getjumpcontrol(I)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 26);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 366 , L444127949 , bytecode index = 
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 28
    stack[sp++].i = 28;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L435803541;
    ; 
    //  line no 367 , L2112135199 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L435803541:
    //  line no 364 , L435803541 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getjump(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 25);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L355649049;
    L1174687658:
    //  line no 369 , L1174687658 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
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

void bridge_org_luaj_vm2_compiler_FuncState_need_1value__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_need_1value__I_Z(runtime, ins);
}


// locals: 4
// stack: 5
// args: 2
s8 func_org_luaj_vm2_compiler_FuncState_patchtestreg__II_Z(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1527, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 374 , L2005706991 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 374;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getjumpcontrol(I)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 26);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 375 , L546217718 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 28
    stack[sp++].i = 28;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2024945312;
    ; 
    //  line no 377 , L639467920 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2024945312:
    //  line no 378 , L2024945312 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  sipush 255
    stack[sp++].i = 255;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L876908140;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L876908140;
    ; 
    //  line no 379 , L1625939772 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_A(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1A__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L151515831;
    L876908140:
    //  line no 382 , L876908140 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 27
    stack[sp++].i = 27;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/Lua.GETARG_C(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1C__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.CREATE_ABC(IIII)I
    {
        sp -= 5;
        stack[sp].i = func_org_luaj_vm2_compiler_Constants_CREATE_1ABC__IIII_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.set(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 263, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L151515831:
    //  line no 384 , L151515831 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
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

void bridge_org_luaj_vm2_compiler_FuncState_patchtestreg__II_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_patchtestreg__II_Z(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_removevalues__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1528, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    L1400582895:
    //  line no 389 , L1400582895 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 389;
    stack[sp++].i = local[1].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2110068611;
    ; 
    //  line no 390 , L1264701638 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    //  sipush 255
    stack[sp++].i = 255;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchtestreg(II)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 28);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 389 , L1870749311 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getjump(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 25);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1400582895;
    L2110068611:
    //  line no 391 , L2110068611 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_removevalues__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_removevalues__I_V(runtime, ins);
}


// locals: 6
// stack: 3
// args: 4
void func_org_luaj_vm2_compiler_FuncState_patchlistaux__IIII_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1529, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    L810262298:
    //  line no 394 , L810262298 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 394;
    stack[sp++].i = local[1].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1969856053;
    ; 
    //  line no 395 , L276714561 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getjump(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 25);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 396 , L1256893889 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchtestreg(II)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 28);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L641030345;
    ; 
    //  line no 397 , L521466380 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.fixjump(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 23);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L2108318195;
    L641030345:
    //  line no 399 , L641030345 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.fixjump(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 23);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2108318195:
    //  line no 400 , L2108318195 , bytecode index = 
    stack[sp++].i = local[5].i;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 401 , L1647402786 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L810262298;
    L1969856053:
    //  line no 402 , L1969856053 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_patchlistaux__IIII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_patchlistaux__IIII_V(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 1
// stack: 5
// args: 0
void func_org_luaj_vm2_compiler_FuncState_dischargejpc___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1530, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 405 , L1458748394 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 405;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState jpc Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->jpc_110;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchlistaux(IIII)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 30);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 406 , L2029645118 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState jpc Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->jpc_110;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 407 , L274298188 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_dischargejpc___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_dischargejpc___V(runtime, ins);
}


// locals: 3
// stack: 5
// args: 2
void func_org_luaj_vm2_compiler_FuncState_patchlist__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1531, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 410 , L1223144402 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 410;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2134915053;
    ; 
    //  line no 411 , L619241052 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchtohere(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 34);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1677984391;
    L2134915053:
    //  line no 413 , L2134915053 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L285754614;
    // iconst_1
    stack[sp++].i = 1;
    goto L1871312485;
    L285754614:
    // iconst_0
    stack[sp++].i = 0;
    L1871312485:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 414 , L233951222 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchlistaux(IIII)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 30);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1677984391:
    //  line no 416 , L1677984391 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_patchlist__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_patchlist__II_V(runtime, ins, para[0].i);
}


// locals: 4
// stack: 3
// args: 2
void func_org_luaj_vm2_compiler_FuncState_patchclose__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1532, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 419 , L450438867 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 419;
    // iinc slot 2 value 1
    local[2].i += 1;
    L977522995:
    //  line no 420 , L977522995 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L969811954;
    ; 
    //  line no 421 , L1596653154 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getjump(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 25);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 422 , L211199210 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L211199210 bc index = 
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
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 23
    stack[sp++].i = 23;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L678962690;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L211199210 bc index = 
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
    ; 
    //  line no 423 , L1623287112 , bytecode index = 
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_A(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1A__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1745903324;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L1623287112 bc index = 
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
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_A(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1A__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L678962690;
    L1745903324:
    // iconst_1
    stack[sp++].i = 1;
    goto L1360533184;
    L678962690:
    // iconst_0
    stack[sp++].i = 0;
    L1360533184:
    //  line no 422 , L1360533184 , bytecode index = 
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 424 , L951677655 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_A([III)V
    {
        sp -= 4;
        func_org_luaj_vm2_compiler_Constants_SETARG_1A___3III_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 425 , L1396292525 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 426 , L959834536 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L977522995;
    L969811954:
    //  line no 427 , L969811954 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_patchclose__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_patchclose__II_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_patchtohere__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1533, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 430 , L1532409428 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 430;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getlabel()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 24);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 431 , L1160546880 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState jpc Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->jpc_110;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.concat(Lorg/luaj/vm2/compiler/IntPtr;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*,s32) = find_method(__ins->vm_table, 264, 35);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 432 , L1396851684 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_patchtohere__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_patchtohere__I_V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 2
void func_org_luaj_vm2_compiler_FuncState_concat__Lorg_luaj_vm2_compiler_IntPtr_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_IntPtr* p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1534, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 435 , L1191874608 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 435;
    stack[sp++].i = local[2].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1725266971;
    ; 
    //  line no 436 , L659115590 , bytecode index = 
    method_exit(runtime);
    return;
    L1725266971:
    //  line no 437 , L1725266971 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L223975178;
    ; 
    //  line no 438 , L507583873 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    goto L1404669942;
    L223975178:
    //  line no 440 , L223975178 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    local[3].i = stack[--sp].i;
    L1047515321:
    //  line no 442 , L1047515321 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getjump(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 25);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[4].i = stack[--sp].i;
    ; 
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1769227988;
    ; 
    //  line no 444 , L1991094835 , bytecode index = 
    stack[sp++].i = local[4].i;
    local[3].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1047515321;
    L1769227988:
    //  line no 445 , L1769227988 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.fixjump(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 23);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1404669942:
    //  line no 447 , L1404669942 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_concat__Lorg_luaj_vm2_compiler_IntPtr_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_concat__Lorg_luaj_vm2_compiler_IntPtr_2I_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_FuncState_checkstack__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1535, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 450 , L910504711 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 450;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 451 , L2110558717 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype maxstacksize I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->maxstacksize_11;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1726715997;
    ; 
    //  line no 452 , L1787987889 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  sipush 250
    stack[sp++].i = 250;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1968196847;
    ; 
    //  line no 453 , L1821010113 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2815);
    // invokevirtual org/luaj/vm2/compiler/LexState.syntaxerror(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1968196847:
    //  line no 454 , L1968196847 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/Prototype maxstacksize I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->maxstacksize_11 = stack[sp + 1].i;
    L1726715997:
    //  line no 456 , L1726715997 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_checkstack__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_checkstack__I_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_reserveregs__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1536, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 459 , L684230144 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 459;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.checkstack(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 36);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 460 , L1602785474 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    ; 
    //  line no 461 , L1618683794 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_reserveregs__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_reserveregs__I_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_freereg__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1537, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 464 , L327840833 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 464;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.ISK(I)Z
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_ISK__I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L136312946;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L136312946;
    ; 
    //  line no 465 , L828447060 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    ; 
    //  line no 466 , L1046056441 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2117193231;
    // iconst_1
    stack[sp++].i = 1;
    goto L161113555;
    L2117193231:
    // iconst_0
    stack[sp++].i = 0;
    L161113555:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L136312946:
    //  line no 468 , L136312946 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_freereg__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_freereg__I_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_FuncState_freeexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1538, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 471 , L1120670624 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 471;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 6
    stack[sp++].i = 6;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L855501888;
    ; 
    //  line no 472 , L1746117425 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freereg(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 38);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L855501888:
    //  line no 473 , L855501888 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_freeexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_freeexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_addk__Lorg_luaj_vm2_LuaValue_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1539, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 475 , L967531000 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 475;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState h Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->h_104;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1693003105;
    ; 
    //  line no 476 , L286658790 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 27);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/HashMap.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/FuncState h Ljava/util/HashMap;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->h_104 = rstack[sp + 1].obj;
    goto L1255445356;
    L1693003105:
    //  line no 477 , L1693003105 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState h Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->h_104;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.containsKey(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 4);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1255445356;
    ; 
    //  line no 478 , L701724503 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState h Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->h_104;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.get(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/lang/Integer
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 351);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Integer.intValue()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 267, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1255445356:
    //  line no 480 , L1255445356 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nk I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nk_111;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 481 , L83674409 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState h Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->h_104;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/Integer.valueOf(I)Ljava/lang/Integer;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_valueOf__I_Ljava_lang_Integer_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/HashMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 482 , L634156144 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 483 , L1273879638 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L2041996211;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nk I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nk_111;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // arraylength  label  L1273879638
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L461448225;
    L2041996211:
    //  line no 484 , L2041996211 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nk I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nk_111;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/FuncState.realloc([Lorg/luaj/vm2/LuaValue;I)[Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3Lorg_luaj_vm2_LuaValue_2I__3Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->k_0 = rstack[sp + 1].obj;
    L461448225:
    //  line no 485 , L461448225 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState nk I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nk_111;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/FuncState nk I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nk_111 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L461448225 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 486 , L1562950869 , bytecode index = 
    stack[sp++].i = local[2].i;
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

void bridge_org_luaj_vm2_compiler_FuncState_addk__Lorg_luaj_vm2_LuaValue_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_addk__Lorg_luaj_vm2_LuaValue_2_I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_stringK__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1540, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 490 , L845388562 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 490;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.addk(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 264, 40);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_stringK__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_stringK__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 5
// stack: 4
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_numberK__Lorg_luaj_vm2_LuaValue_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1541, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 494 , L948424584 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 494;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaDouble
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 550);
    if(stack[--sp].i  == 0) goto L1447685190;
    ; 
    //  line no 495 , L2027701910 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.todouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 18);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[2].d = stack[sp].d;
    ; 
    //  line no 496 , L1345293143 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    stack[sp - 2].i = (s32)stack[sp - 2].d; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 497 , L1448277333 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    stack[sp++].i = local[4].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1447685190;
    ; 
    //  line no 498 , L1340086277 , bytecode index = 
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    L1447685190:
    //  line no 500 , L1447685190 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.addk(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 264, 40);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_numberK__Lorg_luaj_vm2_LuaValue_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_numberK__Lorg_luaj_vm2_LuaValue_2_I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_boolK__Z_I(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1542, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 504 , L2034975583 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 504;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L955443582;
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L2006842965;
    L955443582:
    // getstatic org/luaj/vm2/LuaValue FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L2006842965:
    // invokevirtual org/luaj/vm2/compiler/FuncState.addk(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 264, 40);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_boolK__Z_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_boolK__Z_I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_compiler_FuncState_nilK___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1543, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 508 , L289711450 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 508;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.addk(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 264, 40);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_nilK___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_nilK___I(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_org_luaj_vm2_compiler_FuncState_setreturns__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1544, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 512 , L648358364 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 512;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L643587433;
    ; 
    //  line no 513 , L310792845 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcodePtr(Lorg/luaj/vm2/compiler/LexState$expdesc;)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_C(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1C__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1019348343;
    L643587433:
    //  line no 514 , L643587433 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 13
    stack[sp++].i = 13;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1019348343;
    ; 
    //  line no 515 , L866529530 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcodePtr(Lorg/luaj/vm2/compiler/LexState$expdesc;)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_B(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1B__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 516 , L2002097394 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcodePtr(Lorg/luaj/vm2/compiler/LexState$expdesc;)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_A(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1A__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 517 , L1466413743 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.reserveregs(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 37);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1019348343:
    //  line no 519 , L1019348343 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_setreturns__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_setreturns__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_setoneret__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1545, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 522 , L2030121719 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 522;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L573102881;
    ; 
    //  line no 523 , L1219553025 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 6
    stack[sp++].i = 6;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 524 , L605686842 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcode(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 1);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_A(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1A__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    goto L1417413828;
    L573102881:
    //  line no 525 , L573102881 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 13
    stack[sp++].i = 13;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1417413828;
    ; 
    //  line no 526 , L820587705 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcodePtr(Lorg/luaj/vm2/compiler/LexState$expdesc;)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_2
    stack[sp++].i = 2;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_B(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1B__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 527 , L2142129482 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    L1417413828:
    //  line no 529 , L1417413828 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_setoneret__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_setoneret__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 3
// stack: 6
// args: 1
void func_org_luaj_vm2_compiler_FuncState_dischargevars__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1546, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 532 , L1062181581 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 532;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    switch(stack[--sp].i){
        case 7:
            goto L1274225913;
        case 8:
            goto L1333529571;
        case 9:
            goto L212232499;
        case 10:
            goto L1186657657;
        case 11:
            goto L1186657657;
        case 12:
            goto L489047267;
        case 13:
            goto L489047267;
        default:
            goto L1186657657;
    }
    L1274225913:
    //  line no 534 , L1274225913 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 6
    stack[sp++].i = 6;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 535 , L1335914322 , bytecode index = 
    goto L1186657657;
    L1333529571:
    //  line no 538 , L1333529571 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_5
    stack[sp++].i = 5;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 539 , L1613514326 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 540 , L1610372241 , bytecode index = 
    goto L1186657657;
    L212232499:
    //  line no 543 , L212232499 , bytecode index = 
    //  bipush 6
    stack[sp++].i = 6;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 544 , L1884422865 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_idx S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1idx_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freereg(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 38);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 545 , L1011104118 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_vt S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1vt_2;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1046009438;
    ; 
    //  line no 546 , L62739928 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_t S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1t_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freereg(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 38);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 547 , L1671007220 , bytecode index = 
    //  bipush 7
    stack[sp++].i = 7;
    local[2].i = stack[--sp].i;
    L1046009438:
    //  line no 549 , L1046009438 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_t S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1t_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_idx S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1idx_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 550 , L2114687352 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 551 , L102318785 , bytecode index = 
    goto L1186657657;
    L489047267:
    //  line no 555 , L489047267 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.setoneret(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 46);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 556 , L1868809295 , bytecode index = 
    goto L1186657657;
    L1186657657:
    //  line no 561 , L1186657657 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_dischargevars__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_dischargevars__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 3
s32 func_org_luaj_vm2_compiler_FuncState_code_1label__III_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1547, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 564 , L1655242052 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 564;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getlabel()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 24);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 565 , L778806426 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_code_1label__III_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_code_1label__III_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 4
// stack: 5
// args: 2
void func_org_luaj_vm2_compiler_FuncState_discharge2reg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1548, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 569 , L1323514615 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 569;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 570 , L1795468466 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    switch(stack[--sp].i){
        case 1:
            goto L486759395;
        case 2:
            goto L1247866422;
        case 3:
            goto L1247866422;
        case 4:
            goto L80722676;
        case 5:
            goto L1492822331;
        case 6:
            goto L1596009860;
        case 7:
            goto L406358588;
        case 8:
            goto L406358588;
        case 9:
            goto L406358588;
        case 10:
            goto L406358588;
        case 11:
            goto L310212872;
        default:
            goto L406358588;
    }
    L486759395:
    //  line no 572 , L486759395 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.nil(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 19);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 573 , L1805412777 , bytecode index = 
    goto L1713546896;
    L1247866422:
    //  line no 577 , L1247866422 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L817490653;
    // iconst_1
    stack[sp++].i = 1;
    goto L1232433403;
    L817490653:
    // iconst_0
    stack[sp++].i = 0;
    L1232433403:
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 579 , L1093441885 , bytecode index = 
    goto L1713546896;
    L80722676:
    //  line no 582 , L80722676 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeK(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 76);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 583 , L843686350 , bytecode index = 
    goto L1713546896;
    L1492822331:
    //  line no 586 , L1492822331 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc$U.nval()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 268, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/FuncState.numberK(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 264, 42);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeK(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 76);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 587 , L1306085976 , bytecode index = 
    goto L1713546896;
    L310212872:
    //  line no 590 , L310212872 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcodePtr(Lorg/luaj/vm2/compiler/LexState$expdesc;)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 591 , L793319856 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_A(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1A__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 592 , L176851829 , bytecode index = 
    goto L1713546896;
    L1596009860:
    //  line no 595 , L1596009860 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1713546896;
    ; 
    //  line no 596 , L1974606907 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L1713546896;
    L406358588:
    //  line no 600 , L406358588 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1925059423;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L358420513;
    L1925059423:
    // iconst_1
    stack[sp++].i = 1;
    goto L1272115420;
    L358420513:
    // iconst_0
    stack[sp++].i = 0;
    L1272115420:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 601 , L778337881 , bytecode index = 
    method_exit(runtime);
    return;
    L1713546896:
    //  line no 604 , L1713546896 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 605 , L742568993 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 6
    stack[sp++].i = 6;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 606 , L1373861264 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_discharge2reg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_discharge2reg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_FuncState_discharge2anyreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1549, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 609 , L7346738 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 609;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 6
    stack[sp++].i = 6;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L967460257;
    ; 
    //  line no 610 , L1940912369 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.reserveregs(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 37);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 611 , L667680223 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/compiler/FuncState.discharge2reg(Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 49);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L967460257:
    //  line no 613 , L967460257 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_discharge2anyreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_discharge2anyreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 7
// stack: 5
// args: 2
void func_org_luaj_vm2_compiler_FuncState_exp2reg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, s32 p1){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1550, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 616 , L1275464847 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 616;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.discharge2reg(Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 49);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 617 , L1080167822 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L943666520;
    ; 
    //  line no 618 , L1236303587 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.concat(Lorg/luaj/vm2/compiler/IntPtr;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*,s32) = find_method(__ins->vm_table, 264, 35);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L943666520:
    //  line no 619 , L943666520 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.hasjumps()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 197, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L892231982;
    ; 
    //  line no 621 , L1710228600 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 622 , L606365803 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 623 , L1856589162 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.need_value(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 27);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L675833472;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.need_value(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 27);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1300132917;
    L675833472:
    //  line no 624 , L675833472 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1243495105;
    // iconst_-1
    stack[sp++].i = -1;
    goto L1853422837;
    L1243495105:
    //  line no 625 , L1243495105 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.jump()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1853422837:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 626 , L91220956 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.code_label(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 48);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 627 , L999221400 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.code_label(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 48);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 628 , L8197402 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[6].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchtohere(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 34);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1300132917:
    //  line no 630 , L1300132917 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getlabel()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 24);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 631 , L692838068 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchlistaux(IIII)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 30);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 632 , L1392570698 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchlistaux(IIII)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 30);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L892231982:
    //  line no 634 , L892231982 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 635 , L528877978 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 636 , L2008746677 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 6
    stack[sp++].i = 6;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 637 , L15910024 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_exp2reg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_exp2reg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_FuncState_exp2nextreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1551, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 640 , L2076829355 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 640;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 641 , L1418245573 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 642 , L1112075608 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.reserveregs(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 37);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 643 , L1898751355 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2reg(Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 51);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 644 , L1164241227 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_exp2nextreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_exp2nextreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_exp2anyreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1552, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 647 , L1366581056 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 647;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 648 , L1164394344 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 6
    stack[sp++].i = 6;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L665565246;
    ; 
    //  line no 649 , L1776486598 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.hasjumps()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 197, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L438228197;
    ; 
    //  line no 650 , L1719547057 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L438228197:
    //  line no 651 , L438228197 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L665565246;
    ; 
    //  line no 652 , L476973576 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2reg(Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 51);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 653 , L1840940155 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L665565246:
    //  line no 656 , L665565246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2nextreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 52);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 657 , L32496853 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
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

void bridge_org_luaj_vm2_compiler_FuncState_exp2anyreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_exp2anyreg__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_FuncState_exp2anyregup__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1553, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 661 , L2062667107 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 661;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 8
    stack[sp++].i = 8;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1129387802;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.hasjumps()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 197, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1009218257;
    L1129387802:
    //  line no 662 , L1129387802 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 53);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1009218257:
    //  line no 663 , L1009218257 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_exp2anyregup__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_exp2anyregup__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_FuncState_exp2val__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1554, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 666 , L1128158063 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 666;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.hasjumps()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 197, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L144467413;
    ; 
    //  line no 667 , L262815725 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 53);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L941403433;
    L144467413:
    //  line no 669 , L144467413 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L941403433:
    //  line no 670 , L941403433 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_exp2val__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_exp2val__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_exp2RK__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1555, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 673 , L1649498695 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 673;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2val(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 55);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 674 , L1012552887 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    switch(stack[--sp].i){
        case 1:
            goto L688988404;
        case 2:
            goto L688988404;
        case 3:
            goto L688988404;
        case 4:
            goto L1098568947;
        case 5:
            goto L795594631;
        default:
            goto L1643299824;
    }
    L688988404:
    //  line no 678 , L688988404 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState nk I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nk_111;
    sp += 0;
    //  sipush 255
    stack[sp++].i = 255;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1643299824;
    ; 
    //  line no 679 , L1492219097 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2026371507;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.nilK()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 44);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1871542036;
    L2026371507:
    //  line no 680 , L2026371507 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L510368405;
    // iconst_1
    stack[sp++].i = 1;
    goto L1299145277;
    L510368405:
    // iconst_0
    stack[sp++].i = 0;
    L1299145277:
    // invokevirtual org/luaj/vm2/compiler/FuncState.boolK(Z)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 264, 43);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1871542036:
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 681 , L178393154 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 682 , L244577237 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/FuncState.RKASK(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_RKASK__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L795594631:
    //  line no 687 , L795594631 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc$U.nval()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 268, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/FuncState.numberK(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 264, 42);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 688 , L1290698656 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    L1098568947:
    //  line no 692 , L1098568947 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    //  sipush 255
    stack[sp++].i = 255;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1643299824;
    ; 
    //  line no 693 , L2049348234 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/FuncState.RKASK(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_RKASK__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1643299824:
    //  line no 701 , L1643299824 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 53);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_exp2RK__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_exp2RK__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(runtime, ins);
}


// locals: 5
// stack: 5
// args: 2
void func_org_luaj_vm2_compiler_FuncState_storevar__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1556, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 705 , L1904273153 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 705;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    switch(stack[--sp].i){
        case 7:
            goto L13692003;
        case 8:
            goto L94748968;
        case 9:
            goto L1944815218;
        default:
            goto L1311544814;
    }
    L13692003:
    //  line no 707 , L13692003 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 708 , L1497558532 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2reg(Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 51);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 709 , L1584833211 , bytecode index = 
    method_exit(runtime);
    return;
    L94748968:
    //  line no 712 , L94748968 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 53);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 713 , L1970377948 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 9
    stack[sp++].i = 9;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 714 , L1518752790 , bytecode index = 
    goto L351970188;
    L1944815218:
    //  line no 717 , L1944815218 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_vt S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1vt_2;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2146613458;
    //  bipush 10
    stack[sp++].i = 10;
    goto L115086468;
    L2146613458:
    //  bipush 8
    stack[sp++].i = 8;
    L115086468:
    local[3].i = stack[--sp].i;
    ; 
    //  line no 718 , L1855112877 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 719 , L800456240 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_t S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1t_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_idx S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1idx_0;
    sp += 0;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 720 , L1164699452 , bytecode index = 
    goto L351970188;
    L1311544814:
    //  line no 723 , L1311544814 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L351970188:
    //  line no 727 , L351970188 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 728 , L594916129 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_storevar__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_storevar__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 6
// args: 2
void func_org_luaj_vm2_compiler_FuncState_self__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1557, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 732 , L1533972343 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 732;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 53);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 733 , L1101451553 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 734 , L1329897103 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 735 , L1091736037 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual org/luaj/vm2/compiler/FuncState.reserveregs(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 37);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 736 , L1848163207 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 737 , L435175610 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 738 , L1923810797 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 739 , L669200356 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 6
    stack[sp++].i = 6;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 740 , L205278236 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_self__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_self__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_FuncState_invertjump__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1558, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 743 , L1031586763 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 743;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getjumpcontrol(I)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 26);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 744 , L56510351 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.testTMode(I)Z
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_testTMode__I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1835841364;
    rstack[sp++].obj = rlocal[2].obj;
    ; 
    //  line no 745 , L1803361784 , bytecode index = 
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 28
    stack[sp++].i = 28;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1835841364;
    rstack[sp++].obj = rlocal[2].obj;
    ; 
    //  line no 746 , L809822663 , bytecode index = 
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/Lua.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 27
    stack[sp++].i = 27;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1835841364;
    // iconst_1
    stack[sp++].i = 1;
    goto L1104654975;
    L1835841364:
    // iconst_0
    stack[sp++].i = 0;
    L1104654975:
    //  line no 744 , L1104654975 , bytecode index = 
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 748 , L1225353990 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/InstructionPtr.get()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 263, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_A(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1A__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 749 , L1243102466 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L1560670039;
    // iconst_0
    stack[sp++].i = 0;
    goto L557705922;
    L1560670039:
    // iconst_1
    stack[sp++].i = 1;
    L557705922:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 750 , L602858680 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_A(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1A__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 751 , L680865258 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_invertjump__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_invertjump__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 2
s32 func_org_luaj_vm2_compiler_FuncState_jumponcond__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1559, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 754 , L339581587 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 754;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1075996552;
    ; 
    //  line no 755 , L1096411163 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcode(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 1);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 756 , L1532800776 , bytecode index = 
    stack[sp++].i = local[3].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 20
    stack[sp++].i = 20;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1075996552;
    ; 
    //  line no 757 , L600657906 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/FuncState pc I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->pc_108 = stack[sp + 1].i;
    ; 
    //  line no 758 , L1887466020 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 27
    stack[sp++].i = 27;
    stack[sp++].i = local[3].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  == 0) goto L2123846943;
    // iconst_0
    stack[sp++].i = 0;
    goto L1074630954;
    L2123846943:
    // iconst_1
    stack[sp++].i = 1;
    L1074630954:
    // invokevirtual org/luaj/vm2/compiler/FuncState.condjump(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 22);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1075996552:
    //  line no 762 , L1075996552 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.discharge2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 50);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 763 , L167175174 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 764 , L2056566350 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 28
    stack[sp++].i = 28;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.condjump(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 22);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_jumponcond__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_jumponcond__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(runtime, ins, para[0].i);
}


// locals: 3
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_goiftrue__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1560, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 769 , L306674056 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 769;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 770 , L749693202 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    switch(stack[--sp].i){
        case 2:
            goto L874740624;
        case 3:
            goto L1943444495;
        case 4:
            goto L874740624;
        case 5:
            goto L874740624;
        case 6:
            goto L1943444495;
        case 7:
            goto L1943444495;
        case 8:
            goto L1943444495;
        case 9:
            goto L1943444495;
        case 10:
            goto L486662053;
        default:
            goto L1943444495;
    }
    L486662053:
    //  line no 772 , L486662053 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.invertjump(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 59);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 773 , L1244775150 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 774 , L222300483 , bytecode index = 
    goto L571481216;
    L874740624:
    //  line no 779 , L874740624 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 780 , L838800272 , bytecode index = 
    goto L571481216;
    L1943444495:
    //  line no 783 , L1943444495 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.jumponcond(Lorg/luaj/vm2/compiler/LexState$expdesc;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 60);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    L571481216:
    //  line no 787 , L571481216 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.concat(Lorg/luaj/vm2/compiler/IntPtr;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*,s32) = find_method(__ins->vm_table, 264, 35);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 788 , L1973256691 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchtohere(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 34);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 789 , L2015007762 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 790 , L1514955661 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_goiftrue__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_goiftrue__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_goiffalse__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1561, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 794 , L183304529 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 794;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 795 , L645643802 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    switch(stack[--sp].i){
        case 1:
            goto L949314262;
        case 3:
            goto L949314262;
        case 10:
            goto L1511004956;
        default:
            goto L521331027;
    }
    L1511004956:
    //  line no 797 , L1511004956 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 798 , L559998250 , bytecode index = 
    goto L703627308;
    L949314262:
    //  line no 802 , L949314262 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 803 , L979420182 , bytecode index = 
    goto L703627308;
    L521331027:
    //  line no 806 , L521331027 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.jumponcond(Lorg/luaj/vm2/compiler/LexState$expdesc;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 60);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    L703627308:
    //  line no 810 , L703627308 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.concat(Lorg/luaj/vm2/compiler/IntPtr;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*,s32) = find_method(__ins->vm_table, 264, 35);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 811 , L1626529981 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchtohere(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 34);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 812 , L1184694332 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 813 , L1799424291 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_goiffalse__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_goiffalse__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 3
// stack: 6
// args: 1
void func_org_luaj_vm2_compiler_FuncState_codenot__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1562, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 816 , L540923243 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 816;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 817 , L244297136 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    switch(stack[--sp].i){
        case 1:
            goto L1399225534;
        case 2:
            goto L490630452;
        case 3:
            goto L1399225534;
        case 4:
            goto L490630452;
        case 5:
            goto L490630452;
        case 6:
            goto L1857007886;
        case 7:
            goto L1835316563;
        case 8:
            goto L1835316563;
        case 9:
            goto L1835316563;
        case 10:
            goto L648630181;
        case 11:
            goto L1857007886;
        default:
            goto L1835316563;
    }
    L1399225534:
    //  line no 820 , L1399225534 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_2
    stack[sp++].i = 2;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 821 , L1179272258 , bytecode index = 
    goto L678680178;
    L490630452:
    //  line no 826 , L490630452 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_3
    stack[sp++].i = 3;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 827 , L1002911155 , bytecode index = 
    goto L678680178;
    L648630181:
    //  line no 830 , L648630181 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.invertjump(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 59);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 831 , L1467977993 , bytecode index = 
    goto L678680178;
    L1857007886:
    //  line no 835 , L1857007886 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.discharge2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 50);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 836 , L1124317168 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 837 , L1970612644 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 20
    stack[sp++].i = 20;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 838 , L2006835220 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 839 , L1547817015 , bytecode index = 
    goto L678680178;
    L1835316563:
    //  line no 842 , L1835316563 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L678680178:
    //  line no 848 , L678680178 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 849 , L35864696 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 850 , L1590129041 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 852 , L1178777373 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.removevalues(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 29);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 853 , L340789130 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.removevalues(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 29);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 854 , L208184824 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_codenot__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_codenot__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
s8 func_org_luaj_vm2_compiler_FuncState_vkisinreg__I_Z(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_FuncState* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1563, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 857 , L988786279 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 857;
    stack[sp++].i = local[0].i;
    //  bipush 6
    stack[sp++].i = 6;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L773296871;
    stack[sp++].i = local[0].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1729734072;
    L773296871:
    // iconst_1
    stack[sp++].i = 1;
    goto L1052127672;
    L1729734072:
    // iconst_0
    stack[sp++].i = 0;
    L1052127672:
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

void bridge_org_luaj_vm2_compiler_FuncState_vkisinreg__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_vkisinreg__I_Z(runtime, para[0].obj, para[1].i);
}


// locals: 3
// stack: 3
// args: 2
void func_org_luaj_vm2_compiler_FuncState_indexed__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1564, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 861 , L1811880447 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 861;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_t S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1t_1 = stack[sp + 1].i;
    ; 
    //  line no 862 , L1105282397 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_idx S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1idx_0 = stack[sp + 1].i;
    ; 
    //  line no 863 , L1314228008 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 8
    stack[sp++].i = 8;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1590481849;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/FuncState.vkisinreg(I)Z
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_compiler_FuncState_vkisinreg__I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1299126654;
    L1590481849:
    // iconst_1
    stack[sp++].i = 1;
    goto L116356643;
    L1299126654:
    // iconst_0
    stack[sp++].i = 0;
    L116356643:
    // invokestatic org/luaj/vm2/compiler/LuaC._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 864 , L1692523793 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 8
    stack[sp++].i = 8;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1544067887;
    //  bipush 8
    stack[sp++].i = 8;
    goto L1771687225;
    L1544067887:
    //  bipush 7
    stack[sp++].i = 7;
    L1771687225:
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_vt S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1vt_2 = stack[sp + 1].i;
    ; 
    //  line no 865 , L347791431 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 9
    stack[sp++].i = 9;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 866 , L2128195220 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_indexed__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_indexed__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins, para[0].obj);
}


// locals: 7
// stack: 2
// args: 3
s8 func_org_luaj_vm2_compiler_FuncState_constfolding__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Z(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1, struct org_luaj_vm2_compiler_LexState_00024expdesc* p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1565, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 870 , L1095203437 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 870;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.isnumeral()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 197, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L45880026;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.isnumeral()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 197, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L824357143;
    L45880026:
    //  line no 871 , L45880026 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L824357143:
    //  line no 872 , L824357143 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 16
    stack[sp++].i = 16;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1397530667;
    stack[sp++].i = local[1].i;
    //  bipush 17
    stack[sp++].i = 17;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L698498109;
    L1397530667:
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc$U.nval()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 268, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic org/luaj/vm2/LuaValue ZERO Lorg/luaj/vm2/LuaNumber;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ZERO_17;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.eq_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 132);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L698498109;
    ; 
    //  line no 873 , L1265287441 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L698498109:
    //  line no 874 , L698498109 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc$U.nval()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 268, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 875 , L1877240674 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc$U.nval()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 268, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 876 , L1495257933 , bytecode index = 
    stack[sp++].i = local[1].i;
    switch(stack[--sp].i){
        case 13:
            goto L2090563811;
        case 14:
            goto L812168041;
        case 15:
            goto L399149970;
        case 16:
            goto L1418851979;
        case 17:
            goto L1936375962;
        case 18:
            goto L116184677;
        case 19:
            goto L1161382705;
        case 20:
            goto L1642356615;
        case 21:
            goto L516413619;
        default:
            goto L1642356615;
    }
    L2090563811:
    //  line no 878 , L2090563811 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.add(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 140);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 879 , L990684641 , bytecode index = 
    goto L1538462491;
    L812168041:
    //  line no 881 , L812168041 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.sub(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 143);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 882 , L1423752095 , bytecode index = 
    goto L1538462491;
    L399149970:
    //  line no 884 , L399149970 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.mul(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 148);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 885 , L1962865655 , bytecode index = 
    goto L1538462491;
    L1418851979:
    //  line no 887 , L1418851979 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.div(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 156);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 888 , L704869156 , bytecode index = 
    goto L1538462491;
    L1936375962:
    //  line no 890 , L1936375962 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.mod(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 160);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 891 , L1777043124 , bytecode index = 
    goto L1538462491;
    L116184677:
    //  line no 893 , L116184677 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.pow(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 151);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 894 , L1482344533 , bytecode index = 
    goto L1538462491;
    L1161382705:
    //  line no 896 , L1161382705 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/LuaValue.neg()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 126);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 897 , L1538849250 , bytecode index = 
    goto L1538462491;
    L516413619:
    //  line no 901 , L516413619 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1642356615:
    //  line no 903 , L1642356615 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 904 , L1788034018 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[6].obj = rstack[--sp].obj;
    L1538462491:
    //  line no 907 , L1538462491 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // invokevirtual org/luaj/vm2/LuaValue.todouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 18);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/lang/Double.isNaN(D)Z
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Double_isNaN__D_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1601756706;
    ; 
    //  line no 908 , L1366212088 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1601756706:
    //  line no 909 , L1601756706 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[6].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc$U.setNval(Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 268, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 910 , L1300576734 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
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

void bridge_org_luaj_vm2_compiler_FuncState_constfolding__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_constfolding__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Z(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 7
// stack: 6
// args: 4
void func_org_luaj_vm2_compiler_FuncState_codearith__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1, struct org_luaj_vm2_compiler_LexState_00024expdesc* p2, s32 p3){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1566, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    ; 
    //  line no 914 , L657069980 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 914;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.constfolding(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 65);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L51376124;
    ; 
    //  line no 915 , L1730182538 , bytecode index = 
    method_exit(runtime);
    return;
    L51376124:
    //  line no 917 , L51376124 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 19
    stack[sp++].i = 19;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L197855654;
    stack[sp++].i = local[1].i;
    //  bipush 21
    stack[sp++].i = 21;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L197855654;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L2083154356;
    L197855654:
    //  line no 918 , L197855654 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    L2083154356:
    local[5].i = stack[--sp].i;
    ; 
    //  line no 919 , L10885570 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 920 , L1687087217 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L928734079;
    ; 
    //  line no 921 , L403960809 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 922 , L684429600 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L991242536;
    L928734079:
    //  line no 924 , L928734079 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 925 , L1450712470 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L991242536:
    //  line no 927 , L991242536 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[5].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 928 , L1366499339 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 929 , L633727380 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.fixline(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 71);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 931 , L931911789 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_codearith__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_codearith__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(runtime, ins, para[0].obj, para[1].obj, para[2].i);
}


// locals: 8
// stack: 6
// args: 4
void func_org_luaj_vm2_compiler_FuncState_codecomp__IILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, s32 p0, s32 p1, struct org_luaj_vm2_compiler_LexState_00024expdesc* p2, struct org_luaj_vm2_compiler_LexState_00024expdesc* p3){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1567, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 934 , L1773336805 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 934;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 935 , L1664165134 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 936 , L168870325 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 937 , L1682619279 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 938 , L440472115 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  != 0) goto L1882348832;
    stack[sp++].i = local[1].i;
    //  bipush 24
    stack[sp++].i = 24;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1882348832;
    ; 
    //  line no 940 , L2082678778 , bytecode index = 
    stack[sp++].i = local[5].i;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 941 , L1300528434 , bytecode index = 
    stack[sp++].i = local[6].i;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 942 , L1598434875 , bytecode index = 
    stack[sp++].i = local[7].i;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 943 , L1031775150 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    L1882348832:
    //  line no 945 , L1882348832 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.condjump(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 22);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 946 , L1476812556 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 947 , L906347731 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_codecomp__IILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_codecomp__IILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins, para[0].i, para[1].obj, para[2].obj);
}


// locals: 5
// stack: 5
// args: 3
void func_org_luaj_vm2_compiler_FuncState_prefix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1568, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 950 , L410958248 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 950;
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
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 951 , L1919576980 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_5
    stack[sp++].i = 5;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.init(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 197, 0);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 952 , L1792088662 , bytecode index = 
    stack[sp++].i = local[1].i;
    switch(stack[--sp].i){
        case 0:
            goto L1073051173;
        case 1:
            goto L518167684;
        case 2:
            goto L2088969892;
        default:
            goto L1378559537;
    }
    L1073051173:
    //  line no 954 , L1073051173 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.isnumeral()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 197, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1997704619;
    ; 
    //  line no 955 , L1665308978 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc$U.nval()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 268, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.neg()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 126);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc$U.setNval(Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 268, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1775120226;
    L1997704619:
    //  line no 957 , L1997704619 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 53);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 958 , L211649273 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 19
    stack[sp++].i = 19;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 960 , L1862347028 , bytecode index = 
    goto L1775120226;
    L518167684:
    //  line no 963 , L518167684 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codenot(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 63);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 964 , L419280591 , bytecode index = 
    goto L1775120226;
    L2088969892:
    //  line no 966 , L2088969892 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 53);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 967 , L13643661 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 21
    stack[sp++].i = 21;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 968 , L1622863652 , bytecode index = 
    goto L1775120226;
    L1378559537:
    //  line no 971 , L1378559537 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1775120226:
    //  line no 973 , L1775120226 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_prefix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_prefix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_compiler_FuncState_infix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1569, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 976 , L1932244589 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 976;
    stack[sp++].i = local[1].i;
    switch(stack[--sp].i){
        case 0:
            goto L1173504361;
        case 1:
            goto L1173504361;
        case 2:
            goto L1173504361;
        case 3:
            goto L1173504361;
        case 4:
            goto L1173504361;
        case 5:
            goto L1173504361;
        case 6:
            goto L1792381498;
        case 7:
            goto L1913017282;
        case 8:
            goto L1913017282;
        case 9:
            goto L1913017282;
        case 10:
            goto L1913017282;
        case 11:
            goto L1913017282;
        case 12:
            goto L1913017282;
        case 13:
            goto L1147394515;
        case 14:
            goto L70978270;
        default:
            goto L1913017282;
    }
    L1147394515:
    //  line no 978 , L1147394515 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.goiftrue(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 61);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 979 , L1402333753 , bytecode index = 
    goto L353891891;
    L70978270:
    //  line no 982 , L70978270 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.goiffalse(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 62);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 983 , L1340086275 , bytecode index = 
    goto L353891891;
    L1792381498:
    //  line no 986 , L1792381498 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2nextreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 52);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 987 , L332498651 , bytecode index = 
    goto L353891891;
    L1173504361:
    //  line no 995 , L1173504361 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.isnumeral()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 197, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L353891891;
    ; 
    //  line no 996 , L1869177530 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L353891891;
    L1913017282:
    //  line no 1000 , L1913017282 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2RK(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 56);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L353891891:
    //  line no 1004 , L353891891 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_infix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_infix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 5
// args: 4
void func_org_luaj_vm2_compiler_FuncState_posfix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1, struct org_luaj_vm2_compiler_LexState_00024expdesc* p2, s32 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1570, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    ; 
    //  line no 1008 , L168468389 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1008;
    stack[sp++].i = local[1].i;
    switch(stack[--sp].i){
        case 0:
            goto L824900551;
        case 1:
            goto L1503614751;
        case 2:
            goto L129371198;
        case 3:
            goto L66845334;
        case 4:
            goto L1701436909;
        case 5:
            goto L1181567472;
        case 6:
            goto L1896708863;
        case 7:
            goto L763236610;
        case 8:
            goto L106113013;
        case 9:
            goto L719182854;
        case 10:
            goto L807239968;
        case 11:
            goto L1832284192;
        case 12:
            goto L1917161212;
        case 13:
            goto L918307166;
        case 14:
            goto L1786040872;
        default:
            goto L359806817;
    }
    L918307166:
    //  line no 1010 , L918307166 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L882706486;
    // iconst_1
    stack[sp++].i = 1;
    goto L1785807415;
    L882706486:
    // iconst_0
    stack[sp++].i = 0;
    L1785807415:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1011 , L1041451158 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1012 , L1924802798 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.concat(Lorg/luaj/vm2/compiler/IntPtr;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*,s32) = find_method(__ins->vm_table, 264, 35);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1014 , L775574071 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.setvalue(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 197, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1015 , L1320869181 , bytecode index = 
    goto L1791589252;
    L1786040872:
    //  line no 1018 , L1786040872 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1226298219;
    // iconst_1
    stack[sp++].i = 1;
    goto L901815188;
    L1226298219:
    // iconst_0
    stack[sp++].i = 0;
    L901815188:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1019 , L755759908 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargevars(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 47);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1020 , L205496410 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.concat(Lorg/luaj/vm2/compiler/IntPtr;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*,s32) = find_method(__ins->vm_table, 264, 35);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1022 , L2068100669 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState$expdesc.setvalue(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 197, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1023 , L1248435962 , bytecode index = 
    goto L1791589252;
    L1896708863:
    //  line no 1026 , L1896708863 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2val(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 55);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1027 , L944348744 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1225114731;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    ; 
    //  line no 1028 , L397309480 , bytecode index = 
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcode(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 1);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GET_OPCODE(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GET_1OPCODE__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 22
    stack[sp++].i = 22;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1225114731;
    ; 
    //  line no 1029 , L288797801 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcode(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 1);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/FuncState.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1702478809;
    // iconst_1
    stack[sp++].i = 1;
    goto L45643137;
    L1702478809:
    // iconst_0
    stack[sp++].i = 0;
    L45643137:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1030 , L1715686600 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.freeexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1031 , L1123166613 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.getcodePtr(Lorg/luaj/vm2/compiler/LexState$expdesc;)Lorg/luaj/vm2/compiler/InstructionPtr;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_compiler_InstructionPtr* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/FuncState.SETARG_B(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1B__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1032 , L1765690649 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 1033 , L678115778 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    goto L1791589252;
    L1225114731:
    //  line no 1035 , L1225114731 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2nextreg(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 52);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1036 , L1412564235 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 22
    stack[sp++].i = 22;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1038 , L123674777 , bytecode index = 
    goto L1791589252;
    L824900551:
    //  line no 1041 , L824900551 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 13
    stack[sp++].i = 13;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1042 , L471004142 , bytecode index = 
    goto L1791589252;
    L1503614751:
    //  line no 1044 , L1503614751 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 14
    stack[sp++].i = 14;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1045 , L1833335943 , bytecode index = 
    goto L1791589252;
    L129371198:
    //  line no 1047 , L129371198 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 15
    stack[sp++].i = 15;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1048 , L689448569 , bytecode index = 
    goto L1791589252;
    L66845334:
    //  line no 1050 , L66845334 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 16
    stack[sp++].i = 16;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1051 , L1472036907 , bytecode index = 
    goto L1791589252;
    L1701436909:
    //  line no 1053 , L1701436909 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 17
    stack[sp++].i = 17;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1054 , L1555793073 , bytecode index = 
    goto L1791589252;
    L1181567472:
    //  line no 1056 , L1181567472 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 18
    stack[sp++].i = 18;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codearith(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 66);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1057 , L46627301 , bytecode index = 
    goto L1791589252;
    L106113013:
    //  line no 1059 , L106113013 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 24
    stack[sp++].i = 24;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codecomp(IILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 67);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1060 , L1787083818 , bytecode index = 
    goto L1791589252;
    L763236610:
    //  line no 1062 , L763236610 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 24
    stack[sp++].i = 24;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codecomp(IILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 67);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1063 , L1367594377 , bytecode index = 
    goto L1791589252;
    L719182854:
    //  line no 1065 , L719182854 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 25
    stack[sp++].i = 25;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codecomp(IILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 67);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1066 , L1360878852 , bytecode index = 
    goto L1791589252;
    L807239968:
    //  line no 1068 , L807239968 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 26
    stack[sp++].i = 26;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codecomp(IILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 67);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1069 , L1747721875 , bytecode index = 
    goto L1791589252;
    L1832284192:
    //  line no 1071 , L1832284192 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 25
    stack[sp++].i = 25;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codecomp(IILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 67);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1072 , L654740048 , bytecode index = 
    goto L1791589252;
    L1917161212:
    //  line no 1074 , L1917161212 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 26
    stack[sp++].i = 26;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codecomp(IILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 67);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1075 , L1759915172 , bytecode index = 
    goto L1791589252;
    L359806817:
    //  line no 1077 , L359806817 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1791589252:
    //  line no 1079 , L1791589252 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_posfix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_posfix__ILorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(runtime, ins, para[0].obj, para[1].obj, para[2].i);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_FuncState_fixline__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1571, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1083 , L1534655921 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1083;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    // arrstore s32  ,  L1534655921 bc index = 
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
    ; 
    //  line no 1084 , L1220524164 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_fixline__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_fixline__I_V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 2
s32 func_org_luaj_vm2_compiler_FuncState_code__II_I(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1572, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 1088 , L118881143 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1088;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1089 , L463215441 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.dischargejpc()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 31);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1091 , L777190206 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L385784873;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    // arraylength  label  L777190206
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1050149826;
    L385784873:
    //  line no 1092 , L385784873 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/LuaC.realloc([II)[I
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3II__3I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype code [I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->code_1 = rstack[sp + 1].obj;
    L1050149826:
    //  line no 1093 , L1050149826 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrstore s32  ,  L1050149826 bc index = 
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
    ; 
    //  line no 1095 , L1160106451 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L2090289474;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    // arraylength  label  L1160106451
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L518692141;
    L2090289474:
    //  line no 1096 , L2090289474 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/LuaC.realloc([II)[I
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3II__3I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype lineinfo [I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->lineinfo_3 = rstack[sp + 1].obj;
    L518692141:
    //  line no 1098 , L518692141 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrstore s32  ,  L518692141 bc index = 
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
    ; 
    //  line no 1099 , L1620187937 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/FuncState pc I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->pc_108 = stack[sp + 1].i;
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

void bridge_org_luaj_vm2_compiler_FuncState_code__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_code__II_I(runtime, ins, para[0].i);
}


// locals: 5
// stack: 5
// args: 4
s32 func_org_luaj_vm2_compiler_FuncState_codeABC__IIII_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1573, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1104 , L1296654536 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1104;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.getOpMode(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_getOpMode__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L125865913;
    // iconst_1
    stack[sp++].i = 1;
    goto L2000410491;
    L125865913:
    // iconst_0
    stack[sp++].i = 0;
    L2000410491:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1105 , L1800932232 , bytecode index = 
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.getBMode(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_getBMode__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1838250251;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  != 0) goto L1852821063;
    L1838250251:
    // iconst_1
    stack[sp++].i = 1;
    goto L1204178174;
    L1852821063:
    // iconst_0
    stack[sp++].i = 0;
    L1204178174:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1106 , L1827212229 , bytecode index = 
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.getCMode(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_getCMode__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L173440626;
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  != 0) goto L442205321;
    L173440626:
    // iconst_1
    stack[sp++].i = 1;
    goto L1871678080;
    L442205321:
    // iconst_0
    stack[sp++].i = 0;
    L1871678080:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1107 , L1260127127 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.CREATE_ABC(IIII)I
    {
        sp -= 5;
        stack[sp].i = func_org_luaj_vm2_compiler_Constants_CREATE_1ABC__IIII_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState lastline I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lastline_154;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.code(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 72);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_codeABC__IIII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_codeABC__IIII_I(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 4
// stack: 4
// args: 3
s32 func_org_luaj_vm2_compiler_FuncState_codeABx__III_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1574, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1112 , L884604029 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1112;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.getOpMode(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_getOpMode__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L670153696;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.getOpMode(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_getOpMode__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L215614514;
    L670153696:
    // iconst_1
    stack[sp++].i = 1;
    goto L2082545616;
    L215614514:
    // iconst_0
    stack[sp++].i = 0;
    L2082545616:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1113 , L117460541 , bytecode index = 
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.getCMode(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_getCMode__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L763677574;
    // iconst_1
    stack[sp++].i = 1;
    goto L1906549136;
    L763677574:
    // iconst_0
    stack[sp++].i = 0;
    L1906549136:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1114 , L92864491 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L8136897;
    stack[sp++].i = local[3].i;
    //  ldc 
    stack[sp++].i = 0x3ffff;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L8136897;
    // iconst_1
    stack[sp++].i = 1;
    goto L196025267;
    L8136897:
    // iconst_0
    stack[sp++].i = 0;
    L196025267:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1115 , L1743553655 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.CREATE_ABx(III)I
    {
        sp -= 4;
        stack[sp].i = func_org_luaj_vm2_compiler_Constants_CREATE_1ABx__III_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState lastline I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lastline_154;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.code(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 72);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_codeABx__III_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_codeABx__III_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 3
// args: 1
s32 func_org_luaj_vm2_compiler_FuncState_codeextraarg__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1575, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1119 , L1149388444 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1119;
    stack[sp++].i = local[1].i;
    //  ldc 
    stack[sp++].i = 0x3ffffff;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L922992444;
    // iconst_1
    stack[sp++].i = 1;
    goto L886004375;
    L922992444:
    // iconst_0
    stack[sp++].i = 0;
    L886004375:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1120 , L1530870688 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 39
    stack[sp++].i = 39;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/FuncState.CREATE_Ax(II)I
    {
        sp -= 3;
        stack[sp].i = func_org_luaj_vm2_compiler_Constants_CREATE_1Ax__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState lastline I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lastline_154;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.code(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 72);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_FuncState_codeextraarg__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_codeextraarg__I_I(runtime, ins);
}


// locals: 4
// stack: 4
// args: 2
s32 func_org_luaj_vm2_compiler_FuncState_codeK__II_I(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1576, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 1124 , L663716901 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1124;
    stack[sp++].i = local[2].i;
    //  ldc 
    stack[sp++].i = 0x3ffff;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1767532961;
    ; 
    //  line no 1125 , L1260043537 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABx(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 74);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1767532961:
    //  line no 1127 , L1767532961 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp++].i = local[1].i;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABx(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 264, 74);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1128 , L1060549703 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeextraarg(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 264, 75);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 1129 , L1682157864 , bytecode index = 
    stack[sp++].i = local[3].i;
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

void bridge_org_luaj_vm2_compiler_FuncState_codeK__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_FuncState_codeK__II_I(runtime, ins, para[0].i);
}


// locals: 6
// stack: 5
// args: 3
void func_org_luaj_vm2_compiler_FuncState_setlist__III_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1577, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1134 , L1073878937 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1134;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  bipush 50
    stack[sp++].i = 50;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1135 , L1243350866 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L858727880;
    // iconst_0
    stack[sp++].i = 0;
    goto L456314134;
    L858727880:
    stack[sp++].i = local[3].i;
    L456314134:
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1136 , L1272753974 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L1641027464;
    // iconst_1
    stack[sp++].i = 1;
    goto L731610911;
    L1641027464:
    // iconst_0
    stack[sp++].i = 0;
    L731610911:
    // invokestatic org/luaj/vm2/compiler/FuncState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1137 , L642538759 , bytecode index = 
    stack[sp++].i = local[4].i;
    //  sipush 511
    stack[sp++].i = 511;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L138933223;
    ; 
    //  line no 1138 , L1774897456 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 36
    stack[sp++].i = 36;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L425275537;
    L138933223:
    //  line no 1140 , L138933223 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 36
    stack[sp++].i = 36;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.codeABC(IIII)I
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32) = find_method(__ins->vm_table, 264, 73);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 1141 , L1564078808 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->ls_106;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState lastline I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lastline_154;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.code(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 72);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L425275537:
    //  line no 1143 , L425275537 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    ; 
    //  line no 1144 , L1792473683 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_FuncState_setlist__III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_FuncState_setlist__III_V(runtime, ins, para[0].i, para[1].i);
}


