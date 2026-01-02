// CLASS: org/luaj/vm2/lib/OsLib extends org/luaj/vm2/lib/TwoArgFunction
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_OsLib_static {struct java_lang_String* TMP_1PREFIX_47; struct java_lang_String* TMP_1SUFFIX_48; s32 CLOCK_49; s32 DATE_50; s32 DIFFTIME_51; s32 EXECUTE_52; s32 EXIT_53; s32 GETENV_54; s32 REMOVE_55; s32 RENAME_56; s32 SETLOCALE_57; s32 TIME_58; s32 TMPNAME_59; JArray * NAMES_60; s64 t0_61; s64 tmpnames_62; JArray * WeekdayNameAbbrev_64; JArray * WeekdayName_65; JArray * MonthNameAbbrev_66; JArray * MonthName_67;  };
struct org_luaj_vm2_lib_OsLib_static static_var_org_luaj_vm2_lib_OsLib = {NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, 0, 0, NULL, NULL, NULL, NULL};


__refer arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_lib_OsLib[] = {
    func_org_luaj_vm2_lib_OsLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_lib_OsLib_clock___D,  //1
    func_org_luaj_vm2_lib_OsLib_difftime__DD_D,  //2
    func_org_luaj_vm2_lib_OsLib_date__Ljava_lang_String_2D_Ljava_lang_String_2,  //3
    func_org_luaj_vm2_lib_OsLib_execute__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2,  //4
    func_org_luaj_vm2_lib_OsLib_exit__I_V,  //5
    func_org_luaj_vm2_lib_OsLib_getenv__Ljava_lang_String_2_Ljava_lang_String_2,  //6
    func_org_luaj_vm2_lib_OsLib_remove__Ljava_lang_String_2_V,  //7
    func_org_luaj_vm2_lib_OsLib_rename__Ljava_lang_String_2Ljava_lang_String_2_V,  //8
    func_org_luaj_vm2_lib_OsLib_setlocale__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2,  //9
    func_org_luaj_vm2_lib_OsLib_time__Lorg_luaj_vm2_LuaTable_2_D,  //10
    func_org_luaj_vm2_lib_OsLib_tmpname___Ljava_lang_String_2  //11
};
__refer arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_lib_TwoArgFunction[] = {
    func_org_luaj_vm2_lib_OsLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //1
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //4
};
__refer arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_lib_LibFunction[] = {
    func_org_luaj_vm2_lib_LibFunction_tojstring___Ljava_lang_String_2,  //0
    func_org_luaj_vm2_lib_LibFunction_bind__Lorg_luaj_vm2_LuaValue_2Ljava_lang_Class_2_3Ljava_lang_String_2_V,  //1
    func_org_luaj_vm2_lib_LibFunction_bind__Lorg_luaj_vm2_LuaValue_2Ljava_lang_Class_2_3Ljava_lang_String_2I_V,  //2
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_lib_OsLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //6
    func_org_luaj_vm2_lib_LibFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //7
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //8
};
__refer arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_LuaFunction[] = {
    func_org_luaj_vm2_LuaFunction_type___I,  //0
    func_org_luaj_vm2_LuaFunction_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaFunction_isfunction___Z,  //2
    func_org_luaj_vm2_LuaFunction_checkfunction___Lorg_luaj_vm2_LuaFunction_2,  //3
    func_org_luaj_vm2_LuaFunction_optfunction__Lorg_luaj_vm2_LuaFunction_2_Lorg_luaj_vm2_LuaFunction_2,  //4
    func_org_luaj_vm2_LuaFunction_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_lib_LibFunction_tojstring___Ljava_lang_String_2,  //6
    func_org_luaj_vm2_LuaFunction_strvalue___Lorg_luaj_vm2_LuaString_2,  //7
    func_org_luaj_vm2_LuaFunction_classnamestub___Ljava_lang_String_2,  //8
    func_org_luaj_vm2_LuaFunction_name___Ljava_lang_String_2  //9
};
__refer arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_LuaValue[] = {
    func_org_luaj_vm2_LuaFunction_type___I,  //0
    func_org_luaj_vm2_LuaFunction_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaValue_isboolean___Z,  //2
    func_org_luaj_vm2_LuaValue_isclosure___Z,  //3
    func_org_luaj_vm2_LuaFunction_isfunction___Z,  //4
    func_org_luaj_vm2_LuaValue_isint___Z,  //5
    func_org_luaj_vm2_LuaValue_isinttype___Z,  //6
    func_org_luaj_vm2_LuaValue_islong___Z,  //7
    func_org_luaj_vm2_LuaValue_isnil___Z,  //8
    func_org_luaj_vm2_LuaValue_isnumber___Z,  //9
    func_org_luaj_vm2_LuaValue_isstring___Z,  //10
    func_org_luaj_vm2_LuaValue_isthread___Z,  //11
    func_org_luaj_vm2_LuaValue_istable___Z,  //12
    func_org_luaj_vm2_LuaValue_isuserdata___Z,  //13
    func_org_luaj_vm2_LuaValue_isuserdata__Ljava_lang_Class_2_Z,  //14
    func_org_luaj_vm2_LuaValue_toboolean___Z,  //15
    func_org_luaj_vm2_LuaValue_tobyte___B,  //16
    func_org_luaj_vm2_LuaValue_tochar___C,  //17
    func_org_luaj_vm2_LuaValue_todouble___D,  //18
    func_org_luaj_vm2_LuaValue_tofloat___F,  //19
    func_org_luaj_vm2_LuaValue_toint___I,  //20
    func_org_luaj_vm2_LuaValue_tolong___J,  //21
    func_org_luaj_vm2_LuaValue_toshort___S,  //22
    func_org_luaj_vm2_lib_LibFunction_tojstring___Ljava_lang_String_2,  //23
    func_org_luaj_vm2_LuaValue_touserdata___Ljava_lang_Object_2,  //24
    func_org_luaj_vm2_LuaValue_touserdata__Ljava_lang_Class_2_Ljava_lang_Object_2,  //25
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //26
    func_org_luaj_vm2_LuaValue_tonumber___Lorg_luaj_vm2_LuaValue_2,  //27
    func_org_luaj_vm2_LuaValue_tostring___Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_LuaValue_optboolean__Z_Z,  //29
    func_org_luaj_vm2_LuaValue_optclosure__Lorg_luaj_vm2_LuaClosure_2_Lorg_luaj_vm2_LuaClosure_2,  //30
    func_org_luaj_vm2_LuaValue_optdouble__D_D,  //31
    func_org_luaj_vm2_LuaFunction_optfunction__Lorg_luaj_vm2_LuaFunction_2_Lorg_luaj_vm2_LuaFunction_2,  //32
    func_org_luaj_vm2_LuaValue_optint__I_I,  //33
    func_org_luaj_vm2_LuaValue_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //34
    func_org_luaj_vm2_LuaValue_optlong__J_J,  //35
    func_org_luaj_vm2_LuaValue_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //36
    func_org_luaj_vm2_LuaValue_optjstring__Ljava_lang_String_2_Ljava_lang_String_2,  //37
    func_org_luaj_vm2_LuaValue_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //38
    func_org_luaj_vm2_LuaValue_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2,  //39
    func_org_luaj_vm2_LuaValue_optthread__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_LuaThread_2,  //40
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Object_2_Ljava_lang_Object_2,  //41
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Class_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //42
    func_org_luaj_vm2_LuaValue_optvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_LuaValue_checkboolean___Z,  //44
    func_org_luaj_vm2_LuaValue_checkclosure___Lorg_luaj_vm2_LuaClosure_2,  //45
    func_org_luaj_vm2_LuaValue_checkdouble___D,  //46
    func_org_luaj_vm2_LuaFunction_checkfunction___Lorg_luaj_vm2_LuaFunction_2,  //47
    func_org_luaj_vm2_LuaValue_checkglobals___Lorg_luaj_vm2_Globals_2,  //48
    func_org_luaj_vm2_LuaValue_checkint___I,  //49
    func_org_luaj_vm2_LuaValue_checkinteger___Lorg_luaj_vm2_LuaInteger_2,  //50
    func_org_luaj_vm2_LuaValue_checklong___J,  //51
    func_org_luaj_vm2_LuaValue_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //52
    func_org_luaj_vm2_LuaValue_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2,  //53
    func_org_luaj_vm2_LuaValue_checkjstring___Ljava_lang_String_2,  //54
    func_org_luaj_vm2_LuaValue_checkstring___Lorg_luaj_vm2_LuaString_2,  //55
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
    func_org_luaj_vm2_LuaFunction_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //99
    func_org_luaj_vm2_LuaValue_setmetatable__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //100
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //101
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //102
    func_org_luaj_vm2_LuaValue_call__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //103
    func_org_luaj_vm2_lib_OsLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //104
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //105
    func_org_luaj_vm2_LuaValue_method__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //106
    func_org_luaj_vm2_LuaValue_method__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //107
    func_org_luaj_vm2_LuaValue_method__Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //108
    func_org_luaj_vm2_LuaValue_method__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //109
    func_org_luaj_vm2_LuaValue_method__Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //110
    func_org_luaj_vm2_LuaValue_method__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //111
    func_org_luaj_vm2_LuaValue_invoke___Lorg_luaj_vm2_Varargs_2,  //112
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //113
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
    func_org_luaj_vm2_LuaValue_neg___Lorg_luaj_vm2_LuaValue_2,  //126
    func_org_luaj_vm2_LuaValue_len___Lorg_luaj_vm2_LuaValue_2,  //127
    func_org_luaj_vm2_LuaValue_length___I,  //128
    func_org_luaj_vm2_LuaValue_rawlen___I,  //129
    func_org_luaj_vm2_LuaValue_equals__Ljava_lang_Object_2_Z,  //130
    func_org_luaj_vm2_LuaValue_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //131
    func_org_luaj_vm2_LuaValue_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //132
    func_org_luaj_vm2_LuaValue_neq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //133
    func_org_luaj_vm2_LuaValue_neq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //134
    func_org_luaj_vm2_LuaValue_raweq__Lorg_luaj_vm2_LuaValue_2_Z,  //135
    func_org_luaj_vm2_LuaValue_raweq__Lorg_luaj_vm2_LuaUserdata_2_Z,  //136
    func_org_luaj_vm2_LuaValue_raweq__Lorg_luaj_vm2_LuaString_2_Z,  //137
    func_org_luaj_vm2_LuaValue_raweq__D_Z,  //138
    func_org_luaj_vm2_LuaValue_raweq__I_Z,  //139
    func_org_luaj_vm2_LuaValue_add__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //140
    func_org_luaj_vm2_LuaValue_add__D_Lorg_luaj_vm2_LuaValue_2,  //141
    func_org_luaj_vm2_LuaValue_add__I_Lorg_luaj_vm2_LuaValue_2,  //142
    func_org_luaj_vm2_LuaValue_sub__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //143
    func_org_luaj_vm2_LuaValue_sub__D_Lorg_luaj_vm2_LuaValue_2,  //144
    func_org_luaj_vm2_LuaValue_sub__I_Lorg_luaj_vm2_LuaValue_2,  //145
    func_org_luaj_vm2_LuaValue_subFrom__D_Lorg_luaj_vm2_LuaValue_2,  //146
    func_org_luaj_vm2_LuaValue_subFrom__I_Lorg_luaj_vm2_LuaValue_2,  //147
    func_org_luaj_vm2_LuaValue_mul__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //148
    func_org_luaj_vm2_LuaValue_mul__D_Lorg_luaj_vm2_LuaValue_2,  //149
    func_org_luaj_vm2_LuaValue_mul__I_Lorg_luaj_vm2_LuaValue_2,  //150
    func_org_luaj_vm2_LuaValue_pow__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //151
    func_org_luaj_vm2_LuaValue_pow__D_Lorg_luaj_vm2_LuaValue_2,  //152
    func_org_luaj_vm2_LuaValue_pow__I_Lorg_luaj_vm2_LuaValue_2,  //153
    func_org_luaj_vm2_LuaValue_powWith__D_Lorg_luaj_vm2_LuaValue_2,  //154
    func_org_luaj_vm2_LuaValue_powWith__I_Lorg_luaj_vm2_LuaValue_2,  //155
    func_org_luaj_vm2_LuaValue_div__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //156
    func_org_luaj_vm2_LuaValue_div__D_Lorg_luaj_vm2_LuaValue_2,  //157
    func_org_luaj_vm2_LuaValue_div__I_Lorg_luaj_vm2_LuaValue_2,  //158
    func_org_luaj_vm2_LuaValue_divInto__D_Lorg_luaj_vm2_LuaValue_2,  //159
    func_org_luaj_vm2_LuaValue_mod__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //160
    func_org_luaj_vm2_LuaValue_mod__D_Lorg_luaj_vm2_LuaValue_2,  //161
    func_org_luaj_vm2_LuaValue_mod__I_Lorg_luaj_vm2_LuaValue_2,  //162
    func_org_luaj_vm2_LuaValue_modFrom__D_Lorg_luaj_vm2_LuaValue_2,  //163
    func_org_luaj_vm2_LuaValue_arithmt__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //164
    func_org_luaj_vm2_LuaValue_arithmtwith__Lorg_luaj_vm2_LuaValue_2D_Lorg_luaj_vm2_LuaValue_2,  //165
    func_org_luaj_vm2_LuaValue_lt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //166
    func_org_luaj_vm2_LuaValue_lt__D_Lorg_luaj_vm2_LuaValue_2,  //167
    func_org_luaj_vm2_LuaValue_lt__I_Lorg_luaj_vm2_LuaValue_2,  //168
    func_org_luaj_vm2_LuaValue_lt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //169
    func_org_luaj_vm2_LuaValue_lt_1b__I_Z,  //170
    func_org_luaj_vm2_LuaValue_lt_1b__D_Z,  //171
    func_org_luaj_vm2_LuaValue_lteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //172
    func_org_luaj_vm2_LuaValue_lteq__D_Lorg_luaj_vm2_LuaValue_2,  //173
    func_org_luaj_vm2_LuaValue_lteq__I_Lorg_luaj_vm2_LuaValue_2,  //174
    func_org_luaj_vm2_LuaValue_lteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //175
    func_org_luaj_vm2_LuaValue_lteq_1b__I_Z,  //176
    func_org_luaj_vm2_LuaValue_lteq_1b__D_Z,  //177
    func_org_luaj_vm2_LuaValue_gt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //178
    func_org_luaj_vm2_LuaValue_gt__D_Lorg_luaj_vm2_LuaValue_2,  //179
    func_org_luaj_vm2_LuaValue_gt__I_Lorg_luaj_vm2_LuaValue_2,  //180
    func_org_luaj_vm2_LuaValue_gt_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //181
    func_org_luaj_vm2_LuaValue_gt_1b__I_Z,  //182
    func_org_luaj_vm2_LuaValue_gt_1b__D_Z,  //183
    func_org_luaj_vm2_LuaValue_gteq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //184
    func_org_luaj_vm2_LuaValue_gteq__D_Lorg_luaj_vm2_LuaValue_2,  //185
    func_org_luaj_vm2_LuaValue_gteq__I_Lorg_luaj_vm2_LuaValue_2,  //186
    func_org_luaj_vm2_LuaValue_gteq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //187
    func_org_luaj_vm2_LuaValue_gteq_1b__I_Z,  //188
    func_org_luaj_vm2_LuaValue_gteq_1b__D_Z,  //189
    func_org_luaj_vm2_LuaValue_comparemt__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //190
    func_org_luaj_vm2_LuaValue_strcmp__Lorg_luaj_vm2_LuaValue_2_I,  //191
    func_org_luaj_vm2_LuaValue_strcmp__Lorg_luaj_vm2_LuaString_2_I,  //192
    func_org_luaj_vm2_LuaValue_concat__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //193
    func_org_luaj_vm2_LuaValue_concatTo__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //194
    func_org_luaj_vm2_LuaValue_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaValue_2,  //195
    func_org_luaj_vm2_LuaValue_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaValue_2,  //196
    func_org_luaj_vm2_LuaValue_buffer___Lorg_luaj_vm2_Buffer_2,  //197
    func_org_luaj_vm2_LuaValue_concat__Lorg_luaj_vm2_Buffer_2_Lorg_luaj_vm2_Buffer_2,  //198
    func_org_luaj_vm2_LuaValue_concatmt__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //199
    func_org_luaj_vm2_LuaValue_and__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //200
    func_org_luaj_vm2_LuaValue_or__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //201
    func_org_luaj_vm2_LuaValue_testfor_1b__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Z,  //202
    func_org_luaj_vm2_LuaFunction_strvalue___Lorg_luaj_vm2_LuaString_2,  //203
    func_org_luaj_vm2_LuaValue_strongvalue___Lorg_luaj_vm2_LuaValue_2,  //204
    func_org_luaj_vm2_LuaValue_metatag__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //205
    func_org_luaj_vm2_LuaValue_checkmetatag__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //206
    func_org_luaj_vm2_LuaValue_onInvoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //207
    func_org_luaj_vm2_LuaValue_initupvalue1__Lorg_luaj_vm2_LuaValue_2_V,  //208
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2  //209
};
__refer arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_Varargs[] = {
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
    func_org_luaj_vm2_lib_LibFunction_tojstring___Ljava_lang_String_2,  //58
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //59
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2,  //60
    func_org_luaj_vm2_Varargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V,  //61
    func_org_luaj_vm2_Varargs_dealias___Lorg_luaj_vm2_Varargs_2  //62
};
__refer arr_vmtable_org_luaj_vm2_lib_OsLib_from_java_lang_Object[] = {
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_org_luaj_vm2_LuaValue_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_Object_hashCode___I  //9
};
VMTable vmtable_org_luaj_vm2_lib_OsLib[] = {
    {303, 12, arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_lib_OsLib}, //0
    {73, 5, arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_lib_TwoArgFunction}, //1
    {18, 9, arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_lib_LibFunction}, //2
    {19, 10, arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_LuaFunction}, //3
    {1, 210, arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_LuaValue}, //4
    {2, 63, arr_vmtable_org_luaj_vm2_lib_OsLib_from_org_luaj_vm2_Varargs}, //5
    {5, 10, arr_vmtable_org_luaj_vm2_lib_OsLib_from_java_lang_Object}, //6
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_lib_OsLib__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1903, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 120 , L1966114624 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 120;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/TwoArgFunction.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_TwoArgFunction__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 121 , L1523359711 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_OsLib__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_OsLib__init____V(runtime, ins);
}


