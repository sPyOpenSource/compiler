// CLASS: metaxa/os/devices/net/CompatabilityWord extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct metaxa_os_devices_net_CompatabilityWord_static {};



__refer arr_vmtable_metaxa_os_devices_net_CompatabilityWord_from_metaxa_os_devices_net_CompatabilityWord[] = {
    func_metaxa_os_devices_net_CompatabilityWord_get_1warninglevel___B,  //0
    func_metaxa_os_devices_net_CompatabilityWord_get_1failurelevel___B  //1
};
__refer arr_vmtable_metaxa_os_devices_net_CompatabilityWord_from_java_lang_Object[] = {
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
VMTable vmtable_metaxa_os_devices_net_CompatabilityWord[] = {
    {207, 2, arr_vmtable_metaxa_os_devices_net_CompatabilityWord_from_metaxa_os_devices_net_CompatabilityWord}, //0
    {10, 11, arr_vmtable_metaxa_os_devices_net_CompatabilityWord_from_java_lang_Object}, //1
};



// locals: 3
// stack: 2
// args: 2
void func_metaxa_os_devices_net_CompatabilityWord__init___BB_V(JThreadRuntime *runtime, s8 p0, s8 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 511, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 7 , L808417649 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 8 , L858204589 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield metaxa/os/devices/net/CompatabilityWord warninglevel B
    sp -= 2;
    ((struct metaxa_os_devices_net_CompatabilityWord*)rstack[sp + 0].obj)->warninglevel_0 = stack[sp + 1].i;
    ; 
    //  line no 9 , L1976752685 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield metaxa/os/devices/net/CompatabilityWord failurelevel B
    sp -= 2;
    ((struct metaxa_os_devices_net_CompatabilityWord*)rstack[sp + 0].obj)->failurelevel_1 = stack[sp + 1].i;
    ; 
    //  line no 10 , L1115170891 , bytecode index = 
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

void bridge_metaxa_os_devices_net_CompatabilityWord__init___BB_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_metaxa_os_devices_net_CompatabilityWord__init___BB_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 1
// args: 0
s8 func_metaxa_os_devices_net_CompatabilityWord_get_1warninglevel___B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 13 , L53940034 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield metaxa/os/devices/net/CompatabilityWord warninglevel B
    stack[sp - 1].i = ((struct metaxa_os_devices_net_CompatabilityWord*)rstack[sp - 1].obj)->warninglevel_0;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_metaxa_os_devices_net_CompatabilityWord_get_1warninglevel___B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_metaxa_os_devices_net_CompatabilityWord_get_1warninglevel___B(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_metaxa_os_devices_net_CompatabilityWord_get_1failurelevel___B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 16 , L1676605578 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield metaxa/os/devices/net/CompatabilityWord failurelevel B
    stack[sp - 1].i = ((struct metaxa_os_devices_net_CompatabilityWord*)rstack[sp - 1].obj)->failurelevel_1;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_metaxa_os_devices_net_CompatabilityWord_get_1failurelevel___B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_metaxa_os_devices_net_CompatabilityWord_get_1failurelevel___B(runtime, ins);
}


