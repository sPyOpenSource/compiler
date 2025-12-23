// CLASS: jx/net/rdp/crypto/Key extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_net_rdp_crypto_Key_static {s64 serialVersionUID_0;  };
struct jx_net_rdp_crypto_Key_static static_var_jx_net_rdp_crypto_Key = {0};


__refer arr_vmtable_jx_net_rdp_crypto_Key_from_jx_net_rdp_crypto_Key[] = {
    func_jx_net_rdp_crypto_Key_getAlgorithm___Ljava_lang_String_2,  //0
    func_jx_net_rdp_crypto_Key_getFormat___Ljava_lang_String_2,  //1
    func_jx_net_rdp_crypto_Key_getEncoded____3B  //2
};
__refer arr_vmtable_jx_net_rdp_crypto_Key_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_net_rdp_crypto_Key_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_jx_net_rdp_crypto_Key[] = {
    {171, 3, arr_vmtable_jx_net_rdp_crypto_Key_from_jx_net_rdp_crypto_Key}, //0
    {10, 11, arr_vmtable_jx_net_rdp_crypto_Key_from_java_lang_Object}, //1
    {64, 0, arr_vmtable_jx_net_rdp_crypto_Key_from_java_io_Serializable}, //2
};



// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_jx_net_rdp_crypto_Key_getAlgorithm___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 434, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rdp_crypto_Key_getAlgorithm___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rdp_crypto_Key_getAlgorithm___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_jx_net_rdp_crypto_Key_getFormat___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 435, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rdp_crypto_Key_getFormat___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rdp_crypto_Key_getFormat___Ljava_lang_String_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_jx_net_rdp_crypto_Key_getEncoded____3B(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 436, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_net_rdp_crypto_Key_getEncoded____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_net_rdp_crypto_Key_getEncoded____3B(runtime, ins);
}


