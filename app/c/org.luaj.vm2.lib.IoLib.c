// CLASS: org/luaj/vm2/lib/IoLib extends org/luaj/vm2/lib/TwoArgFunction
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_IoLib_static {s32 FTYPE_1STDIN_47; s32 FTYPE_1STDOUT_48; s32 FTYPE_1STDERR_49; s32 FTYPE_1NAMED_50; struct org_luaj_vm2_LuaValue* STDIN_54; struct org_luaj_vm2_LuaValue* STDOUT_55; struct org_luaj_vm2_LuaValue* STDERR_56; struct org_luaj_vm2_LuaValue* FILE_57; struct org_luaj_vm2_LuaValue* CLOSED_1FILE_58; s32 IO_1CLOSE_59; s32 IO_1FLUSH_60; s32 IO_1INPUT_61; s32 IO_1LINES_62; s32 IO_1OPEN_63; s32 IO_1OUTPUT_64; s32 IO_1POPEN_65; s32 IO_1READ_66; s32 IO_1TMPFILE_67; s32 IO_1TYPE_68; s32 IO_1WRITE_69; s32 FILE_1CLOSE_70; s32 FILE_1FLUSH_71; s32 FILE_1LINES_72; s32 FILE_1READ_73; s32 FILE_1SEEK_74; s32 FILE_1SETVBUF_75; s32 FILE_1WRITE_76; s32 IO_1INDEX_77; s32 LINES_1ITER_78; JArray * IO_1NAMES_79; JArray * FILE_1NAMES_80;  };
struct org_luaj_vm2_lib_IoLib_static static_var_org_luaj_vm2_lib_IoLib = {0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL};


