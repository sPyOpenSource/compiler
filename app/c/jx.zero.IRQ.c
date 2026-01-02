// CLASS: jx/zero/IRQ extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_IRQ_static {};



__refer arr_vmtable_jx_zero_IRQ_from_jx_zero_IRQ[] = {
    func_jx_zero_IRQ_installFirstLevelHandler__ILjx_zero_FirstLevelIrqHandler_2_V,  //0
    func_jx_zero_IRQ_enableIRQ__I_V,  //1
    func_jx_zero_IRQ_disableIRQ__I_V,  //2
    func_jx_zero_IRQ_enableAll___V,  //3
    func_jx_zero_IRQ_disableAll___V,  //4
    func_jx_zero_IRQ_setDestination__II_V  //5
};
__refer arr_vmtable_jx_zero_IRQ_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_IRQ_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_IRQ[] = {
    {389, 6, arr_vmtable_jx_zero_IRQ_from_jx_zero_IRQ}, //0
    {5, 10, arr_vmtable_jx_zero_IRQ_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_IRQ_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 2
void func_jx_zero_IRQ_installFirstLevelHandler__ILjx_zero_FirstLevelIrqHandler_2_V(JThreadRuntime *runtime, s32 p0, struct jx_zero_FirstLevelIrqHandler* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2868, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_IRQ_installFirstLevelHandler__ILjx_zero_FirstLevelIrqHandler_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_IRQ_installFirstLevelHandler__ILjx_zero_FirstLevelIrqHandler_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_IRQ_enableIRQ__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2869, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_IRQ_enableIRQ__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_IRQ_enableIRQ__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
void func_jx_zero_IRQ_disableIRQ__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2870, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_IRQ_disableIRQ__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_IRQ_disableIRQ__I_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_IRQ_enableAll___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2871, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_IRQ_enableAll___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_IRQ_enableAll___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_IRQ_disableAll___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2872, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_IRQ_disableAll___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_IRQ_disableAll___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_IRQ_setDestination__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2873, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_IRQ_setDestination__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_IRQ_setDestination__II_V(runtime, ins, para[0].i);
}


