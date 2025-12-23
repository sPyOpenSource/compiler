// CLASS: java/security/DummySignature extends java/security/Signature
#include "metadata.h"


// generation
// globals
//struct java_security_DummySignature_static {};



__refer arr_vmtable_java_security_DummySignature_from_java_security_DummySignature[] = {
    func_java_security_DummySignature_engineInitVerify__Ljava_security_PublicKey_2_V,  //0
    func_java_security_DummySignature_engineInitSign__Ljava_security_PrivateKey_2_V,  //1
    func_java_security_DummySignature_engineUpdate__B_V,  //2
    func_java_security_DummySignature_engineUpdate___3BII_V,  //3
    func_java_security_DummySignature_engineSign____3B,  //4
    func_java_security_DummySignature_engineVerify___3B_Z,  //5
    func_java_security_DummySignature_engineSetParameter__Ljava_lang_String_2Ljava_lang_Object_2_V,  //6
    func_java_security_DummySignature_engineGetParameter__Ljava_lang_String_2_Ljava_lang_Object_2  //7
};
__refer arr_vmtable_java_security_DummySignature_from_java_security_Signature[] = {
    func_java_security_Signature_getProvider___Ljava_security_Provider_2,  //0
    func_java_security_Signature_initVerify__Ljava_security_PublicKey_2_V,  //1
    func_java_security_Signature_initVerify__Ljava_security_cert_Certificate_2_V,  //2
    func_java_security_Signature_initSign__Ljava_security_PrivateKey_2_V,  //3
    func_java_security_Signature_initSign__Ljava_security_PrivateKey_2Ljava_security_SecureRandom_2_V,  //4
    func_java_security_Signature_sign____3B,  //5
    func_java_security_Signature_sign___3BII_I,  //6
    func_java_security_Signature_verify___3B_Z,  //7
    func_java_security_Signature_update__B_V,  //8
    func_java_security_Signature_update___3B_V,  //9
    func_java_security_Signature_update___3BII_V,  //10
    func_java_security_Signature_getAlgorithm___Ljava_lang_String_2,  //11
    func_java_security_Signature_toString___Ljava_lang_String_2,  //12
    func_java_security_Signature_setParameter__Ljava_lang_String_2Ljava_lang_Object_2_V,  //13
    func_java_security_Signature_setParameter__Ljava_security_spec_AlgorithmParameterSpec_2_V,  //14
    func_java_security_Signature_getParameter__Ljava_lang_String_2_Ljava_lang_Object_2,  //15
    func_java_security_Signature_clone___Ljava_lang_Object_2  //16
};
__refer arr_vmtable_java_security_DummySignature_from_java_security_SignatureSpi[] = {
    func_java_security_DummySignature_engineInitVerify__Ljava_security_PublicKey_2_V,  //0
    func_java_security_DummySignature_engineInitSign__Ljava_security_PrivateKey_2_V,  //1
    func_java_security_SignatureSpi_engineInitSign__Ljava_security_PrivateKey_2Ljava_security_SecureRandom_2_V,  //2
    func_java_security_DummySignature_engineUpdate__B_V,  //3
    func_java_security_DummySignature_engineUpdate___3BII_V,  //4
    func_java_security_DummySignature_engineSign____3B,  //5
    func_java_security_SignatureSpi_engineSign___3BII_I,  //6
    func_java_security_DummySignature_engineVerify___3B_Z,  //7
    func_java_security_DummySignature_engineSetParameter__Ljava_lang_String_2Ljava_lang_Object_2_V,  //8
    func_java_security_SignatureSpi_engineSetParameter__Ljava_security_spec_AlgorithmParameterSpec_2_V,  //9
    func_java_security_DummySignature_engineGetParameter__Ljava_lang_String_2_Ljava_lang_Object_2,  //10
    func_java_security_Signature_clone___Ljava_lang_Object_2  //11
};
__refer arr_vmtable_java_security_DummySignature_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_security_Signature_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_security_Signature_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_security_DummySignature[] = {
    {220, 8, arr_vmtable_java_security_DummySignature_from_java_security_DummySignature}, //0
    {221, 17, arr_vmtable_java_security_DummySignature_from_java_security_Signature}, //1
    {219, 12, arr_vmtable_java_security_DummySignature_from_java_security_SignatureSpi}, //2
    {10, 11, arr_vmtable_java_security_DummySignature_from_java_lang_Object}, //3
};



// locals: 3
// stack: 2
// args: 2
void func_java_security_DummySignature__init___Ljava_security_SignatureSpi_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_security_SignatureSpi* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 546, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 36 , L1003693033 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 36;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/security/Signature.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_security_Signature__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 32 , L967576586 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    sp -= 2;
    ((struct java_security_DummySignature*)rstack[sp + 0].obj)->sigSpi_7 = rstack[sp + 1].obj;
    ; 
    //  line no 37 , L209429254 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    sp -= 2;
    ((struct java_security_DummySignature*)rstack[sp + 0].obj)->sigSpi_7 = rstack[sp + 1].obj;
    ; 
    //  line no 38 , L1341706533 , bytecode index = 
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

