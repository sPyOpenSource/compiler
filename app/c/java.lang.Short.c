// CLASS: java/lang/Short extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_Short_static {struct java_lang_Class* TYPE_0; s16 MIN_1VALUE_1; s16 MAX_1VALUE_2;  };
struct java_lang_Short_static static_var_java_lang_Short = {NULL, 0, 0};


__refer arr_vmtable_java_lang_Short_from_java_lang_Short[] = {
    func_java_lang_Short_shortValue___S,  //0
    func_java_lang_Short_toString___Ljava_lang_String_2  //1
};
__refer arr_vmtable_java_lang_Short_from_java_lang_Object[] = {
    func_java_lang_Short_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_Object_hashCode___I  //9
};
VMTable vmtable_java_lang_Short[] = {
    {219, 2, arr_vmtable_java_lang_Short_from_java_lang_Short}, //0
    {5, 10, arr_vmtable_java_lang_Short_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_java_lang_Short__init___S_V(JThreadRuntime *runtime, s16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1224, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 16 , L706665172 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 16;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 17 , L1649847375 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/Short value S
    sp -= 2;
    ((struct java_lang_Short*)rstack[sp + 0].obj)->value_3 = stack[sp + 1].i;
    ; 
    //  line no 18 , L1153933106 , bytecode index = 
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

void bridge_java_lang_Short__init___S_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Short__init___S_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_Short* func_java_lang_Short_valueOf__S_Ljava_lang_Short_2(JThreadRuntime *runtime, struct java_lang_Short* p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1225, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 21 , L593447952 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 21;
    // new java/lang/Short
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 219);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[0].i;
    // invokespecial java/lang/Short.<init>(S)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Short__init___S_V(runtime, stack[sp + 0].i);
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

void bridge_java_lang_Short_valueOf__S_Ljava_lang_Short_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Short_valueOf__S_Ljava_lang_Short_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
s16 func_java_lang_Short_shortValue___S(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 25 , L209360730 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Short value S
    stack[sp - 1].i = ((struct java_lang_Short*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_Short_shortValue___S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Short_shortValue___S(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
struct java_lang_String* func_java_lang_Short_toString__S_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Short* p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1227, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 29 , L1971152916 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 29;
    stack[sp++].i = local[0].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    // invokestatic java/lang/Long.toString(J)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_Long_toString__J_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_java_lang_Short_toString__S_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Short_toString__S_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 4
// args: 2
struct java_lang_String* func_java_lang_Short_toHexString__S_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Short* p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1228, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 33 , L1007660652 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    stack[sp++].i = local[0].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0xffffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    // invokestatic java/lang/Long.toHexString(J)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_Long_toHexString__J_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_java_lang_Short_toHexString__S_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Short_toHexString__S_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_Short_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1229, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 37 , L1387620926 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 37;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Short value S
    stack[sp - 1].i = ((struct java_lang_Short*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    // invokestatic java/lang/Short.toString(S)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Short_toString__S_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_lang_Short_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Short_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 3
struct java_lang_String* func_java_lang_Short_toString__SI_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Short* p0, s16 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1230, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 41 , L1324173038 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 41;
    stack[sp++].i = local[0].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    // invokestatic java/lang/Long.toString(JI)Ljava/lang/String;
    {
        sp -= 4;
        rstack[sp].obj = func_java_lang_Long_toString__JI_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].i);
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

void bridge_java_lang_Short_toString__SI_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Short_toString__SI_Ljava_lang_String_2(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_java_lang_Short_parseShort__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_Short* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1231, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 45 , L1336775847 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 45;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // invokestatic java/lang/Long.parseLong(Ljava/lang/String;I)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Long_parseLong__Ljava_lang_String_2I_J(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
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

void bridge_java_lang_Short_parseShort__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Short_parseShort__Ljava_lang_String_2_I(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 2
// args: 3
s32 func_java_lang_Short_parseShort__Ljava_lang_String_2I_I(JThreadRuntime *runtime, struct java_lang_Short* p0, struct java_lang_String* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1232, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 49 , L1663488386 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 49;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/Long.parseLong(Ljava/lang/String;I)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Long_parseLong__Ljava_lang_String_2I_J(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
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

void bridge_java_lang_Short_parseShort__Ljava_lang_String_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Short_parseShort__Ljava_lang_String_2I_I(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 0
// stack: 1
// args: 1
void func_java_lang_Short__clinit____V(JThreadRuntime *runtime, struct java_lang_Short* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1233, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L1902801188 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2265);
    // invokestatic java/lang/Class.getPrimitiveClass(Ljava/lang/String;)Ljava/lang/Class;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Class_getPrimitiveClass__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Short TYPE Ljava/lang/Class;
    sp -= 1;
    static_var_java_lang_Short.TYPE_0 = rstack[sp].obj;
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

void bridge_java_lang_Short__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Short__clinit____V(runtime, para[0].obj);
}


