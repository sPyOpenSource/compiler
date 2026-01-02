// CLASS: org/luaj/vm2/LuaTable extends org/luaj/vm2/LuaValue
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LuaTable_static {s32 MIN_1HASH_1CAPACITY_44; struct org_luaj_vm2_LuaString* N_45; JArray * NOBUCKETS_50;  };
struct org_luaj_vm2_LuaTable_static static_var_org_luaj_vm2_LuaTable = {0, NULL, NULL};


__refer arr_vmtable_org_luaj_vm2_LuaTable_from_org_luaj_vm2_LuaTable[] = {
    func_org_luaj_vm2_LuaTable_type___I,  //0
    func_org_luaj_vm2_LuaTable_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaTable_istable___Z,  //2
    func_org_luaj_vm2_LuaTable_checktable___Lorg_luaj_vm2_LuaTable_2,  //3
    func_org_luaj_vm2_LuaTable_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2,  //4
    func_org_luaj_vm2_LuaTable_presize__I_V,  //5
    func_org_luaj_vm2_LuaTable_presize__II_V,  //6
    func_org_luaj_vm2_LuaTable_getArrayLength___I,  //7
    func_org_luaj_vm2_LuaTable_getHashLength___I,  //8
    func_org_luaj_vm2_LuaTable_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //9
    func_org_luaj_vm2_LuaTable_setmetatable__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //10
    func_org_luaj_vm2_LuaTable_get__I_Lorg_luaj_vm2_LuaValue_2,  //11
    func_org_luaj_vm2_LuaTable_get__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //12
    func_org_luaj_vm2_LuaTable_rawget__I_Lorg_luaj_vm2_LuaValue_2,  //13
    func_org_luaj_vm2_LuaTable_rawget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //14
    func_org_luaj_vm2_LuaTable_hashget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //15
    func_org_luaj_vm2_LuaTable_set__ILorg_luaj_vm2_LuaValue_2_V,  //16
    func_org_luaj_vm2_LuaTable_set__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V,  //17
    func_org_luaj_vm2_LuaTable_rawset__ILorg_luaj_vm2_LuaValue_2_V,  //18
    func_org_luaj_vm2_LuaTable_rawset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V,  //19
    func_org_luaj_vm2_LuaTable_remove__I_Lorg_luaj_vm2_LuaValue_2,  //20
    func_org_luaj_vm2_LuaTable_insert__ILorg_luaj_vm2_LuaValue_2_V,  //21
    func_org_luaj_vm2_LuaTable_concat__Lorg_luaj_vm2_LuaString_2II_Lorg_luaj_vm2_LuaValue_2,  //22
    func_org_luaj_vm2_LuaTable_length___I,  //23
    func_org_luaj_vm2_LuaTable_len___Lorg_luaj_vm2_LuaValue_2,  //24
    func_org_luaj_vm2_LuaTable_rawlen___I,  //25
    func_org_luaj_vm2_LuaTable_next__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //26
    func_org_luaj_vm2_LuaTable_inext__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //27
    func_org_luaj_vm2_LuaTable_hashset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V,  //28
    func_org_luaj_vm2_LuaTable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //29
    func_org_luaj_vm2_LuaTable_sort__Lorg_luaj_vm2_LuaValue_2_V,  //30
    func_org_luaj_vm2_LuaTable_keyCount___I,  //31
    func_org_luaj_vm2_LuaTable_keys____3Lorg_luaj_vm2_LuaValue_2,  //32
    func_org_luaj_vm2_LuaTable_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //33
    func_org_luaj_vm2_LuaTable_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //34
    func_org_luaj_vm2_LuaTable_unpack___Lorg_luaj_vm2_Varargs_2,  //35
    func_org_luaj_vm2_LuaTable_unpack__I_Lorg_luaj_vm2_Varargs_2,  //36
    func_org_luaj_vm2_LuaTable_unpack__II_Lorg_luaj_vm2_Varargs_2,  //37
    func_org_luaj_vm2_LuaTable_useWeakKeys___Z,  //38
    func_org_luaj_vm2_LuaTable_useWeakValues___Z,  //39
    func_org_luaj_vm2_LuaTable_toLuaValue___Lorg_luaj_vm2_LuaValue_2,  //40
    func_org_luaj_vm2_LuaTable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //41
    func_org_luaj_vm2_LuaTable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2  //42
};
__refer arr_vmtable_org_luaj_vm2_LuaTable_from_org_luaj_vm2_LuaValue[] = {
    func_org_luaj_vm2_LuaTable_type___I,  //0
    func_org_luaj_vm2_LuaTable_typename___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_LuaValue_isboolean___Z,  //2
    func_org_luaj_vm2_LuaValue_isclosure___Z,  //3
    func_org_luaj_vm2_LuaValue_isfunction___Z,  //4
    func_org_luaj_vm2_LuaValue_isint___Z,  //5
    func_org_luaj_vm2_LuaValue_isinttype___Z,  //6
    func_org_luaj_vm2_LuaValue_islong___Z,  //7
    func_org_luaj_vm2_LuaValue_isnil___Z,  //8
    func_org_luaj_vm2_LuaValue_isnumber___Z,  //9
    func_org_luaj_vm2_LuaValue_isstring___Z,  //10
    func_org_luaj_vm2_LuaValue_isthread___Z,  //11
    func_org_luaj_vm2_LuaTable_istable___Z,  //12
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
    func_org_luaj_vm2_LuaValue_tojstring___Ljava_lang_String_2,  //23
    func_org_luaj_vm2_LuaValue_touserdata___Ljava_lang_Object_2,  //24
    func_org_luaj_vm2_LuaValue_touserdata__Ljava_lang_Class_2_Ljava_lang_Object_2,  //25
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //26
    func_org_luaj_vm2_LuaValue_tonumber___Lorg_luaj_vm2_LuaValue_2,  //27
    func_org_luaj_vm2_LuaValue_tostring___Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_LuaValue_optboolean__Z_Z,  //29
    func_org_luaj_vm2_LuaValue_optclosure__Lorg_luaj_vm2_LuaClosure_2_Lorg_luaj_vm2_LuaClosure_2,  //30
    func_org_luaj_vm2_LuaValue_optdouble__D_D,  //31
    func_org_luaj_vm2_LuaValue_optfunction__Lorg_luaj_vm2_LuaFunction_2_Lorg_luaj_vm2_LuaFunction_2,  //32
    func_org_luaj_vm2_LuaValue_optint__I_I,  //33
    func_org_luaj_vm2_LuaValue_optinteger__Lorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //34
    func_org_luaj_vm2_LuaValue_optlong__J_J,  //35
    func_org_luaj_vm2_LuaValue_optnumber__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //36
    func_org_luaj_vm2_LuaValue_optjstring__Ljava_lang_String_2_Ljava_lang_String_2,  //37
    func_org_luaj_vm2_LuaValue_optstring__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //38
    func_org_luaj_vm2_LuaTable_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2,  //39
    func_org_luaj_vm2_LuaValue_optthread__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_LuaThread_2,  //40
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Object_2_Ljava_lang_Object_2,  //41
    func_org_luaj_vm2_LuaValue_optuserdata__Ljava_lang_Class_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //42
    func_org_luaj_vm2_LuaValue_optvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_LuaValue_checkboolean___Z,  //44
    func_org_luaj_vm2_LuaValue_checkclosure___Lorg_luaj_vm2_LuaClosure_2,  //45
    func_org_luaj_vm2_LuaValue_checkdouble___D,  //46
    func_org_luaj_vm2_LuaValue_checkfunction___Lorg_luaj_vm2_LuaFunction_2,  //47
    func_org_luaj_vm2_LuaValue_checkglobals___Lorg_luaj_vm2_Globals_2,  //48
    func_org_luaj_vm2_LuaValue_checkint___I,  //49
    func_org_luaj_vm2_LuaValue_checkinteger___Lorg_luaj_vm2_LuaInteger_2,  //50
    func_org_luaj_vm2_LuaValue_checklong___J,  //51
    func_org_luaj_vm2_LuaValue_checknumber___Lorg_luaj_vm2_LuaNumber_2,  //52
    func_org_luaj_vm2_LuaValue_checknumber__Ljava_lang_String_2_Lorg_luaj_vm2_LuaNumber_2,  //53
    func_org_luaj_vm2_LuaValue_checkjstring___Ljava_lang_String_2,  //54
    func_org_luaj_vm2_LuaValue_checkstring___Lorg_luaj_vm2_LuaString_2,  //55
    func_org_luaj_vm2_LuaTable_checktable___Lorg_luaj_vm2_LuaTable_2,  //56
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
    func_org_luaj_vm2_LuaTable_get__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //71
    func_org_luaj_vm2_LuaTable_get__I_Lorg_luaj_vm2_LuaValue_2,  //72
    func_org_luaj_vm2_LuaValue_get__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //73
    func_org_luaj_vm2_LuaTable_set__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V,  //74
    func_org_luaj_vm2_LuaTable_set__ILorg_luaj_vm2_LuaValue_2_V,  //75
    func_org_luaj_vm2_LuaValue_set__ILjava_lang_String_2_V,  //76
    func_org_luaj_vm2_LuaValue_set__Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_V,  //77
    func_org_luaj_vm2_LuaValue_set__Ljava_lang_String_2D_V,  //78
    func_org_luaj_vm2_LuaValue_set__Ljava_lang_String_2I_V,  //79
    func_org_luaj_vm2_LuaValue_set__Ljava_lang_String_2Ljava_lang_String_2_V,  //80
    func_org_luaj_vm2_LuaTable_rawget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //81
    func_org_luaj_vm2_LuaTable_rawget__I_Lorg_luaj_vm2_LuaValue_2,  //82
    func_org_luaj_vm2_LuaValue_rawget__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //83
    func_org_luaj_vm2_LuaTable_rawset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V,  //84
    func_org_luaj_vm2_LuaTable_rawset__ILorg_luaj_vm2_LuaValue_2_V,  //85
    func_org_luaj_vm2_LuaValue_rawset__ILjava_lang_String_2_V,  //86
    func_org_luaj_vm2_LuaValue_rawset__Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_V,  //87
    func_org_luaj_vm2_LuaValue_rawset__Ljava_lang_String_2D_V,  //88
    func_org_luaj_vm2_LuaValue_rawset__Ljava_lang_String_2I_V,  //89
    func_org_luaj_vm2_LuaValue_rawset__Ljava_lang_String_2Ljava_lang_String_2_V,  //90
    func_org_luaj_vm2_LuaValue_rawsetlist__ILorg_luaj_vm2_Varargs_2_V,  //91
    func_org_luaj_vm2_LuaTable_presize__I_V,  //92
    func_org_luaj_vm2_LuaTable_next__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //93
    func_org_luaj_vm2_LuaTable_inext__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //94
    func_org_luaj_vm2_LuaValue_load__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //95
    func_org_luaj_vm2_LuaValue_arg__I_Lorg_luaj_vm2_LuaValue_2,  //96
    func_org_luaj_vm2_LuaValue_narg___I,  //97
    func_org_luaj_vm2_LuaValue_arg1___Lorg_luaj_vm2_LuaValue_2,  //98
    func_org_luaj_vm2_LuaTable_getmetatable___Lorg_luaj_vm2_LuaValue_2,  //99
    func_org_luaj_vm2_LuaTable_setmetatable__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //100
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
    func_org_luaj_vm2_LuaValue_neg___Lorg_luaj_vm2_LuaValue_2,  //126
    func_org_luaj_vm2_LuaTable_len___Lorg_luaj_vm2_LuaValue_2,  //127
    func_org_luaj_vm2_LuaTable_length___I,  //128
    func_org_luaj_vm2_LuaTable_rawlen___I,  //129
    func_org_luaj_vm2_LuaValue_equals__Ljava_lang_Object_2_Z,  //130
    func_org_luaj_vm2_LuaTable_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //131
    func_org_luaj_vm2_LuaTable_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z,  //132
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
    func_org_luaj_vm2_LuaValue_strvalue___Lorg_luaj_vm2_LuaString_2,  //203
    func_org_luaj_vm2_LuaValue_strongvalue___Lorg_luaj_vm2_LuaValue_2,  //204
    func_org_luaj_vm2_LuaValue_metatag__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //205
    func_org_luaj_vm2_LuaValue_checkmetatag__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //206
    func_org_luaj_vm2_LuaValue_onInvoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //207
    func_org_luaj_vm2_LuaValue_initupvalue1__Lorg_luaj_vm2_LuaValue_2_V,  //208
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2  //209
};
__refer arr_vmtable_org_luaj_vm2_LuaTable_from_org_luaj_vm2_Varargs[] = {
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
    func_org_luaj_vm2_LuaValue_tojstring___Ljava_lang_String_2,  //58
    func_org_luaj_vm2_LuaValue_toString___Ljava_lang_String_2,  //59
    func_org_luaj_vm2_LuaValue_subargs__I_Lorg_luaj_vm2_Varargs_2,  //60
    func_org_luaj_vm2_Varargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V,  //61
    func_org_luaj_vm2_Varargs_dealias___Lorg_luaj_vm2_Varargs_2  //62
};
__refer arr_vmtable_org_luaj_vm2_LuaTable_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_luaj_vm2_LuaTable_from_org_luaj_vm2_Metatable[] = {
    func_org_luaj_vm2_LuaTable_useWeakKeys___Z,  //0
    func_org_luaj_vm2_LuaTable_useWeakValues___Z,  //1
    func_org_luaj_vm2_LuaTable_toLuaValue___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_LuaTable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //3
    func_org_luaj_vm2_LuaTable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_LuaTable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2  //5
};
VMTable vmtable_org_luaj_vm2_LuaTable[] = {
    {33, 43, arr_vmtable_org_luaj_vm2_LuaTable_from_org_luaj_vm2_LuaTable}, //0
    {1, 210, arr_vmtable_org_luaj_vm2_LuaTable_from_org_luaj_vm2_LuaValue}, //1
    {2, 63, arr_vmtable_org_luaj_vm2_LuaTable_from_org_luaj_vm2_Varargs}, //2
    {5, 10, arr_vmtable_org_luaj_vm2_LuaTable_from_java_lang_Object}, //3
    {40, 6, arr_vmtable_org_luaj_vm2_LuaTable_from_org_luaj_vm2_Metatable}, //4
};



// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_LuaTable__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 615, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 90 , L1297978429 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 90;
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
    //  line no 91 , L915349526 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaTable NOVALS [Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NOVALS_20;
    sp += 1;
    // putfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->array_46 = rstack[sp + 1].obj;
    ; 
    //  line no 92 , L1280851663 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaTable NOBUCKETS [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaTable.NOBUCKETS_50;
    sp += 1;
    // putfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->hash_47 = rstack[sp + 1].obj;
    ; 
    //  line no 93 , L1764696127 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable__init____V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_org_luaj_vm2_LuaTable__init___II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 616, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 100 , L129153987 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
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
    //  line no 101 , L168907708 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaTable.presize(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 33, 6);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 102 , L447718425 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable__init___II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable__init___II_V(runtime, ins, para[0].i);
}


// locals: 9
// stack: 5
// args: 3
void func_org_luaj_vm2_LuaTable__init____3Lorg_luaj_vm2_LuaValue_2_3Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, JArray * p0, JArray * p1, struct org_luaj_vm2_Varargs* p2){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 617, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 110 , L1427381743 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 110;
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
    //  line no 111 , L1427646530 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L846254484;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1427646530
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    goto L592983282;
    L846254484:
    // iconst_0
    stack[sp++].i = 0;
    L592983282:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 112 , L1448525331 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L1108924067;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1448525331
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    goto L1984975621;
    L1108924067:
    // iconst_0
    stack[sp++].i = 0;
    L1984975621:
    local[5].i = stack[--sp].i;
    ; 
    //  line no 113 , L348984985 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L2005435445;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/Varargs.narg()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1939990953;
    L2005435445:
    // iconst_0
    stack[sp++].i = 0;
    L1939990953:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 114 , L119358627 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaTable.presize(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 33, 6);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 115 , L2073621255 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L1208121709:
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L873610597;
    ; 
    //  line no 116 , L1497845528 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L1497845528 bc index = 
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
    // invokevirtual org/luaj/vm2/LuaTable.rawset(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 18);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 115 , L1710989308 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1208121709;
    L873610597:
    //  line no 117 , L873610597 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1047087935;
    ; 
    //  line no 118 , L464887938 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[7].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/Varargs.narg()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[8].i = stack[--sp].i;
    L1104443373:
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1047087935;
    ; 
    //  line no 119 , L898694235 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[7].i;
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
    // invokevirtual org/luaj/vm2/LuaTable.rawset(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 18);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 118 , L60292059 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1104443373;
    L1047087935:
    //  line no 120 , L1047087935 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L869601985:
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1365008457;
    ; 
    //  line no 121 , L1671179293 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[7].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1671179293 bc index = 
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
    if(stack[--sp].i  != 0) goto L1609124502;
    ; 
    //  line no 122 , L1144068272 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L1144068272 bc index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[7].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1144068272 bc index = 
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
    // invokevirtual org/luaj/vm2/LuaTable.rawset(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 19);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1609124502:
    //  line no 120 , L1609124502 , bytecode index = 
    // iinc slot 7 value 2
    local[7].i += 2;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L869601985;
    L1365008457:
    //  line no 123 , L1365008457 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable__init____3Lorg_luaj_vm2_LuaValue_2_3Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable__init____3Lorg_luaj_vm2_LuaValue_2_3Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_LuaTable__init___Lorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 618, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 130 , L1948471365 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 130;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial org/luaj/vm2/LuaTable.<init>(Lorg/luaj/vm2/Varargs;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable__init___Lorg_luaj_vm2_Varargs_2I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 131 , L1636506029 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable__init___Lorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable__init___Lorg_luaj_vm2_Varargs_2_V(runtime, ins);
}


// locals: 6
// stack: 5
// args: 2
void func_org_luaj_vm2_LuaTable__init___Lorg_luaj_vm2_Varargs_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0, s32 p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 619, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 138 , L817978763 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 138;
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
    //  line no 139 , L1578009262 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 140 , L1735507635 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/Varargs.narg()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_0
    stack[sp++].i = 0;
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
    ; 
    //  line no 141 , L1362728240 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/LuaTable.presize(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 33, 6);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 142 , L1798219673 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaTable N Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaTable.N_45;
    sp += 1;
    stack[sp++].i = local[4].i;
    // invokestatic org/luaj/vm2/LuaTable.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaTable.set(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 17);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 143 , L1092572064 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[5].i = stack[--sp].i;
    L728885526:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L922511709;
    ; 
    //  line no 144 , L678433396 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokevirtual org/luaj/vm2/LuaTable.set(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 16);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 143 , L331994761 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L728885526;
    L922511709:
    //  line no 145 , L922511709 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable__init___Lorg_luaj_vm2_Varargs_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable__init___Lorg_luaj_vm2_Varargs_2I_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaTable_type___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 620, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 148 , L1647809929 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 148;
    // iconst_5
    stack[sp++].i = 5;
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

void bridge_org_luaj_vm2_LuaTable_type___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_type___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_LuaTable_typename___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 621, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 152 , L391914049 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 152;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 384);
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

void bridge_org_luaj_vm2_LuaTable_typename___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_typename___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaTable_istable___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 622, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 156 , L1534745514 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 156;
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

void bridge_org_luaj_vm2_LuaTable_istable___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_istable___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaTable* func_org_luaj_vm2_LuaTable_checktable___Lorg_luaj_vm2_LuaTable_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 623, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 160 , L30578394 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 160;
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

void bridge_org_luaj_vm2_LuaTable_checktable___Lorg_luaj_vm2_LuaTable_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_checktable___Lorg_luaj_vm2_LuaTable_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaTable* func_org_luaj_vm2_LuaTable_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 624, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 164 , L1976870338 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 164;
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

void bridge_org_luaj_vm2_LuaTable_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_opttable__Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_org_luaj_vm2_LuaTable_presize__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 625, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 168 , L1083021083 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 168;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L1083021083
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1819063424;
    ; 
    //  line no 169 , L1011279482 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaTable.resize([Lorg/luaj/vm2/LuaValue;I)[Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaTable_resize___3Lorg_luaj_vm2_LuaValue_2I__3Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->array_46 = rstack[sp + 1].obj;
    L1819063424:
    //  line no 170 , L1819063424 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_presize__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_presize__I_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_org_luaj_vm2_LuaTable_presize__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 626, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 173 , L543846639 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 173;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L690686166;
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L690686166;
    ; 
    //  line no 174 , L576020159 , bytecode index = 
    // iconst_2
    stack[sp++].i = 2;
    local[2].i = stack[--sp].i;
    L690686166:
    //  line no 176 , L690686166 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  <= 0) goto L921420643;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L1165303897;
    L921420643:
    // getstatic org/luaj/vm2/LuaTable NOVALS [Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NOVALS_20;
    sp += 1;
    L1165303897:
    // putfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->array_46 = rstack[sp + 1].obj;
    ; 
    //  line no 177 , L887750041 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1010953501;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaTable$Slot; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1016));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L1423561005;
    L1010953501:
    // getstatic org/luaj/vm2/LuaTable NOBUCKETS [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaTable.NOBUCKETS_50;
    sp += 1;
    L1423561005:
    // putfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->hash_47 = rstack[sp + 1].obj;
    ; 
    //  line no 178 , L943870983 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/LuaTable hashEntries I
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->hashEntries_48 = stack[sp + 1].i;
    ; 
    //  line no 179 , L1136419747 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_presize__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_presize__II_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 5
