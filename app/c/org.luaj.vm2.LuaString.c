// CLASS: org/luaj/vm2/LuaString extends org/luaj/vm2/LuaValue
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LuaString_static {struct org_luaj_vm2_LuaValue* s_1metatable_44; s32 RECENT_1STRINGS_1CACHE_1SIZE_49; s32 RECENT_1STRINGS_1MAX_1LENGTH_50;  };
struct org_luaj_vm2_LuaString_static static_var_org_luaj_vm2_LuaString = {NULL, 0, 0};


__refer arr_vmtable_org_luaj_vm2_LuaString_from_org_luaj_vm2_LuaString[] = {
    func_org_luaj_vm2_LuaString_isstring___Z,  //0
    func_org_luaj_vm2_LuaString_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //1
    func_org_luaj_vm2_LuaString_type___I,  //2
    func_org_luaj_vm2_LuaString_typename___Ljava_lang_String_2,  //3
    func_org_luaj_vm2_LuaString_tojstring___Ljava_lang_String_2,  //4
    func_org_luaj_vm2_LuaString_neg___Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_LuaString_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //6
    func_org_luaj_vm2_LuaString_add__D_Lorg_luaj_vm2_LuaValue_2,  //7
    func_org_luaj_vm2_LuaString_add__I_Lorg_luaj_vm2_LuaValue_2,  //8
    func_org_luaj_vm2_LuaString_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //9
    func_org_luaj_vm2_LuaString_sub__D_Lorg_luaj_vm2_LuaValue_2,  //10
    func_org_luaj_vm2_LuaString_sub__I_Lorg_luaj_vm2_LuaValue_2,  //11
    func_org_luaj_vm2_LuaString_subFrom__D_Lorg_luaj_vm2_LuaValue_2,  //12
    func_org_luaj_vm2_LuaString_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //13
    func_org_luaj_vm2_LuaString_mul__D_Lorg_luaj_vm2_LuaValue_2,  //14
    func_org_luaj_vm2_LuaString_mul__I_Lorg_luaj_vm2_LuaValue_2,  //15
    func_org_luaj_vm2_LuaString_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //16
    func_org_luaj_vm2_LuaString_pow__D_Lorg_luaj_vm2_LuaValue_2,  //17
    func_org_luaj_vm2_LuaString_pow__I_Lorg_luaj_vm2_LuaValue_2,  //18
    func_org_luaj_vm2_LuaString_powWith__D_Lorg_luaj_vm2_LuaValue_2,  //19
    func_org_luaj_vm2_LuaString_powWith__I_Lorg_luaj_vm2_LuaValue_2,  //20
    func_org_luaj_vm2_LuaString_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //21
    func_org_luaj_vm2_LuaString_div__D_Lorg_luaj_vm2_LuaValue_2,  //22
    func_org_luaj_vm2_LuaString_div__I_Lorg_luaj_vm2_LuaValue_2,  //23
    func_org_luaj_vm2_LuaString_divInto__D_Lorg_luaj_vm2_LuaValue_2,  //24
    func_org_luaj_vm2_LuaString_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //25
    func_org_luaj_vm2_LuaString_mod__D_Lorg_luaj_vm2_LuaValue_2,  //26
    func_org_luaj_vm2_LuaString_mod__I_Lorg_luaj_vm2_LuaValue_2,  //27
    func_org_luaj_vm2_LuaString_modFrom__D_Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_LuaString_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //29
    func_org_luaj_vm2_LuaString_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //30
    func_org_luaj_vm2_LuaString_lt_1b__I_Z,  //31
    func_org_luaj_vm2_LuaString_lt_1b__D_Z,  //32
    func_org_luaj_vm2_LuaString_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //33
    func_org_luaj_vm2_LuaString_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //34
    func_org_luaj_vm2_LuaString_lteq_1b__I_Z,  //35
    func_org_luaj_vm2_LuaString_lteq_1b__D_Z,  //36
    func_org_luaj_vm2_LuaString_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //37
    func_org_luaj_vm2_LuaString_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //38
    func_org_luaj_vm2_LuaString_gt_1b__I_Z,  //39
    func_org_luaj_vm2_LuaString_gt_1b__D_Z,  //40
    func_org_luaj_vm2_LuaString_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //41
    func_org_luaj_vm2_LuaString_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //42
    func_org_luaj_vm2_LuaString_gteq_1b__I_Z,  //43
    func_org_luaj_vm2_LuaString_gteq_1b__D_Z,  //44
    func_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //45
    func_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2,  //46
    func_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2,  //47
    func_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2,  //48
    func_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaValue_2_I,  //49
    func_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaString_2_I,  //50
    func_org_luaj_vm2_LuaString_checkint___I,  //51
    func_org_luaj_vm2_LuaString_checkinteger___Lorg_luaj_vm2_LuaInteger_2,  //52
    func_org_luaj_vm2_LuaString_checklong___J,  //53
    func_org_luaj_vm2_LuaString_checkdouble___D,  //54
    func_org_luaj_vm2_LuaString_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //55
    func_org_luaj_vm2_LuaString_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2,  //56
    func_org_luaj_vm2_LuaString_isnumber___Z,  //57
    func_org_luaj_vm2_LuaString_isint___Z,  //58
    func_org_luaj_vm2_LuaString_islong___Z,  //59
    func_org_luaj_vm2_LuaString_tobyte___B,  //60
    func_org_luaj_vm2_LuaString_tochar___C,  //61
    func_org_luaj_vm2_LuaString_todouble___D,  //62
    func_org_luaj_vm2_LuaString_tofloat___F,  //63
    func_org_luaj_vm2_LuaString_toint___I,  //64
    func_org_luaj_vm2_LuaString_tolong___J,  //65
    func_org_luaj_vm2_LuaString_toshort___S,  //66
    func_org_luaj_vm2_LuaString_optdouble__D_D,  //67
    func_org_luaj_vm2_LuaString_optint__I_I,  //68
    func_org_luaj_vm2_LuaString_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //69
    func_org_luaj_vm2_LuaString_optlong__J_J,  //70
    func_org_luaj_vm2_LuaString_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //71
    func_org_luaj_vm2_LuaString_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //72
    func_org_luaj_vm2_LuaString_tostring___Lorg_luaj_vm2_LuaValue_2,  //73
    func_org_luaj_vm2_LuaString_optjstring__Ljava_lang_String_2_Ljava_lang_String_2,  //74
    func_org_luaj_vm2_LuaString_strvalue___Lorg_luaj_vm2_LuaString_2,  //75
    func_org_luaj_vm2_LuaString_substring__II_Lorg_luaj_vm2_LuaString_2,  //76
    func_org_luaj_vm2_LuaString_hashCode___I,  //77
    func_org_luaj_vm2_LuaString_equals__Ljava_lang_Object_2_Z,  //78
    func_org_luaj_vm2_LuaString_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //79
    func_org_luaj_vm2_LuaString_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //80
    func_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaValue_2_Z,  //81
    func_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaString_2_Z,  //82
    func_org_luaj_vm2_LuaString_write__Ljava_io_DataOutputStream_2II_V,  //83
    func_org_luaj_vm2_LuaString_len___Lorg_luaj_vm2_LuaValue_2,  //84
    func_org_luaj_vm2_LuaString_length___I,  //85
    func_org_luaj_vm2_LuaString_rawlen___I,  //86
    func_org_luaj_vm2_LuaString_luaByte__I_I,  //87
    func_org_luaj_vm2_LuaString_charAt__I_I,  //88
    func_org_luaj_vm2_LuaString_checkjstring___Ljava_lang_String_2,  //89
    func_org_luaj_vm2_LuaString_checkstring___Lorg_luaj_vm2_LuaString_2,  //90
    func_org_luaj_vm2_LuaString_toInputStream___Ljava_io_InputStream_2,  //91
    func_org_luaj_vm2_LuaString_copyInto__I_3BII_V,  //92
    func_org_luaj_vm2_LuaString_indexOfAny__Lorg_luaj_vm2_LuaString_2_I,  //93
    func_org_luaj_vm2_LuaString_indexOf__BI_I,  //94
    func_org_luaj_vm2_LuaString_indexOf__Lorg_luaj_vm2_LuaString_2I_I,  //95
    func_org_luaj_vm2_LuaString_lastIndexOf__Lorg_luaj_vm2_LuaString_2_I,  //96
    func_org_luaj_vm2_LuaString_isValidUtf8___Z,  //97
    func_org_luaj_vm2_LuaString_tonumber___Lorg_luaj_vm2_LuaValue_2,  //98
    func_org_luaj_vm2_LuaString_tonumber__I_Lorg_luaj_vm2_LuaValue_2,  //99
    func_org_luaj_vm2_LuaString_scannumber___D,  //100
    func_org_luaj_vm2_LuaString_scannumber__I_D,  //101
    func_org_luaj_vm2_LuaString_printToStream__Ljava_io_PrintStream_2_V  //102
};
__refer arr_vmtable_org_luaj_vm2_LuaString_from_org_luaj_vm2_LuaValue[] = {
    func_org_luaj_vm2_LuaString_type___I,  //0
    func_org_luaj_vm2_LuaString_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaValue_isboolean___Z,  //2
    func_org_luaj_vm2_LuaValue_isclosure___Z,  //3
    func_org_luaj_vm2_LuaValue_isfunction___Z,  //4
    func_org_luaj_vm2_LuaString_isint___Z,  //5
    func_org_luaj_vm2_LuaValue_isinttype___Z,  //6
    func_org_luaj_vm2_LuaString_islong___Z,  //7
    func_org_luaj_vm2_LuaValue_isnil___Z,  //8
    func_org_luaj_vm2_LuaString_isnumber___Z,  //9
    func_org_luaj_vm2_LuaString_isstring___Z,  //10
    func_org_luaj_vm2_LuaValue_isthread___Z,  //11
    func_org_luaj_vm2_LuaValue_istable___Z,  //12
    func_org_luaj_vm2_LuaValue_isuserdata___Z,  //13
    func_org_luaj_vm2_LuaValue_isuserdata__Ljava_lang_Class_2_Z,  //14
    func_org_luaj_vm2_LuaValue_toboolean___Z,  //15
    func_org_luaj_vm2_LuaString_tobyte___B,  //16
    func_org_luaj_vm2_LuaString_tochar___C,  //17
    func_org_luaj_vm2_LuaString_todouble___D,  //18
    func_org_luaj_vm2_LuaString_tofloat___F,  //19
    func_org_luaj_vm2_LuaString_toint___I,  //20
    func_org_luaj_vm2_LuaString_tolong___J,  //21
    func_org_luaj_vm2_LuaString_toshort___S,  //22
    func_org_luaj_vm2_LuaString_tojstring___Ljava_lang_String_2,  //23
    func_org_luaj_vm2_LuaValue_touserdata___Ljava_lang_Object_2,  //24
    func_org_luaj_vm2_LuaValue_touserdata__Ljava_lang_Class_2_Ljava_lang_Object_2,  //25
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //26
    func_org_luaj_vm2_LuaString_tonumber___Lorg_luaj_vm2_LuaValue_2,  //27
    func_org_luaj_vm2_LuaString_tostring___Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_LuaValue_optboolean__Z_Z,  //29
    func_org_luaj_vm2_LuaValue_optclosure__Lorg_luaj_vm2_LuaClosure_2_Lorg_luaj_vm2_LuaClosure_2,  //30
    func_org_luaj_vm2_LuaString_optdouble__D_D,  //31
    func_org_luaj_vm2_LuaValue_optfunction__Lorg_luaj_vm2_LuaFunction_2_Lorg_luaj_vm2_LuaFunction_2,  //32
    func_org_luaj_vm2_LuaString_optint__I_I,  //33
    func_org_luaj_vm2_LuaString_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //34
    func_org_luaj_vm2_LuaString_optlong__J_J,  //35
    func_org_luaj_vm2_LuaString_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //36
    func_org_luaj_vm2_LuaString_optjstring__Ljava_lang_String_2_Ljava_lang_String_2,  //37
    func_org_luaj_vm2_LuaString_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //38
    func_org_luaj_vm2_LuaValue_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2,  //39
    func_org_luaj_vm2_LuaValue_optthread__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_LuaThread_2,  //40
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Object_2_Ljava_lang_Object_2,  //41
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Class_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //42
    func_org_luaj_vm2_LuaValue_optvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_LuaValue_checkboolean___Z,  //44
    func_org_luaj_vm2_LuaValue_checkclosure___Lorg_luaj_vm2_LuaClosure_2,  //45
    func_org_luaj_vm2_LuaString_checkdouble___D,  //46
    func_org_luaj_vm2_LuaValue_checkfunction___Lorg_luaj_vm2_LuaFunction_2,  //47
    func_org_luaj_vm2_LuaValue_checkglobals___Lorg_luaj_vm2_Globals_2,  //48
    func_org_luaj_vm2_LuaString_checkint___I,  //49
    func_org_luaj_vm2_LuaString_checkinteger___Lorg_luaj_vm2_LuaInteger_2,  //50
    func_org_luaj_vm2_LuaString_checklong___J,  //51
    func_org_luaj_vm2_LuaString_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //52
    func_org_luaj_vm2_LuaString_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2,  //53
    func_org_luaj_vm2_LuaString_checkjstring___Ljava_lang_String_2,  //54
    func_org_luaj_vm2_LuaString_checkstring___Lorg_luaj_vm2_LuaString_2,  //55
    func_org_luaj_vm2_LuaValue_checktable___Lorg_luaj_vm2_LuaTable_2,  //56
    func_org_luaj_vm2_LuaValue_checkthread___Lorg_luaj_vm2_LuaThread_2,  //57
    func_org_luaj_vm2_LuaValue_checkuserdata___Ljava_lang_Object_2,  //58
    func_org_luaj_vm2_LuaValue_checkuserdata__Ljava_lang_Class_2_Ljava_lang_Object_2,  //59
    func_org_luaj_vm2_LuaValue_checknotnil___Lorg_luaj_vm2_LuaValue_2,  //60
    func_org_luaj_vm2_LuaValue_isvalidkey___Z,  //61
    func_org_luaj_vm2_LuaValue_argerror__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //62
    func_org_luaj_vm2_LuaValue_typerror__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //63
    func_org_luaj_vm2_LuaValue_unimplemented__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //64
    func_org_luaj_vm2_LuaValue_illegal__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //65
    func_org_luaj_vm2_LuaValue_lenerror___Lorg_luaj_vm2_LuaValue_2,  //66
    func_org_luaj_vm2_LuaValue_aritherror___Lorg_luaj_vm2_LuaValue_2,  //67
    func_org_luaj_vm2_LuaValue_aritherror__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //68
    func_org_luaj_vm2_LuaValue_compareerror__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //69
    func_org_luaj_vm2_LuaValue_compareerror__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //70
    func_org_luaj_vm2_LuaValue_get__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //71
    func_org_luaj_vm2_LuaValue_get__I_Lorg_luaj_vm2_LuaValue_2,  //72
    func_org_luaj_vm2_LuaValue_get__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //73
    func_org_luaj_vm2_LuaValue_set__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V,  //74
    func_org_luaj_vm2_LuaValue_set__ILorg_luaj_vm2_LuaValue_2_V,  //75
    func_org_luaj_vm2_LuaValue_set__ILjava_lang_String_2_V,  //76
    func_org_luaj_vm2_LuaValue_set__Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_V,  //77
    func_org_luaj_vm2_LuaValue_set__Ljava_lang_String_2D_V,  //78
    func_org_luaj_vm2_LuaValue_set__Ljava_lang_String_2I_V,  //79
    func_org_luaj_vm2_LuaValue_set__Ljava_lang_String_2Ljava_lang_String_2_V,  //80
    func_org_luaj_vm2_LuaValue_rawget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //81
    func_org_luaj_vm2_LuaValue_rawget__I_Lorg_luaj_vm2_LuaValue_2,  //82
    func_org_luaj_vm2_LuaValue_rawget__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //83
    func_org_luaj_vm2_LuaValue_rawset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V,  //84
    func_org_luaj_vm2_LuaValue_rawset__ILorg_luaj_vm2_LuaValue_2_V,  //85
    func_org_luaj_vm2_LuaValue_rawset__ILjava_lang_String_2_V,  //86
    func_org_luaj_vm2_LuaValue_rawset__Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_V,  //87
    func_org_luaj_vm2_LuaValue_rawset__Ljava_lang_String_2D_V,  //88
    func_org_luaj_vm2_LuaValue_rawset__Ljava_lang_String_2I_V,  //89
    func_org_luaj_vm2_LuaValue_rawset__Ljava_lang_String_2Ljava_lang_String_2_V,  //90
    func_org_luaj_vm2_LuaValue_rawsetlist__ILorg_luaj_vm2_Varargs_2_V,  //91
    func_org_luaj_vm2_LuaValue_presize__I_V,  //92
    func_org_luaj_vm2_LuaValue_next__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //93
    func_org_luaj_vm2_LuaValue_inext__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //94
    func_org_luaj_vm2_LuaValue_load__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //95
    func_org_luaj_vm2_LuaValue_arg__I_Lorg_luaj_vm2_LuaValue_2,  //96
    func_org_luaj_vm2_LuaValue_narg___I,  //97
    func_org_luaj_vm2_LuaValue_arg1___Lorg_luaj_vm2_LuaValue_2,  //98
    func_org_luaj_vm2_LuaString_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //99
    func_org_luaj_vm2_LuaValue_setmetatable__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //100
    func_org_luaj_vm2_LuaValue_call___Lorg_luaj_vm2_LuaValue_2,  //101
    func_org_luaj_vm2_LuaValue_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //102
    func_org_luaj_vm2_LuaValue_call__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //103
    func_org_luaj_vm2_LuaValue_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //104
    func_org_luaj_vm2_LuaValue_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //105
    func_org_luaj_vm2_LuaValue_method__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //106
    func_org_luaj_vm2_LuaValue_method__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //107
    func_org_luaj_vm2_LuaValue_method__Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //108
    func_org_luaj_vm2_LuaValue_method__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //109
    func_org_luaj_vm2_LuaValue_method__Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //110
    func_org_luaj_vm2_LuaValue_method__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //111
    func_org_luaj_vm2_LuaValue_invoke___Lorg_luaj_vm2_Varargs_2,  //112
    func_org_luaj_vm2_LuaValue_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //113
    func_org_luaj_vm2_LuaValue_invoke__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //114
    func_org_luaj_vm2_LuaValue_invoke__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //115
    func_org_luaj_vm2_LuaValue_invoke___3Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //116
    func_org_luaj_vm2_LuaValue_invoke___3Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //117
    func_org_luaj_vm2_LuaValue_invokemethod__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2,  //118
    func_org_luaj_vm2_LuaValue_invokemethod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //119
    func_org_luaj_vm2_LuaValue_invokemethod__Ljava_lang_String_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //120
    func_org_luaj_vm2_LuaValue_invokemethod__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //121
    func_org_luaj_vm2_LuaValue_invokemethod__Ljava_lang_String_2_3Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //122
    func_org_luaj_vm2_LuaValue_invokemethod__Lorg_luaj_vm2_LuaValue_2_3Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //123
    func_org_luaj_vm2_LuaValue_callmt___Lorg_luaj_vm2_LuaValue_2,  //124
    func_org_luaj_vm2_LuaValue_not___Lorg_luaj_vm2_LuaValue_2,  //125
    func_org_luaj_vm2_LuaString_neg___Lorg_luaj_vm2_LuaValue_2,  //126
    func_org_luaj_vm2_LuaString_len___Lorg_luaj_vm2_LuaValue_2,  //127
    func_org_luaj_vm2_LuaString_length___I,  //128
    func_org_luaj_vm2_LuaString_rawlen___I,  //129
    func_org_luaj_vm2_LuaString_equals__Ljava_lang_Object_2_Z,  //130
    func_org_luaj_vm2_LuaString_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //131
    func_org_luaj_vm2_LuaString_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //132
    func_org_luaj_vm2_LuaValue_neq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //133
    func_org_luaj_vm2_LuaValue_neq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //134
    func_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaValue_2_Z,  //135
    func_org_luaj_vm2_LuaValue_raweq__Lorg_luaj_vm2_LuaUserdata_2_Z,  //136
    func_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaString_2_Z,  //137
    func_org_luaj_vm2_LuaValue_raweq__D_Z,  //138
    func_org_luaj_vm2_LuaValue_raweq__I_Z,  //139
    func_org_luaj_vm2_LuaString_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //140
    func_org_luaj_vm2_LuaString_add__D_Lorg_luaj_vm2_LuaValue_2,  //141
    func_org_luaj_vm2_LuaString_add__I_Lorg_luaj_vm2_LuaValue_2,  //142
    func_org_luaj_vm2_LuaString_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //143
    func_org_luaj_vm2_LuaString_sub__D_Lorg_luaj_vm2_LuaValue_2,  //144
    func_org_luaj_vm2_LuaString_sub__I_Lorg_luaj_vm2_LuaValue_2,  //145
    func_org_luaj_vm2_LuaString_subFrom__D_Lorg_luaj_vm2_LuaValue_2,  //146
    func_org_luaj_vm2_LuaValue_subFrom__I_Lorg_luaj_vm2_LuaValue_2,  //147
    func_org_luaj_vm2_LuaString_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //148
    func_org_luaj_vm2_LuaString_mul__D_Lorg_luaj_vm2_LuaValue_2,  //149
    func_org_luaj_vm2_LuaString_mul__I_Lorg_luaj_vm2_LuaValue_2,  //150
    func_org_luaj_vm2_LuaString_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //151
    func_org_luaj_vm2_LuaString_pow__D_Lorg_luaj_vm2_LuaValue_2,  //152
    func_org_luaj_vm2_LuaString_pow__I_Lorg_luaj_vm2_LuaValue_2,  //153
    func_org_luaj_vm2_LuaString_powWith__D_Lorg_luaj_vm2_LuaValue_2,  //154
    func_org_luaj_vm2_LuaString_powWith__I_Lorg_luaj_vm2_LuaValue_2,  //155
    func_org_luaj_vm2_LuaString_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //156
    func_org_luaj_vm2_LuaString_div__D_Lorg_luaj_vm2_LuaValue_2,  //157
    func_org_luaj_vm2_LuaString_div__I_Lorg_luaj_vm2_LuaValue_2,  //158
    func_org_luaj_vm2_LuaString_divInto__D_Lorg_luaj_vm2_LuaValue_2,  //159
    func_org_luaj_vm2_LuaString_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //160
    func_org_luaj_vm2_LuaString_mod__D_Lorg_luaj_vm2_LuaValue_2,  //161
    func_org_luaj_vm2_LuaString_mod__I_Lorg_luaj_vm2_LuaValue_2,  //162
    func_org_luaj_vm2_LuaString_modFrom__D_Lorg_luaj_vm2_LuaValue_2,  //163
    func_org_luaj_vm2_LuaValue_arithmt__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //164
    func_org_luaj_vm2_LuaValue_arithmtwith__Lorg_luaj_vm2_LuaValue_2D_Lorg_luaj_vm2_LuaValue_2,  //165
    func_org_luaj_vm2_LuaString_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //166
    func_org_luaj_vm2_LuaValue_lt__D_Lorg_luaj_vm2_LuaValue_2,  //167
    func_org_luaj_vm2_LuaValue_lt__I_Lorg_luaj_vm2_LuaValue_2,  //168
    func_org_luaj_vm2_LuaString_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //169
    func_org_luaj_vm2_LuaString_lt_1b__I_Z,  //170
    func_org_luaj_vm2_LuaString_lt_1b__D_Z,  //171
    func_org_luaj_vm2_LuaString_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //172
    func_org_luaj_vm2_LuaValue_lteq__D_Lorg_luaj_vm2_LuaValue_2,  //173
    func_org_luaj_vm2_LuaValue_lteq__I_Lorg_luaj_vm2_LuaValue_2,  //174
    func_org_luaj_vm2_LuaString_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //175
    func_org_luaj_vm2_LuaString_lteq_1b__I_Z,  //176
    func_org_luaj_vm2_LuaString_lteq_1b__D_Z,  //177
    func_org_luaj_vm2_LuaString_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //178
    func_org_luaj_vm2_LuaValue_gt__D_Lorg_luaj_vm2_LuaValue_2,  //179
    func_org_luaj_vm2_LuaValue_gt__I_Lorg_luaj_vm2_LuaValue_2,  //180
    func_org_luaj_vm2_LuaString_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //181
    func_org_luaj_vm2_LuaString_gt_1b__I_Z,  //182
    func_org_luaj_vm2_LuaString_gt_1b__D_Z,  //183
    func_org_luaj_vm2_LuaString_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //184
    func_org_luaj_vm2_LuaValue_gteq__D_Lorg_luaj_vm2_LuaValue_2,  //185
    func_org_luaj_vm2_LuaValue_gteq__I_Lorg_luaj_vm2_LuaValue_2,  //186
    func_org_luaj_vm2_LuaString_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //187
    func_org_luaj_vm2_LuaString_gteq_1b__I_Z,  //188
    func_org_luaj_vm2_LuaString_gteq_1b__D_Z,  //189
    func_org_luaj_vm2_LuaValue_comparemt__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //190
    func_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaValue_2_I,  //191
    func_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaString_2_I,  //192
    func_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //193
    func_org_luaj_vm2_LuaValue_concatTo__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //194
    func_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2,  //195
    func_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2,  //196
    func_org_luaj_vm2_LuaValue_buffer___Lorg_luaj_vm2_Buffer_2,  //197
    func_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2,  //198
    func_org_luaj_vm2_LuaValue_concatmt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //199
    func_org_luaj_vm2_LuaValue_and__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //200
    func_org_luaj_vm2_LuaValue_or__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //201
    func_org_luaj_vm2_LuaValue_testfor_1b__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Z,  //202
    func_org_luaj_vm2_LuaString_strvalue___Lorg_luaj_vm2_LuaString_2,  //203
    func_org_luaj_vm2_LuaValue_strongvalue___Lorg_luaj_vm2_LuaValue_2,  //204
    func_org_luaj_vm2_LuaValue_metatag__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //205
    func_org_luaj_vm2_LuaValue_checkmetatag__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //206
    func_org_luaj_vm2_LuaValue_onInvoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //207
    func_org_luaj_vm2_LuaValue_initupvalue1__Lorg_luaj_vm2_LuaValue_2_V,  //208
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2  //209
};
__refer arr_vmtable_org_luaj_vm2_LuaString_from_org_luaj_vm2_Varargs[] = {
    func_org_luaj_vm2_LuaValue_arg__I_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_LuaValue_narg___I,  //1
    func_org_luaj_vm2_LuaValue_arg1___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_Varargs_eval___Lorg_luaj_vm2_Varargs_2,  //3
    func_org_luaj_vm2_Varargs_isTailcall___Z,  //4
    func_org_luaj_vm2_Varargs_type__I_I,  //5
    func_org_luaj_vm2_Varargs_isnil__I_Z,  //6
    func_org_luaj_vm2_Varargs_isfunction__I_Z,  //7
    func_org_luaj_vm2_Varargs_isnumber__I_Z,  //8
    func_org_luaj_vm2_Varargs_isstring__I_Z,  //9
    func_org_luaj_vm2_Varargs_istable__I_Z,  //10
    func_org_luaj_vm2_Varargs_isthread__I_Z,  //11
    func_org_luaj_vm2_Varargs_isuserdata__I_Z,  //12
    func_org_luaj_vm2_Varargs_isvalue__I_Z,  //13
    func_org_luaj_vm2_Varargs_optboolean__IZ_Z,  //14
    func_org_luaj_vm2_Varargs_optclosure__ILorg_luaj_vm2_LuaClosure_2_Lorg_luaj_vm2_LuaClosure_2,  //15
    func_org_luaj_vm2_Varargs_optdouble__ID_D,  //16
    func_org_luaj_vm2_Varargs_optfunction__ILorg_luaj_vm2_LuaFunction_2_Lorg_luaj_vm2_LuaFunction_2,  //17
    func_org_luaj_vm2_Varargs_optint__II_I,  //18
    func_org_luaj_vm2_Varargs_optinteger__ILorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //19
    func_org_luaj_vm2_Varargs_optlong__IJ_J,  //20
    func_org_luaj_vm2_Varargs_optnumber__ILorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //21
    func_org_luaj_vm2_Varargs_optjstring__ILjava_lang_String_2_Ljava_lang_String_2,  //22
    func_org_luaj_vm2_Varargs_optstring__ILorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //23
    func_org_luaj_vm2_Varargs_opttable__ILorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2,  //24
    func_org_luaj_vm2_Varargs_optthread__ILorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_LuaThread_2,  //25
    func_org_luaj_vm2_Varargs_optuserdata__ILjava_lang_Object_2_Ljava_lang_Object_2,  //26
    func_org_luaj_vm2_Varargs_optuserdata__ILjava_lang_Class_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //27
    func_org_luaj_vm2_Varargs_optvalue__ILorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_Varargs_checkboolean__I_Z,  //29
    func_org_luaj_vm2_Varargs_checkclosure__I_Lorg_luaj_vm2_LuaClosure_2,  //30
    func_org_luaj_vm2_Varargs_checkdouble__I_D,  //31
    func_org_luaj_vm2_Varargs_checkfunction__I_Lorg_luaj_vm2_LuaFunction_2,  //32
    func_org_luaj_vm2_Varargs_checkint__I_I,  //33
    func_org_luaj_vm2_Varargs_checkinteger__I_Lorg_luaj_vm2_LuaInteger_2,  //34
    func_org_luaj_vm2_Varargs_checklong__I_J,  //35
    func_org_luaj_vm2_Varargs_checknumber__I_Lorg_luaj_vm2_LuaNumber_2,  //36
    func_org_luaj_vm2_Varargs_checkjstring__I_Ljava_lang_String_2,  //37
    func_org_luaj_vm2_Varargs_checkstring__I_Lorg_luaj_vm2_LuaString_2,  //38
    func_org_luaj_vm2_Varargs_checktable__I_Lorg_luaj_vm2_LuaTable_2,  //39
    func_org_luaj_vm2_Varargs_checkthread__I_Lorg_luaj_vm2_LuaThread_2,  //40
    func_org_luaj_vm2_Varargs_checkuserdata__I_Ljava_lang_Object_2,  //41
    func_org_luaj_vm2_Varargs_checkuserdata__ILjava_lang_Class_2_Ljava_lang_Object_2,  //42
    func_org_luaj_vm2_Varargs_checkvalue__I_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_Varargs_checknotnil__I_Lorg_luaj_vm2_LuaValue_2,  //44
    func_org_luaj_vm2_Varargs_argcheck__ZILjava_lang_String_2_V,  //45
    func_org_luaj_vm2_Varargs_isnoneornil__I_Z,  //46
    func_org_luaj_vm2_Varargs_toboolean__I_Z,  //47
    func_org_luaj_vm2_Varargs_tobyte__I_B,  //48
    func_org_luaj_vm2_Varargs_tochar__I_C,  //49
    func_org_luaj_vm2_Varargs_todouble__I_D,  //50
    func_org_luaj_vm2_Varargs_tofloat__I_F,  //51
    func_org_luaj_vm2_Varargs_toint__I_I,  //52
    func_org_luaj_vm2_Varargs_tolong__I_J,  //53
    func_org_luaj_vm2_Varargs_tojstring__I_Ljava_lang_String_2,  //54
    func_org_luaj_vm2_Varargs_toshort__I_S,  //55
    func_org_luaj_vm2_Varargs_touserdata__I_Ljava_lang_Object_2,  //56
    func_org_luaj_vm2_Varargs_touserdata__ILjava_lang_Class_2_Ljava_lang_Object_2,  //57
    func_org_luaj_vm2_LuaString_tojstring___Ljava_lang_String_2,  //58
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //59
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2,  //60
    func_org_luaj_vm2_Varargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V,  //61
    func_org_luaj_vm2_Varargs_dealias___Lorg_luaj_vm2_Varargs_2  //62
};
__refer arr_vmtable_org_luaj_vm2_LuaString_from_java_lang_Object[] = {
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_org_luaj_vm2_LuaString_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_org_luaj_vm2_LuaString_hashCode___I  //9
};
VMTable vmtable_org_luaj_vm2_LuaString[] = {
    {31, 103, arr_vmtable_org_luaj_vm2_LuaString_from_org_luaj_vm2_LuaString}, //0
    {1, 210, arr_vmtable_org_luaj_vm2_LuaString_from_org_luaj_vm2_LuaValue}, //1
    {2, 63, arr_vmtable_org_luaj_vm2_LuaString_from_org_luaj_vm2_Varargs}, //2
    {5, 10, arr_vmtable_org_luaj_vm2_LuaString_from_java_lang_Object}, //3
};



