// CLASS: org/luaj/vm2/LuaDouble extends org/luaj/vm2/LuaNumber
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LuaDouble_static {struct org_luaj_vm2_LuaDouble* NAN_45; struct org_luaj_vm2_LuaDouble* POSINF_46; struct org_luaj_vm2_LuaDouble* NEGINF_47; struct java_lang_String* JSTR_1NAN_48; struct java_lang_String* JSTR_1POSINF_49; struct java_lang_String* JSTR_1NEGINF_50;  };
struct org_luaj_vm2_LuaDouble_static static_var_org_luaj_vm2_LuaDouble = {NULL, NULL, NULL, NULL, NULL, NULL};


__refer arr_vmtable_org_luaj_vm2_LuaDouble_from_org_luaj_vm2_LuaDouble[] = {
    func_org_luaj_vm2_LuaDouble_hashCode___I,  //0
    func_org_luaj_vm2_LuaDouble_islong___Z,  //1
    func_org_luaj_vm2_LuaDouble_tobyte___B,  //2
    func_org_luaj_vm2_LuaDouble_tochar___C,  //3
    func_org_luaj_vm2_LuaDouble_todouble___D,  //4
    func_org_luaj_vm2_LuaDouble_tofloat___F,  //5
    func_org_luaj_vm2_LuaDouble_toint___I,  //6
    func_org_luaj_vm2_LuaDouble_tolong___J,  //7
    func_org_luaj_vm2_LuaDouble_toshort___S,  //8
    func_org_luaj_vm2_LuaDouble_optdouble__D_D,  //9
    func_org_luaj_vm2_LuaDouble_optint__I_I,  //10
    func_org_luaj_vm2_LuaDouble_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //11
    func_org_luaj_vm2_LuaDouble_optlong__J_J,  //12
    func_org_luaj_vm2_LuaDouble_checkinteger___Lorg_luaj_vm2_LuaInteger_2,  //13
    func_org_luaj_vm2_LuaDouble_neg___Lorg_luaj_vm2_LuaValue_2,  //14
    func_org_luaj_vm2_LuaDouble_equals__Ljava_lang_Object_2_Z,  //15
    func_org_luaj_vm2_LuaDouble_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //16
    func_org_luaj_vm2_LuaDouble_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //17
    func_org_luaj_vm2_LuaDouble_raweq__Lorg_luaj_vm2_LuaValue_2_Z,  //18
    func_org_luaj_vm2_LuaDouble_raweq__D_Z,  //19
    func_org_luaj_vm2_LuaDouble_raweq__I_Z,  //20
    func_org_luaj_vm2_LuaDouble_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //21
    func_org_luaj_vm2_LuaDouble_add__D_Lorg_luaj_vm2_LuaValue_2,  //22
    func_org_luaj_vm2_LuaDouble_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //23
    func_org_luaj_vm2_LuaDouble_sub__D_Lorg_luaj_vm2_LuaValue_2,  //24
    func_org_luaj_vm2_LuaDouble_sub__I_Lorg_luaj_vm2_LuaValue_2,  //25
    func_org_luaj_vm2_LuaDouble_subFrom__D_Lorg_luaj_vm2_LuaValue_2,  //26
    func_org_luaj_vm2_LuaDouble_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //27
    func_org_luaj_vm2_LuaDouble_mul__D_Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_LuaDouble_mul__I_Lorg_luaj_vm2_LuaValue_2,  //29
    func_org_luaj_vm2_LuaDouble_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //30
    func_org_luaj_vm2_LuaDouble_pow__D_Lorg_luaj_vm2_LuaValue_2,  //31
    func_org_luaj_vm2_LuaDouble_pow__I_Lorg_luaj_vm2_LuaValue_2,  //32
    func_org_luaj_vm2_LuaDouble_powWith__D_Lorg_luaj_vm2_LuaValue_2,  //33
    func_org_luaj_vm2_LuaDouble_powWith__I_Lorg_luaj_vm2_LuaValue_2,  //34
    func_org_luaj_vm2_LuaDouble_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //35
    func_org_luaj_vm2_LuaDouble_div__D_Lorg_luaj_vm2_LuaValue_2,  //36
    func_org_luaj_vm2_LuaDouble_div__I_Lorg_luaj_vm2_LuaValue_2,  //37
    func_org_luaj_vm2_LuaDouble_divInto__D_Lorg_luaj_vm2_LuaValue_2,  //38
    func_org_luaj_vm2_LuaDouble_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //39
    func_org_luaj_vm2_LuaDouble_mod__D_Lorg_luaj_vm2_LuaValue_2,  //40
    func_org_luaj_vm2_LuaDouble_mod__I_Lorg_luaj_vm2_LuaValue_2,  //41
    func_org_luaj_vm2_LuaDouble_modFrom__D_Lorg_luaj_vm2_LuaValue_2,  //42
    func_org_luaj_vm2_LuaDouble_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_LuaDouble_lt__D_Lorg_luaj_vm2_LuaValue_2,  //44
    func_org_luaj_vm2_LuaDouble_lt__I_Lorg_luaj_vm2_LuaValue_2,  //45
    func_org_luaj_vm2_LuaDouble_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //46
    func_org_luaj_vm2_LuaDouble_lt_1b__I_Z,  //47
    func_org_luaj_vm2_LuaDouble_lt_1b__D_Z,  //48
    func_org_luaj_vm2_LuaDouble_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //49
    func_org_luaj_vm2_LuaDouble_lteq__D_Lorg_luaj_vm2_LuaValue_2,  //50
    func_org_luaj_vm2_LuaDouble_lteq__I_Lorg_luaj_vm2_LuaValue_2,  //51
    func_org_luaj_vm2_LuaDouble_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //52
    func_org_luaj_vm2_LuaDouble_lteq_1b__I_Z,  //53
    func_org_luaj_vm2_LuaDouble_lteq_1b__D_Z,  //54
    func_org_luaj_vm2_LuaDouble_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //55
    func_org_luaj_vm2_LuaDouble_gt__D_Lorg_luaj_vm2_LuaValue_2,  //56
    func_org_luaj_vm2_LuaDouble_gt__I_Lorg_luaj_vm2_LuaValue_2,  //57
    func_org_luaj_vm2_LuaDouble_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //58
    func_org_luaj_vm2_LuaDouble_gt_1b__I_Z,  //59
    func_org_luaj_vm2_LuaDouble_gt_1b__D_Z,  //60
    func_org_luaj_vm2_LuaDouble_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //61
    func_org_luaj_vm2_LuaDouble_gteq__D_Lorg_luaj_vm2_LuaValue_2,  //62
    func_org_luaj_vm2_LuaDouble_gteq__I_Lorg_luaj_vm2_LuaValue_2,  //63
    func_org_luaj_vm2_LuaDouble_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //64
    func_org_luaj_vm2_LuaDouble_gteq_1b__I_Z,  //65
    func_org_luaj_vm2_LuaDouble_gteq_1b__D_Z,  //66
    func_org_luaj_vm2_LuaDouble_strcmp__Lorg_luaj_vm2_LuaString_2_I,  //67
    func_org_luaj_vm2_LuaDouble_tojstring___Ljava_lang_String_2,  //68
    func_org_luaj_vm2_LuaDouble_strvalue___Lorg_luaj_vm2_LuaString_2,  //69
    func_org_luaj_vm2_LuaDouble_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //70
    func_org_luaj_vm2_LuaDouble_tostring___Lorg_luaj_vm2_LuaValue_2,  //71
    func_org_luaj_vm2_LuaDouble_optjstring__Ljava_lang_String_2_Ljava_lang_String_2,  //72
    func_org_luaj_vm2_LuaDouble_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //73
    func_org_luaj_vm2_LuaDouble_isnumber___Z,  //74
    func_org_luaj_vm2_LuaDouble_isstring___Z,  //75
    func_org_luaj_vm2_LuaDouble_tonumber___Lorg_luaj_vm2_LuaValue_2,  //76
    func_org_luaj_vm2_LuaDouble_checkint___I,  //77
    func_org_luaj_vm2_LuaDouble_checklong___J,  //78
    func_org_luaj_vm2_LuaDouble_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //79
    func_org_luaj_vm2_LuaDouble_checkdouble___D,  //80
    func_org_luaj_vm2_LuaDouble_checkjstring___Ljava_lang_String_2,  //81
    func_org_luaj_vm2_LuaDouble_checkstring___Lorg_luaj_vm2_LuaString_2,  //82
    func_org_luaj_vm2_LuaDouble_isvalidkey___Z  //83
};
__refer arr_vmtable_org_luaj_vm2_LuaDouble_from_org_luaj_vm2_LuaNumber[] = {
    func_org_luaj_vm2_LuaNumber_type___I,  //0
    func_org_luaj_vm2_LuaNumber_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaDouble_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //2
    func_org_luaj_vm2_LuaNumber_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2,  //3
    func_org_luaj_vm2_LuaDouble_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //4
    func_org_luaj_vm2_LuaDouble_tonumber___Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_LuaDouble_isnumber___Z,  //6
    func_org_luaj_vm2_LuaDouble_isstring___Z,  //7
    func_org_luaj_vm2_LuaNumber_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //8
    func_org_luaj_vm2_LuaNumber_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //9
    func_org_luaj_vm2_LuaNumber_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2,  //10
    func_org_luaj_vm2_LuaNumber_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2,  //11
    func_org_luaj_vm2_LuaNumber_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2  //12
};
__refer arr_vmtable_org_luaj_vm2_LuaDouble_from_org_luaj_vm2_LuaValue[] = {
    func_org_luaj_vm2_LuaNumber_type___I,  //0
    func_org_luaj_vm2_LuaNumber_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaValue_isboolean___Z,  //2
    func_org_luaj_vm2_LuaValue_isclosure___Z,  //3
    func_org_luaj_vm2_LuaValue_isfunction___Z,  //4
    func_org_luaj_vm2_LuaValue_isint___Z,  //5
    func_org_luaj_vm2_LuaValue_isinttype___Z,  //6
    func_org_luaj_vm2_LuaDouble_islong___Z,  //7
    func_org_luaj_vm2_LuaValue_isnil___Z,  //8
    func_org_luaj_vm2_LuaDouble_isnumber___Z,  //9
    func_org_luaj_vm2_LuaDouble_isstring___Z,  //10
    func_org_luaj_vm2_LuaValue_isthread___Z,  //11
    func_org_luaj_vm2_LuaValue_istable___Z,  //12
    func_org_luaj_vm2_LuaValue_isuserdata___Z,  //13
    func_org_luaj_vm2_LuaValue_isuserdata__Ljava_lang_Class_2_Z,  //14
    func_org_luaj_vm2_LuaValue_toboolean___Z,  //15
    func_org_luaj_vm2_LuaDouble_tobyte___B,  //16
    func_org_luaj_vm2_LuaDouble_tochar___C,  //17
    func_org_luaj_vm2_LuaDouble_todouble___D,  //18
    func_org_luaj_vm2_LuaDouble_tofloat___F,  //19
    func_org_luaj_vm2_LuaDouble_toint___I,  //20
    func_org_luaj_vm2_LuaDouble_tolong___J,  //21
    func_org_luaj_vm2_LuaDouble_toshort___S,  //22
    func_org_luaj_vm2_LuaDouble_tojstring___Ljava_lang_String_2,  //23
    func_org_luaj_vm2_LuaValue_touserdata___Ljava_lang_Object_2,  //24
    func_org_luaj_vm2_LuaValue_touserdata__Ljava_lang_Class_2_Ljava_lang_Object_2,  //25
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //26
    func_org_luaj_vm2_LuaDouble_tonumber___Lorg_luaj_vm2_LuaValue_2,  //27
    func_org_luaj_vm2_LuaDouble_tostring___Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_LuaValue_optboolean__Z_Z,  //29
    func_org_luaj_vm2_LuaValue_optclosure__Lorg_luaj_vm2_LuaClosure_2_Lorg_luaj_vm2_LuaClosure_2,  //30
    func_org_luaj_vm2_LuaDouble_optdouble__D_D,  //31
    func_org_luaj_vm2_LuaValue_optfunction__Lorg_luaj_vm2_LuaFunction_2_Lorg_luaj_vm2_LuaFunction_2,  //32
    func_org_luaj_vm2_LuaDouble_optint__I_I,  //33
    func_org_luaj_vm2_LuaDouble_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //34
    func_org_luaj_vm2_LuaDouble_optlong__J_J,  //35
    func_org_luaj_vm2_LuaDouble_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //36
    func_org_luaj_vm2_LuaDouble_optjstring__Ljava_lang_String_2_Ljava_lang_String_2,  //37
    func_org_luaj_vm2_LuaDouble_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //38
    func_org_luaj_vm2_LuaValue_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2,  //39
    func_org_luaj_vm2_LuaValue_optthread__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_LuaThread_2,  //40
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Object_2_Ljava_lang_Object_2,  //41
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Class_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //42
    func_org_luaj_vm2_LuaValue_optvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_LuaValue_checkboolean___Z,  //44
    func_org_luaj_vm2_LuaValue_checkclosure___Lorg_luaj_vm2_LuaClosure_2,  //45
    func_org_luaj_vm2_LuaDouble_checkdouble___D,  //46
    func_org_luaj_vm2_LuaValue_checkfunction___Lorg_luaj_vm2_LuaFunction_2,  //47
    func_org_luaj_vm2_LuaValue_checkglobals___Lorg_luaj_vm2_Globals_2,  //48
    func_org_luaj_vm2_LuaDouble_checkint___I,  //49
    func_org_luaj_vm2_LuaDouble_checkinteger___Lorg_luaj_vm2_LuaInteger_2,  //50
    func_org_luaj_vm2_LuaDouble_checklong___J,  //51
    func_org_luaj_vm2_LuaDouble_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //52
    func_org_luaj_vm2_LuaNumber_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2,  //53
    func_org_luaj_vm2_LuaDouble_checkjstring___Ljava_lang_String_2,  //54
    func_org_luaj_vm2_LuaDouble_checkstring___Lorg_luaj_vm2_LuaString_2,  //55
    func_org_luaj_vm2_LuaValue_checktable___Lorg_luaj_vm2_LuaTable_2,  //56
    func_org_luaj_vm2_LuaValue_checkthread___Lorg_luaj_vm2_LuaThread_2,  //57
    func_org_luaj_vm2_LuaValue_checkuserdata___Ljava_lang_Object_2,  //58
    func_org_luaj_vm2_LuaValue_checkuserdata__Ljava_lang_Class_2_Ljava_lang_Object_2,  //59
    func_org_luaj_vm2_LuaValue_checknotnil___Lorg_luaj_vm2_LuaValue_2,  //60
    func_org_luaj_vm2_LuaDouble_isvalidkey___Z,  //61
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
    func_org_luaj_vm2_LuaDouble_neg___Lorg_luaj_vm2_LuaValue_2,  //126
    func_org_luaj_vm2_LuaValue_len___Lorg_luaj_vm2_LuaValue_2,  //127
    func_org_luaj_vm2_LuaValue_length___I,  //128
    func_org_luaj_vm2_LuaValue_rawlen___I,  //129
    func_org_luaj_vm2_LuaDouble_equals__Ljava_lang_Object_2_Z,  //130
    func_org_luaj_vm2_LuaDouble_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //131
    func_org_luaj_vm2_LuaDouble_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //132
    func_org_luaj_vm2_LuaValue_neq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //133
    func_org_luaj_vm2_LuaValue_neq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //134
    func_org_luaj_vm2_LuaDouble_raweq__Lorg_luaj_vm2_LuaValue_2_Z,  //135
    func_org_luaj_vm2_LuaValue_raweq__Lorg_luaj_vm2_LuaUserdata_2_Z,  //136
    func_org_luaj_vm2_LuaValue_raweq__Lorg_luaj_vm2_LuaString_2_Z,  //137
    func_org_luaj_vm2_LuaDouble_raweq__D_Z,  //138
    func_org_luaj_vm2_LuaDouble_raweq__I_Z,  //139
    func_org_luaj_vm2_LuaDouble_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //140
    func_org_luaj_vm2_LuaDouble_add__D_Lorg_luaj_vm2_LuaValue_2,  //141
    func_org_luaj_vm2_LuaValue_add__I_Lorg_luaj_vm2_LuaValue_2,  //142
    func_org_luaj_vm2_LuaDouble_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //143
    func_org_luaj_vm2_LuaDouble_sub__D_Lorg_luaj_vm2_LuaValue_2,  //144
    func_org_luaj_vm2_LuaDouble_sub__I_Lorg_luaj_vm2_LuaValue_2,  //145
    func_org_luaj_vm2_LuaDouble_subFrom__D_Lorg_luaj_vm2_LuaValue_2,  //146
    func_org_luaj_vm2_LuaValue_subFrom__I_Lorg_luaj_vm2_LuaValue_2,  //147
    func_org_luaj_vm2_LuaDouble_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //148
    func_org_luaj_vm2_LuaDouble_mul__D_Lorg_luaj_vm2_LuaValue_2,  //149
    func_org_luaj_vm2_LuaDouble_mul__I_Lorg_luaj_vm2_LuaValue_2,  //150
    func_org_luaj_vm2_LuaDouble_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //151
    func_org_luaj_vm2_LuaDouble_pow__D_Lorg_luaj_vm2_LuaValue_2,  //152
    func_org_luaj_vm2_LuaDouble_pow__I_Lorg_luaj_vm2_LuaValue_2,  //153
    func_org_luaj_vm2_LuaDouble_powWith__D_Lorg_luaj_vm2_LuaValue_2,  //154
    func_org_luaj_vm2_LuaDouble_powWith__I_Lorg_luaj_vm2_LuaValue_2,  //155
    func_org_luaj_vm2_LuaDouble_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //156
    func_org_luaj_vm2_LuaDouble_div__D_Lorg_luaj_vm2_LuaValue_2,  //157
    func_org_luaj_vm2_LuaDouble_div__I_Lorg_luaj_vm2_LuaValue_2,  //158
    func_org_luaj_vm2_LuaDouble_divInto__D_Lorg_luaj_vm2_LuaValue_2,  //159
    func_org_luaj_vm2_LuaDouble_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //160
    func_org_luaj_vm2_LuaDouble_mod__D_Lorg_luaj_vm2_LuaValue_2,  //161
    func_org_luaj_vm2_LuaDouble_mod__I_Lorg_luaj_vm2_LuaValue_2,  //162
    func_org_luaj_vm2_LuaDouble_modFrom__D_Lorg_luaj_vm2_LuaValue_2,  //163
    func_org_luaj_vm2_LuaValue_arithmt__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //164
    func_org_luaj_vm2_LuaValue_arithmtwith__Lorg_luaj_vm2_LuaValue_2D_Lorg_luaj_vm2_LuaValue_2,  //165
    func_org_luaj_vm2_LuaDouble_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //166
    func_org_luaj_vm2_LuaDouble_lt__D_Lorg_luaj_vm2_LuaValue_2,  //167
    func_org_luaj_vm2_LuaDouble_lt__I_Lorg_luaj_vm2_LuaValue_2,  //168
    func_org_luaj_vm2_LuaDouble_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //169
    func_org_luaj_vm2_LuaDouble_lt_1b__I_Z,  //170
    func_org_luaj_vm2_LuaDouble_lt_1b__D_Z,  //171
    func_org_luaj_vm2_LuaDouble_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //172
    func_org_luaj_vm2_LuaDouble_lteq__D_Lorg_luaj_vm2_LuaValue_2,  //173
    func_org_luaj_vm2_LuaDouble_lteq__I_Lorg_luaj_vm2_LuaValue_2,  //174
    func_org_luaj_vm2_LuaDouble_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //175
    func_org_luaj_vm2_LuaDouble_lteq_1b__I_Z,  //176
    func_org_luaj_vm2_LuaDouble_lteq_1b__D_Z,  //177
    func_org_luaj_vm2_LuaDouble_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //178
    func_org_luaj_vm2_LuaDouble_gt__D_Lorg_luaj_vm2_LuaValue_2,  //179
    func_org_luaj_vm2_LuaDouble_gt__I_Lorg_luaj_vm2_LuaValue_2,  //180
    func_org_luaj_vm2_LuaDouble_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //181
    func_org_luaj_vm2_LuaDouble_gt_1b__I_Z,  //182
    func_org_luaj_vm2_LuaDouble_gt_1b__D_Z,  //183
    func_org_luaj_vm2_LuaDouble_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //184
    func_org_luaj_vm2_LuaDouble_gteq__D_Lorg_luaj_vm2_LuaValue_2,  //185
    func_org_luaj_vm2_LuaDouble_gteq__I_Lorg_luaj_vm2_LuaValue_2,  //186
    func_org_luaj_vm2_LuaDouble_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //187
    func_org_luaj_vm2_LuaDouble_gteq_1b__I_Z,  //188
    func_org_luaj_vm2_LuaDouble_gteq_1b__D_Z,  //189
    func_org_luaj_vm2_LuaValue_comparemt__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //190
    func_org_luaj_vm2_LuaValue_strcmp__Lorg_luaj_vm2_LuaValue_2_I,  //191
    func_org_luaj_vm2_LuaDouble_strcmp__Lorg_luaj_vm2_LuaString_2_I,  //192
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
    func_org_luaj_vm2_LuaDouble_strvalue___Lorg_luaj_vm2_LuaString_2,  //203
    func_org_luaj_vm2_LuaValue_strongvalue___Lorg_luaj_vm2_LuaValue_2,  //204
    func_org_luaj_vm2_LuaValue_metatag__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //205
    func_org_luaj_vm2_LuaValue_checkmetatag__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //206
    func_org_luaj_vm2_LuaValue_onInvoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //207
    func_org_luaj_vm2_LuaValue_initupvalue1__Lorg_luaj_vm2_LuaValue_2_V,  //208
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2  //209
};
__refer arr_vmtable_org_luaj_vm2_LuaDouble_from_org_luaj_vm2_Varargs[] = {
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
    func_org_luaj_vm2_LuaDouble_tojstring___Ljava_lang_String_2,  //58
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //59
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2,  //60
    func_org_luaj_vm2_Varargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V,  //61
    func_org_luaj_vm2_Varargs_dealias___Lorg_luaj_vm2_Varargs_2  //62
};
__refer arr_vmtable_org_luaj_vm2_LuaDouble_from_java_lang_Object[] = {
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_org_luaj_vm2_LuaDouble_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_org_luaj_vm2_LuaDouble_hashCode___I  //9
};
VMTable vmtable_org_luaj_vm2_LuaDouble[] = {
    {353, 84, arr_vmtable_org_luaj_vm2_LuaDouble_from_org_luaj_vm2_LuaDouble}, //0
    {84, 13, arr_vmtable_org_luaj_vm2_LuaDouble_from_org_luaj_vm2_LuaNumber}, //1
    {1, 210, arr_vmtable_org_luaj_vm2_LuaDouble_from_org_luaj_vm2_LuaValue}, //2
    {2, 63, arr_vmtable_org_luaj_vm2_LuaDouble_from_org_luaj_vm2_Varargs}, //3
    {5, 10, arr_vmtable_org_luaj_vm2_LuaDouble_from_java_lang_Object}, //4
};