// args: 3
JArray * func_org_luaj_vm2_LuaTable_resize___3Lorg_luaj_vm2_LuaValue_2I__3Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0, JArray * p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 627, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 183 , L1785507932 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 183;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 184 , L1084502906 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // arraylength  label  L1084502906
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
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
    //  line no 185 , L1613095350 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_resize___3Lorg_luaj_vm2_LuaValue_2I__3Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_resize___3Lorg_luaj_vm2_LuaValue_2I__3Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaTable_getArrayLength___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 628, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 193 , L757004314 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 193;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L757004314
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
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

void bridge_org_luaj_vm2_LuaTable_getArrayLength___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_getArrayLength___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_LuaTable_getHashLength___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 629, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 201 , L52908367 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 201;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L52908367
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
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

void bridge_org_luaj_vm2_LuaTable_getHashLength___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_getHashLength___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_getmetatable___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 630, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 205 , L18242360 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 205;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1276261147;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.toLuaValue()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1971764991;
    L1276261147:
    // aconst null
    rstack[sp++].obj = NULL;
    L1971764991:
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

void bridge_org_luaj_vm2_LuaTable_getmetatable___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_getmetatable___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_setmetatable__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 631, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 209 , L135640095 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 209;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1430439149;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.useWeakKeys()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1430439149;
    // iconst_1
    stack[sp++].i = 1;
    goto L359922172;
    L1430439149:
    // iconst_0
    stack[sp++].i = 0;
    L359922172:
    local[2].i = stack[--sp].i;
    ; 
    //  line no 210 , L1632682988 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1153447573;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.useWeakValues()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1153447573;
    // iconst_1
    stack[sp++].i = 1;
    goto L132577100;
    L1153447573:
    // iconst_0
    stack[sp++].i = 0;
    L132577100:
    local[3].i = stack[--sp].i;
    ; 
    //  line no 211 , L231756373 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/LuaTable.metatableOf(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/Metatable;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_metatableOf__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Metatable_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->m_1metatable_49 = rstack[sp + 1].obj;
    ; 
    //  line no 212 , L1786294176 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L793331940;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.useWeakKeys()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L793331940;
    // iconst_1
    stack[sp++].i = 1;
    goto L522553046;
    L793331940:
    // iconst_0
    stack[sp++].i = 0;
    L522553046:
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L275266973;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1069716895;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    ; 
    //  line no 213 , L1521083627 , bytecode index = 
    // invokeinterface org/luaj/vm2/Metatable.useWeakValues()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1069716895;
    // iconst_1
    stack[sp++].i = 1;
    goto L1770642014;
    L1069716895:
    // iconst_0
    stack[sp++].i = 0;
    L1770642014:
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L945591847;
    L275266973:
    //  line no 215 , L275266973 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial org/luaj/vm2/LuaTable.rehash(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_rehash__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L945591847:
    //  line no 217 , L945591847 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_setmetatable__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_setmetatable__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_get__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 632, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 221 , L109228794 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 221;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaTable.rawget(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 13);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 222 , L561959774 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L2110756088;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L2110756088;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/LuaTable.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaTable.gettable(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_gettable__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L580871917;
    L2110756088:
    rstack[sp++].obj = rlocal[2].obj;
    L580871917:
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