__refer arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_lib_IoLib[] = {
    func_org_luaj_vm2_lib_IoLib_wrapStdin___Lorg_luaj_vm2_lib_IoLib_00024File_2,  //0
    func_org_luaj_vm2_lib_IoLib_wrapStdout___Lorg_luaj_vm2_lib_IoLib_00024File_2,  //1
    func_org_luaj_vm2_lib_IoLib_wrapStderr___Lorg_luaj_vm2_lib_IoLib_00024File_2,  //2
    func_org_luaj_vm2_lib_IoLib_openFile__Ljava_lang_String_2ZZZZ_Lorg_luaj_vm2_lib_IoLib_00024File_2,  //3
    func_org_luaj_vm2_lib_IoLib_tmpFile___Lorg_luaj_vm2_lib_IoLib_00024File_2,  //4
    func_org_luaj_vm2_lib_IoLib_openProgram__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2,  //5
    func_org_luaj_vm2_lib_IoLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //6
    func_org_luaj_vm2_lib_IoLib__1io_1flush___Lorg_luaj_vm2_Varargs_2,  //7
    func_org_luaj_vm2_lib_IoLib__1io_1tmpfile___Lorg_luaj_vm2_Varargs_2,  //8
    func_org_luaj_vm2_lib_IoLib__1io_1close__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //9
    func_org_luaj_vm2_lib_IoLib__1io_1input__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //10
    func_org_luaj_vm2_lib_IoLib__1io_1output__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //11
    func_org_luaj_vm2_lib_IoLib__1io_1type__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //12
    func_org_luaj_vm2_lib_IoLib__1io_1popen__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2,  //13
    func_org_luaj_vm2_lib_IoLib__1io_1open__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2,  //14
    func_org_luaj_vm2_lib_IoLib__1io_1lines__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //15
    func_org_luaj_vm2_lib_IoLib__1io_1read__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //16
    func_org_luaj_vm2_lib_IoLib__1io_1write__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //17
    func_org_luaj_vm2_lib_IoLib__1file_1close__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //18
    func_org_luaj_vm2_lib_IoLib__1file_1flush__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //19
    func_org_luaj_vm2_lib_IoLib__1file_1setvbuf__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2I_Lorg_luaj_vm2_Varargs_2,  //20
    func_org_luaj_vm2_lib_IoLib__1file_1lines__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //21
    func_org_luaj_vm2_lib_IoLib__1file_1read__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //22
    func_org_luaj_vm2_lib_IoLib__1file_1seek__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2I_Lorg_luaj_vm2_Varargs_2,  //23
    func_org_luaj_vm2_lib_IoLib__1file_1write__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //24
    func_org_luaj_vm2_lib_IoLib__1io_1index__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //25
    func_org_luaj_vm2_lib_IoLib__1lines_1iter__Lorg_luaj_vm2_LuaValue_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //26
};
__refer arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_lib_TwoArgFunction[] = {
    func_org_luaj_vm2_lib_IoLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //1
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //4
};
__refer arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_lib_LibFunction[] = {
    func_org_luaj_vm2_lib_LibFunction_tojstring___Ljava_lang_String_2,  //0
    func_org_luaj_vm2_lib_LibFunction_bind__Lorg_luaj_vm2_LuaValue_2Ljava_lang_Class_2_3Ljava_lang_String_2_V,  //1
    func_org_luaj_vm2_lib_LibFunction_bind__Lorg_luaj_vm2_LuaValue_2Ljava_lang_Class_2_3Ljava_lang_String_2I_V,  //2
    func_org_luaj_vm2_lib_TwoArgFunction_call___Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_lib_IoLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //5
    func_org_luaj_vm2_lib_TwoArgFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //6
    func_org_luaj_vm2_lib_LibFunction_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //7
    func_org_luaj_vm2_lib_TwoArgFunction_invoke__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //8
};
__refer arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_LuaFunction[] = {
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
__refer arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_LuaValue[] = {
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
    func_org_luaj_vm2_lib_IoLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //104
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
__refer arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_Varargs[] = {
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
__refer arr_vmtable_org_luaj_vm2_lib_IoLib_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_IoLib[] = {
    {259, 27, arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_lib_IoLib}, //0
    {73, 5, arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_lib_TwoArgFunction}, //1
    {18, 9, arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_lib_LibFunction}, //2
    {19, 10, arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_LuaFunction}, //3
    {1, 210, arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_LuaValue}, //4
    {2, 63, arr_vmtable_org_luaj_vm2_lib_IoLib_from_org_luaj_vm2_Varargs}, //5
    {5, 10, arr_vmtable_org_luaj_vm2_lib_IoLib_from_java_lang_Object}, //6
};



// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_lib_IoLib__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1407, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 77 , L2008159348 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 77;
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
    //  line no 189 , L1389432760 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/lib/IoLib infile Lorg/luaj/vm2/lib/IoLib$File;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->infile_51 = rstack[sp + 1].obj;
    ; 
    //  line no 190 , L1103132232 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/lib/IoLib outfile Lorg/luaj/vm2/lib/IoLib$File;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->outfile_52 = rstack[sp + 1].obj;
    ; 
    //  line no 191 , L535352603 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/lib/IoLib errfile Lorg/luaj/vm2/lib/IoLib$File;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->errfile_53 = rstack[sp + 1].obj;
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

void bridge_org_luaj_vm2_lib_IoLib__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_IoLib__init____V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_wrapStdin___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1408, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_wrapStdin___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_wrapStdin___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_wrapStdout___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1409, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_wrapStdout___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_wrapStdout___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_wrapStderr___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1410, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_wrapStderr___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_wrapStderr___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 5
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_openFile__Ljava_lang_String_2ZZZZ_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, struct java_lang_String* p0, s8 p1, s8 p2, s8 p3, s8 p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1411, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_openFile__Ljava_lang_String_2ZZZZ_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_openFile__Ljava_lang_String_2ZZZZ_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins, para[0].i, para[1].i, para[2].i, para[3].i);
}


// locals: 0
// stack: 0
// args: 0
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_tmpFile___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1412, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_tmpFile___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_tmpFile___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_openProgram__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1413, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_openProgram__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_openProgram__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 7
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_IoLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1414, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 251 , L577245010 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 251;
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
    // putfield org/luaj/vm2/lib/IoLib globals Lorg/luaj/vm2/Globals;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->globals_82 = rstack[sp + 1].obj;
    ; 
    //  line no 254 , L1624788833 , bytecode index = 
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
    //  line no 255 , L968957548 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    {
        class_clinit(runtime, get_utf8str_by_utfraw_index(2565));
        JClass *clazz = classes_get(get_utf8str_by_utfraw_index(2565));
        rstack[sp++].obj = ins_of_Class_create_get(runtime, clazz);
    }
    // getstatic org/luaj/vm2/lib/IoLib IO_NAMES [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_IoLib.IO_1NAMES_79;
    sp += 1;
    // invokevirtual org/luaj/vm2/lib/IoLib.bind(Lorg/luaj/vm2/LuaValue;Ljava/lang/Class;[Ljava/lang/String;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct java_lang_Class*,JArray *) = find_method(__ins->vm_table, 18, 1);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 258 , L843959601 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    // putfield org/luaj/vm2/lib/IoLib filemethods Lorg/luaj/vm2/LuaTable;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->filemethods_81 = rstack[sp + 1].obj;
    ; 
    //  line no 259 , L1346197173 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib filemethods Lorg/luaj/vm2/LuaTable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->filemethods_81;
    sp += 0;
    //  ldc 
    {
        class_clinit(runtime, get_utf8str_by_utfraw_index(2565));
        JClass *clazz = classes_get(get_utf8str_by_utfraw_index(2565));
        rstack[sp++].obj = ins_of_Class_create_get(runtime, clazz);
    }
    // getstatic org/luaj/vm2/lib/IoLib FILE_NAMES [Ljava/lang/String;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_IoLib.FILE_1NAMES_80;
    sp += 1;
    //  bipush 11
    stack[sp++].i = 11;
    // invokevirtual org/luaj/vm2/lib/IoLib.bind(Lorg/luaj/vm2/LuaValue;Ljava/lang/Class;[Ljava/lang/String;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct java_lang_Class*,JArray *,s32) = find_method(__ins->vm_table, 18, 2);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 262 , L1924966548 , bytecode index = 
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
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 263 , L1128266449 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    //  ldc 
    {
        class_clinit(runtime, get_utf8str_by_utfraw_index(2565));
        JClass *clazz = classes_get(get_utf8str_by_utfraw_index(2565));
        rstack[sp++].obj = ins_of_Class_create_get(runtime, clazz);
    }
    // iconst_1
    stack[sp++].i = 1;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 599);
    // arrstore __refer  ,  L1128266449 bc index = 
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
    //  bipush 18
    stack[sp++].i = 18;
    // invokevirtual org/luaj/vm2/lib/IoLib.bind(Lorg/luaj/vm2/LuaValue;Ljava/lang/Class;[Ljava/lang/String;I)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*,struct java_lang_Class*,JArray *,s32) = find_method(__ins->vm_table, 18, 2);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 264 , L533173186 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/LuaTable.setmetatable(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 10);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 267 , L628487793 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.setLibInstance(Lorg/luaj/vm2/LuaTable;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_IoLib_setLibInstance__Lorg_luaj_vm2_LuaTable_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 268 , L848958019 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib filemethods Lorg/luaj/vm2/LuaTable;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->filemethods_81;
    sp += 0;
    // invokespecial org/luaj/vm2/lib/IoLib.setLibInstance(Lorg/luaj/vm2/LuaTable;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_IoLib_setLibInstance__Lorg_luaj_vm2_LuaTable_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 269 , L248487859 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.setLibInstance(Lorg/luaj/vm2/LuaTable;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_IoLib_setLibInstance__Lorg_luaj_vm2_LuaTable_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 272 , L758465579 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2577);
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
    //  line no 273 , L670689666 , bytecode index = 
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
    if(stack[--sp].i  != 0) goto L1167327028;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2577);
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
    L1167327028:
    //  line no 274 , L1167327028 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_IoLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_call__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 3
// args: 1
void func_org_luaj_vm2_lib_IoLib_setLibInstance__Lorg_luaj_vm2_LuaTable_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1415, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 278 , L817941759 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 278;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaTable.keys()[Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 33, 32);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 279 , L1478334108 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L36550900
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    L726051009:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L492252770;
    ; 
    //  line no 280 , L701166114 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L701166114 bc index = 
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
    // invokevirtual org/luaj/vm2/LuaTable.get(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 33, 12);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast org/luaj/vm2/lib/IoLib$IoLibV
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 2565);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // putfield org/luaj/vm2/lib/IoLib$IoLibV iolib Lorg/luaj/vm2/lib/IoLib;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib_00024IoLibV*)rstack[sp + 0].obj)->iolib_48 = rstack[sp + 1].obj;
    ; 
    //  line no 279 , L1187972599 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L726051009;
    L492252770:
    //  line no 281 , L492252770 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_IoLib_setLibInstance__Lorg_luaj_vm2_LuaTable_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_IoLib_setLibInstance__Lorg_luaj_vm2_LuaTable_2_V(runtime, ins);
}


// locals: 1
// stack: 5
// args: 0
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_input___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1416, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 341 , L2094115865 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 341;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib infile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->infile_51;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L49547843;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib infile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->infile_51;
    sp += 0;
    goto L1017792343;
    L49547843:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2581);
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 39);
    // invokespecial org/luaj/vm2/lib/IoLib.ioopenfile(ILjava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
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
    // putfield org/luaj/vm2/lib/IoLib infile Lorg/luaj/vm2/lib/IoLib$File;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->infile_51 = rstack[sp + 1].obj;
    L1017792343:
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

