// CLASS: jx/zero/ReadOnlyMemory extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_ReadOnlyMemory_static {};



__refer arr_vmtable_jx_zero_ReadOnlyMemory_from_jx_zero_ReadOnlyMemory[] = {
    func_jx_zero_ReadOnlyMemory_get8__I_B,  //0
    func_jx_zero_ReadOnlyMemory_get16__I_S,  //1
    func_jx_zero_ReadOnlyMemory_get32__I_I,  //2
    func_jx_zero_ReadOnlyMemory_getLittleEndian32__I_I,  //3
    func_jx_zero_ReadOnlyMemory_getLittleEndian16__I_S,  //4
    func_jx_zero_ReadOnlyMemory_getBigEndian32__I_I,  //5
    func_jx_zero_ReadOnlyMemory_getBigEndian16__I_S,  //6
    func_jx_zero_ReadOnlyMemory_copyToByteArray___3BIII_V,  //7
    func_jx_zero_ReadOnlyMemory_copyToMemory__Ljx_zero_Memory_2III_I,  //8
    func_jx_zero_ReadOnlyMemory_getReadOnlySubRange__II_Ljx_zero_ReadOnlyMemory_2,  //9
    func_jx_zero_ReadOnlyMemory_size___I,  //10
    func_jx_zero_ReadOnlyMemory_getStartAddress___I  //11
};
__refer arr_vmtable_jx_zero_ReadOnlyMemory_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_ReadOnlyMemory_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_ReadOnlyMemory[] = {
    {199, 12, arr_vmtable_jx_zero_ReadOnlyMemory_from_jx_zero_ReadOnlyMemory}, //0
    {5, 10, arr_vmtable_jx_zero_ReadOnlyMemory_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_ReadOnlyMemory_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_ReadOnlyMemory_get8__I_B(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 982, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_get8__I_B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_get8__I_B(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s16 func_jx_zero_ReadOnlyMemory_get16__I_S(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 983, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_get16__I_S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_get16__I_S(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_ReadOnlyMemory_get32__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 984, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_get32__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_get32__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_ReadOnlyMemory_getLittleEndian32__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 985, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_getLittleEndian32__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_getLittleEndian32__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s16 func_jx_zero_ReadOnlyMemory_getLittleEndian16__I_S(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 986, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_getLittleEndian16__I_S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_getLittleEndian16__I_S(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_jx_zero_ReadOnlyMemory_getBigEndian32__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 987, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_getBigEndian32__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_getBigEndian32__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s16 func_jx_zero_ReadOnlyMemory_getBigEndian16__I_S(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 988, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_getBigEndian16__I_S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_getBigEndian16__I_S(runtime, ins);
}


// locals: 0
// stack: 0
// args: 4
void func_jx_zero_ReadOnlyMemory_copyToByteArray___3BIII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 989, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_ReadOnlyMemory_copyToByteArray___3BIII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_ReadOnlyMemory_copyToByteArray___3BIII_V(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 0
// stack: 0
// args: 4
s32 func_jx_zero_ReadOnlyMemory_copyToMemory__Ljx_zero_Memory_2III_I(JThreadRuntime *runtime, struct jx_zero_Memory* p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 990, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_copyToMemory__Ljx_zero_Memory_2III_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_copyToMemory__Ljx_zero_Memory_2III_I(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 0
// stack: 0
// args: 2
struct jx_zero_ReadOnlyMemory* func_jx_zero_ReadOnlyMemory_getReadOnlySubRange__II_Ljx_zero_ReadOnlyMemory_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 991, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_ReadOnlyMemory_getReadOnlySubRange__II_Ljx_zero_ReadOnlyMemory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_ReadOnlyMemory_getReadOnlySubRange__II_Ljx_zero_ReadOnlyMemory_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_ReadOnlyMemory_size___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 992, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_size___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_ReadOnlyMemory_getStartAddress___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 993, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_ReadOnlyMemory_getStartAddress___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_ReadOnlyMemory_getStartAddress___I(runtime, ins);
}


