// CLASS: org/luaj/vm2/lib/StringLib extends org/luaj/vm2/lib/TwoArgFunction
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_StringLib_static {struct java_lang_String* FLAGS_47; s32 L_1ESC_48; struct org_luaj_vm2_LuaString* SPECIALS_49; s32 MAX_1CAPTURES_50; s32 MAXCCALLS_51; s32 CAP_1UNFINISHED_52; s32 CAP_1POSITION_53; s8 MASK_1ALPHA_54; s8 MASK_1LOWERCASE_55; s8 MASK_1UPPERCASE_56; s8 MASK_1DIGIT_57; s8 MASK_1PUNCT_58; s8 MASK_1SPACE_59; s8 MASK_1CONTROL_60; s8 MASK_1HEXDIGIT_61; JArray * CHAR_1TABLE_62;  };
struct org_luaj_vm2_lib_StringLib_static static_var_org_luaj_vm2_lib_StringLib = {NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL};


__refer arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_lib_StringLib[] = {
    func_org_luaj_vm2_lib_StringLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_lib_StringLib_format__Ljava_lang_String_2D_Ljava_lang_String_2  //1
};
__refer arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_lib_TwoArgFunction[] = {
    func_org_luaj_vm2_lib_StringLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //1
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //4
};
__refer arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_lib_LibFunction[] = {
    func_org_luaj_vm2_lib_LibFunction_tojstring___Ljava_lang_String_2,  //0
    func_org_luaj_vm2_lib_LibFunction_bind__Lorg_luaj_vm2_LuaValue_2Ljava_lang_Class_2_3Ljava_lang_String_2_V,  //1
    func_org_luaj_vm2_lib_LibFunction_bind__Lorg_luaj_vm2_LuaValue_2Ljava_lang_Class_2_3Ljava_lang_String_2I_V,  //2
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_lib_StringLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //6
    func_org_luaj_vm2_lib_LibFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //7
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //8
};
__refer arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_LuaFunction[] = {
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
__refer arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_LuaValue[] = {
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
    func_org_luaj_vm2_lib_StringLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //104
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
__refer arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_Varargs[] = {
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
__refer arr_vmtable_org_luaj_vm2_lib_StringLib_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_StringLib[] = {
    {237, 2, arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_lib_StringLib}, //0
    {73, 5, arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_lib_TwoArgFunction}, //1
    {18, 9, arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_lib_LibFunction}, //2
    {19, 10, arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_LuaFunction}, //3
    {1, 210, arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_LuaValue}, //4
    {2, 63, arr_vmtable_org_luaj_vm2_lib_StringLib_from_org_luaj_vm2_Varargs}, //5
    {5, 10, arr_vmtable_org_luaj_vm2_lib_StringLib_from_java_lang_Object}, //6
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_lib_StringLib__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2775, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 67 , L676692948 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 67;
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
    //  line no 68 , L272220100 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib__init____V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_StringLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2776, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 85 , L33389111 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 85;
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
    //  line no 86 , L95552255 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4009);
    // new org/luaj/vm2/lib/StringLib$_byte
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 57);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$_byte.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024_1byte__init____V(runtime);
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
    //  line no 87 , L1487424018 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4687);
    // new org/luaj/vm2/lib/StringLib$_char
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 317);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$_char.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024_1char__init____V(runtime);
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
    //  line no 88 , L242224826 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1637);
    // new org/luaj/vm2/lib/StringLib$dump
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 300);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$dump.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024dump__init____V(runtime);
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
    //  line no 89 , L1681318273 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 760);
    // new org/luaj/vm2/lib/StringLib$find
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 262);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$find.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024find__init____V(runtime);
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
    //  line no 90 , L1904652802 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2361);
    // new org/luaj/vm2/lib/StringLib$format
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 118);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/StringLib$format.<init>(Lorg/luaj/vm2/lib/StringLib;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024format__init___Lorg_luaj_vm2_lib_StringLib_2_V(runtime, rstack[sp + 0].obj);
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
    //  line no 91 , L1801756410 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4688);
    // new org/luaj/vm2/lib/StringLib$gmatch
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 375);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$gmatch.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024gmatch__init____V(runtime);
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
    //  line no 92 , L1710180594 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4689);
    // new org/luaj/vm2/lib/StringLib$gsub
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 316);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$gsub.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024gsub__init____V(runtime);
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
    //  line no 93 , L906397479 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 482);
    // new org/luaj/vm2/lib/StringLib$len
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 376);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$len.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024len__init____V(runtime);
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
    //  line no 94 , L1918121287 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4690);
    // new org/luaj/vm2/lib/StringLib$lower
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 377);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$lower.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024lower__init____V(runtime);
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
    //  line no 95 , L1032382137 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1688);
    // new org/luaj/vm2/lib/StringLib$match
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 343);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$match.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024match__init____V(runtime);
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
    //  line no 96 , L582979874 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4691);
    // new org/luaj/vm2/lib/StringLib$rep
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 378);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$rep.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024rep__init____V(runtime);
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
    //  line no 97 , L545392109 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 689);
    // new org/luaj/vm2/lib/StringLib$reverse
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 336);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$reverse.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024reverse__init____V(runtime);
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
    //  line no 98 , L1940906679 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 501);
    // new org/luaj/vm2/lib/StringLib$sub
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 32);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$sub.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024sub__init____V(runtime);
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
    //  line no 99 , L157843285 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4692);
    // new org/luaj/vm2/lib/StringLib$upper
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 98);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/StringLib$upper.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024upper__init____V(runtime);
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
    //  line no 101 , L1459669467 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 381);
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
    //  line no 102 , L1729954747 , bytecode index = 
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
    if(stack[--sp].i  != 0) goto L1806434229;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 381);
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
    L1806434229:
    //  line no 103 , L1806434229 , bytecode index = 
    // getstatic org/luaj/vm2/LuaString s_metatable Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaString.s_1metatable_44;
    sp += 1;
    if(rstack[--sp].obj  != NULL) goto L561227586;
    ; 
    //  line no 104 , L1886186662 , bytecode index = 
    // iconst_2
    stack[sp++].i = 2;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // getstatic org/luaj/vm2/lib/StringLib INDEX Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.INDEX_22;
    sp += 1;
    // arrstore __refer  ,  L1886186662 bc index = 
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
    rstack[sp++].obj = rlocal[3].obj;
    // arrstore __refer  ,  L1886186662 bc index = 
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
    // invokestatic org/luaj/vm2/LuaValue.tableOf([Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_tableOf___3Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/LuaString s_metatable Lorg/luaj/vm2/LuaValue;
    sp -= 1;
    static_var_org_luaj_vm2_LuaString.s_1metatable_44 = rstack[sp].obj;
    L561227586:
    //  line no 106 , L561227586 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_StringLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 4