void bridge_org_luaj_vm2_lib_IoLib_input___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_input___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1flush___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1417, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 346 , L402978317 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 346;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.output()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_output___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/IoLib.checkopen(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 347 , L981487964 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib outfile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->outfile_52;
    sp += 0;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.flush()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 348 , L1417554340 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1flush___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1flush___Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1tmpfile___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1418, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 353 , L596333086 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 353;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib.tmpFile()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_IoLib_00024File* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 259, 4);
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1tmpfile___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1tmpfile___Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 3
// stack: 1
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1close__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1419, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 358 , L1043317832 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 358;
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
    if(stack[--sp].i  == 0) goto L560465923;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.output()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_output___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1485485458;
    L560465923:
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1485485458:
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 359 , L210474732 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkopen(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 360 , L1288052401 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.ioclose(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioclose__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1close__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1close__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1input__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1420, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 365 , L539240764 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 365;
    rstack[sp++].obj = rlocal[0].obj;
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
    if(stack[--sp].i  == 0) goto L1883830050;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.input()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_input___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L201804812;
    L1883830050:
    //  line no 366 , L1883830050 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L1487230025;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.checkjstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 54);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 39);
    // invokespecial org/luaj/vm2/lib/IoLib.ioopenfile(ILjava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L201804812;
    L1487230025:
    //  line no 367 , L1487230025 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L201804812:
    // putfield org/luaj/vm2/lib/IoLib infile Lorg/luaj/vm2/lib/IoLib$File;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->infile_51 = rstack[sp + 1].obj;
    ; 
    //  line no 368 , L1498016680 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib infile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->infile_51;
    sp += 0;
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1input__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1input__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1output__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1421, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 373 , L1490985125 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 373;
    rstack[sp++].obj = rlocal[0].obj;
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
    if(stack[--sp].i  == 0) goto L707506411;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.output()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_output___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1009326765;
    L707506411:
    //  line no 374 , L707506411 , bytecode index = 
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
    if(stack[--sp].i  == 0) goto L755328698;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.checkjstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 54);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2587);
    // invokespecial org/luaj/vm2/lib/IoLib.ioopenfile(ILjava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1009326765;
    L755328698:
    //  line no 375 , L755328698 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1009326765:
    // putfield org/luaj/vm2/lib/IoLib outfile Lorg/luaj/vm2/lib/IoLib$File;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->outfile_52 = rstack[sp + 1].obj;
    ; 
    //  line no 376 , L7548983 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib outfile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->outfile_52;
    sp += 0;
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1output__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1output__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 3
// stack: 1
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1type__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1422, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 381 , L52487168 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 381;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.optfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_optfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 382 , L85357160 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L486348917;
    ; 
    //  line no 383 , L683718244 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.isclosed()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L742672280;
    // getstatic org/luaj/vm2/lib/IoLib CLOSED_FILE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_IoLib.CLOSED_1FILE_58;
    sp += 1;
    goto L452457802;
    L742672280:
    // getstatic org/luaj/vm2/lib/IoLib FILE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_IoLib.FILE_57;
    sp += 1;
    goto L452457802;
    L486348917:
    //  line no 384 , L486348917 , bytecode index = 
    // getstatic org/luaj/vm2/lib/IoLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    L452457802:
    //  line no 382 , L452457802 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1type__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1type__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1popen__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1423, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 389 , L1130598644 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 389;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 39);
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  != 0) goto L1293252487;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2587);
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  != 0) goto L1293252487;
    // iconst_2
    stack[sp++].i = 2;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2591);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2592);
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
    // invokestatic org/luaj/vm2/lib/IoLib.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L1293252487:
    //  line no 390 , L1293252487 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib.openProgram(Ljava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_IoLib_00024File* (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct java_lang_String*) = find_method(__ins->vm_table, 259, 5);
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1popen__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1popen__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 4
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1open__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1424, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 395 , L1829966070 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 395;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.rawopenfile(ILjava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_rawopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1open__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1open__Ljava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 5
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1lines__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1425, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 400 , L1424439581 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 400;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokevirtual org/luaj/vm2/Varargs.optjstring(ILjava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32,struct java_lang_String*) = find_method(__ins->vm_table, 2, 22);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 401 , L1354280589 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L626626764;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.input()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_input___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1372137902;
    L626626764:
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 39);
    // invokespecial org/luaj/vm2/lib/IoLib.ioopenfile(ILjava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1372137902:
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 402 , L1015799131 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkopen(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 403 , L701681793 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L1088744071;
    // iconst_1
    stack[sp++].i = 1;
    goto L1484275564;
    L1088744071:
    // iconst_0
    stack[sp++].i = 0;
    L1484275564:
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual org/luaj/vm2/Varargs.subargs(I)Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 2, 60);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial org/luaj/vm2/lib/IoLib.lines(Lorg/luaj/vm2/lib/IoLib$File;ZLorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_lines__Lorg_luaj_vm2_lib_IoLib_00024File_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1lines__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1lines__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1read__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1426, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 408 , L85121323 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 408;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.input()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_input___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/IoLib.checkopen(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 409 , L1657125852 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib infile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->infile_51;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.ioread(Lorg/luaj/vm2/lib/IoLib$File;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioread__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1read__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1read__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1write__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1427, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 414 , L465909321 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 414;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.output()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_output___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/IoLib.checkopen(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 415 , L143486875 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib outfile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->outfile_52;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.iowrite(Lorg/luaj/vm2/lib/IoLib$File;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_iowrite__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1write__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1write__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1file_1close__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1428, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 420 , L1197176722 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 420;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/IoLib.ioclose(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioclose__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1file_1close__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1file_1close__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1file_1flush__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1429, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 425 , L369901249 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 425;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/lib/IoLib$File.flush()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 426 , L405488475 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
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

void bridge_org_luaj_vm2_lib_IoLib__1file_1flush__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1file_1flush__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 3
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1file_1setvbuf__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct java_lang_String* p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1430, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 431 , L49969897 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 431;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2601);
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L1970779713;
    goto L923013679;
    L1970779713:
    //  line no 432 , L1970779713 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2602);
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L827579900;
    goto L923013679;
    L827579900:
    //  line no 433 , L827579900 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2603);
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L1622135821;
    goto L923013679;
    L1622135821:
    //  line no 435 , L1622135821 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2591);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2604);
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
    // invokestatic org/luaj/vm2/lib/IoLib.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L923013679:
    //  line no 437 , L923013679 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.setvbuf(Ljava/lang/String;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32) = find_method(__ins->vm_table, 258, 6);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 438 , L681747431 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
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

void bridge_org_luaj_vm2_lib_IoLib__1file_1setvbuf__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1file_1setvbuf__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2I_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj, para[1].i);
}


// locals: 2
// stack: 5
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1file_1lines__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1431, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 443 , L280223635 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 443;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual org/luaj/vm2/Varargs.subargs(I)Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 2, 60);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial org/luaj/vm2/lib/IoLib.lines(Lorg/luaj/vm2/lib/IoLib$File;ZLorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_lines__Lorg_luaj_vm2_lib_IoLib_00024File_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1file_1lines__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1file_1lines__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1file_1read__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_Varargs* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1432, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 448 , L866273692 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 448;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.ioread(Lorg/luaj/vm2/lib/IoLib$File;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioread__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1file_1read__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1file_1read__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 3
// args: 3
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1file_1seek__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct java_lang_String* p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1433, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 453 , L3392189 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 453;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 171);
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L503144273;
    goto L1009916891;
    L503144273:
    //  line no 454 , L503144273 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 854);
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L612716569;
    goto L1009916891;
    L612716569:
    //  line no 455 , L612716569 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2608);
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L985487390;
    goto L1009916891;
    L985487390:
    //  line no 457 , L985487390 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2591);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2609);
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
    // invokestatic org/luaj/vm2/lib/IoLib.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L1009916891:
    //  line no 459 , L1009916891 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.seek(Ljava/lang/String;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32) = find_method(__ins->vm_table, 258, 5);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/IoLib.valueOf(I)Lorg/luaj/vm2/LuaInteger;
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

void bridge_org_luaj_vm2_lib_IoLib__1file_1seek__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1file_1seek__Lorg_luaj_vm2_LuaValue_2Ljava_lang_String_2I_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj, para[1].i);
}


// locals: 3
// stack: 2
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1file_1write__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_Varargs* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1434, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 464 , L1628289406 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 464;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.iowrite(Lorg/luaj/vm2/lib/IoLib$File;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_iowrite__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
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

void bridge_org_luaj_vm2_lib_IoLib__1file_1write__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1file_1write__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1io_1index__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1435, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 469 , L1068232840 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 469;
    rstack[sp++].obj = rlocal[1].obj;
    // getstatic org/luaj/vm2/lib/IoLib STDOUT Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_IoLib.STDOUT_55;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 1, 130);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L507061061;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.output()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_output___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L317960117;
    L507061061:
    //  line no 470 , L507061061 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getstatic org/luaj/vm2/lib/IoLib STDIN Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_IoLib.STDIN_54;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 1, 130);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1290614253;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.input()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_input___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L317960117;
    L1290614253:
    //  line no 471 , L1290614253 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getstatic org/luaj/vm2/lib/IoLib STDERR Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_IoLib.STDERR_56;
    sp += 1;
    // invokevirtual org/luaj/vm2/LuaValue.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 1, 130);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L740467528;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.errput()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_errput___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L317960117;
    L740467528:
    // getstatic org/luaj/vm2/lib/IoLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    L317960117:
    //  line no 469 , L317960117 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_IoLib__1io_1index__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1io_1index__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 6
// stack: 3
// args: 3
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib__1lines_1iter__Lorg_luaj_vm2_LuaValue_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, s8 p1, struct org_luaj_vm2_Varargs* p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1436, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 476 , L1960253514 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 476;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.optfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_optfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 477 , L1370495328 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  != NULL) goto L1748097277;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2614);
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
    // invokestatic org/luaj/vm2/lib/IoLib.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L1748097277:
    //  line no 478 , L1748097277 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.isclosed()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L668760567;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2615);
    // invokestatic org/luaj/vm2/lib/IoLib.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L668760567:
    //  line no 479 , L668760567 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.ioread(Lorg/luaj/vm2/lib/IoLib$File;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioread__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 480 , L1803890702 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  == 0) goto L984567559;
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/Varargs.isnil(I)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 2, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L984567559;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.eof()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 11);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L984567559;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.close()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L984567559:
    //  line no 481 , L984567559 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
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