// locals: 3
// stack: 4
// args: 2
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1025, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 114 , L1198197478 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 114;
    rstack[sp++].obj = rlocal[0].obj;
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
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 115 , L476579021 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/LuaString.lengthAsUtf8([C)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaString_lengthAsUtf8___3C_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 116 , L106297322 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L106297322
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/LuaString.encodeToUtf8([CI[BI)I
    {
        sp -= 5;
        stack[sp].i = func_org_luaj_vm2_LuaString_encodeToUtf8___3CI_3BI_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 117 , L1419332030 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1419332030
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic org/luaj/vm2/LuaString.valueUsing([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_LuaString_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj);
}


// locals: 7
// stack: 4
// args: 4
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_valueOf___3BII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1026, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 133 , L396918327 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 133;
    stack[sp++].i = local[2].i;
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1055601039;
    ; 
    //  line no 134 , L547441493 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/LuaString.valueFromCopy([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueFromCopy___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1055601039:
    //  line no 135 , L1055601039 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/LuaString.hashCode([BII)I
    {
        sp -= 4;
        stack[sp].i = func_org_luaj_vm2_LuaString_hashCode___3BII_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 136 , L967677821 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 127
    stack[sp++].i = 127;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 137 , L1839206329 , bytecode index = 
    // invokestatic org/luaj/vm2/LuaString$RecentShortStrings.access$000()[Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_00024RecentShortStrings_access_00024000____3Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1839206329 bc index = 
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
    //  line no 138 , L169880779 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  == NULL) goto L552674617;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/LuaString m_hashcode I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1hashcode_48;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L552674617;
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaString.byteseq([BII)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaString_byteseq___3BII_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L552674617;
    rstack[sp++].obj = rlocal[5].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L552674617:
    //  line no 139 , L552674617 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/LuaString.valueFromCopy([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueFromCopy___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 140 , L1974622245 , bytecode index = 
    // invokestatic org/luaj/vm2/LuaString$RecentShortStrings.access$000()[Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_00024RecentShortStrings_access_00024000____3Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[6].obj;
    // arrstore __refer  ,  L1974622245 bc index = 
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
    //  line no 141 , L402808045 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
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

void bridge_org_luaj_vm2_LuaString_valueOf___3BII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_valueOf___3BII_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 5
// args: 4
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_valueFromCopy___3BII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1027, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 146 , L977160959 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 146;
    stack[sp++].i = local[2].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 147 , L1563053805 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
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
    //  line no 148 , L1464177809 , bytecode index = 
    // new org/luaj/vm2/LuaString
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 31);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaString.<init>([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaString__init____3BII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
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

void bridge_org_luaj_vm2_LuaString_valueFromCopy___3BII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_valueFromCopy___3BII_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 7
// stack: 5
// args: 4
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1028, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 162 , L2007599722 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 162;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L2007599722
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2029780820;
    ; 
    //  line no 163 , L65080774 , bytecode index = 
    // new org/luaj/vm2/LuaString
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 31);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaString.<init>([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaString__init____3BII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2029780820:
    //  line no 164 , L2029780820 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/LuaString.hashCode([BII)I
    {
        sp -= 4;
        stack[sp].i = func_org_luaj_vm2_LuaString_hashCode___3BII_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 165 , L2116179210 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 127
    stack[sp++].i = 127;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 166 , L1172535934 , bytecode index = 
    // invokestatic org/luaj/vm2/LuaString$RecentShortStrings.access$000()[Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_00024RecentShortStrings_access_00024000____3Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1172535934 bc index = 
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
    //  line no 167 , L1648700617 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  == NULL) goto L1765900922;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/LuaString m_hashcode I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1hashcode_48;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1765900922;
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaString.byteseq([BII)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaString_byteseq___3BII_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1765900922;
    rstack[sp++].obj = rlocal[5].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1765900922:
    //  line no 168 , L1765900922 , bytecode index = 
    // new org/luaj/vm2/LuaString
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 31);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaString.<init>([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaString__init____3BII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 169 , L94830685 , bytecode index = 
    // invokestatic org/luaj/vm2/LuaString$RecentShortStrings.access$000()[Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_00024RecentShortStrings_access_00024000____3Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[6].obj;
    // arrstore __refer  ,  L94830685 bc index = 
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
    //  line no 170 , L1539947037 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
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

void bridge_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 3
// args: 2
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_valueOf___3C_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1029, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 182 , L1964434661 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 182;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1964434661
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
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

void bridge_org_luaj_vm2_LuaString_valueOf___3C_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_valueOf___3C_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj);
}


// locals: 5
// stack: 5
// args: 4
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_valueOf___3CII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1030, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 194 , L1585571244 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 194;
    stack[sp++].i = local[2].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 195 , L1099552523 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L66724371:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1047934137;
    ; 
    //  line no 196 , L1862994526 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L1862994526 bc index = 
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
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1862994526 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    ; 
    //  line no 195 , L1614133563 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L66724371;
    L1047934137:
    //  line no 197 , L1047934137 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/LuaString.valueUsing([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_LuaString_valueOf___3CII_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_valueOf___3CII_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 1
// stack: 3
// args: 2
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_valueOf___3B_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1031, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 209 , L1037163664 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 209;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1037163664
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic org/luaj/vm2/LuaString.valueOf([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_LuaString_valueOf___3B_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_valueOf___3B_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 3
// args: 2
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_valueUsing___3B_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1032, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 224 , L1200546947 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 224;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1200546947
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic org/luaj/vm2/LuaString.valueUsing([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_LuaString_valueUsing___3B_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_valueUsing___3B_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj);
}


// locals: 4
// stack: 4
// args: 3
void func_org_luaj_vm2_LuaString__init____3BII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1033, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 236 , L695530017 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 236;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaValue.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaValue__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 237 , L1493042329 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/LuaString m_bytes [B
    sp -= 2;
    ((struct org_luaj_vm2_LuaString*)rstack[sp + 0].obj)->m_1bytes_45 = rstack[sp + 1].obj;
    ; 
    //  line no 238 , L1751403001 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/LuaString m_offset I
    sp -= 2;
    ((struct org_luaj_vm2_LuaString*)rstack[sp + 0].obj)->m_1offset_46 = stack[sp + 1].i;
    ; 
    //  line no 239 , L1717433286 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield org/luaj/vm2/LuaString m_length I
    sp -= 2;
    ((struct org_luaj_vm2_LuaString*)rstack[sp + 0].obj)->m_1length_47 = stack[sp + 1].i;
    ; 
    //  line no 240 , L1756819670 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokestatic org/luaj/vm2/LuaString.hashCode([BII)I
    {
        sp -= 4;
        stack[sp].i = func_org_luaj_vm2_LuaString_hashCode___3BII_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LuaString m_hashcode I
    sp -= 2;
    ((struct org_luaj_vm2_LuaString*)rstack[sp + 0].obj)->m_1hashcode_48 = stack[sp + 1].i;
    ; 
    //  line no 241 , L1078262677 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString__init____3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaString__init____3BII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaString_isstring___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1034, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 244 , L57624756 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 244;
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

void bridge_org_luaj_vm2_LuaString_isstring___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_isstring___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_getmetatable___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1035, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 248 , L998242313 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 248;
    // getstatic org/luaj/vm2/LuaString s_metatable Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaString.s_1metatable_44;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaString_getmetatable___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_getmetatable___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaString_type___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1036, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 252 , L1659286984 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 252;
    // iconst_4
    stack[sp++].i = 4;
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

void bridge_org_luaj_vm2_LuaString_type___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_type___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_LuaString_typename___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1037, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 256 , L2072130509 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 256;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 381);
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

void bridge_org_luaj_vm2_LuaString_typename___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_typename___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_lang_String* func_org_luaj_vm2_LuaString_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1038, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 260 , L482307698 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 260;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    // invokestatic org/luaj/vm2/LuaString.decodeAsUtf8([BII)Ljava/lang/String;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_decodeAsUtf8___3BII_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_LuaString_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_tojstring___Ljava_lang_String_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_neg___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1039, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 264 , L1765702 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 264;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].d = stack[sp].d;
    ; 
    stack[sp].d = local[1].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L713898436;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaValue.neg()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_neg___Lorg_luaj_vm2_LuaValue_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L632475595;
    L713898436:
    stack[sp].d = local[1].d;
    sp += 2;
    stack[sp - 2].d = -stack[sp - 2].d; 
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L632475595:
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

void bridge_org_luaj_vm2_LuaString_neg___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_neg___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1040, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 267 , L263833514 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 267;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
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
    stack[sp].d = local[2].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L2143739483;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaString ADD Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ADD_27;
    sp += 1;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.arithmt(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 164);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L565881091;
    L2143739483:
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/LuaValue.add(D)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 141);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L565881091:
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

void bridge_org_luaj_vm2_LuaString_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_add__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1041, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 268 , L1621254922 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 268;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp].d = local[1].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d + stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_add__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_add__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_add__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1042, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 269 , L1574509514 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 269;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d + stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_add__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_add__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1043, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 270 , L864221358 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 270;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
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
    stack[sp].d = local[2].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1979080261;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaString SUB Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.SUB_28;
    sp += 1;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.arithmt(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 164);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1860886124;
    L1979080261:
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/LuaValue.subFrom(D)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 146);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1860886124:
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

void bridge_org_luaj_vm2_LuaString_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_sub__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1044, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 271 , L173791568 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 271;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp].d = local[1].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d - stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_sub__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_sub__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_sub__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1045, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 272 , L1966670937 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 272;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d - stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_sub__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_sub__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_subFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1046, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 273 , L588449070 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 273;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 4].d = stack[sp - 4].d - stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_subFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_subFrom__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1047, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 274 , L376725601 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 274;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
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
    stack[sp].d = local[2].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1828508781;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaString MUL Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.MUL_30;
    sp += 1;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.arithmt(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 164);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1376017854;
    L1828508781:
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/LuaValue.mul(D)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 149);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1376017854:
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

void bridge_org_luaj_vm2_LuaString_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_mul__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1048, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 275 , L1552870927 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 275;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp].d = local[1].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_mul__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_mul__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_mul__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1049, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 276 , L641882263 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 276;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_mul__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_mul__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1050, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 277 , L1489193907 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 277;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
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
    stack[sp].d = local[2].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1645624121;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaString POW Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.POW_31;
    sp += 1;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.arithmt(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 164);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L547923534;
    L1645624121:
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/LuaValue.powWith(D)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 154);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L547923534:
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

void bridge_org_luaj_vm2_LuaString_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_pow__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1051, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 278 , L379124840 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 278;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp].d = local[1].d;
    sp += 2;
    // invokestatic org/luaj/vm2/lib/MathLib.dpow(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_lib_MathLib_dpow__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_pow__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_pow__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_pow__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1052, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 279 , L544966217 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 279;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    // invokestatic org/luaj/vm2/lib/MathLib.dpow(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_lib_MathLib_dpow__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_pow__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_pow__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_powWith__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1053, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 280 , L882471736 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 280;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/MathLib.dpow(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_lib_MathLib_dpow__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_powWith__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_powWith__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_powWith__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1054, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 281 , L727197178 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 281;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/MathLib.dpow(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_lib_MathLib_dpow__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_powWith__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_powWith__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1055, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 282 , L749604930 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 282;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
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
    stack[sp].d = local[2].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L2082509879;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaString DIV Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.DIV_29;
    sp += 1;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.arithmt(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 164);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L576894497;
    L2082509879:
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/LuaValue.divInto(D)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 159);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L576894497:
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

void bridge_org_luaj_vm2_LuaString_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_div__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1056, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 283 , L16148478 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 283;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp].d = local[1].d;
    sp += 2;
    // invokestatic org/luaj/vm2/LuaDouble.ddiv(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_ddiv__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_div__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_div__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_div__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1057, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 284 , L1340848245 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 284;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    // invokestatic org/luaj/vm2/LuaDouble.ddiv(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_ddiv__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_div__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_div__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_divInto__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1058, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 285 , L379121284 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 285;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaDouble.ddiv(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_ddiv__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_divInto__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_divInto__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1059, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 286 , L50072771 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 286;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
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
    stack[sp].d = local[2].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1672598778;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaString MOD Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.MOD_32;
    sp += 1;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.arithmt(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 164);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1122233828;
    L1672598778:
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/LuaValue.modFrom(D)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 163);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1122233828:
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