// locals: 3
// stack: 4
// args: 2
struct org_luaj_vm2_LuaNumber* func_org_luaj_vm2_LuaDouble_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaDouble* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2484, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 78 , L841721161 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 78;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp - 2].i = (s32)stack[sp - 2].d; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 79 , L1344946518 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp++].i = local[2].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1410791643;
    stack[sp++].i = local[2].i;
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
    goto L1692481404;
    L1410791643:
    // new org/luaj/vm2/LuaDouble
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 353);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp].d = local[0].d;
    sp += 2;
    // invokespecial org/luaj/vm2/LuaDouble.<init>(D)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaDouble__init___D_V(runtime, stack[sp + 0].d);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1692481404:
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

void bridge_org_luaj_vm2_LuaDouble_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, para[0].obj, para[1].d);
}


// locals: 3
// stack: 3
// args: 1
void func_org_luaj_vm2_LuaDouble__init___D_V(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2485, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 83 , L153950082 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 83;
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
    //  line no 84 , L1780414044 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].d = local[1].d;
    sp += 2;
    // putfield org/luaj/vm2/LuaDouble v D
    sp -= 3;
    ((struct org_luaj_vm2_LuaDouble*)rstack[sp + 0].obj)->v_51 = stack[sp + 1].d;
    ; 
    //  line no 85 , L120157876 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaDouble__init___D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaDouble__init___D_V(runtime, ins);
}


