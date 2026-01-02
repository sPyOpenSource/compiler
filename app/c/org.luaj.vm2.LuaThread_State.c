// CLASS: org/luaj/vm2/LuaThread$State extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LuaThread_00024State_static {};



__refer arr_vmtable_org_luaj_vm2_LuaThread_00024State_from_org_luaj_vm2_LuaThread_00024State[] = {
    func_org_luaj_vm2_LuaThread_00024State_run___V,  //0
    func_org_luaj_vm2_LuaThread_00024State_lua_1resume__Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2,  //1
    func_org_luaj_vm2_LuaThread_00024State_lua_1yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2  //2
};
__refer arr_vmtable_org_luaj_vm2_LuaThread_00024State_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_luaj_vm2_LuaThread_00024State_from_java_lang_Runnable[] = {
    func_org_luaj_vm2_LuaThread_00024State_run___V  //0
};
VMTable vmtable_org_luaj_vm2_LuaThread_00024State[] = {
    {290, 3, arr_vmtable_org_luaj_vm2_LuaThread_00024State_from_org_luaj_vm2_LuaThread_00024State}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_LuaThread_00024State_from_java_lang_Object}, //1
    {314, 1, arr_vmtable_org_luaj_vm2_LuaThread_00024State_from_java_lang_Runnable}, //2
};



// locals: 4
// stack: 4
// args: 3
void func_org_luaj_vm2_LuaThread_00024State__init___Lorg_luaj_vm2_Globals_2Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Globals* p0, struct org_luaj_vm2_LuaThread* p1, struct org_luaj_vm2_LuaValue* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2237, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 188 , L822799883 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 188;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 171 , L909278444 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->args_3 = rstack[sp + 1].obj;
    ; 
    //  line no 172 , L1091233196 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State result Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->result_4 = rstack[sp + 1].obj;
    ; 
    //  line no 173 , L445509811 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/LuaThread$State error Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->error_5 = rstack[sp + 1].obj;
    ; 
    //  line no 186 , L2081501023 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 189 , L1499588909 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/LuaThread$State globals Lorg/luaj/vm2/Globals;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->globals_0 = rstack[sp + 1].obj;
    ; 
    //  line no 190 , L1339052072 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/lang/ref/WeakReference
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 211);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/ref/WeakReference.<init>(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ref_WeakReference__init___Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LuaThread$State lua_thread Ljava/lang/ref/WeakReference;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->lua_1thread_1 = rstack[sp + 1].obj;
    ; 
    //  line no 191 , L976042249 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/LuaThread$State function Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->function_2 = rstack[sp + 1].obj;
    ; 
    //  line no 192 , L1337168580 , bytecode index = 
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

void bridge_org_luaj_vm2_LuaThread_00024State__init___Lorg_luaj_vm2_Globals_2Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaThread_00024State__init___Lorg_luaj_vm2_Globals_2Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj, para[1].obj);
}

ExceptionItem arr_extable_func_org_luaj_vm2_LuaThread_00024State_run___V[] = {
    { , , 1797}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_org_luaj_vm2_LuaThread_00024State_run___V = {3, arr_extable_func_org_luaj_vm2_LuaThread_00024State_run___V};

// locals: 3
// stack: 3
// args: 0
void func_org_luaj_vm2_LuaThread_00024State_run___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2238, &rstack[0], &rlocal[0], &sp);
    // try catch :L1423007887 L132644461 L1410431463 (
    // try catch :L1423007887 L132644461 L607676473 (
    // try catch :L1410431463 L2066919721 L607676473 (
    L1423007887:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 196 , L1423007887 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 196;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->args_3;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 197 , L1134443700 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->args_3 = rstack[sp + 1].obj;
    ; 
    //  line no 198 , L480230241 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State function Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->function_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.invoke(Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Varargs*) = find_method(__ins->vm_table, 1, 113);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LuaThread$State result Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->result_4 = rstack[sp + 1].obj;
    L132644461:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 202 , L132644461 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 203 , L2072076651 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.notify()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 7);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 204 , L366226635 , bytecode index = 
    goto L664656217;
    L1410431463:
    __frame->bytecodeIndex = 
    //  line no 199 , L1410431463 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 200 , L1178090104 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Throwable.getMessage()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 56, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LuaThread$State error Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->error_5 = rstack[sp + 1].obj;
    L2066919721:
    __frame->bytecodeIndex = 
    //  line no 202 , L2066919721 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 203 , L918716909 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.notify()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 7);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 204 , L38027658 , bytecode index = 
    goto L664656217;
    L607676473:
    //  line no 202 , L607676473 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 203 , L1264191370 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.notify()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 7);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 204 , L1278615395 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1278615395 in labeltable is :L1278615395
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 204;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L664656217:
    //  line no 205 , L664656217 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1410431463;
        case 1 : goto L607676473;
        case 2 : goto L607676473;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_LuaThread_00024State_run___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LuaThread_00024State_run___V(runtime, ins);
}