void bridge_org_luaj_vm2_LuaString_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_mod__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1060, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 287 , L1967496309 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 287;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp].d = local[1].d;
    sp += 2;
    // invokestatic org/luaj/vm2/LuaDouble.dmod(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_dmod__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_mod__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_mod__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_mod__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1061, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 288 , L1173340685 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 288;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    // invokestatic org/luaj/vm2/LuaDouble.dmod(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_dmod__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_mod__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_mod__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_modFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1062, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 289 , L1739267143 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 289;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaString.checkarith()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_checkarith___D(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaDouble.dmod(DD)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_dmod__DD_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d, stack[sp + 3].d);
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

void bridge_org_luaj_vm2_LuaString_modFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_modFrom__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1063, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 292 , L817689537 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 292;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L708613859;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L365625031;
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1531200408;
    L365625031:
    // getstatic org/luaj/vm2/LuaString FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L1531200408;
    L708613859:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaValue.lt(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1531200408:
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

void bridge_org_luaj_vm2_LuaString_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1064, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 293 , L1123321137 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 293;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L685934;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L2032909428;
    // iconst_1
    stack[sp++].i = 1;
    goto L2031377754;
    L2032909428:
    // iconst_0
    stack[sp++].i = 0;
    goto L2031377754;
    L685934:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaValue.lt_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaValue_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2031377754:
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

void bridge_org_luaj_vm2_LuaString_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_lt_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1065, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 294 , L1280124872 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 294;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2087);
    // invokevirtual org/luaj/vm2/LuaString.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 63);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
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