// locals: 3
// stack: 4
// args: 0
s32 func_org_luaj_vm2_LuaDouble_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2486, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 88 , L320453674 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 88;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    //  dconst 1
    stack[sp].d = 1;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d + stack[sp - 2].d; 
    sp -= 2;
    // invokestatic java/lang/Double.doubleToLongBits(D)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Double_doubleToLongBits__D_J(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].j = stack[sp].j;
    ; 
    //  line no 89 , L237503491 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 3].j = stack[sp - 3].j >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    stack[sp].j = local[1].j;
    sp += 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
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

void bridge_org_luaj_vm2_LuaDouble_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_hashCode___I(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
s8 func_org_luaj_vm2_LuaDouble_islong___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2487, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 93 , L2039328061 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 93;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L665564874;
    // iconst_1
    stack[sp++].i = 1;
    goto L1768797728;
    L665564874:
    // iconst_0
    stack[sp++].i = 0;
    L1768797728:
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

void bridge_org_luaj_vm2_LuaDouble_islong___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_islong___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_luaj_vm2_LuaDouble_tobyte___B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2488, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 96 , L2107141507 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 96;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
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

void bridge_org_luaj_vm2_LuaDouble_tobyte___B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_tobyte___B(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
u16 func_org_luaj_vm2_LuaDouble_tochar___C(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2489, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 97 , L61334373 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 97;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
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

void bridge_org_luaj_vm2_LuaDouble_tochar___C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_tochar___C(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
f64 func_org_luaj_vm2_LuaDouble_todouble___D(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    ; 
    //  line no 98 , L312766685 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    return stack[sp - 2].d;
    ; 
}

void bridge_org_luaj_vm2_LuaDouble_todouble___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaDouble_todouble___D(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
f32 func_org_luaj_vm2_LuaDouble_tofloat___F(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2491, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 99 , L1432929903 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 99;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_tofloat___F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_org_luaj_vm2_LuaDouble_tofloat___F(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_LuaDouble_toint___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2492, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 100 , L1064040618 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_toint___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_toint___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s64 func_org_luaj_vm2_LuaDouble_tolong___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2493, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 101 , L19423 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 101;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_tolong___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaDouble_tolong___J(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s16 func_org_luaj_vm2_LuaDouble_toshort___S(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2494, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 102 , L744715819 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 102;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
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

void bridge_org_luaj_vm2_LuaDouble_toshort___S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_toshort___S(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
f64 func_org_luaj_vm2_LuaDouble_optdouble__D_D(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    local[0].d = p0;
    ; 
    //  line no 104 , L2017603323 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    return stack[sp - 2].d;
    ; 
}

void bridge_org_luaj_vm2_LuaDouble_optdouble__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaDouble_optdouble__D_D(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_LuaDouble_optint__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2496, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 105 , L1759522611 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 105;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_optint__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_optint__I_I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaInteger* func_org_luaj_vm2_LuaDouble_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaInteger* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2497, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 106 , L222882200 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 106;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
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

void bridge_org_luaj_vm2_LuaDouble_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s64 func_org_luaj_vm2_LuaDouble_optlong__J_J(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2498, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 107 , L361423492 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 107;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_optlong__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaDouble_optlong__J_J(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct org_luaj_vm2_LuaInteger* func_org_luaj_vm2_LuaDouble_checkinteger___Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2499, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 109 , L438660480 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 109;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
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

void bridge_org_luaj_vm2_LuaDouble_checkinteger___Lorg_luaj_vm2_LuaInteger_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_checkinteger___Lorg_luaj_vm2_LuaInteger_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_neg___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2500, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 112 , L1916139819 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].d = -stack[sp - 2].d; 
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

void bridge_org_luaj_vm2_LuaDouble_neg___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_neg___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2501, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 115 , L1232948374 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 115;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaDouble
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 550);
    if(stack[--sp].i  == 0) goto L879924346;
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast org/luaj/vm2/LuaDouble
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 550);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1775488894;
    // iconst_1
    stack[sp++].i = 1;
    goto L977195776;
    L1775488894:
    // iconst_0
    stack[sp++].i = 0;
    goto L977195776;
    L879924346:
    // iconst_0
    stack[sp++].i = 0;
    L977195776:
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

void bridge_org_luaj_vm2_LuaDouble_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2502, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 118 , L972404515 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 118;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 138);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1319778140;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L37768026;
    L1319778140:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L37768026:
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

void bridge_org_luaj_vm2_LuaDouble_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_org_luaj_vm2_LuaDouble_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2503, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 119 , L783117220 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 119;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 138);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
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

void bridge_org_luaj_vm2_LuaDouble_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_org_luaj_vm2_LuaDouble_raweq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2504, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 122 , L834153999 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 122;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.raweq(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 138);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
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

void bridge_org_luaj_vm2_LuaDouble_raweq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_raweq__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_raweq__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2505, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 123 , L1645557354 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 123;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1188871851;
    // iconst_1
    stack[sp++].i = 1;
    goto L920926249;
    L1188871851:
    // iconst_0
    stack[sp++].i = 0;
    L920926249:
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

void bridge_org_luaj_vm2_LuaDouble_raweq__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_raweq__D_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_raweq__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2506, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 124 , L1589745212 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 124;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L2110472873;
    // iconst_1
    stack[sp++].i = 1;
    goto L1794705481;
    L2110472873:
    // iconst_0
    stack[sp++].i = 0;
    L1794705481:
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

void bridge_org_luaj_vm2_LuaDouble_raweq__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_raweq__I_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2507, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 127 , L1336210565 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 127;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_add__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2508, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 128 , L1246023616 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 128;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_add__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_add__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2509, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 129 , L134943275 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 129;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_sub__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2510, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 130 , L1708084589 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 130;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_sub__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_sub__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_sub__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2511, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 131 , L1259065345 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 131;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
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

void bridge_org_luaj_vm2_LuaDouble_sub__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_sub__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_subFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2512, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 132 , L271002555 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 132;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_subFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_subFrom__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2513, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 133 , L376660032 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 133;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_mul__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2514, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 134 , L1427020774 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 134;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_mul__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_mul__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_mul__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2515, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 135 , L854255346 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 135;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_mul__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_mul__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2516, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 136 , L121245483 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 136;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_pow__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2517, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 137 , L1780306540 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 137;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_pow__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_pow__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_pow__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2518, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 138 , L1211827856 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 138;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_pow__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_pow__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_powWith__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2519, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 139 , L1752220610 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 139;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_powWith__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_powWith__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_powWith__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2520, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 140 , L531576940 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 140;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_powWith__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_powWith__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2521, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 141 , L1784551034 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 141;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_div__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2522, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 142 , L107632469 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 142;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_div__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_div__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_div__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2523, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 143 , L1835878412 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 143;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_div__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_div__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_divInto__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2524, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 144 , L1519482659 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 144;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_divInto__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_divInto__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2525, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 145 , L2037343019 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 145;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_mod__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2526, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 146 , L216919586 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 146;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_mod__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_mod__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_mod__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2527, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 147 , L1531409183 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 147;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_mod__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_mod__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_modFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2528, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 148 , L1086508626 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 148;
    stack[sp].d = local[1].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_modFrom__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_modFrom__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 4
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_ddiv__DD_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaDouble* p0, f64 p1, f64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2529, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    local[3].d = p3;
    ; 
    //  line no 159 , L1621615881 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 159;
    stack[sp].d = local[2].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L773059332;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[2].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
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
    goto L2020935882;
    L773059332:
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L1025786379;
    // getstatic org/luaj/vm2/LuaDouble POSINF Lorg/luaj/vm2/LuaDouble;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaDouble.POSINF_46;
    sp += 1;
    goto L2020935882;
    L1025786379:
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1651795723;
    // getstatic org/luaj/vm2/LuaDouble NAN Lorg/luaj/vm2/LuaDouble;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaDouble.NAN_45;
    sp += 1;
    goto L2020935882;
    L1651795723:
    // getstatic org/luaj/vm2/LuaDouble NEGINF Lorg/luaj/vm2/LuaDouble;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaDouble.NEGINF_47;
    sp += 1;
    L2020935882:
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

void bridge_org_luaj_vm2_LuaDouble_ddiv__DD_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_ddiv__DD_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].d, para[2].d);
}


// locals: 4
// stack: 4
// args: 3
f64 func_org_luaj_vm2_LuaDouble_ddiv_1d__DD_D(JThreadRuntime *runtime, struct org_luaj_vm2_LuaDouble* p0, f64 p1, f64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2530, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    local[3].d = p3;
    ; 
    //  line no 169 , L53301881 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 169;
    stack[sp].d = local[2].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L470187021;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[2].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
    sp -= 2;
    goto L1561005241;
    L470187021:
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L2138793529;
    // getstatic java/lang/Double POSITIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.POSITIVE_1INFINITY_1;
    sp += 2;
    goto L1561005241;
    L2138793529:
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L380394805;
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    goto L1561005241;
    L380394805:
    // getstatic java/lang/Double NEGATIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.NEGATIVE_1INFINITY_2;
    sp += 2;
    L1561005241:
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

void bridge_org_luaj_vm2_LuaDouble_ddiv_1d__DD_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaDouble_ddiv_1d__DD_D(runtime, para[0].obj, para[1].d, para[2].d);
}


// locals: 4
// stack: 8
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_dmod__DD_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaDouble* p0, f64 p1, f64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2531, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    local[3].d = p3;
    ; 
    //  line no 180 , L1007550632 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 180;
    stack[sp].d = local[2].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L409007038;
    stack[sp].d = local[0].d;
    sp += 2;
    // getstatic java/lang/Double POSITIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.POSITIVE_1INFINITY_1;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L409007038;
    stack[sp].d = local[0].d;
    sp += 2;
    // getstatic java/lang/Double NEGATIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.NEGATIVE_1INFINITY_2;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1825656946;
    L409007038:
    // getstatic org/luaj/vm2/LuaDouble NAN Lorg/luaj/vm2/LuaDouble;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaDouble.NAN_45;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1825656946:
    //  line no 181 , L1825656946 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    // getstatic java/lang/Double POSITIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.POSITIVE_1INFINITY_1;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L2026873444;
    ; 
    //  line no 182 , L873002645 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L728370857;
    // getstatic org/luaj/vm2/LuaDouble POSINF Lorg/luaj/vm2/LuaDouble;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaDouble.POSINF_46;
    sp += 1;
    goto L1306429814;
    L728370857:
    stack[sp].d = local[0].d;
    sp += 2;
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
    L1306429814:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2026873444:
    //  line no 184 , L2026873444 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    // getstatic java/lang/Double NEGATIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.NEGATIVE_1INFINITY_2;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1216863787;
    ; 
    //  line no 185 , L994584048 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L1085041526;
    // getstatic org/luaj/vm2/LuaDouble NEGINF Lorg/luaj/vm2/LuaDouble;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaDouble.NEGINF_47;
    sp += 1;
    goto L2038484780;
    L1085041526:
    stack[sp].d = local[0].d;
    sp += 2;
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
    L2038484780:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1216863787:
    //  line no 187 , L1216863787 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[2].d;
    sp += 2;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[2].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
    sp -= 2;
    // invokestatic java/lang/Math.floor(D)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Math_floor__D_D(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
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

void bridge_org_luaj_vm2_LuaDouble_dmod__DD_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_dmod__DD_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].d, para[2].d);
}


// locals: 4
// stack: 8
// args: 3
f64 func_org_luaj_vm2_LuaDouble_dmod_1d__DD_D(JThreadRuntime *runtime, struct org_luaj_vm2_LuaDouble* p0, f64 p1, f64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2532, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    local[3].d = p3;
    ; 
    //  line no 198 , L1973281540 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 198;
    stack[sp].d = local[2].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L1447678234;
    stack[sp].d = local[0].d;
    sp += 2;
    // getstatic java/lang/Double POSITIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.POSITIVE_1INFINITY_1;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L1447678234;
    stack[sp].d = local[0].d;
    sp += 2;
    // getstatic java/lang/Double NEGATIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.NEGATIVE_1INFINITY_2;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L693083472;
    L1447678234:
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L693083472:
    //  line no 199 , L693083472 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    // getstatic java/lang/Double POSITIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.POSITIVE_1INFINITY_1;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L658781536;
    ; 
    //  line no 200 , L1037793103 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L629321967;
    // getstatic java/lang/Double POSITIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.POSITIVE_1INFINITY_1;
    sp += 2;
    goto L1886526482;
    L629321967:
    stack[sp].d = local[0].d;
    sp += 2;
    L1886526482:
    method_exit(runtime);
    return stack[sp - 2].d;
    L658781536:
    //  line no 202 , L658781536 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    // getstatic java/lang/Double NEGATIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.NEGATIVE_1INFINITY_2;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1989924937;
    ; 
    //  line no 203 , L270313690 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L547973118;
    // getstatic java/lang/Double NEGATIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.NEGATIVE_1INFINITY_2;
    sp += 2;
    goto L1079733621;
    L547973118:
    stack[sp].d = local[0].d;
    sp += 2;
    L1079733621:
    method_exit(runtime);
    return stack[sp - 2].d;
    L1989924937:
    //  line no 205 , L1989924937 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[2].d;
    sp += 2;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[2].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
    sp -= 2;
    // invokestatic java/lang/Math.floor(D)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Math_floor__D_D(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    stack[sp - 4].d = stack[sp - 4].d - stack[sp - 2].d; 
    sp -= 2;
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

void bridge_org_luaj_vm2_LuaDouble_dmod_1d__DD_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaDouble_dmod_1d__DD_D(runtime, para[0].obj, para[1].d, para[2].d);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2533, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 209 , L495289088 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 209;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L1995997657;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.gt_b(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 183);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1842571958;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1352743983;
    L1842571958:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L1352743983;
    L1995997657:
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
    L1352743983:
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

void bridge_org_luaj_vm2_LuaDouble_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_lt__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2534, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 210 , L1405721353 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 210;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L624545052;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L2082524624;
    L624545052:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L2082524624:
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

void bridge_org_luaj_vm2_LuaDouble_lt__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_lt__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_lt__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2535, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 211 , L1802415698 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 211;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L13950734;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L2061552777;
    L13950734:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L2061552777:
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

void bridge_org_luaj_vm2_LuaDouble_lt__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_lt__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_org_luaj_vm2_LuaDouble_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2536, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 212 , L333828675 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 212;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L904872862;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.gt_b(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 183);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1234654510;
    L904872862:
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
    L1234654510:
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

void bridge_org_luaj_vm2_LuaDouble_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_lt_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2537, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 213 , L1174694918 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 213;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L154674411;
    // iconst_1
    stack[sp++].i = 1;
    goto L2062888647;
    L154674411:
    // iconst_0
    stack[sp++].i = 0;
    L2062888647:
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

void bridge_org_luaj_vm2_LuaDouble_lt_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_lt_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_lt_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2538, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 214 , L314622131 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 214;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L1519890812;
    // iconst_1
    stack[sp++].i = 1;
    goto L164052991;
    L1519890812:
    // iconst_0
    stack[sp++].i = 0;
    L164052991:
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

void bridge_org_luaj_vm2_LuaDouble_lt_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_lt_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2539, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 215 , L1704927850 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 215;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L48522228;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.gteq_b(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 189);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L854367376;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L917190676;
    L854367376:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L917190676;
    L48522228:
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
    L917190676:
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

void bridge_org_luaj_vm2_LuaDouble_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_lteq__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2540, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 216 , L190967225 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 216;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  > 0) goto L1564473433;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L851116146;
    L1564473433:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L851116146:
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

void bridge_org_luaj_vm2_LuaDouble_lteq__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_lteq__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_lteq__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2541, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 217 , L1115296438 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 217;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  > 0) goto L1613092752;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L184017782;
    L1613092752:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L184017782:
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

void bridge_org_luaj_vm2_LuaDouble_lteq__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_lteq__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_org_luaj_vm2_LuaDouble_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2542, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 218 , L1336953458 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 218;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L31956291;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.gteq_b(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 189);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L876487258;
    L31956291:
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
    L876487258:
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

void bridge_org_luaj_vm2_LuaDouble_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_lteq_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2543, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 219 , L1276002922 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 219;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  > 0) goto L1899938605;
    // iconst_1
    stack[sp++].i = 1;
    goto L886510498;
    L1899938605:
    // iconst_0
    stack[sp++].i = 0;
    L886510498:
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