// args: 3
void func_org_luaj_vm2_lib_StringLib_addquoted__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_StringLib* p0, struct org_luaj_vm2_Buffer* p1, struct org_luaj_vm2_LuaString* p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2777, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 305 , L1266759621 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 305;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 34
    stack[sp++].i = 34;
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
    //  line no 306 , L2012528704 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
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
    local[4].i = stack[--sp].i;
    L111238003:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1155300221;
    ; 
    //  line no 307 , L368788838 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[2].i = stack[--sp].i;
    ; 
    switch(stack[--sp].i){
        case 10:
            goto L237630710;
        case 34:
            goto L237630710;
        case 92:
            goto L237630710;
        default:
            goto L696870185;
    }
    L237630710:
    //  line no 309 , L237630710 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 92
    stack[sp++].i = 92;
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
    //  line no 310 , L1102463008 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
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
    //  line no 311 , L441683672 , bytecode index = 
    goto L2022768790;
    L696870185:
    //  line no 313 , L696870185 , bytecode index = 
    stack[sp++].i = local[2].i;
    //  bipush 31
    stack[sp++].i = 31;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L970900790;
    stack[sp++].i = local[2].i;
    //  bipush 127
    stack[sp++].i = 127;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1243227501;
    L970900790:
    //  line no 314 , L970900790 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 92
    stack[sp++].i = 92;
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
    //  line no 315 , L1287215032 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1021082377;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1021082377;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    //  bipush 57
    stack[sp++].i = 57;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1935994577;
    L1021082377:
    //  line no 316 , L1021082377 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
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
    goto L2022768790;
    L1935994577:
    //  line no 318 , L1935994577 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 48
    stack[sp++].i = 48;
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
    //  line no 319 , L1749978269 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp++].i = local[2].i;
    //  bipush 10
    stack[sp++].i = 10;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
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
    //  line no 320 , L1858863803 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp++].i = local[2].i;
    //  bipush 10
    stack[sp++].i = 10;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
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
    goto L2022768790;
    L1243227501:
    //  line no 323 , L1243227501 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
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
    L2022768790:
    //  line no 306 , L2022768790 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L111238003;
    L1155300221:
    //  line no 328 , L1155300221 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 34
    stack[sp++].i = 34;
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
    //  line no 329 , L831993944 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_addquoted__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_addquoted__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2_V(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 4