void bridge_org_luaj_vm2_LuaString_lt_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_lt_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_lt_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1066, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 295 , L864326906 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 295;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2087);
    // invokevirtual org/luaj/vm2/LuaString.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 63);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
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

void bridge_org_luaj_vm2_LuaString_lt_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_lt_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1067, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 296 , L1972143064 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 296;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L312168418;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  < 0) goto L95369743;
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L26928827;
    L95369743:
    // getstatic org/luaj/vm2/LuaString FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L26928827;
    L312168418:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaValue.lteq(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L26928827:
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

void bridge_org_luaj_vm2_LuaString_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1068, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 297 , L1479909053 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 297;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L615954678;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  < 0) goto L1926180325;
    // iconst_1
    stack[sp++].i = 1;
    goto L733461760;
    L1926180325:
    // iconst_0
    stack[sp++].i = 0;
    goto L733461760;
    L615954678:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaValue.lteq_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaValue_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L733461760:
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

void bridge_org_luaj_vm2_LuaString_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_lteq_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1069, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 298 , L1323531427 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 298;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2087);
    // invokevirtual org/luaj/vm2/LuaString.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 63);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
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

void bridge_org_luaj_vm2_LuaString_lteq_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_lteq_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_lteq_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1070, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 299 , L1400973979 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 299;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2087);
    // invokevirtual org/luaj/vm2/LuaString.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 63);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
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