void bridge_org_luaj_vm2_LuaDouble_lteq_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_lteq_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_lteq_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2544, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 220 , L143239336 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 220;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  > 0) goto L254358847;
    // iconst_1
    stack[sp++].i = 1;
    goto L57638267;
    L254358847:
    // iconst_0
    stack[sp++].i = 0;
    L57638267:
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

void bridge_org_luaj_vm2_LuaDouble_lteq_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_lteq_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2545, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 221 , L631766751 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 221;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L1667348377;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.lt_b(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 171);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L463313451;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L227644740;
    L463313451:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L227644740;
    L1667348377:
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
    L227644740:
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

void bridge_org_luaj_vm2_LuaDouble_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_gt__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2546, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 222 , L2036949810 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 222;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L248705782;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L266894813;
    L248705782:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L266894813:
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

void bridge_org_luaj_vm2_LuaDouble_gt__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_gt__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_gt__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2547, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 223 , L2083004088 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 223;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L1710491273;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L700356991;
    L1710491273:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L700356991:
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

void bridge_org_luaj_vm2_LuaDouble_gt__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_gt__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_org_luaj_vm2_LuaDouble_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2548, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 224 , L260727363 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 224;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L1250950517;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.lt_b(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 171);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L388489274;
    L1250950517:
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
    L388489274:
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