// locals: 5
// stack: 8
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_OsLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1904, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 130 , L239648666 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 130;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaValue.checkglobals()Lorg/luaj/vm2/Globals;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Globals* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 48);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/lib/OsLib globals Lorg/luaj/vm2/Globals;
    sp -= 2;
    ((struct org_luaj_vm2_lib_OsLib*)rstack[sp + 0].obj)->globals_63 = rstack[sp + 1].obj;
    ; 
    //  line no 131 , L2142450580 , bytecode index = 
    // new org/luaj/vm2/LuaTable
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 33);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/LuaTable.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 132 , L1103067610 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L445192925:
    stack[sp++].i = local[4].i;
    // getstatic org/luaj/vm2/lib/OsLib NAMES [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_OsLib.NAMES_60;
    sp += 1;
    // arraylength  label  L445192925
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1366741625;
    ; 
    //  line no 133 , L926905424 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getstatic org/luaj/vm2/lib/OsLib NAMES [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_OsLib.NAMES_60;
    sp += 1;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L926905424 bc index = 
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
    // new org/luaj/vm2/lib/OsLib$OsLibFunc
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 302);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // getstatic org/luaj/vm2/lib/OsLib NAMES [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_OsLib.NAMES_60;
    sp += 1;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L926905424 bc index = 
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
    // invokespecial org/luaj/vm2/lib/OsLib$OsLibFunc.<init>(Lorg/luaj/vm2/lib/OsLib;ILjava/lang/String;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_OsLib_00024OsLibFunc__init___Lorg_luaj_vm2_lib_OsLib_2ILjava_lang_String_2_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaTable.set(Ljava/lang/String;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 77);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 132 , L225753796 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L445192925;
    L1366741625:
    //  line no 134 , L1366741625 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3258);
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/LuaValue.set(Ljava/lang/String;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 77);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 135 , L1610155589 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1588);
    // invokevirtual org/luaj/vm2/LuaValue.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.isnil()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L947647193;
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1588);
    // invokevirtual org/luaj/vm2/LuaValue.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1589);
    // invokevirtual org/luaj/vm2/LuaValue.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3258);
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/LuaValue.set(Ljava/lang/String;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 77);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L947647193:
    //  line no 136 , L947647193 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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