void bridge_org_luaj_vm2_LuaString_lteq_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_lteq_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1071, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 300 , L1105416433 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 300;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1110195322;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L404947798;
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L226690498;
    L404947798:
    // getstatic org/luaj/vm2/LuaString FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L226690498;
    L1110195322:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaValue.gt(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L226690498:
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

void bridge_org_luaj_vm2_LuaString_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1072, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 301 , L1976602906 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 301;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1978209605;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1624351535;
    // iconst_1
    stack[sp++].i = 1;
    goto L1394356510;
    L1624351535:
    // iconst_0
    stack[sp++].i = 0;
    goto L1394356510;
    L1978209605:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaValue.gt_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaValue_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1394356510:
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

void bridge_org_luaj_vm2_LuaString_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_gt_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1073, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 302 , L533415944 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 302;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2087);
    // invokevirtual org/luaj/vm2/LuaString.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 63);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
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

void bridge_org_luaj_vm2_LuaString_gt_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_gt_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_gt_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1074, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 303 , L1086849943 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 303;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2087);
    // invokevirtual org/luaj/vm2/LuaString.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 63);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
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

void bridge_org_luaj_vm2_LuaString_gt_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_gt_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1075, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 304 , L246003654 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 304;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L235370598;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  > 0) goto L248710794;
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L2083217543;
    L248710794:
    // getstatic org/luaj/vm2/LuaString FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L2083217543;
    L235370598:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaValue.gteq(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2083217543:
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

void bridge_org_luaj_vm2_LuaString_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1076, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 305 , L177104018 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 305;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L478139423;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  > 0) goto L997695567;
    // iconst_1
    stack[sp++].i = 1;
    goto L2066892165;
    L997695567:
    // iconst_0
    stack[sp++].i = 0;
    goto L2066892165;
    L478139423:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaValue.gteq_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaValue_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2066892165:
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

void bridge_org_luaj_vm2_LuaString_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_gteq_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1077, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 306 , L1625090026 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 306;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2087);
    // invokevirtual org/luaj/vm2/LuaString.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 63);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
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

void bridge_org_luaj_vm2_LuaString_gteq_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_gteq_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_gteq_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1078, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 307 , L265824587 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 307;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2087);
    // invokevirtual org/luaj/vm2/LuaString.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 63);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
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

void bridge_org_luaj_vm2_LuaString_gteq_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_gteq_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1079, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 310 , L41092582 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 310;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.concatTo(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 196);
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

void bridge_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1080, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 311 , L1345265484 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 311;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Buffer.concatTo(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 48, 10);
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

void bridge_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaNumber* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1081, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 312 , L1976166251 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 312;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaNumber.strvalue()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 203);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaString.concatTo(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 31, 48);
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

void bridge_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1082, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 314 , L1547398254 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 314;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 315 , L1337829755 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
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
    //  line no 316 , L1979055448 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
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
    //  line no 317 , L934740803 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L934740803
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic org/luaj/vm2/LuaString.valueUsing([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaValue_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1083, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 321 , L314364096 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 321;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strcmp(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 192);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = -stack[sp - 1].i; 
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

void bridge_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaValue_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaValue_2_I(runtime, ins);
}


// locals: 4
// stack: 4
// args: 1
s32 func_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1084, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 323 , L1205559205 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 323;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1098986569:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1182311147;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1182311147;
    ; 
    //  line no 324 , L1531182070 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1531182070 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1531182070 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L276869158;
    ; 
    //  line no 325 , L1491860739 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1491860739 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1491860739 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L276869158:
    //  line no 323 , L276869158 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1098986569;
    L1182311147:
    //  line no 328 , L1182311147 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_strcmp__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
f64 func_org_luaj_vm2_LuaString_checkarith___D(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1085, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 333 , L534753234 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 333;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].d = stack[sp].d;
    ; 
    //  line no 334 , L172699023 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L231725600;
    ; 
    //  line no 335 , L1831882653 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.aritherror()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 67);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L231725600:
    //  line no 336 , L231725600 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_checkarith___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaString_checkarith___D(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_LuaString_checkint___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1086, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 340 , L1552400354 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 340;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checkdouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 54);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
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

void bridge_org_luaj_vm2_LuaString_checkint___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_checkint___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaInteger* func_org_luaj_vm2_LuaString_checkinteger___Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1087, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 343 , L1078566479 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 343;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checkint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 51);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaString.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_org_luaj_vm2_LuaString_checkinteger___Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_checkinteger___Lorg_luaj_vm2_LuaInteger_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s64 func_org_luaj_vm2_LuaString_checklong___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1088, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 346 , L819245704 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 346;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checkdouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 54);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_checklong___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaString_checklong___J(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
f64 func_org_luaj_vm2_LuaString_checkdouble___D(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1089, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 349 , L1089584667 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 349;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].d = stack[sp].d;
    ; 
    //  line no 350 , L2054757222 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1865201235;
    ; 
    //  line no 351 , L348132918 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 363);
    // invokevirtual org/luaj/vm2/LuaString.argerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 62);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1865201235:
    //  line no 352 , L1865201235 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_checkdouble___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaString_checkdouble___D(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct org_luaj_vm2_LuaNumber* func_org_luaj_vm2_LuaString_checknumber___Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1090, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 355 , L1805443519 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 355;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checkdouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 54);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_checknumber___Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_checknumber___Lorg_luaj_vm2_LuaNumber_2(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
struct org_luaj_vm2_LuaNumber* func_org_luaj_vm2_LuaString_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1091, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 358 , L1978504976 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 358;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
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
    //  line no 359 , L1338368149 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1129869771;
    ; 
    //  line no 360 , L1620459733 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/LuaString.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1129869771:
    //  line no 361 , L1129869771 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
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

void bridge_org_luaj_vm2_LuaString_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
s8 func_org_luaj_vm2_LuaString_isnumber___Z(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1092, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 365 , L435914790 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 365;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].d = stack[sp].d;
    ; 
    //  line no 366 , L422409467 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
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
    if(stack[--sp].i  != 0) goto L1273958371;
    // iconst_1
    stack[sp++].i = 1;
    goto L1659515968;
    L1273958371:
    // iconst_0
    stack[sp++].i = 0;
    L1659515968:
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

void bridge_org_luaj_vm2_LuaString_isnumber___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_isnumber___Z(runtime, ins);
}


// locals: 4
// stack: 4
// args: 0
s8 func_org_luaj_vm2_LuaString_isint___Z(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1093, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 370 , L1433208870 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 370;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].d = stack[sp].d;
    ; 
    //  line no 371 , L1724814719 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1437988306;
    ; 
    //  line no 372 , L1543146693 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1437988306:
    //  line no 373 , L1437988306 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
    stack[sp - 2].i = (s32)stack[sp - 2].d; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 374 , L1718322084 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1956415355;
    // iconst_1
    stack[sp++].i = 1;
    goto L251520863;
    L1956415355:
    // iconst_0
    stack[sp++].i = 0;
    L251520863:
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

void bridge_org_luaj_vm2_LuaString_isint___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_isint___Z(runtime, ins);
}


// locals: 5
// stack: 4
// args: 0
s8 func_org_luaj_vm2_LuaString_islong___Z(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1094, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 378 , L992086987 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 378;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].d = stack[sp].d;
    ; 
    //  line no 379 , L731243659 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1244867001;
    ; 
    //  line no 380 , L1037955032 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1244867001:
    //  line no 381 , L1244867001 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    sp -= 2;
    local[3].j = stack[sp].j;
    ; 
    //  line no 382 , L369805307 , bytecode index = 
    stack[sp].j = local[3].j;
    sp += 2;
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L314562573;
    // iconst_1
    stack[sp++].i = 1;
    goto L1100109058;
    L314562573:
    // iconst_0
    stack[sp++].i = 0;
    L1100109058:
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