void bridge_org_luaj_vm2_LuaTable_get__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_get__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_get__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 633, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 226 , L1714078840 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 226;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaTable.rawget(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 14);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 227 , L1732502545 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L1051876890;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1051876890;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/LuaTable.gettable(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_gettable__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1199262943;
    L1051876890:
    rstack[sp++].obj = rlocal[2].obj;
    L1199262943:
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

void bridge_org_luaj_vm2_LuaTable_get__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_get__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_rawget__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 634, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 231 , L257513673 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 231;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  <= 0) goto L590845366;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L257513673
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L590845366;
    ; 
    //  line no 232 , L1052195003 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1541049864;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1052195003 bc index = 
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
    goto L511707818;
    L1541049864:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokeinterface org/luaj/vm2/Metatable.arrayget([Lorg/luaj/vm2/LuaValue;I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,JArray *,s32) = find_method(__ins->vm_table, 40, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L511707818:
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 233 , L25536233 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L116405378;
    rstack[sp++].obj = rlocal[2].obj;
    goto L164974746;
    L116405378:
    // getstatic org/luaj/vm2/LuaTable NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    L164974746:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L590845366:
    //  line no 235 , L590845366 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
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
    // invokevirtual org/luaj/vm2/LuaTable.hashget(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 15);
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

void bridge_org_luaj_vm2_LuaTable_rawget__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_rawget__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_rawget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 635, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 239 , L989892772 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 239;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isinttype()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1020520290;
    ; 
    //  line no 240 , L530653666 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 241 , L2125238280 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1020520290;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L2125238280
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1020520290;
    ; 
    //  line no 242 , L1092004553 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1658699134;
    ; 
    //  line no 243 , L1961176822 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1961176822 bc index = 
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
    goto L1859374258;
    L1658699134:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokeinterface org/luaj/vm2/Metatable.arrayget([Lorg/luaj/vm2/LuaValue;I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,JArray *,s32) = find_method(__ins->vm_table, 40, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1859374258:
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 244 , L442987331 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L366873404;
    rstack[sp++].obj = rlocal[3].obj;
    goto L1217467887;
    L366873404:
    // getstatic org/luaj/vm2/LuaTable NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    L1217467887:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1020520290:
    //  line no 247 , L1020520290 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaTable.hashget(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 15);
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

void bridge_org_luaj_vm2_LuaTable_rawget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_rawget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_hashget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 636, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 251 , L428566321 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 251;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hashEntries I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hashEntries_48;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L2087258327;
    ; 
    //  line no 252 , L1016550616 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaTable.hashSlot(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrload __refer  ,  L1016550616 bc index = 
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
    rlocal[2].obj = rstack[--sp].obj;
    L1006094903:
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L2087258327;
    ; 
    //  line no 254 , L2030538903 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.find(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    if(rstack[--sp].obj  == NULL) goto L1261153343;
    ; 
    //  line no 255 , L1309176095 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface org/luaj/vm2/LuaTable$StrongSlot.value()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 70, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1261153343:
    //  line no 252 , L1261153343 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.rest()Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1006094903;
    L2087258327:
    //  line no 259 , L2087258327 , bytecode index = 
    // getstatic org/luaj/vm2/LuaTable NIL Lorg/luaj/vm2/LuaValue;
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

void bridge_org_luaj_vm2_LuaTable_hashget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_hashget__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_org_luaj_vm2_LuaTable_set__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 637, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 263 , L645482568 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 263;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L807752428;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaTable.rawget(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 13);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    if(stack[--sp].i  == 0) goto L807752428;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
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
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaTable.settable(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 4;
        stack[sp].i = func_org_luaj_vm2_LuaValue_settable__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1026055550;
    L807752428:
    //  line no 264 , L807752428 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaTable.rawset(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 18);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1026055550:
    //  line no 265 , L1026055550 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_set__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_set__ILorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 4
// args: 2
void func_org_luaj_vm2_LuaTable_set__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 638, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 269 , L752316209 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 269;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L914356853;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isvalidkey()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 61);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1229161065;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaTable NEWINDEX Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NEWINDEX_23;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaTable.metatag(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 205);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.isfunction()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1229161065;
    L914356853:
    //  line no 270 , L914356853 , bytecode index = 
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1022);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1023);
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
    //     L914356853 in labeltable is :L914356853
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 270;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1229161065:
    //  line no 271 , L1229161065 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L195228908;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaTable.rawget(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 14);
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
    if(stack[--sp].i  == 0) goto L195228908;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaTable.settable(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 4;
        stack[sp].i = func_org_luaj_vm2_LuaValue_settable__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L471579726;
    L195228908:
    //  line no 272 , L195228908 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaTable.rawset(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 19);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L471579726:
    //  line no 273 , L471579726 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_set__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_set__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 3
// args: 2
void func_org_luaj_vm2_LuaTable_rawset__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 639, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 276 , L16503286 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 276;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LuaTable.arrayset(ILorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_arrayset__ILorg_luaj_vm2_LuaValue_2_Z(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L484589713;
    ; 
    //  line no 277 , L1574598287 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
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
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaTable.hashset(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 28);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L484589713:
    //  line no 278 , L484589713 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_rawset__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_rawset__ILorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 3
// args: 2
void func_org_luaj_vm2_LuaTable_rawset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 640, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 282 , L606508809 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 282;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isinttype()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L718187988;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LuaTable.arrayset(ILorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_arrayset__ILorg_luaj_vm2_LuaValue_2_Z(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L615438348;
    L718187988:
    //  line no 283 , L718187988 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaTable.hashset(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 28);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L615438348:
    //  line no 284 , L615438348 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_rawset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_rawset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 4
// args: 2
s8 func_org_luaj_vm2_LuaTable_arrayset__ILorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 641, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 288 , L710708543 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 288;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  <= 0) goto L1965237677;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L710708543
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1965237677;
    ; 
    //  line no 289 , L664792509 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L188523822;
    // aconst null
    rstack[sp++].obj = NULL;
    goto L1170727939;
    L188523822:
    //  line no 290 , L188523822 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L690339675;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/Metatable.wrap(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 40, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1170727939;
    L690339675:
    rstack[sp++].obj = rlocal[2].obj;
    L1170727939:
    // arrstore __refer  ,  L1170727939 bc index = 
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
    //  line no 291 , L1896828359 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1965237677:
    //  line no 293 , L1965237677 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_arrayset__ILorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_arrayset__ILorg_luaj_vm2_LuaValue_2_Z(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_remove__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 642, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 302 , L1709804316 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 302;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 23);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 303 , L1630678941 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L1792550665;
    ; 
    //  line no 304 , L1359953204 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[1].i = stack[--sp].i;
    goto L2014838114;
    L1792550665:
    //  line no 305 , L1792550665 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2014838114;
    ; 
    //  line no 306 , L136936250 , bytecode index = 
    // getstatic org/luaj/vm2/LuaTable NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2014838114:
    //  line no 307 , L2014838114 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 308 , L593687897 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rlocal[4].obj = rstack[--sp].obj;
    L187472540:
    rstack[sp++].obj = rlocal[4].obj;
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
    if(stack[--sp].i  != 0) goto L1276611190;
    ; 
    //  line no 309 , L262457445 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 310 , L1004023029 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/LuaTable.set(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 16);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L187472540;
    L1276611190:
    //  line no 312 , L1276611190 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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
    if(stack[--sp].i  == 0) goto L1414506856;
    // getstatic org/luaj/vm2/LuaTable NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    goto L612097453;
    L1414506856:
    rstack[sp++].obj = rlocal[3].obj;
    L612097453:
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

void bridge_org_luaj_vm2_LuaTable_remove__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_remove__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 2
void func_org_luaj_vm2_LuaTable_insert__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 643, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 321 , L2003891312 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 321;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L1583159071;
    ; 
    //  line no 322 , L607207372 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 23);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    L1583159071:
    //  line no 323 , L1583159071 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  != 0) goto L131206411;
    ; 
    //  line no 324 , L2012330741 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 325 , L1101184763 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaTable.set(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 16);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 326 , L1816147548 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 327 , L2079179914 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1583159071;
    L131206411:
    //  line no 328 , L131206411 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_insert__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_insert__ILorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 3
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_concat__Lorg_luaj_vm2_LuaString_2II_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 644, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 338 , L1437654187 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 338;
    // new org/luaj/vm2/Buffer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 48);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/Buffer.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Buffer__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 339 , L951050903 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L770947228;
    ; 
    //  line no 340 , L590646109 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.checkstring()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 55);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.append(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 48, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1882349076:
    //  line no 341 , L1882349076 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L770947228;
    ; 
    //  line no 342 , L936292831 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/Buffer.append(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 48, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 343 , L130668770 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.checkstring()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 55);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.append(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 48, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1882349076;
    L770947228:
    //  line no 346 , L770947228 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/Buffer.tostring()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 48, 2);
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

void bridge_org_luaj_vm2_LuaTable_concat__Lorg_luaj_vm2_LuaString_2II_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_concat__Lorg_luaj_vm2_LuaString_2II_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 4
// args: 0
s32 func_org_luaj_vm2_LuaTable_length___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 645, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 350 , L1644231115 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 350;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L537066525;
    ; 
    //  line no 351 , L1766145591 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.len()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 24);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 352 , L1867139015 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isint()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L182531396;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1028);
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
    //     L1867139015 in labeltable is :L1867139015
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 352;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L182531396:
    //  line no 353 , L182531396 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L537066525:
    //  line no 355 , L537066525 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.rawlen()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 25);
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

void bridge_org_luaj_vm2_LuaTable_length___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_length___I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_len___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 646, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 359 , L2109798150 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 359;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaTable LEN Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.LEN_34;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaTable.metatag(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 205);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 360 , L1074389766 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    if(stack[--sp].i  == 0) goto L1136768342;
    ; 
    //  line no 361 , L1484673893 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.call(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 102);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1136768342:
    //  line no 362 , L1136768342 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.rawlen()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 25);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_LuaTable_len___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_len___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 5
// stack: 3
// args: 0
s32 func_org_luaj_vm2_LuaTable_rawlen___I(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 647, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 366 , L769798433 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 366;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.getArrayLength()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 367 , L1665620686 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L202125197:
    //  line no 368 , L202125197 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaTable.rawget(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 13);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    if(stack[--sp].i  != 0) goto L811301908;
    ; 
    //  line no 369 , L1762902523 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 370 , L1725008249 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.getHashLength()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L202125197;
    L811301908:
    //  line no 372 , L811301908 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L197964393;
    ; 
    //  line no 373 , L1620890840 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 374 , L402115881 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/LuaTable.rawget(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 13);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    if(stack[--sp].i  != 0) goto L2106000623;
    ; 
    //  line no 375 , L330739404 , bytecode index = 
    stack[sp++].i = local[4].i;
    local[3].i = stack[--sp].i;
    goto L361398902;
    L2106000623:
    //  line no 377 , L2106000623 , bytecode index = 
    stack[sp++].i = local[4].i;
    local[2].i = stack[--sp].i;
    L361398902:
    //  line no 378 , L361398902 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L811301908;
    L197964393:
    //  line no 379 , L197964393 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_rawlen___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_rawlen___I(runtime, ins);
}


// locals: 6
// stack: 3
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_LuaTable_next__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 648, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 387 , L2044215423 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 387;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 390 , L1606304070 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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
    if(stack[--sp].i  != 0) goto L510063093;
    ; 
    //  line no 391 , L1313916817 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isinttype()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1966124444;
    ; 
    //  line no 392 , L1487500813 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 393 , L1911152052 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1966124444;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L1911152052
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1966124444;
    ; 
    //  line no 394 , L961409111 , bytecode index = 
    goto L510063093;
    L1966124444:
    //  line no 397 , L1966124444 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L1966124444
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    if(stack[--sp].i  != 0) goto L1231156911;
    ; 
    //  line no 398 , L1525409936 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1029);
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
    // invokestatic org/luaj/vm2/LuaTable.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L1231156911:
    //  line no 399 , L1231156911 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaTable.hashSlot(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 400 , L1708169732 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 401 , L868815265 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L868815265 bc index = 
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
    L1977310713:
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L1886491834;
    ; 
    //  line no 402 , L294658058 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  == 0) goto L1781493632;
    ; 
    //  line no 403 , L1169474473 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.first()Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 404 , L966544353 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  == NULL) goto L689745064;
    ; 
    //  line no 405 , L945722724 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // invokeinterface org/luaj/vm2/LuaTable$StrongSlot.toVarargs()Lorg/luaj/vm2/Varargs;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 70, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L689745064:
    //  line no 407 , L689745064 , bytecode index = 
    goto L1536471117;
    L1781493632:
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.keyeq(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1536471117;
    ; 
    //  line no 408 , L9190301 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[3].i = stack[--sp].i;
    L1536471117:
    //  line no 401 , L1536471117 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.rest()Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1977310713;
    L1886491834:
    //  line no 411 , L1886491834 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  != 0) goto L1278852808;
    ; 
    //  line no 412 , L63390 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1030);
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
    // invokestatic org/luaj/vm2/LuaTable.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L1278852808:
    //  line no 414 , L1278852808 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L1278852808
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L510063093:
    //  line no 419 , L510063093 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L510063093
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2129144075;
    ; 
    //  line no 420 , L525968792 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L525968792 bc index = 
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
    if(rstack[--sp].obj  == NULL) goto L504858437;
    ; 
    //  line no 421 , L422330142 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L649329985;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L422330142 bc index = 
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
    goto L1955920234;
    L649329985:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokeinterface org/luaj/vm2/Metatable.arrayget([Lorg/luaj/vm2/LuaValue;I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,JArray *,s32) = find_method(__ins->vm_table, 40, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1955920234:
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 422 , L1444635922 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L504858437;
    ; 
    //  line no 423 , L775386112 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
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
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic org/luaj/vm2/LuaTable.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
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
    L504858437:
    //  line no 419 , L504858437 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L510063093;
    L2129144075:
    //  line no 429 , L2129144075 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L2129144075
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    L391630194:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L391630194
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1146825051;
    ; 
    //  line no 430 , L1239807799 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1239807799 bc index = 
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
    L1550261631:
    //  line no 431 , L1550261631 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1970436060;
    ; 
    //  line no 432 , L1753127384 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.first()Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 433 , L239372207 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L1789718525;
    ; 
    //  line no 434 , L210156003 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface org/luaj/vm2/LuaTable$StrongSlot.toVarargs()Lorg/luaj/vm2/Varargs;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 70, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1789718525:
    //  line no 435 , L1789718525 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.rest()Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 436 , L279593458 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1550261631;
    L1970436060:
    //  line no 429 , L1970436060 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L391630194;
    L1146825051:
    //  line no 440 , L1146825051 , bytecode index = 
    // getstatic org/luaj/vm2/LuaTable NIL Lorg/luaj/vm2/LuaValue;
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

void bridge_org_luaj_vm2_LuaTable_next__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_next__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 4
// stack: 2
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_LuaTable_inext__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 649, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 449 , L925308434 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 449;
    rstack[sp++].obj = rlocal[1].obj;
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 450 , L249034932 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaTable.rawget(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 13);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 451 , L1278254413 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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
    if(stack[--sp].i  == 0) goto L940584193;
    // getstatic org/luaj/vm2/LuaTable NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    goto L931675031;
    L940584193:
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
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic org/luaj/vm2/LuaTable.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L931675031:
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

void bridge_org_luaj_vm2_LuaTable_inext__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_inext__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 6
// stack: 5
// args: 2
void func_org_luaj_vm2_LuaTable_hashset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 650, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 460 , L1312381159 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 460;
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L2012744708;
    ; 
    //  line no 461 , L31114735 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaTable.hashRemove(Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_hashRemove__Lorg_luaj_vm2_LuaValue_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1552999801;
    L2012744708:
    //  line no 463 , L2012744708 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 464 , L1491755116 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L1491755116
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    if(stack[--sp].i  <= 0) goto L1866850137;
    ; 
    //  line no 465 , L954702563 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaTable.hashSlot(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 466 , L1661406123 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1661406123 bc index = 
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
    L1759899303:
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L1866850137;
    ; 
    //  line no 468 , L689654773 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.find(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    if(rstack[--sp].obj  == NULL) goto L1982787818;
    ; 
    //  line no 469 , L838449246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L838449246 bc index = 
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
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.set(Lorg/luaj/vm2/LuaTable$StrongSlot;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024StrongSlot*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L838449246 bc index = 
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
    //  line no 470 , L1112414583 , bytecode index = 
    method_exit(runtime);
    return;
    L1982787818:
    //  line no 466 , L1982787818 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.rest()Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1759899303;
    L1866850137:
    //  line no 474 , L1866850137 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaTable.checkLoadFactor()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_checkLoadFactor___Z(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L282496973;
    ; 
    //  line no 475 , L293508253 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1840903588;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.useWeakValues()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1603198149;
    L1840903588:
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 476 , L2063763486 , bytecode index = 
    // invokevirtual org/luaj/vm2/LuaValue.isinttype()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1603198149;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L1603198149;
    ; 
    //  line no 478 , L515715487 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial org/luaj/vm2/LuaTable.rehash(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_rehash__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 479 , L1007412025 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LuaTable.arrayset(ILorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_arrayset__ILorg_luaj_vm2_LuaValue_2_Z(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L365590665;
    ; 
    //  line no 480 , L2053591126 , bytecode index = 
    method_exit(runtime);
    return;
    L1603198149:
    //  line no 482 , L1603198149 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // invokespecial org/luaj/vm2/LuaTable.rehash(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_rehash__I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L365590665:
    //  line no 484 , L365590665 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaTable.hashSlot(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    L282496973:
    //  line no 486 , L282496973 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L220309324;
    ; 
    //  line no 487 , L1850777594 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/Metatable.entry(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 40, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L681094281;
    L220309324:
    //  line no 488 , L220309324 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaTable.defaultEntry(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Entry;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaTable_defaultEntry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Entry_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L681094281:
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 489 , L1748876332 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1748876332 bc index = 
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
    if(rstack[--sp].obj  == NULL) goto L1747352992;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1748876332 bc index = 
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
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.add(Lorg/luaj/vm2/LuaTable$Slot;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024Slot*) = find_method(__ins->vm_table, 22, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L40075281;
    L1747352992:
    rstack[sp++].obj = rlocal[4].obj;
    L40075281:
    // arrstore __refer  ,  L40075281 bc index = 
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
    //  line no 490 , L1878169648 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/LuaTable hashEntries I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hashEntries_48;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/LuaTable hashEntries I
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->hashEntries_48 = stack[sp + 1].i;
    L1552999801:
    //  line no 492 , L1552999801 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_hashset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_hashset__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 3
s32 func_org_luaj_vm2_LuaTable_hashpow2__II_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 651, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 495 , L825962150 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 495;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
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

void bridge_org_luaj_vm2_LuaTable_hashpow2__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_hashpow2__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 2
// stack: 2
// args: 3
s32 func_org_luaj_vm2_LuaTable_hashmod__II_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 652, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 499 , L1418620248 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 499;
    stack[sp++].i = local[0].i;
    //  ldc 
    stack[sp++].i = 0x7fffffff;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
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

void bridge_org_luaj_vm2_LuaTable_hashmod__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_hashmod__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 2
// stack: 2
// args: 3
s32 func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2I_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0, struct org_luaj_vm2_LuaValue* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 653, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 509 , L169663597 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 509;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.type()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 2:
            goto L815320891;
        case 3:
            goto L815320891;
        case 4:
            goto L391877669;
        case 5:
            goto L815320891;
        case 6:
            goto L391877669;
        case 7:
            goto L815320891;
        case 8:
            goto L815320891;
        default:
            goto L391877669;
    }
    L815320891:
    //  line no 515 , L815320891 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/LuaTable.hashmod(II)I
    {
        sp -= 3;
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashmod__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L391877669:
    //  line no 517 , L391877669 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/LuaTable.hashpow2(II)I
    {
        sp -= 3;
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashpow2__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
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

void bridge_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2I_I(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 2
// stack: 3
// args: 1
s32 func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 654, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 527 , L1778629809 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 527;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L1778629809
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaTable.hashSlot(Lorg/luaj/vm2/LuaValue;I)I
    {
        sp -= 3;
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2I_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
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

void bridge_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2_I(runtime, ins);
}


// locals: 5
// stack: 4
// args: 1
void func_org_luaj_vm2_LuaTable_hashRemove__Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 655, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 531 , L1462044018 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 531;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L1462044018
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    if(stack[--sp].i  <= 0) goto L1443435931;
    ; 
    //  line no 532 , L555273695 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaTable.hashSlot(Lorg/luaj/vm2/LuaValue;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashSlot__Lorg_luaj_vm2_LuaValue_2_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 533 , L396883763 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L396883763 bc index = 
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
    L1750498848:
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1443435931;
    ; 
    //  line no 535 , L1995250556 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.find(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    if(rstack[--sp].obj  == NULL) goto L961160488;
    ; 
    //  line no 536 , L1647766367 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1647766367 bc index = 
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
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.remove(Lorg/luaj/vm2/LuaTable$StrongSlot;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024StrongSlot*) = find_method(__ins->vm_table, 22, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1647766367 bc index = 
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
    //  line no 537 , L2082351774 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/LuaTable hashEntries I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hashEntries_48;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/LuaTable hashEntries I
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->hashEntries_48 = stack[sp + 1].i;
    ; 
    //  line no 538 , L262366552 , bytecode index = 
    method_exit(runtime);
    return;
    L961160488:
    //  line no 533 , L961160488 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.rest()Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1750498848;
    L1443435931:
    //  line no 542 , L1443435931 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_hashRemove__Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_hashRemove__Lorg_luaj_vm2_LuaValue_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_luaj_vm2_LuaTable_checkLoadFactor___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 656, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 545 , L848363848 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 545;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hashEntries I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hashEntries_48;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L848363848
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1062635358;
    // iconst_1
    stack[sp++].i = 1;
    goto L726379593;
    L1062635358:
    // iconst_0
    stack[sp++].i = 0;
    L726379593:
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

void bridge_org_luaj_vm2_LuaTable_checkLoadFactor___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_checkLoadFactor___Z(runtime, ins);
}


// locals: 4
// stack: 2
// args: 0
s32 func_org_luaj_vm2_LuaTable_countHashKeys___I(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 657, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 549 , L896644936 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 549;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 550 , L1050065615 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1212772528:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L1212772528
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1148254374;
    ; 
    //  line no 551 , L2089016471 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L2089016471 bc index = 
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
    L2001223946:
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1946645411;
    ; 
    //  line no 552 , L938545229 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.first()Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L1433666880;
    ; 
    //  line no 553 , L1610702581 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    L1433666880:
    //  line no 551 , L1433666880 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.rest()Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2001223946;
    L1946645411:
    //  line no 550 , L1946645411 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1212772528;
    L1148254374:
    //  line no 556 , L1148254374 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_org_luaj_vm2_LuaTable_countHashKeys___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_countHashKeys___I(runtime, ins);
}


// locals: 2
// stack: 3
// args: 0
void func_org_luaj_vm2_LuaTable_dropWeakArrayValues___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 658, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 560 , L270056930 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 560;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L1706292388:
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L1706292388
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L254801937;
    ; 
    //  line no 561 , L90767234 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokeinterface org/luaj/vm2/Metatable.arrayget([Lorg/luaj/vm2/LuaValue;I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,JArray *,s32) = find_method(__ins->vm_table, 40, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 560 , L1355457888 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1706292388;
    L254801937:
    //  line no 563 , L254801937 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_dropWeakArrayValues___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_dropWeakArrayValues___V(runtime, ins);
}


// locals: 7
// stack: 4
// args: 1
s32 func_org_luaj_vm2_LuaTable_countIntKeys___3I_I(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 659, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 566 , L1522132780 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 566;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 567 , L409962262 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 570 , L495702238 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L73181251:
    stack[sp++].i = local[4].i;
    //  bipush 31
    stack[sp++].i = 31;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L298430307;
    ; 
    //  line no 571 , L1970982267 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L1970982267
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L917831210;
    ; 
    //  line no 572 , L1464555023 , bytecode index = 
    goto L298430307;
    L917831210:
    //  line no 573 , L917831210 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    // arraylength  label  L917831210
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 574 , L195381554 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L681008168:
    //  line no 575 , L681008168 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L960733886;
    ; 
    //  line no 576 , L875917495 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L875917495 bc index = 
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(rstack[--sp].obj  == NULL) goto L681008168;
    ; 
    //  line no 577 , L360207322 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L681008168;
    L960733886:
    //  line no 579 , L960733886 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[6].i;
    // arrstore s32  ,  L960733886 bc index = 
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
    //  line no 580 , L119290689 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 570 , L594427726 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L73181251;
    L298430307:
    //  line no 584 , L298430307 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1019298652:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    // arraylength  label  L1019298652
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1810899357;
    ; 
    //  line no 585 , L231786897 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L231786897 bc index = 
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
    L1595282218:
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L1778081847;
    ; 
    //  line no 587 , L57497692 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    //  ldc 
    stack[sp++].i = 0x7fffffff;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.arraykey(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 22, 5);
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
    local[5].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  <= 0) goto L1729779847;
    ; 
    //  line no 588 , L1431467659 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s32  ,  L1431467659 bc index = 
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
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1431467659 bc index = 
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
    //  line no 589 , L1016363973 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    L1729779847:
    //  line no 585 , L1729779847 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.rest()Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1595282218;
    L1778081847:
    //  line no 584 , L1778081847 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1019298652;
    L1810899357:
    //  line no 594 , L1810899357 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_countIntKeys___3I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_countIntKeys___3I_I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 2
s32 func_org_luaj_vm2_LuaTable_log2__I_I(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 660, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 599 , L1442191055 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 599;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 600 , L324457684 , bytecode index = 
    // iinc slot 0 value -1
    local[0].i += -1;
    ; 
    //  line no 601 , L201576232 , bytecode index = 
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  >= 0) goto L20094719;
    ; 
    //  line no 603 , L1687662712 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0x80000000;
    method_exit(runtime);
    return stack[sp - 1].i;
    L20094719:
    //  line no 604 , L20094719 , bytecode index = 
    stack[sp++].i = local[0].i;
    //  ldc 
    stack[sp++].i = 0xffff0000;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1103243338;
    ; 
    //  line no 605 , L1403704789 , bytecode index = 
    //  bipush 16
    stack[sp++].i = 16;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 606 , L1190820921 , bytecode index = 
    stack[sp++].i = local[0].i;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    local[0].i = stack[--sp].i;
    L1103243338:
    //  line no 608 , L1103243338 , bytecode index = 
    stack[sp++].i = local[0].i;
    //  ldc 
    stack[sp++].i = 0xff00;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L532087022;
    ; 
    //  line no 609 , L1332210474 , bytecode index = 
    // iinc slot 1 value 8
    local[1].i += 8;
    ; 
    //  line no 610 , L1248234350 , bytecode index = 
    stack[sp++].i = local[0].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    local[0].i = stack[--sp].i;
    L532087022:
    //  line no 612 , L532087022 , bytecode index = 
    stack[sp++].i = local[0].i;
    //  sipush 240
    stack[sp++].i = 240;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1600667055;
    ; 
    //  line no 613 , L2030036700 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    ; 
    //  line no 614 , L137460818 , bytecode index = 
    stack[sp++].i = local[0].i;
    // iconst_4
    stack[sp++].i = 4;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    local[0].i = stack[--sp].i;
    L1600667055:
    //  line no 616 , L1600667055 , bytecode index = 
    stack[sp++].i = local[0].i;
    switch(stack[--sp].i){
        case 0:
            goto L1760126453;
        case 1:
            goto L1864869682;
        case 2:
            goto L1819776360;
        case 3:
            goto L255334292;
        case 4:
            goto L752684363;
        case 5:
            goto L2123444693;
        case 6:
            goto L773662650;
        case 7:
            goto L1641415002;
        case 8:
            goto L623247230;
        case 9:
            goto L1380806038;
        case 10:
            goto L355115154;
        case 11:
            goto L1151844284;
        case 12:
            goto L1324578393;
        case 13:
            goto L2003534796;
        case 14:
            goto L931496835;
        case 15:
            goto L1311146128;
        default:
            goto L1995619265;
    }
    L1760126453:
    //  line no 617 , L1760126453 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1864869682:
    //  line no 618 , L1864869682 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    goto L1995619265;
    L1819776360:
    //  line no 619 , L1819776360 , bytecode index = 
    // iinc slot 1 value 2
    local[1].i += 2;
    goto L1995619265;
    L255334292:
    //  line no 620 , L255334292 , bytecode index = 
    // iinc slot 1 value 2
    local[1].i += 2;
    goto L1995619265;
    L752684363:
    //  line no 621 , L752684363 , bytecode index = 
    // iinc slot 1 value 3
    local[1].i += 3;
    goto L1995619265;
    L2123444693:
    //  line no 622 , L2123444693 , bytecode index = 
    // iinc slot 1 value 3
    local[1].i += 3;
    goto L1995619265;
    L773662650:
    //  line no 623 , L773662650 , bytecode index = 
    // iinc slot 1 value 3
    local[1].i += 3;
    goto L1995619265;
    L1641415002:
    //  line no 624 , L1641415002 , bytecode index = 
    // iinc slot 1 value 3
    local[1].i += 3;
    goto L1995619265;
    L623247230:
    //  line no 625 , L623247230 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    goto L1995619265;
    L1380806038:
    //  line no 626 , L1380806038 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    goto L1995619265;
    L355115154:
    //  line no 627 , L355115154 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    goto L1995619265;
    L1151844284:
    //  line no 628 , L1151844284 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    goto L1995619265;
    L1324578393:
    //  line no 629 , L1324578393 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    goto L1995619265;
    L2003534796:
    //  line no 630 , L2003534796 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    goto L1995619265;
    L931496835:
    //  line no 631 , L931496835 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    goto L1995619265;
    L1311146128:
    //  line no 632 , L1311146128 , bytecode index = 
    // iinc slot 1 value 4
    local[1].i += 4;
    L1995619265:
    //  line no 634 , L1995619265 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_org_luaj_vm2_LuaTable_log2__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 19
// stack: 6
// args: 1
void func_org_luaj_vm2_LuaTable_rehash__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[19] = {0};
    RStackItem rlocal[19] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 661, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 643 , L812446698 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 643;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L737077247;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.useWeakKeys()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1362546706;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.useWeakValues()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L737077247;
    L1362546706:
    //  line no 645 , L1362546706 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaTable.countHashKeys()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_countHashKeys___I(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LuaTable hashEntries I
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->hashEntries_48 = stack[sp + 1].i;
    ; 
    //  line no 646 , L1496949625 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.useWeakValues()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L737077247;
    ; 
    //  line no 647 , L236840983 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaTable.dropWeakArrayValues()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_dropWeakArrayValues___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L737077247:
    //  line no 650 , L737077247 , bytecode index = 
    //  bipush 32
    stack[sp++].i = 32;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 651 , L1376790324 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LuaTable.countIntKeys([I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_countIntKeys___3I_I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 652 , L893504292 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  <= 0) goto L561480862;
    ; 
    //  line no 653 , L1087081975 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    ; 
    //  line no 654 , L330382173 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s32  ,  L330382173 bc index = 
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
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L330382173 bc index = 
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
    L561480862:
    //  line no 658 , L561480862 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s32  ,  L561480862 bc index = 
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
    //  line no 659 , L680712932 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 660 , L895281180 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[6].i = stack[--sp].i;
    L694452085:
    stack[sp++].i = local[6].i;
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L857068247;
    ; 
    //  line no 661 , L225344427 , bytecode index = 
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[6].i;
    // arrload s32  ,  L225344427 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 662 , L1604353554 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1437941060;
    ; 
    //  line no 664 , L1210830415 , bytecode index = 
    goto L857068247;
    L1437941060:
    //  line no 665 , L1437941060 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[6].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L912672706;
    ; 
    //  line no 666 , L1785397234 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L912672706:
    //  line no 660 , L912672706 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L694452085;
    L857068247:
    //  line no 670 , L857068247 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 671 , L373928166 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hash_47;
    sp += 0;
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 676 , L8805846 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 677 , L81412691 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  <= 0) goto L963815509;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L963815509;
    ; 
    //  line no 678 , L1659367709 , bytecode index = 
    // iinc slot 10 value -1
    local[10].i += -1;
    L963815509:
    //  line no 680 , L963815509 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L963815509
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1346201722;
    ; 
    //  line no 681 , L111374580 , bytecode index = 
    stack[sp++].i = local[5].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 682 , L717176949 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L717176949
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1997353766;
    ; 
    //  line no 683 , L1288235781 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L1288235781
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[12].i = stack[--sp].i;
    L27084827:
    stack[sp++].i = local[11].i;
    stack[sp++].i = local[12].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L530042637;
    ; 
    //  line no 684 , L336371513 , bytecode index = 
    stack[sp++].i = local[10].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[11].i;
    // arrload s32  ,  L336371513 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 683 , L1301352406 , bytecode index = 
    // iinc slot 11 value 1
    local[11].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L27084827;
    L530042637:
    goto L640113647;
    L1997353766:
    //  line no 686 , L1997353766 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L1997353766
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L640113647;
    ; 
    //  line no 687 , L124323713 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L2011997442
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[12].i = stack[--sp].i;
    L843512726:
    stack[sp++].i = local[11].i;
    stack[sp++].i = local[12].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L640113647;
    ; 
    //  line no 688 , L773989906 , bytecode index = 
    stack[sp++].i = local[10].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[11].i;
    // arrload s32  ,  L773989906 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 687 , L1631086936 , bytecode index = 
    // iinc slot 11 value 1
    local[11].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L843512726;
    L640113647:
    //  line no 691 , L640113647 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[8].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L640113647
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[5].i;
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
    goto L1944978632;
    L1346201722:
    //  line no 693 , L1346201722 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->array_46;
    sp += 0;
    rlocal[8].obj = rstack[--sp].obj;
    L1944978632:
    //  line no 696 , L1944978632 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable hashEntries I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hashEntries_48;
    sp += 0;
    stack[sp++].i = local[10].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 697 , L1987169128 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L1239183618;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1804379080;
    L1239183618:
    // iconst_1
    stack[sp++].i = 1;
    goto L1757880885;
    L1804379080:
    // iconst_0
    stack[sp++].i = 0;
    L1757880885:
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 698 , L278240974 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // arraylength  label  L278240974
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[12].i = stack[--sp].i;
    ; 
    //  line no 702 , L980138431 , bytecode index = 
    stack[sp++].i = local[11].i;
    if(stack[--sp].i  <= 0) goto L888655833;
    ; 
    //  line no 704 , L1710265848 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1504642150;
    ; 
    //  line no 705 , L1047460013 , bytecode index = 
    // iconst_2
    stack[sp++].i = 2;
    goto L879583678;
    L1504642150:
    //  line no 706 , L1504642150 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[11].i;
    // invokestatic org/luaj/vm2/LuaTable.log2(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaTable_log2__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    L879583678:
    local[13].i = stack[--sp].i;
    ; 
    //  line no 707 , L1431530910 , bytecode index = 
    stack[sp++].i = local[13].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[14].i = stack[--sp].i;
    ; 
    //  line no 708 , L1954471782 , bytecode index = 
    stack[sp++].i = local[13].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaTable$Slot; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1016));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    goto L1646464088;
    L888655833:
    //  line no 710 , L888655833 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[13].i = stack[--sp].i;
    ; 
    //  line no 711 , L752001567 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[14].i = stack[--sp].i;
    ; 
    //  line no 712 , L777379084 , bytecode index = 
    // getstatic org/luaj/vm2/LuaTable NOBUCKETS [Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaTable.NOBUCKETS_50;
    sp += 1;
    rlocal[9].obj = rstack[--sp].obj;
    L1646464088:
    //  line no 716 , L1646464088 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[15].i = stack[--sp].i;
    L1950701640:
    stack[sp++].i = local[15].i;
    stack[sp++].i = local[12].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L243194708;
    ; 
    //  line no 717 , L931480286 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[15].i;
    // arrload __refer  ,  L931480286 bc index = 
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
    rlocal[16].obj = rstack[--sp].obj;
    L926434463:
    rstack[sp++].obj = rlocal[16].obj;
    if(rstack[--sp].obj  == NULL) goto L1776409896;
    ; 
    //  line no 719 , L297602875 , bytecode index = 
    rstack[sp++].obj = rlocal[16].obj;
    stack[sp++].i = local[5].i;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.arraykey(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 22, 5);
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
    local[17].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  <= 0) goto L2044366277;
    ; 
    //  line no 720 , L515184459 , bytecode index = 
    rstack[sp++].obj = rlocal[16].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.first()Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[18].obj = rstack[--sp].obj;
    ; 
    //  line no 721 , L1728579441 , bytecode index = 
    rstack[sp++].obj = rlocal[18].obj;
    if(rstack[--sp].obj  == NULL) goto L1926096844;
    ; 
    //  line no 722 , L1607792885 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    stack[sp++].i = local[17].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[18].obj;
    // invokeinterface org/luaj/vm2/LuaTable$StrongSlot.value()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 70, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1607792885 bc index = 
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
    L1926096844:
    //  line no 723 , L1926096844 , bytecode index = 
    goto L1768792843;
    L2044366277:
    rstack[sp++].obj = rlocal[16].obj;
    // instanceof org/luaj/vm2/LuaTable$DeadSlot
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 749);
    if(stack[--sp].i  != 0) goto L1768792843;
    ; 
    //  line no 724 , L1316557528 , bytecode index = 
    rstack[sp++].obj = rlocal[16].obj;
    stack[sp++].i = local[14].i;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.keyindex(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 22, 0);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[18].i = stack[--sp].i;
    ; 
    //  line no 725 , L1402433372 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[18].i;
    rstack[sp++].obj = rlocal[16].obj;
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[18].i;
    // arrload __refer  ,  L1402433372 bc index = 
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
    // invokeinterface org/luaj/vm2/LuaTable$Slot.relink(Lorg/luaj/vm2/LuaTable$Slot;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024Slot*) = find_method(__ins->vm_table, 22, 9);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1402433372 bc index = 
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
    L1768792843:
    //  line no 717 , L1768792843 , bytecode index = 
    rstack[sp++].obj = rlocal[16].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.rest()Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 22, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[16].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L926434463;
    L1776409896:
    //  line no 716 , L1776409896 , bytecode index = 
    // iinc slot 15 value 1
    local[15].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1950701640;
    L243194708:
    //  line no 731 , L243194708 , bytecode index = 
    stack[sp++].i = local[5].i;
    local[15].i = stack[--sp].i;
    L737945227:
    stack[sp++].i = local[15].i;
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L737945227
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L797814020;
    ; 
    //  line no 733 , L702846463 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[15].i;
    // iinc slot 15 value 1
    local[15].i += 1;
    // arrload __refer  ,  L702846463 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[16].obj = rstack[--sp].obj;
    ; 
    if(rstack[--sp].obj  == NULL) goto L199449817;
    ; 
    //  line no 734 , L1229202732 , bytecode index = 
    stack[sp++].i = local[15].i;
    // invokestatic org/luaj/vm2/LuaInteger.hashCode(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaInteger_hashCode__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[14].i;
    // invokestatic org/luaj/vm2/LuaTable.hashmod(II)I
    {
        sp -= 3;
        stack[sp].i = func_org_luaj_vm2_LuaTable_hashmod__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[17].i = stack[--sp].i;
    ; 
    //  line no 736 , L1149377174 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L171802996;
    ; 
    //  line no 737 , L464064894 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    stack[sp++].i = local[15].i;
    // invokestatic org/luaj/vm2/LuaTable.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[16].obj;
    // invokeinterface org/luaj/vm2/Metatable.entry(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 40, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[18].obj = rstack[--sp].obj;
    ; 
    //  line no 738 , L1932274274 , bytecode index = 
    rstack[sp++].obj = rlocal[18].obj;
    if(rstack[--sp].obj  != NULL) goto L657381435;
    ; 
    //  line no 739 , L1107217291 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L737945227;
    L171802996:
    //  line no 741 , L171802996 , bytecode index = 
    stack[sp++].i = local[15].i;
    // invokestatic org/luaj/vm2/LuaTable.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[16].obj;
    // invokestatic org/luaj/vm2/LuaTable.defaultEntry(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Entry;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaTable_defaultEntry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Entry_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[18].obj = rstack[--sp].obj;
    L657381435:
    //  line no 743 , L657381435 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[17].i;
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[17].i;
    // arrload __refer  ,  L657381435 bc index = 
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
    if(rstack[--sp].obj  == NULL) goto L302977067;
    ; 
    //  line no 744 , L6444850 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[17].i;
    // arrload __refer  ,  L6444850 bc index = 
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
    rstack[sp++].obj = rlocal[18].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.add(Lorg/luaj/vm2/LuaTable$Slot;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024Slot*) = find_method(__ins->vm_table, 22, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1373419525;
    L302977067:
    rstack[sp++].obj = rlocal[18].obj;
    L1373419525:
    // arrstore __refer  ,  L1373419525 bc index = 
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
    L199449817:
    //  line no 746 , L199449817 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L737945227;
    L797814020:
    //  line no 748 , L797814020 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[9].obj;
    // putfield org/luaj/vm2/LuaTable hash [Lorg/luaj/vm2/LuaTable$Slot;
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->hash_47 = rstack[sp + 1].obj;
    ; 
    //  line no 749 , L1716093734 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[8].obj;
    // putfield org/luaj/vm2/LuaTable array [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->array_46 = rstack[sp + 1].obj;
    ; 
    //  line no 750 , L212683148 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/LuaTable hashEntries I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->hashEntries_48;
    sp += 0;
    stack[sp++].i = local[10].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/LuaTable hashEntries I
    sp -= 2;
    ((struct org_luaj_vm2_LuaTable*)rstack[sp + 0].obj)->hashEntries_48 = stack[sp + 1].i;
    ; 
    //  line no 751 , L509891820 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_rehash__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_rehash__I_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_LuaTable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 662, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 754 , L11939193 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 754;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaTable.defaultEntry(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Entry;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaTable_defaultEntry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Entry_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
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

void bridge_org_luaj_vm2_LuaTable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 2
// args: 2
s8 func_org_luaj_vm2_LuaTable_isLargeKey__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 663, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 758 , L1523457748 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 758;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.type()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 1:
            goto L671046933;
        case 2:
            goto L370370379;
        case 3:
            goto L671046933;
        case 4:
            goto L1309238149;
        default:
            goto L370370379;
    }
    L1309238149:
    //  line no 760 , L1309238149 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.rawlen()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 129);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1687940142;
    // iconst_1
    stack[sp++].i = 1;
    goto L1765795529;
    L1687940142:
    // iconst_0
    stack[sp++].i = 0;
    L1765795529:
    method_exit(runtime);
    return stack[sp - 1].i;
    L671046933:
    //  line no 763 , L671046933 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L370370379:
    //  line no 765 , L370370379 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_isLargeKey__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_isLargeKey__Lorg_luaj_vm2_LuaValue_2_Z(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 5
// args: 3
struct org_luaj_vm2_LuaTable_00024Entry* func_org_luaj_vm2_LuaTable_defaultEntry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Entry_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0, struct org_luaj_vm2_LuaValue* p1, struct org_luaj_vm2_LuaValue* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 664, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 770 , L837108062 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 770;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isinttype()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L170144208;
    ; 
    //  line no 771 , L482052083 , bytecode index = 
    // new org/luaj/vm2/LuaTable$IntKeyEntry
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 119);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaTable$IntKeyEntry.<init>(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_00024IntKeyEntry__init___ILorg_luaj_vm2_LuaValue_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L170144208:
    //  line no 772 , L170144208 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.type()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_3
    stack[sp++].i = 3;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1720339;
    ; 
    //  line no 773 , L460201727 , bytecode index = 
    // new org/luaj/vm2/LuaTable$NumberValueEntry
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 95);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
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
    // invokespecial org/luaj/vm2/LuaTable$NumberValueEntry.<init>(Lorg/luaj/vm2/LuaValue;D)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_00024NumberValueEntry__init___Lorg_luaj_vm2_LuaValue_2D_V(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1720339:
    //  line no 775 , L1720339 , bytecode index = 
    // new org/luaj/vm2/LuaTable$NormalEntry
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 94);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/LuaTable$NormalEntry.<init>(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_00024NormalEntry__init___Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_LuaTable_defaultEntry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Entry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_defaultEntry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Entry_2(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 3
// stack: 5
// args: 1
void func_org_luaj_vm2_LuaTable_sort__Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 665, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 789 , L1881901842 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 789;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.len()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 24);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.tolong()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 21);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    stack[sp].j = 0x7fffffffL;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L585324508;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1049);
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
    // invokevirtual org/luaj/vm2/LuaTable.len()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 24);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.tolong()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 21);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    //     L1881901842 in labeltable is :L1881901842
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 789;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L585324508:
    //  line no 790 , L585324508 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1234250905;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.useWeakValues()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1234250905;
    ; 
    //  line no 791 , L16868310 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaTable.dropWeakArrayValues()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_dropWeakArrayValues___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1234250905:
    //  line no 793 , L1234250905 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 23);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 794 , L769530879 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L364639279;
    ; 
    //  line no 795 , L1427040229 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
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
    if(stack[--sp].i  == 0) goto L1604002113;
    // aconst null
    rstack[sp++].obj = NULL;
    goto L38262958;
    L1604002113:
    rstack[sp++].obj = rlocal[1].obj;
    L38262958:
    // invokespecial org/luaj/vm2/LuaTable.heapSort(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_heapSort__ILorg_luaj_vm2_LuaValue_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L364639279:
    //  line no 796 , L364639279 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_sort__Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_sort__Lorg_luaj_vm2_LuaValue_2_V(runtime, ins);
}


// locals: 5
// stack: 4
// args: 2
void func_org_luaj_vm2_LuaTable_heapSort__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 666, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 799 , L1787079037 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 799;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LuaTable.heapify(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_heapify__ILorg_luaj_vm2_LuaValue_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 800 , L1813187653 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[3].i = stack[--sp].i;
    L1353530305:
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L574268151;
    ; 
    //  line no 801 , L1832532108 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 802 , L423583818 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaTable.set(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 16);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 803 , L552936351 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/LuaTable.set(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 16);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 804 , L1471086700 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // iinc slot 3 value -1
    local[3].i += -1;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LuaTable.siftDown(IILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_siftDown__IILorg_luaj_vm2_LuaValue_2_V(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 805 , L1810742349 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1353530305;
    L574268151:
    //  line no 806 , L574268151 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_heapSort__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_heapSort__ILorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 4
// args: 2
void func_org_luaj_vm2_LuaTable_heapify__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 667, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 809 , L13803304 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 809;
    stack[sp++].i = local[1].i;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    L802243390:
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  <= 0) goto L702061917;
    ; 
    //  line no 810 , L890545344 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LuaTable.siftDown(IILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_siftDown__IILorg_luaj_vm2_LuaValue_2_V(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 809 , L556488341 , bytecode index = 
    // iinc slot 3 value -1
    local[3].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L802243390;
    L702061917:
    //  line no 811 , L702061917 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_heapify__ILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_heapify__ILorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj);
}


// locals: 7
// stack: 4
// args: 3
void func_org_luaj_vm2_LuaTable_siftDown__IILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, s32 p0, s32 p1, struct org_luaj_vm2_LuaValue* p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 668, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 814 , L1771667101 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 814;
    stack[sp++].i = local[1].i;
    local[4].i = stack[--sp].i;
    L2033968586:
    stack[sp++].i = local[4].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L48208774;
    ; 
    //  line no 815 , L929383713 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 816 , L363509958 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L865667596;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/LuaTable.compare(IILorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_compare__IILorg_luaj_vm2_LuaValue_2_Z(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L865667596;
    ; 
    //  line no 817 , L1306834002 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    L865667596:
    //  line no 818 , L865667596 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/LuaTable.compare(IILorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_LuaTable_compare__IILorg_luaj_vm2_LuaValue_2_Z(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1354083458;
    ; 
    //  line no 819 , L270095066 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 820 , L1806431167 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaTable.set(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 16);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 821 , L50699452 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[6].obj;
    // invokevirtual org/luaj/vm2/LuaTable.set(ILorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 16);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 822 , L2125062626 , bytecode index = 
    stack[sp++].i = local[5].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 823 , L620557167 , bytecode index = 
    goto L285133380;
    L1354083458:
    //  line no 824 , L1354083458 , bytecode index = 
    method_exit(runtime);
    return;
    L285133380:
    //  line no 825 , L285133380 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2033968586;
    L48208774:
    //  line no 826 , L48208774 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_siftDown__IILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable_siftDown__IILorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].i, para[1].obj);
}


// locals: 6
// stack: 3
// args: 3
s8 func_org_luaj_vm2_LuaTable_compare__IILorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, s32 p0, s32 p1, struct org_luaj_vm2_LuaValue* p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 669, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 829 , L245765246 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 829;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 830 , L726181440 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L510147134;
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  != NULL) goto L542365801;
    L510147134:
    //  line no 831 , L510147134 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L542365801:
    //  line no 832 , L542365801 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L2051120548;
    ; 
    //  line no 833 , L341138954 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.call(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 104);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
    method_exit(runtime);
    return stack[sp - 1].i;
    L2051120548:
    //  line no 835 , L2051120548 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.lt_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 169);
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

void bridge_org_luaj_vm2_LuaTable_compare__IILorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_compare__IILorg_luaj_vm2_LuaValue_2_Z(runtime, ins, para[0].i, para[1].obj);
}


// locals: 4
// stack: 2
// args: 0
s32 func_org_luaj_vm2_LuaTable_keyCount___I(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 670, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 844 , L1973233403 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 844;
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 845 , L63387985 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1029472813:
    //  line no 846 , L1029472813 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaTable.next(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 26);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 847 , L1866875501 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/Varargs.arg1()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 2);
        rstack[sp].obj = __func_p(runtime);
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
    rlocal[1].obj = rstack[--sp].obj;
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
    if(stack[--sp].i  == 0) goto L1936722816;
    ; 
    //  line no 848 , L1237825806 , bytecode index = 
    stack[sp++].i = local[2].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1936722816:
    //  line no 845 , L1936722816 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1029472813;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaTable_keyCount___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_keyCount___I(runtime, ins);
}


// locals: 4
// stack: 2
// args: 0
JArray * func_org_luaj_vm2_LuaTable_keys____3Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 671, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 857 , L1297836716 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 857;
    // new java/util/Vector
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 120);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/Vector.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 858 , L1048855692 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    rlocal[2].obj = rstack[--sp].obj;
    L1249875355:
    //  line no 860 , L1249875355 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaTable.next(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 26);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 861 , L1117519786 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/Varargs.arg1()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 2);
        rstack[sp].obj = __func_p(runtime);
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
    rlocal[2].obj = rstack[--sp].obj;
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
    if(stack[--sp].i  == 0) goto L1409545055;
    ; 
    //  line no 862 , L1212116343 , bytecode index = 
    goto L2119891622;
    L1409545055:
    //  line no 863 , L1409545055 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/Vector.addElement(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 120, 19);
        jthread_lock(runtime, __ins);
        __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 864 , L1671507048 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1249875355;
    L2119891622:
    //  line no 865 , L2119891622 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Vector.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 120, 5);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 866 , L687059528 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/util/Vector.copyInto([Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 120, 0);
        jthread_lock(runtime, __ins);
        __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 867 , L454305524 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaTable_keys____3Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_keys____3Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 672, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 871 , L1478150312 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 871;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaTable.eq_b(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 34);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1833848849;
    // getstatic org/luaj/vm2/LuaTable TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L1473771722;
    L1833848849:
    // getstatic org/luaj/vm2/LuaTable FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L1473771722:
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

void bridge_org_luaj_vm2_LuaTable_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_eq__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
s8 func_org_luaj_vm2_LuaTable_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 673, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 873 , L2014461570 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 873;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1740846921;
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1740846921:
    //  line no 874 , L1740846921 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L263885523;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.istable()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 12);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1714113641;
    L263885523:
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1714113641:
    //  line no 875 , L1714113641 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.getmetatable()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 99);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 876 , L262445056 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L1898155970;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaTable m_metatable Lorg/luaj/vm2/Metatable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaTable*)rstack[sp - 1].obj)->m_1metatable_49;
    sp += 0;
    // invokeinterface org/luaj/vm2/Metatable.toLuaValue()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 40, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaValue.eqmtcall(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 5;
        stack[sp].i = func_org_luaj_vm2_LuaValue_eqmtcall__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1898155970;
    // iconst_1
    stack[sp++].i = 1;
    goto L710190911;
    L1898155970:
    // iconst_0
    stack[sp++].i = 0;
    L710190911:
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

void bridge_org_luaj_vm2_LuaTable_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_eq_1b__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_LuaTable_unpack___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 674, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 881 , L1030684756 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 881;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.rawlen()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 25);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaTable.unpack(II)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 33, 37);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
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