ExceptionItem arr_extable_func_org_luaj_vm2_LuaThread_00024State_lua_1resume__Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2[] = {
    { , , 3015}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_org_luaj_vm2_LuaThread_00024State_lua_1resume__Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2 = {3, arr_extable_func_org_luaj_vm2_LuaThread_00024State_lua_1resume__Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2};

// locals: 6
// stack: 6
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_LuaThread_00024State_lua_1resume__Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaThread* p0, struct org_luaj_vm2_Varargs* p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2239, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    // try catch :L1320248993 L1431064234 L704482919 (
    // try catch :L1320248993 L1431064234 L236220307 (
    // try catch :L704482919 L1272284318 L236220307 (
    ; 
    //  line no 208 , L2094770768 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 208;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->globals_0;
    sp += 0;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    L1320248993:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 210 , L1320248993 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->globals_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->running_55 = rstack[sp + 1].obj;
    ; 
    //  line no 211 , L965778714 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->args_3 = rstack[sp + 1].obj;
    ; 
    //  line no 212 , L341120332 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State status I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->status_14;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1933808172;
    ; 
    //  line no 213 , L1382756158 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 214 , L1865289764 , bytecode index = 
    // new java/lang/Thread
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 334);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3945);
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
    // getstatic org/luaj/vm2/LuaThread coroutine_count I
    stack[sp].i =static_var_org_luaj_vm2_LuaThread.coroutine_1count_45;
    sp += 1;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // putstatic org/luaj/vm2/LuaThread coroutine_count I
    sp -= 1;
    static_var_org_luaj_vm2_LuaThread.coroutine_1count_45 = stack[sp].i;
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
    // invokespecial java/lang/Thread.<init>(Ljava/lang/Runnable;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Thread__init___Ljava_lang_Runnable_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Thread.start()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 334, 0);
        jthread_lock(runtime, __ins);
        __func_p(runtime);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1399691256;
    L1933808172:
    //  line no 216 , L1933808172 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.notify()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 7);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1399691256:
    //  line no 218 , L1399691256 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1011920203;
    ; 
    //  line no 219 , L927557408 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/LuaThread state Lorg/luaj/vm2/LuaThread$State;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->state_53;
    sp += 0;
    // iconst_3
    stack[sp++].i = 3;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    L1011920203:
    //  line no 220 , L1011920203 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 221 , L687472349 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.wait()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 222 , L395607661 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State error Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->error_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L773301025;
    ; 
    //  line no 223 , L1377546660 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State error Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->error_5;
    sp += 0;
    // invokestatic org/luaj/vm2/LuaValue.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaValue.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L905159212;
    L773301025:
    //  line no 224 , L773301025 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->result_4;
    sp += 0;
    // invokestatic org/luaj/vm2/LuaValue.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L905159212:
    rlocal[4].obj = rstack[--sp].obj;
    L1431064234:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 228 , L1431064234 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->args_3 = rstack[sp + 1].obj;
    ; 
    //  line no 229 , L27313641 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State result Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->result_4 = rstack[sp + 1].obj;
    ; 
    //  line no 230 , L306016343 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/LuaThread$State error Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->error_5 = rstack[sp + 1].obj;
    ; 
    //  line no 231 , L488928549 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->globals_0;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->running_55 = rstack[sp + 1].obj;
    ; 
    //  line no 232 , L904808047 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L853955254;
    ; 
    //  line no 233 , L1268786037 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->globals_0;
    sp += 0;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // getfield org/luaj/vm2/LuaThread state Lorg/luaj/vm2/LuaThread$State;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->state_53;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    L853955254:
    //  line no 222 , L853955254 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L704482919:
    __frame->bytecodeIndex = 
    //  line no 225 , L704482919 , bytecode index = 
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 226 , L1972628089 , bytecode index = 
    // new org/luaj/vm2/OrphanedThread
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 335);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/OrphanedThread.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_OrphanedThread__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1972628089 in labeltable is :L1972628089
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 226;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L236220307:
    //  line no 228 , L236220307 , bytecode index = 
    rlocal[5].obj = rstack[--sp].obj;
    L1272284318:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->args_3 = rstack[sp + 1].obj;
    ; 
    //  line no 229 , L847841178 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State result Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->result_4 = rstack[sp + 1].obj;
    ; 
    //  line no 230 , L855277727 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/LuaThread$State error Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->error_5 = rstack[sp + 1].obj;
    ; 
    //  line no 231 , L2022417982 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->globals_0;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->running_55 = rstack[sp + 1].obj;
    ; 
    //  line no 232 , L312560500 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1760443245;
    ; 
    //  line no 233 , L242659479 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State globals Lorg/luaj/vm2/Globals;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->globals_0;
    sp += 0;
    // getfield org/luaj/vm2/Globals running Lorg/luaj/vm2/LuaThread;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Globals*)rstack[sp - 1].obj)->running_55;
    sp += 0;
    // getfield org/luaj/vm2/LuaThread state Lorg/luaj/vm2/LuaThread$State;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread*)rstack[sp - 1].obj)->state_53;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    L1760443245:
    //  line no 234 , L1760443245 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // athrow
    //     L1760443245 in labeltable is :L1760443245
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 234;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L704482919;
        case 1 : goto L236220307;
        case 2 : goto L236220307;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaThread_00024State_lua_1resume__Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaThread_00024State_lua_1resume__Lorg_luaj_vm2_LuaThread_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj);
}

