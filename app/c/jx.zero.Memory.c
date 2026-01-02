// CLASS: jx/zero/Memory extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_Memory_static {};



__refer arr_vmtable_jx_zero_Memory_from_jx_zero_Memory[] = {
    func_jx_zero_Memory_set8__IB_V,  //0
    func_jx_zero_Memory_set16__IS_V,  //1
    func_jx_zero_Memory_set32__II_V,  //2
    func_jx_zero_Memory_setLittleEndian32__II_V,  //3
    func_jx_zero_Memory_setLittleEndian16__IS_V,  //4
    func_jx_zero_Memory_setBigEndian32__II_V,  //5
    func_jx_zero_Memory_setBigEndian16__IS_V,  //6
    func_jx_zero_Memory_copyFromByteArray___3BIII_V,  //7
    func_jx_zero_Memory_copyFromMemory__Ljx_zero_Memory_2III_I,  //8
    func_jx_zero_Memory_split2__I_3Ljx_zero_Memory_2_V,  //9
    func_jx_zero_Memory_split3__II_3Ljx_zero_Memory_2_V,  //10
    func_jx_zero_Memory_getSubRange__II_Ljx_zero_Memory_2,  //11
    func_jx_zero_Memory_joinPrevious___Ljx_zero_Memory_2,  //12
    func_jx_zero_Memory_joinNext___Ljx_zero_Memory_2,  //13
    func_jx_zero_Memory_joinAll___Ljx_zero_Memory_2,  //14
    func_jx_zero_Memory_map__Ljx_zero_VMClass_2_Ljava_lang_Object_2,  //15
    func_jx_zero_Memory_revoke___Ljx_zero_Memory_2,  //16
    func_jx_zero_Memory_isValid___Z,  //17
    func_jx_zero_Memory_copy__III_V,  //18
    func_jx_zero_Memory_move__III_V,  //19
    func_jx_zero_Memory_fill16__SII_V,  //20
    func_jx_zero_Memory_fill32__III_V,  //21
    func_jx_zero_Memory_clear___V  //22
};
__refer arr_vmtable_jx_zero_Memory_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_Memory_from_jx_zero_ReadOnlyMemory[] = {
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
__refer arr_vmtable_jx_zero_Memory_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_Memory[] = {
    {209, 23, arr_vmtable_jx_zero_Memory_from_jx_zero_Memory}, //0
    {5, 10, arr_vmtable_jx_zero_Memory_from_java_lang_Object}, //1
    {199, 12, arr_vmtable_jx_zero_Memory_from_jx_zero_ReadOnlyMemory}, //2
    {60, 0, arr_vmtable_jx_zero_Memory_from_jx_zero_Portal}, //3
};



// locals: 0
// stack: 0
// args: 2
void func_jx_zero_Memory_set8__IB_V(JThreadRuntime *runtime, s32 p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1154, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_set8__IB_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_set8__IB_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_Memory_set16__IS_V(JThreadRuntime *runtime, s32 p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1155, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_set16__IS_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_set16__IS_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_Memory_set32__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1156, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_set32__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_set32__II_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_Memory_setLittleEndian32__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1157, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_setLittleEndian32__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_setLittleEndian32__II_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_Memory_setLittleEndian16__IS_V(JThreadRuntime *runtime, s32 p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1158, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_setLittleEndian16__IS_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_setLittleEndian16__IS_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_Memory_setBigEndian32__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1159, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_setBigEndian32__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_setBigEndian32__II_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_Memory_setBigEndian16__IS_V(JThreadRuntime *runtime, s32 p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1160, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_setBigEndian16__IS_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_setBigEndian16__IS_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 4
void func_jx_zero_Memory_copyFromByteArray___3BIII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1161, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_copyFromByteArray___3BIII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_copyFromByteArray___3BIII_V(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 0
// stack: 0
// args: 4
s32 func_jx_zero_Memory_copyFromMemory__Ljx_zero_Memory_2III_I(JThreadRuntime *runtime, struct jx_zero_Memory* p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1162, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Memory_copyFromMemory__Ljx_zero_Memory_2III_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Memory_copyFromMemory__Ljx_zero_Memory_2III_I(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 0
// stack: 0
// args: 2
void func_jx_zero_Memory_split2__I_3Ljx_zero_Memory_2_V(JThreadRuntime *runtime, s32 p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1163, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_split2__I_3Ljx_zero_Memory_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_split2__I_3Ljx_zero_Memory_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_Memory_split3__II_3Ljx_zero_Memory_2_V(JThreadRuntime *runtime, s32 p0, s32 p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1164, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_split3__II_3Ljx_zero_Memory_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_split3__II_3Ljx_zero_Memory_2_V(runtime, ins, para[0].i, para[1].obj);
}


// locals: 0
// stack: 0
// args: 2
struct jx_zero_Memory* func_jx_zero_Memory_getSubRange__II_Ljx_zero_Memory_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1165, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_Memory_getSubRange__II_Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_Memory_getSubRange__II_Ljx_zero_Memory_2(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Memory* func_jx_zero_Memory_joinPrevious___Ljx_zero_Memory_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1166, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_Memory_joinPrevious___Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_Memory_joinPrevious___Ljx_zero_Memory_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Memory* func_jx_zero_Memory_joinNext___Ljx_zero_Memory_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1167, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_Memory_joinNext___Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_Memory_joinNext___Ljx_zero_Memory_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Memory* func_jx_zero_Memory_joinAll___Ljx_zero_Memory_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1168, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_Memory_joinAll___Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_Memory_joinAll___Ljx_zero_Memory_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct java_lang_Object* func_jx_zero_Memory_map__Ljx_zero_VMClass_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct jx_zero_VMClass* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1169, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_Memory_map__Ljx_zero_VMClass_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_Memory_map__Ljx_zero_VMClass_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_zero_Memory* func_jx_zero_Memory_revoke___Ljx_zero_Memory_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1170, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_zero_Memory_revoke___Ljx_zero_Memory_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_Memory_revoke___Ljx_zero_Memory_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_zero_Memory_isValid___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1171, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_Memory_isValid___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_Memory_isValid___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_Memory_copy__III_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1172, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_copy__III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_copy__III_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_Memory_move__III_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1173, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_move__III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_move__III_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_Memory_fill16__SII_V(JThreadRuntime *runtime, s16 p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1174, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_fill16__SII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_fill16__SII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 3
void func_jx_zero_Memory_fill32__III_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1175, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_fill32__III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_fill32__III_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 0
// stack: 0
// args: 0
void func_jx_zero_Memory_clear___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1176, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_Memory_clear___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_Memory_clear___V(runtime, ins);
}


