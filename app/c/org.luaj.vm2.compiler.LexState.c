// CLASS: org/luaj/vm2/compiler/LexState extends org/luaj/vm2/compiler/Constants
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_static {struct java_lang_String* RESERVED_1LOCAL_1VAR_1FOR_1CONTROL_103; struct java_lang_String* RESERVED_1LOCAL_1VAR_1FOR_1STATE_104; struct java_lang_String* RESERVED_1LOCAL_1VAR_1FOR_1GENERATOR_105; struct java_lang_String* RESERVED_1LOCAL_1VAR_1FOR_1STEP_106; struct java_lang_String* RESERVED_1LOCAL_1VAR_1FOR_1LIMIT_107; struct java_lang_String* RESERVED_1LOCAL_1VAR_1FOR_1INDEX_108; JArray * RESERVED_1LOCAL_1VAR_1KEYWORDS_109; struct java_util_HashMap* RESERVED_1LOCAL_1VAR_1KEYWORDS_1TABLE_110; s32 EOZ_111; s32 MAX_1INT_112; s32 UCHAR_1MAX_113; s32 LUAI_1MAXCCALLS_114; s32 LUA_1COMPAT_1LSTR_115; s8 LUA_1COMPAT_1VARARG_116; s32 NO_1JUMP_117; s32 OPR_1ADD_118; s32 OPR_1SUB_119; s32 OPR_1MUL_120; s32 OPR_1DIV_121; s32 OPR_1MOD_122; s32 OPR_1POW_123; s32 OPR_1CONCAT_124; s32 OPR_1NE_125; s32 OPR_1EQ_126; s32 OPR_1LT_127; s32 OPR_1LE_128; s32 OPR_1GT_129; s32 OPR_1GE_130; s32 OPR_1AND_131; s32 OPR_1OR_132; s32 OPR_1NOBINOPR_133; s32 OPR_1MINUS_134; s32 OPR_1NOT_135; s32 OPR_1LEN_136; s32 OPR_1NOUNOPR_137; s32 VVOID_138; s32 VNIL_139; s32 VTRUE_140; s32 VFALSE_141; s32 VK_142; s32 VKNUM_143; s32 VNONRELOC_144; s32 VLOCAL_145; s32 VUPVAL_146; s32 VINDEXED_147; s32 VJMP_148; s32 VRELOCABLE_149; s32 VCALL_150; s32 VVARARG_151; JArray * luaX_1tokens_166; s32 TK_1AND_167; s32 TK_1BREAK_168; s32 TK_1DO_169; s32 TK_1ELSE_170; s32 TK_1ELSEIF_171; s32 TK_1END_172; s32 TK_1FALSE_173; s32 TK_1FOR_174; s32 TK_1FUNCTION_175; s32 TK_1GOTO_176; s32 TK_1IF_177; s32 TK_1IN_178; s32 TK_1LOCAL_179; s32 TK_1NIL_180; s32 TK_1NOT_181; s32 TK_1OR_182; s32 TK_1REPEAT_183; s32 TK_1RETURN_184; s32 TK_1THEN_185; s32 TK_1TRUE_186; s32 TK_1UNTIL_187; s32 TK_1WHILE_188; s32 TK_1CONCAT_189; s32 TK_1DOTS_190; s32 TK_1EQ_191; s32 TK_1GE_192; s32 TK_1LE_193; s32 TK_1NE_194; s32 TK_1DBCOLON_195; s32 TK_1EOS_196; s32 TK_1NUMBER_197; s32 TK_1NAME_198; s32 TK_1STRING_199; s32 FIRST_1RESERVED_200; s32 NUM_1RESERVED_201; struct java_util_HashMap* RESERVED_202; JArray * priority_203; s32 UNARY_1PRIORITY_204;  };
struct org_luaj_vm2_compiler_LexState_static static_var_org_luaj_vm2_compiler_LexState = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0};


__refer arr_vmtable_org_luaj_vm2_compiler_LexState_from_org_luaj_vm2_compiler_LexState[] = {
    func_org_luaj_vm2_compiler_LexState_nextChar___V,  //0
    func_org_luaj_vm2_compiler_LexState_currIsNewline___Z,  //1
    func_org_luaj_vm2_compiler_LexState_save_1and_1next___V,  //2
    func_org_luaj_vm2_compiler_LexState_save__I_V,  //3
    func_org_luaj_vm2_compiler_LexState_token2str__I_Ljava_lang_String_2,  //4
    func_org_luaj_vm2_compiler_LexState_txtToken__I_Ljava_lang_String_2,  //5
    func_org_luaj_vm2_compiler_LexState_lexerror__Ljava_lang_String_2I_V,  //6
    func_org_luaj_vm2_compiler_LexState_syntaxerror__Ljava_lang_String_2_V,  //7
    func_org_luaj_vm2_compiler_LexState_newstring__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2,  //8
    func_org_luaj_vm2_compiler_LexState_newstring___3CII_Lorg_luaj_vm2_LuaString_2,  //9
    func_org_luaj_vm2_compiler_LexState_inclinenumber___V,  //10
    func_org_luaj_vm2_compiler_LexState_setinput__Lorg_luaj_vm2_compiler_LuaC_00024CompileState_2ILjava_io_InputStream_2Lorg_luaj_vm2_LuaString_2_V,  //11
    func_org_luaj_vm2_compiler_LexState_check_1next__Ljava_lang_String_2_Z,  //12
    func_org_luaj_vm2_compiler_LexState_buffreplace__CC_V,  //13
    func_org_luaj_vm2_compiler_LexState_strx2number__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Lorg_luaj_vm2_LuaValue_2,  //14
    func_org_luaj_vm2_compiler_LexState_str2d__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Z,  //15
    func_org_luaj_vm2_compiler_LexState_read_1numeral__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_V,  //16
    func_org_luaj_vm2_compiler_LexState_skip_1sep___I,  //17
    func_org_luaj_vm2_compiler_LexState_read_1long_1string__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2I_V,  //18
    func_org_luaj_vm2_compiler_LexState_hexvalue__I_I,  //19
    func_org_luaj_vm2_compiler_LexState_readhexaesc___I,  //20
    func_org_luaj_vm2_compiler_LexState_read_1string__ILorg_luaj_vm2_compiler_LexState_00024SemInfo_2_V,  //21
    func_org_luaj_vm2_compiler_LexState_llex__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_I,  //22
    func_org_luaj_vm2_compiler_LexState_next___V,  //23
    func_org_luaj_vm2_compiler_LexState_lookahead___V,  //24
    func_org_luaj_vm2_compiler_LexState_hasmultret__I_Z,  //25
    func_org_luaj_vm2_compiler_LexState_anchor_1token___V,  //26
    func_org_luaj_vm2_compiler_LexState_semerror__Ljava_lang_String_2_V,  //27
    func_org_luaj_vm2_compiler_LexState_error_1expected__I_V,  //28
    func_org_luaj_vm2_compiler_LexState_testnext__I_Z,  //29
    func_org_luaj_vm2_compiler_LexState_check__I_V,  //30
    func_org_luaj_vm2_compiler_LexState_checknext__I_V,  //31
    func_org_luaj_vm2_compiler_LexState_check_1condition__ZLjava_lang_String_2_V,  //32
    func_org_luaj_vm2_compiler_LexState_check_1match__III_V,  //33
    func_org_luaj_vm2_compiler_LexState_str_1checkname___Lorg_luaj_vm2_LuaString_2,  //34
    func_org_luaj_vm2_compiler_LexState_codestring__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_LuaString_2_V,  //35
    func_org_luaj_vm2_compiler_LexState_checkname__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //36
    func_org_luaj_vm2_compiler_LexState_registerlocalvar__Lorg_luaj_vm2_LuaString_2_I,  //37
    func_org_luaj_vm2_compiler_LexState_new_1localvar__Lorg_luaj_vm2_LuaString_2_V,  //38
    func_org_luaj_vm2_compiler_LexState_new_1localvarliteral__Ljava_lang_String_2_V,  //39
    func_org_luaj_vm2_compiler_LexState_adjustlocalvars__I_V,  //40
    func_org_luaj_vm2_compiler_LexState_removevars__I_V,  //41
    func_org_luaj_vm2_compiler_LexState_singlevar__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //42
    func_org_luaj_vm2_compiler_LexState_adjust_1assign__IILorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //43
    func_org_luaj_vm2_compiler_LexState_enterlevel___V,  //44
    func_org_luaj_vm2_compiler_LexState_leavelevel___V,  //45
    func_org_luaj_vm2_compiler_LexState_closegoto__ILorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V,  //46
    func_org_luaj_vm2_compiler_LexState_findlabel__I_Z,  //47
    func_org_luaj_vm2_compiler_LexState_newlabelentry___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2ILorg_luaj_vm2_LuaString_2II_I,  //48
    func_org_luaj_vm2_compiler_LexState_findgotos__Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V,  //49
    func_org_luaj_vm2_compiler_LexState_breaklabel___V,  //50
    func_org_luaj_vm2_compiler_LexState_undefgoto__Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V,  //51
    func_org_luaj_vm2_compiler_LexState_addprototype___Lorg_luaj_vm2_Prototype_2,  //52
    func_org_luaj_vm2_compiler_LexState_codeclosure__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //53
    func_org_luaj_vm2_compiler_LexState_open_1func__Lorg_luaj_vm2_compiler_FuncState_2Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2_V,  //54
    func_org_luaj_vm2_compiler_LexState_close_1func___V,  //55
    func_org_luaj_vm2_compiler_LexState_fieldsel__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //56
    func_org_luaj_vm2_compiler_LexState_yindex__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //57
    func_org_luaj_vm2_compiler_LexState_recfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V,  //58
    func_org_luaj_vm2_compiler_LexState_listfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V,  //59
    func_org_luaj_vm2_compiler_LexState_constructor__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //60
    func_org_luaj_vm2_compiler_LexState_parlist___V,  //61
    func_org_luaj_vm2_compiler_LexState_body__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2ZI_V,  //62
    func_org_luaj_vm2_compiler_LexState_explist__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I,  //63
    func_org_luaj_vm2_compiler_LexState_funcargs__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V,  //64
    func_org_luaj_vm2_compiler_LexState_primaryexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //65
    func_org_luaj_vm2_compiler_LexState_suffixedexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //66
    func_org_luaj_vm2_compiler_LexState_simpleexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //67
    func_org_luaj_vm2_compiler_LexState_getunopr__I_I,  //68
    func_org_luaj_vm2_compiler_LexState_getbinopr__I_I,  //69
    func_org_luaj_vm2_compiler_LexState_subexpr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I,  //70
    func_org_luaj_vm2_compiler_LexState_expr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //71
    func_org_luaj_vm2_compiler_LexState_block_1follow__Z_Z,  //72
    func_org_luaj_vm2_compiler_LexState_block___V,  //73
    func_org_luaj_vm2_compiler_LexState_check_1conflict__Lorg_luaj_vm2_compiler_LexState_00024LHS_1assign_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V,  //74
    func_org_luaj_vm2_compiler_LexState_assignment__Lorg_luaj_vm2_compiler_LexState_00024LHS_1assign_2I_V,  //75
    func_org_luaj_vm2_compiler_LexState_cond___I,  //76
    func_org_luaj_vm2_compiler_LexState_gotostat__I_V,  //77
    func_org_luaj_vm2_compiler_LexState_skipnoopstat___V,  //78
    func_org_luaj_vm2_compiler_LexState_labelstat__Lorg_luaj_vm2_LuaString_2I_V,  //79
    func_org_luaj_vm2_compiler_LexState_whilestat__I_V,  //80
    func_org_luaj_vm2_compiler_LexState_repeatstat__I_V,  //81
    func_org_luaj_vm2_compiler_LexState_exp1___I,  //82
    func_org_luaj_vm2_compiler_LexState_forbody__IIIZ_V,  //83
    func_org_luaj_vm2_compiler_LexState_fornum__Lorg_luaj_vm2_LuaString_2I_V,  //84
    func_org_luaj_vm2_compiler_LexState_forlist__Lorg_luaj_vm2_LuaString_2_V,  //85
    func_org_luaj_vm2_compiler_LexState_forstat__I_V,  //86
    func_org_luaj_vm2_compiler_LexState_test_1then_1block__Lorg_luaj_vm2_compiler_IntPtr_2_V,  //87
    func_org_luaj_vm2_compiler_LexState_ifstat__I_V,  //88
    func_org_luaj_vm2_compiler_LexState_localfunc___V,  //89
    func_org_luaj_vm2_compiler_LexState_localstat___V,  //90
    func_org_luaj_vm2_compiler_LexState_funcname__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Z,  //91
    func_org_luaj_vm2_compiler_LexState_funcstat__I_V,  //92
    func_org_luaj_vm2_compiler_LexState_exprstat___V,  //93
    func_org_luaj_vm2_compiler_LexState_retstat___V,  //94
    func_org_luaj_vm2_compiler_LexState_statement___V,  //95
    func_org_luaj_vm2_compiler_LexState_statlist___V,  //96
    func_org_luaj_vm2_compiler_LexState_mainfunc__Lorg_luaj_vm2_compiler_FuncState_2_V  //97
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_from_org_luaj_vm2_compiler_Constants[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_from_org_luaj_vm2_Lua[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState[] = {
    {266, 98, arr_vmtable_org_luaj_vm2_compiler_LexState_from_org_luaj_vm2_compiler_LexState}, //0
    {269, 0, arr_vmtable_org_luaj_vm2_compiler_LexState_from_org_luaj_vm2_compiler_Constants}, //1
    {270, 0, arr_vmtable_org_luaj_vm2_compiler_LexState_from_org_luaj_vm2_Lua}, //2
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_from_java_lang_Object}, //3
};



// locals: 1
// stack: 2
// args: 2
struct java_lang_String* func_org_luaj_vm2_compiler_LexState_LUA_1QS__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1971, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 69 , L1001351478 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 69;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 283);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 283);
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

void bridge_org_luaj_vm2_compiler_LexState_LUA_1QS__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_LUA_1QS__Ljava_lang_String_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_String* func_org_luaj_vm2_compiler_LexState_LUA_1QL__Ljava_lang_Object_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1972, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 70 , L1309956586 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 70;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/String.valueOf(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.LUA_QS(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_LUA_1QS__Ljava_lang_String_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_compiler_LexState_LUA_1QL__Ljava_lang_Object_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_LUA_1QL__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 2
s8 func_org_luaj_vm2_compiler_LexState_isReservedKeyword__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1973, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 76 , L2056277810 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 76;
    // getstatic org/luaj/vm2/compiler/LexState RESERVED_LOCAL_VAR_KEYWORDS_TABLE Ljava/util/HashMap;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.RESERVED_1LOCAL_1VAR_1KEYWORDS_1TABLE_110;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_org_luaj_vm2_compiler_LexState_isReservedKeyword__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_isReservedKeyword__Ljava_lang_String_2_Z(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_isalnum__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1974, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 179 , L1198426006 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 179;
    stack[sp++].i = local[1].i;
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1324165839;
    stack[sp++].i = local[1].i;
    //  bipush 57
    stack[sp++].i = 57;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L922486271;
    L1324165839:
    stack[sp++].i = local[1].i;
    //  bipush 97
    stack[sp++].i = 97;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1472494238;
    stack[sp++].i = local[1].i;
    //  bipush 122
    stack[sp++].i = 122;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L922486271;
    L1472494238:
    stack[sp++].i = local[1].i;
    //  bipush 65
    stack[sp++].i = 65;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1680147911;
    stack[sp++].i = local[1].i;
    //  bipush 90
    stack[sp++].i = 90;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L922486271;
    L1680147911:
    stack[sp++].i = local[1].i;
    //  bipush 95
    stack[sp++].i = 95;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1127866590;
    L922486271:
    // iconst_1
    stack[sp++].i = 1;
    goto L356308667;
    L1127866590:
    // iconst_0
    stack[sp++].i = 0;
    L356308667:
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

void bridge_org_luaj_vm2_compiler_LexState_isalnum__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_isalnum__I_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_isalpha__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1975, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 187 , L765420745 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 187;
    stack[sp++].i = local[1].i;
    //  bipush 97
    stack[sp++].i = 97;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L564944564;
    stack[sp++].i = local[1].i;
    //  bipush 122
    stack[sp++].i = 122;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1389808948;
    L564944564:
    stack[sp++].i = local[1].i;
    //  bipush 65
    stack[sp++].i = 65;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1901945192;
    stack[sp++].i = local[1].i;
    //  bipush 90
    stack[sp++].i = 90;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1901945192;
    L1389808948:
    // iconst_1
    stack[sp++].i = 1;
    goto L666040998;
    L1901945192:
    // iconst_0
    stack[sp++].i = 0;
    L666040998:
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

void bridge_org_luaj_vm2_compiler_LexState_isalpha__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_isalpha__I_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_isdigit__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1976, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 192 , L7575494 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 192;
    stack[sp++].i = local[1].i;
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L448782465;
    stack[sp++].i = local[1].i;
    //  bipush 57
    stack[sp++].i = 57;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L448782465;
    // iconst_1
    stack[sp++].i = 1;
    goto L711483066;
    L448782465:
    // iconst_0
    stack[sp++].i = 0;
    L711483066:
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

void bridge_org_luaj_vm2_compiler_LexState_isdigit__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_isdigit__I_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_isxdigit__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1977, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 196 , L276777344 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 196;
    stack[sp++].i = local[1].i;
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1973491942;
    stack[sp++].i = local[1].i;
    //  bipush 57
    stack[sp++].i = 57;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L492045670;
    L1973491942:
    stack[sp++].i = local[1].i;
    //  bipush 97
    stack[sp++].i = 97;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1611966906;
    stack[sp++].i = local[1].i;
    //  bipush 102
    stack[sp++].i = 102;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L492045670;
    L1611966906:
    stack[sp++].i = local[1].i;
    //  bipush 65
    stack[sp++].i = 65;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L181260145;
    stack[sp++].i = local[1].i;
    //  bipush 70
    stack[sp++].i = 70;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L181260145;
    L492045670:
    // iconst_1
    stack[sp++].i = 1;
    goto L2010546406;
    L181260145:
    // iconst_0
    stack[sp++].i = 0;
    L2010546406:
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

void bridge_org_luaj_vm2_compiler_LexState_isxdigit__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_isxdigit__I_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_isspace__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1978, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 202 , L252247502 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 202;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L1809456409;
    stack[sp++].i = local[1].i;
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1809456409;
    // iconst_1
    stack[sp++].i = 1;
    goto L684220724;
    L1809456409:
    // iconst_0
    stack[sp++].i = 0;
    L684220724:
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

void bridge_org_luaj_vm2_compiler_LexState_isspace__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_isspace__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
void func_org_luaj_vm2_compiler_LexState__init___Lorg_luaj_vm2_compiler_LuaC_00024CompileState_2Ljava_io_InputStream_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LuaC_00024CompileState* p0, struct java_io_InputStream* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1979, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 205 , L213683471 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 205;
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
    //  line no 135 , L934640468 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/compiler/LexState$Token
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 168);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial org/luaj/vm2/compiler/LexState$Token.<init>(Lorg/luaj/vm2/compiler/LexState$1;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Token__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->t_155 = rstack[sp + 1].obj;
    ; 
    //  line no 136 , L1545563479 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/compiler/LexState$Token
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 168);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial org/luaj/vm2/compiler/LexState$Token.<init>(Lorg/luaj/vm2/compiler/LexState$1;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Token__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->lookahead_156 = rstack[sp + 1].obj;
    ; 
    //  line no 142 , L254315540 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/compiler/LexState$Dyndata
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 318);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/LexState$Dyndata.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Dyndata__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->dyd_162 = rstack[sp + 1].obj;
    ; 
    //  line no 206 , L1737796619 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/compiler/LexState z Ljava/io/InputStream;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->z_159 = rstack[sp + 1].obj;
    ; 
    //  line no 207 , L2078741622 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield org/luaj/vm2/compiler/LexState buff [C
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->buff_160 = rstack[sp + 1].obj;
    ; 
    //  line no 208 , L1555413896 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->L_158 = rstack[sp + 1].obj;
    ; 
    //  line no 209 , L397857830 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState__init___Lorg_luaj_vm2_compiler_LuaC_00024CompileState_2Ljava_io_InputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState__init___Lorg_luaj_vm2_compiler_LuaC_00024CompileState_2Ljava_io_InputStream_2_V(runtime, ins, para[0].obj);
}