void bridge_org_luaj_vm2_LuaDouble_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_gt_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2549, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 225 , L601520619 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 225;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L378227888;
    // iconst_1
    stack[sp++].i = 1;
    goto L1040537707;
    L378227888:
    // iconst_0
    stack[sp++].i = 0;
    L1040537707:
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

void bridge_org_luaj_vm2_LuaDouble_gt_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_gt_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_gt_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2550, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 226 , L1163157114 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 226;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L167146668;
    // iconst_1
    stack[sp++].i = 1;
    goto L497333241;
    L167146668:
    // iconst_0
    stack[sp++].i = 0;
    L497333241:
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

void bridge_org_luaj_vm2_LuaDouble_gt_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_gt_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2551, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 227 , L1149993098 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 227;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L2120404899;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.lteq_b(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 177);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1189187821;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L943472307;
    L1189187821:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    goto L943472307;
    L2120404899:
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
    L943472307:
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

void bridge_org_luaj_vm2_LuaDouble_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_gteq__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2552, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 228 , L1214032527 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 228;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L40910225;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1541427914;
    L40910225:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1541427914:
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

void bridge_org_luaj_vm2_LuaDouble_gteq__D_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_gteq__D_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_gteq__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2553, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 229 , L228756739 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 229;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L247309715;
    // getstatic org/luaj/vm2/LuaDouble TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1469235340;
    L247309715:
    // getstatic org/luaj/vm2/LuaDouble FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1469235340:
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