void bridge_org_luaj_vm2_LuaTable_unpack___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_unpack___Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_LuaTable_unpack__I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 675, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 886 , L1606286799 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 886;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LuaTable.rawlen()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 25);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaTable.unpack(II)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 33, 37);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
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

void bridge_org_luaj_vm2_LuaTable_unpack__I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_unpack__I_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}

ExceptionItem arr_extable_func_org_luaj_vm2_LuaTable_unpack__II_Lorg_luaj_vm2_Varargs_2[] = {
    { , , 841}
};
ExceptionTable extable_func_org_luaj_vm2_LuaTable_unpack__II_Lorg_luaj_vm2_Varargs_2 = {1, arr_extable_func_org_luaj_vm2_LuaTable_unpack__II_Lorg_luaj_vm2_Varargs_2};

// locals: 7
// stack: 5
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_LuaTable_unpack__II_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 676, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    // try catch :L198499365 L621300254 L359368949 (
    ; 
    //  line no 891 , L1006227006 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 891;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L375457936;
    // getstatic org/luaj/vm2/LuaTable NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L375457936:
    //  line no 892 , L375457936 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 893 , L1910438136 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  >= 0) goto L943454742;
    // new org/luaj/vm2/LuaError
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1061);
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
    //     L1910438136 in labeltable is :L1910438136
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 893;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L943454742:
    //  line no 894 , L943454742 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0xffffff;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 895 , L1296456465 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1409154977;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1062);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1063);
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
    stack[sp++].i = local[4].i;
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
    //  bipush 41
    stack[sp++].i = 41;
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
    //     L1296456465 in labeltable is :L1296456465
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 895;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1409154977:
    //  line no 896 , L1409154977 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 897 , L1432536094 , bytecode index = 
    stack[sp++].i = local[5].i;
    switch(stack[--sp].i){
        case 0:
            goto L1292838001;
        case 1:
            goto L1899223686;
        case 2:
            goto L842179210;
        default:
            goto L854487022;
    }
    L1292838001:
    //  line no 898 , L1292838001 , bytecode index = 
    // getstatic org/luaj/vm2/LuaTable NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1899223686:
    //  line no 899 , L1899223686 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L842179210:
    //  line no 900 , L842179210 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaTable.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
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
    L854487022:
    //  line no 902 , L854487022 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  >= 0) goto L198499365;
    ; 
    //  line no 903 , L1944201789 , bytecode index = 
    // getstatic org/luaj/vm2/LuaTable NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L198499365:
    __frame->bytecodeIndex = 
    //  line no 905 , L198499365 , bytecode index = 
    stack[sp++].i = local[5].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[6].obj = rstack[--sp].obj;
    L1207608476:
    //  line no 906 , L1207608476 , bytecode index = 
    // iinc slot 5 value -1
    local[5].i += -1;
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  < 0) goto L686989583;
    ; 
    //  line no 907 , L259219561 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaTable.get(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 33, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L259219561 bc index = 
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1207608476;
    L686989583:
    //  line no 908 , L686989583 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // invokestatic org/luaj/vm2/LuaTable.varargsOf([Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf___3Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L621300254:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L359368949:
    //  line no 909 , L359368949 , bytecode index = 
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 910 , L1839337592 , bytecode index = 
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1064);
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
    stack[sp++].i = local[5].i;
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
    //     L1839337592 in labeltable is :L1839337592
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 910;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L359368949;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaTable_unpack__II_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_unpack__II_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].i);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaTable_useWeakKeys___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 677, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1353 , L1110031167 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1353;
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

