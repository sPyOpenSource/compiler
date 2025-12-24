// CLASS: java/security/cert/X509CRL extends java/security/cert/CRL
#include "metadata.h"


// generation
// globals
//struct java_security_cert_X509CRL_static {};



__refer arr_vmtable_java_security_cert_X509CRL_from_java_security_cert_X509CRL[] = {
    func_java_security_cert_X509CRL_equals__Ljava_lang_Object_2_Z,  //0
    func_java_security_cert_X509CRL_hashCode___I,  //1
    func_java_security_cert_X509CRL_getEncoded____3B,  //2
    func_java_security_cert_X509CRL_verify__Ljava_security_PublicKey_2_V,  //3
    func_java_security_cert_X509CRL_verify__Ljava_security_PublicKey_2Ljava_lang_String_2_V,  //4
    func_java_security_cert_X509CRL_getVersion___I,  //5
    func_java_security_cert_X509CRL_getIssuerDN___Ljava_security_Principal_2,  //6
    func_java_security_cert_X509CRL_getThisUpdate___Ljava_util_Date_2,  //7
    func_java_security_cert_X509CRL_getNextUpdate___Ljava_util_Date_2,  //8
    func_java_security_cert_X509CRL_getRevokedCertificate__Ljava_math_BigInteger_2_Ljava_security_cert_X509CRLEntry_2,  //9
    func_java_security_cert_X509CRL_getRevokedCertificates___Ljava_util_Set_2,  //10
    func_java_security_cert_X509CRL_getTBSCertList____3B,  //11
    func_java_security_cert_X509CRL_getSignature____3B,  //12
    func_java_security_cert_X509CRL_getSigAlgName___Ljava_lang_String_2,  //13
    func_java_security_cert_X509CRL_getSigAlgOID___Ljava_lang_String_2,  //14
    func_java_security_cert_X509CRL_getSigAlgParams____3B,  //15
    func_java_security_cert_X509CRL_hasUnsupportedCriticalExtension___Z,  //16
    func_java_security_cert_X509CRL_getCriticalExtensionOIDs___Ljava_util_Set_2,  //17
    func_java_security_cert_X509CRL_getNonCriticalExtensionOIDs___Ljava_util_Set_2,  //18
    func_java_security_cert_X509CRL_getExtensionValue__Ljava_lang_String_2__3B  //19
};
__refer arr_vmtable_java_security_cert_X509CRL_from_java_security_cert_CRL[] = {
    func_java_security_cert_CRL_getType___Ljava_lang_String_2,  //0
    func_java_security_cert_CRL_toString___Ljava_lang_String_2,  //1
    func_java_security_cert_CRL_isRevoked__Ljava_security_cert_Certificate_2_Z  //2
};
__refer arr_vmtable_java_security_cert_X509CRL_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_security_cert_X509CRL_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_security_cert_CRL_toString___Ljava_lang_String_2,  //8
    func_java_security_cert_X509CRL_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_security_cert_X509CRL_from_java_security_cert_X509Extension[] = {
    func_java_security_cert_X509CRL_hasUnsupportedCriticalExtension___Z,  //0
    func_java_security_cert_X509CRL_getCriticalExtensionOIDs___Ljava_util_Set_2,  //1
    func_java_security_cert_X509CRL_getNonCriticalExtensionOIDs___Ljava_util_Set_2,  //2
    func_java_security_cert_X509CRL_getExtensionValue__Ljava_lang_String_2__3B  //3
};
VMTable vmtable_java_security_cert_X509CRL[] = {
    {56, 20, arr_vmtable_java_security_cert_X509CRL_from_java_security_cert_X509CRL}, //0
    {57, 3, arr_vmtable_java_security_cert_X509CRL_from_java_security_cert_CRL}, //1
    {10, 11, arr_vmtable_java_security_cert_X509CRL_from_java_lang_Object}, //2
    {58, 4, arr_vmtable_java_security_cert_X509CRL_from_java_security_cert_X509Extension}, //3
};



// locals: 1
// stack: 2
// args: 0
void func_java_security_cert_X509CRL__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 175, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 96 , L1149377174 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 96;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 414);
    // invokespecial java/security/cert/CRL.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_security_cert_CRL__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 97 , L171802996 , bytecode index = 
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

void bridge_java_security_cert_X509CRL__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_cert_X509CRL__init____V(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
s8 func_java_security_cert_X509CRL_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 176, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 110 , L1932274274 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 110;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/security/cert/X509CRL
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 413);
    if(stack[--sp].i  == 0) goto L657381435;
    ; 
    //  line no 126 , L1107217291 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L657381435:
    //  line no 128 , L657381435 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
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