void bridge_org_luaj_vm2_lib_IoLib__1lines_1iter__Lorg_luaj_vm2_LuaValue_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib__1lines_1iter__Lorg_luaj_vm2_LuaValue_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].i, para[1].obj);
}


// locals: 1
// stack: 5
// args: 0
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_output___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1437, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 485 , L417875774 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 485;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib outfile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->outfile_52;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1513029997;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib outfile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->outfile_52;
    sp += 0;
    goto L439925336;
    L1513029997:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2581);
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2587);
    // invokespecial org/luaj/vm2/lib/IoLib.ioopenfile(ILjava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
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
    // putfield org/luaj/vm2/lib/IoLib outfile Lorg/luaj/vm2/lib/IoLib$File;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->outfile_52 = rstack[sp + 1].obj;
    L439925336:
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

void bridge_org_luaj_vm2_lib_IoLib_output___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_output___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins);
}


// locals: 1
// stack: 5
// args: 0
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_errput___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1438, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 489 , L1616438581 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 489;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib errfile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->errfile_53;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1121891386;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/IoLib errfile Lorg/luaj/vm2/lib/IoLib$File;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_IoLib*)rstack[sp - 1].obj)->errfile_53;
    sp += 0;
    goto L501951555;
    L1121891386:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2581);
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2587);
    // invokespecial org/luaj/vm2/lib/IoLib.ioopenfile(ILjava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
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
    // putfield org/luaj/vm2/lib/IoLib errfile Lorg/luaj/vm2/lib/IoLib$File;
    sp -= 2;
    ((struct org_luaj_vm2_lib_IoLib*)rstack[sp + 0].obj)->errfile_53 = rstack[sp + 1].obj;
    L501951555:
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

void bridge_org_luaj_vm2_lib_IoLib_errput___Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_errput___Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins);
}

ExceptionItem arr_extable_func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2[] = {
    { , , 141}
};
ExceptionTable extable_func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2 = {1, arr_extable_func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2};