void bridge_org_luaj_vm2_LuaTable_useWeakKeys___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_useWeakKeys___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_LuaTable_useWeakValues___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 678, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1357 , L730923082 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1357;
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

void bridge_org_luaj_vm2_LuaTable_useWeakValues___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_useWeakValues___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_toLuaValue___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 679, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 1361 , L800281454 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1361;
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

void bridge_org_luaj_vm2_LuaTable_toLuaValue___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_toLuaValue___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 680, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 1365 , L900636745 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1365;
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

void bridge_org_luaj_vm2_LuaTable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LuaTable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, JArray * p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 681, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 1369 , L1201173334 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1369;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1201173334 bc index = 
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

void bridge_org_luaj_vm2_LuaTable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 1
// args: 1
void func_org_luaj_vm2_LuaTable__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 682, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 75 , L1652807864 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 75;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1065);
    // invokestatic org/luaj/vm2/LuaTable.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/LuaTable N Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_LuaTable.N_45 = rstack[sp].obj;
    ; 
    //  line no 1348 , L997055773 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaTable$Slot; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1016));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/LuaTable NOBUCKETS [Lorg/luaj/vm2/LuaTable$Slot;
    sp -= 1;
    static_var_org_luaj_vm2_LuaTable.NOBUCKETS_50 = rstack[sp].obj;
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

void bridge_org_luaj_vm2_LuaTable__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaTable__clinit____V(runtime, para[0].obj);
}