ExceptionItem arr_extable_func_org_luaj_vm2_LuaThread_00024State_lua_1yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2[] = {
    { , , 3015}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_org_luaj_vm2_LuaThread_00024State_lua_1yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2 = {3, arr_extable_func_org_luaj_vm2_LuaThread_00024State_lua_1yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2};

// locals: 4
// stack: 3
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_LuaThread_00024State_lua_1yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2240, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L864766419 L715602332 L300865111 (
    // try catch :L864766419 L715602332 L1888420238 (
    // try catch :L300865111 L430119837 L1888420238 (
    L864766419:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 239 , L864766419 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 239;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/LuaThread$State result Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->result_4 = rstack[sp + 1].obj;
    ; 
    //  line no 240 , L173783788 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 241 , L1835043230 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.notify()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 7);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1709930189:
    //  line no 243 , L1709930189 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaThread thread_orphan_check_interval J
    stack[sp].j =static_var_org_luaj_vm2_LuaThread.thread_1orphan_1check_1interval_46;
    sp += 2;
    // invokevirtual java/lang/Object.wait(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 5, 6);
        __func_p(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 244 , L1679160862 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State lua_thread Ljava/lang/ref/WeakReference;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->lua_1thread_1;
    sp += 0;
    // invokevirtual java/lang/ref/WeakReference.get()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 38, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  != NULL) goto L860798122;
    ; 
    //  line no 245 , L1510731556 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 246 , L1684580278 , bytecode index = 
    // new org/luaj/vm2/OrphanedThread
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 335);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/OrphanedThread.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_OrphanedThread__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1684580278 in labeltable is :L1684580278
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 246;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L860798122:
    //  line no 248 , L860798122 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State status I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->status_14;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1709930189;
    ; 
    //  line no 249 , L797313059 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp - 1].obj)->args_3;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    L715602332:
    __frame->bytecodeIndex = 
    __frame->bytecodeIndex = 
    //  line no 254 , L715602332 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->args_3 = rstack[sp + 1].obj;
    ; 
    //  line no 255 , L1768639125 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State result Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->result_4 = rstack[sp + 1].obj;
    ; 
    //  line no 249 , L1813838419 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L300865111:
    __frame->bytecodeIndex = 
    //  line no 250 , L300865111 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 251 , L1298707825 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield org/luaj/vm2/LuaThread$State status I
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->status_14 = stack[sp + 1].i;
    ; 
    //  line no 252 , L1387293679 , bytecode index = 
    // new org/luaj/vm2/OrphanedThread
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 335);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/OrphanedThread.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_OrphanedThread__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1387293679 in labeltable is :L1387293679
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 252;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1888420238:
    //  line no 254 , L1888420238 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    L430119837:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->args_3 = rstack[sp + 1].obj;
    ; 
    //  line no 255 , L1639759054 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/LuaThread$State result Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_LuaThread_00024State*)rstack[sp + 0].obj)->result_4 = rstack[sp + 1].obj;
    ; 
    //  line no 256 , L1794710728 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L1794710728 in labeltable is :L1794710728
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 256;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L300865111;
        case 1 : goto L1888420238;
        case 2 : goto L1888420238;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_LuaThread_00024State_lua_1yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LuaThread_00024State_lua_1yield__Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


