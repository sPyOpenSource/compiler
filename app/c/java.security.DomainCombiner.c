// CLASS: java/security/DomainCombiner extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_security_DomainCombiner_static {};



__refer arr_vmtable_java_security_DomainCombiner_from_java_security_DomainCombiner[] = {
    func_java_security_DomainCombiner_combine___3Ljava_security_ProtectionDomain_2_3Ljava_security_ProtectionDomain_2__3Ljava_security_ProtectionDomain_2  //0
};
__refer arr_vmtable_java_security_DomainCombiner_from_java_lang_Object[] = {
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
VMTable vmtable_java_security_DomainCombiner[] = {
    {256, 1, arr_vmtable_java_security_DomainCombiner_from_java_security_DomainCombiner}, //0
    {10, 11, arr_vmtable_java_security_DomainCombiner_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 2
JArray * func_java_security_DomainCombiner_combine___3Ljava_security_ProtectionDomain_2_3Ljava_security_ProtectionDomain_2__3Ljava_security_ProtectionDomain_2(JThreadRuntime *runtime, JArray * p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 659, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_security_DomainCombiner_combine___3Ljava_security_ProtectionDomain_2_3Ljava_security_ProtectionDomain_2__3Ljava_security_ProtectionDomain_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_DomainCombiner_combine___3Ljava_security_ProtectionDomain_2_3Ljava_security_ProtectionDomain_2__3Ljava_security_ProtectionDomain_2(runtime, ins, para[0].obj);
}


