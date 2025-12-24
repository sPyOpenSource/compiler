// CLASS: jx/db/parser/Parser extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_db_parser_Parser_static {};



__refer arr_vmtable_jx_db_parser_Parser_from_jx_db_parser_Parser[] = {
    func_jx_db_parser_Parser_executeUpdate__Ljava_lang_String_2_V,  //0
    func_jx_db_parser_Parser_executeQuery__Ljava_lang_String_2_Ljx_db_parser_JXResultSet_2,  //1
    func_jx_db_parser_Parser_execute__Ljava_lang_String_2_Ljx_db_parser_JXResultSet_2  //2
};
__refer arr_vmtable_jx_db_parser_Parser_from_java_lang_Object[] = {
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
VMTable vmtable_jx_db_parser_Parser[] = {
    {45, 3, arr_vmtable_jx_db_parser_Parser_from_jx_db_parser_Parser}, //0
    {10, 11, arr_vmtable_jx_db_parser_Parser_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_jx_db_parser_Parser__init___Ljx_db_Database_2_V(JThreadRuntime *runtime, struct jx_db_Database* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 169, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 11 , L1641415002 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 11;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 12 , L623247230 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/db/parser/Parser db Ljx/db/Database;
    sp -= 2;
    ((struct jx_db_parser_Parser*)rstack[sp + 0].obj)->db_0 = rstack[sp + 1].obj;
    ; 
    //  line no 13 , L1380806038 , bytecode index = 
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

void bridge_jx_db_parser_Parser__init___Ljx_db_Database_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_db_parser_Parser__init___Ljx_db_Database_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_db_parser_Parser_executeUpdate__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 170, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 15 , L1151844284 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual jx/db/parser/Parser.execute(Ljava/lang/String;)Ljx/db/parser/JXResultSet;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_db_parser_JXResultSet* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 45, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 16 , L1324578393 , bytecode index = 
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

void bridge_jx_db_parser_Parser_executeUpdate__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_db_parser_Parser_executeUpdate__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct jx_db_parser_JXResultSet* func_jx_db_parser_Parser_executeQuery__Ljava_lang_String_2_Ljx_db_parser_JXResultSet_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 171, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 18 , L931496835 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual jx/db/parser/Parser.execute(Ljava/lang/String;)Ljx/db/parser/JXResultSet;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_db_parser_JXResultSet* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 45, 2);
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

void bridge_jx_db_parser_Parser_executeQuery__Ljava_lang_String_2_Ljx_db_parser_JXResultSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_db_parser_Parser_executeQuery__Ljava_lang_String_2_Ljx_db_parser_JXResultSet_2(runtime, ins);
}


// locals: 14
// stack: 5
// args: 1
struct jx_db_parser_JXResultSet* func_jx_db_parser_Parser_execute__Ljava_lang_String_2_Ljx_db_parser_JXResultSet_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[14] = {0};
    RStackItem rlocal[14] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 172, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 22 , L464676531 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 22;
    // new jx/db/parser/ParseHelper
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 46);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.trim()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 9, 23);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/db/parser/ParseHelper.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_db_parser_ParseHelper__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 23 , L812446698 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.nextToken()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 25 , L737077247 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 370);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1362546706;
    ; 
    //  line no 26 , L1496949625 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.nextToken()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 27 , L236840983 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 371);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1376790324;
    ; 
    //  line no 28 , L893504292 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.nextToken()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 29 , L561480862 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 372);
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 30 , L1087081975 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 373);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 31 , L330382173 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.expectParens()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 32 , L680712932 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.splitByComma()[Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 33 , L895281180 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L895281180
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(374));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 34 , L694452085 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L694452085
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(83));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 35 , L857068247 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L857068247
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(83));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 37 , L225344427 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[10].i = stack[--sp].i;
    L1604353554:
    stack[sp++].i = local[10].i;
    rstack[sp++].obj = rlocal[6].obj;
    // arraylength  label  L1604353554
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1437941060;
    ; 
    //  line no 38 , L1210830415 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 375);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[10].i;
    // arrload __refer  ,  L1210830415 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 39 , L912672706 , bytecode index = 
    // new jx/db/parser/ParseHelper
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 46);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[10].i;
    // arrload __refer  ,  L912672706 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokespecial jx/db/parser/ParseHelper.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_db_parser_ParseHelper__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[11].obj = rstack[--sp].obj;
    ; 
    //  line no 40 , L1785397234 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[10].i;
    rstack[sp++].obj = rlocal[11].obj;
    // invokevirtual jx/db/parser/ParseHelper.nextToken()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1785397234 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 41 , L373928166 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 376);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[10].i;
    // arrload __refer  ,  L373928166 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 42 , L8805846 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
    // invokevirtual jx/db/parser/ParseHelper.nextToken()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/String.toLowerCase()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 9, 21);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[12].obj = rstack[--sp].obj;
    ; 
    //  line no 43 , L81412691 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 377);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 44 , L963815509 , bytecode index = 
    rstack[sp++].obj = rlocal[12].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 378);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1659367709;
    ; 
    //  line no 45 , L1346201722 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    stack[sp++].i = local[10].i;
    // iconst_0
    stack[sp++].i = 0;
    // arrstore s32  ,  L1346201722 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 46 , L111374580 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[10].i;
    // iconst_4
    stack[sp++].i = 4;
    // arrstore s32  ,  L111374580 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    goto L717176949;
    L1659367709:
    //  line no 47 , L1659367709 , bytecode index = 
    rstack[sp++].obj = rlocal[12].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 379);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1997353766;
    ; 
    //  line no 48 , L1288235781 , bytecode index = 
    // new jx/db/parser/ParseException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 381);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 382);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/db/parser/ParseException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_db_parser_ParseException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1288235781 in labeltable is :L1288235781
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 48;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1997353766:
    //  line no 50 , L1997353766 , bytecode index = 
    // new jx/db/parser/ParseException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 383);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 382);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/db/parser/ParseException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_db_parser_ParseException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1997353766 in labeltable is :L1997353766
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 50;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L717176949:
    //  line no 37 , L717176949 , bytecode index = 
    // iinc slot 10 value 1
    local[10].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1604353554;
    L1437941060:
    //  line no 53 , L1437941060 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/db/parser/Parser db Ljx/db/Database;
    rstack[sp - 1].obj = ((struct jx_db_parser_Parser*)rstack[sp - 1].obj)->db_0;
    sp += 0;
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[7].obj;
    rstack[sp++].obj = rlocal[9].obj;
    rstack[sp++].obj = rlocal[8].obj;
    // invokeinterface jx/db/Database.createTable(Ljava/lang/String;[Ljava/lang/String;[I[I)Ljx/db/Table;
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_db_Table* (*__func_p) (JThreadRuntime *,struct java_lang_String*,JArray *,JArray *,JArray *) = find_method(__ins->vm_table, 48, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[10].obj = rstack[--sp].obj;
    ; 
    //  line no 54 , L1374754488 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1376790324:
    //  line no 55 , L1376790324 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 385);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L27084827;
    ; 
    //  line no 56 , L530042637 , bytecode index = 
    // new jx/db/parser/ParseException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 386);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 382);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/db/parser/ParseException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_db_parser_ParseException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L530042637 in labeltable is :L530042637
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 56;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L27084827:
    //  line no 57 , L27084827 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 387);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L336371513;
    ; 
    //  line no 58 , L1301352406 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 385);
    // invokevirtual jx/db/parser/ParseHelper.expectToken(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 46, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 59 , L640113647 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.nextToken()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 60 , L124323713 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 388);
    // invokevirtual jx/db/parser/ParseHelper.expectToken(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 46, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 61 , L2011997442 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.nextToken()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 62 , L843512726 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.expectParens()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 63 , L773989906 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.splitByComma()[Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 64 , L1631086936 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/db/parser/Parser db Ljx/db/Database;
    rstack[sp - 1].obj = ((struct jx_db_parser_Parser*)rstack[sp - 1].obj)->db_0;
    sp += 0;
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface jx/db/Database.getTable(Ljava/lang/String;)Ljx/db/Table;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_db_Table* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 66 , L1944978632 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // arraylength  label  L1944978632
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(83));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 67 , L1987169128 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    // invokeinterface jx/db/Table.getTupleDescriptor()Ljx/db/TupleDescriptor;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_db_TupleDescriptor* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 49, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[10].obj = rstack[--sp].obj;
    ; 
    //  line no 68 , L1239183618 , bytecode index = 
    rstack[sp++].obj = rlocal[10].obj;
    // invokeinterface jx/db/TupleDescriptor.getCount()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    local[11].i = stack[--sp].i;
    ; 
    //  line no 69 , L1804379080 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[12].i = stack[--sp].i;
    L1757880885:
    stack[sp++].i = local[12].i;
    rstack[sp++].obj = rlocal[7].obj;
    // arraylength  label  L1757880885
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L278240974;
    ; 
    //  line no 70 , L980138431 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 391);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[12].i;
    // arrload __refer  ,  L980138431 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 71 , L888655833 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[12].i;
    // iconst_-1
    stack[sp++].i = -1;
    // arrstore s32  ,  L888655833 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 72 , L1710265848 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[13].i = stack[--sp].i;
    L1504642150:
    stack[sp++].i = local[13].i;
    stack[sp++].i = local[11].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1047460013;
    ; 
    //  line no 73 , L879583678 , bytecode index = 
    rstack[sp++].obj = rlocal[10].obj;
    stack[sp++].i = local[13].i;
    // invokeinterface jx/db/TupleDescriptor.getName(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[12].i;
    // arrload __refer  ,  L879583678 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1431530910;
    ; 
    //  line no 74 , L1954471782 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[12].i;
    stack[sp++].i = local[13].i;
    // arrstore s32  ,  L1954471782 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 75 , L1025309396 , bytecode index = 
    goto L1047460013;
    L1431530910:
    //  line no 72 , L1431530910 , bytecode index = 
    // iinc slot 13 value 1
    local[13].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1504642150;
    L1047460013:
    //  line no 78 , L1047460013 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[12].i;
    // arrload s32  ,  L1047460013 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1646464088;
    // new jx/db/parser/ParseException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 392);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[12].i;
    // arrload __refer  ,  L1047460013 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/db/parser/ParseException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_db_parser_ParseException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1047460013 in labeltable is :L1047460013
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 78;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1646464088:
    //  line no 69 , L1646464088 , bytecode index = 
    // iinc slot 12 value 1
    local[12].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1757880885;
    L278240974:
    //  line no 80 , L278240974 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[9].obj;
    // invokeinterface jx/db/Table.createIndex(IZ[I)Ljx/db/Index;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_db_Index* (*__func_p) (JThreadRuntime *,s32,s8,JArray *) = find_method(__ins->vm_table, 49, 0);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[12].obj = rstack[--sp].obj;
    ; 
    //  line no 81 , L752001567 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L336371513:
    //  line no 83 , L336371513 , bytecode index = 
    // new jx/db/parser/ParseException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 386);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 382);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/db/parser/ParseException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_db_parser_ParseException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L336371513 in labeltable is :L336371513
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 83;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1362546706:
    //  line no 85 , L1362546706 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 393);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L777379084;
    ; 
    //  line no 120 , L1950701640 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L777379084:
    //  line no 121 , L777379084 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 394);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L243194708;
    ; 
    //  line no 122 , L931480286 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 395);
    // invokevirtual jx/db/parser/ParseHelper.expectToken(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 46, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 123 , L926434463 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.nextToken()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 124 , L1776409896 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 396);
    // invokevirtual jx/db/parser/ParseHelper.expectToken(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 46, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 125 , L297602875 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.expectParens()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 2);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 126 , L204684384 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual jx/db/parser/ParseHelper.splitByComma()[Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 46, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 127 , L2044366277 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/db/parser/Parser db Ljx/db/Database;
    rstack[sp - 1].obj = ((struct jx_db_parser_Parser*)rstack[sp - 1].obj)->db_0;
    sp += 0;
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface jx/db/Database.getTable(Ljava/lang/String;)Ljx/db/Table;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_db_Table* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 128 , L515184459 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface jx/db/Table.createTuple()Ljx/db/TupleWriter;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_db_TupleWriter* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 49, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 129 , L1728579441 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[8].i = stack[--sp].i;
    L1926096844:
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[5].obj;
    // arraylength  label  L1926096844
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1607792885;
    ; 
    //  line no 130 , L1768792843 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[8].i;
    // arrload __refer  ,  L1768792843 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Integer.parseInt(Ljava/lang/String;)I
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Integer_parseInt__Ljava_lang_String_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface jx/db/TupleWriter.setField(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 51, 1);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 129 , L1316557528 , bytecode index = 
    // iinc slot 8 value 1
    local[8].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1926096844;
    L1607792885:
    //  line no 133 , L1607792885 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    // invokeinterface jx/db/TupleWriter.close()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 51, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 134 , L1402433372 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L243194708:
    //  line no 136 , L243194708 , bytecode index = 
    // new jx/db/parser/ParseException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 398);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 382);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/db/parser/ParseException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_db_parser_ParseException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L243194708 in labeltable is :L243194708
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 136;
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
    return NULL;
}

void bridge_jx_db_parser_Parser_execute__Ljava_lang_String_2_Ljx_db_parser_JXResultSet_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_db_parser_Parser_execute__Ljava_lang_String_2_Ljx_db_parser_JXResultSet_2(runtime, ins);
}


