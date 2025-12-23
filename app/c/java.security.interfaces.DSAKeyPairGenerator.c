// CLASS: java/security/interfaces/DSAKeyPairGenerator extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_security_interfaces_DSAKeyPairGenerator_static {};



__refer arr_vmtable_java_security_interfaces_DSAKeyPairGenerator_from_java_security_interfaces_DSAKeyPairGenerator[] = {
    func_java_security_interfaces_DSAKeyPairGenerator_initialize__Ljava_security_interfaces_DSAParams_2Ljava_security_SecureRandom_2_V,  //0
    func_java_security_interfaces_DSAKeyPairGenerator_initialize__IZLjava_security_SecureRandom_2_V  //1
};
__refer arr_vmtable_java_security_interfaces_DSAKeyPairGenerator_from_java_lang_Object[] = {
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
VMTable vmtable_java_security_interfaces_DSAKeyPairGenerator[] = {
    {80, 2, arr_vmtable_java_security_interfaces_DSAKeyPairGenerator_from_java_security_interfaces_DSAKeyPairGenerator}, //0
    {10, 11, arr_vmtable_java_security_interfaces_DSAKeyPairGenerator_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 2
void func_java_security_interfaces_DSAKeyPairGenerator_initialize__Ljava_security_interfaces_DSAParams_2Ljava_security_SecureRandom_2_V(JThreadRuntime *runtime, struct java_security_interfaces_DSAParams* p0, struct java_security_SecureRandom* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 249, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_security_interfaces_DSAKeyPairGenerator_initialize__Ljava_security_interfaces_DSAParams_2Ljava_security_SecureRandom_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_interfaces_DSAKeyPairGenerator_initialize__Ljava_security_interfaces_DSAParams_2Ljava_security_SecureRandom_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 3
void func_java_security_interfaces_DSAKeyPairGenerator_initialize__IZLjava_security_SecureRandom_2_V(JThreadRuntime *runtime, s32 p0, s8 p1, struct java_security_SecureRandom* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 250, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_security_interfaces_DSAKeyPairGenerator_initialize__IZLjava_security_SecureRandom_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_interfaces_DSAKeyPairGenerator_initialize__IZLjava_security_SecureRandom_2_V(runtime, ins, para[0].i, para[1].obj);
}