ExceptionItem arr_extable_func_org_luaj_vm2_compiler_LexState_nextChar___V[] = {
    { , , 1457}
};
ExceptionTable extable_func_org_luaj_vm2_compiler_LexState_nextChar___V = {1, arr_extable_func_org_luaj_vm2_compiler_LexState_nextChar___V};

// locals: 2
// stack: 2
// args: 0
void func_org_luaj_vm2_compiler_LexState_nextChar___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1980, &rstack[0], &rlocal[0], &sp);
    // try catch :L377957453 L1730129134 L1185502159 (
    L377957453:
    __frame->bytecodeIndex = 
    //  line no 213 , L377957453 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 213;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState z Ljava/io/InputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->z_159;
    sp += 0;
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState current I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->current_152 = stack[sp + 1].i;
    L1730129134:
    __frame->bytecodeIndex = 
    //  line no 217 , L1730129134 , bytecode index = 
    goto L357291163;
    L1185502159:
    //  line no 214 , L1185502159 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 215 , L973174587 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/IOException.printStackTrace()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 56, 4);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 216 , L551797833 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/compiler/LexState current I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->current_152 = stack[sp + 1].i;
    L357291163:
    //  line no 218 , L357291163 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1185502159;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_compiler_LexState_nextChar___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_nextChar___V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_luaj_vm2_compiler_LexState_currIsNewline___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1981, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 221 , L1744579245 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 221;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1458905542;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 13
    stack[sp++].i = 13;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1745512157;
    L1458905542:
    // iconst_1
    stack[sp++].i = 1;
    goto L48071225;
    L1745512157:
    // iconst_0
    stack[sp++].i = 0;
    L48071225:
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

void bridge_org_luaj_vm2_compiler_LexState_currIsNewline___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_currIsNewline___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_compiler_LexState_save_1and_1next___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1982, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 225 , L2071364564 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 225;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.save(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 3);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 226 , L1081159401 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 227 , L777236628 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_save_1and_1next___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_save_1and_1next___V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_org_luaj_vm2_compiler_LexState_save__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1983, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 230 , L1994249754 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 230;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1066575950;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    // arraylength  label  L1994249754
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L217479224;
    L1066575950:
    //  line no 231 , L1066575950 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([CI)[C
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3CI__3C(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState buff [C
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->buff_160 = rstack[sp + 1].obj;
    L217479224:
    //  line no 232 , L217479224 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
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
    // putfield org/luaj/vm2/compiler/LexState nbuff I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->nbuff_161 = stack[sp + 1].i;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L217479224 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 233 , L1631047534 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_save__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_save__I_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct java_lang_String* func_org_luaj_vm2_compiler_LexState_token2str__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1984, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 237 , L1404612586 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 237;
    stack[sp++].i = local[1].i;
    //  sipush 257
    stack[sp++].i = 257;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1815095837;
    ; 
    //  line no 238 , L866370634 , bytecode index = 
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/compiler/LexState.iscntrl(I)Z
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_iscntrl__I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1607453282;
    ; 
    //  line no 239 , L1235155342 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3472);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1670);
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
    goto L613630562;
    L1607453282:
    //  line no 240 , L1607453282 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/String.valueOf(C)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__C_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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
    L613630562:
    //  line no 238 , L613630562 , bytecode index = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1815095837:
    //  line no 242 , L1815095837 , bytecode index = 
    // getstatic org/luaj/vm2/compiler/LexState luaX_tokens [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.luaX_1tokens_166;
    sp += 1;
    stack[sp++].i = local[1].i;
    //  sipush 257
    stack[sp++].i = 257;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1815095837 bc index = 
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

void bridge_org_luaj_vm2_compiler_LexState_token2str__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_token2str__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
s8 func_org_luaj_vm2_compiler_LexState_iscntrl__I_Z(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1985, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 247 , L679613617 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 247;
    stack[sp++].i = local[0].i;
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L384752294;
    // iconst_1
    stack[sp++].i = 1;
    goto L676338251;
    L384752294:
    // iconst_0
    stack[sp++].i = 0;
    L676338251:
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

void bridge_org_luaj_vm2_compiler_LexState_iscntrl__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_iscntrl__I_Z(runtime, para[0].obj, para[1].i);
}


// locals: 2
// stack: 5
// args: 1
struct java_lang_String* func_org_luaj_vm2_compiler_LexState_txtToken__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1986, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 251 , L1671084561 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 251;
    stack[sp++].i = local[1].i;
    switch(stack[--sp].i){
        case 287:
            goto L736868175;
        case 288:
            goto L736868175;
        case 289:
            goto L736868175;
        default:
            goto L54617902;
    }
    L736868175:
    //  line no 255 , L736868175 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
    sp += 0;
    // invokespecial java/lang/String.<init>([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3CII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L54617902:
    //  line no 257 , L54617902 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.token2str(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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

void bridge_org_luaj_vm2_compiler_LexState_txtToken__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_txtToken__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 4
// stack: 4
// args: 2
void func_org_luaj_vm2_compiler_LexState_lexerror__Ljava_lang_String_2I_V(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1987, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 262 , L1848900782 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 262;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState source Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->source_163;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/Lua.chunkid(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_Lua_chunkid__Ljava_lang_String_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 263 , L1724091985 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = rlocal[3].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1801);
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
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 350);
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
    --sp; //pop
    ; 
    //  line no 264 , L274996233 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  == 0) goto L888378046;
    ; 
    //  line no 265 , L1163189762 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3476);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3477);
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
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.txtToken(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    --sp; //pop
    L888378046:
    //  line no 266 , L888378046 , bytecode index = 
    // new org/luaj/vm2/LuaError
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    rstack[sp++].obj = rlocal[3].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1801);
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
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 350);
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
    // invokespecial org/luaj/vm2/LuaError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L888378046 in labeltable is :L888378046
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 266;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_compiler_LexState_lexerror__Ljava_lang_String_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_lexerror__Ljava_lang_String_2I_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_syntaxerror__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1988, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 270 , L262911569 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 270;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
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
    //  line no 271 , L669365112 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_syntaxerror__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_syntaxerror__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_compiler_LexState_newstring__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1989, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 275 , L7752890 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 275;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.newTString(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 265, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_compiler_LexState_newstring__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_newstring__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 4
// stack: 6
// args: 3
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_compiler_LexState_newstring___3CII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1990, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 279 , L1481206935 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 279;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokespecial java/lang/String.<init>([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3CII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.newTString(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 265, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_compiler_LexState_newstring___3CII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_newstring___3CII_Lorg_luaj_vm2_LuaString_2(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_inclinenumber___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1991, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 283 , L947043383 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 283;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 284 , L27818833 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.currIsNewline()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 285 , L311853607 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 286 , L21277524 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.currIsNewline()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L754592847;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L754592847;
    ; 
    //  line no 287 , L1858779250 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L754592847:
    //  line no 288 , L754592847 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LexState linenumber I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->linenumber_153 = stack[sp + 1].i;
    //  ldc 
    stack[sp++].i = 0x7ffffffd;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1223399478;
    ; 
    //  line no 289 , L1817281652 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3481);
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
    L1223399478:
    //  line no 290 , L1223399478 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_inclinenumber___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_inclinenumber___V(runtime, ins);
}


// locals: 5
// stack: 2
// args: 4
void func_org_luaj_vm2_compiler_LexState_setinput__Lorg_luaj_vm2_compiler_LuaC_00024CompileState_2ILjava_io_InputStream_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LuaC_00024CompileState* p0, s32 p1, struct java_io_InputStream* p2, struct org_luaj_vm2_LuaString* p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1992, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 293 , L705062537 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 293;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 46
    stack[sp++].i = 46;
    // putfield org/luaj/vm2/compiler/LexState decpoint B
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->decpoint_165 = stack[sp + 1].i;
    ; 
    //  line no 294 , L1043882455 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->L_158 = rstack[sp + 1].obj;
    ; 
    //  line no 295 , L1579823168 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lookahead_156;
    sp += 0;
    //  sipush 286
    stack[sp++].i = 286;
    // putfield org/luaj/vm2/compiler/LexState$Token token I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp + 0].obj)->token_0 = stack[sp + 1].i;
    ; 
    //  line no 296 , L1828871453 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/compiler/LexState z Ljava/io/InputStream;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->z_159 = rstack[sp + 1].obj;
    ; 
    //  line no 297 , L1948863514 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->fs_157 = rstack[sp + 1].obj;
    ; 
    //  line no 298 , L165850513 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/compiler/LexState linenumber I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->linenumber_153 = stack[sp + 1].i;
    ; 
    //  line no 299 , L105194717 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/compiler/LexState lastline I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->lastline_154 = stack[sp + 1].i;
    ; 
    //  line no 300 , L2043702205 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield org/luaj/vm2/compiler/LexState source Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->source_163 = rstack[sp + 1].obj;
    ; 
    //  line no 301 , L1202168065 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue ENV Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ENV_21;
    sp += 1;
    // putfield org/luaj/vm2/compiler/LexState envn Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->envn_164 = rstack[sp + 1].obj;
    ; 
    //  line no 302 , L1538593345 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState nbuff I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->nbuff_161 = stack[sp + 1].i;
    ; 
    //  line no 303 , L1954133542 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/LexState current I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->current_152 = stack[sp + 1].i;
    ; 
    //  line no 304 , L244229783 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/compiler/LexState.skipShebang()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_skipShebang___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 305 , L1960554990 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_setinput__Lorg_luaj_vm2_compiler_LuaC_00024CompileState_2ILjava_io_InputStream_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_setinput__Lorg_luaj_vm2_compiler_LuaC_00024CompileState_2ILjava_io_InputStream_2Lorg_luaj_vm2_LuaString_2_V(runtime, ins, para[0].i, para[1].obj, para[2].obj);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_compiler_LexState_skipShebang___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1993, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 308 , L1056889967 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 308;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 35
    stack[sp++].i = 35;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1170173753;
    L1816326817:
    //  line no 309 , L1816326817 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.currIsNewline()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1170173753;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1170173753;
    ; 
    //  line no 310 , L396821493 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1816326817;
    L1170173753:
    //  line no 311 , L1170173753 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_skipShebang___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_skipShebang___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_check_1next__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1994, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 323 , L1636487850 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 323;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokevirtual java/lang/String.indexOf(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L447144896;
    ; 
    //  line no 324 , L892466122 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L447144896:
    //  line no 325 , L447144896 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 326 , L2144282958 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_check_1next__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_check_1next__Ljava_lang_String_2_Z(runtime, ins);
}


// locals: 5
// stack: 3
// args: 2
void func_org_luaj_vm2_compiler_LexState_buffreplace__CC_V(JThreadRuntime *runtime, u16 p0, u16 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1995, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 330 , L1710422448 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 330;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 331 , L1609038183 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    L1508130444:
    //  line no 332 , L1508130444 , bytecode index = 
    // iinc slot 3 value -1
    local[3].i += -1;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L749362556;
    ; 
    //  line no 333 , L1583816224 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[3].i;
    // arrload u16  ,  L1583816224 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1508130444;
    ; 
    //  line no 334 , L1051453514 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    // arrstore u16  ,  L1051453514 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1508130444;
    L749362556:
    //  line no 335 , L749362556 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_buffreplace__CC_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_buffreplace__CC_V(runtime, ins, para[0].i);
}


// locals: 12
// stack: 6
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_compiler_LexState_strx2number__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct org_luaj_vm2_compiler_LexState_00024SemInfo* p1){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1996, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 338 , L956061012 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 338;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.toCharArray()[C
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 7);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 339 , L1586289269 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1057263702:
    //  line no 340 , L1057263702 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L1057263702
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1687586610;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L1057263702 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // invokespecial org/luaj/vm2/compiler/LexState.isspace(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isspace__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1687586610;
    ; 
    //  line no 341 , L1041905665 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1057263702;
    L1687586610:
    //  line no 343 , L1687586610 , bytecode index = 
    //  dconst 1
    stack[sp].d = 1;
    sp += 2;
    sp -= 2;
    local[5].d = stack[sp].d;
    ; 
    //  line no 344 , L117248709 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L117248709
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L501261420;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L117248709 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 45
    stack[sp++].i = 45;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L501261420;
    ; 
    //  line no 345 , L1293885429 , bytecode index = 
    //  ldc 
    stack[sp].d = -1.0;
    sp += 2;
    sp -= 2;
    local[5].d = stack[sp].d;
    ; 
    //  line no 346 , L573242471 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    L501261420:
    //  line no 349 , L501261420 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L501261420
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1278196189;
    ; 
    //  line no 350 , L1425319920 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue ZERO Lorg/luaj/vm2/LuaNumber;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ZERO_17;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1278196189:
    //  line no 351 , L1278196189 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // iinc slot 4 value 1
    local[4].i += 1;
    // arrload u16  ,  L1278196189 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1638001196;
    ; 
    //  line no 352 , L345893819 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue ZERO Lorg/luaj/vm2/LuaNumber;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ZERO_17;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1638001196:
    //  line no 353 , L1638001196 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L1638001196 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 120
    stack[sp++].i = 120;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L634210724;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L1638001196 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 88
    stack[sp++].i = 88;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L634210724;
    ; 
    //  line no 354 , L1417126346 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue ZERO Lorg/luaj/vm2/LuaNumber;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ZERO_17;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L634210724:
    //  line no 355 , L634210724 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    ; 
    //  line no 358 , L988402146 , bytecode index = 
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    sp -= 2;
    local[7].d = stack[sp].d;
    ; 
    //  line no 359 , L1095902519 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[9].i = stack[--sp].i;
    L245220560:
    //  line no 360 , L245220560 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L245220560
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1728924984;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L245220560 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // invokespecial org/luaj/vm2/compiler/LexState.isxdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isxdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1728924984;
    ; 
    //  line no 361 , L320861946 , bytecode index = 
    stack[sp].d = local[7].d;
    sp += 2;
    //  ldc 
    stack[sp].d = 16.0;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // iinc slot 4 value 1
    local[4].i += 1;
    // arrload u16  ,  L320861946 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.hexvalue(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 19);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d + stack[sp - 2].d; 
    sp -= 2;
    sp -= 2;
    local[7].d = stack[sp].d;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L245220560;
    L1728924984:
    //  line no 362 , L1728924984 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L1728924984
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1135870515;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L1728924984 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 46
    stack[sp++].i = 46;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1135870515;
    ; 
    //  line no 363 , L602928593 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    L772147225:
    //  line no 364 , L772147225 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L772147225
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1135870515;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L772147225 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // invokespecial org/luaj/vm2/compiler/LexState.isxdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isxdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1135870515;
    ; 
    //  line no 365 , L1120043781 , bytecode index = 
    stack[sp].d = local[7].d;
    sp += 2;
    //  ldc 
    stack[sp].d = 16.0;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // iinc slot 4 value 1
    local[4].i += 1;
    // arrload u16  ,  L1120043781 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.hexvalue(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 19);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d + stack[sp - 2].d; 
    sp -= 2;
    sp -= 2;
    local[7].d = stack[sp].d;
    ; 
    //  line no 366 , L562345204 , bytecode index = 
    // iinc slot 9 value -4
    local[9].i += -4;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L772147225;
    L1135870515:
    //  line no 369 , L1135870515 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L1135870515
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2098830440;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L1135870515 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 112
    stack[sp++].i = 112;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1665209618;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L1135870515 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 80
    stack[sp++].i = 80;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2098830440;
    L1665209618:
    //  line no 370 , L1665209618 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    ; 
    //  line no 371 , L902654164 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 372 , L829053325 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 373 , L2189588 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L2189588
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1805845895;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L2189588 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 45
    stack[sp++].i = 45;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1805845895;
    ; 
    //  line no 374 , L896945135 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 375 , L1446238973 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    L1805845895:
    //  line no 377 , L1805845895 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L1805845895
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1565614310;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L1805845895 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // invokespecial org/luaj/vm2/compiler/LexState.isdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1565614310;
    ; 
    //  line no 378 , L783141366 , bytecode index = 
    stack[sp++].i = local[10].i;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // iinc slot 4 value 1
    local[4].i += 1;
    // arrload u16  ,  L783141366 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1805845895;
    L1565614310:
    //  line no 379 , L1565614310 , bytecode index = 
    stack[sp++].i = local[11].i;
    if(stack[--sp].i  == 0) goto L688113407;
    ; 
    //  line no 380 , L1638864144 , bytecode index = 
    stack[sp++].i = local[10].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    local[10].i = stack[--sp].i;
    L688113407:
    //  line no 381 , L688113407 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[10].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[9].i = stack[--sp].i;
    L2098830440:
    //  line no 383 , L2098830440 , bytecode index = 
    stack[sp].d = local[5].d;
    sp += 2;
    stack[sp].d = local[7].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    //  ldc 
    stack[sp].d = 2.0;
    sp += 2;
    stack[sp++].i = local[9].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    // invokestatic org/luaj/vm2/lib/MathLib.dpow_d(DD)D
    {
        sp -= 5;
        stack[sp].d = func_org_luaj_vm2_lib_MathLib_dpow_1d__DD_D(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaValue.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_org_luaj_vm2_compiler_LexState_strx2number__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_strx2number__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj);
}

ExceptionItem arr_extable_func_org_luaj_vm2_compiler_LexState_str2d__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Z[] = {
    { , , 3492}
};
ExceptionTable extable_func_org_luaj_vm2_compiler_LexState_str2d__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Z = {1, arr_extable_func_org_luaj_vm2_compiler_LexState_str2d__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Z};

// locals: 4
// stack: 4
// args: 2
s8 func_org_luaj_vm2_compiler_LexState_str2d__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0, struct org_luaj_vm2_compiler_LexState_00024SemInfo* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1997, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    // try catch :L2005762793 L1083086553 L1502616653 (
    ; 
    //  line no 387 , L378327915 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 387;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 110
    stack[sp++].i = 110;
    // invokevirtual java/lang/String.indexOf(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L227381657;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 78
    stack[sp++].i = 78;
    // invokevirtual java/lang/String.indexOf(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  < 0) goto L956429999;
    L227381657:
    //  line no 388 , L227381657 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getstatic org/luaj/vm2/LuaValue ZERO Lorg/luaj/vm2/LuaNumber;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ZERO_17;
    sp += 1;
    // putfield org/luaj/vm2/compiler/LexState$SemInfo r Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp + 0].obj)->r_0 = rstack[sp + 1].obj;
    goto L1613424566;
    L956429999:
    //  line no 389 , L956429999 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 120
    stack[sp++].i = 120;
    // invokevirtual java/lang/String.indexOf(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L281896787;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 88
    stack[sp++].i = 88;
    // invokevirtual java/lang/String.indexOf(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  < 0) goto L2005762793;
    L281896787:
    //  line no 390 , L281896787 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.strx2number(Ljava/lang/String;Lorg/luaj/vm2/compiler/LexState$SemInfo;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct org_luaj_vm2_compiler_LexState_00024SemInfo*) = find_method(__ins->vm_table, 266, 14);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$SemInfo r Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp + 0].obj)->r_0 = rstack[sp + 1].obj;
    goto L1613424566;
    L2005762793:
    __frame->bytecodeIndex = 
    //  line no 393 , L2005762793 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.trim()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 32);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic java/lang/Double.parseDouble(Ljava/lang/String;)D
    {
        sp -= 2;
        stack[sp].d = func_java_lang_Double_parseDouble__Ljava_lang_String_2_D(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaValue.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$SemInfo r Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp + 0].obj)->r_0 = rstack[sp + 1].obj;
    L1083086553:
    __frame->bytecodeIndex = 
    //  line no 396 , L1083086553 , bytecode index = 
    goto L1613424566;
    L1502616653:
    //  line no 394 , L1502616653 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 395 , L1907178890 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3493);
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
    // invokevirtual java/lang/NumberFormatException.getMessage()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 56, 0);
        rstack[sp].obj = __func_p(runtime);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1670);
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
    //  sipush 287
    stack[sp++].i = 287;
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
    L1613424566:
    //  line no 398 , L1613424566 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1502616653;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_compiler_LexState_str2d__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_str2d__Ljava_lang_String_2Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_Z(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 5
// args: 1
void func_org_luaj_vm2_compiler_LexState_read_1numeral__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024SemInfo* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1998, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 402 , L1880052106 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 402;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3496);
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 403 , L193156903 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 404 , L333085360 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState.isdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 405 , L747004588 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 406 , L638580151 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L925152318;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3497);
    // invokevirtual org/luaj/vm2/compiler/LexState.check_next(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 12);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L925152318;
    ; 
    //  line no 407 , L2011912080 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3498);
    rlocal[2].obj = rstack[--sp].obj;
    L925152318:
    //  line no 409 , L925152318 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_next(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 12);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1760020675;
    ; 
    //  line no 410 , L832322085 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3499);
    // invokevirtual org/luaj/vm2/compiler/LexState.check_next(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 12);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1760020675:
    //  line no 411 , L1760020675 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState.isxdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isxdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L596376940;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 46
    stack[sp++].i = 46;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L250702170;
    L596376940:
    //  line no 412 , L596376940 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L925152318;
    L250702170:
    //  line no 416 , L250702170 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
    sp += 0;
    // invokespecial java/lang/String.<init>([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3CII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 417 , L1485179287 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str2d(Ljava/lang/String;Lorg/luaj/vm2/compiler/LexState$SemInfo;)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct org_luaj_vm2_compiler_LexState_00024SemInfo*) = find_method(__ins->vm_table, 266, 15);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 418 , L136011184 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_read_1numeral__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_read_1numeral__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