void bridge_org_luaj_vm2_LuaString_islong___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_islong___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaString_tobyte___B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1095, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 385 , L1394010463 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 385;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 64);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
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

void bridge_org_luaj_vm2_LuaString_tobyte___B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_tobyte___B(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
u16 func_org_luaj_vm2_LuaString_tochar___C(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1096, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 386 , L1819038759 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 386;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 64);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
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

void bridge_org_luaj_vm2_LuaString_tochar___C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_tochar___C(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
f64 func_org_luaj_vm2_LuaString_todouble___D(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1097, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 387 , L95685867 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 387;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].d = stack[sp].d;
    ; 
    stack[sp].d = local[1].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L494953170;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    goto L509864971;
    L494953170:
    stack[sp].d = local[1].d;
    sp += 2;
    L509864971:
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_todouble___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaString_todouble___D(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
f32 func_org_luaj_vm2_LuaString_tofloat___F(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1098, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 388 , L911501858 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 388;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.todouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 62);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].f = (f32)stack[sp - 2].d; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].f;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_tofloat___F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_org_luaj_vm2_LuaString_tofloat___F(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_LuaString_toint___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1099, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 389 , L694069884 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 389;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.tolong()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 65);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
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

void bridge_org_luaj_vm2_LuaString_toint___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_toint___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s64 func_org_luaj_vm2_LuaString_tolong___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1100, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 390 , L747158012 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 390;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.todouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 62);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_tolong___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaString_tolong___J(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s16 func_org_luaj_vm2_LuaString_toshort___S(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1101, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 391 , L948675904 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 391;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 64);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
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

void bridge_org_luaj_vm2_LuaString_toshort___S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_toshort___S(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
f64 func_org_luaj_vm2_LuaString_optdouble__D_D(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1102, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 394 , L785271142 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 394;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checkdouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 54);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_optdouble__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaString_optdouble__D_D(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
s32 func_org_luaj_vm2_LuaString_optint__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1103, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 398 , L2023026843 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 398;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checkint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 51);
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

void bridge_org_luaj_vm2_LuaString_optint__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_optint__I_I(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaInteger* func_org_luaj_vm2_LuaString_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaInteger* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1104, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 402 , L1628551735 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 402;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checkinteger()Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaInteger* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 52);
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

void bridge_org_luaj_vm2_LuaString_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s64 func_org_luaj_vm2_LuaString_optlong__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1105, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 406 , L606775513 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 406;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checklong()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 53);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_optlong__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaString_optlong__J_J(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaNumber* func_org_luaj_vm2_LuaString_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaNumber* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1106, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 410 , L935160003 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 410;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.checknumber()Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaNumber* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 55);
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

void bridge_org_luaj_vm2_LuaString_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1107, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 414 , L300604602 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 414;
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_org_luaj_vm2_LuaString_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_tostring___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1108, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 418 , L453398853 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 418;
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_org_luaj_vm2_LuaString_tostring___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_tostring___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct java_lang_String* func_org_luaj_vm2_LuaString_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1109, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 422 , L34073107 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 422;
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_org_luaj_vm2_LuaString_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_strvalue___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1110, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 426 , L1658512704 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 426;
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_org_luaj_vm2_LuaString_strvalue___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_strvalue___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 5
// stack: 3
// args: 2
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_substring__II_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1111, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 436 , L1699578227 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 436;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 437 , L1456061400 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 438 , L1661777060 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L104261836;
    ; 
    //  line no 439 , L259630944 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/LuaString.valueUsing([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L351656492;
    L104261836:
    //  line no 440 , L104261836 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/LuaString.valueOf([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L351656492:
    //  line no 438 , L351656492 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_substring__II_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_substring__II_Lorg_luaj_vm2_LuaString_2(runtime, ins, para[0].i);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaString_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 444 , L597364637 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_hashcode I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1hashcode_48;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_org_luaj_vm2_LuaString_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_hashCode___I(runtime, ins);
}


// locals: 6
// stack: 5
// args: 4
s32 func_org_luaj_vm2_LuaString_hashCode___3BII_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1113, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 455 , L1527086220 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 455;
    stack[sp++].i = local[2].i;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 456 , L515273883 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_5
    stack[sp++].i = 5;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 457 , L1697281847 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[5].i = stack[--sp].i;
    L1535026957:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L737104370;
    ; 
    //  line no 458 , L105966264 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[3].i;
    // iconst_5
    stack[sp++].i = 5;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L105966264 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 457 , L821405322 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1535026957;
    L737104370:
    //  line no 459 , L737104370 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_hashCode___3BII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_hashCode___3BII_I(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1114, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 464 , L1328323494 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 464;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaString
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 240);
    if(stack[--sp].i  == 0) goto L1311292881;
    ; 
    //  line no 465 , L1408533352 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast org/luaj/vm2/LuaString
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 240);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaString.raweq(Lorg/luaj/vm2/LuaString;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 31, 82);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1311292881:
    //  line no 467 , L1311292881 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1115, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 471 , L252615006 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 471;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(Lorg/luaj/vm2/LuaString;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 137);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L79919963;
    // getstatic org/luaj/vm2/LuaString TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1943750504;
    L79919963:
    // getstatic org/luaj/vm2/LuaString FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1943750504:
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

void bridge_org_luaj_vm2_LuaString_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1116, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 472 , L176955204 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 472;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(Lorg/luaj/vm2/LuaString;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 137);
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

void bridge_org_luaj_vm2_LuaString_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1117, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 476 , L1011044643 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 476;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(Lorg/luaj/vm2/LuaString;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 1, 137);
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

void bridge_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaString_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1118, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 480 , L979550238 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 480;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L2056234595;
    ; 
    //  line no 481 , L1558395480 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2056234595:
    //  line no 482 , L2056234595 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2023917549;
    ; 
    //  line no 483 , L1416415959 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2023917549:
    //  line no 484 , L2023917549 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1398260359;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1398260359;
    ; 
    //  line no 485 , L371397455 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1398260359:
    //  line no 486 , L1398260359 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 77);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 77);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2052223881;
    ; 
    //  line no 487 , L1213871206 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2052223881:
    //  line no 488 , L2052223881 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L628392976:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L725832346;
    ; 
    //  line no 489 , L1113895488 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1113895488 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1113895488 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1527007086;
    ; 
    //  line no 490 , L1523649562 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1527007086:
    //  line no 488 , L1527007086 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L628392976;
    L725832346:
    //  line no 491 , L725832346 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaString_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_raweq__Lorg_luaj_vm2_LuaString_2_Z(runtime, ins);
}