void bridge_org_luaj_vm2_LuaDouble_gteq__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_gteq__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_org_luaj_vm2_LuaDouble_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2554, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 230 , L1422271143 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 230;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/luaj/vm2/LuaNumber
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 531);
    if(stack[--sp].i  == 0) goto L926188689;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.lteq_b(D)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 1, 177);
        stack[sp].i = __func_p(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1994634331;
    L926188689:
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
    L1994634331:
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

void bridge_org_luaj_vm2_LuaDouble_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_gteq_1b__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2555, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 231 , L1963080787 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 231;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L1719746158;
    // iconst_1
    stack[sp++].i = 1;
    goto L229318537;
    L1719746158:
    // iconst_0
    stack[sp++].i = 0;
    L229318537:
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

void bridge_org_luaj_vm2_LuaDouble_gteq_1b__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_gteq_1b__I_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaDouble_gteq_1b__D_Z(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2556, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 232 , L1578365270 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 232;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp].d = local[1].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L823056052;
    // iconst_1
    stack[sp++].i = 1;
    goto L1678557259;
    L823056052:
    // iconst_0
    stack[sp++].i = 0;
    L1678557259:
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

void bridge_org_luaj_vm2_LuaDouble_gteq_1b__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_gteq_1b__D_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_LuaDouble_strcmp__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2557, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 235 , L584262389 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 235;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 809);
    // invokevirtual org/luaj/vm2/LuaDouble.typerror(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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