s32 func_org_luaj_vm2_compiler_LexState_skip_1sep___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1999, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 421 , L1899609393 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 421;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 422 , L429639728 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 423 , L1262477422 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 91
    stack[sp++].i = 91;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L41633258;
    stack[sp++].i = local[2].i;
    //  bipush 93
    stack[sp++].i = 93;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1041735841;
    L41633258:
    // iconst_1
    stack[sp++].i = 1;
    goto L2030707995;
    L1041735841:
    // iconst_0
    stack[sp++].i = 0;
    L2030707995:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 424 , L1300399812 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L353296011:
    //  line no 425 , L353296011 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 61
    stack[sp++].i = 61;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L371156515;
    ; 
    //  line no 426 , L1041611526 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 427 , L1735962278 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L353296011;
    L371156515:
    //  line no 429 , L371156515 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L81907268;
    stack[sp++].i = local[1].i;
    goto L1763872389;
    L81907268:
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    L1763872389:
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

void bridge_org_luaj_vm2_compiler_LexState_skip_1sep___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_skip_1sep___I(runtime, ins);
}


// locals: 5
// stack: 8
// args: 2
void func_org_luaj_vm2_compiler_LexState_read_1long_1string__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024SemInfo* p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2000, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 433 , L1481853275 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 433;
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 434 , L1380593659 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 435 , L794940817 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.currIsNewline()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L858267892;
    ; 
    //  line no 436 , L1903406683 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.inclinenumber()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 10);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L858267892:
    //  line no 437 , L858267892 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1917149817:
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  != 0) goto L1403649277;
    ; 
    //  line no 438 , L569661948 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    switch(stack[--sp].i){
        case -1:
            goto L337039263;
        case 10:
            goto L138708980;
        case 13:
            goto L138708980;
        case 91:
            goto L201069753;
        case 93:
            goto L263588219;
        default:
            goto L1293495023;
    }
    L337039263:
    //  line no 440 , L337039263 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L771642661;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3503);
    goto L19467337;
    L771642661:
    //  line no 441 , L771642661 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3504);
    L19467337:
    //  sipush 286
    stack[sp++].i = 286;
    ; 
    //  line no 440 , L1788582153 , bytecode index = 
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
    //  line no 442 , L1440332016 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1917149817;
    L201069753:
    //  line no 444 , L201069753 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.skip_sep()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 17);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1917149817;
    ; 
    //  line no 445 , L173115411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 446 , L1137935956 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    ; 
    //  line no 448 , L1966480630 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L1917149817;
    ; 
    //  line no 449 , L1831875736 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3505);
    //  bipush 91
    stack[sp++].i = 91;
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1917149817;
    L263588219:
    //  line no 455 , L263588219 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.skip_sep()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 17);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1917149817;
    ; 
    //  line no 456 , L1806121021 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 462 , L874111547 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[4].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1917149817;
    L138708980:
    //  line no 468 , L138708980 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // invokevirtual org/luaj/vm2/compiler/LexState.save(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 3);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 469 , L1896712674 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.inclinenumber()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 10);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 470 , L494266287 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(rstack[--sp].obj  != NULL) goto L1917149817;
    ; 
    //  line no 471 , L1338065644 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState nbuff I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->nbuff_161 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1917149817;
    L1293495023:
    //  line no 475 , L1293495023 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L884111637;
    ; 
    //  line no 476 , L703440120 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1917149817;
    L884111637:
    //  line no 478 , L884111637 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1917149817;
    L1403649277:
    //  line no 482 , L1403649277 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L462911221;
    ; 
    //  line no 483 , L1577353545 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaString.valueOf([CII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf___3CII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.newTString(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 265, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp + 0].obj)->ts_1 = rstack[sp + 1].obj;
    L462911221:
    //  line no 484 , L462911221 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_read_1long_1string__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_read_1long_1string__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2I_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_compiler_LexState_hexvalue__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2001, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 487 , L1029148906 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 487;
    stack[sp++].i = local[1].i;
    //  bipush 57
    stack[sp++].i = 57;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L500660587;
    stack[sp++].i = local[1].i;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    goto L1738784081;
    L500660587:
    stack[sp++].i = local[1].i;
    //  bipush 70
    stack[sp++].i = 70;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1463823265;
    stack[sp++].i = local[1].i;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 65
    stack[sp++].i = 65;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    goto L1738784081;
    L1463823265:
    stack[sp++].i = local[1].i;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 97
    stack[sp++].i = 97;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    L1738784081:
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

void bridge_org_luaj_vm2_compiler_LexState_hexvalue__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_hexvalue__I_I(runtime, ins);
}


// locals: 3
// stack: 3
// args: 0
s32 func_org_luaj_vm2_compiler_LexState_readhexaesc___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2002, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 491 , L1881868027 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 491;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 492 , L169370778 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 493 , L1548962651 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 494 , L60187547 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 495 , L723689932 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial org/luaj/vm2/compiler/LexState.isxdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isxdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1649884294;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/compiler/LexState.isxdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isxdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L605600260;
    L1649884294:
    //  line no 496 , L1649884294 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3508);
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
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
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
    //  sipush 289
    stack[sp++].i = 289;
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
    L605600260:
    //  line no 497 , L605600260 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.hexvalue(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 19);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_4
    stack[sp++].i = 4;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.hexvalue(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 19);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_LexState_readhexaesc___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_readhexaesc___I(runtime, ins);
}


// locals: 5
// stack: 6
// args: 2
void func_org_luaj_vm2_compiler_LexState_read_1string__ILorg_luaj_vm2_compiler_LexState_00024SemInfo_2_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_compiler_LexState_00024SemInfo* p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2003, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 501 , L716206126 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 501;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1901648626:
    //  line no 502 , L1901648626 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L284268103;
    ; 
    //  line no 503 , L271514713 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    switch(stack[--sp].i){
        case -1:
            goto L244190700;
        case 10:
            goto L315748820;
        case 13:
            goto L315748820;
        case 92:
            goto L1979325411;
        default:
            goto L959897458;
    }
    L244190700:
    //  line no 505 , L244190700 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3511);
    //  sipush 286
    stack[sp++].i = 286;
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
    //  line no 506 , L2050529121 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1901648626;
    L315748820:
    //  line no 509 , L315748820 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3511);
    //  sipush 289
    stack[sp++].i = 289;
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
    //  line no 510 , L69670055 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1901648626;
    L1979325411:
    //  line no 513 , L1979325411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 514 , L426052262 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    switch(stack[--sp].i){
        case -1:
            goto L47719432;
        case 10:
            goto L1055300312;
        case 13:
            goto L1055300312;
        case 97:
            goto L258447256;
        case 98:
            goto L443348849;
        case 102:
            goto L1507293264;
        case 110:
            goto L1408043496;
        case 114:
            goto L1619369818;
        case 116:
            goto L498023236;
        case 118:
            goto L2144912729;
        case 120:
            goto L1153511683;
        case 122:
            goto L150079886;
        default:
            goto L1021656938;
    }
    L258447256:
    //  line no 516 , L258447256 , bytecode index = 
    //  bipush 7
    stack[sp++].i = 7;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 517 , L1818453711 , bytecode index = 
    goto L1437107223;
    L443348849:
    //  line no 519 , L443348849 , bytecode index = 
    //  bipush 8
    stack[sp++].i = 8;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 520 , L413990536 , bytecode index = 
    goto L1437107223;
    L1507293264:
    //  line no 522 , L1507293264 , bytecode index = 
    //  bipush 12
    stack[sp++].i = 12;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 523 , L9054826 , bytecode index = 
    goto L1437107223;
    L1408043496:
    //  line no 525 , L1408043496 , bytecode index = 
    //  bipush 10
    stack[sp++].i = 10;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 526 , L1999135146 , bytecode index = 
    goto L1437107223;
    L1619369818:
    //  line no 528 , L1619369818 , bytecode index = 
    //  bipush 13
    stack[sp++].i = 13;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 529 , L1714539364 , bytecode index = 
    goto L1437107223;
    L498023236:
    //  line no 531 , L498023236 , bytecode index = 
    //  bipush 9
    stack[sp++].i = 9;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 532 , L429269396 , bytecode index = 
    goto L1437107223;
    L2144912729:
    //  line no 534 , L2144912729 , bytecode index = 
    //  bipush 11
    stack[sp++].i = 11;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 535 , L1209962934 , bytecode index = 
    goto L1437107223;
    L1153511683:
    //  line no 537 , L1153511683 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.readhexaesc()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 538 , L2089786414 , bytecode index = 
    goto L1437107223;
    L1055300312:
    //  line no 541 , L1055300312 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // invokevirtual org/luaj/vm2/compiler/LexState.save(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 3);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 542 , L336400944 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.inclinenumber()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 10);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 543 , L1019157412 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1901648626;
    L47719432:
    //  line no 545 , L47719432 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1901648626;
    L150079886:
    //  line no 547 , L150079886 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1097380:
    //  line no 548 , L1097380 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState.isspace(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isspace__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L1901648626;
    ; 
    //  line no 549 , L8268900 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.currIsNewline()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2082353865;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.inclinenumber()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 10);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1097380;
    L2082353865:
    //  line no 550 , L2082353865 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1097380;
    L1021656938:
    //  line no 555 , L1021656938 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState.isdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L943219925;
    ; 
    //  line no 556 , L1037572328 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1901648626;
    L943219925:
    //  line no 558 , L943219925 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 559 , L1286868539 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1102181662:
    //  line no 561 , L1102181662 , bytecode index = 
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 562 , L978599729 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 563 , L1203142603 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    stack[sp++].i = local[4].i;
    // iconst_3
    stack[sp++].i = 3;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L731870416;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState.isdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L1102181662;
    L731870416:
    //  line no 564 , L731870416 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  sipush 255
    stack[sp++].i = 255;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1707634104;
    ; 
    //  line no 565 , L2130606983 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3512);
    //  sipush 289
    stack[sp++].i = 289;
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
    L1707634104:
    //  line no 566 , L1707634104 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.save(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 3);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 568 , L180489140 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1901648626;
    L1437107223:
    //  line no 571 , L1437107223 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.save(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 3);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 572 , L1512822728 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 573 , L2091439256 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1901648626;
    L959897458:
    //  line no 576 , L959897458 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1901648626;
    L284268103:
    //  line no 579 , L284268103 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 580 , L1904720585 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaString.valueOf([CII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf___3CII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.newTString(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 265, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp + 0].obj)->ts_1 = rstack[sp + 1].obj;
    ; 
    //  line no 581 , L1803714790 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_read_1string__ILorg_luaj_vm2_compiler_LexState_00024SemInfo_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_read_1string__ILorg_luaj_vm2_compiler_LexState_00024SemInfo_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 4
// args: 1
s32 func_org_luaj_vm2_compiler_LexState_llex__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024SemInfo* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2004, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 584 , L1428527783 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 584;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState nbuff I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->nbuff_161 = stack[sp + 1].i;
    L423109432:
    //  line no 586 , L423109432 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    switch(stack[--sp].i){
        case -1:
            goto L366752671;
        case 9:
            goto L1825923873;
        case 10:
            goto L883735648;
        case 11:
            goto L1825923873;
        case 12:
            goto L1825923873;
        case 13:
            goto L883735648;
        case 32:
            goto L1825923873;
        case 34:
            goto L1118998513;
        case 39:
            goto L1118998513;
        case 45:
            goto L906370291;
        case 46:
            goto L1905114489;
        case 48:
            goto L538132628;
        case 49:
            goto L538132628;
        case 50:
            goto L538132628;
        case 51:
            goto L538132628;
        case 52:
            goto L538132628;
        case 53:
            goto L538132628;
        case 54:
            goto L538132628;
        case 55:
            goto L538132628;
        case 56:
            goto L538132628;
        case 57:
            goto L538132628;
        case 58:
            goto L1988664928;
        case 60:
            goto L1886381510;
        case 61:
            goto L1813375175;
        case 62:
            goto L1446511153;
        case 91:
            goto L1693580552;
        case 126:
            goto L1799316869;
        default:
            goto L1715602761;
    }
    L883735648:
    //  line no 589 , L883735648 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.inclinenumber()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 10);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 590 , L674233333 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L423109432;
    L1825923873:
    //  line no 596 , L1825923873 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 597 , L1041255755 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L423109432;
    L906370291:
    //  line no 600 , L906370291 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 601 , L1440939580 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 45
    stack[sp++].i = 45;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1172417096;
    ; 
    //  line no 602 , L314966354 , bytecode index = 
    //  bipush 45
    stack[sp++].i = 45;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1172417096:
    //  line no 604 , L1172417096 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 605 , L780172372 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 91
    stack[sp++].i = 91;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1825662118;
    ; 
    //  line no 606 , L606740638 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.skip_sep()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 17);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 607 , L105146840 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState nbuff I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->nbuff_161 = stack[sp + 1].i;
    ; 
    //  line no 608 , L730584984 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L1825662118;
    ; 
    //  line no 609 , L1276666395 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.read_long_string(Lorg/luaj/vm2/compiler/LexState$SemInfo;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024SemInfo*,s32) = find_method(__ins->vm_table, 266, 18);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 610 , L969115094 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState nbuff I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->nbuff_161 = stack[sp + 1].i;
    ; 
    //  line no 611 , L485237151 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L423109432;
    L1825662118:
    //  line no 615 , L1825662118 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.currIsNewline()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L423109432;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L423109432;
    ; 
    //  line no 616 , L1764622989 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1825662118;
    L1693580552:
    //  line no 620 , L1693580552 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.skip_sep()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 17);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 621 , L1714007305 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L1138845999;
    ; 
    //  line no 622 , L1048332309 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.read_long_string(Lorg/luaj/vm2/compiler/LexState$SemInfo;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024SemInfo*,s32) = find_method(__ins->vm_table, 266, 18);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 623 , L668929853 , bytecode index = 
    //  sipush 289
    stack[sp++].i = 289;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1138845999:
    //  line no 624 , L1138845999 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L204844842;
    ; 
    //  line no 625 , L1146423186 , bytecode index = 
    //  bipush 91
    stack[sp++].i = 91;
    method_exit(runtime);
    return stack[sp - 1].i;
    L204844842:
    //  line no 627 , L204844842 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3515);
    //  sipush 289
    stack[sp++].i = 289;
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
    L1813375175:
    //  line no 630 , L1813375175 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 631 , L406180845 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 61
    stack[sp++].i = 61;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1196200241;
    ; 
    //  line no 632 , L1713453581 , bytecode index = 
    //  bipush 61
    stack[sp++].i = 61;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1196200241:
    //  line no 634 , L1196200241 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 635 , L178575564 , bytecode index = 
    //  sipush 281
    stack[sp++].i = 281;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1886381510:
    //  line no 639 , L1886381510 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 640 , L1018742990 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 61
    stack[sp++].i = 61;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L534643569;
    ; 
    //  line no 641 , L1891673045 , bytecode index = 
    //  bipush 60
    stack[sp++].i = 60;
    method_exit(runtime);
    return stack[sp - 1].i;
    L534643569:
    //  line no 643 , L534643569 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 644 , L1552836537 , bytecode index = 
    //  sipush 283
    stack[sp++].i = 283;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1446511153:
    //  line no 648 , L1446511153 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 649 , L638204510 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 61
    stack[sp++].i = 61;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1226858597;
    ; 
    //  line no 650 , L1007402143 , bytecode index = 
    //  bipush 62
    stack[sp++].i = 62;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1226858597:
    //  line no 652 , L1226858597 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 653 , L320321288 , bytecode index = 
    //  sipush 282
    stack[sp++].i = 282;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1799316869:
    //  line no 657 , L1799316869 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 658 , L1681434622 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 61
    stack[sp++].i = 61;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L777113684;
    ; 
    //  line no 659 , L1331654213 , bytecode index = 
    //  bipush 126
    stack[sp++].i = 126;
    method_exit(runtime);
    return stack[sp - 1].i;
    L777113684:
    //  line no 661 , L777113684 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 662 , L1633566545 , bytecode index = 
    //  sipush 284
    stack[sp++].i = 284;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1988664928:
    //  line no 666 , L1988664928 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 667 , L1081635795 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 58
    stack[sp++].i = 58;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1619773688;
    ; 
    //  line no 668 , L1410514922 , bytecode index = 
    //  bipush 58
    stack[sp++].i = 58;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1619773688:
    //  line no 670 , L1619773688 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 671 , L1151772302 , bytecode index = 
    //  sipush 285
    stack[sp++].i = 285;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1118998513:
    //  line no 676 , L1118998513 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.read_string(ILorg/luaj/vm2/compiler/LexState$SemInfo;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024SemInfo*) = find_method(__ins->vm_table, 266, 21);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 677 , L1195615010 , bytecode index = 
    //  sipush 289
    stack[sp++].i = 289;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1905114489:
    //  line no 680 , L1905114489 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 681 , L2033282874 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2278);
    // invokevirtual org/luaj/vm2/compiler/LexState.check_next(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 12);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L941453849;
    ; 
    //  line no 682 , L1241395522 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2278);
    // invokevirtual org/luaj/vm2/compiler/LexState.check_next(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 12);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L335466988;
    ; 
    //  line no 683 , L1640244246 , bytecode index = 
    //  sipush 280
    stack[sp++].i = 280;
    method_exit(runtime);
    return stack[sp - 1].i;
    L335466988:
    //  line no 685 , L335466988 , bytecode index = 
    //  sipush 279
    stack[sp++].i = 279;
    method_exit(runtime);
    return stack[sp - 1].i;
    L941453849:
    //  line no 686 , L941453849 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState.isdigit(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isdigit__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L848961421;
    ; 
    //  line no 687 , L173431997 , bytecode index = 
    //  bipush 46
    stack[sp++].i = 46;
    method_exit(runtime);
    return stack[sp - 1].i;
    L848961421:
    //  line no 689 , L848961421 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.read_numeral(Lorg/luaj/vm2/compiler/LexState$SemInfo;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024SemInfo*) = find_method(__ins->vm_table, 266, 16);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 690 , L1875025322 , bytecode index = 
    //  sipush 287
    stack[sp++].i = 287;
    method_exit(runtime);
    return stack[sp - 1].i;
    L538132628:
    //  line no 695 , L538132628 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.read_numeral(Lorg/luaj/vm2/compiler/LexState$SemInfo;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024SemInfo*) = find_method(__ins->vm_table, 266, 16);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 696 , L795275472 , bytecode index = 
    //  sipush 287
    stack[sp++].i = 287;
    method_exit(runtime);
    return stack[sp - 1].i;
    L366752671:
    //  line no 699 , L366752671 , bytecode index = 
    //  sipush 286
    stack[sp++].i = 286;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1715602761:
    //  line no 702 , L1715602761 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState.isalpha(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isalpha__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1298330822;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    //  bipush 95
    stack[sp++].i = 95;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1969875555;
    L1298330822:
    //  line no 706 , L1298330822 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.save_and_next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 707 , L247269033 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState.isalnum(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isalnum__I_Z(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L1298330822;
    ; 
    //  line no 708 , L382044126 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState buff [C
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->buff_160;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState nbuff I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->nbuff_161;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.newstring([CII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 266, 9);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 709 , L1289454852 , bytecode index = 
    // getstatic org/luaj/vm2/compiler/LexState RESERVED Ljava/util/HashMap;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.RESERVED_202;
    sp += 1;
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L1994085390;
    ; 
    //  line no 710 , L271944754 , bytecode index = 
    // getstatic org/luaj/vm2/compiler/LexState RESERVED Ljava/util/HashMap;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.RESERVED_202;
    sp += 1;
    rstack[sp++].obj = rlocal[2].obj;
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
    L1994085390:
    //  line no 712 , L1994085390 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp + 0].obj)->ts_1 = rstack[sp + 1].obj;
    ; 
    //  line no 713 , L720638621 , bytecode index = 
    //  sipush 288
    stack[sp++].i = 288;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1969875555:
    //  line no 716 , L1969875555 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState current I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->current_152;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 717 , L974606690 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.nextChar()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 718 , L373299466 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_llex__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_llex__Lorg_luaj_vm2_compiler_LexState_00024SemInfo_2_I(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_next___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2005, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 726 , L541248718 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 726;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState lastline I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->lastline_154 = stack[sp + 1].i;
    ; 
    //  line no 727 , L551421413 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lookahead_156;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 286
    stack[sp++].i = 286;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L918606013;
    ; 
    //  line no 728 , L1579139754 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lookahead_156;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState$Token.set(Lorg/luaj/vm2/compiler/LexState$Token;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024Token*) = find_method(__ins->vm_table, 168, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 729 , L1754087707 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lookahead_156;
    sp += 0;
    //  sipush 286
    stack[sp++].i = 286;
    // putfield org/luaj/vm2/compiler/LexState$Token token I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp + 0].obj)->token_0 = stack[sp + 1].i;
    goto L942444738;
    L918606013:
    //  line no 731 , L918606013 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.llex(Lorg/luaj/vm2/compiler/LexState$SemInfo;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024SemInfo*) = find_method(__ins->vm_table, 266, 22);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$Token token I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp + 0].obj)->token_0 = stack[sp + 1].i;
    L942444738:
    //  line no 732 , L942444738 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_next___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_next___V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_lookahead___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2006, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 735 , L678654833 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 735;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lookahead_156;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 286
    stack[sp++].i = 286;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L720661245;
    // iconst_1
    stack[sp++].i = 1;
    goto L1979860449;
    L720661245:
    // iconst_0
    stack[sp++].i = 0;
    L1979860449:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 736 , L835631769 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lookahead_156;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lookahead_156;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.llex(Lorg/luaj/vm2/compiler/LexState$SemInfo;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024SemInfo*) = find_method(__ins->vm_table, 266, 22);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$Token token I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp + 0].obj)->token_0 = stack[sp + 1].i;
    ; 
    //  line no 737 , L43368234 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_lookahead___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_lookahead___V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
