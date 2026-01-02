// CLASS: org/luaj/vm2/Globals extends org/luaj/vm2/LuaTable
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Globals_static {};



__refer arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_Globals[] = {
    func_org_luaj_vm2_Globals_checkglobals___Lorg_luaj_vm2_Globals_2,  //0
    func_org_luaj_vm2_Globals_loadfile__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //1
    func_org_luaj_vm2_Globals_load__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_Globals_load__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_Globals_load__Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_Globals_load__Ljava_io_Reader_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_Globals_load__Ljava_io_Reader_2Ljava_lang_String_2Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaValue_2,  //6
    func_org_luaj_vm2_Globals_load__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //7
    func_org_luaj_vm2_Globals_loadPrototype__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2,  //8
    func_org_luaj_vm2_Globals_compilePrototype__Ljava_io_Reader_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2,  //9
    func_org_luaj_vm2_Globals_compilePrototype__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2,  //10
    func_org_luaj_vm2_Globals_yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //11
};
__refer arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_LuaTable[] = {
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
__refer arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_LuaValue[] = {
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
    func_org_luaj_vm2_Globals_checkglobals___Lorg_luaj_vm2_Globals_2,  //48
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
__refer arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_Varargs[] = {
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
__refer arr_vmtable_org_luaj_vm2_Globals_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_Metatable[] = {
    func_org_luaj_vm2_LuaTable_useWeakKeys___Z,  //0
    func_org_luaj_vm2_LuaTable_useWeakValues___Z,  //1
    func_org_luaj_vm2_LuaTable_toLuaValue___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_LuaTable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //3
    func_org_luaj_vm2_LuaTable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_LuaTable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2  //5
};
VMTable vmtable_org_luaj_vm2_Globals[] = {
    {195, 12, arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_Globals}, //0
    {33, 43, arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_LuaTable}, //1
    {1, 210, arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_LuaValue}, //2
    {2, 63, arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_Varargs}, //3
    {5, 10, arr_vmtable_org_luaj_vm2_Globals_from_java_lang_Object}, //4
    {40, 6, arr_vmtable_org_luaj_vm2_Globals_from_org_luaj_vm2_Metatable}, //5
};



// locals: 1
// stack: 4
// args: 0
void func_org_luaj_vm2_Globals__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1774, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 115 , L1001958076 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 115;
    rstack[sp++].obj = rlocal[0].obj;
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
    ; 
    //  line no 118 , L1847410999 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/Globals STDIN Ljava/io/InputStream;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->STDIN_51 = rstack[sp + 1].obj;
    ; 
    //  line no 121 , L627709989 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/System out Ljava/io/PrintStream;
    rstack[sp].obj =static_var_java_lang_System.out_2;
    sp += 1;
    // putfield org/luaj/vm2/Globals STDOUT Ljava/io/PrintStream;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->STDOUT_52 = rstack[sp + 1].obj;
    ; 
    //  line no 124 , L698676628 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/System err Ljava/io/PrintStream;
    rstack[sp].obj =static_var_java_lang_System.err_3;
    sp += 1;
    // putfield org/luaj/vm2/Globals STDERR Ljava/io/PrintStream;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->STDERR_53 = rstack[sp + 1].obj;
    ; 
    //  line no 130 , L1471633238 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/LuaThread
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 24);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LuaThread.<init>(Lorg/luaj/vm2/Globals;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaThread__init___Lorg_luaj_vm2_Globals_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->running_55 = rstack[sp + 1].obj;
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

void bridge_org_luaj_vm2_Globals__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Globals__init____V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_Globals* func_org_luaj_vm2_Globals_checkglobals___Lorg_luaj_vm2_Globals_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1775, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 161 , L645476639 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 161;
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

void bridge_org_luaj_vm2_Globals_checkglobals___Lorg_luaj_vm2_Globals_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_checkglobals___Lorg_luaj_vm2_Globals_2(runtime, ins);
}

ExceptionItem arr_extable_func_org_luaj_vm2_Globals_loadfile__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2[] = {
    { , , 141}
};
ExceptionTable extable_func_org_luaj_vm2_Globals_loadfile__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2 = {1, arr_extable_func_org_luaj_vm2_Globals_loadfile__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2};

// locals: 3
// stack: 5
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Globals_loadfile__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1776, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1159694255 L727018418 L1154172430 (
    L1159694255:
    __frame->bytecodeIndex = 
    //  line no 183 , L1159694255 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 183;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals finder Lorg/luaj/vm2/lib/ResourceFinder;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->finder_54;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/lib/ResourceFinder.findResource(Ljava/lang/String;)Ljava/io/InputStream;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_io_InputStream* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 140, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1508);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1646);
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Globals.load(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*,struct java_lang_String*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 195, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L727018418:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1154172430:
    //  line no 184 , L1154172430 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 185 , L388436342 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3103);
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
    rstack[sp++].obj = rlocal[2].obj;
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
    // invokestatic org/luaj/vm2/Globals.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
        case 0 : goto L1154172430;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_Globals_loadfile__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_loadfile__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Globals_load__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1777, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 196 , L775174220 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 196;
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/Globals$StrReader
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 161);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/Globals$StrReader.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024StrReader__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/Globals.load(Ljava/io/Reader;Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_io_Reader*,struct java_lang_String*) = find_method(__ins->vm_table, 195, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_Globals_load__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_load__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Globals_load__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1778, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 205 , L525527919 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 205;
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/Globals$StrReader
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 161);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/Globals$StrReader.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024StrReader__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/Globals.load(Ljava/io/Reader;Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_io_Reader*,struct java_lang_String*) = find_method(__ins->vm_table, 195, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_Globals_load__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_load__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 4
// stack: 4
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Globals_load__Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1, struct org_luaj_vm2_LuaTable* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1779, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 217 , L1479100519 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 217;
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/Globals$StrReader
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 161);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/Globals$StrReader.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024StrReader__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/Globals.load(Ljava/io/Reader;Ljava/lang/String;Lorg/luaj/vm2/LuaTable;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_io_Reader*,struct java_lang_String*,struct org_luaj_vm2_LuaTable*) = find_method(__ins->vm_table, 195, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
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

void bridge_org_luaj_vm2_Globals_load__Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_load__Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 5
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Globals_load__Ljava_io_Reader_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_io_Reader* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1780, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 229 , L1875108260 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 229;
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/Globals$UTF8Stream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 288);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/Globals$UTF8Stream.<init>(Ljava/io/Reader;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024UTF8Stream__init___Ljava_io_Reader_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3106);
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Globals.load(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*,struct java_lang_String*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 195, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
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

void bridge_org_luaj_vm2_Globals_load__Ljava_io_Reader_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_load__Ljava_io_Reader_2Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 5
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Globals_load__Ljava_io_Reader_2Ljava_lang_String_2Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_io_Reader* p0, struct java_lang_String* p1, struct org_luaj_vm2_LuaTable* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1781, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 243 , L761229698 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 243;
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/Globals$UTF8Stream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 288);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/Globals$UTF8Stream.<init>(Ljava/io/Reader;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024UTF8Stream__init___Ljava_io_Reader_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3106);
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/Globals.load(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*,struct java_lang_String*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 195, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
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

void bridge_org_luaj_vm2_Globals_load__Ljava_io_Reader_2Ljava_lang_String_2Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_load__Ljava_io_Reader_2Ljava_lang_String_2Lorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj, para[1].obj);
}

ExceptionItem arr_extable_func_org_luaj_vm2_Globals_load__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2[] = {
    { , , 408}, 
    { , , 141}
};
ExceptionTable extable_func_org_luaj_vm2_Globals_load__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2 = {2, arr_extable_func_org_luaj_vm2_Globals_load__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2};

// locals: 6
// stack: 4
// args: 4
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Globals_load__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1, struct java_lang_String* p2, struct org_luaj_vm2_LuaValue* p3){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1782, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    // try catch :L703232177 L757779849 L2075093711 (
    // try catch :L703232177 L757779849 L31906520 (
    L703232177:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 254 , L703232177 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 254;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/Globals.loadPrototype(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*,struct java_lang_String*) = find_method(__ins->vm_table, 195, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 255 , L2066945445 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals loader Lorg/luaj/vm2/Globals$Loader;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->loader_59;
    sp += 0;
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface org/luaj/vm2/Globals$Loader.load(Lorg/luaj/vm2/Prototype;Ljava/lang/String;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaFunction;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaFunction* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*,struct java_lang_String*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 289, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L757779849:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2075093711:
    //  line no 256 , L2075093711 , bytecode index = 
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 257 , L9361871 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // athrow
    //     L9361871 in labeltable is :L9361871
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 257;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L31906520:
    //  line no 258 , L31906520 , bytecode index = 
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 259 , L16196099 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3103);
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
    rstack[sp++].obj = rlocal[5].obj;
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
    // invokestatic org/luaj/vm2/Globals.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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
        case 0 : goto L2075093711;
        case 1 : goto L31906520;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_Globals_load__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_load__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 5
// stack: 3
// args: 3
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_Globals_loadPrototype__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1, struct java_lang_String* p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1783, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 271 , L1410186665 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 271;
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 98
    stack[sp++].i = 98;
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
    if(stack[--sp].i  < 0) goto L582702662;
    ; 
    //  line no 272 , L468033320 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals undumper Lorg/luaj/vm2/Globals$Undumper;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->undumper_61;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L753162875;
    ; 
    //  line no 273 , L356338363 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3111);
    // invokestatic org/luaj/vm2/Globals.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L753162875:
    //  line no 274 , L753162875 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/InputStream.markSupported()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1833707324;
    ; 
    //  line no 275 , L1516759394 , bytecode index = 
    // new org/luaj/vm2/Globals$BufferedStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 183);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/Globals$BufferedStream.<init>(Ljava/io/InputStream;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024BufferedStream__init___Ljava_io_InputStream_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    L1833707324:
    //  line no 276 , L1833707324 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_4
    stack[sp++].i = 4;
    // invokevirtual java/io/InputStream.mark(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 66, 6);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 277 , L1415469015 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals undumper Lorg/luaj/vm2/Globals$Undumper;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->undumper_61;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/Globals$Undumper.undump(Ljava/io/InputStream;Ljava/lang/String;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*) = find_method(__ins->vm_table, 223, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 278 , L734635893 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  == NULL) goto L665846007;
    ; 
    //  line no 279 , L1123664282 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L665846007:
    //  line no 280 , L665846007 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/InputStream.reset()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 7);
        jthread_lock(runtime, __ins);
        __func_p(runtime);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L582702662:
    //  line no 282 , L582702662 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 116
    stack[sp++].i = 116;
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
    if(stack[--sp].i  < 0) goto L1690294013;
    ; 
    //  line no 283 , L44771088 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/Globals.compilePrototype(Ljava/io/InputStream;Ljava/lang/String;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*) = find_method(__ins->vm_table, 195, 10);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1690294013:
    //  line no 285 , L1690294013 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3112);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3113);
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
    // invokestatic org/luaj/vm2/Globals.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    ; 
    //  line no 286 , L624637962 , bytecode index = 
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

void bridge_org_luaj_vm2_Globals_loadPrototype__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_loadPrototype__Ljava_io_InputStream_2Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 2
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_Globals_compilePrototype__Ljava_io_Reader_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct java_io_Reader* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1784, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 294 , L860941277 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 294;
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/Globals$UTF8Stream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 288);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/Globals$UTF8Stream.<init>(Ljava/io/Reader;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Globals_00024UTF8Stream__init___Ljava_io_Reader_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/Globals.compilePrototype(Ljava/io/InputStream;Ljava/lang/String;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*) = find_method(__ins->vm_table, 195, 10);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_Globals_compilePrototype__Ljava_io_Reader_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_compilePrototype__Ljava_io_Reader_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 3
// args: 2
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_Globals_compilePrototype__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1785, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 302 , L345986913 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 302;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals compiler Lorg/luaj/vm2/Globals$Compiler;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->compiler_60;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L732118572;
    ; 
    //  line no 303 , L521746054 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3116);
    // invokestatic org/luaj/vm2/Globals.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L732118572:
    //  line no 304 , L732118572 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals compiler Lorg/luaj/vm2/Globals$Compiler;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->compiler_60;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/Globals$Compiler.compile(Ljava/io/InputStream;Ljava/lang/String;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*) = find_method(__ins->vm_table, 218, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_Globals_compilePrototype__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_compilePrototype__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 3
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_Globals_yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1786, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 312 , L1605190078 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 312;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1842173497;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaThread.isMainThread()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 24, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L993452032;
    L1842173497:
    //  line no 313 , L1842173497 , bytecode index = 
    // new org/luaj/vm2/LuaError
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3118);
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
    //     L1842173497 in labeltable is :L1842173497
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 313;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L993452032:
    //  line no 314 , L993452032 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // getfield org/luaj/vm2/LuaThread state Lorg/luaj/vm2/LuaThread$State;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->state_53;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 315 , L859617558 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaThread$State.lua_yield(Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Varargs*) = find_method(__ins->vm_table, 290, 2);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_Globals_yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Globals_yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