void bridge_org_luaj_vm2_lib_OsLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_OsLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 4
// args: 0
f64 func_org_luaj_vm2_lib_OsLib_clock___D(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1905, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 208 , L1545644729 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 208;
    // invokestatic java/lang/System.currentTimeMillis()J
    {
        sp -= 1;
        stack[sp].j = func_java_lang_System_currentTimeMillis___J(runtime, rstack[sp + 0].obj);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic org/luaj/vm2/lib/OsLib t0 J
    stack[sp].j =static_var_org_luaj_vm2_lib_OsLib.t0_61;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    //  ldc 
    stack[sp].d = 1000.0;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
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

void bridge_org_luaj_vm2_lib_OsLib_clock___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_lib_OsLib_clock___D(runtime, ins);
}


// locals: 5
// stack: 4
// args: 2
f64 func_org_luaj_vm2_lib_OsLib_difftime__DD_D(JThreadRuntime *runtime, f64 p0, f64 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1906, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    local[2].d = p2;
    ; 
    //  line no 219 , L745966298 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 219;
    stack[sp].d = local[1].d;
    sp += 2;
    stack[sp].d = local[3].d;
    sp += 2;
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

void bridge_org_luaj_vm2_lib_OsLib_difftime__DD_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_lib_OsLib_difftime__DD_D(runtime, ins, para[0].d);
}


// locals: 14
// stack: 7
// args: 2
struct java_lang_String* func_org_luaj_vm2_lib_OsLib_date__Ljava_lang_String_2D_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, f64 p1){
    
