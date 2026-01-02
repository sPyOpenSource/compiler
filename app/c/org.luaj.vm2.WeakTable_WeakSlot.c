// CLASS: org/luaj/vm2/WeakTable$WeakSlot extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_WeakTable_00024WeakSlot_static {};



__refer arr_vmtable_org_luaj_vm2_WeakTable_00024WeakSlot_from_org_luaj_vm2_WeakTable_00024WeakSlot[] = {
    func_org_luaj_vm2_WeakTable_00024WeakSlot_keyindex__I_I,  //0
    func_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //1
    func_org_luaj_vm2_WeakTable_00024WeakSlot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2,  //2
    func_org_luaj_vm2_WeakTable_00024WeakSlot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2,  //3
    func_org_luaj_vm2_WeakTable_00024WeakSlot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z,  //4
    func_org_luaj_vm2_WeakTable_00024WeakSlot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2,  //5
    func_org_luaj_vm2_WeakTable_00024WeakSlot_arraykey__I_I,  //6
    func_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //7
    func_org_luaj_vm2_WeakTable_00024WeakSlot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //8
    func_org_luaj_vm2_WeakTable_00024WeakSlot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //9
    func_org_luaj_vm2_WeakTable_00024WeakSlot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //10
    func_org_luaj_vm2_WeakTable_00024WeakSlot_strongkey___Lorg_luaj_vm2_LuaValue_2,  //11
    func_org_luaj_vm2_WeakTable_00024WeakSlot_strongvalue___Lorg_luaj_vm2_LuaValue_2,  //12
    func_org_luaj_vm2_WeakTable_00024WeakSlot_copy__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_WeakTable_00024WeakSlot_2  //13
};
__refer arr_vmtable_org_luaj_vm2_WeakTable_00024WeakSlot_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_luaj_vm2_WeakTable_00024WeakSlot_from_org_luaj_vm2_LuaTable_00024Slot[] = {
    func_org_luaj_vm2_WeakTable_00024WeakSlot_keyindex__I_I,  //0
    func_org_luaj_vm2_WeakTable_00024WeakSlot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2,  //1
    func_org_luaj_vm2_WeakTable_00024WeakSlot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2,  //2
    func_org_luaj_vm2_WeakTable_00024WeakSlot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z,  //3
    func_org_luaj_vm2_WeakTable_00024WeakSlot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2,  //4
    func_org_luaj_vm2_WeakTable_00024WeakSlot_arraykey__I_I,  //5
    func_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //6
    func_org_luaj_vm2_WeakTable_00024WeakSlot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //7
    func_org_luaj_vm2_WeakTable_00024WeakSlot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2,  //8
    func_org_luaj_vm2_WeakTable_00024WeakSlot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2  //9
};
VMTable vmtable_org_luaj_vm2_WeakTable_00024WeakSlot[] = {
    {21, 14, arr_vmtable_org_luaj_vm2_WeakTable_00024WeakSlot_from_org_luaj_vm2_WeakTable_00024WeakSlot}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_WeakTable_00024WeakSlot_from_java_lang_Object}, //1
    {22, 10, arr_vmtable_org_luaj_vm2_WeakTable_00024WeakSlot_from_org_luaj_vm2_LuaTable_00024Slot}, //2
};



// locals: 4
// stack: 2
// args: 3
void func_org_luaj_vm2_WeakTable_00024WeakSlot__init___Ljava_lang_Object_2Ljava_lang_Object_2Lorg_luaj_vm2_LuaTable_00024Slot_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1, struct org_luaj_vm2_LuaTable_00024Slot* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1242, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 106 , L265577219 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 106;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 107 , L1624817884 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/WeakTable$WeakSlot key Ljava/lang/Object;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->key_0 = rstack[sp + 1].obj;
    ; 
    //  line no 108 , L1107579932 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/WeakTable$WeakSlot value Ljava/lang/Object;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 109 , L1784834205 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->next_2 = rstack[sp + 1].obj;
    ; 
    //  line no 110 , L1174586025 , bytecode index = 
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot__init___Ljava_lang_Object_2Ljava_lang_Object_2Lorg_luaj_vm2_LuaTable_00024Slot_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_WeakTable_00024WeakSlot__init___Ljava_lang_Object_2Ljava_lang_Object_2Lorg_luaj_vm2_LuaTable_00024Slot_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 0
// args: 1
s32 func_org_luaj_vm2_WeakTable_00024WeakSlot_keyindex__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1243, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_keyindex__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_WeakTable_00024WeakSlot_keyindex__I_I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1244, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


