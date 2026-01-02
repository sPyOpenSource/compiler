// CLASS: java/util/TimeZone extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_TimeZone_static {struct java_util_TimeZoneImpl* defaultZone_0; struct java_lang_String* platform_1; struct java_lang_String* classRoot_2;  };
struct java_util_TimeZone_static static_var_java_util_TimeZone = {NULL, NULL, NULL};


__refer arr_vmtable_java_util_TimeZone_from_java_util_TimeZone[] = {
    func_java_util_TimeZone_getOffset__IIIIII_I,  //0
    func_java_util_TimeZone_getRawOffset___I,  //1
    func_java_util_TimeZone_useDaylightTime___Z,  //2
    func_java_util_TimeZone_getID___Ljava_lang_String_2,  //3
    func_java_util_TimeZone_getDisplayName___Ljava_lang_String_2  //4
};
__refer arr_vmtable_java_util_TimeZone_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_util_TimeZone[] = {
    {13, 5, arr_vmtable_java_util_TimeZone_from_java_util_TimeZone}, //0
    {5, 10, arr_vmtable_java_util_TimeZone_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_util_TimeZone__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 54, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 13 , L2052915500 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 14 , L1068934215 , bytecode index = 
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

void bridge_java_util_TimeZone__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZone__init____V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 6
s32 func_java_util_TimeZone_getOffset__IIIIII_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 55, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_TimeZone_getOffset__IIIIII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TimeZone_getOffset__IIIIII_I(runtime, ins, para[0].i, para[1].i, para[2].i, para[3].i, para[4].i);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_util_TimeZone_getRawOffset___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 56, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_TimeZone_getRawOffset___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TimeZone_getRawOffset___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_util_TimeZone_useDaylightTime___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 57, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_TimeZone_useDaylightTime___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TimeZone_useDaylightTime___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_util_TimeZone_getID___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 58, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 28 , L1798286609 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 28;
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

void bridge_java_util_TimeZone_getID___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TimeZone_getID___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 2
struct java_util_TimeZone* func_java_util_TimeZone_getTimeZone__Ljava_lang_String_2_Ljava_util_TimeZone_2(JThreadRuntime *runtime, struct java_util_TimeZone* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 59, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 33 , L1945604815 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L785992331;
    ; 
    //  line no 34 , L940060004 , bytecode index = 
    // new java/lang/NullPointerException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 0);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/NullPointerException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_NullPointerException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L940060004 in labeltable is :L940060004
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 34;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L785992331:
    //  line no 36 , L785992331 , bytecode index = 
    // invokestatic java/util/TimeZone.getDefault()Ljava/util/TimeZone;
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[13].clazz);
        rstack[sp].obj = func_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[13].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 37 , L234698513 , bytecode index = 
    // getstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    rstack[sp].obj =static_var_java_util_TimeZone.defaultZone_0;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/TimeZoneImpl.getInstance(Ljava/lang/String;)Ljava/util/TimeZone;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 14, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 38 , L1121172875 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L649734728;
    ; 
    //  line no 39 , L1595953398 , bytecode index = 
    // getstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    rstack[sp].obj =static_var_java_util_TimeZone.defaultZone_0;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 138);
    // invokevirtual java/util/TimeZoneImpl.getInstance(Ljava/lang/String;)Ljava/util/TimeZone;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 14, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    L649734728:
    //  line no 41 , L649734728 , bytecode index = 
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

void bridge_java_util_TimeZone_getTimeZone__Ljava_lang_String_2_Ljava_util_TimeZone_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TimeZone_getTimeZone__Ljava_lang_String_2_Ljava_util_TimeZone_2(runtime, para[0].obj, para[1].obj);
}

ExceptionItem arr_extable_func_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2[] = {
    { , , 141}
};
ExceptionTable extable_func_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2 = {1, arr_extable_func_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2};

// locals: 1
// stack: 2
// args: 1
struct java_util_TimeZone* func_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2(JThreadRuntime *runtime, struct java_util_TimeZone* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 60, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1684106402 L335471116 L1308927845 (
    ; 
    //  line no 46 , L391447681 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 46;
    // getstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    rstack[sp].obj =static_var_java_util_TimeZone.defaultZone_0;
    sp += 1;
    if(rstack[--sp].obj  != NULL) goto L1935637221;
    L1684106402:
    __frame->bytecodeIndex = 
    //  line no 48 , L1684106402 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 142);
    // invokestatic java/lang/Class.forName(Ljava/lang/String;)Ljava/lang/Class;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Class_forName__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[0].obj = rstack[--sp].obj;
    ; 
    //  line no 50 , L403424356 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.newInstance()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 18);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/util/TimeZoneImpl
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 137);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // putstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    sp -= 1;
    static_var_java_util_TimeZone.defaultZone_0 = rstack[sp].obj;
    ; 
    //  line no 51 , L321142942 , bytecode index = 
    // getstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    rstack[sp].obj =static_var_java_util_TimeZone.defaultZone_0;
    sp += 1;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokevirtual java/util/TimeZoneImpl.getInstance(Ljava/lang/String;)Ljava/util/TimeZone;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 14, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/util/TimeZoneImpl
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 137);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // putstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    sp -= 1;
    static_var_java_util_TimeZone.defaultZone_0 = rstack[sp].obj;
    L335471116:
    __frame->bytecodeIndex = 
    //  line no 53 , L335471116 , bytecode index = 
    goto L1935637221;
    L1308927845:
    //  line no 52 , L1308927845 , bytecode index = 
    rlocal[0].obj = rstack[--sp].obj;
    L1935637221:
    //  line no 55 , L1935637221 , bytecode index = 
    // getstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    rstack[sp].obj =static_var_java_util_TimeZone.defaultZone_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1308927845;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2(runtime, para[0].obj);
}


