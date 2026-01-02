// CLASS: org/luaj/vm2/NonTableMetatable extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_NonTableMetatable_static {};



__refer arr_vmtable_org_luaj_vm2_NonTableMetatable_from_org_luaj_vm2_NonTableMetatable[] = {
    func_org_luaj_vm2_NonTableMetatable_useWeakKeys___Z,  //0
    func_org_luaj_vm2_NonTableMetatable_useWeakValues___Z,  //1
    func_org_luaj_vm2_NonTableMetatable_toLuaValue___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_NonTableMetatable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //3
    func_org_luaj_vm2_NonTableMetatable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_NonTableMetatable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2  //5
};
__refer arr_vmtable_org_luaj_vm2_NonTableMetatable_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_luaj_vm2_NonTableMetatable_from_org_luaj_vm2_Metatable[] = {
    func_org_luaj_vm2_NonTableMetatable_useWeakKeys___Z,  //0
    func_org_luaj_vm2_NonTableMetatable_useWeakValues___Z,  //1
    func_org_luaj_vm2_NonTableMetatable_toLuaValue___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_NonTableMetatable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //3
    func_org_luaj_vm2_NonTableMetatable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_NonTableMetatable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2  //5
};
VMTable vmtable_org_luaj_vm2_NonTableMetatable[] = {
    {51, 6, arr_vmtable_org_luaj_vm2_NonTableMetatable_from_org_luaj_vm2_NonTableMetatable}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_NonTableMetatable_from_java_lang_Object}, //1
    {40, 6, arr_vmtable_org_luaj_vm2_NonTableMetatable_from_org_luaj_vm2_Metatable}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_NonTableMetatable__init___Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2803, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L1202874820 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 10 , L1911008699 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/NonTableMetatable value Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_NonTableMetatable*)rstack[sp + 0].obj)->value_0 = rstack[sp + 1].obj;
    ; 
    //  line no 11 , L839457812 , bytecode index = 
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

void bridge_org_luaj_vm2_NonTableMetatable__init___Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_NonTableMetatable__init___Lorg_luaj_vm2_LuaValue_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_NonTableMetatable_useWeakKeys___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2804, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 14 , L677926378 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 14;
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_NonTableMetatable_useWeakKeys___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_NonTableMetatable_useWeakKeys___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_NonTableMetatable_useWeakValues___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2805, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 18 , L507377172 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_NonTableMetatable_useWeakValues___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_NonTableMetatable_useWeakValues___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_NonTableMetatable_toLuaValue___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 22 , L265556987 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/NonTableMetatable value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_NonTableMetatable*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_org_luaj_vm2_NonTableMetatable_toLuaValue___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_NonTableMetatable_toLuaValue___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_NonTableMetatable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2807, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 26 , L1869544015 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 26;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaTable.defaultEntry(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Entry;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaTable_defaultEntry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Entry_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_NonTableMetatable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_NonTableMetatable_entry__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 1
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_NonTableMetatable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2808, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 30 , L1798667958 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 30;
    rstack[sp++].obj = rlocal[1].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_NonTableMetatable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_NonTableMetatable_wrap__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_NonTableMetatable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, JArray * p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2809, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 34 , L2082115343 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 34;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L2082115343 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_NonTableMetatable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_NonTableMetatable_arrayget___3Lorg_luaj_vm2_LuaValue_2I_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].i);
}


