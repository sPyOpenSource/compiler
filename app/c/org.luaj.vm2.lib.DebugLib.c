// CLASS: org/luaj/vm2/lib/DebugLib extends org/luaj/vm2/lib/TwoArgFunction
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_DebugLib_static {s8 CALLS_47; s8 TRACE_48; struct org_luaj_vm2_LuaString* LUA_49; struct org_luaj_vm2_LuaString* QMARK_50; struct org_luaj_vm2_LuaString* CALL_51; struct org_luaj_vm2_LuaString* LINE_52; struct org_luaj_vm2_LuaString* COUNT_53; struct org_luaj_vm2_LuaString* RETURN_54; struct org_luaj_vm2_LuaString* FUNC_55; struct org_luaj_vm2_LuaString* ISTAILCALL_56; struct org_luaj_vm2_LuaString* ISVARARG_57; struct org_luaj_vm2_LuaString* NUPS_58; struct org_luaj_vm2_LuaString* NPARAMS_59; struct org_luaj_vm2_LuaString* NAME_60; struct org_luaj_vm2_LuaString* NAMEWHAT_61; struct org_luaj_vm2_LuaString* WHAT_62; struct org_luaj_vm2_LuaString* SOURCE_63; struct org_luaj_vm2_LuaString* SHORT_1SRC_64; struct org_luaj_vm2_LuaString* LINEDEFINED_65; struct org_luaj_vm2_LuaString* LASTLINEDEFINED_66; struct org_luaj_vm2_LuaString* CURRENTLINE_67; struct org_luaj_vm2_LuaString* ACTIVELINES_68;  };
struct org_luaj_vm2_lib_DebugLib_static static_var_org_luaj_vm2_lib_DebugLib = {0, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};


__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_lib_DebugLib[] = {
    func_org_luaj_vm2_lib_DebugLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_lib_DebugLib_onCall__Lorg_luaj_vm2_LuaFunction_2_V,  //1
    func_org_luaj_vm2_lib_DebugLib_onCall__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V,  //2
    func_org_luaj_vm2_lib_DebugLib_onInstruction__ILorg_luaj_vm2_Varargs_2I_V,  //3
    func_org_luaj_vm2_lib_DebugLib_onReturn___V,  //4
    func_org_luaj_vm2_lib_DebugLib_traceback__I_Ljava_lang_String_2,  //5
    func_org_luaj_vm2_lib_DebugLib_getCallFrame__I_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2,  //6
    func_org_luaj_vm2_lib_DebugLib_callHook__Lorg_luaj_vm2_LuaThread_00024State_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V,  //7
    func_org_luaj_vm2_lib_DebugLib_callstack___Lorg_luaj_vm2_lib_DebugLib_00024CallStack_2,  //8
    func_org_luaj_vm2_lib_DebugLib_callstack__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_lib_DebugLib_00024CallStack_2  //9
};
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_lib_TwoArgFunction[] = {
    func_org_luaj_vm2_lib_DebugLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //1
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //4
};
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_lib_LibFunction[] = {
    func_org_luaj_vm2_lib_LibFunction_tojstring___Ljava_lang_String_2,  //0
    func_org_luaj_vm2_lib_LibFunction_bind__Lorg_luaj_vm2_LuaValue_2Ljava_lang_Class_2_3Ljava_lang_String_2_V,  //1
    func_org_luaj_vm2_lib_LibFunction_bind__Lorg_luaj_vm2_LuaValue_2Ljava_lang_Class_2_3Ljava_lang_String_2I_V,  //2
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_lib_DebugLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //6
    func_org_luaj_vm2_lib_LibFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //7
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //8
};
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_LuaFunction[] = {
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
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_LuaValue[] = {
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
    func_org_luaj_vm2_lib_DebugLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //104
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
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_Varargs[] = {
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
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_DebugLib[] = {
    {104, 10, arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_lib_DebugLib}, //0
    {73, 5, arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_lib_TwoArgFunction}, //1
    {18, 9, arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_lib_LibFunction}, //2
    {19, 10, arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_LuaFunction}, //3
    {1, 210, arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_LuaValue}, //4
    {2, 63, arr_vmtable_org_luaj_vm2_lib_DebugLib_from_org_luaj_vm2_Varargs}, //5
    {5, 10, arr_vmtable_org_luaj_vm2_lib_DebugLib_from_java_lang_Object}, //6
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_lib_DebugLib__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2577, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 79 , L825605925 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 79;
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

void bridge_org_luaj_vm2_lib_DebugLib__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib__init____V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_DebugLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2578, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 118 , L1092023914 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 118;
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
    // putfield org/luaj/vm2/lib/DebugLib globals Lorg/luaj/vm2/Globals;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib*)rstack[sp + 0].obj)->globals_69 = rstack[sp + 1].obj;
    ; 
    //  line no 119 , L1505774574 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib*)rstack[sp - 1].obj)->globals_69;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield org/luaj/vm2/Globals debuglib Lorg/luaj/vm2/lib/DebugLib;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->debuglib_58 = rstack[sp + 1].obj;
    ; 
    //  line no 120 , L1167068004 , bytecode index = 
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
    //  line no 121 , L254416915 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4372);
    // new org/luaj/vm2/lib/DebugLib$debug
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 355);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$debug.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024debug__init____V(runtime);
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
    //  line no 122 , L2046364218 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4373);
    // new org/luaj/vm2/lib/DebugLib$gethook
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 356);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$gethook.<init>(Lorg/luaj/vm2/lib/DebugLib;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024gethook__init___Lorg_luaj_vm2_lib_DebugLib_2_V(runtime, rstack[sp + 0].obj);
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
    //  line no 123 , L582857168 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4374);
    // new org/luaj/vm2/lib/DebugLib$getinfo
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 111);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$getinfo.<init>(Lorg/luaj/vm2/lib/DebugLib;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024getinfo__init___Lorg_luaj_vm2_lib_DebugLib_2_V(runtime, rstack[sp + 0].obj);
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
    //  line no 124 , L1739806152 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4375);
    // new org/luaj/vm2/lib/DebugLib$getlocal
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 187);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$getlocal.<init>(Lorg/luaj/vm2/lib/DebugLib;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024getlocal__init___Lorg_luaj_vm2_lib_DebugLib_2_V(runtime, rstack[sp + 0].obj);
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
    //  line no 125 , L948315053 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 462);
    // new org/luaj/vm2/lib/DebugLib$getmetatable
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 327);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$getmetatable.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024getmetatable__init____V(runtime);
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
    //  line no 126 , L153048669 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4376);
    // new org/luaj/vm2/lib/DebugLib$getregistry
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 287);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$getregistry.<init>(Lorg/luaj/vm2/lib/DebugLib;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024getregistry__init___Lorg_luaj_vm2_lib_DebugLib_2_V(runtime, rstack[sp + 0].obj);
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
    //  line no 127 , L1189303711 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4377);
    // new org/luaj/vm2/lib/DebugLib$getupvalue
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 202);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$getupvalue.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024getupvalue__init____V(runtime);
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
    //  line no 128 , L998458782 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4378);
    // new org/luaj/vm2/lib/DebugLib$getuservalue
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 297);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$getuservalue.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024getuservalue__init____V(runtime);
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
    //  line no 129 , L840008200 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4379);
    // new org/luaj/vm2/lib/DebugLib$sethook
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 357);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$sethook.<init>(Lorg/luaj/vm2/lib/DebugLib;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024sethook__init___Lorg_luaj_vm2_lib_DebugLib_2_V(runtime, rstack[sp + 0].obj);
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
    //  line no 130 , L1095731113 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4380);
    // new org/luaj/vm2/lib/DebugLib$setlocal
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 154);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$setlocal.<init>(Lorg/luaj/vm2/lib/DebugLib;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024setlocal__init___Lorg_luaj_vm2_lib_DebugLib_2_V(runtime, rstack[sp + 0].obj);
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
    //  line no 131 , L500985266 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 463);
    // new org/luaj/vm2/lib/DebugLib$setmetatable
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 166);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$setmetatable.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024setmetatable__init____V(runtime);
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
    //  line no 132 , L1020421154 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4381);
    // new org/luaj/vm2/lib/DebugLib$setupvalue
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 238);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$setupvalue.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024setupvalue__init____V(runtime);
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
    //  line no 133 , L49127538 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4382);
    // new org/luaj/vm2/lib/DebugLib$setuservalue
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 358);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$setuservalue.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024setuservalue__init____V(runtime);
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
    //  line no 134 , L1067588937 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2494);
    // new org/luaj/vm2/lib/DebugLib$traceback
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 106);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$traceback.<init>(Lorg/luaj/vm2/lib/DebugLib;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024traceback__init___Lorg_luaj_vm2_lib_DebugLib_2_V(runtime, rstack[sp + 0].obj);
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
    //  line no 135 , L1097684722 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4383);
    // new org/luaj/vm2/lib/DebugLib$upvalueid
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 201);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$upvalueid.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024upvalueid__init____V(runtime);
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
    //  line no 136 , L1848760713 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4384);
    // new org/luaj/vm2/lib/DebugLib$upvaluejoin
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 359);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$upvaluejoin.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024upvaluejoin__init____V(runtime);
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
    //  line no 137 , L28318221 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4372);
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
    //  line no 138 , L785848103 , bytecode index = 
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
    if(stack[--sp].i  != 0) goto L86384329;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4372);
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
    L86384329:
    //  line no 139 , L86384329 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 4
