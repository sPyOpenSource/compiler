// CLASS: java/security/KeyPair extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_security_KeyPair_static {};



__refer arr_vmtable_java_security_KeyPair_from_java_security_KeyPair[] = {
    func_java_security_KeyPair_getPublic___Ljava_security_PublicKey_2,  //0
    func_java_security_KeyPair_getPrivate___Ljava_security_PrivateKey_2  //1
};
__refer arr_vmtable_java_security_KeyPair_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_security_KeyPair_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_java_security_KeyPair[] = {
    {150, 2, arr_vmtable_java_security_KeyPair_from_java_security_KeyPair}, //0
    {10, 11, arr_vmtable_java_security_KeyPair_from_java_lang_Object}, //1
    {64, 0, arr_vmtable_java_security_KeyPair_from_java_io_Serializable}, //2
};



// locals: 3
// stack: 2
// args: 2
void func_java_security_KeyPair__init___Ljava_security_PublicKey_2Ljava_security_PrivateKey_2_V(JThreadRuntime *runtime, struct java_security_PublicKey* p0, struct java_security_PrivateKey* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 408, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 52 , L208043846 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 52;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 53 , L1371376476 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/security/KeyPair publicKey Ljava/security/PublicKey;
    sp -= 2;
    ((struct java_security_KeyPair*)rstack[sp + 0].obj)->publicKey_0 = rstack[sp + 1].obj;
    ; 
    //  line no 54 , L2068897588 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/security/KeyPair privateKey Ljava/security/PrivateKey;
    sp -= 2;
    ((struct java_security_KeyPair*)rstack[sp + 0].obj)->privateKey_1 = rstack[sp + 1].obj;
    ; 
    //  line no 55 , L457247584 , bytecode index = 
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

void bridge_java_security_KeyPair__init___Ljava_security_PublicKey_2Ljava_security_PrivateKey_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_KeyPair__init___Ljava_security_PublicKey_2Ljava_security_PrivateKey_2_V(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_security_PublicKey* func_java_security_KeyPair_getPublic___Ljava_security_PublicKey_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 64 , L431506362 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/KeyPair publicKey Ljava/security/PublicKey;
    rstack[sp - 1].obj = ((struct java_security_KeyPair*)rstack[sp - 1].obj)->publicKey_0;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_security_KeyPair_getPublic___Ljava_security_PublicKey_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_KeyPair_getPublic___Ljava_security_PublicKey_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_security_PrivateKey* func_java_security_KeyPair_getPrivate___Ljava_security_PrivateKey_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 74 , L2003147568 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/KeyPair privateKey Ljava/security/PrivateKey;
    rstack[sp - 1].obj = ((struct java_security_KeyPair*)rstack[sp - 1].obj)->privateKey_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_security_KeyPair_getPrivate___Ljava_security_PrivateKey_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_KeyPair_getPrivate___Ljava_security_PrivateKey_2(runtime, ins);
}