s8 func_org_luaj_vm2_compiler_LexState_vkisvar__I_Z(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2007, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 749 , L1878454236 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 749;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp++].i = local[0].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L724081353;
    stack[sp++].i = local[0].i;
    //  bipush 9
    stack[sp++].i = 9;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L724081353;
    // iconst_1
    stack[sp++].i = 1;
    goto L82517097;
    L724081353:
    // iconst_0
    stack[sp++].i = 0;
    L82517097:
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

void bridge_org_luaj_vm2_compiler_LexState_vkisvar__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_vkisvar__I_Z(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s8 func_org_luaj_vm2_compiler_LexState_vkisinreg__I_Z(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2008, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 753 , L721648892 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 753;
    stack[sp++].i = local[0].i;
    //  bipush 6
    stack[sp++].i = 6;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1150436743;
    stack[sp++].i = local[0].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L407241000;
    L1150436743:
    // iconst_1
    stack[sp++].i = 1;
    goto L1960031800;
    L407241000:
    // iconst_0
    stack[sp++].i = 0;
    L1960031800:
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

void bridge_org_luaj_vm2_compiler_LexState_vkisinreg__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_vkisinreg__I_Z(runtime, para[0].obj, para[1].i);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_hasmultret__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2009, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 838 , L309271464 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 838;
    stack[sp++].i = local[1].i;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L973604748;
    stack[sp++].i = local[1].i;
    //  bipush 13
    stack[sp++].i = 13;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1401095299;
    L973604748:
    // iconst_1
    stack[sp++].i = 1;
    goto L704143329;
    L1401095299:
    // iconst_0
    stack[sp++].i = 0;
    L704143329:
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

void bridge_org_luaj_vm2_compiler_LexState_hasmultret__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_hasmultret__I_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
void func_org_luaj_vm2_compiler_LexState_anchor_1token___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2010, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 847 , L963573938 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 847;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1921143808;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 286
    stack[sp++].i = 286;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L435034854;
    L1921143808:
    // iconst_1
    stack[sp++].i = 1;
    goto L1594981181;
    L435034854:
    // iconst_0
    stack[sp++].i = 0;
    L1594981181:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 848 , L292856581 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 288
    stack[sp++].i = 288;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1907808127;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 289
    stack[sp++].i = 289;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L409393797;
    L1907808127:
    //  line no 849 , L1907808127 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp - 1].obj)->ts_1;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 851 , L1291485735 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp - 1].obj)->ts_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.cachedLuaString(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 265, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L409393797:
    //  line no 853 , L409393797 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_anchor_1token___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_anchor_1token___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_semerror__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2011, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 857 , L1063801186 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 857;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState$Token token I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp + 0].obj)->token_0 = stack[sp + 1].i;
    ; 
    //  line no 858 , L301205240 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    ; 
    //  line no 859 , L159860059 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_semerror__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_semerror__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_org_luaj_vm2_compiler_LexState_error_1expected__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2012, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 862 , L523331047 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 862;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.token2str(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.LUA_QS(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_LUA_1QS__Ljava_lang_String_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3521);
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
    ; 
    //  line no 863 , L784556863 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_error_1expected__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_error_1expected__I_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_testnext__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2013, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 866 , L20084184 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 866;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L364389956;
    ; 
    //  line no 867 , L542598487 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 868 , L1464652578 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L364389956:
    //  line no 870 , L364389956 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_testnext__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_testnext__I_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_check__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2014, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 874 , L295466076 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 874;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L175822565;
    ; 
    //  line no 875 , L991875403 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.error_expected(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 28);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L175822565:
    //  line no 876 , L175822565 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_check__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_check__I_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_checknext__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2015, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 879 , L466056887 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 879;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 30);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 880 , L1196836564 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 881 , L168776700 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_checknext__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_checknext__I_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_compiler_LexState_check_1condition__ZLjava_lang_String_2_V(JThreadRuntime *runtime, s8 p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2016, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 884 , L501991708 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 884;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L1753107603;
    ; 
    //  line no 885 , L404648659 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    L1753107603:
    //  line no 886 , L1753107603 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_check_1condition__ZLjava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_check_1condition__ZLjava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 5
// args: 3
void func_org_luaj_vm2_compiler_LexState_check_1match__III_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2017, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 890 , L757541645 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 890;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L925364462;
    ; 
    //  line no 891 , L1547994163 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L263656423;
    ; 
    //  line no 892 , L459030111 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.error_expected(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 28);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L925364462;
    L263656423:
    //  line no 894 , L263656423 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.token2str(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.LUA_QS(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_LUA_1QS__Ljava_lang_String_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3527);
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
    stack[sp++].i = local[2].i;
    ; 
    //  line no 895 , L326376794 , bytecode index = 
    // invokevirtual org/luaj/vm2/compiler/LexState.token2str(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.LUA_QS(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_LUA_1QS__Ljava_lang_String_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3528);
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
    stack[sp++].i = local[3].i;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1670);
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
    ; 
    //  line no 894 , L1802073627 , bytecode index = 
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
    L925364462:
    //  line no 899 , L925364462 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_check_1match__III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_check_1match__III_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 2
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_compiler_LexState_str_1checkname___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2018, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 903 , L639769517 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 903;
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 288
    stack[sp++].i = 288;
    // invokevirtual org/luaj/vm2/compiler/LexState.check(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 30);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 904 , L361712894 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp - 1].obj)->ts_1;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 905 , L905329146 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 906 , L1521132614 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_org_luaj_vm2_compiler_LexState_str_1checkname___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_str_1checkname___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
void func_org_luaj_vm2_compiler_LexState_codestring__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, struct org_luaj_vm2_LuaString* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2019, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 910 , L65305091 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 910;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_4
    stack[sp++].i = 4;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.stringK(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 264, 41);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    //  line no 911 , L131709548 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_codestring__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_codestring__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2Lorg_luaj_vm2_LuaString_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_checkname__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2020, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 914 , L2111181256 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 914;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.codestring(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 35);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 915 , L1564629011 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_checkname__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_checkname__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 4
// stack: 7
// args: 1
s32 func_org_luaj_vm2_compiler_LexState_registerlocalvar__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2021, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 919 , L1788048182 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 919;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 920 , L663119869 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 921 , L1749758430 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1800592689;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState nlocvars S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nlocvars_114;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    // arraylength  label  L1749758430
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L438897070;
    L1800592689:
    //  line no 922 , L1800592689 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState nlocvars S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nlocvars_114;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([Lorg/luaj/vm2/LocVars;I)[Lorg/luaj/vm2/LocVars;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3Lorg_luaj_vm2_LocVars_2I__3Lorg_luaj_vm2_LocVars_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->locvars_4 = rstack[sp + 1].obj;
    L438897070:
    //  line no 923 , L438897070 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState nlocvars S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nlocvars_114;
    sp += 0;
    // new org/luaj/vm2/LocVars
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 127);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial org/luaj/vm2/LocVars.<init>(Lorg/luaj/vm2/LuaString;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LocVars__init___Lorg_luaj_vm2_LuaString_2II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L438897070 bc index = 
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
    //  line no 924 , L235154585 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState nlocvars S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nlocvars_114;
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
    // putfield org/luaj/vm2/compiler/FuncState nlocvars S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nlocvars_114 = stack[sp + 1].i;
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

void bridge_org_luaj_vm2_compiler_LexState_registerlocalvar__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_registerlocalvar__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
void func_org_luaj_vm2_compiler_LexState_new_1localvar__Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2022, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 928 , L1119277260 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 928;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.registerlocalvar(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 37);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 929 , L268490061 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1actvar_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  sipush 200
    stack[sp++].i = 200;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3535);
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
    //  line no 930 , L1062163248 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata actvar [Lorg/luaj/vm2/compiler/LexState$Vardesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->actvar_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L21723014;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1actvar_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata actvar [Lorg/luaj/vm2/compiler/LexState$Vardesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->actvar_0;
    sp += 0;
    // arraylength  label  L1062163248
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1963980755;
    L21723014:
    //  line no 931 , L21723014 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata actvar [Lorg/luaj/vm2/compiler/LexState$Vardesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->actvar_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1actvar_1;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.max(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_max__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([Lorg/luaj/vm2/compiler/LexState$Vardesc;I)[Lorg/luaj/vm2/compiler/LexState$Vardesc;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3Lorg_luaj_vm2_compiler_LexState_00024Vardesc_2I__3Lorg_luaj_vm2_compiler_LexState_00024Vardesc_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$Dyndata actvar [Lorg/luaj/vm2/compiler/LexState$Vardesc;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->actvar_0 = rstack[sp + 1].obj;
    L1963980755:
    //  line no 932 , L1963980755 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata actvar [Lorg/luaj/vm2/compiler/LexState$Vardesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->actvar_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
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
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1actvar_1 = stack[sp + 1].i;
    // new org/luaj/vm2/compiler/LexState$Vardesc
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 319);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/compiler/LexState$Vardesc.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Vardesc__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1963980755 bc index = 
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
    //  line no 933 , L1672736386 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_new_1localvar__Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_new_1localvar__Lorg_luaj_vm2_LuaString_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_new_1localvarliteral__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2023, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 936 , L2089636626 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 936;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.newstring(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 937 , L1983283775 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvar(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 38);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 938 , L168670597 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_new_1localvarliteral__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_new_1localvarliteral__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_adjustlocalvars__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2024, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 941 , L1027022907 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 941;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 942 , L2144496344 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState nactvar S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nactvar_115 = stack[sp + 1].i;
    L412375354:
    //  line no 943 , L412375354 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  <= 0) goto L347136295;
    ; 
    //  line no 944 , L276970866 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // putfield org/luaj/vm2/LocVars startpc I
    sp -= 2;
    ((struct org_luaj_vm2_LocVars*)rstack[sp + 0].obj)->startpc_1 = stack[sp + 1].i;
    ; 
    //  line no 943 , L2095710480 , bytecode index = 
    // iinc slot 1 value -1
    local[1].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L412375354;
    L347136295:
    //  line no 946 , L347136295 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_adjustlocalvars__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_adjustlocalvars__I_V(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_removevars__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2025, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 949 , L1428664849 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 949;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    L1422883946:
    //  line no 950 , L1422883946 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2013332834;
    ; 
    //  line no 951 , L1349872758 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // putfield org/luaj/vm2/LocVars endpc I
    sp -= 2;
    ((struct org_luaj_vm2_LocVars*)rstack[sp + 0].obj)->endpc_2 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1422883946;
    L2013332834:
    //  line no 952 , L2013332834 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_removevars__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_removevars__I_V(runtime, ins);
}


// locals: 5
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_singlevar__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2026, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 955 , L388623360 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 955;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 956 , L1744032146 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 957 , L480118726 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
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
    if(stack[--sp].i  != 0) goto L1929447269;
    ; 
    //  line no 958 , L722513129 , bytecode index = 
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
    //  line no 959 , L1377212248 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState envn Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->envn_164;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
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
    --sp; //pop
    ; 
    //  line no 960 , L1054477035 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1167792250;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 8
    stack[sp++].i = 8;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1799521220;
    L1167792250:
    // iconst_1
    stack[sp++].i = 1;
    goto L218654115;
    L1799521220:
    // iconst_0
    stack[sp++].i = 0;
    L218654115:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 961 , L1668004795 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.codestring(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 35);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 962 , L2125346660 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.indexed(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 64);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1929447269:
    //  line no 964 , L1929447269 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_singlevar__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_singlevar__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 7
// stack: 3
// args: 3
void func_org_luaj_vm2_compiler_LexState_adjust_1assign__IILorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, s32 p0, s32 p1, struct org_luaj_vm2_compiler_LexState_00024expdesc* p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2027, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 967 , L1332121385 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 967;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 968 , L1903051549 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 969 , L2121551683 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.hasmultret(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 25);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L296223788;
    ; 
    //  line no 971 , L1783418615 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    ; 
    //  line no 972 , L1765350920 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  >= 0) goto L904612411;
    ; 
    //  line no 973 , L1689498062 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L904612411:
    //  line no 975 , L904612411 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
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
    //  line no 976 , L1753542873 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1240230559;
    ; 
    //  line no 977 , L649681675 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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
    goto L1240230559;
    L296223788:
    //  line no 980 , L296223788 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1602069459;
    ; 
    //  line no 981 , L271614685 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
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
    L1602069459:
    //  line no 982 , L1602069459 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  <= 0) goto L1240230559;
    ; 
    //  line no 983 , L975354582 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 984 , L1454366618 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
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
    //  line no 985 , L1694408103 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[5].i;
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
    L1240230559:
    //  line no 988 , L1240230559 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_adjust_1assign__IILorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_adjust_1assign__IILorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins, para[0].i, para[1].obj);
}


// locals: 1
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_enterlevel___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2028, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 991 , L1595354442 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 991;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LuaC$CompileState nCcalls I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LuaC_00024CompileState*)rstack[sp - 1].obj)->nCcalls_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LuaC$CompileState nCcalls I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LuaC_00024CompileState*)rstack[sp + 0].obj)->nCcalls_0 = stack[sp + 1].i;
    //  sipush 200
    stack[sp++].i = 200;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2011982397;
    ; 
    //  line no 992 , L1743770306 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3542);
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
    L2011982397:
    //  line no 993 , L2011982397 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_enterlevel___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_enterlevel___V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_leavelevel___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2029, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 996 , L398644489 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 996;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LuaC$CompileState nCcalls I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LuaC_00024CompileState*)rstack[sp - 1].obj)->nCcalls_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/LuaC$CompileState nCcalls I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LuaC_00024CompileState*)rstack[sp + 0].obj)->nCcalls_0 = stack[sp + 1].i;
    ; 
    //  line no 997 , L57407566 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_leavelevel___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_leavelevel___V(runtime, ins);
}


// locals: 8
// stack: 6
// args: 2
void func_org_luaj_vm2_compiler_LexState_closegoto__ILorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_compiler_LexState_00024Labeldesc* p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2030, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1000 , L632627844 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1000;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1001 , L610189734 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata gt [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->gt_2;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 1002 , L2016142571 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L2016142571 bc index = 
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1003 , L947462790 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
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
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 1004 , L886343183 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1716855490;
    ; 
    //  line no 1005 , L1107201631 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
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
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 1006 , L811792884 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3546);
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
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3547);
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
    rstack[sp++].obj = rlocal[5].obj;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3548);
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
    rstack[sp++].obj = rlocal[6].obj;
    ; 
    //  line no 1008 , L538375433 , bytecode index = 
    // invokevirtual org/luaj/vm2/LuaString.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 4);
        rstack[sp].obj = __func_p(runtime);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 283);
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
    ; 
    //  line no 1006 , L1864007931 , bytecode index = 
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
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 1009 , L1512273713 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[7].obj;
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
    L1716855490:
    //  line no 1011 , L1716855490 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchlist(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 32);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1013 , L2099878104 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1014 , L1778422985 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1gt_3 = stack[sp + 1].i;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L1778422985 bc index = 
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
    //  line no 1015 , L1369885738 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_closegoto__ILorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_closegoto__ILorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(runtime, ins, para[0].obj);
}