// args: 1
void func_org_luaj_vm2_lib_DebugLib_onCall__Lorg_luaj_vm2_LuaFunction_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaFunction* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2579, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 404 , L1692036285 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 404;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib*)rstack[sp - 1].obj)->globals_69;
    sp += 0;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // getfield org/luaj/vm2/LuaThread state Lorg/luaj/vm2/LuaThread$State;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->state_53;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 405 , L1923232046 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/LuaThread$State inhook Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->inhook_11;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1204267493;
    method_exit(runtime);
    return;
    L1204267493:
    //  line no 406 , L1204267493 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callstack()Lorg/luaj/vm2/lib/DebugLib$CallStack;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallStack* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 104, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.onCall(Lorg/luaj/vm2/LuaFunction;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaFunction*) = find_method(__ins->vm_table, 105, 1);
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
    //  line no 407 , L2035401634 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/LuaThread$State hookcall Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookcall_8;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1322907569;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getstatic org/luaj/vm2/lib/DebugLib CALL Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_DebugLib.CALL_51;
    sp += 1;
    // getstatic org/luaj/vm2/lib/DebugLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callHook(Lorg/luaj/vm2/LuaThread$State;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaThread_00024State*,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 104, 7);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1322907569:
    //  line no 408 , L1322907569 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_onCall__Lorg_luaj_vm2_LuaFunction_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_onCall__Lorg_luaj_vm2_LuaFunction_2_V(runtime, ins);
}