// locals: 0
// stack: 1
// args: 1
JArray * func_java_util_TimeZone_getAvailableIDs____3Ljava_lang_String_2(JThreadRuntime *runtime, struct java_util_TimeZone* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 61, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 60 , L745160567 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 60;
    // invokestatic java/util/TimeZone.getDefault()Ljava/util/TimeZone;
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[13].clazz);
        rstack[sp].obj = func_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[13].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 61 , L610984013 , bytecode index = 
    // getstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    rstack[sp].obj =static_var_java_util_TimeZone.defaultZone_0;
    sp += 1;
    // invokevirtual java/util/TimeZoneImpl.getIDs()[Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 14, 6);
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
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_TimeZone_getAvailableIDs____3Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TimeZone_getAvailableIDs____3Ljava_lang_String_2(runtime, para[0].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_util_TimeZone_getDisplayName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 62, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 65 , L1644443712 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 65;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/TimeZone.getID()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 13, 3);
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

void bridge_java_util_TimeZone_getDisplayName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TimeZone_getDisplayName___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 1
// args: 1
void func_java_util_TimeZone__clinit____V(JThreadRuntime *runtime, struct java_util_TimeZone* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 63, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L788117692 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic java/util/TimeZone defaultZone Ljava/util/TimeZoneImpl;
    sp -= 1;
    static_var_java_util_TimeZone.defaultZone_0 = rstack[sp].obj;
    ; 
    //  line no 10 , L1566723494 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic java/util/TimeZone platform Ljava/lang/String;
    sp -= 1;
    static_var_java_util_TimeZone.platform_1 = rstack[sp].obj;
    ; 
    //  line no 11 , L510113906 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic java/util/TimeZone classRoot Ljava/lang/String;
    sp -= 1;
    static_var_java_util_TimeZone.classRoot_2 = rstack[sp].obj;
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

void bridge_java_util_TimeZone__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZone__clinit____V(runtime, para[0].obj);
}