// locals: 7
// stack: 3
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_findlabel__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2031, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1022 , L555943503 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1022;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->bl_107;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1023 , L1332439166 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 1024 , L684407333 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata gt [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->gt_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L684407333 bc index = 
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1026 , L1431699407 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt firstlabel S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->firstlabel_1;
    sp += 0;
    local[2].i = stack[--sp].i;
    L1828559444:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2025928493;
    ; 
    //  line no 1027 , L162144258 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->label_4;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L162144258 bc index = 
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
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 1028 , L1945836927 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    rstack[sp++].obj = rlocal[5].obj;
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
    if(stack[--sp].i  == 0) goto L1943275118;
    ; 
    //  line no 1029 , L39661414 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    rstack[sp++].obj = rlocal[6].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1513071903;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt upval Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->upval_4;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1905548224;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt firstlabel S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->firstlabel_1;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1513071903;
    L1905548224:
    //  line no 1031 , L1905548224 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    rstack[sp++].obj = rlocal[6].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->nactvar_3;
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
    L1513071903:
    //  line no 1032 , L1513071903 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[6].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.closegoto(ILorg/luaj/vm2/compiler/LexState$Labeldesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024Labeldesc*) = find_method(__ins->vm_table, 266, 46);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1033 , L580965610 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1943275118:
    //  line no 1026 , L1943275118 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1828559444;
    L2025928493:
    //  line no 1036 , L2025928493 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_findlabel__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_findlabel__I_Z(runtime, ins);
}


// locals: 6
// stack: 8
// args: 5
s32 func_org_luaj_vm2_compiler_LexState_newlabelentry___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2ILorg_luaj_vm2_LuaString_2II_I(JThreadRuntime *runtime, JArray * p0, s32 p1, struct org_luaj_vm2_LuaString* p2, s32 p3, s32 p4){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2032, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    local[4].i = p4;
    ; 
    //  line no 1041 , L1858976440 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1041;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // new org/luaj/vm2/compiler/LexState$Labeldesc
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 320);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    // invokespecial org/luaj/vm2/compiler/LexState$Labeldesc.<init>(Lorg/luaj/vm2/LuaString;IIS)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Labeldesc__init___Lorg_luaj_vm2_LuaString_2IIS_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1858976440 bc index = 
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
    //  line no 1042 , L1037346554 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_newlabelentry___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2ILorg_luaj_vm2_LuaString_2II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_newlabelentry___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2ILorg_luaj_vm2_LuaString_2II_I(runtime, ins, para[0].i, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_findgotos__Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024Labeldesc* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2033, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1050 , L1064456966 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1050;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata gt [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->gt_2;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1051 , L1013528106 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->bl_107;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt firstgoto S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->firstgoto_2;
    sp += 0;
    local[3].i = stack[--sp].i;
    L605201451:
    //  line no 1052 , L605201451 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L72615125;
    ; 
    //  line no 1053 , L689147194 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L689147194 bc index = 
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
    rstack[sp++].obj = rlocal[1].obj;
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
    if(stack[--sp].i  == 0) goto L1555965524;
    ; 
    //  line no 1054 , L1841099284 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.closegoto(ILorg/luaj/vm2/compiler/LexState$Labeldesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024Labeldesc*) = find_method(__ins->vm_table, 266, 46);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L605201451;
    L1555965524:
    //  line no 1056 , L1555965524 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L605201451;
    L72615125:
    //  line no 1058 , L72615125 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_findgotos__Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_findgotos__Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(runtime, ins);
}


// locals: 3
// stack: 6
// args: 0
void func_org_luaj_vm2_compiler_LexState_breaklabel___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2034, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1065 , L2082807696 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1065;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3555);
    // invokestatic org/luaj/vm2/LuaString.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 1066 , L1367612102 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->label_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/LexState.grow([Lorg/luaj/vm2/compiler/LexState$Labeldesc;I)[Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_grow___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2I__3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->label_4 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
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
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1label_5 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.newlabelentry([Lorg/luaj/vm2/compiler/LexState$Labeldesc;ILorg/luaj/vm2/LuaString;II)I
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,struct org_luaj_vm2_LuaString*,s32,s32) = find_method(__ins->vm_table, 266, 48);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1067 , L1537371824 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->label_4;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1537371824 bc index = 
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
    // invokevirtual org/luaj/vm2/compiler/LexState.findgotos(Lorg/luaj/vm2/compiler/LexState$Labeldesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024Labeldesc*) = find_method(__ins->vm_table, 266, 49);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1068 , L1130258687 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_breaklabel___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_breaklabel___V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_undefgoto__Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024Labeldesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2035, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1075 , L1727026317 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1075;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState L Lorg/luaj/vm2/compiler/LuaC$CompileState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->L_158;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.isReservedKeyword(Ljava/lang/String;)Z
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_isReservedKeyword__Ljava_lang_String_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L779051277;
    ; 
    //  line no 1076 , L512140711 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1807);
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
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3547);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3557);
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
    goto L279963418;
    L779051277:
    //  line no 1077 , L779051277 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3558);
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
    // getfield org/luaj/vm2/compiler/LexState$Labeldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3559);
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
    L279963418:
    //  line no 1075 , L279963418 , bytecode index = 
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
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1078 , L1948224958 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    ; 
    //  line no 1079 , L556662073 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_undefgoto__Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_undefgoto__Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2_V(runtime, ins);
}


// locals: 3
// stack: 5
// args: 0
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_compiler_LexState_addprototype___Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2036, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1083 , L1708490318 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1083;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1084 , L1840217399 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L598049166;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState np I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->np_112;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // arraylength  label  L1840217399
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1192603187;
    L598049166:
    //  line no 1085 , L598049166 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState np I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->np_112;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.max(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_max__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([Lorg/luaj/vm2/Prototype;I)[Lorg/luaj/vm2/Prototype;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3Lorg_luaj_vm2_Prototype_2I__3Lorg_luaj_vm2_Prototype_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->p_2 = rstack[sp + 1].obj;
    L1192603187:
    //  line no 1087 , L1192603187 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState np I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->np_112;
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
    // putfield org/luaj/vm2/compiler/FuncState np I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->np_112 = stack[sp + 1].i;
    // new org/luaj/vm2/Prototype
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 128);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/Prototype.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Prototype__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    // arrstore __refer  ,  L167550865 bc index = 
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
    //  line no 1088 , L531373404 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_org_luaj_vm2_compiler_LexState_addprototype___Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_addprototype___Lorg_luaj_vm2_Prototype_2(runtime, ins);
}


// locals: 3
// stack: 7
// args: 1
void func_org_luaj_vm2_compiler_LexState_codeclosure__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2037, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1092 , L2055472834 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1092;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState prev Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->prev_105;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1093 , L392760852 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 11
    stack[sp++].i = 11;
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 37
    stack[sp++].i = 37;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState np I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->np_112;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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
    //  line no 1094 , L1750120280 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 1095 , L707719282 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_codeclosure__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_codeclosure__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
void func_org_luaj_vm2_compiler_LexState_open_1func__Lorg_luaj_vm2_compiler_FuncState_2Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_FuncState* p0, struct org_luaj_vm2_compiler_FuncState_00024BlockCnt* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2038, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1098 , L788592721 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1098;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // putfield org/luaj/vm2/compiler/FuncState prev Lorg/luaj/vm2/compiler/FuncState;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->prev_105 = rstack[sp + 1].obj;
    ; 
    //  line no 1099 , L1107779742 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield org/luaj/vm2/compiler/FuncState ls Lorg/luaj/vm2/compiler/LexState;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->ls_106 = rstack[sp + 1].obj;
    ; 
    //  line no 1100 , L527939020 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->fs_157 = rstack[sp + 1].obj;
    ; 
    //  line no 1101 , L1568450200 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/FuncState pc I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->pc_108 = stack[sp + 1].i;
    ; 
    //  line no 1102 , L1972772630 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/compiler/FuncState lasttarget I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->lasttarget_109 = stack[sp + 1].i;
    ; 
    //  line no 1103 , L208437930 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // new org/luaj/vm2/compiler/IntPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 132);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_-1
    stack[sp++].i = -1;
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
    // putfield org/luaj/vm2/compiler/FuncState jpc Lorg/luaj/vm2/compiler/IntPtr;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->jpc_110 = rstack[sp + 1].obj;
    ; 
    //  line no 1104 , L773300030 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    ; 
    //  line no 1105 , L384283650 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/FuncState nk I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nk_111 = stack[sp + 1].i;
    ; 
    //  line no 1106 , L1397516135 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/FuncState np I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->np_112 = stack[sp + 1].i;
    ; 
    //  line no 1107 , L1004390006 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/FuncState nups S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nups_116 = stack[sp + 1].i;
    ; 
    //  line no 1108 , L698437724 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/FuncState nlocvars S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nlocvars_114 = stack[sp + 1].i;
    ; 
    //  line no 1109 , L38647502 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/FuncState nactvar S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->nactvar_115 = stack[sp + 1].i;
    ; 
    //  line no 1110 , L839552703 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1actvar_1;
    sp += 0;
    // putfield org/luaj/vm2/compiler/FuncState firstlocal I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->firstlocal_113 = stack[sp + 1].i;
    ; 
    //  line no 1111 , L1739653374 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->bl_107 = rstack[sp + 1].obj;
    ; 
    //  line no 1112 , L1152487396 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState source Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->source_163;
    sp += 0;
    // putfield org/luaj/vm2/Prototype source Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->source_6 = rstack[sp + 1].obj;
    ; 
    //  line no 1113 , L732277370 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // putfield org/luaj/vm2/Prototype maxstacksize I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->maxstacksize_11 = stack[sp + 1].i;
    ; 
    //  line no 1114 , L1295820487 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1115 , L585496942 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_open_1func__Lorg_luaj_vm2_compiler_FuncState_2Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_open_1func__Lorg_luaj_vm2_compiler_FuncState_2Lorg_luaj_vm2_compiler_FuncState_00024BlockCnt_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_close_1func___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2039, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1118 , L1821580597 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1118;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 1119 , L1152488702 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1120 , L1225927567 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.ret(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 21);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1121 , L1071933072 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1122 , L1273675500 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([II)[I
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
    ; 
    //  line no 1123 , L62182667 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([II)[I
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
    ; 
    //  line no 1124 , L1529010337 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState nk I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nk_111;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([Lorg/luaj/vm2/LuaValue;I)[Lorg/luaj/vm2/LuaValue;
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
    ; 
    //  line no 1125 , L1198450099 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState np I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->np_112;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([Lorg/luaj/vm2/Prototype;I)[Lorg/luaj/vm2/Prototype;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3Lorg_luaj_vm2_Prototype_2I__3Lorg_luaj_vm2_Prototype_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->p_2 = rstack[sp + 1].obj;
    ; 
    //  line no 1126 , L1508720236 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState nlocvars S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nlocvars_114;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([Lorg/luaj/vm2/LocVars;I)[Lorg/luaj/vm2/LocVars;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_realloc___3Lorg_luaj_vm2_LocVars_2I__3Lorg_luaj_vm2_LocVars_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->locvars_4 = rstack[sp + 1].obj;
    ; 
    //  line no 1127 , L2094310615 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState nups S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nups_116;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState.realloc([Lorg/luaj/vm2/Upvaldesc;I)[Lorg/luaj/vm2/Upvaldesc;
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
    ; 
    //  line no 1128 , L830381116 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->bl_107;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L26059997;
    // iconst_1
    stack[sp++].i = 1;
    goto L832828638;
    L26059997:
    // iconst_0
    stack[sp++].i = 0;
    L832828638:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 1129 , L1753746465 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState prev Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->prev_105;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->fs_157 = rstack[sp + 1].obj;
    ; 
    //  line no 1132 , L768795248 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_close_1func___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_close_1func___V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_fieldsel__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2040, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1140 , L1866340787 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1140;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1141 , L1207953777 , bytecode index = 
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1142 , L2097435292 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyregup(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 54);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1143 , L351965871 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1144 , L186049026 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.checkname(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 36);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1145 , L865744496 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.indexed(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 64);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1146 , L1825903149 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_fieldsel__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_fieldsel__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_yindex__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2041, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1150 , L281049997 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1150;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1151 , L1913386579 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1152 , L906741317 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    //  line no 1153 , L1323235180 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 93
    stack[sp++].i = 93;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1154 , L1565647145 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_yindex__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_yindex__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 7
// stack: 6
// args: 1
void func_org_luaj_vm2_compiler_LexState_recfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024ConsControl* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2042, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1175 , L412410893 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1175;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1176 , L566760932 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1177 , L1933762653 , bytecode index = 
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
    //  line no 1178 , L707992390 , bytecode index = 
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1180 , L356005505 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 288
    stack[sp++].i = 288;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1950246647;
    ; 
    //  line no 1181 , L278536229 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl nh I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->nh_2;
    sp += 0;
    //  ldc 
    stack[sp++].i = 0x7ffffffd;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3569);
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
    //  line no 1182 , L574746715 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.checkname(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 36);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1981372076;
    L1950246647:
    //  line no 1185 , L1950246647 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.yindex(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 57);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1981372076:
    //  line no 1186 , L1981372076 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl nh I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->nh_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl nh I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->nh_2 = stack[sp + 1].i;
    ; 
    //  line no 1187 , L1905758022 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 61
    stack[sp++].i = 61;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1188 , L810353241 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 1189 , L488898339 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1190 , L557016605 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 10
    stack[sp++].i = 10;
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
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
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
    //  line no 1191 , L1821581506 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    ; 
    //  line no 1192 , L873769155 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_recfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_recfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_listfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024ConsControl* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2043, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1195 , L217389263 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1195;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1196 , L2031467683 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl na I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->na_3;
    sp += 0;
    //  ldc 
    stack[sp++].i = 0x7ffffffd;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3569);
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
    //  line no 1197 , L1758876146 , bytecode index = 
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl na I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->na_3 = stack[sp + 1].i;
    ; 
    //  line no 1198 , L987015126 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->tostore_4;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->tostore_4 = stack[sp + 1].i;
    ; 
    //  line no 1199 , L507765539 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_listfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_listfield__Lorg_luaj_vm2_compiler_LexState_00024ConsControl_2_V(runtime, ins);
}


// locals: 7
// stack: 5
// args: 1
void func_org_luaj_vm2_compiler_LexState_constructor__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2044, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1204 , L275002771 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1204;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1205 , L261216862 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1206 , L248146548 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
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
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1207 , L2046652309 , bytecode index = 
    // new org/luaj/vm2/compiler/LexState$ConsControl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 295);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/LexState$ConsControl.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024ConsControl__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1208 , L1216611732 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->tostore_4 = stack[sp + 1].i;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl nh I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->nh_2 = stack[sp + 1].i;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl na I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->na_3 = stack[sp + 1].i;
    ; 
    //  line no 1209 , L1237743088 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/LexState$ConsControl t Lorg/luaj/vm2/compiler/LexState$expdesc;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp + 0].obj)->t_1 = rstack[sp + 1].obj;
    ; 
    //  line no 1210 , L344080246 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 11
    stack[sp++].i = 11;
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
    //  line no 1211 , L110197684 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
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
    //  line no 1212 , L1859216983 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 1213 , L339933064 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 123
    stack[sp++].i = 123;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L289281017:
    //  line no 1215 , L289281017 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->v_0;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    if(stack[--sp].i  == 0) goto L478123697;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl tostore I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->tostore_4;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L2038020279;
    L478123697:
    // iconst_1
    stack[sp++].i = 1;
    goto L2047147687;
    L2038020279:
    // iconst_0
    stack[sp++].i = 0;
    L2047147687:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 1216 , L465869765 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 125
    stack[sp++].i = 125;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2070830098;
    ; 
    //  line no 1217 , L1332150216 , bytecode index = 
    goto L306889029;
    L2070830098:
    //  line no 1218 , L2070830098 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.closelistfield(Lorg/luaj/vm2/compiler/LexState$ConsControl;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024ConsControl*) = find_method(__ins->vm_table, 264, 16);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1219 , L770669178 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 91:
            goto L1544031987;
        case 288:
            goto L411876574;
        default:
            goto L619199769;
    }
    L411876574:
    //  line no 1221 , L411876574 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.lookahead()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 24);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1222 , L1323706655 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState lookahead Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->lookahead_156;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 61
    stack[sp++].i = 61;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L721671471;
    ; 
    //  line no 1223 , L937437482 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.listfield(Lorg/luaj/vm2/compiler/LexState$ConsControl;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024ConsControl*) = find_method(__ins->vm_table, 266, 59);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1257703748;
    L721671471:
    //  line no 1225 , L721671471 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.recfield(Lorg/luaj/vm2/compiler/LexState$ConsControl;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024ConsControl*) = find_method(__ins->vm_table, 266, 58);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1226 , L891715540 , bytecode index = 
    goto L1257703748;
    L1544031987:
    //  line no 1229 , L1544031987 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.recfield(Lorg/luaj/vm2/compiler/LexState$ConsControl;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024ConsControl*) = find_method(__ins->vm_table, 266, 58);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1230 , L3768050 , bytecode index = 
    goto L1257703748;
    L619199769:
    //  line no 1233 , L619199769 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.listfield(Lorg/luaj/vm2/compiler/LexState$ConsControl;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024ConsControl*) = find_method(__ins->vm_table, 266, 59);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1257703748:
    //  line no 1237 , L1257703748 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L289281017;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 59
    stack[sp++].i = 59;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L289281017;
    L306889029:
    //  line no 1238 , L306889029 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 125
    stack[sp++].i = 125;
    //  bipush 123
    stack[sp++].i = 123;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1239 , L916897446 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.lastlistfield(Lorg/luaj/vm2/compiler/LexState$ConsControl;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024ConsControl*) = find_method(__ins->vm_table, 264, 18);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1240 , L1156135967 , bytecode index = 
    // new org/luaj/vm2/compiler/InstructionPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 263);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[4].i;
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
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 1241 , L1110913929 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl na I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->na_3;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState.luaO_int2fb(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_luaO_1int2fb__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.SETARG_B(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
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
    //  line no 1242 , L162667475 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/LexState$ConsControl nh I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024ConsControl*)rstack[sp - 1].obj)->nh_2;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState.luaO_int2fb(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_compiler_LexState_luaO_1int2fb__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState.SETARG_C(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1C__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1243 , L174245837 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_constructor__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_constructor__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 2
s32 func_org_luaj_vm2_compiler_LexState_luaO_1int2fb__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2045, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 1251 , L2083969860 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1251;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L1707293586:
    //  line no 1252 , L1707293586 , bytecode index = 
    stack[sp++].i = local[0].i;
    //  bipush 16
    stack[sp++].i = 16;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L2030294088;
    ; 
    //  line no 1253 , L1309191417 , bytecode index = 
    stack[sp++].i = local[0].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    local[0].i = stack[--sp].i;
    ; 
    //  line no 1254 , L70165127 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1707293586;
    L2030294088:
    //  line no 1256 , L2030294088 , bytecode index = 
    stack[sp++].i = local[0].i;
    //  bipush 8
    stack[sp++].i = 8;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2026706491;
    stack[sp++].i = local[0].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2026706491:
    //  line no 1257 , L2026706491 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[0].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_compiler_LexState_luaO_1int2fb__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_luaO_1int2fb__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 4
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_parlist___V(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2046, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1265 , L351216770 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1265;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 1266 , L1705281026 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1267 , L1967667267 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1268 , L862062296 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/Prototype is_vararg I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->is_1vararg_10 = stack[sp + 1].i;
    ; 
    //  line no 1269 , L1589968642 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 41
    stack[sp++].i = 41;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L521270862;
    L724525007:
    //  line no 1271 , L724525007 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 280:
            goto L1897732690;
        case 288:
            goto L1630413241;
        default:
            goto L140040372;
    }
    L1630413241:
    //  line no 1273 , L1630413241 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvar(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 38);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1274 , L808377204 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    ; 
    //  line no 1275 , L2130520253 , bytecode index = 
    goto L1730900666;
    L1897732690:
    //  line no 1278 , L1897732690 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1279 , L1998103567 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/Prototype is_vararg I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->is_1vararg_10 = stack[sp + 1].i;
    ; 
    //  line no 1280 , L824915171 , bytecode index = 
    goto L1730900666;
    L140040372:
    //  line no 1282 , L140040372 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3574);
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
    // invokestatic org/luaj/vm2/compiler/LexState.LUA_QL(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_LUA_1QL__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3521);
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
    L1730900666:
    //  line no 1284 , L1730900666 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/Prototype is_vararg I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->is_1vararg_10;
    sp += 0;
    if(stack[--sp].i  != 0) goto L521270862;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L724525007;
    L521270862:
    //  line no 1286 , L521270862 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjustlocalvars(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 40);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1287 , L646204091 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    // putfield org/luaj/vm2/Prototype numparams I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->numparams_9 = stack[sp + 1].i;
    ; 
    //  line no 1288 , L445010547 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
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
    //  line no 1289 , L680306160 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_parlist___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_parlist___V(runtime, ins);
}


// locals: 6
// stack: 4
// args: 3
void func_org_luaj_vm2_compiler_LexState_body__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2ZI_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, s8 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2047, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1294 , L1153256202 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1294;
    // new org/luaj/vm2/compiler/FuncState
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 264);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 1295 , L1811975204 , bytecode index = 
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1296 , L560858993 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.addprototype()Lorg/luaj/vm2/Prototype;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 52);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->f_103 = rstack[sp + 1].obj;
    ; 
    //  line no 1297 , L554146322 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    stack[sp++].i = local[3].i;
    // putfield org/luaj/vm2/Prototype linedefined I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->linedefined_7 = stack[sp + 1].i;
    ; 
    //  line no 1298 , L265052195 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.open_func(Lorg/luaj/vm2/compiler/FuncState;Lorg/luaj/vm2/compiler/FuncState$BlockCnt;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState*,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*) = find_method(__ins->vm_table, 266, 54);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1299 , L1741007954 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 40
    stack[sp++].i = 40;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1300 , L910260820 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  == 0) goto L730575236;
    ; 
    //  line no 1301 , L1193939374 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2840);
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvarliteral(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1302 , L231182885 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjustlocalvars(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 40);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L730575236:
    //  line no 1304 , L730575236 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.parlist()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 61);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1305 , L820627987 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 41
    stack[sp++].i = 41;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1306 , L1176001051 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.statlist()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 96);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1307 , L1361609751 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    // putfield org/luaj/vm2/Prototype lastlinedefined I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->lastlinedefined_8 = stack[sp + 1].i;
    ; 
    //  line no 1308 , L1624203949 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 262
    stack[sp++].i = 262;
    //  sipush 265
    stack[sp++].i = 265;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1309 , L503879157 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.codeclosure(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 53);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1310 , L449105069 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.close_func()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 55);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1311 , L265939934 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_body__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2ZI_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_body__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2ZI_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 3