// locals: 5
// stack: 4
// args: 3
void func_org_luaj_vm2_lib_DebugLib_onCall__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaClosure* p0, struct org_luaj_vm2_Varargs* p1, JArray * p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2580, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 411 , L1474529475 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 411;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib*)rstack[sp - 1].obj)->globals_69;
    sp += 0;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // getfield org/luaj/vm2/LuaThread state Lorg/luaj/vm2/LuaThread$State;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->state_53;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 412 , L542641486 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LuaThread$State inhook Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->inhook_11;
    sp += 0;
    if(stack[--sp].i  == 0) goto L566039179;
    method_exit(runtime);
    return;
    L566039179:
    //  line no 413 , L566039179 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callstack()Lorg/luaj/vm2/lib/DebugLib$CallStack;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallStack* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 104, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.onCall(Lorg/luaj/vm2/LuaClosure;Lorg/luaj/vm2/Varargs;[Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaClosure*,struct org_luaj_vm2_Varargs*,JArray *) = find_method(__ins->vm_table, 105, 2);
        jthread_lock(runtime, __ins);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 414 , L2951941 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LuaThread$State hookcall Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookcall_8;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1262693971;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getstatic org/luaj/vm2/lib/DebugLib CALL Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_DebugLib.CALL_51;
    sp += 1;
    // getstatic org/luaj/vm2/lib/DebugLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callHook(Lorg/luaj/vm2/LuaThread$State;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaThread_00024State*,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 104, 7);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1262693971:
    //  line no 415 , L1262693971 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_onCall__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_onCall__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 6
// stack: 4
// args: 3
void func_org_luaj_vm2_lib_DebugLib_onInstruction__ILorg_luaj_vm2_Varargs_2I_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_Varargs* p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2581, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 418 , L1659969211 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 418;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib*)rstack[sp - 1].obj)->globals_69;
    sp += 0;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // getfield org/luaj/vm2/LuaThread state Lorg/luaj/vm2/LuaThread$State;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->state_53;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 419 , L174871747 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LuaThread$State inhook Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->inhook_11;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1477431915;
    method_exit(runtime);
    return;
    L1477431915:
    //  line no 420 , L1477431915 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callstack()Lorg/luaj/vm2/lib/DebugLib$CallStack;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallStack* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 104, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.onInstruction(ILorg/luaj/vm2/Varargs;I)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_Varargs*,s32) = find_method(__ins->vm_table, 105, 4);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 421 , L2029920330 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LuaThread$State hookfunc Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookfunc_6;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L311487784;
    method_exit(runtime);
    return;
    L311487784:
    //  line no 422 , L311487784 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LuaThread$State hookcount I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookcount_10;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L2050124277;
    ; 
    //  line no 423 , L1552445522 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/LuaThread$State bytecodes I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->bytecodes_13;
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
    // putfield org/luaj/vm2/LuaThread$State bytecodes I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->bytecodes_13 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LuaThread$State hookcount I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookcount_10;
    sp += 0;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L2050124277;
    ; 
    //  line no 424 , L1442707449 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getstatic org/luaj/vm2/lib/DebugLib COUNT Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_DebugLib.COUNT_53;
    sp += 1;
    // getstatic org/luaj/vm2/lib/DebugLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callHook(Lorg/luaj/vm2/LuaThread$State;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaThread_00024State*,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 104, 7);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2050124277:
    //  line no 425 , L2050124277 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LuaThread$State hookline Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookline_7;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1083292099;
    ; 
    //  line no 426 , L688197093 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callstack()Lorg/luaj/vm2/lib/DebugLib$CallStack;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallStack* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 104, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.currentline()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 105, 0);
        jthread_lock(runtime, __ins);
        stack[sp].i = __func_p(runtime);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 427 , L907080311 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LuaThread$State lastline I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->lastline_12;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1083292099;
    ; 
    //  line no 428 , L208181619 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // putfield org/luaj/vm2/LuaThread$State lastline I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->lastline_12 = stack[sp + 1].i;
    ; 
    //  line no 429 , L1106933404 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getstatic org/luaj/vm2/lib/DebugLib LINE Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_DebugLib.LINE_52;
    sp += 1;
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/LuaValue.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/lib/DebugLib.callHook(Lorg/luaj/vm2/LuaThread$State;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaThread_00024State*,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 104, 7);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1083292099:
    //  line no 432 , L1083292099 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_onInstruction__ILorg_luaj_vm2_Varargs_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_onInstruction__ILorg_luaj_vm2_Varargs_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 2
// stack: 4
// args: 0
void func_org_luaj_vm2_lib_DebugLib_onReturn___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2582, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 435 , L1906565212 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 435;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib*)rstack[sp - 1].obj)->globals_69;
    sp += 0;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // getfield org/luaj/vm2/LuaThread state Lorg/luaj/vm2/LuaThread$State;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->state_53;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 436 , L969432090 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaThread$State inhook Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->inhook_11;
    sp += 0;
    if(stack[--sp].i  == 0) goto L722764585;
    method_exit(runtime);
    return;
    L722764585:
    //  line no 437 , L722764585 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callstack()Lorg/luaj/vm2/lib/DebugLib$CallStack;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallStack* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 104, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.onReturn()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 105, 3);
        jthread_lock(runtime, __ins);
        __func_p(runtime);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 438 , L1657218305 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaThread$State hookrtrn Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookrtrn_9;
    sp += 0;
    if(stack[--sp].i  == 0) goto L210278405;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getstatic org/luaj/vm2/lib/DebugLib RETURN Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_DebugLib.RETURN_54;
    sp += 1;
    // getstatic org/luaj/vm2/lib/DebugLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callHook(Lorg/luaj/vm2/LuaThread$State;Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaThread_00024State*,struct org_luaj_vm2_LuaValue*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 104, 7);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L210278405:
    //  line no 439 , L210278405 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_onReturn___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_onReturn___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_String* func_org_luaj_vm2_lib_DebugLib_traceback__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2583, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 442 , L2027549979 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 442;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callstack()Lorg/luaj/vm2/lib/DebugLib$CallStack;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallStack* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 104, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.traceback(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 105, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
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

void bridge_org_luaj_vm2_lib_DebugLib_traceback__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_traceback__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_lib_DebugLib_00024CallFrame* func_org_luaj_vm2_lib_DebugLib_getCallFrame__I_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2584, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 446 , L1810748644 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 446;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callstack()Lorg/luaj/vm2/lib/DebugLib$CallStack;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallStack* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 104, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.getCallFrame(I)Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallFrame* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 105, 6);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
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

