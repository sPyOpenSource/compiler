// CLASS: javax/security/cert/Certificate extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct javax_security_cert_Certificate_static {};



__refer arr_vmtable_javax_security_cert_Certificate_from_javax_security_cert_Certificate[] = {
    func_javax_security_cert_Certificate_getEncoded____3B  //0
};
__refer arr_vmtable_javax_security_cert_Certificate_from_java_lang_Object[] = {
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
VMTable vmtable_javax_security_cert_Certificate[] = {
    {86, 1, arr_vmtable_javax_security_cert_Certificate_from_javax_security_cert_Certificate}, //0
    {10, 11, arr_vmtable_javax_security_cert_Certificate_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_javax_security_cert_Certificate__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 280, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 2 , L1912821769 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 2;
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

void bridge_javax_security_cert_Certificate__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_javax_security_cert_Certificate__init____V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
JArray * func_javax_security_cert_Certificate_getEncoded____3B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 281, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 3 , L405215542 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 3;
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
    //     L405215542 in labeltable is :L405215542
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 3;
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

void bridge_javax_security_cert_Certificate_getEncoded____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_javax_security_cert_Certificate_getEncoded____3B(runtime, ins);
}