    StackItem local[14] = {0};
    RStackItem rlocal[14] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1907, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 241 , L1429462130 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 241;
    // invokestatic java/util/Calendar.getInstance()Ljava/util/Calendar;
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[216].clazz);
        rstack[sp].obj = func_java_util_Calendar_getInstance___Ljava_util_Calendar_2(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[216].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 242 , L2084863094 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // new java/util/Date
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 217);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp].d = local[2].d;
    sp += 2;
    //  ldc 
    stack[sp].d = 1000.0;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    // invokespecial java/util/Date.<init>(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Date__init___J_V(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Calendar.setTime(Ljava/util/Date;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Date*) = find_method(__ins->vm_table, 216, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 243 , L1694239102 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3263);
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
    if(stack[--sp].i  == 0) goto L373342545;
    ; 
    //  line no 244 , L1566269351 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokespecial org/luaj/vm2/lib/OsLib.timeZoneOffset(Ljava/util/Calendar;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_lib_OsLib_timeZoneOffset__Ljava_util_Calendar_2_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].d = (f64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].d = stack[sp - 4].d - stack[sp - 2].d; 
    sp -= 2;
    sp -= 2;
    local[2].d = stack[sp].d;
    ; 
    //  line no 245 , L44249014 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // new java/util/Date
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 217);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp].d = local[2].d;
    sp += 2;
    //  ldc 
    stack[sp].d = 1000.0;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    // invokespecial java/util/Date.<init>(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Date__init___J_V(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Calendar.setTime(Ljava/util/Date;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Date*) = find_method(__ins->vm_table, 216, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 246 , L101740901 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    rlocal[1].obj = rstack[--sp].obj;
    L373342545:
    //  line no 248 , L373342545 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.getBytes()[B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 26);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 249 , L373973695 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // arraylength  label  L373973695
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[6].i = stack[--sp].i;
    ; 
    //  line no 250 , L300659126 , bytecode index = 
    // new org/luaj/vm2/Buffer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 48);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[6].i;
    // invokespecial org/luaj/vm2/Buffer.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Buffer__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 252 , L179233442 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[9].i = stack[--sp].i;
    L254812619:
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1252713736;
    ; 
    //  line no 253 , L100703210 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[9].i;
    // iinc slot 9 value 1
    local[9].i += 1;
    // arrload s8  ,  L100703210 bc index = 
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
    local[8].i = stack[--sp].i;
    ; 
    switch(stack[--sp].i){
        case 10:
            goto L1751753651;
        case 37:
            goto L1790229151;
        default:
            goto L1970707120;
    }
    L1751753651:
    //  line no 255 , L1751753651 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 895);
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 256 , L665641137 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1970707120:
    //  line no 258 , L1970707120 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[8].i;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 259 , L1716411886 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1790229151:
    //  line no 261 , L1790229151 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1126112943;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1126112943:
    //  line no 262 , L1126112943 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[9].i;
    // iinc slot 9 value 1
    local[9].i += 1;
    // arrload s8  ,  L1126112943 bc index = 
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
    local[8].i = stack[--sp].i;
    switch(stack[--sp].i){
        case 37:
            goto L1280959582;
        case 38:
            goto L212874257;
        case 39:
            goto L212874257;
        case 40:
            goto L212874257;
        case 41:
            goto L212874257;
        case 42:
            goto L212874257;
        case 43:
            goto L212874257;
        case 44:
            goto L212874257;
        case 45:
            goto L212874257;
        case 46:
            goto L212874257;
        case 47:
            goto L212874257;
        case 48:
            goto L212874257;
        case 49:
            goto L212874257;
        case 50:
            goto L212874257;
        case 51:
            goto L212874257;
        case 52:
            goto L212874257;
        case 53:
            goto L212874257;
        case 54:
            goto L212874257;
        case 55:
            goto L212874257;
        case 56:
            goto L212874257;
        case 57:
            goto L212874257;
        case 58:
            goto L212874257;
        case 59:
            goto L212874257;
        case 60:
            goto L212874257;
        case 61:
            goto L212874257;
        case 62:
            goto L212874257;
        case 63:
            goto L212874257;
        case 64:
            goto L212874257;
        case 65:
            goto L1491890454;
        case 66:
            goto L1673389762;
        case 67:
            goto L212874257;
        case 68:
            goto L212874257;
        case 69:
            goto L212874257;
        case 70:
            goto L212874257;
        case 71:
            goto L212874257;
        case 72:
            goto L1855997464;
        case 73:
            goto L1842881670;
        case 74:
            goto L212874257;
        case 75:
            goto L212874257;
        case 76:
            goto L212874257;
        case 77:
            goto L1443335402;
        case 78:
            goto L212874257;
        case 79:
            goto L212874257;
        case 80:
            goto L212874257;
        case 81:
            goto L212874257;
        case 82:
            goto L212874257;
        case 83:
            goto L1510009630;
        case 84:
            goto L212874257;
        case 85:
            goto L922547904;
        case 86:
            goto L212874257;
        case 87:
            goto L447486093;
        case 88:
            goto L1881585646;
        case 89:
            goto L757332719;
        case 90:
            goto L212874257;
        case 91:
            goto L212874257;
        case 92:
            goto L212874257;
        case 93:
            goto L212874257;
        case 94:
            goto L212874257;
        case 95:
            goto L212874257;
        case 96:
            goto L212874257;
        case 97:
            goto L2092450685;
        case 98:
            goto L103433239;
        case 99:
            goto L1140202235;
        case 100:
            goto L1898996968;
        case 101:
            goto L212874257;
        case 102:
            goto L212874257;
        case 103:
            goto L212874257;
        case 104:
            goto L212874257;
        case 105:
            goto L212874257;
        case 106:
            goto L1336762904;
        case 107:
            goto L212874257;
        case 108:
            goto L212874257;
        case 109:
            goto L468950278;
        case 110:
            goto L212874257;
        case 111:
            goto L212874257;
        case 112:
            goto L1747025217;
        case 113:
            goto L212874257;
        case 114:
            goto L212874257;
        case 115:
            goto L212874257;
        case 116:
            goto L212874257;
        case 117:
            goto L212874257;
        case 118:
            goto L212874257;
        case 119:
            goto L449074057;
        case 120:
            goto L1046302571;
        case 121:
            goto L969014795;
        case 122:
            goto L1525241607;
        default:
            goto L212874257;
    }
    L212874257:
    //  line no 264 , L212874257 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3264);
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
    stack[sp++].i = local[8].i;
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
    // invokestatic org/luaj/vm2/LuaValue.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_argerror__ILjava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 265 , L1653153736 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1280959582:
    //  line no 267 , L1280959582 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  bipush 37
    stack[sp++].i = 37;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 268 , L914039525 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L2092450685:
    //  line no 270 , L2092450685 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getstatic org/luaj/vm2/lib/OsLib WeekdayNameAbbrev [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_OsLib.WeekdayNameAbbrev_64;
    sp += 1;
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 7
    stack[sp++].i = 7;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
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
    // arrload __refer  ,  L2092450685 bc index = 
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 271 , L16556935 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1491890454:
    //  line no 273 , L1491890454 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getstatic org/luaj/vm2/lib/OsLib WeekdayName [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_OsLib.WeekdayName_65;
    sp += 1;
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 7
    stack[sp++].i = 7;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
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
    // arrload __refer  ,  L1491890454 bc index = 
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 274 , L280862192 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L103433239:
    //  line no 276 , L103433239 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getstatic org/luaj/vm2/lib/OsLib MonthNameAbbrev [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_OsLib.MonthNameAbbrev_66;
    sp += 1;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrload __refer  ,  L103433239 bc index = 
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 277 , L987805552 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1673389762:
    //  line no 279 , L1673389762 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // getstatic org/luaj/vm2/lib/OsLib MonthName [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_OsLib.MonthName_67;
    sp += 1;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrload __refer  ,  L1673389762 bc index = 
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 280 , L1440995011 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1140202235:
    //  line no 282 , L1140202235 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3265);
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/lib/OsLib.date(Ljava/lang/String;D)Ljava/lang/String;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,struct java_lang_String*,f64) = find_method(__ins->vm_table, 303, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 283 , L820422499 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1898996968:
    //  line no 285 , L1898996968 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  bipush 100
    stack[sp++].i = 100;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_5
    stack[sp++].i = 5;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 286 , L1279852178 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1855997464:
    //  line no 288 , L1855997464 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  bipush 100
    stack[sp++].i = 100;
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 289 , L1932303196 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1842881670:
    //  line no 291 , L1842881670 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  bipush 100
    stack[sp++].i = 100;
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 12
    stack[sp++].i = 12;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 292 , L942804532 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1336762904:
    //  line no 294 , L1336762904 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokespecial org/luaj/vm2/lib/OsLib.beginningOfYear(Ljava/util/Calendar;)Ljava/util/Calendar;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_OsLib_beginningOfYear__Ljava_util_Calendar_2_Ljava_util_Calendar_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[10].obj = rstack[--sp].obj;
    ; 
    //  line no 295 , L1030384622 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/util/Calendar.getTime()Ljava/util/Date;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Date* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Date.getTime()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 217, 0);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[10].obj;
    // invokevirtual java/util/Calendar.getTime()Ljava/util/Date;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Date* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Date.getTime()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 217, 0);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x5265c00L;
    sp += 2;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 296 , L920497855 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  sipush 1001
    stack[sp++].i = 1001;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 297 , L557593923 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L468950278:
    //  line no 300 , L468950278 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  bipush 101
    stack[sp++].i = 101;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 301 , L165137662 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1443335402:
    //  line no 303 , L1443335402 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  bipush 100
    stack[sp++].i = 100;
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 12
    stack[sp++].i = 12;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 304 , L1728897841 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1747025217:
    //  line no 306 , L1747025217 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1023344953;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3266);
    goto L2083106248;
    L1023344953:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3267);
    L2083106248:
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 307 , L1261321871 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1510009630:
    //  line no 309 , L1510009630 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    //  bipush 100
    stack[sp++].i = 100;
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 13
    stack[sp++].i = 13;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 310 , L1270565296 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L922547904:
    //  line no 312 , L922547904 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial org/luaj/vm2/lib/OsLib.weekNumber(Ljava/util/Calendar;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_lib_OsLib_weekNumber__Ljava_util_Calendar_2I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 313 , L252276535 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L449074057:
    //  line no 315 , L449074057 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 7
    stack[sp++].i = 7;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 316 , L1056953587 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L447486093:
    //  line no 318 , L447486093 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial org/luaj/vm2/lib/OsLib.weekNumber(Ljava/util/Calendar;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_lib_OsLib_weekNumber__Ljava_util_Calendar_2I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 319 , L69160933 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1046302571:
    //  line no 321 , L1046302571 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3268);
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/lib/OsLib.date(Ljava/lang/String;D)Ljava/lang/String;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,struct java_lang_String*,f64) = find_method(__ins->vm_table, 303, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 322 , L368603167 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1881585646:
    //  line no 324 , L1881585646 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3269);
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/lib/OsLib.date(Ljava/lang/String;D)Ljava/lang/String;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,struct java_lang_String*,f64) = find_method(__ins->vm_table, 303, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 325 , L1363989824 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L969014795:
    //  line no 327 , L969014795 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    // iconst_2
    stack[sp++].i = 2;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 328 , L299162582 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L757332719:
    //  line no 330 , L757332719 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 331 , L1867177582 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1525241607:
    //  line no 333 , L1525241607 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokespecial org/luaj/vm2/lib/OsLib.timeZoneOffset(Ljava/util/Calendar;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_lib_OsLib_timeZoneOffset__Ljava_util_Calendar_2_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 334 , L971256592 , bytecode index = 
    stack[sp++].i = local[10].i;
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
    local[11].i = stack[--sp].i;
    ; 
    //  line no 335 , L246745017 , bytecode index = 
    //  bipush 100
    stack[sp++].i = 100;
    stack[sp++].i = local[11].i;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    rlocal[12].obj = rstack[--sp].obj;
    ; 
    //  line no 336 , L956856274 , bytecode index = 
    //  bipush 100
    stack[sp++].i = 100;
    stack[sp++].i = local[11].i;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    rlocal[13].obj = rstack[--sp].obj;
    ; 
    //  line no 337 , L550707 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
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
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  < 0) goto L409778321;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3270);
    goto L1052962026;
    L409778321:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2581);
    L1052962026:
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
    rstack[sp++].obj = rlocal[12].obj;
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
    rstack[sp++].obj = rlocal[13].obj;
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
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 338 , L1141811719 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L254812619;
    L1252713736:
    //  line no 343 , L1252713736 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // invokevirtual org/luaj/vm2/Buffer.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 48, 3);
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

