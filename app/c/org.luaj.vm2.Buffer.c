// CLASS: org/luaj/vm2/Buffer extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Buffer_static {s32 DEFAULT_1CAPACITY_0; JArray * NOBYTES_1;  };
struct org_luaj_vm2_Buffer_static static_var_org_luaj_vm2_Buffer = {0, NULL};


__refer arr_vmtable_org_luaj_vm2_Buffer_from_org_luaj_vm2_Buffer[] = {
    func_org_luaj_vm2_Buffer_value___Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_Buffer_setvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2,  //1
    func_org_luaj_vm2_Buffer_tostring___Lorg_luaj_vm2_LuaString_2,  //2
    func_org_luaj_vm2_Buffer_tojstring___Ljava_lang_String_2,  //3
    func_org_luaj_vm2_Buffer_toString___Ljava_lang_String_2,  //4
    func_org_luaj_vm2_Buffer_append__B_Lorg_luaj_vm2_Buffer_2,  //5
    func_org_luaj_vm2_Buffer_append__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2,  //6
    func_org_luaj_vm2_Buffer_append__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2,  //7
    func_org_luaj_vm2_Buffer_append__Ljava_lang_String_2_Lorg_luaj_vm2_Buffer_2,  //8
    func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2,  //9
    func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2,  //10
    func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_Buffer_2,  //11
    func_org_luaj_vm2_Buffer_prepend__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2,  //12
    func_org_luaj_vm2_Buffer_makeroom__II_V  //13
};
__refer arr_vmtable_org_luaj_vm2_Buffer_from_java_lang_Object[] = {
    func_org_luaj_vm2_Buffer_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_org_luaj_vm2_Buffer[] = {
    {48, 14, arr_vmtable_org_luaj_vm2_Buffer_from_org_luaj_vm2_Buffer}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_Buffer_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_Buffer__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 797, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 63 , L79644918 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 63;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 64
    stack[sp++].i = 64;
    // invokespecial org/luaj/vm2/Buffer.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Buffer__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 64 , L1107985860 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Buffer__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_Buffer__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 798, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 70 , L1652764753 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 70;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 71 , L478489615 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield org/luaj/vm2/Buffer bytes [B
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->bytes_2 = rstack[sp + 1].obj;
    ; 
    //  line no 72 , L171421438 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/Buffer length I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->length_3 = stack[sp + 1].i;
    ; 
    //  line no 73 , L1570358965 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/Buffer offset I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->offset_4 = stack[sp + 1].i;
    ; 
    //  line no 74 , L644052207 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->value_5 = rstack[sp + 1].obj;
    ; 
    //  line no 75 , L330551672 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Buffer__init___I_V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
void func_org_luaj_vm2_Buffer__init___Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 799, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 81 , L939199469 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 82 , L176342513 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/Buffer NOBYTES [B
    rstack[sp].obj =static_var_org_luaj_vm2_Buffer.NOBYTES_1;
    sp += 1;
    // putfield org/luaj/vm2/Buffer bytes [B
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->bytes_2 = rstack[sp + 1].obj;
    ; 
    //  line no 83 , L129498568 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/Buffer offset I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->offset_4 = stack[sp + 1].i;
    // putfield org/luaj/vm2/Buffer length I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->length_3 = stack[sp + 1].i;
    ; 
    //  line no 84 , L85748029 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->value_5 = rstack[sp + 1].obj;
    ; 
    //  line no 85 , L1784131088 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer__init___Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Buffer__init___Lorg_luaj_vm2_LuaValue_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Buffer_value___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 800, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 92 , L1309129055 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 92;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L682910755;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    goto L2143582219;
    L682910755:
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Buffer.tostring()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 48, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2143582219:
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

void bridge_org_luaj_vm2_Buffer_value___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_value___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_setvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 801, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 100 , L1221027335 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/Buffer NOBYTES [B
    rstack[sp].obj =static_var_org_luaj_vm2_Buffer.NOBYTES_1;
    sp += 1;
    // putfield org/luaj/vm2/Buffer bytes [B
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->bytes_2 = rstack[sp + 1].obj;
    ; 
    //  line no 101 , L1129944640 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/Buffer length I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->length_3 = stack[sp + 1].i;
    // putfield org/luaj/vm2/Buffer offset I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->offset_4 = stack[sp + 1].i;
    ; 
    //  line no 102 , L528591360 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->value_5 = rstack[sp + 1].obj;
    ; 
    //  line no 103 , L1801942731 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer_setvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_setvalue__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_Buffer_tostring___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 802, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 111 , L394771492 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 111;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial org/luaj/vm2/Buffer.realloc(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Buffer_realloc__II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 112 , L88397182 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    // invokestatic org/luaj/vm2/LuaString.valueOf([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_Buffer_tostring___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_tostring___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_Buffer_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 803, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 120 , L1404565079 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 120;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Buffer.value()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 48, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 23);
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

void bridge_org_luaj_vm2_Buffer_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_tojstring___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_Buffer_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 804, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 128 , L1513608173 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 128;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Buffer.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 48, 3);
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

void bridge_org_luaj_vm2_Buffer_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 6
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_append__B_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 805, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 136 , L1245065720 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 136;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/luaj/vm2/Buffer.makeroom(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 48, 13);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 137 , L1800976873 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Buffer length I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->length_3 = stack[sp + 1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    // arrstore s8  ,  L1800976873 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    ; 
    //  line no 138 , L253011924 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer_append__B_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_append__B_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_append__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 806, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 146 , L698741991 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 146;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaValue.strvalue()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 203);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.append(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 48, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 147 , L127702987 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer_append__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_append__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_append__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 807, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 155 , L1117871068 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 155;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 156 , L1151704483 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/Buffer.makeroom(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 48, 13);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 157 , L669284403 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.copyInto(I[BII)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,JArray *,s32,s32) = find_method(__ins->vm_table, 31, 92);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 158 , L1869039062 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Buffer length I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->length_3 = stack[sp + 1].i;
    ; 
    //  line no 159 , L659590237 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer_append__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_append__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 4
// stack: 5
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_append__Ljava_lang_String_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 808, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 169 , L1263634860 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 169;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.toCharArray()[C
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 7);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 170 , L508378341 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaString.lengthAsUtf8([C)I
    {
        sp -= 2;
        stack[sp].i = func_org_luaj_vm2_LuaString_lengthAsUtf8___3C_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 171 , L1037854997 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/Buffer.makeroom(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 48, 13);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 172 , L1884155890 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1884155890
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaString.encodeToUtf8([CI[BI)I
    {
        sp -= 5;
        stack[sp].i = func_org_luaj_vm2_LuaString_encodeToUtf8___3CI_3BI_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 173 , L932582590 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Buffer length I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->length_3 = stack[sp + 1].i;
    ; 
    //  line no 174 , L1078705341 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer_append__Ljava_lang_String_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_append__Ljava_lang_String_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 809, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 182 , L28094269 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 182;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/Buffer.value()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 48, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.concat(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 193);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.setvalue(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 48, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 810, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 190 , L464224872 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 190;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L170949260;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L170949260;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.concat(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 31, 45);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.setvalue(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 48, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1845623216;
    L170949260:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/Buffer.prepend(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 48, 12);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1845623216:
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

void bridge_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaNumber* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 811, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 200 , L1818339587 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 200;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1703696921;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.isstring()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1703696921;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaNumber.concat(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 84, 9);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.setvalue(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 48, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L69329761;
    L1703696921:
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaNumber.strvalue()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 203);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.prepend(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 48, 12);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L69329761:
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

void bridge_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_concatTo__Lorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
struct org_luaj_vm2_Buffer* func_org_luaj_vm2_Buffer_prepend__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 812, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 208 , L949767857 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 208;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 209 , L1070044969 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/Buffer.makeroom(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 48, 13);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 210 , L888557915 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 211 , L1261764601 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Buffer offset I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->offset_4 = stack[sp + 1].i;
    ; 
    //  line no 212 , L294111720 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/Buffer length I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->length_3 = stack[sp + 1].i;
    ; 
    //  line no 213 , L310016558 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->value_5 = rstack[sp + 1].obj;
    ; 
    //  line no 214 , L335580595 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer_prepend__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Buffer_prepend__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Buffer_2(runtime, ins);
}


// locals: 5
// stack: 5
// args: 2
void func_org_luaj_vm2_Buffer_makeroom__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 813, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 222 , L1472216456 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 222;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L380274260;
    ; 
    //  line no 223 , L114818087 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->value_5;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.strvalue()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 203);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 224 , L1168924571 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/Buffer value Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->value_5 = rstack[sp + 1].obj;
    ; 
    //  line no 225 , L324404955 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/LuaString m_length I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1length_47;
    sp += 0;
    // putfield org/luaj/vm2/Buffer length I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->length_3 = stack[sp + 1].i;
    ; 
    //  line no 226 , L1368173251 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield org/luaj/vm2/Buffer offset I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->offset_4 = stack[sp + 1].i;
    ; 
    //  line no 227 , L1745043985 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield org/luaj/vm2/Buffer bytes [B
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->bytes_2 = rstack[sp + 1].obj;
    ; 
    //  line no 228 , L1333041165 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/LuaString m_bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1bytes_45;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/LuaString m_offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_LuaString*)rstack[sp - 1].obj)->m_1offset_46;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 229 , L1815556070 , bytecode index = 
    goto L1482246673;
    L380274260:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    // arraylength  label  L380274260
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L708348097;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1482246673;
    L708348097:
    //  line no 230 , L708348097 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 231 , L1097324923 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L351962798;
    //  bipush 32
    stack[sp++].i = 32;
    goto L115433442;
    L351962798:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1760670079;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    goto L115433442;
    L1760670079:
    stack[sp++].i = local[3].i;
    L115433442:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 232 , L388104475 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L1470966439;
    // iconst_0
    stack[sp++].i = 0;
    goto L1530880511;
    L1470966439:
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    L1530880511:
    // invokespecial org/luaj/vm2/Buffer.realloc(II)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Buffer_realloc__II_V(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1482246673:
    //  line no 234 , L1482246673 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer_makeroom__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Buffer_makeroom__II_V(runtime, ins, para[0].i);
}


// locals: 4
// stack: 5
// args: 2
void func_org_luaj_vm2_Buffer_realloc__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 814, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 241 , L965586344 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 241;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    // arraylength  label  L965586344
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L130764844;
    ; 
    //  line no 242 , L660339123 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 243 , L462039519 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer bytes [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->bytes_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->offset_4;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Buffer length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Buffer*)rstack[sp - 1].obj)->length_3;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 244 , L1337866219 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/Buffer bytes [B
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->bytes_2 = rstack[sp + 1].obj;
    ; 
    //  line no 245 , L313082880 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/Buffer offset I
    sp -= 2;
    ((struct org_luaj_vm2_Buffer*)rstack[sp + 0].obj)->offset_4 = stack[sp + 1].i;
    L130764844:
    //  line no 247 , L130764844 , bytecode index = 
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

void bridge_org_luaj_vm2_Buffer_realloc__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Buffer_realloc__II_V(runtime, ins, para[0].i);
}


// locals: 0
// stack: 1
// args: 1
void func_org_luaj_vm2_Buffer__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 815, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 44 , L541698497 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 44;
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/Buffer NOBYTES [B
    sp -= 1;
    static_var_org_luaj_vm2_Buffer.NOBYTES_1 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_Buffer__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Buffer__clinit____V(runtime, para[0].obj);
}