// stack: 2
// args: 1
s32 func_org_luaj_vm2_compiler_LexState_explist__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2048, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1315 , L1323676377 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1315;
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1316 , L1928900108 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L843005078:
    //  line no 1317 , L843005078 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1730595945;
    ; 
    //  line no 1318 , L79092014 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    //  line no 1319 , L864657274 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1320 , L2023349777 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L843005078;
    L1730595945:
    //  line no 1322 , L1730595945 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_explist__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_explist__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_I(runtime, ins);
}


// locals: 7
// stack: 7
// args: 2
void func_org_luaj_vm2_compiler_LexState_funcargs__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, s32 p1){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2049, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 1327 , L465621833 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1327;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1328 , L1682828548 , bytecode index = 
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
    //  line no 1330 , L1385352906 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 40:
            goto L245298614;
        case 123:
            goto L87035052;
        case 289:
            goto L1091597918;
        default:
            goto L332998175;
    }
    L245298614:
    //  line no 1332 , L245298614 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1333 , L463690173 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 41
    stack[sp++].i = 41;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1659452474;
    ; 
    //  line no 1334 , L1731795367 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    goto L634991000;
    L1659452474:
    //  line no 1336 , L1659452474 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.explist(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 63);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 1337 , L607578671 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
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
    L634991000:
    //  line no 1339 , L634991000 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 41
    stack[sp++].i = 41;
    //  bipush 40
    stack[sp++].i = 40;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1340 , L261429887 , bytecode index = 
    goto L550424075;
    L87035052:
    //  line no 1343 , L87035052 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.constructor(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 60);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1344 , L1282899579 , bytecode index = 
    goto L550424075;
    L1091597918:
    //  line no 1347 , L1091597918 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp - 1].obj)->ts_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.codestring(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 35);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1348 , L1594065480 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1349 , L2028088629 , bytecode index = 
    goto L550424075;
    L332998175:
    //  line no 1352 , L332998175 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3580);
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
    ; 
    //  line no 1353 , L780802740 , bytecode index = 
    method_exit(runtime);
    return;
    L550424075:
    //  line no 1356 , L550424075 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 6
    stack[sp++].i = 6;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1509506488;
    // iconst_1
    stack[sp++].i = 1;
    goto L447477005;
    L1509506488:
    // iconst_0
    stack[sp++].i = 0;
    L447477005:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 1357 , L1942612200 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1358 , L233309087 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.hasmultret(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 25);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L502066023;
    ; 
    //  line no 1359 , L1479177802 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[6].i = stack[--sp].i;
    ; 
    goto L690051320;
    L502066023:
    //  line no 1361 , L502066023 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1407986024;
    ; 
    //  line no 1362 , L1493142905 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
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
    L1407986024:
    //  line no 1363 , L1407986024 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    L690051320:
    //  line no 1365 , L690051320 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 12
    stack[sp++].i = 12;
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 29
    stack[sp++].i = 29;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_2
    stack[sp++].i = 2;
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
    //  line no 1366 , L2115597658 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
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
    //  line no 1367 , L1566311673 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    ; 
    //  line no 1369 , L1867108691 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_funcargs__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_funcargs__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_primaryexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2050, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1380 , L2122252822 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1380;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 40:
            goto L1658534033;
        case 288:
            goto L1640832113;
        default:
            goto L1127856876;
    }
    L1658534033:
    //  line no 1382 , L1658534033 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1383 , L1730465260 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1384 , L1766122814 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1385 , L1390430007 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 41
    stack[sp++].i = 41;
    //  bipush 40
    stack[sp++].i = 40;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1386 , L1539827598 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    //  line no 1387 , L441260727 , bytecode index = 
    method_exit(runtime);
    return;
    L1640832113:
    //  line no 1390 , L1640832113 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.singlevar(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 42);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1391 , L1416520149 , bytecode index = 
    method_exit(runtime);
    return;
    L1127856876:
    //  line no 1394 , L1127856876 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3582);
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
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3583);
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
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1670);
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
    ; 
    //  line no 1395 , L73878928 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_primaryexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_primaryexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_suffixedexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2051, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1404 , L311559967 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1404;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1405 , L903195729 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.primaryexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 65);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L190868662:
    //  line no 1407 , L190868662 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 40:
            goto L672777312;
        case 46:
            goto L808862230;
        case 58:
            goto L951819642;
        case 91:
            goto L512407823;
        case 123:
            goto L672777312;
        case 289:
            goto L672777312;
        default:
            goto L707892422;
    }
    L808862230:
    //  line no 1409 , L808862230 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.fieldsel(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 56);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1410 , L2027308154 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L190868662;
    L512407823:
    //  line no 1413 , L512407823 , bytecode index = 
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1414 , L2054332292 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.exp2anyregup(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 54);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1415 , L507944445 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.yindex(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 57);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1416 , L1431244283 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.indexed(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 64);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1417 , L527464124 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L190868662;
    L951819642:
    //  line no 1420 , L951819642 , bytecode index = 
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1421 , L1905280105 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1422 , L1536399059 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.checkname(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 36);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1423 , L1981708431 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.self(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 58);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1424 , L1783047526 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.funcargs(Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 266, 64);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1425 , L419923787 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L190868662;
    L672777312:
    //  line no 1430 , L672777312 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    //  line no 1431 , L1583722422 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.funcargs(Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 266, 64);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1432 , L1530560245 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L190868662;
    L707892422:
    //  line no 1435 , L707892422 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_suffixedexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_suffixedexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 3
// stack: 7
// args: 1
void func_org_luaj_vm2_compiler_LexState_simpleexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2052, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1446 , L765329253 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1446;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 123:
            goto L1446243714;
        case 263:
            goto L1987154353;
        case 265:
            goto L886386381;
        case 270:
            goto L1562452013;
        case 276:
            goto L347572726;
        case 280:
            goto L1857126088;
        case 287:
            goto L1930401429;
        case 289:
            goto L662433937;
        default:
            goto L1593245055;
    }
    L1930401429:
    //  line no 1448 , L1930401429 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    //  line no 1449 , L262878641 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$SemInfo r Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp - 1].obj)->r_0;
    sp += 0;
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
    //  line no 1450 , L1778994610 , bytecode index = 
    goto L1706939736;
    L662433937:
    //  line no 1453 , L662433937 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp - 1].obj)->ts_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.codestring(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 35);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1454 , L498748934 , bytecode index = 
    goto L1706939736;
    L1562452013:
    //  line no 1457 , L1562452013 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
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
    //  line no 1458 , L1273689789 , bytecode index = 
    goto L1706939736;
    L347572726:
    //  line no 1461 , L347572726 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_2
    stack[sp++].i = 2;
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
    //  line no 1462 , L1798194863 , bytecode index = 
    goto L1706939736;
    L1987154353:
    //  line no 1465 , L1987154353 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_3
    stack[sp++].i = 3;
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
    //  line no 1466 , L1613912455 , bytecode index = 
    goto L1706939736;
    L1857126088:
    //  line no 1469 , L1857126088 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1470 , L792195577 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype is_vararg I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->is_1vararg_10;
    sp += 0;
    if(stack[--sp].i  == 0) goto L863286716;
    // iconst_1
    stack[sp++].i = 1;
    goto L720803395;
    L863286716:
    // iconst_0
    stack[sp++].i = 0;
    L720803395:
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3586);
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
    // invokestatic org/luaj/vm2/compiler/LexState.LUA_QL(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_LUA_1QL__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3587);
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
    // invokevirtual org/luaj/vm2/compiler/LexState.check_condition(ZLjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8,struct java_lang_String*) = find_method(__ins->vm_table, 266, 32);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1472 , L1484397819 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 13
    stack[sp++].i = 13;
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 38
    stack[sp++].i = 38;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
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
    //  line no 1473 , L1213367860 , bytecode index = 
    goto L1706939736;
    L1446243714:
    //  line no 1476 , L1446243714 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.constructor(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 60);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1477 , L1578959831 , bytecode index = 
    method_exit(runtime);
    return;
    L886386381:
    //  line no 1480 , L886386381 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1481 , L1078448857 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.body(Lorg/luaj/vm2/compiler/LexState$expdesc;ZI)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s8,s32) = find_method(__ins->vm_table, 266, 62);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1482 , L1221759982 , bytecode index = 
    method_exit(runtime);
    return;
    L1593245055:
    //  line no 1485 , L1593245055 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.suffixedexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 66);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1486 , L342740966 , bytecode index = 
    method_exit(runtime);
    return;
    L1706939736:
    //  line no 1489 , L1706939736 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1490 , L576222471 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_simpleexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_simpleexp__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
s32 func_org_luaj_vm2_compiler_LexState_getunopr__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2053, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1494 , L6688524 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1494;
    stack[sp++].i = local[1].i;
    switch(stack[--sp].i){
        case 35:
            goto L455036946;
        case 45:
            goto L2061316668;
        case 271:
            goto L1249070084;
        default:
            goto L2047799833;
    }
    L1249070084:
    //  line no 1496 , L1249070084 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2061316668:
    //  line no 1498 , L2061316668 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L455036946:
    //  line no 1500 , L455036946 , bytecode index = 
    // iconst_2
    stack[sp++].i = 2;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2047799833:
    //  line no 1502 , L2047799833 , bytecode index = 
    // iconst_3
    stack[sp++].i = 3;
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

void bridge_org_luaj_vm2_compiler_LexState_getunopr__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_getunopr__I_I(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
s32 func_org_luaj_vm2_compiler_LexState_getbinopr__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2054, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1508 , L639542871 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1508;
    stack[sp++].i = local[1].i;
    switch(stack[--sp].i){
        case 37:
            goto L1703040426;
        case 42:
            goto L623446986;
        case 43:
            goto L1985363238;
        case 45:
            goto L1254649194;
        case 47:
            goto L1032867484;
        case 60:
            goto L1351247295;
        case 62:
            goto L401792389;
        case 94:
            goto L509104428;
        case 257:
            goto L553846997;
        case 272:
            goto L581383895;
        case 279:
            goto L599316979;
        case 281:
            goto L2134195609;
        case 282:
            goto L1179244298;
        case 283:
            goto L1564688538;
        case 284:
            goto L953253248;
        default:
            goto L901852282;
    }
    L1985363238:
    //  line no 1510 , L1985363238 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1254649194:
    //  line no 1512 , L1254649194 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L623446986:
    //  line no 1514 , L623446986 , bytecode index = 
    // iconst_2
    stack[sp++].i = 2;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1032867484:
    //  line no 1516 , L1032867484 , bytecode index = 
    // iconst_3
    stack[sp++].i = 3;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1703040426:
    //  line no 1518 , L1703040426 , bytecode index = 
    // iconst_4
    stack[sp++].i = 4;
    method_exit(runtime);
    return stack[sp - 1].i;
    L509104428:
    //  line no 1520 , L509104428 , bytecode index = 
    // iconst_5
    stack[sp++].i = 5;
    method_exit(runtime);
    return stack[sp - 1].i;
    L599316979:
    //  line no 1522 , L599316979 , bytecode index = 
    //  bipush 6
    stack[sp++].i = 6;
    method_exit(runtime);
    return stack[sp - 1].i;
    L953253248:
    //  line no 1524 , L953253248 , bytecode index = 
    //  bipush 7
    stack[sp++].i = 7;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2134195609:
    //  line no 1526 , L2134195609 , bytecode index = 
    //  bipush 8
    stack[sp++].i = 8;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1351247295:
    //  line no 1528 , L1351247295 , bytecode index = 
    //  bipush 9
    stack[sp++].i = 9;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1564688538:
    //  line no 1530 , L1564688538 , bytecode index = 
    //  bipush 10
    stack[sp++].i = 10;
    method_exit(runtime);
    return stack[sp - 1].i;
    L401792389:
    //  line no 1532 , L401792389 , bytecode index = 
    //  bipush 11
    stack[sp++].i = 11;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1179244298:
    //  line no 1534 , L1179244298 , bytecode index = 
    //  bipush 12
    stack[sp++].i = 12;
    method_exit(runtime);
    return stack[sp - 1].i;
    L553846997:
    //  line no 1536 , L553846997 , bytecode index = 
    //  bipush 13
    stack[sp++].i = 13;
    method_exit(runtime);
    return stack[sp - 1].i;
    L581383895:
    //  line no 1538 , L581383895 , bytecode index = 
    //  bipush 14
    stack[sp++].i = 14;
    method_exit(runtime);
    return stack[sp - 1].i;
    L901852282:
    //  line no 1540 , L901852282 , bytecode index = 
    //  bipush 15
    stack[sp++].i = 15;
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

void bridge_org_luaj_vm2_compiler_LexState_getbinopr__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_getbinopr__I_I(runtime, ins);
}


// locals: 8
// stack: 5
// args: 2
s32 func_org_luaj_vm2_compiler_LexState_subexpr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0, s32 p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2055, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 1573 , L1713847712 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1573;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.enterlevel()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 44);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1574 , L556263022 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.getunopr(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 68);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1575 , L304718519 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_3
    stack[sp++].i = 3;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L240959474;
    ; 
    //  line no 1576 , L1372150180 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1577 , L1338229093 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1578 , L278986288 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 8
    stack[sp++].i = 8;
    // invokevirtual org/luaj/vm2/compiler/LexState.subexpr(Lorg/luaj/vm2/compiler/LexState$expdesc;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 266, 70);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 1579 , L2070438137 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.prefix(ILorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 68);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1580 , L1626800713 , bytecode index = 
    goto L837693403;
    L240959474:
    //  line no 1581 , L240959474 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.simpleexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 67);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L837693403:
    //  line no 1583 , L837693403 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.getbinopr(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 69);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    L640161448:
    //  line no 1584 , L640161448 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 15
    stack[sp++].i = 15;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L520082748;
    // getstatic org/luaj/vm2/compiler/LexState priority [Lorg/luaj/vm2/compiler/LexState$Priority;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.priority_203;
    sp += 1;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L640161448 bc index = 
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
    // getfield org/luaj/vm2/compiler/LexState$Priority left B
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Priority*)rstack[sp - 1].obj)->left_0;
    sp += 0;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L520082748;
    ; 
    //  line no 1585 , L1187146208 , bytecode index = 
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1586 , L110233108 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1587 , L1617550648 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1588 , L6267452 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.infix(ILorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 69);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1590 , L1434932926 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getstatic org/luaj/vm2/compiler/LexState priority [Lorg/luaj/vm2/compiler/LexState$Priority;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.priority_203;
    sp += 1;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1434932926 bc index = 
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
    // getfield org/luaj/vm2/compiler/LexState$Priority right B
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Priority*)rstack[sp - 1].obj)->right_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.subexpr(Lorg/luaj/vm2/compiler/LexState$expdesc;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 266, 70);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 1591 , L1127434428 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.posfix(ILorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 264, 70);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1592 , L1830669823 , bytecode index = 
    stack[sp++].i = local[7].i;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1593 , L271502370 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L640161448;
    L520082748:
    //  line no 1594 , L520082748 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.leavelevel()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 45);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1595 , L2146654783 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_subexpr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_subexpr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2I_I(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_expr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2056, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1599 , L623757508 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1599;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.subexpr(Lorg/luaj/vm2/compiler/LexState$expdesc;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s32) = find_method(__ins->vm_table, 266, 70);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 1600 , L1124360095 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_expr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_expr__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_block_1follow__Z_Z(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2057, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1614 , L1677976140 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1614;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 260:
            goto L1320826684;
        case 261:
            goto L1320826684;
        case 262:
            goto L1320826684;
        case 277:
            goto L1987707214;
        case 286:
            goto L1320826684;
        default:
            goto L790851040;
    }
    L1320826684:
    //  line no 1616 , L1320826684 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1987707214:
    //  line no 1618 , L1987707214 , bytecode index = 
    stack[sp++].i = local[1].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L790851040:
    //  line no 1619 , L790851040 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_block_1follow__Z_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_block_1follow__Z_Z(runtime, ins);
}


// locals: 3
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_block___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2058, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1626 , L963165280 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1626;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 1627 , L653553574 , bytecode index = 
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1628 , L2259527 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1629 , L156855528 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.statlist()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 96);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1630 , L1974356511 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1631 , L1881309779 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_block___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_block___V(runtime, ins);
}


