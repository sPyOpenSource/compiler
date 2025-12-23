// CLASS: java/sql/CallableStatement extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_sql_CallableStatement_static {};



__refer arr_vmtable_java_sql_CallableStatement_from_java_sql_CallableStatement[] = {
    func_java_sql_CallableStatement_wasNull___Z,  //0
    func_java_sql_CallableStatement_getString__I_Ljava_lang_String_2,  //1
    func_java_sql_CallableStatement_getObject__I_Ljava_lang_Object_2,  //2
    func_java_sql_CallableStatement_getObject__ILjava_util_Map_2_Ljava_lang_Object_2,  //3
    func_java_sql_CallableStatement_getBoolean__I_Z,  //4
    func_java_sql_CallableStatement_getByte__I_B,  //5
    func_java_sql_CallableStatement_getShort__I_S,  //6
    func_java_sql_CallableStatement_getInt__I_I,  //7
    func_java_sql_CallableStatement_getLong__I_J,  //8
    func_java_sql_CallableStatement_getFloat__I_F,  //9
    func_java_sql_CallableStatement_getDouble__I_D,  //10
    func_java_sql_CallableStatement_getBigDecimal__I_Ljava_math_BigDecimal_2,  //11
    func_java_sql_CallableStatement_getBigDecimal__II_Ljava_math_BigDecimal_2,  //12
    func_java_sql_CallableStatement_getBytes__I__3B,  //13
    func_java_sql_CallableStatement_getDate__I_Ljava_sql_Date_2,  //14
    func_java_sql_CallableStatement_getDate__ILjava_util_Calendar_2_Ljava_sql_Date_2,  //15
    func_java_sql_CallableStatement_getTime__I_Ljava_sql_Time_2,  //16
    func_java_sql_CallableStatement_getTime__ILjava_util_Calendar_2_Ljava_sql_Time_2,  //17
    func_java_sql_CallableStatement_getTimestamp__I_Ljava_sql_Timestamp_2,  //18
    func_java_sql_CallableStatement_getTimestamp__ILjava_util_Calendar_2_Ljava_sql_Timestamp_2,  //19
    func_java_sql_CallableStatement_getRef__I_Ljava_sql_Ref_2,  //20
    func_java_sql_CallableStatement_getBlob__I_Ljava_sql_Blob_2,  //21
    func_java_sql_CallableStatement_getClob__I_Ljava_sql_Clob_2,  //22
    func_java_sql_CallableStatement_getArray__I_Ljava_sql_Array_2,  //23
    func_java_sql_CallableStatement_registerOutParameter__II_V,  //24
    func_java_sql_CallableStatement_registerOutParameter__IILjava_lang_String_2_V,  //25
    func_java_sql_CallableStatement_registerOutParameter__III_V  //26
};
__refer arr_vmtable_java_sql_CallableStatement_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_sql_CallableStatement_from_java_sql_PreparedStatement[] = {
    func_java_sql_PreparedStatement_setNull__II_V,  //0
    func_java_sql_PreparedStatement_setNull__IILjava_lang_String_2_V,  //1
    func_java_sql_PreparedStatement_setBoolean__IZ_V,  //2
    func_java_sql_PreparedStatement_setByte__IB_V,  //3
    func_java_sql_PreparedStatement_setShort__IS_V,  //4
    func_java_sql_PreparedStatement_setInt__II_V,  //5
    func_java_sql_PreparedStatement_setLong__IJ_V,  //6
    func_java_sql_PreparedStatement_setFloat__IF_V,  //7
    func_java_sql_PreparedStatement_setDouble__ID_V,  //8
    func_java_sql_PreparedStatement_setString__ILjava_lang_String_2_V,  //9
    func_java_sql_PreparedStatement_setBytes__I_3B_V,  //10
    func_java_sql_PreparedStatement_setBigDecimal__ILjava_math_BigDecimal_2_V,  //11
    func_java_sql_PreparedStatement_setDate__ILjava_sql_Date_2_V,  //12
    func_java_sql_PreparedStatement_setDate__ILjava_sql_Date_2Ljava_util_Calendar_2_V,  //13
    func_java_sql_PreparedStatement_setTime__ILjava_sql_Time_2_V,  //14
    func_java_sql_PreparedStatement_setTime__ILjava_sql_Time_2Ljava_util_Calendar_2_V,  //15
    func_java_sql_PreparedStatement_setTimestamp__ILjava_sql_Timestamp_2_V,  //16
    func_java_sql_PreparedStatement_setTimestamp__ILjava_sql_Timestamp_2Ljava_util_Calendar_2_V,  //17
    func_java_sql_PreparedStatement_setAsciiStream__ILjava_io_InputStream_2I_V,  //18
    func_java_sql_PreparedStatement_setUnicodeStream__ILjava_io_InputStream_2I_V,  //19
    func_java_sql_PreparedStatement_setBinaryStream__ILjava_io_InputStream_2I_V,  //20
    func_java_sql_PreparedStatement_setCharacterStream__ILjava_io_Reader_2I_V,  //21
    func_java_sql_PreparedStatement_setRef__ILjava_sql_Ref_2_V,  //22
    func_java_sql_PreparedStatement_setBlob__ILjava_sql_Blob_2_V,  //23
    func_java_sql_PreparedStatement_setClob__ILjava_sql_Clob_2_V,  //24
    func_java_sql_PreparedStatement_setArray__ILjava_sql_Array_2_V,  //25
    func_java_sql_PreparedStatement_setObject__ILjava_lang_Object_2_V,  //26
    func_java_sql_PreparedStatement_setObject__ILjava_lang_Object_2I_V,  //27
    func_java_sql_PreparedStatement_setObject__ILjava_lang_Object_2II_V,  //28
    func_java_sql_PreparedStatement_addBatch___V,  //29
    func_java_sql_PreparedStatement_clearParameters___V,  //30
    func_java_sql_PreparedStatement_getMetaData___Ljava_sql_ResultSetMetaData_2,  //31
    func_java_sql_PreparedStatement_execute___Z,  //32
    func_java_sql_PreparedStatement_executeQuery___Ljava_sql_ResultSet_2,  //33
    func_java_sql_PreparedStatement_executeUpdate___I  //34
};
__refer arr_vmtable_java_sql_CallableStatement_from_java_sql_Statement[] = {
    func_java_sql_Statement_executeQuery__Ljava_lang_String_2_Ljava_sql_ResultSet_2,  //0
    func_java_sql_Statement_executeUpdate__Ljava_lang_String_2_I,  //1
    func_java_sql_Statement_close___V,  //2
    func_java_sql_Statement_getMaxFieldSize___I,  //3
    func_java_sql_Statement_setMaxFieldSize__I_V,  //4
    func_java_sql_Statement_getMaxRows___I,  //5
    func_java_sql_Statement_setMaxRows__I_V,  //6
    func_java_sql_Statement_setEscapeProcessing__Z_V,  //7
    func_java_sql_Statement_getQueryTimeout___I,  //8
    func_java_sql_Statement_setQueryTimeout__I_V,  //9
    func_java_sql_Statement_cancel___V,  //10
    func_java_sql_Statement_getWarnings___Ljava_sql_SQLWarning_2,  //11
    func_java_sql_Statement_clearWarnings___V,  //12
    func_java_sql_Statement_setCursorName__Ljava_lang_String_2_V,  //13
    func_java_sql_Statement_execute__Ljava_lang_String_2_Z,  //14
    func_java_sql_Statement_getResultSet___Ljava_sql_ResultSet_2,  //15
    func_java_sql_Statement_getUpdateCount___I,  //16
    func_java_sql_Statement_getMoreResults___Z,  //17
    func_java_sql_Statement_getFetchDirection___I,  //18
    func_java_sql_Statement_setFetchDirection__I_V,  //19
    func_java_sql_Statement_getFetchSize___I,  //20
    func_java_sql_Statement_setFetchSize__I_V,  //21
    func_java_sql_Statement_getResultSetConcurrency___I,  //22
    func_java_sql_Statement_getResultSetType___I,  //23
    func_java_sql_Statement_addBatch__Ljava_lang_String_2_V,  //24
    func_java_sql_Statement_clearBatch___V,  //25
    func_java_sql_Statement_executeBatch____3I,  //26
    func_java_sql_Statement_getConnection___Ljava_sql_Connection_2  //27
};
VMTable vmtable_java_sql_CallableStatement[] = {
    {194, 27, arr_vmtable_java_sql_CallableStatement_from_java_sql_CallableStatement}, //0
    {10, 11, arr_vmtable_java_sql_CallableStatement_from_java_lang_Object}, //1
    {195, 35, arr_vmtable_java_sql_CallableStatement_from_java_sql_PreparedStatement}, //2
    {196, 28, arr_vmtable_java_sql_CallableStatement_from_java_sql_Statement}, //3
};



