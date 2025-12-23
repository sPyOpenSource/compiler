// CLASS: jx/scheduler/LLRRobin$DomainContainer extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_scheduler_LLRRobin_00024DomainContainer_static {};



__refer arr_vmtable_jx_scheduler_LLRRobin_00024DomainContainer_from_jx_scheduler_LLRRobin_00024DomainContainer[] = {
    NULL
};
__refer arr_vmtable_jx_scheduler_LLRRobin_00024DomainContainer_from_java_lang_Object[] = {
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
VMTable vmtable_jx_scheduler_LLRRobin_00024DomainContainer[] = {
    {178, 0, arr_vmtable_jx_scheduler_LLRRobin_00024DomainContainer_from_jx_scheduler_LLRRobin_00024DomainContainer}, //0
    {10, 11, arr_vmtable_jx_scheduler_LLRRobin_00024DomainContainer_from_java_lang_Object}, //1
};



// locals: 3
// stack: 2
// args: 2
void func_jx_scheduler_LLRRobin_00024DomainContainer__init___Ljx_scheduler_LLRRobin_2Ljx_zero_Domain_2_V(JThreadRuntime *runtime, struct jx_scheduler_LLRRobin* p0, struct jx_zero_Domain* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 452, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 265 , L1337866219 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 265;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/scheduler/LLRRobin$DomainContainer this$0 Ljx/scheduler/LLRRobin;
    sp -= 2;
    ((struct jx_scheduler_LLRRobin_00024DomainContainer*)rstack[sp + 0].obj)->this_000240_3 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 266 , L313082880 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield jx/scheduler/LLRRobin$DomainContainer domain Ljx/zero/Domain;
    sp -= 2;
    ((struct jx_scheduler_LLRRobin_00024DomainContainer*)rstack[sp + 0].obj)->domain_0 = rstack[sp + 1].obj;
    ; 
    //  line no 267 , L1783083399 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic jx/scheduler/LLRRobin.access$000(Ljx/scheduler/LLRRobin;)I
    {
        sp -= 2;
        stack[sp].i = func_jx_scheduler_LLRRobin_access_00024000__Ljx_scheduler_LLRRobin_2_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/scheduler/LLRRobin$DomainContainer DomainTimeSlice I
    sp -= 2;
    ((struct jx_scheduler_LLRRobin_00024DomainContainer*)rstack[sp + 0].obj)->DomainTimeSlice_1 = stack[sp + 1].i;
    ; 
    //  line no 268 , L541698497 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield jx/scheduler/LLRRobin$DomainContainer next Ljx/scheduler/LLRRobin$DomainContainer;
    sp -= 2;
    ((struct jx_scheduler_LLRRobin_00024DomainContainer*)rstack[sp + 0].obj)->next_2 = rstack[sp + 1].obj;
    ; 
    //  line no 269 , L519492428 , bytecode index = 
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

void bridge_jx_scheduler_LLRRobin_00024DomainContainer__init___Ljx_scheduler_LLRRobin_2Ljx_zero_Domain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_scheduler_LLRRobin_00024DomainContainer__init___Ljx_scheduler_LLRRobin_2Ljx_zero_Domain_2_V(runtime, ins, para[0].obj);
}