void bridge_java_security_DummySignature__init___Ljava_security_SignatureSpi_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DummySignature__init___Ljava_security_SignatureSpi_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
void func_java_security_DummySignature_engineInitVerify__Ljava_security_PublicKey_2_V(JThreadRuntime *runtime, struct java_security_PublicKey* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 547, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 43 , L872669868 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    rstack[sp - 1].obj = ((struct java_security_DummySignature*)rstack[sp - 1].obj)->sigSpi_7;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/security/SignatureSpi.engineInitVerify(Ljava/security/PublicKey;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_security_PublicKey*) = find_method(__ins->vm_table, 219, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 44 , L1706099897 , bytecode index = 
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

void bridge_java_security_DummySignature_engineInitVerify__Ljava_security_PublicKey_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DummySignature_engineInitVerify__Ljava_security_PublicKey_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_security_DummySignature_engineInitSign__Ljava_security_PrivateKey_2_V(JThreadRuntime *runtime, struct java_security_PrivateKey* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 548, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 49 , L846974653 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 49;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    rstack[sp - 1].obj = ((struct java_security_DummySignature*)rstack[sp - 1].obj)->sigSpi_7;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/security/SignatureSpi.engineInitSign(Ljava/security/PrivateKey;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_security_PrivateKey*) = find_method(__ins->vm_table, 219, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 50 , L432430300 , bytecode index = 
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

void bridge_java_security_DummySignature_engineInitSign__Ljava_security_PrivateKey_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DummySignature_engineInitSign__Ljava_security_PrivateKey_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_security_DummySignature_engineUpdate__B_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 549, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 55 , L1414549197 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 55;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    rstack[sp - 1].obj = ((struct java_security_DummySignature*)rstack[sp - 1].obj)->sigSpi_7;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual java/security/SignatureSpi.engineUpdate(B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 219, 3);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 56 , L951221468 , bytecode index = 
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

void bridge_java_security_DummySignature_engineUpdate__B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DummySignature_engineUpdate__B_V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 3
void func_java_security_DummySignature_engineUpdate___3BII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 550, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 61 , L532048323 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 61;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    rstack[sp - 1].obj = ((struct java_security_DummySignature*)rstack[sp - 1].obj)->sigSpi_7;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual java/security/SignatureSpi.engineUpdate([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 219, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 62 , L1237740254 , bytecode index = 
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

void bridge_java_security_DummySignature_engineUpdate___3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DummySignature_engineUpdate___3BII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
JArray * func_java_security_DummySignature_engineSign____3B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 551, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 66 , L1046545660 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 66;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    rstack[sp - 1].obj = ((struct java_security_DummySignature*)rstack[sp - 1].obj)->sigSpi_7;
    sp += 0;
    // invokevirtual java/security/SignatureSpi.engineSign()[B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 219, 5);
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

void bridge_java_security_DummySignature_engineSign____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_DummySignature_engineSign____3B(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_security_DummySignature_engineVerify___3B_Z(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 552, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 72 , L1759482496 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 72;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    rstack[sp - 1].obj = ((struct java_security_DummySignature*)rstack[sp - 1].obj)->sigSpi_7;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/security/SignatureSpi.engineVerify([B)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 219, 7);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_java_security_DummySignature_engineVerify___3B_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_DummySignature_engineVerify___3B_Z(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_java_security_DummySignature_engineSetParameter__Ljava_lang_String_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 553, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 78 , L1902430796 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 78;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    rstack[sp - 1].obj = ((struct java_security_DummySignature*)rstack[sp - 1].obj)->sigSpi_7;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/security/SignatureSpi.engineSetParameter(Ljava/lang/String;Ljava/lang/Object;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct java_lang_Object*) = find_method(__ins->vm_table, 219, 8);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 79 , L1329315688 , bytecode index = 
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

void bridge_java_security_DummySignature_engineSetParameter__Ljava_lang_String_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_DummySignature_engineSetParameter__Ljava_lang_String_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_Object* func_java_security_DummySignature_engineGetParameter__Ljava_lang_String_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 554, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 84 , L1066513687 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 84;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/DummySignature sigSpi Ljava/security/SignatureSpi;
    rstack[sp - 1].obj = ((struct java_security_DummySignature*)rstack[sp - 1].obj)->sigSpi_7;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/security/SignatureSpi.engineGetParameter(Ljava/lang/String;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 219, 10);
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

void bridge_java_security_DummySignature_engineGetParameter__Ljava_lang_String_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_DummySignature_engineGetParameter__Ljava_lang_String_2_Ljava_lang_Object_2(runtime, ins);
}


