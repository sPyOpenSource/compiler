// CLASS: org/luaj/vm2/LuaInteger extends org/luaj/vm2/LuaNumber
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LuaInteger_static {JArray * intValues_45;  };
struct org_luaj_vm2_LuaInteger_static static_var_org_luaj_vm2_LuaInteger = {NULL};


__refer arr_vmtable_org_luaj_vm2_LuaInteger_from_org_luaj_vm2_LuaInteger[] = {
    func_org_luaj_vm2_LuaInteger_isint___Z,  //0
    func_org_luaj_vm2_LuaInteger_isinttype___Z,  //1
    func_org_luaj_vm2_LuaInteger_islong___Z,  //2
    func_org_luaj_vm2_LuaInteger_tobyte___B,  //3
    func_org_luaj_vm2_LuaInteger_tochar___C,  //4
    func_org_luaj_vm2_LuaInteger_todouble___D,  //5
    func_org_luaj_vm2_LuaInteger_tofloat___F,  //6
    func_org_luaj_vm2_LuaInteger_toint___I,  //7
    func_org_luaj_vm2_LuaInteger_tolong___J,  //8
    func_org_luaj_vm2_LuaInteger_toshort___S,  //9
    func_org_luaj_vm2_LuaInteger_optdouble__D_D,  //10
    func_org_luaj_vm2_LuaInteger_optint__I_I,  //11
    func_org_luaj_vm2_LuaInteger_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //12
    func_org_luaj_vm2_LuaInteger_optlong__J_J,  //13
    func_org_luaj_vm2_LuaInteger_tojstring___Ljava_lang_String_2,  //14
    func_org_luaj_vm2_LuaInteger_strvalue___Lorg_luaj_vm2_LuaString_2,  //15
    func_org_luaj_vm2_LuaInteger_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //16
    func_org_luaj_vm2_LuaInteger_tostring___Lorg_luaj_vm2_LuaValue_2,  //17
    func_org_luaj_vm2_LuaInteger_optjstring__Ljava_lang_String_2_Ljava_lang_String_2,  //18
    func_org_luaj_vm2_LuaInteger_checkinteger___Lorg_luaj_vm2_LuaInteger_2,  //19
    func_org_luaj_vm2_LuaInteger_isstring___Z,  //20
    func_org_luaj_vm2_LuaInteger_hashCode___I,  //21
    func_org_luaj_vm2_LuaInteger_neg___Lorg_luaj_vm2_LuaValue_2,  //22
    func_org_luaj_vm2_LuaInteger_equals__Ljava_lang_Object_2_Z,  //23
    func_org_luaj_vm2_LuaInteger_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //24
    func_org_luaj_vm2_LuaInteger_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //25
    func_org_luaj_vm2_LuaInteger_raweq__Lorg_luaj_vm2_LuaValue_2_Z,  //26
    func_org_luaj_vm2_LuaInteger_raweq__D_Z,  //27
    func_org_luaj_vm2_LuaInteger_raweq__I_Z,  //28
    func_org_luaj_vm2_LuaInteger_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //29
    func_org_luaj_vm2_LuaInteger_add__D_Lorg_luaj_vm2_LuaValue_2,  //30
    func_org_luaj_vm2_LuaInteger_add__I_Lorg_luaj_vm2_LuaValue_2,  //31
    func_org_luaj_vm2_LuaInteger_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //32
    func_org_luaj_vm2_LuaInteger_sub__D_Lorg_luaj_vm2_LuaValue_2,  //33
    func_org_luaj_vm2_LuaInteger_sub__I_Lorg_luaj_vm2_LuaValue_2,  //34
    func_org_luaj_vm2_LuaInteger_subFrom__D_Lorg_luaj_vm2_LuaValue_2,  //35
    func_org_luaj_vm2_LuaInteger_subFrom__I_Lorg_luaj_vm2_LuaValue_2,  //36
    func_org_luaj_vm2_LuaInteger_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //37
    func_org_luaj_vm2_LuaInteger_mul__D_Lorg_luaj_vm2_LuaValue_2,  //38
    func_org_luaj_vm2_LuaInteger_mul__I_Lorg_luaj_vm2_LuaValue_2,  //39
    func_org_luaj_vm2_LuaInteger_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //40
    func_org_luaj_vm2_LuaInteger_pow__D_Lorg_luaj_vm2_LuaValue_2,  //41
    func_org_luaj_vm2_LuaInteger_pow__I_Lorg_luaj_vm2_LuaValue_2,  //42
    func_org_luaj_vm2_LuaInteger_powWith__D_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_LuaInteger_powWith__I_Lorg_luaj_vm2_LuaValue_2,  //44
    func_org_luaj_vm2_LuaInteger_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //45
    func_org_luaj_vm2_LuaInteger_div__D_Lorg_luaj_vm2_LuaValue_2,  //46
    func_org_luaj_vm2_LuaInteger_div__I_Lorg_luaj_vm2_LuaValue_2,  //47
    func_org_luaj_vm2_LuaInteger_divInto__D_Lorg_luaj_vm2_LuaValue_2,  //48
    func_org_luaj_vm2_LuaInteger_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //49
    func_org_luaj_vm2_LuaInteger_mod__D_Lorg_luaj_vm2_LuaValue_2,  //50
    func_org_luaj_vm2_LuaInteger_mod__I_Lorg_luaj_vm2_LuaValue_2,  //51
    func_org_luaj_vm2_LuaInteger_modFrom__D_Lorg_luaj_vm2_LuaValue_2,  //52
    func_org_luaj_vm2_LuaInteger_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //53
    func_org_luaj_vm2_LuaInteger_lt__D_Lorg_luaj_vm2_LuaValue_2,  //54
    func_org_luaj_vm2_LuaInteger_lt__I_Lorg_luaj_vm2_LuaValue_2,  //55
    func_org_luaj_vm2_LuaInteger_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //56
    func_org_luaj_vm2_LuaInteger_lt_1b__I_Z,  //57
    func_org_luaj_vm2_LuaInteger_lt_1b__D_Z,  //58
    func_org_luaj_vm2_LuaInteger_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //59
    func_org_luaj_vm2_LuaInteger_lteq__D_Lorg_luaj_vm2_LuaValue_2,  //60
    func_org_luaj_vm2_LuaInteger_lteq__I_Lorg_luaj_vm2_LuaValue_2,  //61
    func_org_luaj_vm2_LuaInteger_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //62
    func_org_luaj_vm2_LuaInteger_lteq_1b__I_Z,  //63
    func_org_luaj_vm2_LuaInteger_lteq_1b__D_Z,  //64
    func_org_luaj_vm2_LuaInteger_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //65
    func_org_luaj_vm2_LuaInteger_gt__D_Lorg_luaj_vm2_LuaValue_2,  //66
    func_org_luaj_vm2_LuaInteger_gt__I_Lorg_luaj_vm2_LuaValue_2,  //67
    func_org_luaj_vm2_LuaInteger_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //68
    func_org_luaj_vm2_LuaInteger_gt_1b__I_Z,  //69
    func_org_luaj_vm2_LuaInteger_gt_1b__D_Z,  //70
    func_org_luaj_vm2_LuaInteger_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //71
    func_org_luaj_vm2_LuaInteger_gteq__D_Lorg_luaj_vm2_LuaValue_2,  //72
    func_org_luaj_vm2_LuaInteger_gteq__I_Lorg_luaj_vm2_LuaValue_2,  //73
    func_org_luaj_vm2_LuaInteger_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //74
    func_org_luaj_vm2_LuaInteger_gteq_1b__I_Z,  //75
    func_org_luaj_vm2_LuaInteger_gteq_1b__D_Z,  //76
    func_org_luaj_vm2_LuaInteger_strcmp__Lorg_luaj_vm2_LuaString_2_I,  //77
    func_org_luaj_vm2_LuaInteger_checkint___I,  //78
    func_org_luaj_vm2_LuaInteger_checklong___J,  //79
    func_org_luaj_vm2_LuaInteger_checkdouble___D,  //80
    func_org_luaj_vm2_LuaInteger_checkjstring___Ljava_lang_String_2,  //81
    func_org_luaj_vm2_LuaInteger_checkstring___Lorg_luaj_vm2_LuaString_2  //82
};
__refer arr_vmtable_org_luaj_vm2_LuaInteger_from_org_luaj_vm2_LuaNumber[] = {
    func_org_luaj_vm2_LuaNumber_type___I,  //0
    func_org_luaj_vm2_LuaNumber_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaNumber_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //2
    func_org_luaj_vm2_LuaNumber_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2,  //3
    func_org_luaj_vm2_LuaNumber_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //4
    func_org_luaj_vm2_LuaNumber_tonumber___Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_LuaNumber_isnumber___Z,  //6
    func_org_luaj_vm2_LuaInteger_isstring___Z,  //7
    func_org_luaj_vm2_LuaNumber_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //8
    func_org_luaj_vm2_LuaNumber_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //9
    func_org_luaj_vm2_LuaNumber_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2,  //10
    func_org_luaj_vm2_LuaNumber_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2,  //11
    func_org_luaj_vm2_LuaNumber_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2  //12
};
__refer arr_vmtable_org_luaj_vm2_LuaInteger_from_org_luaj_vm2_LuaValue[] = {
    func_org_luaj_vm2_LuaNumber_type___I,  //0
    func_org_luaj_vm2_LuaNumber_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaValue_isboolean___Z,  //2
    func_org_luaj_vm2_LuaValue_isclosure___Z,  //3
    func_org_luaj_vm2_LuaValue_isfunction___Z,  //4
    func_org_luaj_vm2_LuaInteger_isint___Z,  //5
    func_org_luaj_vm2_LuaInteger_isinttype___Z,  //6
    func_org_luaj_vm2_LuaInteger_islong___Z,  //7
    func_org_luaj_vm2_LuaValue_isnil___Z,  //8
    func_org_luaj_vm2_LuaNumber_isnumber___Z,  //9
    func_org_luaj_vm2_LuaInteger_isstring___Z,  //10
    func_org_luaj_vm2_LuaValue_isthread___Z,  //11
    func_org_luaj_vm2_LuaValue_istable___Z,  //12
    func_org_luaj_vm2_LuaValue_isuserdata___Z,  //13
    func_org_luaj_vm2_LuaValue_isuserdata__Ljava_lang_Class_2_Z,  //14
    func_org_luaj_vm2_LuaValue_toboolean___Z,  //15
    func_org_luaj_vm2_LuaInteger_tobyte___B,  //16
    func_org_luaj_vm2_LuaInteger_tochar___C,  //17
    func_org_luaj_vm2_LuaInteger_todouble___D,  //18
    func_org_luaj_vm2_LuaInteger_tofloat___F,  //19
    func_org_luaj_vm2_LuaInteger_toint___I,  //20
    func_org_luaj_vm2_LuaInteger_tolong___J,  //21
    func_org_luaj_vm2_LuaInteger_toshort___S,  //22
    func_org_luaj_vm2_LuaInteger_tojstring___Ljava_lang_String_2,  //23
    func_org_luaj_vm2_LuaValue_touserdata___Ljava_lang_Object_2,  //24
    func_org_luaj_vm2_LuaValue_touserdata__Ljava_lang_Class_2_Ljava_lang_Object_2,  //25
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //26
    func_org_luaj_vm2_LuaNumber_tonumber___Lorg_luaj_vm2_LuaValue_2,  //27
    func_org_luaj_vm2_LuaInteger_tostring___Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_LuaValue_optboolean__Z_Z,  //29
    func_org_luaj_vm2_LuaValue_optclosure__Lorg_luaj_vm2_LuaClosure_2_Lorg_luaj_vm2_LuaClosure_2,  //30
    func_org_luaj_vm2_LuaInteger_optdouble__D_D,  //31
    func_org_luaj_vm2_LuaValue_optfunction__Lorg_luaj_vm2_LuaFunction_2_Lorg_luaj_vm2_LuaFunction_2,  //32
    func_org_luaj_vm2_LuaInteger_optint__I_I,  //33
    func_org_luaj_vm2_LuaInteger_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //34
    func_org_luaj_vm2_LuaInteger_optlong__J_J,  //35
    func_org_luaj_vm2_LuaNumber_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //36
    func_org_luaj_vm2_LuaInteger_optjstring__Ljava_lang_String_2_Ljava_lang_String_2,  //37
    func_org_luaj_vm2_LuaInteger_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //38
    func_org_luaj_vm2_LuaValue_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2,  //39
    func_org_luaj_vm2_LuaValue_optthread__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_LuaThread_2,  //40
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Object_2_Ljava_lang_Object_2,  //41
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Class_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //42
    func_org_luaj_vm2_LuaValue_optvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_LuaValue_checkboolean___Z,  //44
    func_org_luaj_vm2_LuaValue_checkclosure___Lorg_luaj_vm2_LuaClosure_2,  //45
    func_org_luaj_vm2_LuaInteger_checkdouble___D,  //46
    func_org_luaj_vm2_LuaValue_checkfunction___Lorg_luaj_vm2_LuaFunction_2,  //47
    func_org_luaj_vm2_LuaValue_checkglobals___Lorg_luaj_vm2_Globals_2,  //48
    func_org_luaj_vm2_LuaInteger_checkint___I,  //49
    func_org_luaj_vm2_LuaInteger_checkinteger___Lorg_luaj_vm2_LuaInteger_2,  //50
    func_org_luaj_vm2_LuaInteger_checklong___J,  //51
    func_org_luaj_vm2_LuaNumber_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //52
    func_org_luaj_vm2_LuaNumber_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2,  //53
    func_org_luaj_vm2_LuaInteger_checkjstring___Ljava_lang_String_2,  //54
    func_org_luaj_vm2_LuaInteger_checkstring___Lorg_luaj_vm2_LuaString_2,  //55
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
    func_org_luaj_vm2_LuaNumber_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //99
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
    func_org_luaj_vm2_LuaInteger_neg___Lorg_luaj_vm2_LuaValue_2,  //126
    func_org_luaj_vm2_LuaValue_len___Lorg_luaj_vm2_LuaValue_2,  //127
    func_org_luaj_vm2_LuaValue_length___I,  //128
    func_org_luaj_vm2_LuaValue_rawlen___I,  //129
    func_org_luaj_vm2_LuaInteger_equals__Ljava_lang_Object_2_Z,  //130
    func_org_luaj_vm2_LuaInteger_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //131
    func_org_luaj_vm2_LuaInteger_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //132
    func_org_luaj_vm2_LuaValue_neq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //133
    func_org_luaj_vm2_LuaValue_neq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //134
    func_org_luaj_vm2_LuaInteger_raweq__Lorg_luaj_vm2_LuaValue_2_Z,  //135
    func_org_luaj_vm2_LuaValue_raweq__Lorg_luaj_vm2_LuaUserdata_2_Z,  //136
    func_org_luaj_vm2_LuaValue_raweq__Lorg_luaj_vm2_LuaString_2_Z,  //137
    func_org_luaj_vm2_LuaInteger_raweq__D_Z,  //138
    func_org_luaj_vm2_LuaInteger_raweq__I_Z,  //139
    func_org_luaj_vm2_LuaInteger_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //140
    func_org_luaj_vm2_LuaInteger_add__D_Lorg_luaj_vm2_LuaValue_2,  //141
    func_org_luaj_vm2_LuaInteger_add__I_Lorg_luaj_vm2_LuaValue_2,  //142
    func_org_luaj_vm2_LuaInteger_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //143
    func_org_luaj_vm2_LuaInteger_sub__D_Lorg_luaj_vm2_LuaValue_2,  //144
    func_org_luaj_vm2_LuaInteger_sub__I_Lorg_luaj_vm2_LuaValue_2,  //145
    func_org_luaj_vm2_LuaInteger_subFrom__D_Lorg_luaj_vm2_LuaValue_2,  //146
    func_org_luaj_vm2_LuaInteger_subFrom__I_Lorg_luaj_vm2_LuaValue_2,  //147
    func_org_luaj_vm2_LuaInteger_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //148
    func_org_luaj_vm2_LuaInteger_mul__D_Lorg_luaj_vm2_LuaValue_2,  //149
    func_org_luaj_vm2_LuaInteger_mul__I_Lorg_luaj_vm2_LuaValue_2,  //150
    func_org_luaj_vm2_LuaInteger_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //151
    func_org_luaj_vm2_LuaInteger_pow__D_Lorg_luaj_vm2_LuaValue_2,  //152
    func_org_luaj_vm2_LuaInteger_pow__I_Lorg_luaj_vm2_LuaValue_2,  //153
    func_org_luaj_vm2_LuaInteger_powWith__D_Lorg_luaj_vm2_LuaValue_2,  //154
    func_org_luaj_vm2_LuaInteger_powWith__I_Lorg_luaj_vm2_LuaValue_2,  //155
    func_org_luaj_vm2_LuaInteger_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //156
    func_org_luaj_vm2_LuaInteger_div__D_Lorg_luaj_vm2_LuaValue_2,  //157
    func_org_luaj_vm2_LuaInteger_div__I_Lorg_luaj_vm2_LuaValue_2,  //158
    func_org_luaj_vm2_LuaInteger_divInto__D_Lorg_luaj_vm2_LuaValue_2,  //159
    func_org_luaj_vm2_LuaInteger_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //160
    func_org_luaj_vm2_LuaInteger_mod__D_Lorg_luaj_vm2_LuaValue_2,  //161
    func_org_luaj_vm2_LuaInteger_mod__I_Lorg_luaj_vm2_LuaValue_2,  //162
    func_org_luaj_vm2_LuaInteger_modFrom__D_Lorg_luaj_vm2_LuaValue_2,  //163
    func_org_luaj_vm2_LuaValue_arithmt__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //164
    func_org_luaj_vm2_LuaValue_arithmtwith__Lorg_luaj_vm2_LuaValue_2D_Lorg_luaj_vm2_LuaValue_2,  //165
    func_org_luaj_vm2_LuaInteger_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //166
    func_org_luaj_vm2_LuaInteger_lt__D_Lorg_luaj_vm2_LuaValue_2,  //167
    func_org_luaj_vm2_LuaInteger_lt__I_Lorg_luaj_vm2_LuaValue_2,  //168
    func_org_luaj_vm2_LuaInteger_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //169
    func_org_luaj_vm2_LuaInteger_lt_1b__I_Z,  //170
    func_org_luaj_vm2_LuaInteger_lt_1b__D_Z,  //171
    func_org_luaj_vm2_LuaInteger_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //172
    func_org_luaj_vm2_LuaInteger_lteq__D_Lorg_luaj_vm2_LuaValue_2,  //173
    func_org_luaj_vm2_LuaInteger_lteq__I_Lorg_luaj_vm2_LuaValue_2,  //174
    func_org_luaj_vm2_LuaInteger_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //175
    func_org_luaj_vm2_LuaInteger_lteq_1b__I_Z,  //176
    func_org_luaj_vm2_LuaInteger_lteq_1b__D_Z,  //177
    func_org_luaj_vm2_LuaInteger_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //178
    func_org_luaj_vm2_LuaInteger_gt__D_Lorg_luaj_vm2_LuaValue_2,  //179
    func_org_luaj_vm2_LuaInteger_gt__I_Lorg_luaj_vm2_LuaValue_2,  //180
    func_org_luaj_vm2_LuaInteger_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //181
    func_org_luaj_vm2_LuaInteger_gt_1b__I_Z,  //182
    func_org_luaj_vm2_LuaInteger_gt_1b__D_Z,  //183
    func_org_luaj_vm2_LuaInteger_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //184
    func_org_luaj_vm2_LuaInteger_gteq__D_Lorg_luaj_vm2_LuaValue_2,  //185
    func_org_luaj_vm2_LuaInteger_gteq__I_Lorg_luaj_vm2_LuaValue_2,  //186
    func_org_luaj_vm2_LuaInteger_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //187
    func_org_luaj_vm2_LuaInteger_gteq_1b__I_Z,  //188
    func_org_luaj_vm2_LuaInteger_gteq_1b__D_Z,  //189
    func_org_luaj_vm2_LuaValue_comparemt__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //190
    func_org_luaj_vm2_LuaValue_strcmp__Lorg_luaj_vm2_LuaValue_2_I,  //191
    func_org_luaj_vm2_LuaInteger_strcmp__Lorg_luaj_vm2_LuaString_2_I,  //192
    func_org_luaj_vm2_LuaNumber_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //193
    func_org_luaj_vm2_LuaValue_concatTo__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //194
    func_org_luaj_vm2_LuaNumber_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2,  //195
    func_org_luaj_vm2_LuaNumber_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2,  //196
    func_org_luaj_vm2_LuaValue_buffer___Lorg_luaj_vm2_Buffer_2,  //197
    func_org_luaj_vm2_LuaNumber_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2,  //198
    func_org_luaj_vm2_LuaValue_concatmt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //199
    func_org_luaj_vm2_LuaValue_and__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //200
    func_org_luaj_vm2_LuaValue_or__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //201
    func_org_luaj_vm2_LuaValue_testfor_1b__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Z,  //202
    func_org_luaj_vm2_LuaInteger_strvalue___Lorg_luaj_vm2_LuaString_2,  //203
    func_org_luaj_vm2_LuaValue_strongvalue___Lorg_luaj_vm2_LuaValue_2,  //204
    func_org_luaj_vm2_LuaValue_metatag__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //205
    func_org_luaj_vm2_LuaValue_checkmetatag__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //206
    func_org_luaj_vm2_LuaValue_onInvoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //207
    func_org_luaj_vm2_LuaValue_initupvalue1__Lorg_luaj_vm2_LuaValue_2_V,  //208
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2  //209
};
__refer arr_vmtable_org_luaj_vm2_LuaInteger_from_org_luaj_vm2_Varargs[] = {
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
    func_org_luaj_vm2_LuaInteger_tojstring___Ljava_lang_String_2,  //58
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //59
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2,  //60
    func_org_luaj_vm2_Varargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V,  //61
    func_org_luaj_vm2_Varargs_dealias___Lorg_luaj_vm2_Varargs_2  //62
};
__refer arr_vmtable_org_luaj_vm2_LuaInteger_from_java_lang_Object[] = {
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_org_luaj_vm2_LuaInteger_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_org_luaj_vm2_LuaInteger_hashCode___I  //9
};
VMTable vmtable_org_luaj_vm2_LuaInteger[] = {
    {83, 83, arr_vmtable_org_luaj_vm2_LuaInteger_from_org_luaj_vm2_LuaInteger}, //0
    {84, 13, arr_vmtable_org_luaj_vm2_LuaInteger_from_org_luaj_vm2_LuaNumber}, //1
    {1, 210, arr_vmtable_org_luaj_vm2_LuaInteger_from_org_luaj_vm2_LuaValue}, //2
    {2, 63, arr_vmtable_org_luaj_vm2_LuaInteger_from_org_luaj_vm2_Varargs}, //3
    {5, 10, arr_vmtable_org_luaj_vm2_LuaInteger_from_java_lang_Object}, //4
};



