// CLASS: java/sql/ResultSet extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_sql_ResultSet_static {s32 FETCH_1FORWARD_0; s32 FETCH_1REVERSE_1; s32 FETCH_1UNKNOWN_2; s32 TYPE_1FORWARD_1ONLY_3; s32 TYPE_1SCROLL_1INSENSITIVE_4; s32 TYPE_1SCROLL_1SENSITIVE_5; s32 CONCUR_1READ_1ONLY_6; s32 CONCUR_1UPDATABLE_7;  };
struct java_sql_ResultSet_static static_var_java_sql_ResultSet = {0, 0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_java_sql_ResultSet_from_java_sql_ResultSet[] = {
    func_java_sql_ResultSet_next___Z,  //0
    func_java_sql_ResultSet_previous___Z,  //1
    func_java_sql_ResultSet_close___V,  //2
    func_java_sql_ResultSet_wasNull___Z,  //3
    func_java_sql_ResultSet_getString__I_Ljava_lang_String_2,  //4
    func_java_sql_ResultSet_getObject__I_Ljava_lang_Object_2,  //5
    func_java_sql_ResultSet_getBoolean__I_Z,  //6
    func_java_sql_ResultSet_getByte__I_B,  //7
    func_java_sql_ResultSet_getShort__I_S,  //8
    func_java_sql_ResultSet_getInt__I_I,  //9
    func_java_sql_ResultSet_getLong__I_J,  //10
    func_java_sql_ResultSet_getFloat__I_F,  //11
    func_java_sql_ResultSet_getDouble__I_D,  //12
    func_java_sql_ResultSet_getBigDecimal__I_Ljava_math_BigDecimal_2,  //13
    func_java_sql_ResultSet_getBigDecimal__II_Ljava_math_BigDecimal_2,  //14
    func_java_sql_ResultSet_getBytes__I__3B,  //15
    func_java_sql_ResultSet_getDate__I_Ljava_sql_Date_2,  //16
    func_java_sql_ResultSet_getTime__I_Ljava_sql_Time_2,  //17
    func_java_sql_ResultSet_getTimestamp__I_Ljava_sql_Timestamp_2,  //18
    func_java_sql_ResultSet_getAsciiStream__I_Ljava_io_InputStream_2,  //19
    func_java_sql_ResultSet_getUnicodeStream__I_Ljava_io_InputStream_2,  //20
    func_java_sql_ResultSet_getBinaryStream__I_Ljava_io_InputStream_2,  //21
    func_java_sql_ResultSet_getCharacterStream__I_Ljava_io_Reader_2,  //22
    func_java_sql_ResultSet_getString__Ljava_lang_String_2_Ljava_lang_String_2,  //23
    func_java_sql_ResultSet_getObject__Ljava_lang_String_2_Ljava_lang_Object_2,  //24
    func_java_sql_ResultSet_getBoolean__Ljava_lang_String_2_Z,  //25
    func_java_sql_ResultSet_getByte__Ljava_lang_String_2_B,  //26
    func_java_sql_ResultSet_getShort__Ljava_lang_String_2_S,  //27
    func_java_sql_ResultSet_getInt__Ljava_lang_String_2_I,  //28
    func_java_sql_ResultSet_getLong__Ljava_lang_String_2_J,  //29
    func_java_sql_ResultSet_getFloat__Ljava_lang_String_2_F,  //30
    func_java_sql_ResultSet_getDouble__Ljava_lang_String_2_D,  //31
    func_java_sql_ResultSet_getBigDecimal__Ljava_lang_String_2_Ljava_math_BigDecimal_2,  //32
    func_java_sql_ResultSet_getBigDecimal__Ljava_lang_String_2I_Ljava_math_BigDecimal_2,  //33
    func_java_sql_ResultSet_getBytes__Ljava_lang_String_2__3B,  //34
    func_java_sql_ResultSet_getDate__Ljava_lang_String_2_Ljava_sql_Date_2,  //35
    func_java_sql_ResultSet_getTime__Ljava_lang_String_2_Ljava_sql_Time_2,  //36
    func_java_sql_ResultSet_getTimestamp__Ljava_lang_String_2_Ljava_sql_Timestamp_2,  //37
    func_java_sql_ResultSet_getAsciiStream__Ljava_lang_String_2_Ljava_io_InputStream_2,  //38
    func_java_sql_ResultSet_getUnicodeStream__Ljava_lang_String_2_Ljava_io_InputStream_2,  //39
    func_java_sql_ResultSet_getBinaryStream__Ljava_lang_String_2_Ljava_io_InputStream_2,  //40
    func_java_sql_ResultSet_getCharacterStream__Ljava_lang_String_2_Ljava_io_Reader_2,  //41
    func_java_sql_ResultSet_getWarnings___Ljava_sql_SQLWarning_2,  //42
    func_java_sql_ResultSet_clearWarnings___V,  //43
    func_java_sql_ResultSet_getCursorName___Ljava_lang_String_2,  //44
    func_java_sql_ResultSet_getMetaData___Ljava_sql_ResultSetMetaData_2,  //45
    func_java_sql_ResultSet_findColumn__Ljava_lang_String_2_I,  //46
    func_java_sql_ResultSet_isBeforeFirst___Z,  //47
    func_java_sql_ResultSet_isAfterLast___Z,  //48
    func_java_sql_ResultSet_isFirst___Z,  //49
    func_java_sql_ResultSet_isLast___Z,  //50
    func_java_sql_ResultSet_beforeFirst___V,  //51
    func_java_sql_ResultSet_afterLast___V,  //52
    func_java_sql_ResultSet_first___Z,  //53
    func_java_sql_ResultSet_last___Z,  //54
    func_java_sql_ResultSet_getRow___I,  //55
    func_java_sql_ResultSet_absolute__I_Z,  //56
    func_java_sql_ResultSet_relative__I_Z,  //57
    func_java_sql_ResultSet_setFetchDirection__I_V,  //58
    func_java_sql_ResultSet_getFetchDirection___I,  //59
    func_java_sql_ResultSet_setFetchSize__I_V,  //60
    func_java_sql_ResultSet_getFetchSize___I,  //61
    func_java_sql_ResultSet_getType___I,  //62
    func_java_sql_ResultSet_getConcurrency___I,  //63
    func_java_sql_ResultSet_rowUpdated___Z,  //64
    func_java_sql_ResultSet_rowInserted___Z,  //65
    func_java_sql_ResultSet_rowDeleted___Z,  //66
    func_java_sql_ResultSet_updateNull__I_V,  //67
    func_java_sql_ResultSet_updateBoolean__IZ_V,  //68
    func_java_sql_ResultSet_updateByte__IB_V,  //69
    func_java_sql_ResultSet_updateShort__IS_V,  //70
    func_java_sql_ResultSet_updateInt__II_V,  //71
    func_java_sql_ResultSet_updateLong__IJ_V,  //72
    func_java_sql_ResultSet_updateFloat__IF_V,  //73
    func_java_sql_ResultSet_updateDouble__ID_V,  //74
    func_java_sql_ResultSet_updateBigDecimal__ILjava_math_BigDecimal_2_V,  //75
    func_java_sql_ResultSet_updateString__ILjava_lang_String_2_V,  //76
    func_java_sql_ResultSet_updateBytes__I_3B_V,  //77
    func_java_sql_ResultSet_updateDate__ILjava_sql_Date_2_V,  //78
    func_java_sql_ResultSet_updateTime__ILjava_sql_Time_2_V,  //79
    func_java_sql_ResultSet_updateTimestamp__ILjava_sql_Timestamp_2_V,  //80
    func_java_sql_ResultSet_updateAsciiStream__ILjava_io_InputStream_2I_V,  //81
    func_java_sql_ResultSet_updateBinaryStream__ILjava_io_InputStream_2I_V,  //82
    func_java_sql_ResultSet_updateCharacterStream__ILjava_io_Reader_2I_V,  //83
    func_java_sql_ResultSet_updateObject__ILjava_lang_Object_2_V,  //84
    func_java_sql_ResultSet_updateObject__ILjava_lang_Object_2I_V,  //85
    func_java_sql_ResultSet_updateNull__Ljava_lang_String_2_V,  //86
    func_java_sql_ResultSet_updateBoolean__Ljava_lang_String_2Z_V,  //87
    func_java_sql_ResultSet_updateByte__Ljava_lang_String_2B_V,  //88
    func_java_sql_ResultSet_updateShort__Ljava_lang_String_2S_V,  //89
    func_java_sql_ResultSet_updateInt__Ljava_lang_String_2I_V,  //90
    func_java_sql_ResultSet_updateLong__Ljava_lang_String_2J_V,  //91
    func_java_sql_ResultSet_updateFloat__Ljava_lang_String_2F_V,  //92
    func_java_sql_ResultSet_updateDouble__Ljava_lang_String_2D_V,  //93
    func_java_sql_ResultSet_updateBigDecimal__Ljava_lang_String_2Ljava_math_BigDecimal_2_V,  //94
    func_java_sql_ResultSet_updateString__Ljava_lang_String_2Ljava_lang_String_2_V,  //95
    func_java_sql_ResultSet_updateBytes__Ljava_lang_String_2_3B_V,  //96
    func_java_sql_ResultSet_updateDate__Ljava_lang_String_2Ljava_sql_Date_2_V,  //97
    func_java_sql_ResultSet_updateTime__Ljava_lang_String_2Ljava_sql_Time_2_V,  //98
    func_java_sql_ResultSet_updateTimestamp__Ljava_lang_String_2Ljava_sql_Timestamp_2_V,  //99
    func_java_sql_ResultSet_updateAsciiStream__Ljava_lang_String_2Ljava_io_InputStream_2I_V,  //100
    func_java_sql_ResultSet_updateBinaryStream__Ljava_lang_String_2Ljava_io_InputStream_2I_V,  //101
    func_java_sql_ResultSet_updateCharacterStream__Ljava_lang_String_2Ljava_io_Reader_2I_V,  //102
    func_java_sql_ResultSet_updateObject__Ljava_lang_String_2Ljava_lang_Object_2_V,  //103
    func_java_sql_ResultSet_updateObject__Ljava_lang_String_2Ljava_lang_Object_2I_V,  //104
    func_java_sql_ResultSet_insertRow___V,  //105
    func_java_sql_ResultSet_updateRow___V,  //106
    func_java_sql_ResultSet_deleteRow___V,  //107
    func_java_sql_ResultSet_refreshRow___V,  //108
    func_java_sql_ResultSet_cancelRowUpdates___V,  //109
    func_java_sql_ResultSet_moveToInsertRow___V,  //110
    func_java_sql_ResultSet_moveToCurrentRow___V,  //111
    func_java_sql_ResultSet_getStatement___Ljava_sql_Statement_2,  //112
    func_java_sql_ResultSet_getObject__ILjava_util_Map_2_Ljava_lang_Object_2,  //113
    func_java_sql_ResultSet_getRef__I_Ljava_sql_Ref_2,  //114
    func_java_sql_ResultSet_getBlob__I_Ljava_sql_Blob_2,  //115
    func_java_sql_ResultSet_getClob__I_Ljava_sql_Clob_2,  //116
    func_java_sql_ResultSet_getArray__I_Ljava_sql_Array_2,  //117
    func_java_sql_ResultSet_getObject__Ljava_lang_String_2Ljava_util_Map_2_Ljava_lang_Object_2,  //118
    func_java_sql_ResultSet_getRef__Ljava_lang_String_2_Ljava_sql_Ref_2,  //119
    func_java_sql_ResultSet_getBlob__Ljava_lang_String_2_Ljava_sql_Blob_2,  //120
    func_java_sql_ResultSet_getClob__Ljava_lang_String_2_Ljava_sql_Clob_2,  //121
    func_java_sql_ResultSet_getArray__Ljava_lang_String_2_Ljava_sql_Array_2,  //122
    func_java_sql_ResultSet_getDate__ILjava_util_Calendar_2_Ljava_sql_Date_2,  //123
    func_java_sql_ResultSet_getTime__ILjava_util_Calendar_2_Ljava_sql_Time_2,  //124
    func_java_sql_ResultSet_getTimestamp__ILjava_util_Calendar_2_Ljava_sql_Timestamp_2,  //125
    func_java_sql_ResultSet_getDate__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Date_2,  //126
    func_java_sql_ResultSet_getTime__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Time_2,  //127
    func_java_sql_ResultSet_getTimestamp__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Timestamp_2  //128
};
__refer arr_vmtable_java_sql_ResultSet_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_sql_ResultSet[] = {
    {270, 129, arr_vmtable_java_sql_ResultSet_from_java_sql_ResultSet}, //0
    {10, 11, arr_vmtable_java_sql_ResultSet_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_next___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 722, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_next___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_next___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_previous___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 723, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_previous___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_previous___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_close___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 724, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_close___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_wasNull___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 725, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_wasNull___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_wasNull___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_String* func_java_sql_ResultSet_getString__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 726, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getString__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getString__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_Object* func_java_sql_ResultSet_getObject__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 727, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getObject__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getObject__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_sql_ResultSet_getBoolean__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 728, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getBoolean__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getBoolean__I_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_sql_ResultSet_getByte__I_B(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 729, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getByte__I_B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getByte__I_B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s16 func_java_sql_ResultSet_getShort__I_S(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 730, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getShort__I_S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getShort__I_S(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_java_sql_ResultSet_getInt__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 731, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getInt__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getInt__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s64 func_java_sql_ResultSet_getLong__I_J(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 732, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getLong__I_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_sql_ResultSet_getLong__I_J(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
f32 func_java_sql_ResultSet_getFloat__I_F(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 733, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getFloat__I_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_sql_ResultSet_getFloat__I_F(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
f64 func_java_sql_ResultSet_getDouble__I_D(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 734, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getDouble__I_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_sql_ResultSet_getDouble__I_D(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_math_BigDecimal* func_java_sql_ResultSet_getBigDecimal__I_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 735, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBigDecimal__I_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBigDecimal__I_Ljava_math_BigDecimal_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_math_BigDecimal* func_java_sql_ResultSet_getBigDecimal__II_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 736, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBigDecimal__II_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBigDecimal__II_Ljava_math_BigDecimal_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 1
JArray * func_java_sql_ResultSet_getBytes__I__3B(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 737, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBytes__I__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBytes__I__3B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Date* func_java_sql_ResultSet_getDate__I_Ljava_sql_Date_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 738, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getDate__I_Ljava_sql_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getDate__I_Ljava_sql_Date_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Time* func_java_sql_ResultSet_getTime__I_Ljava_sql_Time_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 739, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getTime__I_Ljava_sql_Time_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getTime__I_Ljava_sql_Time_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Timestamp* func_java_sql_ResultSet_getTimestamp__I_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 740, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getTimestamp__I_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getTimestamp__I_Ljava_sql_Timestamp_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_io_InputStream* func_java_sql_ResultSet_getAsciiStream__I_Ljava_io_InputStream_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 741, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getAsciiStream__I_Ljava_io_InputStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getAsciiStream__I_Ljava_io_InputStream_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_io_InputStream* func_java_sql_ResultSet_getUnicodeStream__I_Ljava_io_InputStream_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 742, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getUnicodeStream__I_Ljava_io_InputStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getUnicodeStream__I_Ljava_io_InputStream_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_io_InputStream* func_java_sql_ResultSet_getBinaryStream__I_Ljava_io_InputStream_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 743, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBinaryStream__I_Ljava_io_InputStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBinaryStream__I_Ljava_io_InputStream_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_io_Reader* func_java_sql_ResultSet_getCharacterStream__I_Ljava_io_Reader_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 744, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getCharacterStream__I_Ljava_io_Reader_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getCharacterStream__I_Ljava_io_Reader_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_String* func_java_sql_ResultSet_getString__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 745, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getString__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getString__Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_Object* func_java_sql_ResultSet_getObject__Ljava_lang_String_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 746, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getObject__Ljava_lang_String_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getObject__Ljava_lang_String_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_sql_ResultSet_getBoolean__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 747, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getBoolean__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getBoolean__Ljava_lang_String_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_sql_ResultSet_getByte__Ljava_lang_String_2_B(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 748, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getByte__Ljava_lang_String_2_B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getByte__Ljava_lang_String_2_B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s16 func_java_sql_ResultSet_getShort__Ljava_lang_String_2_S(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 749, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getShort__Ljava_lang_String_2_S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getShort__Ljava_lang_String_2_S(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_java_sql_ResultSet_getInt__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 750, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getInt__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getInt__Ljava_lang_String_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s64 func_java_sql_ResultSet_getLong__Ljava_lang_String_2_J(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 751, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getLong__Ljava_lang_String_2_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_sql_ResultSet_getLong__Ljava_lang_String_2_J(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
f32 func_java_sql_ResultSet_getFloat__Ljava_lang_String_2_F(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 752, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getFloat__Ljava_lang_String_2_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_sql_ResultSet_getFloat__Ljava_lang_String_2_F(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
f64 func_java_sql_ResultSet_getDouble__Ljava_lang_String_2_D(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 753, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getDouble__Ljava_lang_String_2_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_sql_ResultSet_getDouble__Ljava_lang_String_2_D(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_math_BigDecimal* func_java_sql_ResultSet_getBigDecimal__Ljava_lang_String_2_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 754, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBigDecimal__Ljava_lang_String_2_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBigDecimal__Ljava_lang_String_2_Ljava_math_BigDecimal_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_math_BigDecimal* func_java_sql_ResultSet_getBigDecimal__Ljava_lang_String_2I_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 755, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBigDecimal__Ljava_lang_String_2I_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBigDecimal__Ljava_lang_String_2I_Ljava_math_BigDecimal_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 1
JArray * func_java_sql_ResultSet_getBytes__Ljava_lang_String_2__3B(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 756, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBytes__Ljava_lang_String_2__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBytes__Ljava_lang_String_2__3B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Date* func_java_sql_ResultSet_getDate__Ljava_lang_String_2_Ljava_sql_Date_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 757, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getDate__Ljava_lang_String_2_Ljava_sql_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getDate__Ljava_lang_String_2_Ljava_sql_Date_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Time* func_java_sql_ResultSet_getTime__Ljava_lang_String_2_Ljava_sql_Time_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 758, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getTime__Ljava_lang_String_2_Ljava_sql_Time_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getTime__Ljava_lang_String_2_Ljava_sql_Time_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Timestamp* func_java_sql_ResultSet_getTimestamp__Ljava_lang_String_2_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 759, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getTimestamp__Ljava_lang_String_2_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getTimestamp__Ljava_lang_String_2_Ljava_sql_Timestamp_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_io_InputStream* func_java_sql_ResultSet_getAsciiStream__Ljava_lang_String_2_Ljava_io_InputStream_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 760, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getAsciiStream__Ljava_lang_String_2_Ljava_io_InputStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getAsciiStream__Ljava_lang_String_2_Ljava_io_InputStream_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_io_InputStream* func_java_sql_ResultSet_getUnicodeStream__Ljava_lang_String_2_Ljava_io_InputStream_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 761, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getUnicodeStream__Ljava_lang_String_2_Ljava_io_InputStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getUnicodeStream__Ljava_lang_String_2_Ljava_io_InputStream_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_io_InputStream* func_java_sql_ResultSet_getBinaryStream__Ljava_lang_String_2_Ljava_io_InputStream_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 762, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBinaryStream__Ljava_lang_String_2_Ljava_io_InputStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBinaryStream__Ljava_lang_String_2_Ljava_io_InputStream_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_io_Reader* func_java_sql_ResultSet_getCharacterStream__Ljava_lang_String_2_Ljava_io_Reader_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 763, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getCharacterStream__Ljava_lang_String_2_Ljava_io_Reader_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getCharacterStream__Ljava_lang_String_2_Ljava_io_Reader_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_sql_SQLWarning* func_java_sql_ResultSet_getWarnings___Ljava_sql_SQLWarning_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 764, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getWarnings___Ljava_sql_SQLWarning_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getWarnings___Ljava_sql_SQLWarning_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_clearWarnings___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 765, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_clearWarnings___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_clearWarnings___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_java_sql_ResultSet_getCursorName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 766, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getCursorName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getCursorName___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_sql_ResultSetMetaData* func_java_sql_ResultSet_getMetaData___Ljava_sql_ResultSetMetaData_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 767, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getMetaData___Ljava_sql_ResultSetMetaData_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getMetaData___Ljava_sql_ResultSetMetaData_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_java_sql_ResultSet_findColumn__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 768, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_findColumn__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_findColumn__Ljava_lang_String_2_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_isBeforeFirst___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 769, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_isBeforeFirst___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_isBeforeFirst___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_isAfterLast___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 770, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_isAfterLast___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_isAfterLast___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_isFirst___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 771, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_isFirst___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_isFirst___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_isLast___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 772, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_isLast___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_isLast___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_beforeFirst___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 773, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_beforeFirst___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_beforeFirst___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_afterLast___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 774, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_afterLast___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_afterLast___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_first___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 775, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_first___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_first___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_last___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 776, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_last___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_last___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_sql_ResultSet_getRow___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 777, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getRow___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getRow___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_sql_ResultSet_absolute__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 778, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_absolute__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_absolute__I_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_sql_ResultSet_relative__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 779, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_relative__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_relative__I_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_java_sql_ResultSet_setFetchDirection__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 780, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_setFetchDirection__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_setFetchDirection__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_sql_ResultSet_getFetchDirection___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 781, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getFetchDirection___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getFetchDirection___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_java_sql_ResultSet_setFetchSize__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 782, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_setFetchSize__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_setFetchSize__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_sql_ResultSet_getFetchSize___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 783, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getFetchSize___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getFetchSize___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_sql_ResultSet_getType___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 784, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getType___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getType___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_sql_ResultSet_getConcurrency___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 785, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_getConcurrency___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_getConcurrency___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_rowUpdated___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 786, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_rowUpdated___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_rowUpdated___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_rowInserted___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 787, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_rowInserted___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_rowInserted___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_ResultSet_rowDeleted___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 788, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_ResultSet_rowDeleted___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_ResultSet_rowDeleted___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_java_sql_ResultSet_updateNull__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 789, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateNull__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateNull__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateBoolean__IZ_V(JThreadRuntime *runtime, s32 p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 790, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateBoolean__IZ_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateBoolean__IZ_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateByte__IB_V(JThreadRuntime *runtime, s32 p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 791, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateByte__IB_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateByte__IB_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateShort__IS_V(JThreadRuntime *runtime, s32 p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 792, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateShort__IS_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateShort__IS_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateInt__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 793, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateInt__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateInt__II_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateLong__IJ_V(JThreadRuntime *runtime, s32 p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 794, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateLong__IJ_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateLong__IJ_V(runtime, ins, para[0].j);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateFloat__IF_V(JThreadRuntime *runtime, s32 p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 795, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateFloat__IF_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateFloat__IF_V(runtime, ins, para[0].f);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateDouble__ID_V(JThreadRuntime *runtime, s32 p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 796, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateDouble__ID_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateDouble__ID_V(runtime, ins, para[0].d);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateBigDecimal__ILjava_math_BigDecimal_2_V(JThreadRuntime *runtime, s32 p0, struct java_math_BigDecimal* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 797, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateBigDecimal__ILjava_math_BigDecimal_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateBigDecimal__ILjava_math_BigDecimal_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateString__ILjava_lang_String_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 798, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateString__ILjava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateString__ILjava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateBytes__I_3B_V(JThreadRuntime *runtime, s32 p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 799, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateBytes__I_3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateBytes__I_3B_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateDate__ILjava_sql_Date_2_V(JThreadRuntime *runtime, s32 p0, struct java_sql_Date* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 800, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateDate__ILjava_sql_Date_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateDate__ILjava_sql_Date_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateTime__ILjava_sql_Time_2_V(JThreadRuntime *runtime, s32 p0, struct java_sql_Time* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 801, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateTime__ILjava_sql_Time_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateTime__ILjava_sql_Time_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateTimestamp__ILjava_sql_Timestamp_2_V(JThreadRuntime *runtime, s32 p0, struct java_sql_Timestamp* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 802, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateTimestamp__ILjava_sql_Timestamp_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateTimestamp__ILjava_sql_Timestamp_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_ResultSet_updateAsciiStream__ILjava_io_InputStream_2I_V(JThreadRuntime *runtime, s32 p0, struct java_io_InputStream* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 803, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateAsciiStream__ILjava_io_InputStream_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateAsciiStream__ILjava_io_InputStream_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_ResultSet_updateBinaryStream__ILjava_io_InputStream_2I_V(JThreadRuntime *runtime, s32 p0, struct java_io_InputStream* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 804, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateBinaryStream__ILjava_io_InputStream_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateBinaryStream__ILjava_io_InputStream_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_ResultSet_updateCharacterStream__ILjava_io_Reader_2I_V(JThreadRuntime *runtime, s32 p0, struct java_io_Reader* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 805, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateCharacterStream__ILjava_io_Reader_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateCharacterStream__ILjava_io_Reader_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateObject__ILjava_lang_Object_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 806, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateObject__ILjava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateObject__ILjava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_ResultSet_updateObject__ILjava_lang_Object_2I_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 807, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateObject__ILjava_lang_Object_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateObject__ILjava_lang_Object_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 1
void func_java_sql_ResultSet_updateNull__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 808, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateNull__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateNull__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateBoolean__Ljava_lang_String_2Z_V(JThreadRuntime *runtime, struct java_lang_String* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 809, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateBoolean__Ljava_lang_String_2Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateBoolean__Ljava_lang_String_2Z_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateByte__Ljava_lang_String_2B_V(JThreadRuntime *runtime, struct java_lang_String* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 810, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateByte__Ljava_lang_String_2B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateByte__Ljava_lang_String_2B_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateShort__Ljava_lang_String_2S_V(JThreadRuntime *runtime, struct java_lang_String* p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 811, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateShort__Ljava_lang_String_2S_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateShort__Ljava_lang_String_2S_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateInt__Ljava_lang_String_2I_V(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 812, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateInt__Ljava_lang_String_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateInt__Ljava_lang_String_2I_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateLong__Ljava_lang_String_2J_V(JThreadRuntime *runtime, struct java_lang_String* p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 813, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateLong__Ljava_lang_String_2J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateLong__Ljava_lang_String_2J_V(runtime, ins, para[0].j);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateFloat__Ljava_lang_String_2F_V(JThreadRuntime *runtime, struct java_lang_String* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 814, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateFloat__Ljava_lang_String_2F_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateFloat__Ljava_lang_String_2F_V(runtime, ins, para[0].f);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateDouble__Ljava_lang_String_2D_V(JThreadRuntime *runtime, struct java_lang_String* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 815, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateDouble__Ljava_lang_String_2D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateDouble__Ljava_lang_String_2D_V(runtime, ins, para[0].d);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateBigDecimal__Ljava_lang_String_2Ljava_math_BigDecimal_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_math_BigDecimal* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 816, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateBigDecimal__Ljava_lang_String_2Ljava_math_BigDecimal_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateBigDecimal__Ljava_lang_String_2Ljava_math_BigDecimal_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateString__Ljava_lang_String_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 817, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateString__Ljava_lang_String_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateString__Ljava_lang_String_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateBytes__Ljava_lang_String_2_3B_V(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 818, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateBytes__Ljava_lang_String_2_3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateBytes__Ljava_lang_String_2_3B_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateDate__Ljava_lang_String_2Ljava_sql_Date_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_sql_Date* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 819, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateDate__Ljava_lang_String_2Ljava_sql_Date_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateDate__Ljava_lang_String_2Ljava_sql_Date_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateTime__Ljava_lang_String_2Ljava_sql_Time_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_sql_Time* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 820, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateTime__Ljava_lang_String_2Ljava_sql_Time_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateTime__Ljava_lang_String_2Ljava_sql_Time_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateTimestamp__Ljava_lang_String_2Ljava_sql_Timestamp_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_sql_Timestamp* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 821, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateTimestamp__Ljava_lang_String_2Ljava_sql_Timestamp_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateTimestamp__Ljava_lang_String_2Ljava_sql_Timestamp_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_ResultSet_updateAsciiStream__Ljava_lang_String_2Ljava_io_InputStream_2I_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_io_InputStream* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 822, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateAsciiStream__Ljava_lang_String_2Ljava_io_InputStream_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateAsciiStream__Ljava_lang_String_2Ljava_io_InputStream_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_ResultSet_updateBinaryStream__Ljava_lang_String_2Ljava_io_InputStream_2I_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_io_InputStream* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 823, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateBinaryStream__Ljava_lang_String_2Ljava_io_InputStream_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateBinaryStream__Ljava_lang_String_2Ljava_io_InputStream_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_ResultSet_updateCharacterStream__Ljava_lang_String_2Ljava_io_Reader_2I_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_io_Reader* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 824, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateCharacterStream__Ljava_lang_String_2Ljava_io_Reader_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateCharacterStream__Ljava_lang_String_2Ljava_io_Reader_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_ResultSet_updateObject__Ljava_lang_String_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 825, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateObject__Ljava_lang_String_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateObject__Ljava_lang_String_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_ResultSet_updateObject__Ljava_lang_String_2Ljava_lang_Object_2I_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Object* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 826, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateObject__Ljava_lang_String_2Ljava_lang_Object_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateObject__Ljava_lang_String_2Ljava_lang_Object_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_insertRow___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 827, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_insertRow___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_insertRow___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_updateRow___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 828, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_updateRow___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_updateRow___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_deleteRow___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 829, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_deleteRow___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_deleteRow___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_refreshRow___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 830, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_refreshRow___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_refreshRow___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_cancelRowUpdates___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 831, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_cancelRowUpdates___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_cancelRowUpdates___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_moveToInsertRow___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 832, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_moveToInsertRow___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_moveToInsertRow___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_sql_ResultSet_moveToCurrentRow___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 833, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_ResultSet_moveToCurrentRow___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_ResultSet_moveToCurrentRow___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_sql_Statement* func_java_sql_ResultSet_getStatement___Ljava_sql_Statement_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 834, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getStatement___Ljava_sql_Statement_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getStatement___Ljava_sql_Statement_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_lang_Object* func_java_sql_ResultSet_getObject__ILjava_util_Map_2_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0, struct java_util_Map* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 835, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getObject__ILjava_util_Map_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getObject__ILjava_util_Map_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Ref* func_java_sql_ResultSet_getRef__I_Ljava_sql_Ref_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 836, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getRef__I_Ljava_sql_Ref_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getRef__I_Ljava_sql_Ref_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Blob* func_java_sql_ResultSet_getBlob__I_Ljava_sql_Blob_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 837, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBlob__I_Ljava_sql_Blob_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBlob__I_Ljava_sql_Blob_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Clob* func_java_sql_ResultSet_getClob__I_Ljava_sql_Clob_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 838, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getClob__I_Ljava_sql_Clob_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getClob__I_Ljava_sql_Clob_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Array* func_java_sql_ResultSet_getArray__I_Ljava_sql_Array_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 839, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getArray__I_Ljava_sql_Array_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getArray__I_Ljava_sql_Array_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_lang_Object* func_java_sql_ResultSet_getObject__Ljava_lang_String_2Ljava_util_Map_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_util_Map* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 840, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getObject__Ljava_lang_String_2Ljava_util_Map_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getObject__Ljava_lang_String_2Ljava_util_Map_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Ref* func_java_sql_ResultSet_getRef__Ljava_lang_String_2_Ljava_sql_Ref_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 841, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getRef__Ljava_lang_String_2_Ljava_sql_Ref_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getRef__Ljava_lang_String_2_Ljava_sql_Ref_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Blob* func_java_sql_ResultSet_getBlob__Ljava_lang_String_2_Ljava_sql_Blob_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 842, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getBlob__Ljava_lang_String_2_Ljava_sql_Blob_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getBlob__Ljava_lang_String_2_Ljava_sql_Blob_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Clob* func_java_sql_ResultSet_getClob__Ljava_lang_String_2_Ljava_sql_Clob_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 843, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getClob__Ljava_lang_String_2_Ljava_sql_Clob_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getClob__Ljava_lang_String_2_Ljava_sql_Clob_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Array* func_java_sql_ResultSet_getArray__Ljava_lang_String_2_Ljava_sql_Array_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 844, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getArray__Ljava_lang_String_2_Ljava_sql_Array_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getArray__Ljava_lang_String_2_Ljava_sql_Array_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Date* func_java_sql_ResultSet_getDate__ILjava_util_Calendar_2_Ljava_sql_Date_2(JThreadRuntime *runtime, s32 p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 845, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getDate__ILjava_util_Calendar_2_Ljava_sql_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getDate__ILjava_util_Calendar_2_Ljava_sql_Date_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Time* func_java_sql_ResultSet_getTime__ILjava_util_Calendar_2_Ljava_sql_Time_2(JThreadRuntime *runtime, s32 p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 846, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getTime__ILjava_util_Calendar_2_Ljava_sql_Time_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getTime__ILjava_util_Calendar_2_Ljava_sql_Time_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Timestamp* func_java_sql_ResultSet_getTimestamp__ILjava_util_Calendar_2_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, s32 p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 847, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getTimestamp__ILjava_util_Calendar_2_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getTimestamp__ILjava_util_Calendar_2_Ljava_sql_Timestamp_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Date* func_java_sql_ResultSet_getDate__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Date_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 848, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getDate__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getDate__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Date_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Time* func_java_sql_ResultSet_getTime__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Time_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 849, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getTime__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Time_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getTime__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Time_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Timestamp* func_java_sql_ResultSet_getTimestamp__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 850, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_ResultSet_getTimestamp__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_ResultSet_getTimestamp__Ljava_lang_String_2Ljava_util_Calendar_2_Ljava_sql_Timestamp_2(runtime, ins, para[0].obj);
}