// locals: 5
// stack: 4
// args: 3
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, s32 p0, struct java_lang_String* p1, struct java_lang_String* p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1439, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    // try catch :L485475507 L724028528 L1869247587 (
    L485475507:
    __frame->bytecodeIndex = 
    //  line no 494 , L485475507 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 494;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/lib/IoLib.rawopenfile(ILjava/lang/String;Ljava/lang/String;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_rawopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L724028528:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1869247587:
    //  line no 495 , L1869247587 , bytecode index = 
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 496 , L467313213 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2620);
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
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/lang/Exception.getMessage()Ljava/lang/String;
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
    // invokestatic org/luaj/vm2/lib/IoLib.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    //  line no 497 , L2045913001 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1869247587;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_ioopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib_ioclose__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1440, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 502 , L1356236848 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 502;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.isstdfile()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L508760925;
    ; 
    //  line no 503 , L1987354705 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2623);
    // invokestatic org/luaj/vm2/lib/IoLib.errorresult(Ljava/lang/String;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_errorresult__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L508760925:
    //  line no 505 , L508760925 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.close()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 506 , L61304908 , bytecode index = 
    // invokestatic org/luaj/vm2/lib/IoLib.successresult()Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_successresult___Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_lib_IoLib_ioclose__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_ioclose__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_Varargs_2(runtime, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 1
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib_successresult___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1441, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 511 , L1637601612 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 511;
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_successresult___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_successresult___Lorg_luaj_vm2_Varargs_2(runtime, para[0].obj);
}


// locals: 2
// stack: 2
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib_errorresult__Ljava_lang_Exception_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct java_lang_Exception* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1442, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 515 , L842957574 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 515;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Exception.getMessage()Ljava/lang/String;
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
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 516 , L170106909 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2620);
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
    if(rstack[--sp].obj  == NULL) goto L1255109302;
    rstack[sp++].obj = rlocal[1].obj;
    goto L1969347346;
    L1255109302:
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Exception.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 56, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1969347346:
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
    // invokestatic org/luaj/vm2/lib/IoLib.errorresult(Ljava/lang/String;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_errorresult__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_lib_IoLib_errorresult__Ljava_lang_Exception_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_errorresult__Ljava_lang_Exception_2_Lorg_luaj_vm2_Varargs_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib_errorresult__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1443, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 520 , L615853374 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 520;
    // getstatic org/luaj/vm2/lib/IoLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/IoLib.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
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
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_errorresult__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_errorresult__Ljava_lang_String_2_Lorg_luaj_vm2_Varargs_2(runtime, para[0].obj, para[1].obj);
}

ExceptionItem arr_extable_func_org_luaj_vm2_lib_IoLib_lines__Lorg_luaj_vm2_lib_IoLib_00024File_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2[] = {
    { , , 141}
};
ExceptionTable extable_func_org_luaj_vm2_lib_IoLib_lines__Lorg_luaj_vm2_lib_IoLib_00024File_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2 = {1, arr_extable_func_org_luaj_vm2_lib_IoLib_lines__Lorg_luaj_vm2_lib_IoLib_00024File_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2};

// locals: 5
// stack: 8
// args: 3
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib_lines__Lorg_luaj_vm2_lib_IoLib_00024File_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib_00024File* p0, s8 p1, struct org_luaj_vm2_Varargs* p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1444, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    // try catch :L1855734078 L1470420462 L1526062841 (
    L1855734078:
    __frame->bytecodeIndex = 
    //  line no 525 , L1855734078 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 525;
    // new org/luaj/vm2/lib/IoLib$IoLibV
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 260);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2629);
    //  bipush 19
    stack[sp++].i = 19;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/lib/IoLib$IoLibV.<init>(Lorg/luaj/vm2/lib/IoLib$File;Ljava/lang/String;ILorg/luaj/vm2/lib/IoLib;ZLorg/luaj/vm2/Varargs;)V
    {
        sp -= 6;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_IoLib_00024IoLibV__init___Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2ILorg_luaj_vm2_lib_IoLib_2ZLorg_luaj_vm2_Varargs_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, rstack[sp + 5].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1470420462:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1526062841:
    //  line no 526 , L1526062841 , bytecode index = 
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 527 , L977650730 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2630);
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
    rstack[sp++].obj = rlocal[4].obj;
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
    // invokestatic org/luaj/vm2/lib/IoLib.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
        case 0 : goto L1526062841;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_lines__Lorg_luaj_vm2_lib_IoLib_00024File_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_lines__Lorg_luaj_vm2_lib_IoLib_00024File_2ZLorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].i, para[1].obj);
}


// locals: 4
// stack: 3
// args: 3
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib_iowrite__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1, struct org_luaj_vm2_Varargs* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1445, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 532 , L1202081661 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 532;
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    ; 
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
    local[3].i = stack[--sp].i;
    L664839586:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1989332276;
    ; 
    //  line no 533 , L54176060 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
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
    // invokevirtual org/luaj/vm2/lib/IoLib$File.write(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 258, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 532 , L851480926 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L664839586;
    L1989332276:
    //  line no 534 , L1989332276 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_IoLib_iowrite__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_iowrite__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 9
// stack: 4
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_IoLib_ioread__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib_00024File* p0, struct org_luaj_vm2_Varargs* p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1446, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 538 , L1895054149 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 538;
    rstack[sp++].obj = rlocal[2].obj;
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
    local[4].i = stack[--sp].i;
    ; 
    //  line no 539 , L651235118 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  != 0) goto L279781579;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/lib/IoLib.freadline(Lorg/luaj/vm2/lib/IoLib$File;Z)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freadline__Lorg_luaj_vm2_lib_IoLib_00024File_2Z_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L279781579:
    //  line no 540 , L279781579 , bytecode index = 
    stack[sp++].i = local[4].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 543 , L2111247080 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L740827140:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L36627152;
    ; 
    //  line no 544 , L2080125222 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
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
        case 3:
            goto L653345773;
        case 4:
            goto L1008612116;
        default:
            goto L1404834600;
    }
    L653345773:
    //  line no 546 , L653345773 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[6].obj;
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
    // invokestatic org/luaj/vm2/lib/IoLib.freadbytes(Lorg/luaj/vm2/lib/IoLib$File;I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freadbytes__Lorg_luaj_vm2_lib_IoLib_00024File_2I_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 547 , L1266093632 , bytecode index = 
    goto L2028036437;
    L1008612116:
    //  line no 549 , L1008612116 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
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
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 550 , L1420012431 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1404834600;
    rstack[sp++].obj = rlocal[8].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[8].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    // arrload s8  ,  L1420012431 bc index = 
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
    //  bipush 42
    stack[sp++].i = 42;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1404834600;
    ; 
    //  line no 551 , L426288284 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[8].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L426288284 bc index = 
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
        case 76:
            goto L1780399359;
        case 97:
            goto L428245792;
        case 108:
            goto L1353759820;
        case 110:
            goto L203472514;
        default:
            goto L1404834600;
    }
    L203472514:
    //  line no 552 , L203472514 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.freadnumber(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freadnumber__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    goto L2028036437;
    L1353759820:
    //  line no 553 , L1353759820 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/lib/IoLib.freadline(Lorg/luaj/vm2/lib/IoLib$File;Z)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freadline__Lorg_luaj_vm2_lib_IoLib_00024File_2Z_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    goto L2028036437;
    L1780399359:
    //  line no 554 , L1780399359 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokestatic org/luaj/vm2/lib/IoLib.freadline(Lorg/luaj/vm2/lib/IoLib$File;Z)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freadline__Lorg_luaj_vm2_lib_IoLib_00024File_2Z_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    goto L2028036437;
    L428245792:
    //  line no 555 , L428245792 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.freadall(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freadall__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    goto L2028036437;
    L1404834600:
    //  line no 559 , L1404834600 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2634);
    // invokestatic org/luaj/vm2/lib/IoLib.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_argerror__ILjava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2028036437:
    //  line no 561 , L2028036437 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    rstack[sp++].obj = rlocal[7].obj;
    // dup x2
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp - 3].j; 
    stack[sp - 3].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp - 3].obj; 
    rstack[sp - 3].obj = rstack[sp + 0].obj; 
    ++sp;
    // arrstore __refer  ,  L2028036437 bc index = 
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L740827140;
    ; 
    //  line no 562 , L1105090408 , bytecode index = 
    goto L36627152;
    L36627152:
    //  line no 564 , L36627152 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  != 0) goto L1599566873;
    // getstatic org/luaj/vm2/lib/IoLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    goto L687501326;
    L1599566873:
    rstack[sp++].obj = rlocal[5].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[3].i;
    // invokestatic org/luaj/vm2/lib/IoLib.varargsOf([Lorg/luaj/vm2/LuaValue;II)Lorg/luaj/vm2/Varargs;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf___3Lorg_luaj_vm2_LuaValue_2II_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L687501326:
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