// locals: 1
// stack: 3
// args: 2
struct org_luaj_vm2_LuaInteger* func_org_luaj_vm2_LuaInteger_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaInteger* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 426, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 52 , L1077199500 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 52;
    stack[sp++].i = local[0].i;
    //  sipush 255
    stack[sp++].i = 255;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L240166646;
    stack[sp++].i = local[0].i;
    //  sipush -256
    stack[sp++].i = -256;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L240166646;
    // getstatic org/luaj/vm2/LuaInteger intValues [Lorg/luaj/vm2/LuaInteger;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaInteger.intValues_45;
    sp += 1;
    stack[sp++].i = local[0].i;
    //  sipush 256
    stack[sp++].i = 256;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1077199500 bc index = 
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
    goto L351028485;
    L240166646:
    // new org/luaj/vm2/LuaInteger
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 83);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[0].i;
    // invokespecial org/luaj/vm2/LuaInteger.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaInteger__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L351028485:
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

void bridge_org_luaj_vm2_LuaInteger_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, para[0].obj, para[1].i);
}


// locals: 3
// stack: 4
// args: 2
struct org_luaj_vm2_LuaNumber* func_org_luaj_vm2_LuaInteger_valueOf__J_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaInteger* p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 427, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 63 , L898406901 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 63;
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 64 , L1054932644 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp++].i = local[2].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1213349904;
    stack[sp++].i = local[2].i;
    //  sipush 255
    stack[sp++].i = 255;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1259769769;
    stack[sp++].i = local[2].i;
    //  sipush -256
    stack[sp++].i = -256;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1259769769;
    // getstatic org/luaj/vm2/LuaInteger intValues [Lorg/luaj/vm2/LuaInteger;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaInteger.intValues_45;
    sp += 1;
    stack[sp++].i = local[2].i;
    //  sipush 256
    stack[sp++].i = 256;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1054932644 bc index = 
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
    goto L444920847;
    L1259769769:
    //  line no 65 , L1259769769 , bytecode index = 
    // new org/luaj/vm2/LuaInteger
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 83);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/LuaInteger.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaInteger__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L444920847;
    L1213349904:
    //  line no 66 , L1213349904 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    // invokestatic org/luaj/vm2/LuaDouble.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L444920847:
    //  line no 64 , L444920847 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaInteger_valueOf__J_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_valueOf__J_Lorg_luaj_vm2_LuaNumber_2(runtime, para[0].obj, para[1].j);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_LuaInteger__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 428, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 76 , L2032188048 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 76;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaNumber.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaNumber__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 77 , L112466394 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield org/luaj/vm2/LuaInteger v I
    sp -= 2;
    ((struct org_luaj_vm2_LuaInteger*)rstack[sp + 0].obj)->v_46 = stack[sp + 1].i;
    ; 
    //  line no 78 , L992846223 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaInteger__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaInteger__init___I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaInteger_isint___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 429, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 80 , L630074945 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 80;
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