// locals: 3
// stack: 4
// args: 0
struct org_luaj_vm2_LuaTable_00024StrongSlot* func_org_luaj_vm2_WeakTable_00024WeakSlot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1245, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 117 , L4073506 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.strongkey()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 118 , L2044825144 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.strongvalue()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 12);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 119 , L698747943 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L407493402;
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L407493402;
    ; 
    //  line no 120 , L1774690057 , bytecode index = 
    // new org/luaj/vm2/LuaTable$NormalEntry
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 94);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LuaTable$NormalEntry.<init>(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaTable_00024NormalEntry__init___Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L407493402:
    //  line no 122 , L407493402 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/WeakTable$WeakSlot key Ljava/lang/Object;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->key_0 = rstack[sp + 1].obj;
    ; 
    //  line no 123 , L480402503 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/WeakTable$WeakSlot value Ljava/lang/Object;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 124 , L100445376 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_first___Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct org_luaj_vm2_LuaTable_00024StrongSlot* func_org_luaj_vm2_WeakTable_00024WeakSlot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1246, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 129 , L114414807 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 129;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.first()Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 130 , L144699438 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L1751500625;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$StrongSlot.find(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1650955365;
    L1751500625:
    // aconst null
    rstack[sp++].obj = NULL;
    L1650955365:
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_find__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024StrongSlot_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
s8 func_org_luaj_vm2_WeakTable_00024WeakSlot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1247, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 134 , L493944943 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 134;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.first()Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 135 , L1533547487 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L99770475;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$StrongSlot.keyeq(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L99770475;
    // iconst_1
    stack[sp++].i = 1;
    goto L727250772;
    L99770475:
    // iconst_0
    stack[sp++].i = 0;
    L727250772:
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_WeakTable_00024WeakSlot_keyeq__Lorg_luaj_vm2_LuaValue_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_WeakTable_00024WeakSlot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 139 , L626193099 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_rest___Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
s32 func_org_luaj_vm2_WeakTable_00024WeakSlot_arraykey__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1249, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 144 , L1597742167 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 144;
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_arraykey__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_WeakTable_00024WeakSlot_arraykey__I_I(runtime, ins);
}


// locals: 4
// stack: 4
// args: 2
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024StrongSlot* p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1250, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 148 , L754072705 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 148;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.strongkey()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 149 , L908384914 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L905847077;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface org/luaj/vm2/LuaTable$StrongSlot.find(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$StrongSlot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024StrongSlot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L905847077;
    ; 
    //  line no 150 , L156199931 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.set(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 21, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L905847077:
    //  line no 151 , L905847077 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L878991463;
    ; 
    //  line no 153 , L612693043 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.set(Lorg/luaj/vm2/LuaTable$StrongSlot;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024StrongSlot*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->next_2 = rstack[sp + 1].obj;
    ; 
    //  line no 154 , L1622613647 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L878991463:
    //  line no 157 , L878991463 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.set(Lorg/luaj/vm2/LuaTable$StrongSlot;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024StrongSlot*,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_set__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_WeakTable_00024WeakSlot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024Slot* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1251, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 162 , L73688220 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 162;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L130166095;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.add(Lorg/luaj/vm2/LuaTable$Slot;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024Slot*) = find_method(__ins->vm_table, 22, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1599674462;
    L130166095:
    rstack[sp++].obj = rlocal[1].obj;
    L1599674462:
    // putfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->next_2 = rstack[sp + 1].obj;
    ; 
    //  line no 163 , L1623060829 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.strongkey()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L1205483858;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.strongvalue()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 12);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L1205483858;
    ; 
    //  line no 164 , L1373949107 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1205483858:
    //  line no 166 , L1205483858 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_add__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_WeakTable_00024WeakSlot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024StrongSlot* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1252, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 171 , L1230013344 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 171;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.strongkey()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 172 , L1607869297 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L681639276;
    ; 
    //  line no 173 , L727860268 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.remove(Lorg/luaj/vm2/LuaTable$StrongSlot;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024StrongSlot*) = find_method(__ins->vm_table, 22, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L681639276:
    //  line no 174 , L681639276 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface org/luaj/vm2/LuaTable$StrongSlot.keyeq(Lorg/luaj/vm2/LuaValue;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 22, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1717739363;
    ; 
    //  line no 175 , L138536309 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/WeakTable$WeakSlot value Ljava/lang/Object;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 176 , L665137804 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1717739363:
    //  line no 178 , L1717739363 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/luaj/vm2/LuaTable$Slot.remove(Lorg/luaj/vm2/LuaTable$StrongSlot;)Lorg/luaj/vm2/LuaTable$Slot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaTable_00024Slot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024StrongSlot*) = find_method(__ins->vm_table, 22, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    sp -= 2;
    ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp + 0].obj)->next_2 = rstack[sp + 1].obj;
    ; 
    //  line no 179 , L509559152 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_remove__Lorg_luaj_vm2_LuaTable_00024StrongSlot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaTable_00024Slot* func_org_luaj_vm2_WeakTable_00024WeakSlot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024Slot* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1253, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 184 , L1801021153 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 184;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.strongkey()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L1709578324;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.strongvalue()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 21, 12);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L1709578324;
    ; 
    //  line no 185 , L22446425 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1338958728;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot next Lorg/luaj/vm2/LuaTable$Slot;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->next_2;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1338958728;
    ; 
    //  line no 186 , L1870723838 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1338958728:
    //  line no 188 , L1338958728 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/WeakTable$WeakSlot.copy(Lorg/luaj/vm2/LuaTable$Slot;)Lorg/luaj/vm2/WeakTable$WeakSlot;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_WeakTable_00024WeakSlot* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaTable_00024Slot*) = find_method(__ins->vm_table, 21, 13);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1709578324:
    //  line no 191 , L1709578324 , bytecode index = 
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_relink__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_LuaTable_00024Slot_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_WeakTable_00024WeakSlot_strongkey___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1254, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 196 , L261650860 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 196;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    // checkcast org/luaj/vm2/LuaValue
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 6);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_strongkey___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_strongkey___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_WeakTable_00024WeakSlot_strongvalue___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1255, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 200 , L1598898814 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 200;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/WeakTable$WeakSlot value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_WeakTable_00024WeakSlot*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // checkcast org/luaj/vm2/LuaValue
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 6);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
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

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_strongvalue___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_strongvalue___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
struct org_luaj_vm2_WeakTable_00024WeakSlot* func_org_luaj_vm2_WeakTable_00024WeakSlot_copy__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_WeakTable_00024WeakSlot_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaTable_00024Slot* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1256, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_WeakTable_00024WeakSlot_copy__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_WeakTable_00024WeakSlot_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_WeakTable_00024WeakSlot_copy__Lorg_luaj_vm2_LuaTable_00024Slot_2_Lorg_luaj_vm2_WeakTable_00024WeakSlot_2(runtime, ins);
}


