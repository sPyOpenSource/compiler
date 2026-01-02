// CLASS: org/luaj/vm2/LuaTable$Slot extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LuaTable_00024Slot_static {};



__refer arr_vmtable_org_luaj_vm2_LuaTable_00024Slot_from_org_luaj_vm2_LuaTable_00024Slot[] = {
    func_org_luaj_vm2_LuaTable_00024Slot_keyindex__I_I,  //0
    func_org_luaj_vm2_LuaTable_00024Slot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2,  //1
    func_org_luaj_vm2_LuaTable_00024Slot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2,  //2
    func_org_luaj_vm2_LuaTable_00024Slot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z,  //3
    func_org_luaj_vm2_LuaTable_00024Slot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2,  //4
    func_org_luaj_vm2_LuaTable_00024Slot_arraykey__I_I,  //5
    func_org_luaj_vm2_LuaTable_00024Slot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //6
    func_org_luaj_vm2_LuaTable_00024Slot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //7
    func_org_luaj_vm2_LuaTable_00024Slot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //8
    func_org_luaj_vm2_LuaTable_00024Slot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2  //9
};
__refer arr_vmtable_org_luaj_vm2_LuaTable_00024Slot_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_LuaTable_00024Slot[] = {
    {22, 10, arr_vmtable_org_luaj_vm2_LuaTable_00024Slot_from_org_luaj_vm2_LuaTable_00024Slot}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_LuaTable_00024Slot_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 1
s32 func_org_luaj_vm2_LuaTable_00024Slot_keyindex__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 994, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_keyindex__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_00024Slot_keyindex__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct org_luaj_vm2_LuaTable_00024StrongSlot* func_org_luaj_vm2_LuaTable_00024Slot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 995, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_00024Slot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct org_luaj_vm2_LuaTable_00024StrongSlot* func_org_luaj_vm2_LuaTable_00024Slot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 996, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_00024Slot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_org_luaj_vm2_LuaTable_00024Slot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 997, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_00024Slot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_LuaTable_00024Slot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 998, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_00024Slot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s32 func_org_luaj_vm2_LuaTable_00024Slot_arraykey__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 999, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_arraykey__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LuaTable_00024Slot_arraykey__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_LuaTable_00024Slot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024StrongSlot* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1000, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_00024Slot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 0
// args: 1
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_LuaTable_00024Slot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024Slot* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1001, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_00024Slot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_LuaTable_00024Slot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024StrongSlot* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1002, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_00024Slot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_LuaTable_00024Slot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024Slot* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1003, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaTable_00024Slot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaTable_00024Slot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