void bridge_org_luaj_vm2_lib_OsLib_date__Ljava_lang_String_2D_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_OsLib_date__Ljava_lang_String_2D_Ljava_lang_String_2(runtime, ins, para[0].d);
}


// locals: 3
// stack: 3
// args: 1
struct java_util_Calendar* func_org_luaj_vm2_lib_OsLib_beginningOfYear__Ljava_util_Calendar_2_Ljava_util_Calendar_2(JThreadRuntime *runtime, struct java_util_Calendar* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1908, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 352 , L2057954324 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 352;
    // invokestatic java/util/Calendar.getInstance()Ljava/util/Calendar;
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[216].clazz);
        rstack[sp].obj = func_java_util_Calendar_getInstance___Ljava_util_Calendar_2(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[216].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 353 , L1403380247 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Calendar.getTime()Ljava/util/Date;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Date* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Calendar.setTime(Ljava/util/Date;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Date*) = find_method(__ins->vm_table, 216, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 354 , L1649026294 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 355 , L112200409 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_5
    stack[sp++].i = 5;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 356 , L864864095 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 357 , L1329938019 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 12
    stack[sp++].i = 12;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 358 , L2090589929 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 13
    stack[sp++].i = 13;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 359 , L2063332705 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 14
    stack[sp++].i = 14;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 360 , L798516062 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_OsLib_beginningOfYear__Ljava_util_Calendar_2_Ljava_util_Calendar_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_OsLib_beginningOfYear__Ljava_util_Calendar_2_Ljava_util_Calendar_2(runtime, ins);
}


// locals: 6
// stack: 6
// args: 2
s32 func_org_luaj_vm2_lib_OsLib_weekNumber__Ljava_util_Calendar_2I_I(JThreadRuntime *runtime, struct java_util_Calendar* p0, s32 p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1909, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 364 , L1795560878 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 364;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/lib/OsLib.beginningOfYear(Ljava/util/Calendar;)Ljava/util/Calendar;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_OsLib_beginningOfYear__Ljava_util_Calendar_2_Ljava_util_Calendar_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 365 , L1316205906 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_5
    stack[sp++].i = 5;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 7
    stack[sp++].i = 7;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 366 , L572370257 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Calendar.after(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 216, 8);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L753692748;
    ; 
    //  line no 367 , L1998371610 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 368 , L605440398 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_5
    stack[sp++].i = 5;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[2].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 7
    stack[sp++].i = 7;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L753692748:
    //  line no 370 , L753692748 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Calendar.getTime()Ljava/util/Date;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Date* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Date.getTime()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 217, 0);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/util/Calendar.getTime()Ljava/util/Date;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Date* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Date.getTime()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 217, 0);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[4].j = stack[sp].j;
    ; 
    //  line no 371 , L1798180728 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp].j = local[4].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x240c8400L;
    sp += 2;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
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

void bridge_org_luaj_vm2_lib_OsLib_weekNumber__Ljava_util_Calendar_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_OsLib_weekNumber__Ljava_util_Calendar_2I_I(runtime, ins, para[0].i);
}


// locals: 3
// stack: 7
// args: 1
s32 func_org_luaj_vm2_lib_OsLib_timeZoneOffset__Ljava_util_Calendar_2_I(JThreadRuntime *runtime, struct java_util_Calendar* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1910, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 375 , L911857585 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 375;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 11
    stack[sp++].i = 11;
    ; 
    //  line no 376 , L538292941 , bytecode index = 
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  sipush 3600
    stack[sp++].i = 3600;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 12
    stack[sp++].i = 12;
    ; 
    //  line no 377 , L1004219512 , bytecode index = 
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 60
    stack[sp++].i = 60;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 13
    stack[sp++].i = 13;
    ; 
    //  line no 378 , L1684615718 , bytecode index = 
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  sipush 1000
    stack[sp++].i = 1000;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 379 , L477463877 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Calendar.getTimeZone()Ljava/util/TimeZone;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    ; 
    //  line no 381 , L293326812 , bytecode index = 
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_2
    stack[sp++].i = 2;
    ; 
    //  line no 382 , L1939970407 , bytecode index = 
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_5
    stack[sp++].i = 5;
    ; 
    //  line no 383 , L1584688439 , bytecode index = 
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 7
    stack[sp++].i = 7;
    ; 
    //  line no 384 , L1847301137 , bytecode index = 
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    ; 
    //  line no 379 , L567391009 , bytecode index = 
    // invokevirtual java/util/TimeZone.getOffset(IIIIII)I
    {
        sp -= 6;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32,s32,s32) = find_method(__ins->vm_table, 13, 0);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  sipush 1000
    stack[sp++].i = 1000;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
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

void bridge_org_luaj_vm2_lib_OsLib_timeZoneOffset__Ljava_util_Calendar_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_OsLib_timeZoneOffset__Ljava_util_Calendar_2_I(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s8 func_org_luaj_vm2_lib_OsLib_isDaylightSavingsTime__Ljava_util_Calendar_2_Z(JThreadRuntime *runtime, struct java_util_Calendar* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1911, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 389 , L589610983 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 389;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/lib/OsLib.timeZoneOffset(Ljava/util/Calendar;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_lib_OsLib_timeZoneOffset__Ljava_util_Calendar_2_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Calendar.getTimeZone()Ljava/util/TimeZone;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/TimeZone.getRawOffset()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 13, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  sipush 1000
    stack[sp++].i = 1000;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L288169102;
    // iconst_1
    stack[sp++].i = 1;
    goto L1028259121;
    L288169102:
    // iconst_0
    stack[sp++].i = 0;
    L1028259121:
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

void bridge_org_luaj_vm2_lib_OsLib_isDaylightSavingsTime__Ljava_util_Calendar_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_OsLib_isDaylightSavingsTime__Ljava_util_Calendar_2_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_OsLib_execute__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1912, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 401 , L1187748003 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 401;
    // getstatic org/luaj/vm2/lib/OsLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2540);
    // invokestatic org/luaj/vm2/lib/OsLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic org/luaj/vm2/lib/OsLib ONE Lorg/luaj/vm2/LuaNumber;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ONE_18;
    sp += 1;
    // invokestatic org/luaj/vm2/lib/OsLib.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
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

void bridge_org_luaj_vm2_lib_OsLib_execute__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_OsLib_execute__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
void func_org_luaj_vm2_lib_OsLib_exit__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1913, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 409 , L1302984483 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 409;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/System.exit(I)V
    {
        sp -= 2;
        func_java_lang_System_exit__I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 410 , L992955027 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_OsLib_exit__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_OsLib_exit__I_V(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct java_lang_String* func_org_luaj_vm2_lib_OsLib_getenv__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1914, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 430 , L1191863711 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 430;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/lang/System.getProperty(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_System_getProperty__Ljava_lang_String_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_lib_OsLib_getenv__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_OsLib_getenv__Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_lib_OsLib_remove__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1915, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 442 , L77738832 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 442;
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 152);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3280);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_IOException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L77738832 in labeltable is :L77738832
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 442;
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

void bridge_org_luaj_vm2_lib_OsLib_remove__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_OsLib_remove__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_org_luaj_vm2_lib_OsLib_rename__Ljava_lang_String_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1916, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 454 , L1875532039 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 454;
    // new java/io/IOException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 152);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3280);
    // invokespecial java/io/IOException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_IOException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1875532039 in labeltable is :L1875532039
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 454;
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

void bridge_org_luaj_vm2_lib_OsLib_rename__Ljava_lang_String_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_OsLib_rename__Ljava_lang_String_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 1
// args: 2
struct java_lang_String* func_org_luaj_vm2_lib_OsLib_setlocale__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1917, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 476 , L2079051109 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 476;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3283);
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

void bridge_org_luaj_vm2_lib_OsLib_setlocale__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_OsLib_setlocale__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 4
// args: 1
f64 func_org_luaj_vm2_lib_OsLib_time__Lorg_luaj_vm2_LuaTable_2_D(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1918, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 490 , L2063275841 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 490;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L641449963;
    ; 
    //  line no 491 , L52354732 , bytecode index = 
    // new java/util/Date
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 217);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/Date.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Date__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    goto L1169894049;
    L641449963:
    //  line no 493 , L641449963 , bytecode index = 
    // invokestatic java/util/Calendar.getInstance()Ljava/util/Calendar;
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[216].clazz);
        rstack[sp].obj = func_java_util_Calendar_getInstance___Ljava_util_Calendar_2(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[216].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 494 , L1048842522 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3286);
    // invokevirtual org/luaj/vm2/LuaTable.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.checkint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 49);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 495 , L1260012504 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_2
    stack[sp++].i = 2;
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3287);
    // invokevirtual org/luaj/vm2/LuaTable.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.checkint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 49);
        stack[sp].i = __func_p(runtime);
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
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 496 , L1873189623 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_5
    stack[sp++].i = 5;
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3288);
    // invokevirtual org/luaj/vm2/LuaTable.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.checkint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 49);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 497 , L1934908288 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 11
    stack[sp++].i = 11;
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3289);
    // invokevirtual org/luaj/vm2/LuaTable.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 12
    stack[sp++].i = 12;
    // invokevirtual org/luaj/vm2/LuaValue.optint(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 33);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 498 , L1833343025 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 12
    stack[sp++].i = 12;
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 81);
    // invokevirtual org/luaj/vm2/LuaTable.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/LuaValue.optint(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 33);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 499 , L1960514242 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 13
    stack[sp++].i = 13;
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3290);
    // invokevirtual org/luaj/vm2/LuaTable.get(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 1, 73);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/LuaValue.optint(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 1, 33);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 500 , L804347788 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 14
    stack[sp++].i = 14;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/util/Calendar.set(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 216, 5);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 501 , L2124978601 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/util/Calendar.getTime()Ljava/util/Date;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Date* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    L1169894049:
    //  line no 503 , L1169894049 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/Date.getTime()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 217, 0);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    //  ldc 
    stack[sp].d = 1000.0;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
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