void bridge_org_luaj_vm2_lib_IoLib_ioread__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_ioread__Lorg_luaj_vm2_lib_IoLib_00024File_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 2
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1447, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 568 , L235151116 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 568;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.optfile(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_optfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 569 , L1779914089 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L295055909;
    ; 
    //  line no 570 , L1060935276 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2637);
    // invokestatic org/luaj/vm2/lib/IoLib.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L295055909:
    //  line no 571 , L295055909 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.checkopen(Lorg/luaj/vm2/lib/IoLib$File;)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 572 , L300811000 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_checkfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 2
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_optfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1448, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 576 , L1638249646 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 576;
    rstack[sp++].obj = rlocal[0].obj;
    // instanceof org/luaj/vm2/lib/IoLib$File
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 2566);
    if(stack[--sp].i  == 0) goto L980533504;
    rstack[sp++].obj = rlocal[0].obj;
    // checkcast org/luaj/vm2/lib/IoLib$File
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 2566);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    goto L1533672820;
    L980533504:
    // aconst null
    rstack[sp++].obj = NULL;
    L1533672820:
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

void bridge_org_luaj_vm2_lib_IoLib_optfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_optfile__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 2
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1449, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 580 , L1132369181 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 580;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.isclosed()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2008229299;
    ; 
    //  line no 581 , L1671816300 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2641);
    // invokestatic org/luaj/vm2/lib/IoLib.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L2008229299:
    //  line no 582 , L2008229299 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_checkopen__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, para[0].obj, para[1].obj);
}


// locals: 9
// stack: 6
// args: 3
struct org_luaj_vm2_lib_IoLib_00024File* func_org_luaj_vm2_lib_IoLib_rawopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, s32 p0, struct java_lang_String* p1, struct java_lang_String* p2){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1450, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 586 , L1240412896 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 586;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 587 , L656349395 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1809129176:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1642308093;
    ; 
    //  line no 588 , L1370224403 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual java/lang/String.charAt(I)C
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        u16 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 589 , L246264949 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  != 0) goto L1296910502;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2643);
    stack[sp++].i = local[6].i;
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
    if(stack[--sp].i  < 0) goto L1296910502;
    goto L828241083;
    L1296910502:
    //  line no 590 , L1296910502 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1069584108;
    stack[sp++].i = local[6].i;
    //  bipush 43
    stack[sp++].i = 43;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1069584108;
    goto L828241083;
    L1069584108:
    //  line no 591 , L1069584108 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1554877309;
    stack[sp++].i = local[6].i;
    //  bipush 98
    stack[sp++].i = 98;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1554877309;
    goto L828241083;
    L1554877309:
    //  line no 592 , L1554877309 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 593 , L2063786038 , bytecode index = 
    goto L1642308093;
    L828241083:
    //  line no 587 , L828241083 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1809129176;
    L1642308093:
    //  line no 595 , L1642308093 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  > 0) goto L623131585;
    // iconst_2
    stack[sp++].i = 2;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2644);
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
    // invokestatic org/luaj/vm2/lib/IoLib.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
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
    L623131585:
    //  line no 597 , L623131585 , bytecode index = 
    stack[sp++].i = local[1].i;
    switch(stack[--sp].i){
        case 0:
            goto L779018428;
        case 1:
            goto L1107404311;
        case 2:
            goto L1182758821;
        default:
            goto L505968231;
    }
    L779018428:
    //  line no 598 , L779018428 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib.wrapStdin()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_IoLib_00024File* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 259, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1107404311:
    //  line no 599 , L1107404311 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib.wrapStdout()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_IoLib_00024File* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 259, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1182758821:
    //  line no 600 , L1182758821 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib.wrapStderr()Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_IoLib_00024File* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 259, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L505968231:
    //  line no 602 , L505968231 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 39);
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 603 , L465152579 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2645);
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
    local[6].i = stack[--sp].i;
    ; 
    //  line no 604 , L1108066952 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 43
    stack[sp++].i = 43;
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
    if(stack[--sp].i  <= 0) goto L234223040;
    // iconst_1
    stack[sp++].i = 1;
    goto L814377348;
    L234223040:
    // iconst_0
    stack[sp++].i = 0;
    L814377348:
    local[7].i = stack[--sp].i;
    ; 
    //  line no 605 , L1723278948 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 873);
    // invokevirtual java/lang/String.endsWith(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 15);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[8].i = stack[--sp].i;
    ; 
    //  line no 606 , L2050275256 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[8].i;
    // invokevirtual org/luaj/vm2/lib/IoLib.openFile(Ljava/lang/String;ZZZZ)Lorg/luaj/vm2/lib/IoLib$File;
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_IoLib_00024File* (*__func_p) (JThreadRuntime *,struct java_lang_String*,s8,s8,s8,s8) = find_method(__ins->vm_table, 259, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i);
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

