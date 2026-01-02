// CLASS: java/lang/CharSequence extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_CharSequence_static {};



__refer arr_vmtable_java_lang_CharSequence_from_java_lang_CharSequence[] = {
    func_java_lang_CharSequence_charAt__I_C,  //0
    func_java_lang_CharSequence_length___I,  //1
    func_java_lang_CharSequence_subSequence__II_Ljava_lang_CharSequence_2,  //2
    func_java_lang_CharSequence_toString___Ljava_lang_String_2  //3
};
__refer arr_vmtable_java_lang_CharSequence_from_java_lang_Object[] = {
    func_java_lang_CharSequence_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_lang_CharSequence[] = {
    {294, 4, arr_vmtable_java_lang_CharSequence_from_java_lang_CharSequence}, //0
    {5, 10, arr_vmtable_java_lang_CharSequence_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 1
u16 func_java_lang_CharSequence_charAt__I_C(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2786, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_CharSequence_charAt__I_C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_CharSequence_charAt__I_C(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_java_lang_CharSequence_length___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2787, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_CharSequence_length___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_CharSequence_length___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct java_lang_CharSequence* func_java_lang_CharSequence_subSequence__II_Ljava_lang_CharSequence_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2788, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_CharSequence_subSequence__II_Ljava_lang_CharSequence_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_CharSequence_subSequence__II_Ljava_lang_CharSequence_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 0
struct java_lang_String* func_java_lang_CharSequence_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2789, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_CharSequence_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_CharSequence_toString___Ljava_lang_String_2(runtime, ins);
}