// locals: 7
// stack: 5
// args: 2
void func_org_luaj_vm2_compiler_LexState_check_1conflict__Lorg_luaj_vm2_compiler_LexState_00024LHS_1assign_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024LHS_1assign* p0, struct org_luaj_vm2_compiler_LexState_00024expdesc* p1){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2059, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 1652 , L566042862 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1652;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1653 , L650410100 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1654 , L1108367077 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L675889995:
    //  line no 1655 , L675889995 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1622912252;
    ; 
    //  line no 1656 , L1706655559 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L626961003;
    ; 
    //  line no 1658 , L1198515856 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_vt S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1vt_2;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2047770317;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_t S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1t_1;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2047770317;
    ; 
    //  line no 1659 , L1424188812 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1660 , L71209097 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_vt S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1vt_2 = stack[sp + 1].i;
    ; 
    //  line no 1661 , L1012776440 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_t S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1t_1 = stack[sp + 1].i;
    L2047770317:
    //  line no 1664 , L2047770317 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L626961003;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_idx S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1idx_0;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L626961003;
    ; 
    //  line no 1665 , L892093608 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1666 , L2058127492 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_idx S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1idx_0 = stack[sp + 1].i;
    L626961003:
    //  line no 1655 , L626961003 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign prev Lorg/luaj/vm2/compiler/LexState$LHS_assign;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->prev_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L675889995;
    L1622912252:
    //  line no 1670 , L1622912252 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  == 0) goto L174515584;
    ; 
    //  line no 1672 , L1535454025 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L215690645;
    // iconst_0
    stack[sp++].i = 0;
    goto L304966690;
    L215690645:
    // iconst_5
    stack[sp++].i = 5;
    L304966690:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1673 , L794476802 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 1674 , L1576499395 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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
    L174515584:
    //  line no 1676 , L174515584 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_check_1conflict__Lorg_luaj_vm2_compiler_LexState_00024LHS_1assign_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_check_1conflict__Lorg_luaj_vm2_compiler_LexState_00024LHS_1assign_2Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 4
// args: 2
void func_org_luaj_vm2_compiler_LexState_assignment__Lorg_luaj_vm2_compiler_LexState_00024LHS_1assign_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024LHS_1assign* p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2060, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 1680 , L1906335777 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1680;
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1681 , L135003590 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 7
    stack[sp++].i = 7;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1859956068;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1859956068;
    // iconst_1
    stack[sp++].i = 1;
    goto L1281361915;
    L1859956068:
    // iconst_0
    stack[sp++].i = 0;
    L1281361915:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3598);
    // invokevirtual org/luaj/vm2/compiler/LexState.check_condition(ZLjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8,struct java_lang_String*) = find_method(__ins->vm_table, 266, 32);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1683 , L1043584830 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1770125555;
    ; 
    //  line no 1684 , L1648217898 , bytecode index = 
    // new org/luaj/vm2/compiler/LexState$LHS_assign
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 198);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/LexState$LHS_assign.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024LHS_1assign__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 1685 , L783172425 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/LexState$LHS_assign prev Lorg/luaj/vm2/compiler/LexState$LHS_assign;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp + 0].obj)->prev_0 = rstack[sp + 1].obj;
    ; 
    //  line no 1686 , L243596165 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.suffixedexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 66);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1687 , L1755634886 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1684802151;
    ; 
    //  line no 1688 , L939829672 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_conflict(Lorg/luaj/vm2/compiler/LexState$LHS_assign;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 74);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1684802151:
    //  line no 1689 , L1684802151 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/compiler/LexState.assignment(Lorg/luaj/vm2/compiler/LexState$LHS_assign;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*,s32) = find_method(__ins->vm_table, 266, 75);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1690 , L292890110 , bytecode index = 
    goto L1601800698;
    L1770125555:
    //  line no 1693 , L1770125555 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 61
    stack[sp++].i = 61;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1694 , L1539477312 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.explist(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 63);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1695 , L1184248953 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2121573248;
    ; 
    //  line no 1696 , L1842463725 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjust_assign(IILorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 43);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1697 , L581364120 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1601800698;
    ; 
    //  line no 1698 , L1441014857 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    goto L1601800698;
    L2121573248:
    //  line no 1701 , L2121573248 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
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
    //  line no 1702 , L240641494 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.storevar(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 57);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1703 , L1845137754 , bytecode index = 
    method_exit(runtime);
    return;
    L1601800698:
    //  line no 1706 , L1601800698 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 6
    stack[sp++].i = 6;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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
    //  line no 1707 , L2013613908 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.storevar(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 57);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1708 , L213383793 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_assignment__Lorg_luaj_vm2_compiler_LexState_00024LHS_1assign_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_assignment__Lorg_luaj_vm2_compiler_LexState_00024LHS_1assign_2I_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 2
// args: 0
s32 func_org_luaj_vm2_compiler_LexState_cond___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2061, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1713 , L79094208 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1713;
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
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 1715 , L1444635117 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1717 , L1699511597 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L650859015;
    ; 
    //  line no 1718 , L356519935 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_3
    stack[sp++].i = 3;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    L650859015:
    //  line no 1719 , L650859015 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
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
    //  line no 1720 , L416878771 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
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

void bridge_org_luaj_vm2_compiler_LexState_cond___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_cond___I(runtime, ins);
}


// locals: 5
// stack: 6
// args: 1
void func_org_luaj_vm2_compiler_LexState_gotostat__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2062, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1724 , L1650299186 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1724;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1727 , L2004305265 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 266
    stack[sp++].i = 266;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L662409124;
    ; 
    //  line no 1728 , L1825984232 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    goto L790432700;
    L662409124:
    //  line no 1730 , L662409124 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1731 , L1415624532 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3555);
    // invokestatic org/luaj/vm2/LuaString.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    L790432700:
    //  line no 1733 , L790432700 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata gt [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->gt_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/LexState.grow([Lorg/luaj/vm2/compiler/LexState$Labeldesc;I)[Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_grow___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2I__3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata gt [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->gt_2 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
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
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1gt_3 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.newlabelentry([Lorg/luaj/vm2/compiler/LexState$Labeldesc;ILorg/luaj/vm2/LuaString;II)I
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,struct org_luaj_vm2_LuaString*,s32,s32) = find_method(__ins->vm_table, 266, 48);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1734 , L178192958 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
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
    --sp; //pop
    ; 
    //  line no 1735 , L203924386 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_gotostat__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_gotostat__I_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_compiler_LexState_skipnoopstat___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2063, &rstack[0], &rlocal[0], &sp);
    L439078230:
    //  line no 1740 , L439078230 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1740;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 59
    stack[sp++].i = 59;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1758962399;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 285
    stack[sp++].i = 285;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1507604180;
    L1758962399:
    //  line no 1741 , L1758962399 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.statement()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 95);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L439078230;
    L1507604180:
    //  line no 1742 , L1507604180 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_skipnoopstat___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_skipnoopstat___V(runtime, ins);
}


// locals: 4
// stack: 6
// args: 2
void func_org_luaj_vm2_compiler_LexState_labelstat__Lorg_luaj_vm2_LuaString_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2064, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 1748 , L1450830187 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1748;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->label_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.checkrepeated([Lorg/luaj/vm2/compiler/LexState$Labeldesc;ILorg/luaj/vm2/LuaString;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 264, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1749 , L65894433 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 285
    stack[sp++].i = 285;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1751 , L1002406942 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->label_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/compiler/LexState.grow([Lorg/luaj/vm2/compiler/LexState$Labeldesc;I)[Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_Constants_grow___3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2I__3Lorg_luaj_vm2_compiler_LexState_00024Labeldesc_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->label_4 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
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
    // putfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp + 0].obj)->n_1label_5 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    // invokevirtual org/luaj/vm2/compiler/LexState.newlabelentry([Lorg/luaj/vm2/compiler/LexState$Labeldesc;ILorg/luaj/vm2/LuaString;II)I
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,struct org_luaj_vm2_LuaString*,s32,s32) = find_method(__ins->vm_table, 266, 48);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1752 , L1326413897 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.skipnoopstat()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 78);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1753 , L1453650546 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.block_follow(Z)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 266, 72);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1054913783;
    ; 
    //  line no 1755 , L2042120257 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->label_4;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L2042120257 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState bl Lorg/luaj/vm2/compiler/FuncState$BlockCnt;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->bl_107;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->nactvar_3;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$Labeldesc nactvar S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Labeldesc*)rstack[sp + 0].obj)->nactvar_3 = stack[sp + 1].i;
    L1054913783:
    //  line no 1757 , L1054913783 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata label [Lorg/luaj/vm2/compiler/LexState$Labeldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->label_4;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1054913783 bc index = 
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
    // invokevirtual org/luaj/vm2/compiler/LexState.findgotos(Lorg/luaj/vm2/compiler/LexState$Labeldesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024Labeldesc*) = find_method(__ins->vm_table, 266, 49);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1758 , L1296153103 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_labelstat__Lorg_luaj_vm2_LuaString_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_labelstat__Lorg_luaj_vm2_LuaString_2I_V(runtime, ins, para[0].i);
}


// locals: 6
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_whilestat__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2065, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1763 , L125549276 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1763;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1766 , L1010434098 , bytecode index = 
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1767 , L2095793272 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1768 , L2145040140 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 1769 , L632115057 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.cond()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 76);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1770 , L1241182310 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1771 , L1872012709 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 259
    stack[sp++].i = 259;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1772 , L1163664780 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.block()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 73);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1773 , L172299409 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchlist(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 32);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1774 , L337816703 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 262
    stack[sp++].i = 262;
    //  sipush 278
    stack[sp++].i = 278;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1775 , L1582406355 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1776 , L2076462312 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
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
    //  line no 1777 , L1493642909 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_whilestat__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_whilestat__I_V(runtime, ins);
}


// locals: 7
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_repeatstat__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2066, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1782 , L177389135 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1782;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1783 , L1407713529 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1784 , L863748063 , bytecode index = 
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1785 , L1389984438 , bytecode index = 
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 1786 , L1302779492 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1787 , L1583020257 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1788 , L816918962 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1789 , L690287064 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.statlist()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 96);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1790 , L1380583278 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 277
    stack[sp++].i = 277;
    //  sipush 273
    stack[sp++].i = 273;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1791 , L1532915766 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.cond()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 76);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1792 , L1658578510 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // getfield org/luaj/vm2/compiler/FuncState$BlockCnt upval Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*)rstack[sp - 1].obj)->upval_4;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1828676092;
    ; 
    //  line no 1793 , L1846307450 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[6].obj;
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
    L1828676092:
    //  line no 1795 , L1828676092 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1796 , L1182492749 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchlist(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 32);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1797 , L2075074394 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1798 , L1825071442 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_repeatstat__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_repeatstat__I_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
s32 func_org_luaj_vm2_compiler_LexState_exp1___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2067, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1802 , L2092870757 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1802;
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
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 1804 , L2145921383 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1805 , L1350894905 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1806 , L1709317347 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    //  line no 1807 , L1815501246 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_exp1___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_exp1___I(runtime, ins);
}


// locals: 9
// stack: 5
// args: 4
void func_org_luaj_vm2_compiler_LexState_forbody__IIIZ_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2, s8 p3){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2068, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 1813 , L721395199 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1813;
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 1814 , L1594857799 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 1816 , L27971761 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjustlocalvars(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 40);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1817 , L205446988 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 259
    stack[sp++].i = 259;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1818 , L1526250321 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  == 0) goto L2040452328;
    rstack[sp++].obj = rlocal[6].obj;
    //  bipush 33
    stack[sp++].i = 33;
    stack[sp++].i = local[1].i;
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
    goto L778484786;
    L2040452328:
    rstack[sp++].obj = rlocal[6].obj;
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
    L778484786:
    local[7].i = stack[--sp].i;
    ; 
    //  line no 1819 , L1423491597 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1820 , L1264966132 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjustlocalvars(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 40);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1821 , L1146318308 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[3].i;
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
    //  line no 1822 , L1607458416 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.block()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 73);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1823 , L1301653294 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1824 , L685407505 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[7].i;
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
    //  line no 1825 , L2008619427 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  == 0) goto L1445225850;
    ; 
    //  line no 1826 , L912790599 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp++].i = local[1].i;
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
    local[8].i = stack[--sp].i;
    ; 
    goto L1919592808;
    L1445225850:
    //  line no 1828 , L1445225850 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    //  bipush 34
    stack[sp++].i = 34;
    stack[sp++].i = local[1].i;
    // iconst_0
    stack[sp++].i = 0;
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
    --sp; //pop
    ; 
    //  line no 1829 , L118492650 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[2].i;
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
    //  line no 1830 , L1898773347 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    //  bipush 35
    stack[sp++].i = 35;
    stack[sp++].i = local[1].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    local[8].i = stack[--sp].i;
    L1919592808:
    //  line no 1832 , L1919592808 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[7].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/compiler/FuncState.patchlist(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 32);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1833 , L853887645 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[2].i;
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
    //  line no 1834 , L358847552 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_forbody__IIIZ_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_forbody__IIIZ_V(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 5
// stack: 5
// args: 2
void func_org_luaj_vm2_compiler_LexState_fornum__Lorg_luaj_vm2_LuaString_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2069, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 1839 , L83534488 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1839;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1840 , L483635512 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1841 , L354154358 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3610);
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvarliteral(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1842 , L1517105378 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3611);
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvarliteral(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1843 , L189970261 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3612);
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvarliteral(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1844 , L168398198 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvar(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 38);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1845 , L1088649990 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 61
    stack[sp++].i = 61;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1846 , L1933224408 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.exp1()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 82);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 1847 , L1842102517 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1848 , L728236551 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.exp1()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 82);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 1849 , L1887991591 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1457157255;
    ; 
    //  line no 1850 , L1503546689 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.exp1()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 82);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L848102479;
    L1457157255:
    //  line no 1852 , L1457157255 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_1
    stack[sp++].i = 1;
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
    //  line no 1853 , L17792118 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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
    L848102479:
    //  line no 1855 , L848102479 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/LexState.forbody(IIIZ)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32,s8) = find_method(__ins->vm_table, 266, 83);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1856 , L74735260 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_fornum__Lorg_luaj_vm2_LuaString_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_fornum__Lorg_luaj_vm2_LuaString_2I_V(runtime, ins, para[0].i);
}


// locals: 7
// stack: 5
// args: 1
void func_org_luaj_vm2_compiler_LexState_forlist__Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2070, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1861 , L1977493952 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1861;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1862 , L264767425 , bytecode index = 
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1863 , L695085082 , bytecode index = 
    // iconst_4
    stack[sp++].i = 4;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1865 , L1506648430 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1867 , L1574503358 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3614);
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvarliteral(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1868 , L316731851 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3615);
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvarliteral(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1869 , L1242969461 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3616);
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvarliteral(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 266, 39);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1871 , L2120493960 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvar(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 38);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1798636297:
    //  line no 1872 , L1798636297 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2127481101;
    ; 
    //  line no 1873 , L92862012 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvar(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 38);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1874 , L1517266286 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1798636297;
    L2127481101:
    //  line no 1876 , L2127481101 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 268
    stack[sp++].i = 268;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1877 , L427939937 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1878 , L294649085 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.explist(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 63);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjust_assign(IILorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 43);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1879 , L1408549350 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_3
    stack[sp++].i = 3;
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
    //  line no 1880 , L1947683363 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.forbody(IIIZ)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32,s8) = find_method(__ins->vm_table, 266, 83);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1881 , L1665324560 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_forlist__Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_forlist__Lorg_luaj_vm2_LuaString_2_V(runtime, ins);
}


// locals: 5
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_forstat__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2071, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1886 , L2018164030 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1886;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1888 , L918730310 , bytecode index = 
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 1889 , L1128600792 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1890 , L1797112335 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1891 , L1175662879 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1892 , L1698746141 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 44:
            goto L197149397;
        case 61:
            goto L1417941371;
        case 268:
            goto L197149397;
        default:
            goto L248050873;
    }
    L1417941371:
    //  line no 1894 , L1417941371 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.fornum(Lorg/luaj/vm2/LuaString;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*,s32) = find_method(__ins->vm_table, 266, 84);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1895 , L937366737 , bytecode index = 
    goto L2130400175;
    L197149397:
    //  line no 1898 , L197149397 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.forlist(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 85);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1899 , L1998876751 , bytecode index = 
    goto L2130400175;
    L248050873:
    //  line no 1901 , L248050873 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1509);
    // invokestatic org/luaj/vm2/compiler/LexState.LUA_QL(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_LUA_1QL__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3618);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2549);
    // invokestatic org/luaj/vm2/compiler/LexState.LUA_QL(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_LUA_1QL__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3521);
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
    L2130400175:
    //  line no 1903 , L2130400175 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 262
    stack[sp++].i = 262;
    //  sipush 264
    stack[sp++].i = 264;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1904 , L64989209 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1905 , L1290358063 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_forstat__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_forstat__I_V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_test_1then_1block__Lorg_luaj_vm2_compiler_IntPtr_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_IntPtr* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2072, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1910 , L1020897892 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1910;
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
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1911 , L1119371910 , bytecode index = 
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 1913 , L1144979403 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1914 , L1961667779 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.expr(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 71);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1915 , L85435056 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 275
    stack[sp++].i = 275;
    // invokevirtual org/luaj/vm2/compiler/LexState.checknext(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 31);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1916 , L87784678 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 266
    stack[sp++].i = 266;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L910691117;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 258
    stack[sp++].i = 258;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L668152723;
    L910691117:
    //  line no 1917 , L910691117 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    //  line no 1918 , L526981115 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1919 , L1105958076 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.gotostat(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 77);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1920 , L931987151 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.skipnoopstat()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 78);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1921 , L159190022 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.block_follow(Z)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 266, 72);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1585189917;
    ; 
    //  line no 1922 , L1135555866 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1923 , L319144230 , bytecode index = 
    method_exit(runtime);
    return;
    L1585189917:
    //  line no 1926 , L1585189917 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    local[4].i = stack[--sp].i;
    ; 
    goto L1276894402;
    L668152723:
    //  line no 1928 , L668152723 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    //  line no 1929 , L1982216126 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.enterblock(Lorg/luaj/vm2/compiler/FuncState$BlockCnt;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*,s8) = find_method(__ins->vm_table, 264, 14);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1930 , L1268237485 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    local[4].i = stack[--sp].i;
    L1276894402:
    //  line no 1932 , L1276894402 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.statlist()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 96);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1933 , L1983948209 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/FuncState.leaveblock()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 264, 15);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1934 , L1680841335 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 260
    stack[sp++].i = 260;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L603183755;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 261
    stack[sp++].i = 261;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1446301940;
    L603183755:
    //  line no 1935 , L603183755 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    L1446301940:
    //  line no 1936 , L1446301940 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    stack[sp++].i = local[4].i;
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
    //  line no 1937 , L623545006 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_test_1then_1block__Lorg_luaj_vm2_compiler_IntPtr_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_test_1then_1block__Lorg_luaj_vm2_compiler_IntPtr_2_V(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_ifstat__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2073, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1941 , L5563134 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1941;
    // new org/luaj/vm2/compiler/IntPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 132);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_-1
    stack[sp++].i = -1;
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
    //  line no 1942 , L1888952688 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.test_then_block(Lorg/luaj/vm2/compiler/IntPtr;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*) = find_method(__ins->vm_table, 266, 87);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L18459190:
    //  line no 1943 , L18459190 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 261
    stack[sp++].i = 261;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1310344955;
    ; 
    //  line no 1944 , L1778257620 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.test_then_block(Lorg/luaj/vm2/compiler/IntPtr;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_IntPtr*) = find_method(__ins->vm_table, 266, 87);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L18459190;
    L1310344955:
    //  line no 1945 , L1310344955 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 260
    stack[sp++].i = 260;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L548093498;
    ; 
    //  line no 1946 , L1823438851 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.block()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 73);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L548093498:
    //  line no 1947 , L548093498 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 262
    stack[sp++].i = 262;
    //  sipush 267
    stack[sp++].i = 267;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1948 , L1889457907 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 1949 , L1771040410 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_ifstat__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_ifstat__I_V(runtime, ins);
}


// locals: 3
// stack: 4
// args: 0
void func_org_luaj_vm2_compiler_LexState_localfunc___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2074, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1952 , L131353113 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1952;
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
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 1953 , L33238366 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 1954 , L387377349 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvar(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 38);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1955 , L1702089463 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjustlocalvars(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 40);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1956 , L1079167170 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.body(Lorg/luaj/vm2/compiler/LexState$expdesc;ZI)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s8,s32) = find_method(__ins->vm_table, 266, 62);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1958 , L404458571 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/FuncState pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->pc_108;
    sp += 0;
    // putfield org/luaj/vm2/LocVars startpc I
    sp -= 2;
    ((struct org_luaj_vm2_LocVars*)rstack[sp + 0].obj)->startpc_1 = stack[sp + 1].i;
    ; 
    //  line no 1959 , L954928973 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_localfunc___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_localfunc___V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 0