void bridge_org_luaj_vm2_lib_IoLib_rawopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_rawopenfile__ILjava_lang_String_2Ljava_lang_String_2_Lorg_luaj_vm2_lib_IoLib_00024File_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 4
// stack: 4
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_IoLib_freadbytes__Lorg_luaj_vm2_lib_IoLib_00024File_2I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1451, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 613 , L1005093407 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 613;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L1689458432;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.eof()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 11);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L996533593;
    // getstatic org/luaj/vm2/lib/IoLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    goto L195970976;
    L996533593:
    // getstatic org/luaj/vm2/lib/IoLib EMPTYSTRING Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.EMPTYSTRING_40;
    sp += 1;
    L195970976:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1689458432:
    //  line no 614 , L1689458432 , bytecode index = 
    stack[sp++].i = local[1].i;
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
    //  line no 616 , L1957282992 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1957282992
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokevirtual org/luaj/vm2/lib/IoLib$File.read([BII)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 258, 10);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
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
    local[3].i = stack[--sp].i;
    ; 
    if(stack[--sp].i  >= 0) goto L470132045;
    ; 
    //  line no 617 , L1710191146 , bytecode index = 
    // getstatic org/luaj/vm2/lib/IoLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L470132045:
    //  line no 618 , L470132045 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[3].i;
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

void bridge_org_luaj_vm2_lib_IoLib_freadbytes__Lorg_luaj_vm2_lib_IoLib_00024File_2I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_freadbytes__Lorg_luaj_vm2_lib_IoLib_00024File_2I_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].obj, para[2].i);
}

ExceptionItem arr_extable_func_org_luaj_vm2_lib_IoLib_freaduntil__Lorg_luaj_vm2_lib_IoLib_00024File_2ZZ_Lorg_luaj_vm2_LuaValue_2[] = {
    { , , 1883}
};
ExceptionTable extable_func_org_luaj_vm2_lib_IoLib_freaduntil__Lorg_luaj_vm2_lib_IoLib_00024File_2ZZ_Lorg_luaj_vm2_LuaValue_2 = {1, arr_extable_func_org_luaj_vm2_lib_IoLib_freaduntil__Lorg_luaj_vm2_lib_IoLib_00024File_2ZZ_Lorg_luaj_vm2_LuaValue_2};

// locals: 6
// stack: 2
// args: 4
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_IoLib_freaduntil__Lorg_luaj_vm2_lib_IoLib_00024File_2ZZ_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1, s8 p2, s8 p3){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1452, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    // try catch :L558404860 L274100821 L238431319 (
    ; 
    //  line no 621 , L474933596 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 621;
    // new java/io/ByteArrayOutputStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 243);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/io/ByteArrayOutputStream.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ByteArrayOutputStream__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    L558404860:
    __frame->bytecodeIndex = 
    //  line no 624 , L558404860 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L2042917213;
    L1520656618:
    //  line no 625 , L1520656618 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 9);
        stack[sp].i = __func_p(runtime);
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
    if(stack[--sp].i  < 0) goto L274100821;
    ; 
    //  line no 626 , L237484673 , bytecode index = 
    stack[sp++].i = local[4].i;
    switch(stack[--sp].i){
        case 10:
            goto L358019805;
        case 13:
            goto L904208473;
        default:
            goto L1412656257;
    }
    L904208473:
    //  line no 627 , L904208473 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L1520656618;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual java/io/ByteArrayOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 243, 0);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1520656618;
    L358019805:
    //  line no 628 , L358019805 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  == 0) goto L274100821;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual java/io/ByteArrayOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 243, 0);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L274100821;
    L1412656257:
    //  line no 629 , L1412656257 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual java/io/ByteArrayOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 243, 0);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1520656618;
    L2042917213:
    //  line no 633 , L2042917213 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 9);
        stack[sp].i = __func_p(runtime);
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
    if(stack[--sp].i  < 0) goto L274100821;
    ; 
    //  line no 634 , L1237144823 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual java/io/ByteArrayOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 243, 0);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2042917213;
    L274100821:
    __frame->bytecodeIndex = 
    //  line no 638 , L274100821 , bytecode index = 
    goto L1801422599;
    L238431319:
    //  line no 636 , L238431319 , bytecode index = 
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 637 , L1998882269 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[4].i = stack[--sp].i;
    L1801422599:
    //  line no 639 , L1801422599 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  >= 0) goto L1511180072;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/io/ByteArrayOutputStream.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 243, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1511180072;
    ; 
    //  line no 640 , L2041264753 , bytecode index = 
    // getstatic org/luaj/vm2/lib/IoLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    goto L1851522556;
    L1511180072:
    //  line no 641 , L1511180072 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/io/ByteArrayOutputStream.toByteArray()[B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 243, 3);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaString.valueUsing([B)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueUsing___3B_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1851522556:
    //  line no 639 , L1851522556 , bytecode index = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L238431319;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_lib_IoLib_freaduntil__Lorg_luaj_vm2_lib_IoLib_00024File_2ZZ_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_freaduntil__Lorg_luaj_vm2_lib_IoLib_00024File_2ZZ_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}


// locals: 2
// stack: 3
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_IoLib_freadline__Lorg_luaj_vm2_lib_IoLib_00024File_2Z_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1, s8 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1453, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 644 , L1902455960 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 644;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/lib/IoLib.freaduntil(Lorg/luaj/vm2/lib/IoLib$File;ZZ)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freaduntil__Lorg_luaj_vm2_lib_IoLib_00024File_2ZZ_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_lib_IoLib_freadline__Lorg_luaj_vm2_lib_IoLib_00024File_2Z_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_freadline__Lorg_luaj_vm2_lib_IoLib_00024File_2Z_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 2
// stack: 3
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_IoLib_freadall__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1454, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 647 , L1622694817 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 647;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.remaining()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 648 , L1227867806 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L292958927;
    ; 
    //  line no 649 , L800493254 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L225553858;
    // getstatic org/luaj/vm2/lib/IoLib EMPTYSTRING Lorg/luaj/vm2/LuaString;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.EMPTYSTRING_40;
    sp += 1;
    goto L987595204;
    L225553858:
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokestatic org/luaj/vm2/lib/IoLib.freadbytes(Lorg/luaj/vm2/lib/IoLib$File;I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freadbytes__Lorg_luaj_vm2_lib_IoLib_00024File_2I_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L987595204:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L292958927:
    //  line no 651 , L292958927 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic org/luaj/vm2/lib/IoLib.freaduntil(Lorg/luaj/vm2/lib/IoLib$File;ZZ)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_lib_IoLib_freaduntil__Lorg_luaj_vm2_lib_IoLib_00024File_2ZZ_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_lib_IoLib_freadall__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_freadall__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 3
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_IoLib_freadnumber__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1455, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 655 , L29774113 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 655;
    // new java/io/ByteArrayOutputStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 243);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/io/ByteArrayOutputStream.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ByteArrayOutputStream__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 656 , L22668134 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2655);
    // aconst null
    rstack[sp++].obj = NULL;
    // invokestatic org/luaj/vm2/lib/IoLib.freadchars(Lorg/luaj/vm2/lib/IoLib$File;Ljava/lang/String;Ljava/io/ByteArrayOutputStream;)V
    {
        sp -= 4;
        func_org_luaj_vm2_lib_IoLib_freadchars__Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2Ljava_io_ByteArrayOutputStream_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 657 , L1474072872 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2656);
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.freadchars(Lorg/luaj/vm2/lib/IoLib$File;Ljava/lang/String;Ljava/io/ByteArrayOutputStream;)V
    {
        sp -= 4;
        func_org_luaj_vm2_lib_IoLib_freadchars__Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2Ljava_io_ByteArrayOutputStream_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 660 , L609389093 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2657);
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.freadchars(Lorg/luaj/vm2/lib/IoLib$File;Ljava/lang/String;Ljava/io/ByteArrayOutputStream;)V
    {
        sp -= 4;
        func_org_luaj_vm2_lib_IoLib_freadchars__Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2Ljava_io_ByteArrayOutputStream_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 661 , L397318359 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2278);
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.freadchars(Lorg/luaj/vm2/lib/IoLib$File;Ljava/lang/String;Ljava/io/ByteArrayOutputStream;)V
    {
        sp -= 4;
        func_org_luaj_vm2_lib_IoLib_freadchars__Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2Ljava_io_ByteArrayOutputStream_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 662 , L1495407511 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2657);
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/lib/IoLib.freadchars(Lorg/luaj/vm2/lib/IoLib$File;Ljava/lang/String;Ljava/io/ByteArrayOutputStream;)V
    {
        sp -= 4;
        func_org_luaj_vm2_lib_IoLib_freadchars__Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2Ljava_io_ByteArrayOutputStream_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 666 , L1791267914 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/ByteArrayOutputStream.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 243, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 667 , L1517758613 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L972843820;
    rstack[sp++].obj = rlocal[2].obj;
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
    // invokestatic org/luaj/vm2/lib/IoLib.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1883971879;
    L972843820:
    // getstatic org/luaj/vm2/lib/IoLib NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    L1883971879:
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

void bridge_org_luaj_vm2_lib_IoLib_freadnumber__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_IoLib_freadnumber__Lorg_luaj_vm2_lib_IoLib_00024File_2_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].obj);
}