void bridge_java_security_cert_X509CRL_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_cert_X509CRL_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_security_cert_X509CRL_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 177, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 139 , L6444850 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 139;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_java_lang_Object_hashCode___I(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_security_cert_X509CRL_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_cert_X509CRL_hashCode___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_java_security_cert_X509CRL_getEncoded____3B(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 178, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getEncoded____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getEncoded____3B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_java_security_cert_X509CRL_verify__Ljava_security_PublicKey_2_V(JThreadRuntime *runtime, struct java_security_PublicKey* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 179, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_security_cert_X509CRL_verify__Ljava_security_PublicKey_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_cert_X509CRL_verify__Ljava_security_PublicKey_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_java_security_cert_X509CRL_verify__Ljava_security_PublicKey_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_security_PublicKey* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 180, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_security_cert_X509CRL_verify__Ljava_security_PublicKey_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_cert_X509CRL_verify__Ljava_security_PublicKey_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_security_cert_X509CRL_getVersion___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 181, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_security_cert_X509CRL_getVersion___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_cert_X509CRL_getVersion___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_security_Principal* func_java_security_cert_X509CRL_getIssuerDN___Ljava_security_Principal_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 182, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getIssuerDN___Ljava_security_Principal_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getIssuerDN___Ljava_security_Principal_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_util_Date* func_java_security_cert_X509CRL_getThisUpdate___Ljava_util_Date_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 183, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getThisUpdate___Ljava_util_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getThisUpdate___Ljava_util_Date_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_util_Date* func_java_security_cert_X509CRL_getNextUpdate___Ljava_util_Date_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 184, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getNextUpdate___Ljava_util_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getNextUpdate___Ljava_util_Date_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_security_cert_X509CRLEntry* func_java_security_cert_X509CRL_getRevokedCertificate__Ljava_math_BigInteger_2_Ljava_security_cert_X509CRLEntry_2(JThreadRuntime *runtime, struct java_math_BigInteger* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 185, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getRevokedCertificate__Ljava_math_BigInteger_2_Ljava_security_cert_X509CRLEntry_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getRevokedCertificate__Ljava_math_BigInteger_2_Ljava_security_cert_X509CRLEntry_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_util_Set* func_java_security_cert_X509CRL_getRevokedCertificates___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 186, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getRevokedCertificates___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getRevokedCertificates___Ljava_util_Set_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_java_security_cert_X509CRL_getTBSCertList____3B(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 187, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getTBSCertList____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getTBSCertList____3B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_java_security_cert_X509CRL_getSignature____3B(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 188, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getSignature____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getSignature____3B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_java_security_cert_X509CRL_getSigAlgName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 189, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getSigAlgName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getSigAlgName___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_java_security_cert_X509CRL_getSigAlgOID___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 190, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getSigAlgOID___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getSigAlgOID___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_java_security_cert_X509CRL_getSigAlgParams____3B(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 191, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_cert_X509CRL_getSigAlgParams____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getSigAlgParams____3B(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_security_cert_X509CRL_hasUnsupportedCriticalExtension___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 192, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 370 , L1716093734 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 370;
    // iconst_0
    stack[sp++].i = 0;
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

void bridge_java_security_cert_X509CRL_hasUnsupportedCriticalExtension___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_cert_X509CRL_hasUnsupportedCriticalExtension___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Set* func_java_security_cert_X509CRL_getCriticalExtensionOIDs___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 193, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 372 , L509891820 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 372;
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

void bridge_java_security_cert_X509CRL_getCriticalExtensionOIDs___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getCriticalExtensionOIDs___Ljava_util_Set_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Set* func_java_security_cert_X509CRL_getNonCriticalExtensionOIDs___Ljava_util_Set_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 194, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 374 , L11939193 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 374;
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

void bridge_java_security_cert_X509CRL_getNonCriticalExtensionOIDs___Ljava_util_Set_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getNonCriticalExtensionOIDs___Ljava_util_Set_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
JArray * func_java_security_cert_X509CRL_getExtensionValue__Ljava_lang_String_2__3B(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 195, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 376 , L1523457748 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 376;
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

void bridge_java_security_cert_X509CRL_getExtensionValue__Ljava_lang_String_2__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_cert_X509CRL_getExtensionValue__Ljava_lang_String_2__3B(runtime, ins);
}