void bridge_org_luaj_vm2_lib_DebugLib_getCallFrame__I_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_getCallFrame__I_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(runtime, ins);
}

ExceptionItem arr_extable_func_org_luaj_vm2_lib_DebugLib_callHook__Lorg_luaj_vm2_LuaThread_00024State_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V[] = {
    { , , 408}, 
    { , , 915}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_org_luaj_vm2_lib_DebugLib_callHook__Lorg_luaj_vm2_LuaThread_00024State_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V = {4, arr_extable_func_org_luaj_vm2_lib_DebugLib_callHook__Lorg_luaj_vm2_LuaThread_00024State_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V};

// locals: 6
// stack: 3
// args: 3
void func_org_luaj_vm2_lib_DebugLib_callHook__Lorg_luaj_vm2_LuaThread_00024State_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaThread_00024State* p0, struct org_luaj_vm2_LuaValue* p1, struct org_luaj_vm2_LuaValue* p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2585, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    // try catch :L1924563758 L944826636 L1033850902 (
    // try catch :L1924563758 L944826636 L2123492724 (
    // try catch :L1924563758 L944826636 L947437179 (
    // try catch :L1033850902 L132065521 L947437179 (
    ; 
    //  line no 450 , L1082640380 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 450;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaThread$State inhook Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->inhook_11;
    sp += 0;
    if(stack[--sp].i  != 0) goto L831285461;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaThread$State hookfunc Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookfunc_6;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1291486201;
    L831285461:
    method_exit(runtime);
    return;
    L1291486201:
    //  line no 451 , L1291486201 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/LuaThread$State inhook Z
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->inhook_11 = stack[sp + 1].i;
    L1924563758:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 453 , L1924563758 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaThread$State hookfunc Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->hookfunc_6;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
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
    --sp; //pop
    L944826636:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 459 , L944826636 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/LuaThread$State inhook Z
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->inhook_11 = stack[sp + 1].i;
    ; 
    //  line no 460 , L840737335 , bytecode index = 
    goto L1280977839;
    L1033850902:
    __frame->bytecodeIndex = 
    //  line no 454 , L1033850902 , bytecode index = 
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 455 , L516040753 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L516040753 in labeltable is :L516040753
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 455;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2123492724:
    //  line no 456 , L2123492724 , bytecode index = 
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 457 , L104826203 , bytecode index = 
    // new org/luaj/vm2/LuaError
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[4].obj;
    // invokespecial org/luaj/vm2/LuaError.<init>(Ljava/lang/Throwable;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaError__init___Ljava_lang_Throwable_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L104826203 in labeltable is :L104826203
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 457;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L947437179:
    //  line no 459 , L947437179 , bytecode index = 
    rlocal[5].obj = rstack[--sp].obj;
    L132065521:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/LuaThread$State inhook Z
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->inhook_11 = stack[sp + 1].i;
    ; 
    //  line no 460 , L1365611185 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // athrow
    //     L1365611185 in labeltable is :L1365611185
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 460;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1280977839:
    //  line no 461 , L1280977839 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1033850902;
        case 1 : goto L2123492724;
        case 2 : goto L947437179;
        case 3 : goto L947437179;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_lib_DebugLib_callHook__Lorg_luaj_vm2_LuaThread_00024State_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_callHook__Lorg_luaj_vm2_LuaThread_00024State_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 0
struct org_luaj_vm2_lib_DebugLib_00024CallStack* func_org_luaj_vm2_lib_DebugLib_callstack___Lorg_luaj_vm2_lib_DebugLib_00024CallStack_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2586, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 464 , L1131673199 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 464;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib*)rstack[sp - 1].obj)->globals_69;
    sp += 0;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // invokevirtual org/luaj/vm2/lib/DebugLib.callstack(Lorg/luaj/vm2/LuaThread;)Lorg/luaj/vm2/lib/DebugLib$CallStack;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallStack* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaThread*) = find_method(__ins->vm_table, 104, 9);
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

void bridge_org_luaj_vm2_lib_DebugLib_callstack___Lorg_luaj_vm2_lib_DebugLib_00024CallStack_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_callstack___Lorg_luaj_vm2_lib_DebugLib_00024CallStack_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_lib_DebugLib_00024CallStack* func_org_luaj_vm2_lib_DebugLib_callstack__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_lib_DebugLib_00024CallStack_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaThread* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2587, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 468 , L1141984159 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 468;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaThread callstack Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->callstack_55;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1992235960;
    ; 
    //  line no 469 , L706960270 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // new org/luaj/vm2/lib/DebugLib$CallStack
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 105);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$CallStack.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024CallStack__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LuaThread callstack Ljava/lang/Object;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread*)rstack[sp + 0].obj)->callstack_55 = rstack[sp + 1].obj;
    L1992235960:
    //  line no 470 , L1992235960 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaThread callstack Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->callstack_55;
    sp += 0;
    // checkcast org/luaj/vm2/lib/DebugLib$CallStack
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 890);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
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

