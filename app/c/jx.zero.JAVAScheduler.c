// CLASS: jx/zero/JAVAScheduler extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_JAVAScheduler_static {};



__refer arr_vmtable_jx_zero_JAVAScheduler_from_jx_zero_JAVAScheduler[] = {
    func_jx_zero_JAVAScheduler_add__Ljx_zero_CPUState_2_V,  //0
    func_jx_zero_JAVAScheduler_removeNext___Ljx_zero_CPUState_2,  //1
    func_jx_zero_JAVAScheduler_dump___V,  //2
    func_jx_zero_JAVAScheduler_init__I_V  //3
};
__refer arr_vmtable_jx_zero_JAVAScheduler_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_Object_hashCode___I  //9
};
VMTable vmtable_jx_zero_JAVAScheduler[] = {
    {407, 4, arr_vmtable_jx_zero_JAVAScheduler_from_jx_zero_JAVAScheduler}, //0
    {5, 10, arr_vmtable_jx_zero_JAVAScheduler_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 1
void func_jx_zero_JAVAScheduler_add__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, struct jx_zero_CPUState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3165, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_JAVAScheduler_add__Ljx_zero_CPUState_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_JAVAScheduler_add__Ljx_zero_CPUState_2_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_CPUState* func_jx_zero_JAVAScheduler_removeNext___Ljx_zero_CPUState_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3166, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_JAVAScheduler_removeNext___Ljx_zero_CPUState_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_JAVAScheduler_removeNext___Ljx_zero_CPUState_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_JAVAScheduler_dump___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3167, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_JAVAScheduler_dump___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_JAVAScheduler_dump___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_JAVAScheduler_init__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3168, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_JAVAScheduler_init__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_JAVAScheduler_init__I_V(runtime, ins);
}