// locals: 0
// stack: 0
// args: 0
s8 func_java_sql_CallableStatement_wasNull___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 466, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_CallableStatement_wasNull___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_CallableStatement_wasNull___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_String* func_java_sql_CallableStatement_getString__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 467, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getString__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getString__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_Object* func_java_sql_CallableStatement_getObject__I_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 468, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getObject__I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getObject__I_Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_lang_Object* func_java_sql_CallableStatement_getObject__ILjava_util_Map_2_Ljava_lang_Object_2(JThreadRuntime *runtime, s32 p0, struct java_util_Map* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 469, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getObject__ILjava_util_Map_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getObject__ILjava_util_Map_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_sql_CallableStatement_getBoolean__I_Z(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 470, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_CallableStatement_getBoolean__I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_CallableStatement_getBoolean__I_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_sql_CallableStatement_getByte__I_B(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 471, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_CallableStatement_getByte__I_B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_CallableStatement_getByte__I_B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s16 func_java_sql_CallableStatement_getShort__I_S(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 472, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_CallableStatement_getShort__I_S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_CallableStatement_getShort__I_S(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_java_sql_CallableStatement_getInt__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 473, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_CallableStatement_getInt__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_sql_CallableStatement_getInt__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s64 func_java_sql_CallableStatement_getLong__I_J(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 474, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_CallableStatement_getLong__I_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_sql_CallableStatement_getLong__I_J(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
f32 func_java_sql_CallableStatement_getFloat__I_F(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 475, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_CallableStatement_getFloat__I_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_sql_CallableStatement_getFloat__I_F(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
f64 func_java_sql_CallableStatement_getDouble__I_D(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 476, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_sql_CallableStatement_getDouble__I_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_sql_CallableStatement_getDouble__I_D(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_math_BigDecimal* func_java_sql_CallableStatement_getBigDecimal__I_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 477, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getBigDecimal__I_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getBigDecimal__I_Ljava_math_BigDecimal_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_math_BigDecimal* func_java_sql_CallableStatement_getBigDecimal__II_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 478, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getBigDecimal__II_Ljava_math_BigDecimal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getBigDecimal__II_Ljava_math_BigDecimal_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 1
JArray * func_java_sql_CallableStatement_getBytes__I__3B(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 479, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getBytes__I__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getBytes__I__3B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Date* func_java_sql_CallableStatement_getDate__I_Ljava_sql_Date_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 480, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getDate__I_Ljava_sql_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getDate__I_Ljava_sql_Date_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Date* func_java_sql_CallableStatement_getDate__ILjava_util_Calendar_2_Ljava_sql_Date_2(JThreadRuntime *runtime, s32 p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 481, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getDate__ILjava_util_Calendar_2_Ljava_sql_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getDate__ILjava_util_Calendar_2_Ljava_sql_Date_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Time* func_java_sql_CallableStatement_getTime__I_Ljava_sql_Time_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 482, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getTime__I_Ljava_sql_Time_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getTime__I_Ljava_sql_Time_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Time* func_java_sql_CallableStatement_getTime__ILjava_util_Calendar_2_Ljava_sql_Time_2(JThreadRuntime *runtime, s32 p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 483, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getTime__ILjava_util_Calendar_2_Ljava_sql_Time_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getTime__ILjava_util_Calendar_2_Ljava_sql_Time_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Timestamp* func_java_sql_CallableStatement_getTimestamp__I_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 484, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getTimestamp__I_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getTimestamp__I_Ljava_sql_Timestamp_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_sql_Timestamp* func_java_sql_CallableStatement_getTimestamp__ILjava_util_Calendar_2_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, s32 p0, struct java_util_Calendar* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 485, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getTimestamp__ILjava_util_Calendar_2_Ljava_sql_Timestamp_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getTimestamp__ILjava_util_Calendar_2_Ljava_sql_Timestamp_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Ref* func_java_sql_CallableStatement_getRef__I_Ljava_sql_Ref_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 486, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getRef__I_Ljava_sql_Ref_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getRef__I_Ljava_sql_Ref_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Blob* func_java_sql_CallableStatement_getBlob__I_Ljava_sql_Blob_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 487, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getBlob__I_Ljava_sql_Blob_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getBlob__I_Ljava_sql_Blob_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Clob* func_java_sql_CallableStatement_getClob__I_Ljava_sql_Clob_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 488, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getClob__I_Ljava_sql_Clob_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getClob__I_Ljava_sql_Clob_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_sql_Array* func_java_sql_CallableStatement_getArray__I_Ljava_sql_Array_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 489, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_sql_CallableStatement_getArray__I_Ljava_sql_Array_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_sql_CallableStatement_getArray__I_Ljava_sql_Array_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_java_sql_CallableStatement_registerOutParameter__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 490, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_CallableStatement_registerOutParameter__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_CallableStatement_registerOutParameter__II_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_CallableStatement_registerOutParameter__IILjava_lang_String_2_V(JThreadRuntime *runtime, s32 p0, s32 p1, struct java_lang_String* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 491, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_CallableStatement_registerOutParameter__IILjava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_CallableStatement_registerOutParameter__IILjava_lang_String_2_V(runtime, ins, para[0].i, para[1].obj);
}


// locals: 0
// stack: 0
// args: 3
void func_java_sql_CallableStatement_registerOutParameter__III_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 492, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_sql_CallableStatement_registerOutParameter__III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_sql_CallableStatement_registerOutParameter__III_V(runtime, ins, para[0].i, para[1].i);
}