void bridge_org_luaj_vm2_lib_DebugLib_callstack__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_lib_DebugLib_00024CallStack_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_callstack__Lorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_lib_DebugLib_00024CallStack_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 3
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_lib_DebugLib_findupvalue__Lorg_luaj_vm2_LuaClosure_2I_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_DebugLib* p0, struct org_luaj_vm2_LuaClosure* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2588, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 717 , L953191605 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 717;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaClosure upValues [Lorg/luaj/vm2/UpValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->upValues_47;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L909914828;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  <= 0) goto L909914828;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaClosure upValues [Lorg/luaj/vm2/UpValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->upValues_47;
    sp += 0;
    // arraylength  label  L953191605
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L909914828;
    ; 
    //  line no 718 , L116650158 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1806640599;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    // arraylength  label  L116650158
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1806640599;
    ; 
    //  line no 719 , L1470540083 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1470540083 bc index = 
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
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1806640599:
    //  line no 721 , L1806640599 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2278);
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
    L909914828:
    //  line no 723 , L909914828 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_org_luaj_vm2_lib_DebugLib_findupvalue__Lorg_luaj_vm2_LuaClosure_2I_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_findupvalue__Lorg_luaj_vm2_LuaClosure_2I_Lorg_luaj_vm2_LuaString_2(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 1
// stack: 3
// args: 2
void func_org_luaj_vm2_lib_DebugLib_lua_1assert__Z_V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_DebugLib* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2589, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 727 , L422882684 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 727;
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  != 0) goto L187150864;
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4393);
    // invokespecial java/lang/RuntimeException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_RuntimeException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L422882684 in labeltable is :L422882684
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 727;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L187150864:
    //  line no 728 , L187150864 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_lua_1assert__Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_lua_1assert__Z_V(runtime, para[0].obj, para[1].i);
}


// locals: 5
// stack: 4
// args: 2
struct org_luaj_vm2_lib_DebugLib_00024NameWhat* func_org_luaj_vm2_lib_DebugLib_getfuncname__Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_DebugLib* p0, struct org_luaj_vm2_lib_DebugLib_00024CallFrame* p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2590, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 741 , L871461513 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 741;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.isclosure()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L252864198;
    ; 
    //  line no 742 , L957608454 , bytecode index = 
    // new org/luaj/vm2/lib/DebugLib$NameWhat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 360);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.classnamestub()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 19, 8);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3892);
    // invokespecial org/luaj/vm2/lib/DebugLib$NameWhat.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L252864198:
    //  line no 743 , L252864198 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.checkclosure()Lorg/luaj/vm2/LuaClosure;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaClosure* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 45);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 744 , L65567135 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 745 , L993343057 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L993343057 bc index = 
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
    local[3].i = stack[--sp].i;
    ; 
    //  line no 747 , L655180711 , bytecode index = 
    stack[sp++].i = local[3].i;
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
    switch(stack[--sp].i){
        case 6:
            goto L1103934393;
        case 7:
            goto L1103934393;
        case 8:
            goto L1406763631;
        case 9:
            goto L19400322;
        case 10:
            goto L1406763631;
        case 11:
            goto L19400322;
        case 12:
            goto L1103934393;
        case 13:
            goto L512029640;
        case 14:
            goto L1599728268;
        case 15:
            goto L2066533285;
        case 16:
            goto L1694102613;
        case 17:
            goto L1566200241;
        case 18:
            goto L1304939804;
        case 19:
            goto L1353406178;
        case 20:
            goto L19400322;
        case 21:
            goto L2069584894;
        case 22:
            goto L1954761469;
        case 23:
            goto L19400322;
        case 24:
            goto L123721308;
        case 25:
            goto L222927891;
        case 26:
            goto L753705711;
        case 27:
            goto L19400322;
        case 28:
            goto L19400322;
        case 29:
            goto L1121370413;
        case 30:
            goto L1121370413;
        case 31:
            goto L19400322;
        case 32:
            goto L19400322;
        case 33:
            goto L19400322;
        case 34:
            goto L994185757;
        default:
            goto L19400322;
    }
    L1121370413:
    //  line no 750 , L1121370413 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
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
    // invokestatic org/luaj/vm2/lib/DebugLib.getobjname(Lorg/luaj/vm2/Prototype;II)Lorg/luaj/vm2/lib/DebugLib$NameWhat;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_lib_DebugLib_getobjname__Lorg_luaj_vm2_Prototype_2II_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L994185757:
    //  line no 752 , L994185757 , bytecode index = 
    // new org/luaj/vm2/lib/DebugLib$NameWhat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 360);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4396);
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4397);
    // invokespecial org/luaj/vm2/lib/DebugLib$NameWhat.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1103934393:
    //  line no 756 , L1103934393 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue INDEX Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.INDEX_22;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L1406763631:
    //  line no 758 , L1406763631 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue NEWINDEX Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NEWINDEX_23;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L123721308:
    //  line no 759 , L123721308 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue EQ Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.EQ_35;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L512029640:
    //  line no 760 , L512029640 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue ADD Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ADD_27;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L1599728268:
    //  line no 761 , L1599728268 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue SUB Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.SUB_28;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L2066533285:
    //  line no 762 , L2066533285 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue MUL Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.MUL_30;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L1694102613:
    //  line no 763 , L1694102613 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue DIV Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.DIV_29;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L1566200241:
    //  line no 764 , L1566200241 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue MOD Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.MOD_32;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L1304939804:
    //  line no 765 , L1304939804 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue POW Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.POW_31;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L1353406178:
    //  line no 766 , L1353406178 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue UNM Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.UNM_33;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L2069584894:
    //  line no 767 , L2069584894 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue LEN Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.LEN_34;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L222927891:
    //  line no 768 , L222927891 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue LT Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.LT_36;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L753705711:
    //  line no 769 , L753705711 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue LE Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.LE_37;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L1954761469:
    //  line no 770 , L1954761469 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue CONCAT Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.CONCAT_39;
    sp += 1;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L857245202;
    L19400322:
    //  line no 772 , L19400322 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L857245202:
    //  line no 774 , L857245202 , bytecode index = 
    // new org/luaj/vm2/lib/DebugLib$NameWhat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 360);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[4].obj;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4398);
    // invokespecial org/luaj/vm2/lib/DebugLib$NameWhat.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_lib_DebugLib_getfuncname__Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_getfuncname__Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(runtime, para[0].obj, para[1].obj);
}


// locals: 10
// stack: 5
// args: 4
struct org_luaj_vm2_lib_DebugLib_00024NameWhat* func_org_luaj_vm2_lib_DebugLib_getobjname__Lorg_luaj_vm2_Prototype_2II_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_DebugLib* p0, struct org_luaj_vm2_Prototype* p1, s32 p2, s32 p3){
    