void bridge_org_luaj_vm2_LuaDouble_strcmp__Lorg_luaj_vm2_LuaString_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_strcmp__Lorg_luaj_vm2_LuaString_2_I(runtime, ins);
}


// locals: 3
// stack: 4
// args: 0
struct java_lang_String* func_org_luaj_vm2_LuaDouble_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2558, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 244 , L1730371851 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 244;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    sp -= 2;
    local[1].j = stack[sp].j;
    ; 
    //  line no 245 , L1537227906 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1625258377;
    ; 
    //  line no 246 , L2058424956 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    // invokestatic java/lang/Long.toString(J)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_Long_toString__J_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1625258377:
    //  line no 247 , L1625258377 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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
    if(stack[--sp].i  == 0) goto L115740440;
    ; 
    //  line no 248 , L1559783274 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4351);
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L115740440:
    //  line no 249 , L115740440 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    // invokestatic java/lang/Double.isInfinite(D)Z
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Double_isInfinite__D_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1206931021;
    ; 
    //  line no 250 , L891328061 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L59298126;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4352);
    goto L483669346;
    L59298126:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4353);
    L483669346:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1206931021:
    //  line no 251 , L1206931021 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    stack[sp - 2].f = (f32)stack[sp - 2].d; 
    --sp;
    // invokestatic java/lang/Float.toString(F)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Float_toString__F_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
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