void bridge_org_luaj_vm2_lib_OsLib_time__Lorg_luaj_vm2_LuaTable_2_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_org_luaj_vm2_lib_OsLib_time__Lorg_luaj_vm2_LuaTable_2_D(runtime, ins);
}

ExceptionItem arr_extable_func_org_luaj_vm2_lib_OsLib_tmpname___Ljava_lang_String_2[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_org_luaj_vm2_lib_OsLib_tmpname___Ljava_lang_String_2 = {2, arr_extable_func_org_luaj_vm2_lib_OsLib_tmpname___Ljava_lang_String_2};

// locals: 3
// stack: 7
// args: 0
struct java_lang_String* func_org_luaj_vm2_lib_OsLib_tmpname___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1919, &rstack[0], &rlocal[0], &sp);
    // try catch :L186075763 L775911842 L341887005 (
    // try catch :L341887005 L59465509 L341887005 (
    ; 
    //  line no 520 , L847174133 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 520;
    //  ldc 
    {
        class_clinit(runtime, get_utf8str_by_utfraw_index(3257));
        JClass *clazz = classes_get(get_utf8str_by_utfraw_index(3257));
        rstack[sp++].obj = ins_of_Class_create_get(runtime, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L186075763:
    __frame->bytecodeIndex = 
    //  line no 521 , L186075763 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3292);
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
    // getstatic org/luaj/vm2/lib/OsLib tmpnames J
    stack[sp].j =static_var_org_luaj_vm2_lib_OsLib.tmpnames_62;
    sp += 2;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    // putstatic org/luaj/vm2/lib/OsLib tmpnames J
    sp -= 2;
    static_var_org_luaj_vm2_lib_OsLib.tmpnames_62 = stack[sp].j;
    // invokevirtual java/lang/StringBuilder.append(J)Ljava/lang/StringBuilder;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 41, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].j);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3293);
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
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L775911842:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L341887005:
    __frame->bytecodeIndex = 
    //  line no 522 , L341887005 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L59465509:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L59465509 in labeltable is :L59465509
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 522;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L341887005;
        case 1 : goto L341887005;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_OsLib_tmpname___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_OsLib_tmpname___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 3
s8 func_org_luaj_vm2_lib_OsLib_access_00024000__Lorg_luaj_vm2_lib_OsLib_2Ljava_util_Calendar_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_lib_OsLib* p0, struct org_luaj_vm2_lib_OsLib* p1, struct java_util_Calendar* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1920, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 82 , L1969969319 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 82;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/lib/OsLib.isDaylightSavingsTime(Ljava/util/Calendar;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_lib_OsLib_isDaylightSavingsTime__Ljava_util_Calendar_2_Z(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_lib_OsLib_access_00024000__Lorg_luaj_vm2_lib_OsLib_2Ljava_util_Calendar_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_OsLib_access_00024000__Lorg_luaj_vm2_lib_OsLib_2Ljava_util_Calendar_2_Z(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 0
// stack: 4
// args: 1
void func_org_luaj_vm2_lib_OsLib__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_OsLib* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1921, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 98 , L1756726852 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 98;
    //  bipush 11
    stack[sp++].i = 11;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3259);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3261);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3260);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1786);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2540);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3279);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 107);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3281);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3282);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3284);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3291);
    // arrstore __refer  ,  L1756726852 bc index = 
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
    // putstatic org/luaj/vm2/lib/OsLib NAMES [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_lib_OsLib.NAMES_60 = rstack[sp].obj;
    ; 
    //  line no 112 , L1172450799 , bytecode index = 
    // invokestatic java/lang/System.currentTimeMillis()J
    {
        sp -= 1;
        stack[sp].j = func_java_lang_System_currentTimeMillis___J(runtime, rstack[sp + 0].obj);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/OsLib t0 J
    sp -= 2;
    static_var_org_luaj_vm2_lib_OsLib.t0_61 = stack[sp].j;
    ; 
    //  line no 113 , L1793325972 , bytecode index = 
    // getstatic org/luaj/vm2/lib/OsLib t0 J
    stack[sp].j =static_var_org_luaj_vm2_lib_OsLib.t0_61;
    sp += 2;
    // putstatic org/luaj/vm2/lib/OsLib tmpnames J
    sp -= 2;
    static_var_org_luaj_vm2_lib_OsLib.tmpnames_62 = stack[sp].j;
    ; 
    //  line no 346 , L1142402835 , bytecode index = 
    //  bipush 7
    stack[sp++].i = 7;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3295);
    // arrstore __refer  ,  L1142402835 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3296);
    // arrstore __refer  ,  L1142402835 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3297);
    // arrstore __refer  ,  L1142402835 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3298);
    // arrstore __refer  ,  L1142402835 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3299);
    // arrstore __refer  ,  L1142402835 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3300);
    // arrstore __refer  ,  L1142402835 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3301);
    // arrstore __refer  ,  L1142402835 bc index = 
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
    // putstatic org/luaj/vm2/lib/OsLib WeekdayNameAbbrev [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_lib_OsLib.WeekdayNameAbbrev_64 = rstack[sp].obj;
    ; 
    //  line no 347 , L13928051 , bytecode index = 
    //  bipush 7
    stack[sp++].i = 7;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3302);
    // arrstore __refer  ,  L13928051 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3303);
    // arrstore __refer  ,  L13928051 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3304);
    // arrstore __refer  ,  L13928051 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3305);
    // arrstore __refer  ,  L13928051 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3306);
    // arrstore __refer  ,  L13928051 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3307);
    // arrstore __refer  ,  L13928051 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3308);
    // arrstore __refer  ,  L13928051 bc index = 
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
    // putstatic org/luaj/vm2/lib/OsLib WeekdayName [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_lib_OsLib.WeekdayName_65 = rstack[sp].obj;
    ; 
    //  line no 348 , L1418550995 , bytecode index = 
    //  bipush 12
    stack[sp++].i = 12;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3309);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3310);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3311);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3312);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3313);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3314);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3315);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3316);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3317);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3318);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3319);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3320);
    // arrstore __refer  ,  L1418550995 bc index = 
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
    // putstatic org/luaj/vm2/lib/OsLib MonthNameAbbrev [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_lib_OsLib.MonthNameAbbrev_66 = rstack[sp].obj;
    ; 
    //  line no 349 , L566698125 , bytecode index = 
    //  bipush 12
    stack[sp++].i = 12;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3321);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3322);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3323);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3324);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3313);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3325);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3326);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3327);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3328);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3329);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3330);
    // arrstore __refer  ,  L566698125 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3331);
    // arrstore __refer  ,  L566698125 bc index = 
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
    // putstatic org/luaj/vm2/lib/OsLib MonthName [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_lib_OsLib.MonthName_67 = rstack[sp].obj;
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

void bridge_org_luaj_vm2_lib_OsLib__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_OsLib__clinit____V(runtime, para[0].obj);
}