void bridge_org_luaj_vm2_LuaInteger_isint___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_isint___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaInteger_isinttype___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 430, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 81 , L1436901839 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
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

void bridge_org_luaj_vm2_LuaInteger_isinttype___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_isinttype___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaInteger_islong___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 431, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 82 , L1866161430 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 82;
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

void bridge_org_luaj_vm2_LuaInteger_islong___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_islong___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaInteger_tobyte___B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 432, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 84 , L107241811 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 84;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaInteger_tobyte___B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_tobyte___B(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
u16 func_org_luaj_vm2_LuaInteger_tochar___C(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 433, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 85 , L339099861 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 85;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaInteger_tochar___C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_tochar___C(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
f64 func_org_luaj_vm2_LuaInteger_todouble___D(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 434, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 86 , L1197365356 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 86;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_todouble___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaInteger_todouble___D(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
f32 func_org_luaj_vm2_LuaInteger_tofloat___F(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 435, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 87 , L1131040331 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 87;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
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

void bridge_org_luaj_vm2_LuaInteger_tofloat___F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_org_luaj_vm2_LuaInteger_tofloat___F(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaInteger_toint___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 88 , L973576304 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_org_luaj_vm2_LuaInteger_toint___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_toint___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s64 func_org_luaj_vm2_LuaInteger_tolong___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 437, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 89 , L715521683 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 89;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_tolong___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaInteger_tolong___J(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s16 func_org_luaj_vm2_LuaInteger_toshort___S(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 438, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 90 , L1524126153 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 90;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaInteger_toshort___S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_toshort___S(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
f64 func_org_luaj_vm2_LuaInteger_optdouble__D_D(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 439, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 92 , L63001505 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 92;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_optdouble__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaInteger_optdouble__D_D(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
s32 func_org_luaj_vm2_LuaInteger_optint__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    local[0].i = p0;
    ; 
    //  line no 93 , L330084561 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_org_luaj_vm2_LuaInteger_optint__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_optint__I_I(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaInteger* func_org_luaj_vm2_LuaInteger_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaInteger* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 441, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 94 , L937773018 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 94;
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

void bridge_org_luaj_vm2_LuaInteger_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s64 func_org_luaj_vm2_LuaInteger_optlong__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 442, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 95 , L1572098393 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 95;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_optlong__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaInteger_optlong__J_J(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_LuaInteger_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 443, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 98 , L2084663827 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 98;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_org_luaj_vm2_LuaInteger_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_tojstring___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaInteger_strvalue___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 444, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 102 , L1790421142 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 102;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_LuaInteger_strvalue___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_strvalue___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaInteger_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 445, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 106 , L1172131546 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 106;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_LuaInteger_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_tostring___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 446, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 110 , L927327686 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 110;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_LuaInteger_tostring___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_tostring___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct java_lang_String* func_org_luaj_vm2_LuaInteger_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 447, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 114 , L1908981452 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 114;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_org_luaj_vm2_LuaInteger_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaInteger* func_org_luaj_vm2_LuaInteger_checkinteger___Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 448, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 118 , L27319466 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 118;
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

void bridge_org_luaj_vm2_LuaInteger_checkinteger___Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_checkinteger___Lorg_luaj_vm2_LuaInteger_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaInteger_isstring___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 449, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 122 , L266272063 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 122;
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

void bridge_org_luaj_vm2_LuaInteger_isstring___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_isstring___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaInteger_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 126 , L172032696 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_org_luaj_vm2_LuaInteger_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_hashCode___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 2
s32 func_org_luaj_vm2_LuaInteger_hashCode__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaInteger* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 451, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 130 , L1771243284 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 130;
    stack[sp++].i = local[0].i;
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

void bridge_org_luaj_vm2_LuaInteger_hashCode__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_hashCode__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_neg___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 452, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 134 , L2013559698 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 134;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 2].j = -stack[sp - 2].j; 
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(J)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__J_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_org_luaj_vm2_LuaInteger_neg___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_neg___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 453, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 137 , L2043318969 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 137;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaInteger
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 445);
    if(stack[--sp].i  == 0) goto L341878976;
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast org/luaj/vm2/LuaInteger
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 445);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1331923253;
    // iconst_1
    stack[sp++].i = 1;
    goto L1132967838;
    L1331923253:
    // iconst_0
    stack[sp++].i = 0;
    goto L1132967838;
    L341878976:
    // iconst_0
    stack[sp++].i = 0;
    L1132967838:
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

void bridge_org_luaj_vm2_LuaInteger_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 454, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 140 , L2143431083 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 140;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 139);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L750468423;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1384010761;
    L750468423:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1384010761:
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

void bridge_org_luaj_vm2_LuaInteger_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 455, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 141 , L2147046752 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 141;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 139);
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

void bridge_org_luaj_vm2_LuaInteger_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_raweq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 456, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 144 , L715378067 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 144;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 139);
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

void bridge_org_luaj_vm2_LuaInteger_raweq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_raweq__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaInteger_raweq__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 457, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 145 , L1262773598 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 145;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  != 0) goto L688726285;
    // iconst_1
    stack[sp++].i = 1;
    goto L494317290;
    L688726285:
    // iconst_0
    stack[sp++].i = 0;
    L494317290:
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

void bridge_org_luaj_vm2_LuaInteger_raweq__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_raweq__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_raweq__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 458, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 146 , L282821294 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 146;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1344199921;
    // iconst_1
    stack[sp++].i = 1;
    goto L2025269734;
    L1344199921:
    // iconst_0
    stack[sp++].i = 0;
    L2025269734:
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

void bridge_org_luaj_vm2_LuaInteger_raweq__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_raweq__I_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 459, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 149 , L667447085 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 149;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.add(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 142);
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

void bridge_org_luaj_vm2_LuaInteger_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_add__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 460, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 150 , L1076770748 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 150;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d + stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaDouble.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_org_luaj_vm2_LuaInteger_add__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_add__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_add__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 461, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 151 , L502800944 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 151;
    stack[sp++].i = local[1].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(J)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__J_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_org_luaj_vm2_LuaInteger_add__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_add__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 462, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 152 , L331418503 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 152;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.subFrom(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 147);
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

void bridge_org_luaj_vm2_LuaInteger_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_sub__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 463, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 153 , L1519736165 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 153;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp].d = local[1].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d - stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaDouble.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_org_luaj_vm2_LuaInteger_sub__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_sub__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_sub__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 464, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 154 , L2039810346 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 154;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaDouble.valueOf(I)Lorg/luaj/vm2/LuaInteger;
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

void bridge_org_luaj_vm2_LuaInteger_sub__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_sub__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_subFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 465, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 155 , L260840925 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 155;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d - stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaDouble.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_org_luaj_vm2_LuaInteger_subFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_subFrom__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_subFrom__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 466, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 156 , L557023567 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 156;
    stack[sp++].i = local[1].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(J)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__J_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_org_luaj_vm2_LuaInteger_subFrom__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_subFrom__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 467, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 157 , L597190999 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 157;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.mul(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 150);
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

void bridge_org_luaj_vm2_LuaInteger_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_mul__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 468, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 158 , L510854293 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 158;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaDouble.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaDouble_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_org_luaj_vm2_LuaInteger_mul__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_mul__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_mul__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 469, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 159 , L487075464 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 159;
    stack[sp++].i = local[1].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(J)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__J_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_org_luaj_vm2_LuaInteger_mul__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_mul__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 470, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 160 , L112302969 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 160;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.powWith(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 155);
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

void bridge_org_luaj_vm2_LuaInteger_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_pow__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 471, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 161 , L1989335500 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 161;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_pow__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_pow__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_pow__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 472, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 162 , L2131952342 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 162;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_pow__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_pow__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_powWith__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 473, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 163 , L592617454 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 163;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaInteger_powWith__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_powWith__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_powWith__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 474, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 164 , L671467883 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 164;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaInteger_powWith__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_powWith__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 475, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 165 , L802600647 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 165;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_div__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 476, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 166 , L1571967156 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 166;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_div__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_div__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_div__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 477, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 167 , L952486988 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 167;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_div__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_div__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_divInto__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 478, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 168 , L2028555727 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 168;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaInteger_divInto__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_divInto__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 479, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 169 , L898557489 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 169;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_mod__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 480, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 170 , L1014166943 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 170;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_mod__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_mod__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_mod__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 481, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 171 , L572593338 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 171;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_mod__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_mod__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_modFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 482, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 172 , L1024597427 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 172;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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

void bridge_org_luaj_vm2_LuaInteger_modFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_modFrom__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 483, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 175 , L296347592 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 175;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L956420404;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.gt_b(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 182);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L349420578;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L315932542;
    L349420578:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L315932542;
    L956420404:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaNumber.lt(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
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
    L315932542:
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

void bridge_org_luaj_vm2_LuaInteger_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_lt__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 484, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 176 , L2065857933 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 176;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  >= 0) goto L1914301543;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1157726741;
    L1914301543:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1157726741:
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

void bridge_org_luaj_vm2_LuaInteger_lt__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_lt__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_lt__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 485, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 177 , L225472281 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 177;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L817348612;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L2045766957;
    L817348612:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L2045766957:
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

void bridge_org_luaj_vm2_LuaInteger_lt__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_lt__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 486, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 178 , L665726928 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 178;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L689401025;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.gt_b(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 182);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L790067787;
    L689401025:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaNumber.lt_b(Lorg/luaj/vm2/LuaValue;)Z
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
    L790067787:
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

void bridge_org_luaj_vm2_LuaInteger_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_lt_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 487, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 179 , L343856911 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 179;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L102617125;
    // iconst_1
    stack[sp++].i = 1;
    goto L306980751;
    L102617125:
    // iconst_0
    stack[sp++].i = 0;
    L306980751:
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

void bridge_org_luaj_vm2_LuaInteger_lt_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_lt_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaInteger_lt_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 488, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 180 , L1997963191 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 180;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  >= 0) goto L534906248;
    // iconst_1
    stack[sp++].i = 1;
    goto L1826699684;
    L534906248:
    // iconst_0
    stack[sp++].i = 0;
    L1826699684:
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

void bridge_org_luaj_vm2_LuaInteger_lt_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_lt_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 489, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 181 , L769429195 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 181;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L580718781;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.gteq_b(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 188);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1196695891;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L867148091;
    L1196695891:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L867148091;
    L580718781:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaNumber.lteq(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
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
    L867148091:
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

void bridge_org_luaj_vm2_LuaInteger_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_lteq__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 490, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 182 , L815674463 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 182;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  > 0) goto L1453774246;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L416153648;
    L1453774246:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L416153648:
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

void bridge_org_luaj_vm2_LuaInteger_lteq__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_lteq__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_lteq__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 491, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 183 , L1169794610 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 183;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L634540230;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1307904972;
    L634540230:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1307904972:
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

void bridge_org_luaj_vm2_LuaInteger_lteq__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_lteq__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 492, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 184 , L1671846437 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 184;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L1422222071;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.gteq_b(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 188);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L831236296;
    L1422222071:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaNumber.lteq_b(Lorg/luaj/vm2/LuaValue;)Z
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
    L831236296:
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

void bridge_org_luaj_vm2_LuaInteger_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_lteq_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 493, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 185 , L1016925085 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 185;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1127224355;
    // iconst_1
    stack[sp++].i = 1;
    goto L789653861;
    L1127224355:
    // iconst_0
    stack[sp++].i = 0;
    L789653861:
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

void bridge_org_luaj_vm2_LuaInteger_lteq_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_lteq_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaInteger_lteq_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 494, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 186 , L1318180415 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 186;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  > 0) goto L222511810;
    // iconst_1
    stack[sp++].i = 1;
    goto L733943822;
    L222511810:
    // iconst_0
    stack[sp++].i = 0;
    L733943822:
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

void bridge_org_luaj_vm2_LuaInteger_lteq_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_lteq_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 495, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 187 , L1457410641 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 187;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L1100767002;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.lt_b(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 170);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L313540687;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1990098664;
    L313540687:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L1990098664;
    L1100767002:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaNumber.gt(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
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
    L1990098664:
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

void bridge_org_luaj_vm2_LuaInteger_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_gt__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 496, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 188 , L1907431275 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 188;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  <= 0) goto L1637061418;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1686100174;
    L1637061418:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1686100174:
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

void bridge_org_luaj_vm2_LuaInteger_gt__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_gt__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_gt__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 497, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 189 , L2024453272 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 189;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L98394724;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L536765369;
    L98394724:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L536765369:
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

void bridge_org_luaj_vm2_LuaInteger_gt__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_gt__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 498, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 190 , L2085002312 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 190;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L317071334;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.lt_b(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 170);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L2129221032;
    L317071334:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaNumber.gt_b(Lorg/luaj/vm2/LuaValue;)Z
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
    L2129221032:
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

void bridge_org_luaj_vm2_LuaInteger_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_gt_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 499, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 191 , L1224347463 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 191;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1791045777;
    // iconst_1
    stack[sp++].i = 1;
    goto L1580297332;
    L1791045777:
    // iconst_0
    stack[sp++].i = 0;
    L1580297332:
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

void bridge_org_luaj_vm2_LuaInteger_gt_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_gt_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaInteger_gt_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 500, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 192 , L1966250569 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 192;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  <= 0) goto L370440646;
    // iconst_1
    stack[sp++].i = 1;
    goto L1125381564;
    L370440646:
    // iconst_0
    stack[sp++].i = 0;
    L1125381564:
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

void bridge_org_luaj_vm2_LuaInteger_gt_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_gt_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 501, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 193 , L511717113 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 193;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L728739494;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.lteq_b(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 176);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2005733474;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L6750210;
    L2005733474:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L6750210;
    L728739494:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaNumber.gteq(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
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
    L6750210:
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

void bridge_org_luaj_vm2_LuaInteger_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_gteq__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 502, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 194 , L1237550792 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 194;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  < 0) goto L1448247698;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1846406218;
    L1448247698:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1846406218:
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

void bridge_org_luaj_vm2_LuaInteger_gteq__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_gteq__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaInteger_gteq__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 503, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 195 , L1556995360 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 195;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L517052730;
    // getstatic org/luaj/vm2/LuaInteger TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L524241174;
    L517052730:
    // getstatic org/luaj/vm2/LuaInteger FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L524241174:
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

void bridge_org_luaj_vm2_LuaInteger_gteq__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_gteq__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 504, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 196 , L1264213713 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 196;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L1506809545;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.lteq_b(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 176);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1019384604;
    L1506809545:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaNumber.gteq_b(Lorg/luaj/vm2/LuaValue;)Z
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
    L1019384604:
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

void bridge_org_luaj_vm2_LuaInteger_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_org_luaj_vm2_LuaInteger_gteq_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 505, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 197 , L963110412 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 197;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1624820151;
    // iconst_1
    stack[sp++].i = 1;
    goto L1219161283;
    L1624820151:
    // iconst_0
    stack[sp++].i = 0;
    L1219161283:
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

void bridge_org_luaj_vm2_LuaInteger_gteq_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_gteq_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaInteger_gteq_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 506, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 198 , L2061347276 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 198;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
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
    if(stack[--sp].i  < 0) goto L1559122513;
    // iconst_1
    stack[sp++].i = 1;
    goto L1128096251;
    L1559122513:
    // iconst_0
    stack[sp++].i = 0;
    L1128096251:
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

void bridge_org_luaj_vm2_LuaInteger_gteq_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_gteq_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_LuaInteger_strcmp__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 507, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 201 , L1259652483 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 201;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 809);
    // invokevirtual org/luaj/vm2/LuaInteger.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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

void bridge_org_luaj_vm2_LuaInteger_strcmp__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_strcmp__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaInteger_checkint___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 204 , L1306324352 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_org_luaj_vm2_LuaInteger_checkint___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaInteger_checkint___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s64 func_org_luaj_vm2_LuaInteger_checklong___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 509, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 207 , L2028017635 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 207;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_checklong___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaInteger_checklong___J(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
f64 func_org_luaj_vm2_LuaInteger_checkdouble___D(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 510, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 210 , L70807318 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 210;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
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

void bridge_org_luaj_vm2_LuaInteger_checkdouble___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaInteger_checkdouble___D(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_LuaInteger_checkjstring___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 511, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 213 , L1183888521 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 213;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokestatic java/lang/String.valueOf(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_org_luaj_vm2_LuaInteger_checkjstring___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_checkjstring___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaInteger_checkstring___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 512, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 216 , L1052245076 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 216;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaInteger v I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaInteger*)rstack[sp - 1].obj)->v_46;
    sp += 0;
    // invokestatic java/lang/String.valueOf(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_LuaInteger_checkstring___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaInteger_checkstring___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 1
// stack: 6
// args: 1
void func_org_luaj_vm2_LuaInteger__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaInteger* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 513, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 45 , L1008925772 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 45;
    //  sipush 512
    stack[sp++].i = 512;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaInteger; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(810));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/LuaInteger intValues [Lorg/luaj/vm2/LuaInteger;
    sp -= 1;
    static_var_org_luaj_vm2_LuaInteger.intValues_45 = rstack[sp].obj;
    ; 
    //  line no 47 , L1175259735 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[0].i = stack[--sp].i;
    L1205406622:
    stack[sp++].i = local[0].i;
    //  sipush 512
    stack[sp++].i = 512;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L293907205;
    ; 
    //  line no 48 , L988800485 , bytecode index = 
    // getstatic org/luaj/vm2/LuaInteger intValues [Lorg/luaj/vm2/LuaInteger;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaInteger.intValues_45;
    sp += 1;
    stack[sp++].i = local[0].i;
    // new org/luaj/vm2/LuaInteger
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 83);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[0].i;
    //  sipush 256
    stack[sp++].i = 256;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokespecial org/luaj/vm2/LuaInteger.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaInteger__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L988800485 bc index = 
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
    //  line no 47 , L345902941 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1205406622;
    L293907205:
    //  line no 49 , L293907205 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaInteger__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaInteger__clinit____V(runtime, para[0].obj);
}