void bridge_org_luaj_vm2_LuaDouble_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_tojstring___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaDouble_strvalue___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2559, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 255 , L1756587746 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaDouble.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 353, 68);
        rstack[sp].obj = __func_p(runtime);
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

void bridge_org_luaj_vm2_LuaDouble_strvalue___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_strvalue___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaDouble_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2560, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 259 , L280397810 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 259;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaDouble.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 353, 68);
        rstack[sp].obj = __func_p(runtime);
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

void bridge_org_luaj_vm2_LuaDouble_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_tostring___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2561, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 263 , L646148183 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 263;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaDouble.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 353, 68);
        rstack[sp].obj = __func_p(runtime);
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

void bridge_org_luaj_vm2_LuaDouble_tostring___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_tostring___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct java_lang_String* func_org_luaj_vm2_LuaDouble_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2562, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 267 , L160549854 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 267;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaDouble.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 353, 68);
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

void bridge_org_luaj_vm2_LuaDouble_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_optjstring__Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaNumber* func_org_luaj_vm2_LuaDouble_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaNumber* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2563, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 271 , L1164692340 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 271;
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

void bridge_org_luaj_vm2_LuaDouble_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaDouble_isnumber___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2564, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 275 , L232042179 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 275;
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

void bridge_org_luaj_vm2_LuaDouble_isnumber___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_isnumber___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaDouble_isstring___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2565, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 279 , L1451708599 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 279;
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

void bridge_org_luaj_vm2_LuaDouble_isstring___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_isstring___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaDouble_tonumber___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2566, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 283 , L379776337 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 283;
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

void bridge_org_luaj_vm2_LuaDouble_tonumber___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_tonumber___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_LuaDouble_checkint___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2567, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 285 , L1474155611 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 285;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_checkint___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_checkint___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s64 func_org_luaj_vm2_LuaDouble_checklong___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2568, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 286 , L800218956 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 286;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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

void bridge_org_luaj_vm2_LuaDouble_checklong___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LuaDouble_checklong___J(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaNumber* func_org_luaj_vm2_LuaDouble_checknumber___Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2569, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 287 , L875456779 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 287;
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

void bridge_org_luaj_vm2_LuaDouble_checknumber___Lorg_luaj_vm2_LuaNumber_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_checknumber___Lorg_luaj_vm2_LuaNumber_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
f64 func_org_luaj_vm2_LuaDouble_checkdouble___D(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    ; 
    //  line no 288 , L2028767654 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
    return stack[sp - 2].d;
    ; 
}

void bridge_org_luaj_vm2_LuaDouble_checkdouble___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_LuaDouble_checkdouble___D(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_LuaDouble_checkjstring___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2571, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 291 , L1916269505 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 291;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaDouble.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 353, 68);
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

void bridge_org_luaj_vm2_LuaDouble_checkjstring___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_checkjstring___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LuaDouble_checkstring___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2572, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 294 , L1680479914 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 294;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaDouble.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 353, 68);
        rstack[sp].obj = __func_p(runtime);
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

void bridge_org_luaj_vm2_LuaDouble_checkstring___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaDouble_checkstring___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_luaj_vm2_LuaDouble_isvalidkey___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2573, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 298 , L692763171 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 298;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaDouble v D
    stack[sp - 1].d = ((struct org_luaj_vm2_LuaDouble*)rstack[sp - 1].obj)->v_51;
    sp += 1;
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
    if(stack[--sp].i  != 0) goto L1771084820;
    // iconst_1
    stack[sp++].i = 1;
    goto L1564170442;
    L1771084820:
    // iconst_0
    stack[sp++].i = 0;
    L1564170442:
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

void bridge_org_luaj_vm2_LuaDouble_isvalidkey___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaDouble_isvalidkey___Z(runtime, ins);
}


// locals: 0
// stack: 4
// args: 1
void func_org_luaj_vm2_LuaDouble__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaDouble* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2574, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 57 , L843410864 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 57;
    // new org/luaj/vm2/LuaDouble
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 353);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getstatic java/lang/Double NaN D
    stack[sp].d =static_var_java_lang_Double.NaN_3;
    sp += 2;
    // invokespecial org/luaj/vm2/LuaDouble.<init>(D)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaDouble__init___D_V(runtime, stack[sp + 0].d);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/LuaDouble NAN Lorg/luaj/vm2/LuaDouble;
    sp -= 1;
    static_var_org_luaj_vm2_LuaDouble.NAN_45 = rstack[sp].obj;
    ; 
    //  line no 60 , L1599612880 , bytecode index = 
    // new org/luaj/vm2/LuaDouble
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 353);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getstatic java/lang/Double POSITIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.POSITIVE_1INFINITY_1;
    sp += 2;
    // invokespecial org/luaj/vm2/LuaDouble.<init>(D)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaDouble__init___D_V(runtime, stack[sp + 0].d);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/LuaDouble POSINF Lorg/luaj/vm2/LuaDouble;
    sp -= 1;
    static_var_org_luaj_vm2_LuaDouble.POSINF_46 = rstack[sp].obj;
    ; 
    //  line no 63 , L1487067641 , bytecode index = 
    // new org/luaj/vm2/LuaDouble
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 353);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getstatic java/lang/Double NEGATIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.NEGATIVE_1INFINITY_2;
    sp += 2;
    // invokespecial org/luaj/vm2/LuaDouble.<init>(D)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaDouble__init___D_V(runtime, stack[sp + 0].d);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/LuaDouble NEGINF Lorg/luaj/vm2/LuaDouble;
    sp -= 1;
    static_var_org_luaj_vm2_LuaDouble.NEGINF_47 = rstack[sp].obj;
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

void bridge_org_luaj_vm2_LuaDouble__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaDouble__clinit____V(runtime, para[0].obj);
}


