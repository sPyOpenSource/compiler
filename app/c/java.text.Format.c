// CLASS: java/text/Format extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_text_Format_static {};



__refer arr_vmtable_java_text_Format_from_java_text_Format[] = {
    func_java_text_Format_format__Ljava_lang_Object_2_Ljava_lang_String_2,  //0
    func_java_text_Format_format__Ljava_lang_Object_2Ljava_lang_StringBuffer_2Ljava_text_FieldPosition_2_Ljava_lang_StringBuffer_2,  //1
    func_java_text_Format_parseObject__Ljava_lang_String_2_Ljava_lang_Object_2,  //2
    func_java_text_Format_parseObject__Ljava_lang_String_2Ljava_text_ParsePosition_2_Ljava_lang_Object_2,  //3
    func_java_text_Format_clone___Ljava_lang_Object_2  //4
};
__refer arr_vmtable_java_text_Format_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_text_Format_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_text_Format_from_java_io_Serializable[] = {
    NULL
};
__refer arr_vmtable_java_text_Format_from_java_lang_Cloneable[] = {
    NULL
};
VMTable vmtable_java_text_Format[] = {
    {146, 5, arr_vmtable_java_text_Format_from_java_text_Format}, //0
    {10, 11, arr_vmtable_java_text_Format_from_java_lang_Object}, //1
    {64, 0, arr_vmtable_java_text_Format_from_java_io_Serializable}, //2
    {69, 0, arr_vmtable_java_text_Format_from_java_lang_Cloneable}, //3
};



// locals: 1
// stack: 1
// args: 0
void func_java_text_Format__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 401, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 65 , L136157810 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 65;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 67 , L122155649 , bytecode index = 
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

void bridge_java_text_Format__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_text_Format__init____V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 1
struct java_lang_String* func_java_text_Format_format__Ljava_lang_Object_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 402, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 87 , L748842359 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 87;
    // new java/lang/StringBuffer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 66);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 612);
    // invokespecial java/lang/StringBuffer.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuffer__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 88 , L1208532123 , bytecode index = 
    // new java/text/FieldPosition
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 145);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial java/text/FieldPosition.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_text_FieldPosition__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 90 , L1893960929 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/text/Format.format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_StringBuffer*,struct java_text_FieldPosition*) = find_method(__ins->vm_table, 146, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 91 , L749282235 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/StringBuffer.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 3);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime);
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

void bridge_java_text_Format_format__Ljava_lang_Object_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_text_Format_format__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
struct java_lang_StringBuffer* func_java_text_Format_format__Ljava_lang_Object_2Ljava_lang_StringBuffer_2Ljava_text_FieldPosition_2_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_StringBuffer* p1, struct java_text_FieldPosition* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 403, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_text_Format_format__Ljava_lang_Object_2Ljava_lang_StringBuffer_2Ljava_text_FieldPosition_2_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_text_Format_format__Ljava_lang_Object_2Ljava_lang_StringBuffer_2Ljava_text_FieldPosition_2_Ljava_lang_StringBuffer_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 5
// args: 1
struct java_lang_Object* func_java_text_Format_parseObject__Ljava_lang_String_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 404, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 127 , L515809288 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 127;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // new java/text/ParsePosition
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 147);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial java/text/ParsePosition.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_text_ParsePosition__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/text/Format.parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct java_text_ParsePosition*) = find_method(__ins->vm_table, 146, 3);
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

void bridge_java_text_Format_parseObject__Ljava_lang_String_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_text_Format_parseObject__Ljava_lang_String_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_lang_Object* func_java_text_Format_parseObject__Ljava_lang_String_2Ljava_text_ParsePosition_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_text_ParsePosition* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 405, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_text_Format_parseObject__Ljava_lang_String_2Ljava_text_ParsePosition_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_text_Format_parseObject__Ljava_lang_String_2Ljava_text_ParsePosition_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}

ExceptionItem arr_extable_func_java_text_Format_clone___Ljava_lang_Object_2[] = {
    { , , 882}
};
ExceptionTable extable_func_java_text_Format_clone___Ljava_lang_Object_2 = {1, arr_extable_func_java_text_Format_clone___Ljava_lang_Object_2};

// locals: 2
// stack: 1
// args: 0
struct java_lang_Object* func_java_text_Format_clone___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 406, &rstack[0], &rlocal[0], &sp);
    // try catch :L394785440 L2112233878 L372469954 (
    L394785440:
    __frame->bytecodeIndex = 
    //  line no 158 , L394785440 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 158;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.clone()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_Object_clone___Ljava_lang_Object_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2112233878:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L372469954:
    //  line no 160 , L372469954 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 162 , L1371495133 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L372469954;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_text_Format_clone___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_text_Format_clone___Ljava_lang_Object_2(runtime, ins);
}