// locals: 4
// stack: 2
// args: 4
void func_org_luaj_vm2_lib_IoLib_freadchars__Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2Ljava_io_ByteArrayOutputStream_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0, struct org_luaj_vm2_lib_IoLib_00024File* p1, struct java_lang_String* p2, struct java_io_ByteArrayOutputStream* p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1456, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    L1563634025:
    //  line no 672 , L1563634025 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 672;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.peek()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 673 , L130850024 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
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
    if(stack[--sp].i  >= 0) goto L774362927;
    ; 
    //  line no 674 , L202064342 , bytecode index = 
    method_exit(runtime);
    return;
    L774362927:
    //  line no 676 , L774362927 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/IoLib$File.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 258, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 677 , L1211586911 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(rstack[--sp].obj  == NULL) goto L1563634025;
    ; 
    //  line no 678 , L738174829 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual java/io/ByteArrayOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 243, 0);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1563634025;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_lib_IoLib_freadchars__Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2Ljava_io_ByteArrayOutputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_IoLib_freadchars__Lorg_luaj_vm2_lib_IoLib_00024File_2Ljava_lang_String_2Ljava_io_ByteArrayOutputStream_2_V(runtime, para[0].obj, para[1].obj, para[2].obj, para[3].obj);
}


// locals: 0
// stack: 4
// args: 1
void func_org_luaj_vm2_lib_IoLib__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_IoLib* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1457, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 193 , L1830969563 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 193;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2660);
    // invokestatic org/luaj/vm2/lib/IoLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/IoLib STDIN Lorg/luaj/vm2/LuaValue;
    sp -= 1;
    static_var_org_luaj_vm2_lib_IoLib.STDIN_54 = rstack[sp].obj;
    ; 
    //  line no 194 , L523051393 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2661);
    // invokestatic org/luaj/vm2/lib/IoLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/IoLib STDOUT Lorg/luaj/vm2/LuaValue;
    sp -= 1;
    static_var_org_luaj_vm2_lib_IoLib.STDOUT_55 = rstack[sp].obj;
    ; 
    //  line no 195 , L1237264838 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2662);
    // invokestatic org/luaj/vm2/lib/IoLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/IoLib STDERR Lorg/luaj/vm2/LuaValue;
    sp -= 1;
    static_var_org_luaj_vm2_lib_IoLib.STDERR_56 = rstack[sp].obj;
    ; 
    //  line no 196 , L2128961136 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2637);
    // invokestatic org/luaj/vm2/lib/IoLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/IoLib FILE Lorg/luaj/vm2/LuaValue;
    sp -= 1;
    static_var_org_luaj_vm2_lib_IoLib.FILE_57 = rstack[sp].obj;
    ; 
    //  line no 197 , L4181455 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2663);
    // invokestatic org/luaj/vm2/lib/IoLib.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/lib/IoLib CLOSED_FILE Lorg/luaj/vm2/LuaValue;
    sp -= 1;
    static_var_org_luaj_vm2_lib_IoLib.CLOSED_1FILE_58 = rstack[sp].obj;
    ; 
    //  line no 222 , L1986581856 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 925);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1467);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2580);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2627);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2664);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2616);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2665);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 739);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2666);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 320);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1456);
    // arrstore __refer  ,  L1986581856 bc index = 
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
    // putstatic org/luaj/vm2/lib/IoLib IO_NAMES [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_lib_IoLib.IO_1NAMES_79 = rstack[sp].obj;
    ; 
    //  line no 236 , L1177101170 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 925);
    // arrstore __refer  ,  L1177101170 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1467);
    // arrstore __refer  ,  L1177101170 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2627);
    // arrstore __refer  ,  L1177101170 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 739);
    // arrstore __refer  ,  L1177101170 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2667);
    // arrstore __refer  ,  L1177101170 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2668);
    // arrstore __refer  ,  L1177101170 bc index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1456);
    // arrstore __refer  ,  L1177101170 bc index = 
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
    // putstatic org/luaj/vm2/lib/IoLib FILE_NAMES [Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_lib_IoLib.FILE_1NAMES_80 = rstack[sp].obj;
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

void bridge_org_luaj_vm2_lib_IoLib__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_IoLib__clinit____V(runtime, para[0].obj);
}