void func_org_luaj_vm2_compiler_LexState_localstat___V(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2075, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1964 , L364266169 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1964;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 1966 , L1368128912 , bytecode index = 
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
    rlocal[3].obj = rstack[--sp].obj;
    L830083467:
    //  line no 1968 , L830083467 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.new_localvar(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 38);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1969 , L1457499015 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    ; 
    //  line no 1970 , L1901824111 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 44
    stack[sp++].i = 44;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L830083467;
    ; 
    //  line no 1971 , L2142411945 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 61
    stack[sp++].i = 61;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L505756829;
    ; 
    //  line no 1972 , L890060621 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.explist(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 63);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L1938047257;
    L505756829:
    //  line no 1974 , L505756829 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 1975 , L1156729376 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1938047257:
    //  line no 1977 , L1938047257 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjust_assign(IILorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 43);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1978 , L408543908 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.adjustlocalvars(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 40);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 1979 , L1177852821 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_localstat___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_localstat___V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_org_luaj_vm2_compiler_LexState_funcname__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2076, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1984 , L1092382020 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1984;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1985 , L378006273 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.singlevar(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 42);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1955406455:
    //  line no 1986 , L1955406455 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 46
    stack[sp++].i = 46;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L797539755;
    ; 
    //  line no 1987 , L224219987 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.fieldsel(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 56);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1955406455;
    L797539755:
    //  line no 1988 , L797539755 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 58
    stack[sp++].i = 58;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L606826010;
    ; 
    //  line no 1989 , L967343730 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1990 , L1562912969 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.fieldsel(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 56);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L606826010:
    //  line no 1992 , L606826010 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_funcname__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_funcname__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_Z(runtime, ins);
}


// locals: 5
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_LexState_funcstat__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2077, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 1999 , L1168956689 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1999;
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 2000 , L1057841208 , bytecode index = 
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
    //  line no 2001 , L595556720 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2002 , L1492358500 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.funcname(Lorg/luaj/vm2/compiler/LexState$expdesc;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 91);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 2003 , L2073333566 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.body(Lorg/luaj/vm2/compiler/LexState$expdesc;ZI)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,s8,s32) = find_method(__ins->vm_table, 266, 62);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2004 , L793521364 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/FuncState.storevar(Lorg/luaj/vm2/compiler/LexState$expdesc;Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 264, 57);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2005 , L2007004340 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    stack[sp++].i = local[1].i;
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
    //  line no 2006 , L859604881 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_funcstat__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_funcstat__I_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_exprstat___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2078, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 2011 , L585803886 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2011;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 2012 , L1444642131 , bytecode index = 
    // new org/luaj/vm2/compiler/LexState$LHS_assign
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 198);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/LexState$LHS_assign.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024LHS_1assign__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 2013 , L30173198 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.suffixedexp(Lorg/luaj/vm2/compiler/LexState$expdesc;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 66);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2014 , L499339307 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 61
    stack[sp++].i = 61;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1780298277;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 44
    stack[sp++].i = 44;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1742814160;
    L1780298277:
    //  line no 2015 , L1780298277 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/compiler/LexState$LHS_assign prev Lorg/luaj/vm2/compiler/LexState$LHS_assign;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp + 0].obj)->prev_0 = rstack[sp + 1].obj;
    ; 
    //  line no 2016 , L84915002 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/LexState.assignment(Lorg/luaj/vm2/compiler/LexState$LHS_assign;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*,s32) = find_method(__ins->vm_table, 266, 75);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L46852536;
    L1742814160:
    //  line no 2019 , L1742814160 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L21331934;
    // iconst_1
    stack[sp++].i = 1;
    goto L1872034717;
    L21331934:
    // iconst_0
    stack[sp++].i = 0;
    L1872034717:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3598);
    // invokevirtual org/luaj/vm2/compiler/LexState.check_condition(ZLjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8,struct java_lang_String*) = find_method(__ins->vm_table, 266, 32);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2020 , L402264886 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$LHS_assign v Lorg/luaj/vm2/compiler/LexState$expdesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024LHS_1assign*)rstack[sp - 1].obj)->v_1;
    sp += 0;
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
    // iconst_1
    stack[sp++].i = 1;
    // invokestatic org/luaj/vm2/compiler/LexState.SETARG_C(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SETARG_1C__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L46852536:
    //  line no 2022 , L46852536 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_exprstat___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_exprstat___V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_retstat___V(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2079, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 2026 , L1756988236 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2026;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 2027 , L549049813 , bytecode index = 
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
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 2029 , L1729958231 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/LexState.block_follow(Z)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 266, 72);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1623761043;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  bipush 59
    stack[sp++].i = 59;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1154481189;
    L1623761043:
    //  line no 2030 , L1623761043 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[4].i = stack[--sp].i;
    ; 
    local[3].i = stack[--sp].i;
    ; 
    goto L13063602;
    L1154481189:
    //  line no 2032 , L1154481189 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.explist(Lorg/luaj/vm2/compiler/LexState$expdesc;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LexState_00024expdesc*) = find_method(__ins->vm_table, 266, 63);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 2033 , L1003663195 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/LexState.hasmultret(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 25);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L621432843;
    ; 
    //  line no 2034 , L1977189075 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    //  line no 2035 , L1334391583 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1636824514;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1636824514;
    ; 
    //  line no 2036 , L376601584 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    //  bipush 30
    stack[sp++].i = 30;
    // invokestatic org/luaj/vm2/compiler/LexState.SET_OPCODE(Lorg/luaj/vm2/compiler/InstructionPtr;I)V
    {
        sp -= 3;
        func_org_luaj_vm2_compiler_Constants_SET_1OPCODE__Lorg_luaj_vm2_compiler_InstructionPtr_2I_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2037 , L797224183 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    // invokestatic org/luaj/vm2/Lua.GETARG_A(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1A__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L689140691;
    // iconst_1
    stack[sp++].i = 1;
    goto L925672150;
    L689140691:
    // iconst_0
    stack[sp++].i = 0;
    L925672150:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1636824514:
    //  line no 2039 , L1636824514 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 2040 , L839180856 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[4].i = stack[--sp].i;
    goto L13063602;
    L621432843:
    //  line no 2042 , L621432843 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L955061147;
    ; 
    //  line no 2043 , L173175486 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    goto L13063602;
    L955061147:
    //  line no 2045 , L955061147 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    //  line no 2046 , L1304065853 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 2047 , L496751834 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L80052821;
    // iconst_1
    stack[sp++].i = 1;
    goto L246168102;
    L80052821:
    // iconst_0
    stack[sp++].i = 0;
    L246168102:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L13063602:
    //  line no 2051 , L13063602 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/FuncState.ret(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 264, 21);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2052 , L280078161 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 59
    stack[sp++].i = 59;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 2053 , L1406114969 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_retstat___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_retstat___V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 0
void func_org_luaj_vm2_compiler_LexState_statement___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2080, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 2056 , L337777621 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2056;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState linenumber I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->linenumber_153;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 2057 , L154449199 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.enterlevel()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 44);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2058 , L640736196 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    switch(stack[--sp].i){
        case 59:
            goto L1511799988;
        case 258:
            goto L1991075605;
        case 259:
            goto L1449360639;
        case 264:
            goto L691540605;
        case 265:
            goto L310014578;
        case 266:
            goto L1991075605;
        case 267:
            goto L267533031;
        case 269:
            goto L1111173986;
        case 273:
            goto L729375394;
        case 274:
            goto L1792109661;
        case 278:
            goto L1961510626;
        case 285:
            goto L1871778598;
        default:
            goto L1587818510;
    }
    L1511799988:
    //  line no 2060 , L1511799988 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2061 , L253558788 , bytecode index = 
    goto L1850680894;
    L267533031:
    //  line no 2064 , L267533031 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.ifstat(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 88);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2065 , L1219797059 , bytecode index = 
    goto L1850680894;
    L1961510626:
    //  line no 2068 , L1961510626 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.whilestat(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 80);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2069 , L794526288 , bytecode index = 
    goto L1850680894;
    L1449360639:
    //  line no 2072 , L1449360639 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2073 , L1210165919 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.block()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 73);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2074 , L1598561139 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 262
    stack[sp++].i = 262;
    //  sipush 259
    stack[sp++].i = 259;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.check_match(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 266, 33);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2075 , L840109665 , bytecode index = 
    goto L1850680894;
    L691540605:
    //  line no 2078 , L691540605 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.forstat(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 86);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2079 , L1093223281 , bytecode index = 
    goto L1850680894;
    L729375394:
    //  line no 2082 , L729375394 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.repeatstat(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 81);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2083 , L77163673 , bytecode index = 
    goto L1850680894;
    L310014578:
    //  line no 2086 , L310014578 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.funcstat(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 92);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2087 , L462777594 , bytecode index = 
    goto L1850680894;
    L1111173986:
    //  line no 2090 , L1111173986 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2091 , L828312047 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 265
    stack[sp++].i = 265;
    // invokevirtual org/luaj/vm2/compiler/LexState.testnext(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 29);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L979822206;
    ; 
    //  line no 2092 , L1976870927 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.localfunc()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 89);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1850680894;
    L979822206:
    //  line no 2094 , L979822206 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.localstat()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 90);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2095 , L1167522035 , bytecode index = 
    goto L1850680894;
    L1871778598:
    //  line no 2098 , L1871778598 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2099 , L214929887 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.str_checkname()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/compiler/LexState.labelstat(Lorg/luaj/vm2/LuaString;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*,s32) = find_method(__ins->vm_table, 266, 79);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2100 , L18338606 , bytecode index = 
    goto L1850680894;
    L1792109661:
    //  line no 2103 , L1792109661 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2104 , L1372817363 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.retstat()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 94);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2105 , L594586746 , bytecode index = 
    goto L1850680894;
    L1991075605:
    //  line no 2109 , L1991075605 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
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
    // invokevirtual org/luaj/vm2/compiler/LexState.gotostat(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 77);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2110 , L1396801698 , bytecode index = 
    goto L1850680894;
    L1587818510:
    //  line no 2113 , L1587818510 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.exprstat()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 93);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1850680894:
    //  line no 2117 , L1850680894 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // getfield org/luaj/vm2/Prototype maxstacksize I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->maxstacksize_11;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1827710791;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState freereg S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->freereg_117;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1827710791;
    // iconst_1
    stack[sp++].i = 1;
    goto L558913557;
    L1827710791:
    // iconst_0
    stack[sp++].i = 0;
    L558913557:
    // invokestatic org/luaj/vm2/compiler/LexState._assert(Z)V
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
    //  line no 2119 , L132461369 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState nactvar S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->nactvar_115;
    sp += 0;
    // putfield org/luaj/vm2/compiler/FuncState freereg S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->freereg_117 = stack[sp + 1].i;
    ; 
    //  line no 2120 , L1493104631 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.leavelevel()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 45);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2121 , L836614448 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_statement___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_statement___V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_compiler_LexState_statlist___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2081, &rstack[0], &rlocal[0], &sp);
    L1010584177:
    //  line no 2125 , L1010584177 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2125;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/compiler/LexState.block_follow(Z)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 266, 72);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L324158286;
    ; 
    //  line no 2126 , L1335520301 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState t Lorg/luaj/vm2/compiler/LexState$Token;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->t_155;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    //  sipush 274
    stack[sp++].i = 274;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L728746911;
    ; 
    //  line no 2127 , L1977508673 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.statement()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 95);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2128 , L1947666055 , bytecode index = 
    method_exit(runtime);
    return;
    L728746911:
    //  line no 2130 , L728746911 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.statement()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 95);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1010584177;
    L324158286:
    //  line no 2132 , L324158286 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_statlist___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_statlist___V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_LexState_mainfunc__Lorg_luaj_vm2_compiler_FuncState_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_FuncState* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2082, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 2139 , L1033304734 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2139;
    // new org/luaj/vm2/compiler/FuncState$BlockCnt
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 8);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState$BlockCnt.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState_00024BlockCnt__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 2140 , L995381766 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.open_func(Lorg/luaj/vm2/compiler/FuncState;Lorg/luaj/vm2/compiler/FuncState$BlockCnt;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState*,struct org_luaj_vm2_compiler_FuncState_00024BlockCnt*) = find_method(__ins->vm_table, 266, 54);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2141 , L2008762581 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/Prototype is_vararg I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->is_1vararg_10 = stack[sp + 1].i;
    ; 
    //  line no 2142 , L404588697 , bytecode index = 
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 2143 , L315998990 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 7
    stack[sp++].i = 7;
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
    //  line no 2144 , L193492784 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->fs_157;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState envn Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->envn_164;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
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
    --sp; //pop
    ; 
    //  line no 2145 , L643328884 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.next()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 23);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2146 , L1391818342 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.statlist()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 96);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2147 , L1845760645 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 286
    stack[sp++].i = 286;
    // invokevirtual org/luaj/vm2/compiler/LexState.check(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 266, 30);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2148 , L645777794 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.close_func()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 266, 55);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 2149 , L1134237170 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_mainfunc__Lorg_luaj_vm2_compiler_FuncState_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_mainfunc__Lorg_luaj_vm2_compiler_FuncState_2_V(runtime, ins);
}


// locals: 4
// stack: 7
// args: 1
void func_org_luaj_vm2_compiler_LexState__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2083, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 49 , L1962586186 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 49;
    //  bipush 6
    stack[sp++].i = 6;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(592));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3616);
    // arrstore __refer  ,  L1962586186 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3614);
    // arrstore __refer  ,  L1962586186 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3610);
    // arrstore __refer  ,  L1962586186 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3611);
    // arrstore __refer  ,  L1962586186 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3615);
    // arrstore __refer  ,  L1962586186 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3612);
    // arrstore __refer  ,  L1962586186 bc index = 
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
    // putstatic org/luaj/vm2/compiler/LexState RESERVED_LOCAL_VAR_KEYWORDS [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_compiler_LexState.RESERVED_1LOCAL_1VAR_1KEYWORDS_109 = rstack[sp].obj;
    ; 
    //  line no 57 , L1015236238 , bytecode index = 
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
    // putstatic org/luaj/vm2/compiler/LexState RESERVED_LOCAL_VAR_KEYWORDS_TABLE Ljava/util/HashMap;
    sp -= 1;
    static_var_org_luaj_vm2_compiler_LexState.RESERVED_1LOCAL_1VAR_1KEYWORDS_1TABLE_110 = rstack[sp].obj;
    ; 
    //  line no 59 , L657252457 , bytecode index = 
    // getstatic org/luaj/vm2/compiler/LexState RESERVED_LOCAL_VAR_KEYWORDS [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.RESERVED_1LOCAL_1VAR_1KEYWORDS_109;
    sp += 1;
    rlocal[0].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L657252457
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[1].i = stack[--sp].i;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1031780408:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L472262461;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1031780408 bc index = 
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 60 , L976725249 , bytecode index = 
    // getstatic org/luaj/vm2/compiler/LexState RESERVED_LOCAL_VAR_KEYWORDS_TABLE Ljava/util/HashMap;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.RESERVED_1LOCAL_1VAR_1KEYWORDS_1TABLE_110;
    sp += 1;
    rstack[sp++].obj = rlocal[3].obj;
    // getstatic java/lang/Boolean TRUE Ljava/lang/Boolean;
    rstack[sp].obj =static_var_java_lang_Boolean.TRUE_1;
    sp += 1;
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
    //  line no 59 , L2052601222 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1031780408;
    L472262461:
    //  line no 148 , L472262461 , bytecode index = 
    //  bipush 34
    stack[sp++].i = 34;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(592));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 539);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3555);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3634);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3635);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3636);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 854);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3192);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3637);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 8
    stack[sp++].i = 8;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 366);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 9
    stack[sp++].i = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3638);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3639);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 11
    stack[sp++].i = 11;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2549);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 12
    stack[sp++].i = 12;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3640);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 13
    stack[sp++].i = 13;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 593);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 14
    stack[sp++].i = 14;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 480);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 15
    stack[sp++].i = 15;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 540);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 16
    stack[sp++].i = 16;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3641);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 17
    stack[sp++].i = 17;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3642);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 18
    stack[sp++].i = 18;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3643);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 19
    stack[sp++].i = 19;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3191);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 20
    stack[sp++].i = 20;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3644);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 21
    stack[sp++].i = 21;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3645);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 22
    stack[sp++].i = 22;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3646);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 23
    stack[sp++].i = 23;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3575);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 24
    stack[sp++].i = 24;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3647);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 25
    stack[sp++].i = 25;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3648);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 26
    stack[sp++].i = 26;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3649);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 27
    stack[sp++].i = 27;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3650);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 28
    stack[sp++].i = 28;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3651);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 29
    stack[sp++].i = 29;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3652);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 30
    stack[sp++].i = 30;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3653);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 31
    stack[sp++].i = 31;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3654);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 32
    stack[sp++].i = 32;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3655);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 33
    stack[sp++].i = 33;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3656);
    // arrstore __refer  ,  L472262461 bc index = 
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
    // putstatic org/luaj/vm2/compiler/LexState luaX_tokens [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_compiler_LexState.luaX_1tokens_166 = rstack[sp].obj;
    ; 
    //  line no 170 , L975629453 , bytecode index = 
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
    // putstatic org/luaj/vm2/compiler/LexState RESERVED Ljava/util/HashMap;
    sp -= 1;
    static_var_org_luaj_vm2_compiler_LexState.RESERVED_202 = rstack[sp].obj;
    ; 
    //  line no 172 , L387201851 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[0].i = stack[--sp].i;
    L269257589:
    stack[sp++].i = local[0].i;
    //  bipush 22
    stack[sp++].i = 22;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L734230775;
    ; 
    //  line no 173 , L646757254 , bytecode index = 
    // getstatic org/luaj/vm2/compiler/LexState luaX_tokens [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.luaX_1tokens_166;
    sp += 1;
    stack[sp++].i = local[0].i;
    // arrload __refer  ,  L646757254 bc index = 
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
    // invokestatic org/luaj/vm2/LuaValue.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 174 , L284660111 , bytecode index = 
    // getstatic org/luaj/vm2/compiler/LexState RESERVED Ljava/util/HashMap;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LexState.RESERVED_202;
    sp += 1;
    rstack[sp++].obj = rlocal[1].obj;
    //  sipush 257
    stack[sp++].i = 257;
    stack[sp++].i = local[0].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    //  line no 172 , L1691678663 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L269257589;
    L734230775:
    //  line no 1555 , L734230775 , bytecode index = 
    //  bipush 15
    stack[sp++].i = 15;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/compiler/LexState$Priority; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(3657));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  bipush 6
    stack[sp++].i = 6;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  bipush 6
    stack[sp++].i = 6;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  bipush 7
    stack[sp++].i = 7;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  bipush 7
    stack[sp++].i = 7;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  bipush 7
    stack[sp++].i = 7;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    //  bipush 9
    stack[sp++].i = 9;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    // iconst_4
    stack[sp++].i = 4;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    // iconst_3
    stack[sp++].i = 3;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 8
    stack[sp++].i = 8;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    // iconst_3
    stack[sp++].i = 3;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 9
    stack[sp++].i = 9;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    // iconst_3
    stack[sp++].i = 3;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    // iconst_3
    stack[sp++].i = 3;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 11
    stack[sp++].i = 11;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    // iconst_3
    stack[sp++].i = 3;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 12
    stack[sp++].i = 12;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    // iconst_3
    stack[sp++].i = 3;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 13
    stack[sp++].i = 13;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_2
    stack[sp++].i = 2;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 14
    stack[sp++].i = 14;
    // new org/luaj/vm2/compiler/LexState$Priority
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 188);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial org/luaj/vm2/compiler/LexState$Priority.<init>(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Priority__init___II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L734230775 bc index = 
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
    // putstatic org/luaj/vm2/compiler/LexState priority [Lorg/luaj/vm2/compiler/LexState$Priority;
    sp -= 1;
    static_var_org_luaj_vm2_compiler_LexState.priority_203 = rstack[sp].obj;
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

void bridge_org_luaj_vm2_compiler_LexState__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState__clinit____V(runtime, para[0].obj);
}


