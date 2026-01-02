// CLASS: org/luaj/vm2/Upvaldesc extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Upvaldesc_static {};



__refer arr_vmtable_org_luaj_vm2_Upvaldesc_from_org_luaj_vm2_Upvaldesc[] = {
    func_org_luaj_vm2_Upvaldesc_toString___Ljava_lang_String_2  //0
};
__refer arr_vmtable_org_luaj_vm2_Upvaldesc_from_java_lang_Object[] = {
    func_org_luaj_vm2_Upvaldesc_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_org_luaj_vm2_Upvaldesc[] = {
    {126, 1, arr_vmtable_org_luaj_vm2_Upvaldesc_from_org_luaj_vm2_Upvaldesc}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_Upvaldesc_from_java_lang_Object}, //1
};



// locals: 4
// stack: 2
// args: 3
void func_org_luaj_vm2_Upvaldesc__init___Lorg_luaj_vm2_LuaString_2ZI_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0, s8 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1152, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 35 , L1210939243 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 35;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 36 , L1079125839 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/Upvaldesc name Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_Upvaldesc*)rstack[sp + 0].obj)->name_0 = rstack[sp + 1].obj;
    ; 
    //  line no 37 , L321772459 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/Upvaldesc instack Z
    sp -= 2;
    ((struct org_luaj_vm2_Upvaldesc*)rstack[sp + 0].obj)->instack_1 = stack[sp + 1].i;
    ; 
    //  line no 38 , L696165690 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/Upvaldesc idx S
    sp -= 2;
    ((struct org_luaj_vm2_Upvaldesc*)rstack[sp + 0].obj)->idx_2 = stack[sp + 1].i;
    ; 
    //  line no 39 , L181078353 , bytecode index = 
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

void bridge_org_luaj_vm2_Upvaldesc__init___Lorg_luaj_vm2_LuaString_2ZI_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Upvaldesc__init___Lorg_luaj_vm2_LuaString_2ZI_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_org_luaj_vm2_Upvaldesc_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1153, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 42 , L645875534 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 42;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Upvaldesc idx S
    stack[sp - 1].i = ((struct org_luaj_vm2_Upvaldesc*)rstack[sp - 1].obj)->idx_2;
    sp += 0;
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Upvaldesc instack Z
    stack[sp - 1].i = ((struct org_luaj_vm2_Upvaldesc*)rstack[sp - 1].obj)->instack_1;
    sp += 0;
    if(stack[--sp].i  == 0) goto L2054451662;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2140);
    goto L673672784;
    L2054451662:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2141);
    L673672784:
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Upvaldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Upvaldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    // invokestatic java/lang/String.valueOf(Ljava/lang/Object;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_String_valueOf__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
        rstack[sp].obj = __func_p(runtime);
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

void bridge_org_luaj_vm2_Upvaldesc_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Upvaldesc_toString___Ljava_lang_String_2(runtime, ins);
}


