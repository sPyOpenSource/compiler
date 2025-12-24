// CLASS: java/security/AccessController extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_security_AccessController_static {};



__refer arr_vmtable_java_security_AccessController_from_java_security_AccessController[] = {
    func_java_security_AccessController_getContext___Ljava_security_AccessControlContext_2  //0
};
__refer arr_vmtable_java_security_AccessController_from_java_lang_Object[] = {
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
VMTable vmtable_java_security_AccessController[] = {
    {27, 1, arr_vmtable_java_security_AccessController_from_java_security_AccessController}, //0
    {10, 11, arr_vmtable_java_security_AccessController_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_security_AccessController__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 27, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 5 , L364604394 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 5;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
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

void bridge_java_security_AccessController__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_AccessController__init____V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct java_security_AccessControlContext* func_java_security_AccessController_getContext___Ljava_security_AccessControlContext_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 28, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 6 , L758013696 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 6;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 124);
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L758013696 in labeltable is :L758013696
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 6;
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

void bridge_java_security_AccessController_getContext___Ljava_security_AccessControlContext_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_AccessController_getContext___Ljava_security_AccessControlContext_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 3
struct java_lang_Object* func_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedExceptionAction_2Ljava_security_AccessControlContext_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_security_AccessController* p0, struct java_security_PrivilegedExceptionAction* p1, struct java_security_AccessControlContext* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 29, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 7 , L48914743 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 124);
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L48914743 in labeltable is :L48914743
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 7;
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

void bridge_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedExceptionAction_2Ljava_security_AccessControlContext_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedExceptionAction_2Ljava_security_AccessControlContext_2_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_Object* func_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedExceptionAction_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_security_AccessController* p0, struct java_security_PrivilegedExceptionAction* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 30, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 8 , L510109769 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 8;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 124);
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L510109769 in labeltable is :L510109769
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 8;
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

void bridge_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedExceptionAction_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedExceptionAction_2_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_Object* func_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedAction_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_security_AccessController* p0, struct java_security_PrivilegedAction* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 31, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 9 , L107456312 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 124);
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L107456312 in labeltable is :L107456312
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 9;
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

void bridge_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedAction_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_AccessController_doPrivileged__Ljava_security_PrivilegedAction_2_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj);
}