    StackItem local[10] = {0};
    RStackItem rlocal[10] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2591, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 779 , L1096742104 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 779;
    stack[sp++].i = local[1].i;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 780 , L1456250665 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/Prototype.getlocalname(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 128, 1);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 781 , L1398479590 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L1651251663;
    ; 
    //  line no 782 , L1419958638 , bytecode index = 
    // new org/luaj/vm2/lib/DebugLib$NameWhat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 360);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[4].obj;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3640);
    // invokespecial org/luaj/vm2/lib/DebugLib$NameWhat.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1651251663:
    //  line no 785 , L1651251663 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/lib/DebugLib.findsetreg(Lorg/luaj/vm2/Prototype;II)I
    {
        sp -= 4;
        stack[sp].i = func_org_luaj_vm2_lib_DebugLib_findsetreg__Lorg_luaj_vm2_Prototype_2II_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 786 , L1722102020 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1830984476;
    ; 
    //  line no 787 , L1870812438 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload s32  ,  L1870812438 bc index = 
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 788 , L766089249 , bytecode index = 
    stack[sp++].i = local[5].i;
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
    switch(stack[--sp].i){
        case 0:
            goto L1657512321;
        case 1:
            goto L457714879;
        case 2:
            goto L457714879;
        case 3:
            goto L1830984476;
        case 4:
            goto L1830984476;
        case 5:
            goto L1713365029;
        case 6:
            goto L118887511;
        case 7:
            goto L118887511;
        case 8:
            goto L1830984476;
        case 9:
            goto L1830984476;
        case 10:
            goto L1830984476;
        case 11:
            goto L1830984476;
        case 12:
            goto L955153053;
        default:
            goto L1830984476;
    }
    L1657512321:
    //  line no 790 , L1657512321 , bytecode index = 
    stack[sp++].i = local[5].i;
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
    local[6].i = stack[--sp].i;
    ; 
    //  line no 791 , L1654228203 , bytecode index = 
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/Lua.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 792 , L2065587797 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1830984476;
    ; 
    //  line no 793 , L1276991949 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[7].i;
    // invokestatic org/luaj/vm2/lib/DebugLib.getobjname(Lorg/luaj/vm2/Prototype;II)Lorg/luaj/vm2/lib/DebugLib$NameWhat;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_lib_DebugLib_getobjname__Lorg_luaj_vm2_Prototype_2II_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L118887511:
    //  line no 798 , L118887511 , bytecode index = 
    stack[sp++].i = local[5].i;
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
    local[6].i = stack[--sp].i;
    ; 
    //  line no 799 , L124581953 , bytecode index = 
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/Lua.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 800 , L696031899 , bytecode index = 
    stack[sp++].i = local[5].i;
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
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L546936087;
    ; 
    //  line no 801 , L116155384 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/Prototype.getlocalname(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 128, 1);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1713520020;
    L546936087:
    //  line no 802 , L546936087 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    // arraylength  label  L546936087
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L734518153;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    stack[sp++].i = local[7].i;
    // arrload __refer  ,  L546936087 bc index = 
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
    goto L1713520020;
    L734518153:
    // getstatic org/luaj/vm2/lib/DebugLib QMARK Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_DebugLib.QMARK_50;
    sp += 1;
    L1713520020:
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 803 , L1201324747 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    // invokestatic org/luaj/vm2/lib/DebugLib.kname(Lorg/luaj/vm2/Prototype;II)Ljava/lang/String;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_lib_DebugLib_kname__Lorg_luaj_vm2_Prototype_2II_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 804 , L571251299 , bytecode index = 
    // new org/luaj/vm2/lib/DebugLib$NameWhat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 360);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[9].obj;
    rstack[sp++].obj = rlocal[8].obj;
    if(rstack[--sp].obj  == NULL) goto L1437977899;
    rstack[sp++].obj = rlocal[8].obj;
    // getstatic org/luaj/vm2/lib/DebugLib ENV Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ENV_21;
    sp += 1;
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
    if(stack[--sp].i  == 0) goto L1437977899;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4401);
    goto L1086017415;
    L1437977899:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4402);
    L1086017415:
    // invokespecial org/luaj/vm2/lib/DebugLib$NameWhat.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1713365029:
    //  line no 807 , L1713365029 , bytecode index = 
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/Lua.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 808 , L1369854401 , bytecode index = 
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    // arraylength  label  L1369854401
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L390010388;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L1369854401 bc index = 
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
    goto L1813531981;
    L390010388:
    // getstatic org/luaj/vm2/lib/DebugLib QMARK Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_DebugLib.QMARK_50;
    sp += 1;
    L1813531981:
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 809 , L1984294974 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  != NULL) goto L361668462;
    // aconst null
    rstack[sp++].obj = NULL;
    goto L2054071421;
    L361668462:
    // new org/luaj/vm2/lib/DebugLib$NameWhat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 360);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[4].obj;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4403);
    // invokespecial org/luaj/vm2/lib/DebugLib$NameWhat.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2054071421:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L457714879:
    //  line no 813 , L457714879 , bytecode index = 
    stack[sp++].i = local[5].i;
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
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1421016152;
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/Lua.GETARG_Bx(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1Bx__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L229581552;
    L1421016152:
    //  line no 814 , L1421016152 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s32  ,  L1421016152 bc index = 
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
    // invokestatic org/luaj/vm2/Lua.GETARG_Ax(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1Ax__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L229581552:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 815 , L1824242116 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L1824242116 bc index = 
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
    if(stack[--sp].i  == 0) goto L1830984476;
    ; 
    //  line no 816 , L1677309282 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    stack[sp++].i = local[6].i;
    // arrload __refer  ,  L1677309282 bc index = 
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
    // invokevirtual org/luaj/vm2/LuaValue.strvalue()Lorg/luaj/vm2/LuaString;
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
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 817 , L552260985 , bytecode index = 
    // new org/luaj/vm2/lib/DebugLib$NameWhat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 360);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[4].obj;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4404);
    // invokespecial org/luaj/vm2/lib/DebugLib$NameWhat.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L955153053:
    //  line no 822 , L955153053 , bytecode index = 
    stack[sp++].i = local[5].i;
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
    local[6].i = stack[--sp].i;
    ; 
    //  line no 823 , L1411828534 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[6].i;
    // invokestatic org/luaj/vm2/lib/DebugLib.kname(Lorg/luaj/vm2/Prototype;II)Ljava/lang/String;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_lib_DebugLib_kname__Lorg_luaj_vm2_Prototype_2II_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 824 , L1709321711 , bytecode index = 
    // new org/luaj/vm2/lib/DebugLib$NameWhat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 360);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[7].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 466);
    // invokespecial org/luaj/vm2/lib/DebugLib$NameWhat.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024NameWhat__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1830984476:
    //  line no 830 , L1830984476 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_org_luaj_vm2_lib_DebugLib_getobjname__Lorg_luaj_vm2_Prototype_2II_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_getobjname__Lorg_luaj_vm2_Prototype_2II_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 4
// stack: 3
// args: 4
struct java_lang_String* func_org_luaj_vm2_lib_DebugLib_kname__Lorg_luaj_vm2_Prototype_2II_Ljava_lang_String_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_DebugLib* p0, struct org_luaj_vm2_Prototype* p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2592, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 834 , L1026134931 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 834;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/Lua.ISK(I)Z
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_ISK__I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1597280379;
    ; 
    //  line no 835 , L726483751 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/Lua.INDEXK(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_INDEXK__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrload __refer  ,  L726483751 bc index = 
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
    //  line no 836 , L383392444 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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
    if(stack[--sp].i  == 0) goto L1730062079;
    ; 
    //  line no 837 , L475157807 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/LuaValue.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 23);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1730062079:
    //  line no 839 , L1730062079 , bytecode index = 
    goto L1573349881;
    L1597280379:
    //  line no 840 , L1597280379 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokestatic org/luaj/vm2/lib/DebugLib.getobjname(Lorg/luaj/vm2/Prototype;II)Lorg/luaj/vm2/lib/DebugLib$NameWhat;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_lib_DebugLib_getobjname__Lorg_luaj_vm2_Prototype_2II_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 841 , L453940999 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1573349881;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4404);
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/lib/DebugLib$NameWhat namewhat Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024NameWhat*)rstack[sp - 1].obj)->namewhat_1;
    sp += 0;
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 50, 10);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1573349881;
    ; 
    //  line no 842 , L162919367 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/lib/DebugLib$NameWhat name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024NameWhat*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1573349881:
    //  line no 846 , L1573349881 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 973);
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