// stack: 2
// args: 2
struct java_lang_String* func_org_luaj_vm2_lib_StringLib_format__Ljava_lang_String_2D_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, f64 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2778, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 491 , L2045188238 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 491;
    stack[sp].d = local[2].d;
    sp += 2;
    // invokestatic java/lang/String.valueOf(D)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_String_valueOf__D_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_org_luaj_vm2_lib_StringLib_format__Ljava_lang_String_2D_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_StringLib_format__Ljava_lang_String_2D_Ljava_lang_String_2(runtime, ins, para[0].d);
}


// locals: 11
// stack: 6
// args: 3
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_StringLib_str_1find_1aux__Lorg_luaj_vm2_Varargs_2Z_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_StringLib* p0, struct org_luaj_vm2_Varargs* p1, s8 p2){
    
    StackItem local[11] = {0};
    RStackItem rlocal[11] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2779, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 753 , L2146285461 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 753;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/Varargs.checkstring(I)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 2, 38);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 754 , L277155095 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual org/luaj/vm2/Varargs.checkstring(I)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 2, 38);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 755 , L1374115041 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/Varargs.optint(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 2, 18);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 757 , L646337666 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  <= 0) goto L876945112;
    ; 
    //  line no 758 , L202395890 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[2].obj;
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
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    goto L1740328397;
    L876945112:
    //  line no 759 , L876945112 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  >= 0) goto L1740328397;
    ; 
    //  line no 760 , L1938634748 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
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
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
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
    local[4].i = stack[--sp].i;
    L1740328397:
    //  line no 763 , L1740328397 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L1872905355;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // invokevirtual org/luaj/vm2/Varargs.arg(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 2, 0);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.toboolean()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 15);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1639652941;
    rstack[sp++].obj = rlocal[3].obj;
    // getstatic org/luaj/vm2/lib/StringLib SPECIALS Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.SPECIALS_49;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaString.indexOfAny(Lorg/luaj/vm2/LuaString;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 31, 93);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1872905355;
    L1639652941:
    // iconst_1
    stack[sp++].i = 1;
    goto L1549005458;
    L1872905355:
    // iconst_0
    stack[sp++].i = 0;
    L1549005458:
    local[5].i = stack[--sp].i;
    ; 
    //  line no 765 , L1190857779 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  == 0) goto L989896315;
    ; 
    //  line no 766 , L40936992 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/LuaString.indexOf(Lorg/luaj/vm2/LuaString;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*,s32) = find_method(__ins->vm_table, 31, 95);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 767 , L1106510750 , bytecode index = 
    stack[sp++].i = local[6].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1609565447;
    ; 
    //  line no 768 , L1614588868 , bytecode index = 
    stack[sp++].i = local[6].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/lib/StringLib.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[3].obj;
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/lib/StringLib.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/StringLib.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1609565447:
    //  line no 770 , L1609565447 , bytecode index = 
    goto L1744457797;
    L989896315:
    //  line no 771 , L989896315 , bytecode index = 
    // new org/luaj/vm2/lib/StringLib$MatchState
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 149);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/lib/StringLib$MatchState.<init>(Lorg/luaj/vm2/Varargs;Lorg/luaj/vm2/LuaString;Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024MatchState__init___Lorg_luaj_vm2_Varargs_2Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_LuaString_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 773 , L116606935 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 774 , L1500820019 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 775 , L1544765522 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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
    if(stack[--sp].i  <= 0) goto L1776180205;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
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
    //  bipush 94
    stack[sp++].i = 94;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1776180205;
    ; 
    //  line no 776 , L1963943166 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 777 , L160867654 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[8].i = stack[--sp].i;
    L1776180205:
    //  line no 780 , L1776180205 , bytecode index = 
    stack[sp++].i = local[4].i;
    local[9].i = stack[--sp].i;
    L1338074614:
    //  line no 783 , L1338074614 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.reset()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 149, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 784 , L1415274192 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.match(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
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
    local[10].i = stack[--sp].i;
    ; 
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1719519917;
    ; 
    //  line no 785 , L584580417 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L745835029;
    ; 
    //  line no 786 , L436028378 , bytecode index = 
    stack[sp++].i = local[9].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/lib/StringLib.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[10].i;
    // invokestatic org/luaj/vm2/lib/StringLib.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[6].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[10].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.push_captures(ZII)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,s8,s32,s32) = find_method(__ins->vm_table, 149, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/StringLib.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
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
    L745835029:
    //  line no 788 , L745835029 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[10].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.push_captures(ZII)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,s8,s32,s32) = find_method(__ins->vm_table, 149, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1719519917:
    //  line no 791 , L1719519917 , bytecode index = 
    stack[sp++].i = local[9].i;
    // iinc slot 9 value 1
    local[9].i += 1;
    rstack[sp++].obj = rlocal[2].obj;
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
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1744457797;
    stack[sp++].i = local[7].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L1338074614;
    L1744457797:
    //  line no 793 , L1744457797 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
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

void bridge_org_luaj_vm2_lib_StringLib_str_1find_1aux__Lorg_luaj_vm2_Varargs_2Z_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_StringLib_str_1find_1aux__Lorg_luaj_vm2_Varargs_2Z_Lorg_luaj_vm2_Varargs_2(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 2
// stack: 2
// args: 3
s32 func_org_luaj_vm2_lib_StringLib_posrelat__II_I(JThreadRuntime *runtime, struct org_luaj_vm2_lib_StringLib* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2780, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 797 , L217911413 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 797;
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  < 0) goto L72423389;
    stack[sp++].i = local[0].i;
    goto L2000779038;
    L72423389:
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[0].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    L2000779038:
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

void bridge_org_luaj_vm2_lib_StringLib_posrelat__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_posrelat__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 2
// stack: 5
// args: 1
void func_org_luaj_vm2_lib_StringLib__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_StringLib* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2781, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 803 , L1823354445 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 803;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4697);
    // invokestatic org/luaj/vm2/lib/StringLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/StringLib SPECIALS Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_StringLib.SPECIALS_49 = rstack[sp].obj;
    ; 
    //  line no 823 , L1615668218 , bytecode index = 
    //  sipush 256
    stack[sp++].i = 256;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    sp -= 1;
    static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62 = rstack[sp].obj;
    ; 
    //  line no 825 , L482885994 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[0].i = stack[--sp].i;
    L857732012:
    stack[sp++].i = local[0].i;
    //  sipush 128
    stack[sp++].i = 128;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L777940932;
    ; 
    //  line no 826 , L663083782 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    local[1].i = stack[--sp].i;
    ; 
    //  line no 827 , L2040008077 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/Character.isDigit(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isDigit__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L903218049;
    //  bipush 8
    stack[sp++].i = 8;
    goto L1756064432;
    L903218049:
    // iconst_0
    stack[sp++].i = 0;
    L1756064432:
    //  line no 828 , L1756064432 , bytecode index = 
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/Character.isLowerCase(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isLowerCase__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1644155208;
    // iconst_2
    stack[sp++].i = 2;
    goto L1479691423;
    L1644155208:
    // iconst_0
    stack[sp++].i = 0;
    L1479691423:
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 829 , L1568507411 , bytecode index = 
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/Character.isUpperCase(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isUpperCase__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1857063398;
    // iconst_4
    stack[sp++].i = 4;
    goto L1901752553;
    L1857063398:
    // iconst_0
    stack[sp++].i = 0;
    L1901752553:
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 830 , L1002872041 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L180017308;
    stack[sp++].i = local[1].i;
    //  bipush 127
    stack[sp++].i = 127;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1613729684;
    L180017308:
    //  bipush 64
    stack[sp++].i = 64;
    goto L1112569408;
    L1613729684:
    // iconst_0
    stack[sp++].i = 0;
    L1112569408:
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1112569408 bc index = 
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
    //  line no 831 , L1308527415 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 97
    stack[sp++].i = 97;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L299684908;
    stack[sp++].i = local[1].i;
    //  bipush 102
    stack[sp++].i = 102;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L219396780;
    L299684908:
    stack[sp++].i = local[1].i;
    //  bipush 65
    stack[sp++].i = 65;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1278226232;
    stack[sp++].i = local[1].i;
    //  bipush 70
    stack[sp++].i = 70;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L219396780;
    L1278226232:
    stack[sp++].i = local[1].i;
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1974379194;
    stack[sp++].i = local[1].i;
    //  bipush 57
    stack[sp++].i = 57;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1974379194;
    L219396780:
    //  line no 832 , L219396780 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    stack[sp++].i = local[0].i;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s8  ,  L219396780 bc index = 
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
    //  bipush -128
    stack[sp++].i = -128;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L219396780 bc index = 
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
    L1974379194:
    //  line no 834 , L1974379194 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 33
    stack[sp++].i = 33;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L44332439;
    stack[sp++].i = local[1].i;
    //  bipush 47
    stack[sp++].i = 47;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L317880757;
    L44332439:
    stack[sp++].i = local[1].i;
    //  bipush 58
    stack[sp++].i = 58;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1610014012;
    stack[sp++].i = local[1].i;
    //  bipush 64
    stack[sp++].i = 64;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L317880757;
    L1610014012:
    stack[sp++].i = local[1].i;
    //  bipush 91
    stack[sp++].i = 91;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1607278346;
    stack[sp++].i = local[1].i;
    //  bipush 96
    stack[sp++].i = 96;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L317880757;
    L1607278346:
    stack[sp++].i = local[1].i;
    //  bipush 123
    stack[sp++].i = 123;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L2120532393;
    stack[sp++].i = local[1].i;
    //  bipush 126
    stack[sp++].i = 126;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L2120532393;
    L317880757:
    //  line no 835 , L317880757 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    stack[sp++].i = local[0].i;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s8  ,  L317880757 bc index = 
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
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L317880757 bc index = 
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
    L2120532393:
    //  line no 837 , L2120532393 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    stack[sp++].i = local[0].i;
    // arrload s8  ,  L2120532393 bc index = 
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
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L2145001473;
    ; 
    //  line no 838 , L371990011 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    stack[sp++].i = local[0].i;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s8  ,  L371990011 bc index = 
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
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L371990011 bc index = 
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
    L2145001473:
    //  line no 825 , L2145001473 , bytecode index = 
    // iinc slot 0 value 1
    local[0].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L857732012;
    L777940932:
    //  line no 842 , L777940932 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    //  bipush 32
    stack[sp++].i = 32;
    //  bipush 32
    stack[sp++].i = 32;
    // arrstore s8  ,  L777940932 bc index = 
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
    //  line no 843 , L565077371 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    //  bipush 13
    stack[sp++].i = 13;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s8  ,  L565077371 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L565077371 bc index = 
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
    //  line no 844 , L2040500590 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    //  bipush 10
    stack[sp++].i = 10;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s8  ,  L2040500590 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L2040500590 bc index = 
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
    //  line no 845 , L1466662004 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    //  bipush 9
    stack[sp++].i = 9;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s8  ,  L1466662004 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1466662004 bc index = 
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
    //  line no 846 , L568221863 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    //  bipush 11
    stack[sp++].i = 11;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s8  ,  L568221863 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L568221863 bc index = 
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
    //  line no 847 , L1938377818 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    //  bipush 12
    stack[sp++].i = 12;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s8  ,  L1938377818 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    // arrstore s8  ,  L1938377818 bc index = 
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
    //  line no 848 , L1989719972 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib__clinit____V(runtime, para[0].obj);
}