// locals: 5
// stack: 5
// args: 6
s8 func_org_luaj_vm2_LuaString_equals__Lorg_luaj_vm2_LuaString_2ILorg_luaj_vm2_LuaString_2II_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, struct org_luaj_vm2_LuaString* p1, s32 p2, struct org_luaj_vm2_LuaString* p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1119, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 495 , L203819996 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 495;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/LuaString.equals([BI[BII)Z
    {
        sp -= 6;
        stack[sp].i = func_org_luaj_vm2_LuaString_equals___3BI_3BII_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
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

void bridge_org_luaj_vm2_LuaString_equals__Lorg_luaj_vm2_LuaString_2ILorg_luaj_vm2_LuaString_2II_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_equals__Lorg_luaj_vm2_LuaString_2ILorg_luaj_vm2_LuaString_2II_Z(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}


// locals: 4
// stack: 5
// args: 3
s8 func_org_luaj_vm2_LuaString_byteseq___3BII_Z(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1120, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 500 , L662925691 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 500;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1995952705;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokestatic org/luaj/vm2/LuaString.equals([BI[BII)Z
    {
        sp -= 6;
        stack[sp].i = func_org_luaj_vm2_LuaString_equals___3BI_3BII_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1995952705;
    // iconst_1
    stack[sp++].i = 1;
    goto L1244880808;
    L1995952705:
    // iconst_0
    stack[sp++].i = 0;
    L1244880808:
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

void bridge_org_luaj_vm2_LuaString_byteseq___3BII_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_byteseq___3BII_Z(runtime, ins, para[0].i, para[1].i);
}


// locals: 5
// stack: 3
// args: 6
s8 func_org_luaj_vm2_LuaString_equals___3BI_3BII_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1, s32 p2, JArray * p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1121, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 504 , L58890945 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 504;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L58890945
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1269773610;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L58890945
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L464649704;
    L1269773610:
    //  line no 505 , L1269773610 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L464649704:
    //  line no 506 , L464649704 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  < 0) goto L367967231;
    ; 
    //  line no 507 , L36531985 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // arrload s8  ,  L36531985 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    // arrload s8  ,  L36531985 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L464649704;
    ; 
    //  line no 508 , L815336475 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L367967231:
    //  line no 509 , L367967231 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_equals___3BI_3BII_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_equals___3BI_3BII_Z(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}


// locals: 4
// stack: 4
// args: 3
void func_org_luaj_vm2_LuaString_write__Ljava_io_DataOutputStream_2II_V(JThreadRuntime *runtime, struct java_io_DataOutputStream* p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1122, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 513 , L1149407083 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 513;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    // invokevirtual java/io/DataOutputStream.write([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 205, 1);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 514 , L767436045 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_write__Ljava_io_DataOutputStream_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaString_write__Ljava_io_DataOutputStream_2II_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_len___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1123, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 517 , L1847431070 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 517;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaString_len___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_len___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaString_length___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 521 , L1660837991 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_org_luaj_vm2_LuaString_length___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_length___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaString_rawlen___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 525 , L1306794745 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_org_luaj_vm2_LuaString_rawlen___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_rawlen___I(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s32 func_org_luaj_vm2_LuaString_luaByte__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1126, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 529 , L1195396074 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 529;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1195396074 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
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

void bridge_org_luaj_vm2_LuaString_luaByte__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_luaByte__I_I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_LuaString_charAt__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1127, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 533 , L1560379655 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 533;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L1824322115;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L702999333;
    L1824322115:
    //  line no 534 , L1824322115 , bytecode index = 
    // new java/lang/IndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 175);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IndexOutOfBoundsException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IndexOutOfBoundsException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1824322115 in labeltable is :L1824322115
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 534;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L702999333:
    //  line no 535 , L702999333 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
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

void bridge_org_luaj_vm2_LuaString_charAt__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_charAt__I_I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_LuaString_checkjstring___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1128, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 539 , L865858182 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 539;
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_org_luaj_vm2_LuaString_checkjstring___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_checkjstring___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaString_checkstring___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1129, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 543 , L647973805 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 543;
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_org_luaj_vm2_LuaString_checkstring___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_checkstring___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 1
// stack: 5
// args: 0
struct java_io_InputStream* func_org_luaj_vm2_LuaString_toInputStream___Ljava_io_InputStream_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1130, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 551 , L842331982 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 551;
    // new java/io/ByteArrayInputStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 206);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    // invokespecial java/io/ByteArrayInputStream.<init>([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ByteArrayInputStream__init____3BII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
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

void bridge_org_luaj_vm2_LuaString_toInputStream___Ljava_io_InputStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_toInputStream___Ljava_io_InputStream_2(runtime, ins);
}


// locals: 5
// stack: 5
// args: 4
void func_org_luaj_vm2_LuaString_copyInto__I_3BII_V(JThreadRuntime *runtime, s32 p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1131, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 562 , L660595570 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 562;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
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
    //  line no 563 , L1088491512 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_copyInto__I_3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaString_copyInto__I_3BII_V(runtime, ins, para[0].obj, para[1].i, para[2].i);
}


// locals: 6
// stack: 3
// args: 1
s32 func_org_luaj_vm2_LuaString_indexOfAny__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1132, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 570 , L648315947 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 570;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 571 , L2117642238 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 572 , L913242382 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    local[4].i = stack[--sp].i;
    L870322840:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L837246227;
    ; 
    //  line no 573 , L173738886 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    local[5].i = stack[--sp].i;
    L1262237002:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2029754983;
    ; 
    //  line no 574 , L1946111918 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload s8  ,  L1946111918 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[5].i;
    // arrload s8  ,  L1946111918 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L564817260;
    ; 
    //  line no 575 , L194415222 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L564817260:
    //  line no 573 , L564817260 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1262237002;
    L2029754983:
    //  line no 572 , L2029754983 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L870322840;
    L837246227:
    //  line no 579 , L837246227 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_indexOfAny__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_indexOfAny__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 4
// stack: 3
// args: 2
s32 func_org_luaj_vm2_LuaString_indexOf__BI_I(JThreadRuntime *runtime, s8 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1133, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 589 , L638695843 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 589;
    stack[sp++].i = local[2].i;
    local[3].i = stack[--sp].i;
    L1411543296:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1800967368;
    ; 
    //  line no 590 , L338887787 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L338887787 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1061448687;
    ; 
    //  line no 591 , L2015999862 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1061448687:
    //  line no 589 , L1061448687 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1411543296;
    L1800967368:
    //  line no 593 , L1800967368 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_indexOf__BI_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_indexOf__BI_I(runtime, ins, para[0].i);
}


// locals: 6
// stack: 5
// args: 2
s32 func_org_luaj_vm2_LuaString_indexOf__Lorg_luaj_vm2_LuaString_2I_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, s32 p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1134, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 603 , L1533330615 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 603;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 604 , L1197721383 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 605 , L1917082298 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[5].i = stack[--sp].i;
    L1639765351:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L478209179;
    ; 
    //  line no 606 , L1166230227 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[3].i;
    // invokestatic org/luaj/vm2/LuaString.equals([BI[BII)Z
    {
        sp -= 6;
        stack[sp].i = func_org_luaj_vm2_LuaString_equals___3BI_3BII_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L365056339;
    ; 
    //  line no 607 , L307411297 , bytecode index = 
    stack[sp++].i = local[5].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L365056339:
    //  line no 605 , L365056339 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1639765351;
    L478209179:
    //  line no 609 , L478209179 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_indexOf__Lorg_luaj_vm2_LuaString_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_indexOf__Lorg_luaj_vm2_LuaString_2I_I(runtime, ins, para[0].i);
}


// locals: 5
// stack: 5
// args: 1
s32 func_org_luaj_vm2_LuaString_lastIndexOf__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1135, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 618 , L1445424568 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 618;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 619 , L1374217958 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 620 , L1459016715 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L912747546:
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  < 0) goto L1530957251;
    ; 
    //  line no 621 , L1292472219 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/LuaString.equals([BI[BII)Z
    {
        sp -= 6;
        stack[sp].i = func_org_luaj_vm2_LuaString_equals___3BI_3BII_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L767511741;
    ; 
    //  line no 622 , L548795052 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L767511741:
    //  line no 620 , L767511741 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L912747546;
    L1530957251:
    //  line no 624 , L1530957251 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_lastIndexOf__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_lastIndexOf__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 8
// stack: 5
// args: 4
struct java_lang_String* func_org_luaj_vm2_LuaString_decodeAsUtf8___3BII_Ljava_lang_String_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1, s32 p2, s32 p3){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1136, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 641 , L2117099736 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 641;
    stack[sp++].i = local[1].i;
    local[3].i = stack[--sp].i;
    ; 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L2070160397:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L103787801;
    ; 
    //  line no 642 , L1205580258 , bytecode index = 
    //  sipush 224
    stack[sp++].i = 224;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    // arrload s8  ,  L1205580258 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    switch(stack[--sp].i){
        case 192:
            goto L777313177;
        case 224:
            goto L1441328175;
        default:
            goto L1959451969;
    }
    L1441328175:
    //  line no 643 , L1441328175 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    L777313177:
    //  line no 644 , L777313177 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    L1959451969:
    //  line no 641 , L1959451969 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2070160397;
    L103787801:
    //  line no 647 , L103787801 , bytecode index = 
    stack[sp++].i = local[5].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 648 , L1327895505 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[3].i = stack[--sp].i;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1831141281:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1705277839;
    ; 
    //  line no 649 , L2000648320 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    ; 
    //  line no 650 , L142099757 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    // arrload s8  ,  L142099757 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[6].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  >= 0) goto L80026551;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L137533655;
    L80026551:
    stack[sp++].i = local[6].i;
    goto L1118430673;
    L137533655:
    //  line no 651 , L137533655 , bytecode index = 
    stack[sp++].i = local[6].i;
    //  bipush -32
    stack[sp++].i = -32;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1527254842;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L2000469839;
    L1527254842:
    stack[sp++].i = local[6].i;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    // arrload s8  ,  L1527254842 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    goto L1118430673;
    L2000469839:
    //  line no 652 , L2000469839 , bytecode index = 
    stack[sp++].i = local[6].i;
    //  bipush 15
    stack[sp++].i = 15;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    // arrload s8  ,  L2000469839 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    // arrload s8  ,  L2000469839 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    L1118430673:
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L1118430673 bc index = 
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
    goto L1831141281;
    L1705277839:
    //  line no 654 , L1705277839 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[7].obj;
    // invokespecial java/lang/String.<init>([C)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3C_V(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_LuaString_decodeAsUtf8___3BII_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_decodeAsUtf8___3BII_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 2
s32 func_org_luaj_vm2_LuaString_lengthAsUtf8___3C_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1137, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 668 , L1717473929 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 668;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1717473929
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[2].i = stack[--sp].i;
    ; 
    local[1].i = stack[--sp].i;
    L1868578441:
    // iinc slot 1 value -1
    local[1].i += -1;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L659996839;
    ; 
    //  line no 669 , L890160158 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L890160158 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[3].i = stack[--sp].i;
    ; 
    //  sipush 128
    stack[sp++].i = 128;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1868578441;
    ; 
    //  line no 670 , L119112899 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    //  sipush 2048
    stack[sp++].i = 2048;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L375074687;
    // iconst_2
    stack[sp++].i = 2;
    goto L1429616542;
    L375074687:
    // iconst_1
    stack[sp++].i = 1;
    L1429616542:
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1868578441;
    L659996839:
    //  line no 671 , L659996839 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_lengthAsUtf8___3C_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_lengthAsUtf8___3C_I(runtime, para[0].obj, para[1].obj);
}


// locals: 7
// stack: 5
// args: 5
s32 func_org_luaj_vm2_LuaString_encodeToUtf8___3CI_3BI_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, JArray * p1, s32 p2, JArray * p3, s32 p4){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1138, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    ; 
    //  line no 691 , L1821100643 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 691;
    stack[sp++].i = local[3].i;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 692 , L593768538 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L1191864687:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L466032056;
    ; 
    //  line no 693 , L690822257 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[6].i;
    // arrload u16  ,  L690822257 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[4].i = stack[--sp].i;
    ; 
    //  sipush 128
    stack[sp++].i = 128;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1058822905;
    ; 
    //  line no 694 , L475394679 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L475394679 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    goto L1574615832;
    L1058822905:
    //  line no 695 , L1058822905 , bytecode index = 
    stack[sp++].i = local[4].i;
    //  sipush 2048
    stack[sp++].i = 2048;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1049590050;
    ; 
    //  line no 696 , L1662592920 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    //  sipush 192
    stack[sp++].i = 192;
    stack[sp++].i = local[4].i;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  bipush 31
    stack[sp++].i = 31;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1662592920 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    ; 
    //  line no 697 , L1357686726 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    //  sipush 128
    stack[sp++].i = 128;
    stack[sp++].i = local[4].i;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1357686726 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    goto L1574615832;
    L1049590050:
    //  line no 699 , L1049590050 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    //  sipush 224
    stack[sp++].i = 224;
    stack[sp++].i = local[4].i;
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  bipush 15
    stack[sp++].i = 15;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1049590050 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    ; 
    //  line no 700 , L1491522744 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    //  sipush 128
    stack[sp++].i = 128;
    stack[sp++].i = local[4].i;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1491522744 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    ; 
    //  line no 701 , L501608687 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    //  sipush 128
    stack[sp++].i = 128;
    stack[sp++].i = local[4].i;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L501608687 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    L1574615832:
    //  line no 692 , L1574615832 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1191864687;
    L466032056:
    //  line no 704 , L466032056 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
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

void bridge_org_luaj_vm2_LuaString_encodeToUtf8___3CI_3BI_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_encodeToUtf8___3CI_3BI_I(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i);
}


// locals: 4
// stack: 2
// args: 0
s8 func_org_luaj_vm2_LuaString_isValidUtf8___Z(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1139, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 714 , L42820240 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 714;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L1592840862:
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L955611965;
    ; 
    //  line no 715 , L1367672657 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // arrload s8  ,  L1367672657 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 716 , L1021565761 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L1692375649;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1592840862;
    L1692375649:
    //  line no 717 , L1692375649 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  sipush 224
    stack[sp++].i = 224;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  sipush 192
    stack[sp++].i = 192;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2002790740;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2002790740;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // arrload s8  ,  L1692375649 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  sipush 192
    stack[sp++].i = 192;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  sipush 128
    stack[sp++].i = 128;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2002790740;
    ; 
    //  line no 719 , L237373286 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1592840862;
    L2002790740:
    //  line no 720 , L2002790740 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  sipush 240
    stack[sp++].i = 240;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  sipush 224
    stack[sp++].i = 224;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L742255664;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L742255664;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // arrload s8  ,  L2002790740 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  sipush 192
    stack[sp++].i = 192;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  sipush 128
    stack[sp++].i = 128;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L742255664;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // arrload s8  ,  L2002790740 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  sipush 192
    stack[sp++].i = 192;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  sipush 128
    stack[sp++].i = 128;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L742255664;
    ; 
    //  line no 723 , L883521348 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1592840862;
    L742255664:
    //  line no 724 , L742255664 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L955611965:
    //  line no 726 , L955611965 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_isValidUtf8___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaString_isValidUtf8___Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_tonumber___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1140, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 738 , L2086068243 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 738;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaString.scannumber()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 100);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].d = stack[sp].d;
    ; 
    //  line no 739 , L1070194629 , bytecode index = 
    stack[sp].d = local[1].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1076202543;
    // getstatic org/luaj/vm2/LuaString NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    goto L749486981;
    L1076202543:
    stack[sp].d = local[1].d;
    sp += 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L749486981:
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

void bridge_org_luaj_vm2_LuaString_tonumber___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_tonumber___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaString_tonumber__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1141, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 749 , L385332399 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 749;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.scannumber(I)D
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 101);
        stack[sp].d = __func_p(runtime, stack[sp + 0].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[2].d = stack[sp].d;
    ; 
    //  line no 750 , L2061440682 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L883020319;
    // getstatic org/luaj/vm2/LuaString NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    goto L1488946768;
    L883020319:
    stack[sp].d = local[2].d;
    sp += 2;
    // invokestatic org/luaj/vm2/LuaString.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1488946768:
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

void bridge_org_luaj_vm2_LuaString_tonumber__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaString_tonumber__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 5
// stack: 4
// args: 0
f64 func_org_luaj_vm2_LuaString_scannumber___D(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1142, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 759 , L1907241392 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 759;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L1863100050:
    //  line no 760 , L1863100050 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L739264372;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L1863100050 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L739264372;
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1863100050;
    L739264372:
    //  line no 761 , L739264372 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L749981943;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L739264372 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L749981943;
    // iinc slot 2 value -1
    local[2].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L739264372;
    L749981943:
    //  line no 762 , L749981943 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1313960293;
    ; 
    //  line no 763 , L1155757579 , bytecode index = 
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L1313960293:
    //  line no 764 , L1313960293 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L1313960293 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1785111044;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1785111044;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1313960293 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 120
    stack[sp++].i = 120;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1482748887;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1313960293 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 88
    stack[sp++].i = 88;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1785111044;
    L1482748887:
    //  line no 765 , L1482748887 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp++].i = local[1].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaString.scanlong(III)D
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_scanlong__III_D(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 2].d;
    L1785111044:
    //  line no 766 , L1785111044 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaString.scanlong(III)D
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_scanlong__III_D(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[3].d = stack[sp].d;
    ; 
    //  line no 767 , L494894055 , bytecode index = 
    stack[sp].d = local[3].d;
    sp += 2;
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
    if(stack[--sp].i  == 0) goto L1123226989;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaString.scandouble(II)D
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_scandouble__II_D(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L500885941;
    L1123226989:
    stack[sp].d = local[3].d;
    sp += 2;
    L500885941:
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_scannumber___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaString_scannumber___D(runtime, ins);
}


// locals: 4
// stack: 4
// args: 1
f64 func_org_luaj_vm2_LuaString_scannumber__I_D(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1143, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 776 , L616412281 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 776;
    stack[sp++].i = local[1].i;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L2118096382;
    stack[sp++].i = local[1].i;
    //  bipush 36
    stack[sp++].i = 36;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L878861517;
    L2118096382:
    //  line no 777 , L2118096382 , bytecode index = 
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L878861517:
    //  line no 778 , L878861517 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L1705665942:
    //  line no 779 , L1705665942 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1731763384;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L1705665942 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1731763384;
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1705665942;
    L1731763384:
    //  line no 780 , L1731763384 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1100619942;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1731763384 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1100619942;
    // iinc slot 3 value -1
    local[3].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1731763384;
    L1100619942:
    //  line no 781 , L1100619942 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L87242619;
    ; 
    //  line no 782 , L864248990 , bytecode index = 
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L87242619:
    //  line no 783 , L87242619 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokespecial org/luaj/vm2/LuaString.scanlong(III)D
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].d = func_org_luaj_vm2_LuaString_scanlong__III_D(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_scannumber__I_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaString_scannumber__I_D(runtime, ins);
}


// locals: 9
// stack: 4
// args: 3
f64 func_org_luaj_vm2_LuaString_scanlong__III_D(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1144, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 795 , L15892131 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 795;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    sp -= 2;
    local[4].j = stack[sp].j;
    ; 
    //  line no 796 , L484841769 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload s8  ,  L484841769 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 45
    stack[sp++].i = 45;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L879311295;
    // iconst_1
    stack[sp++].i = 1;
    goto L1274247563;
    L879311295:
    // iconst_0
    stack[sp++].i = 0;
    L1274247563:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 797 , L1483145520 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  == 0) goto L1961129028;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    goto L163385254;
    L1961129028:
    stack[sp++].i = local[2].i;
    L163385254:
    local[7].i = stack[--sp].i;
    L1506938939:
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L970781872;
    ; 
    //  line no 798 , L1850597787 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload s8  ,  L1850597787 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[1].i;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L258737099;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload s8  ,  L1850597787 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1190566357;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload s8  ,  L1850597787 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 57
    stack[sp++].i = 57;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1190566357;
    L258737099:
    //  bipush 48
    stack[sp++].i = 48;
    goto L407997647;
    L1190566357:
    //  line no 799 , L1190566357 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload s8  ,  L1190566357 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 65
    stack[sp++].i = 65;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L428996455;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload s8  ,  L1190566357 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 90
    stack[sp++].i = 90;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L428996455;
    //  bipush 55
    stack[sp++].i = 55;
    goto L407997647;
    L428996455:
    //  bipush 87
    stack[sp++].i = 87;
    L407997647:
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 800 , L1988939205 , bytecode index = 
    stack[sp++].i = local[8].i;
    if(stack[--sp].i  < 0) goto L80141040;
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L275056979;
    L80141040:
    //  line no 801 , L80141040 , bytecode index = 
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L275056979:
    //  line no 802 , L275056979 , bytecode index = 
    stack[sp].j = local[4].j;
    sp += 2;
    stack[sp++].i = local[1].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
    stack[sp++].i = local[8].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[4].j = stack[sp].j;
    ; 
    //  line no 803 , L106557175 , bytecode index = 
    stack[sp].j = local[4].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L371976476;
    ; 
    //  line no 804 , L612937843 , bytecode index = 
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L371976476:
    //  line no 797 , L371976476 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1506938939;
    L970781872:
    //  line no 806 , L970781872 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  == 0) goto L480184864;
    stack[sp].j = local[4].j;
    sp += 2;
    stack[sp - 2].j = -stack[sp - 2].j; 
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    goto L1433956626;
    L480184864:
    stack[sp].j = local[4].j;
    sp += 2;
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    L1433956626:
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_scanlong__III_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaString_scanlong__III_D(runtime, ins, para[0].i, para[1].i);
}

ExceptionItem arr_extable_func_org_luaj_vm2_LuaString_scandouble__II_D[] = {
    { , , 141}
};
ExceptionTable extable_func_org_luaj_vm2_LuaString_scandouble__II_D = {1, arr_extable_func_org_luaj_vm2_LuaString_scandouble__II_D};

// locals: 5
// stack: 4
// args: 2
f64 func_org_luaj_vm2_LuaString_scandouble__II_D(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1145, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    // try catch :L2109219177 L429058804 L259319861 (
    ; 
    //  line no 817 , L52913970 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 817;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    //  bipush 64
    stack[sp++].i = 64;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1059634518;
    stack[sp++].i = local[1].i;
    //  bipush 64
    stack[sp++].i = 64;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L1059634518:
    //  line no 818 , L1059634518 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[3].i = stack[--sp].i;
    L836969741:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L436094532;
    ; 
    //  line no 819 , L567852222 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload s8  ,  L567852222 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    switch(stack[--sp].i){
        case 43:
            goto L1938025186;
        case 44:
            goto L1541433310;
        case 45:
            goto L1938025186;
        case 46:
            goto L1938025186;
        case 47:
            goto L1541433310;
        case 48:
            goto L1938025186;
        case 49:
            goto L1938025186;
        case 50:
            goto L1938025186;
        case 51:
            goto L1938025186;
        case 52:
            goto L1938025186;
        case 53:
            goto L1938025186;
        case 54:
            goto L1938025186;
        case 55:
            goto L1938025186;
        case 56:
            goto L1938025186;
        case 57:
            goto L1938025186;
        case 58:
            goto L1541433310;
        case 59:
            goto L1541433310;
        case 60:
            goto L1541433310;
        case 61:
            goto L1541433310;
        case 62:
            goto L1541433310;
        case 63:
            goto L1541433310;
        case 64:
            goto L1541433310;
        case 65:
            goto L1541433310;
        case 66:
            goto L1541433310;
        case 67:
            goto L1541433310;
        case 68:
            goto L1541433310;
        case 69:
            goto L1938025186;
        case 70:
            goto L1541433310;
        case 71:
            goto L1541433310;
        case 72:
            goto L1541433310;
        case 73:
            goto L1541433310;
        case 74:
            goto L1541433310;
        case 75:
            goto L1541433310;
        case 76:
            goto L1541433310;
        case 77:
            goto L1541433310;
        case 78:
            goto L1541433310;
        case 79:
            goto L1541433310;
        case 80:
            goto L1541433310;
        case 81:
            goto L1541433310;
        case 82:
            goto L1541433310;
        case 83:
            goto L1541433310;
        case 84:
            goto L1541433310;
        case 85:
            goto L1541433310;
        case 86:
            goto L1541433310;
        case 87:
            goto L1541433310;
        case 88:
            goto L1541433310;
        case 89:
            goto L1541433310;
        case 90:
            goto L1541433310;
        case 91:
            goto L1541433310;
        case 92:
            goto L1541433310;
        case 93:
            goto L1541433310;
        case 94:
            goto L1541433310;
        case 95:
            goto L1541433310;
        case 96:
            goto L1541433310;
        case 97:
            goto L1541433310;
        case 98:
            goto L1541433310;
        case 99:
            goto L1541433310;
        case 100:
            goto L1541433310;
        case 101:
            goto L1938025186;
        default:
            goto L1541433310;
    }
    L1938025186:
    //  line no 826 , L1938025186 , bytecode index = 
    goto L405036720;
    L1541433310:
    //  line no 828 , L1541433310 , bytecode index = 
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L405036720:
    //  line no 818 , L405036720 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L836969741;
    L436094532:
    //  line no 831 , L436094532 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 832 , L2088582214 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L620456576:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2109219177;
    ; 
    //  line no 833 , L1220759559 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    stack[sp++].i = local[4].i;
    // arrload s8  ,  L1220759559 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L1220759559 bc index = 
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
    //  line no 832 , L1923634801 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L620456576;
    L2109219177:
    __frame->bytecodeIndex = 
    //  line no 835 , L2109219177 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial java/lang/String.<init>([C)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3C_V(runtime, rstack[sp + 0].obj);
        sp += 0;
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
    L429058804:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 2].d;
    L259319861:
    //  line no 836 , L259319861 , bytecode index = 
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 837 , L1730337646 , bytecode index = 
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L259319861;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaString_scandouble__II_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaString_scandouble__II_D(runtime, ins, para[0].i);
}


// locals: 5
// stack: 3
// args: 1
void func_org_luaj_vm2_LuaString_printToStream__Ljava_io_PrintStream_2_V(JThreadRuntime *runtime, struct java_io_PrintStream* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1146, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 847 , L1256405521 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 847;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    local[3].i = stack[--sp].i;
    L188791662:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L61426020;
    ; 
    //  line no 848 , L1347016882 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L1347016882 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 849 , L1829460911 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokevirtual java/io/PrintStream.print(C)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 123, 9);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 847 , L1662912171 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L188791662;
    L61426020:
    //  line no 851 , L61426020 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaString_printToStream__Ljava_io_PrintStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaString_printToStream__Ljava_io_PrintStream_2_V(runtime, ins);
}