void bridge_org_luaj_vm2_lib_DebugLib_kname__Lorg_luaj_vm2_Prototype_2II_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_kname__Lorg_luaj_vm2_Prototype_2II_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 10
// stack: 3
// args: 4
s32 func_org_luaj_vm2_lib_DebugLib_findsetreg__Lorg_luaj_vm2_Prototype_2II_I(JThreadRuntime *runtime, struct org_luaj_vm2_lib_DebugLib* p0, struct org_luaj_vm2_Prototype* p1, s32 p2, s32 p3){
    
    StackItem local[10] = {0};
    RStackItem rlocal[10] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2593, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 854 , L1638796611 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 854;
    // iconst_-1
    stack[sp++].i = -1;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 855 , L251074782 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L679143692:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L773535564;
    ; 
    //  line no 856 , L1070523353 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload s32  ,  L1070523353 bc index = 
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 857 , L164183318 , bytecode index = 
    stack[sp++].i = local[5].i;
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
    local[6].i = stack[--sp].i;
    ; 
    //  line no 858 , L1980008362 , bytecode index = 
    stack[sp++].i = local[5].i;
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
    local[7].i = stack[--sp].i;
    ; 
    //  line no 859 , L22179697 , bytecode index = 
    stack[sp++].i = local[6].i;
    switch(stack[--sp].i){
        case 4:
            goto L162214155;
        case 23:
            goto L1530977859;
        case 27:
            goto L1241189309;
        case 29:
            goto L1418310135;
        case 30:
            goto L1418310135;
        case 34:
            goto L83554564;
        case 36:
            goto L1502971166;
        default:
            goto L1238013097;
    }
    L162214155:
    //  line no 861 , L162214155 , bytecode index = 
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/Lua.GETARG_B(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1B__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[8].i = stack[--sp].i;
    ; 
    //  line no 862 , L1218632562 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1371397528;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1371397528;
    ; 
    //  line no 863 , L35419258 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    goto L1371397528;
    L83554564:
    //  line no 867 , L83554564 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1371397528;
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    goto L1371397528;
    L1418310135:
    //  line no 872 , L1418310135 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1371397528;
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    goto L1371397528;
    L1530977859:
    //  line no 876 , L1530977859 , bytecode index = 
    stack[sp++].i = local[5].i;
    // invokestatic org/luaj/vm2/Lua.GETARG_sBx(I)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_GETARG_1sBx__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[8].i = stack[--sp].i;
    ; 
    //  line no 877 , L2010426450 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[9].i = stack[--sp].i;
    ; 
    //  line no 879 , L703824017 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[9].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1371397528;
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1371397528;
    ; 
    //  line no 880 , L371054890 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    goto L1371397528;
    L1241189309:
    //  line no 884 , L1241189309 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1371397528;
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    goto L1371397528;
    L1502971166:
    //  line no 888 , L1502971166 , bytecode index = 
    stack[sp++].i = local[5].i;
    //  bipush 14
    stack[sp++].i = 14;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  sipush 511
    stack[sp++].i = 511;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L1371397528;
    // iinc slot 3 value 1
    local[3].i += 1;
    goto L1371397528;
    L1238013097:
    //  line no 892 , L1238013097 , bytecode index = 
    stack[sp++].i = local[6].i;
    // invokestatic org/luaj/vm2/Lua.testAMode(I)Z
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_Lua_testAMode__I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1371397528;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1371397528;
    ; 
    //  line no 893 , L2009317431 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[4].i = stack[--sp].i;
    L1371397528:
    //  line no 855 , L1371397528 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L679143692;
    L773535564:
    //  line no 897 , L773535564 , bytecode index = 
    stack[sp++].i = local[4].i;
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

void bridge_org_luaj_vm2_lib_DebugLib_findsetreg__Lorg_luaj_vm2_Prototype_2II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_DebugLib_findsetreg__Lorg_luaj_vm2_Prototype_2II_I(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}

ExceptionItem arr_extable_func_org_luaj_vm2_lib_DebugLib__clinit____V[] = {
    { , , 141}, 
    { , , 141}
};
ExceptionTable extable_func_org_luaj_vm2_lib_DebugLib__clinit____V = {2, arr_extable_func_org_luaj_vm2_lib_DebugLib__clinit____V};

// locals: 1
// stack: 2
// args: 1
void func_org_luaj_vm2_lib_DebugLib__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_DebugLib* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2594, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L283492252 L1758060579 L23218037 (
    // try catch :L511646132 L593185976 L70543368 (
    L283492252:
    __frame->bytecodeIndex = 
    //  line no 83 , L283492252 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 83;
    // aconst null
    rstack[sp++].obj = NULL;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4409);
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
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L402578964;
    // iconst_1
    stack[sp++].i = 1;
    goto L1898629094;
    L402578964:
    // iconst_0
    stack[sp++].i = 0;
    L1898629094:
    // putstatic org/luaj/vm2/lib/DebugLib CALLS Z
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.CALLS_47 = stack[sp].i;
    L1758060579:
    __frame->bytecodeIndex = 
    goto L511646132;
    L23218037:
    rlocal[0].obj = rstack[--sp].obj;
    L511646132:
    __frame->bytecodeIndex = 
    //  line no 84 , L511646132 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4410);
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
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L141388791;
    // iconst_1
    stack[sp++].i = 1;
    goto L800990938;
    L141388791:
    // iconst_0
    stack[sp++].i = 0;
    L800990938:
    // putstatic org/luaj/vm2/lib/DebugLib TRACE Z
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.TRACE_48 = stack[sp].i;
    L593185976:
    __frame->bytecodeIndex = 
    goto L1322341191;
    L70543368:
    rlocal[0].obj = rstack[--sp].obj;
    L1322341191:
    //  line no 87 , L1322341191 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3890);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib LUA Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.LUA_49 = rstack[sp].obj;
    ; 
    //  line no 88 , L1768142988 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 973);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib QMARK Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.QMARK_50 = rstack[sp].obj;
    ; 
    //  line no 89 , L179455108 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 192);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib CALL Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.CALL_51 = rstack[sp].obj;
    ; 
    //  line no 90 , L1424243710 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2603);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib LINE Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.LINE_52 = rstack[sp].obj;
    ; 
    //  line no 91 , L275448142 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 690);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib COUNT Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.COUNT_53 = rstack[sp].obj;
    ; 
    //  line no 92 , L1681423383 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3642);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib RETURN Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.RETURN_54 = rstack[sp].obj;
    ; 
    //  line no 94 , L2083951216 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 19);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib FUNC Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.FUNC_55 = rstack[sp].obj;
    ; 
    //  line no 95 , L167275971 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3897);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib ISTAILCALL Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.ISTAILCALL_56 = rstack[sp].obj;
    ; 
    //  line no 96 , L1104243907 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3896);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib ISVARARG Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.ISVARARG_57 = rstack[sp].obj;
    ; 
    //  line no 97 , L1714317354 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2880);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib NUPS Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.NUPS_58 = rstack[sp].obj;
    ; 
    //  line no 98 , L776192909 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3895);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib NPARAMS Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.NPARAMS_59 = rstack[sp].obj;
    ; 
    //  line no 99 , L1688151539 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1547);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib NAME Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.NAME_60 = rstack[sp].obj;
    ; 
    //  line no 100 , L778234583 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3893);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib NAMEWHAT Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.NAMEWHAT_61 = rstack[sp].obj;
    ; 
    //  line no 101 , L999864329 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3894);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib WHAT Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.WHAT_62 = rstack[sp].obj;
    ; 
    //  line no 102 , L200760156 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3362);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib SOURCE Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.SOURCE_63 = rstack[sp].obj;
    ; 
    //  line no 103 , L383403884 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3898);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib SHORT_SRC Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.SHORT_1SRC_64 = rstack[sp].obj;
    ; 
    //  line no 104 , L802628402 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2523);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib LINEDEFINED Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.LINEDEFINED_65 = rstack[sp].obj;
    ; 
    //  line no 105 , L1374785073 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3363);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib LASTLINEDEFINED Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.LASTLINEDEFINED_66 = rstack[sp].obj;
    ; 
    //  line no 106 , L1626149608 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2521);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib CURRENTLINE Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.CURRENTLINE_67 = rstack[sp].obj;
    ; 
    //  line no 107 , L617142462 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4411);
    // invokestatic org/luaj/vm2/lib/DebugLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/DebugLib ACTIVELINES Lorg/luaj/vm2/LuaString;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib.ACTIVELINES_68 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L23218037;
        case 1 : goto L70543368;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_lib_DebugLib__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib__clinit____V(runtime, para[0].obj);
}


